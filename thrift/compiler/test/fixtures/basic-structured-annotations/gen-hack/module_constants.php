<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
class module_CONSTANTS implements \IThriftConstants {
  /**
   * Original thrift constant:-
   * map<string, string> MyConst
   */
  <<__Memoize>>
  public static function MyConst()[]: \ConstMap<string, string>{
    return ImmMap {
      "ENUMERATOR" => "enum",
      "CONST" => "const",
    };
  }


  public static function getAllStructuredAnnotations()[]: dict<string, dict<string, \IThriftStruct>> {
    return dict[
      'MyConst' => dict[
        'structured_annotation_inline' => structured_annotation_inline::fromShape(
          shape(
            "name" => "MyHackEnum",
          )
        ),
      ],
    ];
  }
}

