/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package com.facebook.thrift.annotation.cpp;


import com.facebook.thrift.IntRangeSet;
import java.util.Map;
import java.util.HashMap;

@SuppressWarnings({ "unused" })
public enum RefType implements com.facebook.thrift.TEnum {
  Unique(0),
  Shared(1),
  SharedMutable(2);

  private final int value;

  private RefType(int value) {
    this.value = value;
  }

  /**
   * Get the integer value of this enum value, as defined in the Thrift IDL.
   */
  public int getValue() {
    return value;
  }

  /**
   * Find a the enum type by its integer value, as defined in the Thrift IDL.
   * @return null if the value is not found.
   */
  public static RefType findByValue(int value) { 
    switch (value) {
      case 0:
        return Unique;
      case 1:
        return Shared;
      case 2:
        return SharedMutable;
      default:
        return null;
    }
  }
}
