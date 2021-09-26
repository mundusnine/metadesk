// generated by W:/metadesk/examples/type_metadata/type_metadata.c:493
TypeInfoMember Circle_members[2] = {
{"r", 1, -1, &F32_type_info},
{"pos", 3, -1, &V2F32_type_info},
};
TypeInfoMember RoundedSegment_members[3] = {
{"r", 1, -1, &F32_type_info},
{"p1", 2, -1, &V2F32_type_info},
{"p2", 2, -1, &V2F32_type_info},
};
TypeInfoMember RoundedPolygon_members[3] = {
{"r", 1, -1, &F32_type_info},
{"count", 5, -1, &U32_type_info},
{"p", 1, 1, &V2F32_type_info},
};

// generated by W:/metadesk/examples/type_metadata/type_metadata.c:532
TypeInfoEnumerant Shape_members[3] = {
{"Circle", 6, 1},
{"Segment", 7, 2},
{"Polygon", 7, 3},
};

// generated by W:/metadesk/examples/type_metadata/type_metadata.c:568
TypeInfo U32_type_info = {TypeKind_Basic, "U32", 3, 0, 0, 0};
TypeInfo F32_type_info = {TypeKind_Basic, "F32", 3, 0, 0, 0};
TypeInfo V2F32_type_info = {TypeKind_Basic, "V2F32", 5, 0, 0, 0};
TypeInfo Circle_type_info = {TypeKind_Struct, "Circle", 6, 2, Circle_members, 0};
TypeInfo RoundedSegment_type_info = {TypeKind_Struct, "RoundedSegment", 14, 3, RoundedSegment_members, 0};
TypeInfo RoundedPolygon_type_info = {TypeKind_Struct, "RoundedPolygon", 14, 3, RoundedPolygon_members, 0};
TypeInfo Shape_type_info = {TypeKind_Enum, "Shape", 5, 3, Shape_members, 0};

