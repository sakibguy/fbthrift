/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.exceptions;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldMetaData;
import org.apache.thrift.meta_data.FieldValueMetaData;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct("Banal")
public final class Banal extends java.lang.RuntimeException implements com.facebook.thrift.payload.ThriftSerializable {
    private static final long serialVersionUID = 1L;


    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();

    private static final TStruct STRUCT_DESC = new TStruct("Banal");

    @ThriftConstructor
    public Banal(
    ) {
    }
    
    
    
    public static class Builder {
    
    
    public Builder() { }
        public Builder(Banal other) {
        }
    
        @ThriftConstructor
        public Banal build() {
            Banal result = new Banal (
            );
            return result;
        }
    }
    

    
    public static com.facebook.thrift.payload.Reader<Banal> asReader() {
      return Banal::read0;
    }
    
    public static Banal read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(Banal.NAMES_TO_IDS, Banal.FIELD_METADATA);
      Banal.Builder builder = new Banal.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
