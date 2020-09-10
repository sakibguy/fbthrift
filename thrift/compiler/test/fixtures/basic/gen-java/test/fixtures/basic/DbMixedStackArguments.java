/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.basic;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class DbMixedStackArguments {

  public interface Iface {

    public byte[] getDataByKey0(String key) throws TException;

    public byte[] getDataByKey1(String key) throws TException;

  }

  public interface AsyncIface {

    public void getDataByKey0(String key, AsyncMethodCallback resultHandler) throws TException;

    public void getDataByKey1(String key, AsyncMethodCallback resultHandler) throws TException;

  }

  public static class Client extends EventHandlerBase implements Iface, TClientIf {
    public Client(TProtocol prot)
    {
      this(prot, prot);
    }

    public Client(TProtocol iprot, TProtocol oprot)
    {
      iprot_ = iprot;
      oprot_ = oprot;
    }

    protected TProtocol iprot_;
    protected TProtocol oprot_;

    protected int seqid_;

    @Override
    public TProtocol getInputProtocol()
    {
      return this.iprot_;
    }

    @Override
    public TProtocol getOutputProtocol()
    {
      return this.oprot_;
    }

    public byte[] getDataByKey0(String key) throws TException
    {
      ContextStack ctx = getContextStack("DbMixedStackArguments.getDataByKey0", null);
      this.setContextStack(ctx);
      send_getDataByKey0(key);
      return recv_getDataByKey0();
    }

    public void send_getDataByKey0(String key) throws TException
    {
      ContextStack ctx = this.getContextStack();
      super.preWrite(ctx, "DbMixedStackArguments.getDataByKey0", null);
      oprot_.writeMessageBegin(new TMessage("getDataByKey0", TMessageType.CALL, seqid_));
      getDataByKey0_args args = new getDataByKey0_args();
      args.key = key;
      args.write(oprot_);
      oprot_.writeMessageEnd();
      oprot_.getTransport().flush();
      super.postWrite(ctx, "DbMixedStackArguments.getDataByKey0", args);
      return;
    }

    public byte[] recv_getDataByKey0() throws TException
    {
      ContextStack ctx = super.getContextStack();
      long bytes;
      TMessageType mtype;
      super.preRead(ctx, "DbMixedStackArguments.getDataByKey0");
      TMessage msg = iprot_.readMessageBegin();
      if (msg.type == TMessageType.EXCEPTION) {
        TApplicationException x = TApplicationException.read(iprot_);
        iprot_.readMessageEnd();
        throw x;
      }
      getDataByKey0_result result = new getDataByKey0_result();
      result.read(iprot_);
      iprot_.readMessageEnd();
      super.postRead(ctx, "DbMixedStackArguments.getDataByKey0", result);

      if (result.isSetSuccess()) {
        return result.success;
      }
      throw new TApplicationException(TApplicationException.MISSING_RESULT, "getDataByKey0 failed: unknown result");
    }

    public byte[] getDataByKey1(String key) throws TException
    {
      ContextStack ctx = getContextStack("DbMixedStackArguments.getDataByKey1", null);
      this.setContextStack(ctx);
      send_getDataByKey1(key);
      return recv_getDataByKey1();
    }

    public void send_getDataByKey1(String key) throws TException
    {
      ContextStack ctx = this.getContextStack();
      super.preWrite(ctx, "DbMixedStackArguments.getDataByKey1", null);
      oprot_.writeMessageBegin(new TMessage("getDataByKey1", TMessageType.CALL, seqid_));
      getDataByKey1_args args = new getDataByKey1_args();
      args.key = key;
      args.write(oprot_);
      oprot_.writeMessageEnd();
      oprot_.getTransport().flush();
      super.postWrite(ctx, "DbMixedStackArguments.getDataByKey1", args);
      return;
    }

    public byte[] recv_getDataByKey1() throws TException
    {
      ContextStack ctx = super.getContextStack();
      long bytes;
      TMessageType mtype;
      super.preRead(ctx, "DbMixedStackArguments.getDataByKey1");
      TMessage msg = iprot_.readMessageBegin();
      if (msg.type == TMessageType.EXCEPTION) {
        TApplicationException x = TApplicationException.read(iprot_);
        iprot_.readMessageEnd();
        throw x;
      }
      getDataByKey1_result result = new getDataByKey1_result();
      result.read(iprot_);
      iprot_.readMessageEnd();
      super.postRead(ctx, "DbMixedStackArguments.getDataByKey1", result);

      if (result.isSetSuccess()) {
        return result.success;
      }
      throw new TApplicationException(TApplicationException.MISSING_RESULT, "getDataByKey1 failed: unknown result");
    }

  }
  public static class AsyncClient extends TAsyncClient implements AsyncIface {
    public static class Factory implements TAsyncClientFactory<AsyncClient> {
      private TAsyncClientManager clientManager;
      private TProtocolFactory protocolFactory;
      public Factory(TAsyncClientManager clientManager, TProtocolFactory protocolFactory) {
        this.clientManager = clientManager;
        this.protocolFactory = protocolFactory;
      }
      public AsyncClient getAsyncClient(TNonblockingTransport transport) {
        return new AsyncClient(protocolFactory, clientManager, transport);
      }
    }

    public AsyncClient(TProtocolFactory protocolFactory, TAsyncClientManager clientManager, TNonblockingTransport transport) {
      super(protocolFactory, clientManager, transport);
    }

    public void getDataByKey0(String key, AsyncMethodCallback resultHandler41) throws TException {
      checkReady();
      getDataByKey0_call method_call = new getDataByKey0_call(key, resultHandler41, this, ___protocolFactory, ___transport);
      this.___currentMethod = method_call;
      ___manager.call(method_call);
    }

    public static class getDataByKey0_call extends TAsyncMethodCall {
      private String key;
      public getDataByKey0_call(String key, AsyncMethodCallback resultHandler42, TAsyncClient client38, TProtocolFactory protocolFactory39, TNonblockingTransport transport40) throws TException {
        super(client38, protocolFactory39, transport40, resultHandler42, false);
        this.key = key;
      }

      public void write_args(TProtocol prot) throws TException {
        prot.writeMessageBegin(new TMessage("getDataByKey0", TMessageType.CALL, 0));
        getDataByKey0_args args = new getDataByKey0_args();
        args.setKey(key);
        args.write(prot);
        prot.writeMessageEnd();
      }

      public byte[] getResult() throws TException {
        if (getState() != State.RESPONSE_READ) {
          throw new IllegalStateException("Method call not finished!");
        }
        TMemoryInputTransport memoryTransport = new TMemoryInputTransport(getFrameBuffer().array());
        TProtocol prot = super.client.getProtocolFactory().getProtocol(memoryTransport);
        return (new Client(prot)).recv_getDataByKey0();
      }
    }

    public void getDataByKey1(String key, AsyncMethodCallback resultHandler46) throws TException {
      checkReady();
      getDataByKey1_call method_call = new getDataByKey1_call(key, resultHandler46, this, ___protocolFactory, ___transport);
      this.___currentMethod = method_call;
      ___manager.call(method_call);
    }

    public static class getDataByKey1_call extends TAsyncMethodCall {
      private String key;
      public getDataByKey1_call(String key, AsyncMethodCallback resultHandler47, TAsyncClient client43, TProtocolFactory protocolFactory44, TNonblockingTransport transport45) throws TException {
        super(client43, protocolFactory44, transport45, resultHandler47, false);
        this.key = key;
      }

      public void write_args(TProtocol prot) throws TException {
        prot.writeMessageBegin(new TMessage("getDataByKey1", TMessageType.CALL, 0));
        getDataByKey1_args args = new getDataByKey1_args();
        args.setKey(key);
        args.write(prot);
        prot.writeMessageEnd();
      }

      public byte[] getResult() throws TException {
        if (getState() != State.RESPONSE_READ) {
          throw new IllegalStateException("Method call not finished!");
        }
        TMemoryInputTransport memoryTransport = new TMemoryInputTransport(getFrameBuffer().array());
        TProtocol prot = super.client.getProtocolFactory().getProtocol(memoryTransport);
        return (new Client(prot)).recv_getDataByKey1();
      }
    }

  }

  public static class Processor implements TProcessor {
    private static final Logger LOGGER = LoggerFactory.getLogger(Processor.class.getName());
    public Processor(Iface iface)
    {
      iface_ = iface;
      event_handler_ = new TProcessorEventHandler(); // Empty handler
      processMap_.put("getDataByKey0", new getDataByKey0());
      processMap_.put("getDataByKey1", new getDataByKey1());
    }

    protected static interface ProcessFunction {
      public void process(int seqid, TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException;
    }

    public void setEventHandler(TProcessorEventHandler handler) {
      this.event_handler_ = handler;
    }

    private Iface iface_;
    protected TProcessorEventHandler event_handler_;
    protected final HashMap<String,ProcessFunction> processMap_ = new HashMap<String,ProcessFunction>();

    public boolean process(TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException
    {
      TMessage msg = iprot.readMessageBegin();
      ProcessFunction fn = processMap_.get(msg.name);
      if (fn == null) {
        TProtocolUtil.skip(iprot, TType.STRUCT);
        iprot.readMessageEnd();
        TApplicationException x = new TApplicationException(TApplicationException.UNKNOWN_METHOD, "Invalid method name: '"+msg.name+"'");
        oprot.writeMessageBegin(new TMessage(msg.name, TMessageType.EXCEPTION, msg.seqid));
        x.write(oprot);
        oprot.writeMessageEnd();
        oprot.getTransport().flush();
        return true;
      }
      fn.process(msg.seqid, iprot, oprot, server_ctx);
      return true;
    }

    private class getDataByKey0 implements ProcessFunction {
      public void process(int seqid, TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException
      {
        Object handler_ctx = event_handler_.getContext("DbMixedStackArguments.getDataByKey0", server_ctx);
        getDataByKey0_args args = new getDataByKey0_args();
        event_handler_.preRead(handler_ctx, "DbMixedStackArguments.getDataByKey0");
        args.read(iprot);
        iprot.readMessageEnd();
        event_handler_.postRead(handler_ctx, "DbMixedStackArguments.getDataByKey0", args);
        getDataByKey0_result result = new getDataByKey0_result();
        result.success = iface_.getDataByKey0(args.key);
        event_handler_.preWrite(handler_ctx, "DbMixedStackArguments.getDataByKey0", result);
        oprot.writeMessageBegin(new TMessage("getDataByKey0", TMessageType.REPLY, seqid));
        result.write(oprot);
        oprot.writeMessageEnd();
        oprot.getTransport().flush();
        event_handler_.postWrite(handler_ctx, "DbMixedStackArguments.getDataByKey0", result);
      }

    }

    private class getDataByKey1 implements ProcessFunction {
      public void process(int seqid, TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException
      {
        Object handler_ctx = event_handler_.getContext("DbMixedStackArguments.getDataByKey1", server_ctx);
        getDataByKey1_args args = new getDataByKey1_args();
        event_handler_.preRead(handler_ctx, "DbMixedStackArguments.getDataByKey1");
        args.read(iprot);
        iprot.readMessageEnd();
        event_handler_.postRead(handler_ctx, "DbMixedStackArguments.getDataByKey1", args);
        getDataByKey1_result result = new getDataByKey1_result();
        result.success = iface_.getDataByKey1(args.key);
        event_handler_.preWrite(handler_ctx, "DbMixedStackArguments.getDataByKey1", result);
        oprot.writeMessageBegin(new TMessage("getDataByKey1", TMessageType.REPLY, seqid));
        result.write(oprot);
        oprot.writeMessageEnd();
        oprot.getTransport().flush();
        event_handler_.postWrite(handler_ctx, "DbMixedStackArguments.getDataByKey1", result);
      }

    }

  }

  public static class getDataByKey0_args implements TBase, java.io.Serializable, Cloneable, Comparable<getDataByKey0_args>   {
    private static final TStruct STRUCT_DESC = new TStruct("getDataByKey0_args");
    private static final TField KEY_FIELD_DESC = new TField("key", TType.STRING, (short)1);

    public String key;
    public static final int KEY = 1;

    // isset id assignments

    public static final Map<Integer, FieldMetaData> metaDataMap;

    static {
      Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
      tmpMetaDataMap.put(KEY, new FieldMetaData("key", TFieldRequirementType.DEFAULT, 
          new FieldValueMetaData(TType.STRING)));
      metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
    }

    static {
      FieldMetaData.addStructMetaDataMap(getDataByKey0_args.class, metaDataMap);
    }

    public getDataByKey0_args() {
    }

    public getDataByKey0_args(
        String key) {
      this();
      this.key = key;
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public getDataByKey0_args(getDataByKey0_args other) {
      if (other.isSetKey()) {
        this.key = TBaseHelper.deepCopy(other.key);
      }
    }

    public getDataByKey0_args deepCopy() {
      return new getDataByKey0_args(this);
    }

    public String getKey() {
      return this.key;
    }

    public getDataByKey0_args setKey(String key) {
      this.key = key;
      return this;
    }

    public void unsetKey() {
      this.key = null;
    }

    // Returns true if field key is set (has been assigned a value) and false otherwise
    public boolean isSetKey() {
      return this.key != null;
    }

    public void setKeyIsSet(boolean __value) {
      if (!__value) {
        this.key = null;
      }
    }

    public void setFieldValue(int fieldID, Object __value) {
      switch (fieldID) {
      case KEY:
        if (__value == null) {
          unsetKey();
        } else {
          setKey((String)__value);
        }
        break;

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    public Object getFieldValue(int fieldID) {
      switch (fieldID) {
      case KEY:
        return getKey();

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    @Override
    public boolean equals(Object _that) {
      if (_that == null)
        return false;
      if (this == _that)
        return true;
      if (!(_that instanceof getDataByKey0_args))
        return false;
      getDataByKey0_args that = (getDataByKey0_args)_that;

      if (!TBaseHelper.equalsNobinary(this.isSetKey(), that.isSetKey(), this.key, that.key)) { return false; }

      return true;
    }

    @Override
    public int hashCode() {
      return Arrays.deepHashCode(new Object[] {key});
    }

    @Override
    public int compareTo(getDataByKey0_args other) {
      if (other == null) {
        // See java.lang.Comparable docs
        throw new NullPointerException();
      }

      if (other == this) {
        return 0;
      }
      int lastComparison = 0;

      lastComparison = Boolean.valueOf(isSetKey()).compareTo(other.isSetKey());
      if (lastComparison != 0) {
        return lastComparison;
      }
      lastComparison = TBaseHelper.compareTo(key, other.key);
      if (lastComparison != 0) { 
        return lastComparison;
      }
      return 0;
    }

    public void read(TProtocol iprot) throws TException {
      TField __field;
      iprot.readStructBegin(metaDataMap);
      while (true)
      {
        __field = iprot.readFieldBegin();
        if (__field.type == TType.STOP) { 
          break;
        }
        switch (__field.id)
        {
          case KEY:
            if (__field.type == TType.STRING) {
              this.key = iprot.readString();
            } else { 
              TProtocolUtil.skip(iprot, __field.type);
            }
            break;
          default:
            TProtocolUtil.skip(iprot, __field.type);
            break;
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();


      // check for required fields of primitive type, which can't be checked in the validate method
      validate();
    }

    public void write(TProtocol oprot) throws TException {
      validate();

      oprot.writeStructBegin(STRUCT_DESC);
      if (this.key != null) {
        oprot.writeFieldBegin(KEY_FIELD_DESC);
        oprot.writeString(this.key);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    @Override
    public String toString() {
      return toString(1, true);
    }

    @Override
    public String toString(int indent, boolean prettyPrint) {
      String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
      String newLine = prettyPrint ? "\n" : "";
      String space = prettyPrint ? " " : "";
      StringBuilder sb = new StringBuilder("getDataByKey0_args");
      sb.append(space);
      sb.append("(");
      sb.append(newLine);
      boolean first = true;

      sb.append(indentStr);
      sb.append("key");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getKey() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getKey(), indent + 1, prettyPrint));
      }
      first = false;
      sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
      sb.append(")");
      return sb.toString();
    }

    public void validate() throws TException {
      // check for required fields
    }

  }

  public static class getDataByKey0_result implements TBase, java.io.Serializable, Cloneable, Comparable<getDataByKey0_result>   {
    private static final TStruct STRUCT_DESC = new TStruct("getDataByKey0_result");
    private static final TField SUCCESS_FIELD_DESC = new TField("success", TType.STRING, (short)0);

    public byte[] success;
    public static final int SUCCESS = 0;

    // isset id assignments

    public static final Map<Integer, FieldMetaData> metaDataMap;

    static {
      Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
      tmpMetaDataMap.put(SUCCESS, new FieldMetaData("success", TFieldRequirementType.DEFAULT, 
          new FieldValueMetaData(TType.STRING)));
      metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
    }

    static {
      FieldMetaData.addStructMetaDataMap(getDataByKey0_result.class, metaDataMap);
    }

    public getDataByKey0_result() {
    }

    public getDataByKey0_result(
        byte[] success) {
      this();
      this.success = success;
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public getDataByKey0_result(getDataByKey0_result other) {
      if (other.isSetSuccess()) {
        this.success = TBaseHelper.deepCopy(other.success);
      }
    }

    public getDataByKey0_result deepCopy() {
      return new getDataByKey0_result(this);
    }

    public byte[] getSuccess() {
      return this.success;
    }

    public getDataByKey0_result setSuccess(byte[] success) {
      this.success = success;
      return this;
    }

    public void unsetSuccess() {
      this.success = null;
    }

    // Returns true if field success is set (has been assigned a value) and false otherwise
    public boolean isSetSuccess() {
      return this.success != null;
    }

    public void setSuccessIsSet(boolean __value) {
      if (!__value) {
        this.success = null;
      }
    }

    public void setFieldValue(int fieldID, Object __value) {
      switch (fieldID) {
      case SUCCESS:
        if (__value == null) {
          unsetSuccess();
        } else {
          setSuccess((byte[])__value);
        }
        break;

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    public Object getFieldValue(int fieldID) {
      switch (fieldID) {
      case SUCCESS:
        return getSuccess();

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    @Override
    public boolean equals(Object _that) {
      if (_that == null)
        return false;
      if (this == _that)
        return true;
      if (!(_that instanceof getDataByKey0_result))
        return false;
      getDataByKey0_result that = (getDataByKey0_result)_that;

      if (!TBaseHelper.equalsSlow(this.isSetSuccess(), that.isSetSuccess(), this.success, that.success)) { return false; }

      return true;
    }

    @Override
    public int hashCode() {
      return Arrays.deepHashCode(new Object[] {success});
    }

    @Override
    public int compareTo(getDataByKey0_result other) {
      if (other == null) {
        // See java.lang.Comparable docs
        throw new NullPointerException();
      }

      if (other == this) {
        return 0;
      }
      int lastComparison = 0;

      lastComparison = Boolean.valueOf(isSetSuccess()).compareTo(other.isSetSuccess());
      if (lastComparison != 0) {
        return lastComparison;
      }
      lastComparison = TBaseHelper.compareTo(success, other.success);
      if (lastComparison != 0) { 
        return lastComparison;
      }
      return 0;
    }

    public void read(TProtocol iprot) throws TException {
      TField __field;
      iprot.readStructBegin(metaDataMap);
      while (true)
      {
        __field = iprot.readFieldBegin();
        if (__field.type == TType.STOP) { 
          break;
        }
        switch (__field.id)
        {
          case SUCCESS:
            if (__field.type == TType.STRING) {
              this.success = iprot.readBinary();
            } else { 
              TProtocolUtil.skip(iprot, __field.type);
            }
            break;
          default:
            TProtocolUtil.skip(iprot, __field.type);
            break;
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();


      // check for required fields of primitive type, which can't be checked in the validate method
      validate();
    }

    public void write(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);

      if (this.isSetSuccess()) {
        oprot.writeFieldBegin(SUCCESS_FIELD_DESC);
        oprot.writeBinary(this.success);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    @Override
    public String toString() {
      return toString(1, true);
    }

    @Override
    public String toString(int indent, boolean prettyPrint) {
      String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
      String newLine = prettyPrint ? "\n" : "";
      String space = prettyPrint ? " " : "";
      StringBuilder sb = new StringBuilder("getDataByKey0_result");
      sb.append(space);
      sb.append("(");
      sb.append(newLine);
      boolean first = true;

      sb.append(indentStr);
      sb.append("success");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getSuccess() == null) {
        sb.append("null");
      } else {
          int __success_size = Math.min(this.getSuccess().length, 128);
          for (int i = 0; i < __success_size; i++) {
            if (i != 0) sb.append(" ");
            sb.append(Integer.toHexString(this.getSuccess()[i]).length() > 1 ? Integer.toHexString(this.getSuccess()[i]).substring(Integer.toHexString(this.getSuccess()[i]).length() - 2).toUpperCase() : "0" + Integer.toHexString(this.getSuccess()[i]).toUpperCase());
          }
          if (this.getSuccess().length > 128) sb.append(" ...");
      }
      first = false;
      sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
      sb.append(")");
      return sb.toString();
    }

    public void validate() throws TException {
      // check for required fields
    }

  }

  public static class getDataByKey1_args implements TBase, java.io.Serializable, Cloneable, Comparable<getDataByKey1_args>   {
    private static final TStruct STRUCT_DESC = new TStruct("getDataByKey1_args");
    private static final TField KEY_FIELD_DESC = new TField("key", TType.STRING, (short)1);

    public String key;
    public static final int KEY = 1;

    // isset id assignments

    public static final Map<Integer, FieldMetaData> metaDataMap;

    static {
      Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
      tmpMetaDataMap.put(KEY, new FieldMetaData("key", TFieldRequirementType.DEFAULT, 
          new FieldValueMetaData(TType.STRING)));
      metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
    }

    static {
      FieldMetaData.addStructMetaDataMap(getDataByKey1_args.class, metaDataMap);
    }

    public getDataByKey1_args() {
    }

    public getDataByKey1_args(
        String key) {
      this();
      this.key = key;
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public getDataByKey1_args(getDataByKey1_args other) {
      if (other.isSetKey()) {
        this.key = TBaseHelper.deepCopy(other.key);
      }
    }

    public getDataByKey1_args deepCopy() {
      return new getDataByKey1_args(this);
    }

    public String getKey() {
      return this.key;
    }

    public getDataByKey1_args setKey(String key) {
      this.key = key;
      return this;
    }

    public void unsetKey() {
      this.key = null;
    }

    // Returns true if field key is set (has been assigned a value) and false otherwise
    public boolean isSetKey() {
      return this.key != null;
    }

    public void setKeyIsSet(boolean __value) {
      if (!__value) {
        this.key = null;
      }
    }

    public void setFieldValue(int fieldID, Object __value) {
      switch (fieldID) {
      case KEY:
        if (__value == null) {
          unsetKey();
        } else {
          setKey((String)__value);
        }
        break;

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    public Object getFieldValue(int fieldID) {
      switch (fieldID) {
      case KEY:
        return getKey();

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    @Override
    public boolean equals(Object _that) {
      if (_that == null)
        return false;
      if (this == _that)
        return true;
      if (!(_that instanceof getDataByKey1_args))
        return false;
      getDataByKey1_args that = (getDataByKey1_args)_that;

      if (!TBaseHelper.equalsNobinary(this.isSetKey(), that.isSetKey(), this.key, that.key)) { return false; }

      return true;
    }

    @Override
    public int hashCode() {
      return Arrays.deepHashCode(new Object[] {key});
    }

    @Override
    public int compareTo(getDataByKey1_args other) {
      if (other == null) {
        // See java.lang.Comparable docs
        throw new NullPointerException();
      }

      if (other == this) {
        return 0;
      }
      int lastComparison = 0;

      lastComparison = Boolean.valueOf(isSetKey()).compareTo(other.isSetKey());
      if (lastComparison != 0) {
        return lastComparison;
      }
      lastComparison = TBaseHelper.compareTo(key, other.key);
      if (lastComparison != 0) { 
        return lastComparison;
      }
      return 0;
    }

    public void read(TProtocol iprot) throws TException {
      TField __field;
      iprot.readStructBegin(metaDataMap);
      while (true)
      {
        __field = iprot.readFieldBegin();
        if (__field.type == TType.STOP) { 
          break;
        }
        switch (__field.id)
        {
          case KEY:
            if (__field.type == TType.STRING) {
              this.key = iprot.readString();
            } else { 
              TProtocolUtil.skip(iprot, __field.type);
            }
            break;
          default:
            TProtocolUtil.skip(iprot, __field.type);
            break;
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();


      // check for required fields of primitive type, which can't be checked in the validate method
      validate();
    }

    public void write(TProtocol oprot) throws TException {
      validate();

      oprot.writeStructBegin(STRUCT_DESC);
      if (this.key != null) {
        oprot.writeFieldBegin(KEY_FIELD_DESC);
        oprot.writeString(this.key);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    @Override
    public String toString() {
      return toString(1, true);
    }

    @Override
    public String toString(int indent, boolean prettyPrint) {
      String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
      String newLine = prettyPrint ? "\n" : "";
      String space = prettyPrint ? " " : "";
      StringBuilder sb = new StringBuilder("getDataByKey1_args");
      sb.append(space);
      sb.append("(");
      sb.append(newLine);
      boolean first = true;

      sb.append(indentStr);
      sb.append("key");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getKey() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getKey(), indent + 1, prettyPrint));
      }
      first = false;
      sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
      sb.append(")");
      return sb.toString();
    }

    public void validate() throws TException {
      // check for required fields
    }

  }

  public static class getDataByKey1_result implements TBase, java.io.Serializable, Cloneable, Comparable<getDataByKey1_result>   {
    private static final TStruct STRUCT_DESC = new TStruct("getDataByKey1_result");
    private static final TField SUCCESS_FIELD_DESC = new TField("success", TType.STRING, (short)0);

    public byte[] success;
    public static final int SUCCESS = 0;

    // isset id assignments

    public static final Map<Integer, FieldMetaData> metaDataMap;

    static {
      Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
      tmpMetaDataMap.put(SUCCESS, new FieldMetaData("success", TFieldRequirementType.DEFAULT, 
          new FieldValueMetaData(TType.STRING)));
      metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
    }

    static {
      FieldMetaData.addStructMetaDataMap(getDataByKey1_result.class, metaDataMap);
    }

    public getDataByKey1_result() {
    }

    public getDataByKey1_result(
        byte[] success) {
      this();
      this.success = success;
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public getDataByKey1_result(getDataByKey1_result other) {
      if (other.isSetSuccess()) {
        this.success = TBaseHelper.deepCopy(other.success);
      }
    }

    public getDataByKey1_result deepCopy() {
      return new getDataByKey1_result(this);
    }

    public byte[] getSuccess() {
      return this.success;
    }

    public getDataByKey1_result setSuccess(byte[] success) {
      this.success = success;
      return this;
    }

    public void unsetSuccess() {
      this.success = null;
    }

    // Returns true if field success is set (has been assigned a value) and false otherwise
    public boolean isSetSuccess() {
      return this.success != null;
    }

    public void setSuccessIsSet(boolean __value) {
      if (!__value) {
        this.success = null;
      }
    }

    public void setFieldValue(int fieldID, Object __value) {
      switch (fieldID) {
      case SUCCESS:
        if (__value == null) {
          unsetSuccess();
        } else {
          setSuccess((byte[])__value);
        }
        break;

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    public Object getFieldValue(int fieldID) {
      switch (fieldID) {
      case SUCCESS:
        return getSuccess();

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    @Override
    public boolean equals(Object _that) {
      if (_that == null)
        return false;
      if (this == _that)
        return true;
      if (!(_that instanceof getDataByKey1_result))
        return false;
      getDataByKey1_result that = (getDataByKey1_result)_that;

      if (!TBaseHelper.equalsSlow(this.isSetSuccess(), that.isSetSuccess(), this.success, that.success)) { return false; }

      return true;
    }

    @Override
    public int hashCode() {
      return Arrays.deepHashCode(new Object[] {success});
    }

    @Override
    public int compareTo(getDataByKey1_result other) {
      if (other == null) {
        // See java.lang.Comparable docs
        throw new NullPointerException();
      }

      if (other == this) {
        return 0;
      }
      int lastComparison = 0;

      lastComparison = Boolean.valueOf(isSetSuccess()).compareTo(other.isSetSuccess());
      if (lastComparison != 0) {
        return lastComparison;
      }
      lastComparison = TBaseHelper.compareTo(success, other.success);
      if (lastComparison != 0) { 
        return lastComparison;
      }
      return 0;
    }

    public void read(TProtocol iprot) throws TException {
      TField __field;
      iprot.readStructBegin(metaDataMap);
      while (true)
      {
        __field = iprot.readFieldBegin();
        if (__field.type == TType.STOP) { 
          break;
        }
        switch (__field.id)
        {
          case SUCCESS:
            if (__field.type == TType.STRING) {
              this.success = iprot.readBinary();
            } else { 
              TProtocolUtil.skip(iprot, __field.type);
            }
            break;
          default:
            TProtocolUtil.skip(iprot, __field.type);
            break;
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();


      // check for required fields of primitive type, which can't be checked in the validate method
      validate();
    }

    public void write(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);

      if (this.isSetSuccess()) {
        oprot.writeFieldBegin(SUCCESS_FIELD_DESC);
        oprot.writeBinary(this.success);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    @Override
    public String toString() {
      return toString(1, true);
    }

    @Override
    public String toString(int indent, boolean prettyPrint) {
      String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
      String newLine = prettyPrint ? "\n" : "";
      String space = prettyPrint ? " " : "";
      StringBuilder sb = new StringBuilder("getDataByKey1_result");
      sb.append(space);
      sb.append("(");
      sb.append(newLine);
      boolean first = true;

      sb.append(indentStr);
      sb.append("success");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getSuccess() == null) {
        sb.append("null");
      } else {
          int __success_size = Math.min(this.getSuccess().length, 128);
          for (int i = 0; i < __success_size; i++) {
            if (i != 0) sb.append(" ");
            sb.append(Integer.toHexString(this.getSuccess()[i]).length() > 1 ? Integer.toHexString(this.getSuccess()[i]).substring(Integer.toHexString(this.getSuccess()[i]).length() - 2).toUpperCase() : "0" + Integer.toHexString(this.getSuccess()[i]).toUpperCase());
          }
          if (this.getSuccess().length > 128) sb.append(" ...");
      }
      first = false;
      sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
      sb.append(")");
      return sb.toString();
    }

    public void validate() throws TException {
      // check for required fields
    }

  }

}