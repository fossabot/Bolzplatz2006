xof 0303txt 0032
template FVFData {
 <b6e70a0e-8ef9-4e83-94ad-ecc8b0c04897>
 DWORD dwFVF;
 DWORD nDWords;
 array DWORD data[nDWords];
}

template EffectInstance {
 <e331f7e4-0559-4cc2-8e99-1cec1657928f>
 STRING EffectFilename;
 [...]
}

template EffectParamFloats {
 <3014b9a0-62f5-478c-9b86-e4ac9f4e418b>
 STRING ParamName;
 DWORD nFloats;
 array FLOAT Floats[nFloats];
}

template EffectParamString {
 <1dbc4c88-94c1-46ee-9076-2c28818c9481>
 STRING ParamName;
 STRING Value;
}

template EffectParamDWord {
 <e13963bc-ae51-4c5d-b00f-cfa3a9d97ce5>
 STRING ParamName;
 DWORD Value;
}


Material tex_concrete1Sub0 {
 0.588000;0.588000;0.588000;1.000000;;
 3.200000;
 0.000000;0.000000;0.000000;;
 0.000000;0.000000;0.000000;;

 TextureFilename {
  "concrete1.png";
 }
}

Material tex_concrete2Sub1 {
 0.588000;0.588000;0.588000;1.000000;;
 3.200000;
 0.000000;0.000000;0.000000;;
 0.000000;0.000000;0.000000;;

 TextureFilename {
  "concrete2.png";
 }
}

Material tex_concrete3Sub2 {
 0.588000;0.588000;0.588000;1.000000;;
 3.200000;
 0.000000;0.000000;0.000000;;
 0.000000;0.000000;0.000000;;

 TextureFilename {
  "concrete3.png";
 }
}

Material tex_concrete4Sub3 {
 0.588000;0.588000;0.588000;1.000000;;
 3.200000;
 0.000000;0.000000;0.000000;;
 0.000000;0.000000;0.000000;;

 TextureFilename {
  "concrete4.png";
 }
}

Material tex_banisterSub4 {
 0.588000;0.588000;0.588000;1.000000;;
 3.200000;
 0.000000;0.000000;0.000000;;
 0.000000;0.000000;0.000000;;

 TextureFilename {
  "metal.png";
 }
}

Material tex_stairsSub5 {
 0.588000;0.588000;0.588000;1.000000;;
 3.200000;
 0.000000;0.000000;0.000000;;
 0.000000;0.000000;0.000000;;

 TextureFilename {
  "stairs.png";
 }
}

Material tex_concrete5Sub6 {
 0.588000;0.588000;0.588000;1.000000;;
 3.200000;
 0.000000;0.000000;0.000000;;
 0.000000;0.000000;0.000000;;

 TextureFilename {
  "concrete5.png";
 }
}

Mesh stage2_normal {
 80;
 -9.999967;0.000000;-4.999973;,
 10.000034;0.000000;-4.999973;,
 -9.999967;0.000000;5.000027;,
 10.000034;0.000000;5.000027;,
 -9.999967;6.000060;-4.999973;,
 10.000034;6.000060;-4.999973;,
 -9.999967;6.000060;-2.493052;,
 10.000034;6.000060;-2.493052;,
 -9.999967;11.000060;5.000027;,
 10.000034;11.000060;5.000027;,
 -9.999967;7.000060;-2.493052;,
 10.000034;7.000060;-2.493052;,
 10.000034;7.000061;-1.243052;,
 -9.999966;7.000061;-1.243052;,
 -9.999966;8.000060;-1.243052;,
 10.000034;8.000060;-1.243052;,
 10.000034;8.000060;0.000027;,
 -9.999967;8.000060;0.000027;,
 -9.999967;9.000060;0.000027;,
 10.000034;9.000060;0.000027;,
 10.000034;9.000060;1.250027;,
 -9.999967;9.000060;1.250027;,
 -9.999967;10.000060;1.250027;,
 10.000034;10.000060;1.250027;,
 10.000034;10.000061;2.500027;,
 -9.999967;10.000061;2.500027;,
 -9.999967;11.000061;2.500027;,
 10.000034;11.000061;2.500027;,
 10.000034;6.000060;-4.999973;,
 -9.999967;6.000060;-4.999973;,
 -9.999967;11.000060;5.000027;,
 10.000034;11.000060;5.000027;,
 10.000034;7.000060;-2.493052;,
 -9.999967;6.000060;-2.493052;,
 -9.999967;7.000060;-2.493052;,
 10.000034;6.000060;-2.493052;,
 10.000034;8.000060;-1.243052;,
 -9.999966;7.000061;-1.243052;,
 -9.999966;8.000060;-1.243052;,
 10.000034;7.000061;-1.243052;,
 10.000034;9.000060;0.000027;,
 -9.999967;8.000060;0.000027;,
 -9.999967;9.000060;0.000027;,
 10.000034;8.000060;0.000027;,
 10.000034;10.000060;1.250027;,
 -9.999967;9.000060;1.250027;,
 -9.999967;10.000060;1.250027;,
 10.000034;9.000060;1.250027;,
 10.000034;10.000061;2.500027;,
 10.000034;9.000060;1.250027;,
 10.000034;10.000060;1.250027;,
 10.000034;8.000060;0.000027;,
 10.000034;9.000060;0.000027;,
 10.000034;7.000061;-1.243052;,
 10.000034;6.000060;-2.493052;,
 10.000034;7.000060;-2.493052;,
 10.000034;0.000000;-4.999973;,
 10.000034;6.000060;-4.999973;,
 10.000034;0.000000;5.000027;,
 10.000034;8.000060;-1.243052;,
 10.000034;11.000060;5.000027;,
 10.000034;11.000061;2.500027;,
 10.000034;11.000061;2.500027;,
 -9.999967;10.000061;2.500027;,
 -9.999967;11.000061;2.500027;,
 10.000034;10.000061;2.500027;,
 -9.999967;6.000060;-2.493052;,
 -9.999966;7.000061;-1.243052;,
 -9.999967;7.000060;-2.493052;,
 -9.999967;8.000060;0.000027;,
 -9.999966;8.000060;-1.243052;,
 -9.999967;9.000060;1.250027;,
 -9.999967;9.000060;0.000027;,
 -9.999967;10.000061;2.500027;,
 -9.999967;10.000060;1.250027;,
 -9.999967;11.000060;5.000027;,
 -9.999967;11.000061;2.500027;,
 -9.999967;0.000000;5.000027;,
 -9.999967;6.000060;-4.999973;,
 -9.999967;0.000000;-4.999973;;
 50;
 3;7,4,6;,
 3;4,7,5;,
 3;12,10,13;,
 3;10,12,11;,
 3;16,14,17;,
 3;14,16,15;,
 3;20,18,21;,
 3;18,20,19;,
 3;24,22,25;,
 3;22,24,23;,
 3;9,26,8;,
 3;26,9,27;,
 3;28,0,29;,
 3;0,28,1;,
 3;3,30,2;,
 3;30,3,31;,
 3;32,33,34;,
 3;33,32,35;,
 3;36,37,38;,
 3;37,36,39;,
 3;40,41,42;,
 3;41,40,43;,
 3;44,45,46;,
 3;45,44,47;,
 3;48,49,50;,
 3;49,51,52;,
 3;53,54,55;,
 3;54,56,57;,
 3;54,58,56;,
 3;53,58,54;,
 3;59,58,53;,
 3;51,58,59;,
 3;49,58,51;,
 3;48,58,49;,
 3;48,60,58;,
 3;48,61,60;,
 3;62,63,64;,
 3;63,62,65;,
 3;66,67,68;,
 3;67,69,70;,
 3;69,71,72;,
 3;67,71,69;,
 3;71,73,74;,
 3;73,75,76;,
 3;71,75,73;,
 3;67,75,71;,
 3;66,75,67;,
 3;66,77,75;,
 3;78,77,66;,
 3;78,79,77;;

 MeshNormals  {
  18;
  0.000000;1.000000;0.000000;,
  0.000000;1.000000;-0.000000;,
  -0.000000;1.000000;-0.000000;,
  0.000000;1.000000;0.000000;,
  0.000000;1.000000;-0.000001;,
  0.000000;1.000000;0.000000;,
  -0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;1.000000;,
  -0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  1.000000;0.000000;0.000000;,
  -1.000000;0.000000;0.000001;,
  -1.000000;0.000000;-0.000001;,
  -1.000000;0.000000;0.000000;,
  -1.000000;-0.000172;0.000138;,
  -1.000000;-0.000001;0.000001;,
  -1.000000;0.000006;-0.000004;;
  50;
  3;0,0,0;,
  3;0,0,0;,
  3;1,1,1;,
  3;2,2,2;,
  3;3,3,3;,
  3;3,3,3;,
  3;3,3,3;,
  3;3,3,3;,
  3;4,4,4;,
  3;4,4,4;,
  3;5,5,5;,
  3;5,5,5;,
  3;6,6,6;,
  3;7,7,7;,
  3;8,8,8;,
  3;8,8,8;,
  3;9,9,9;,
  3;9,9,9;,
  3;10,10,10;,
  3;10,10,10;,
  3;7,7,7;,
  3;7,7,7;,
  3;7,7,7;,
  3;7,7,7;,
  3;11,11,11;,
  3;11,11,11;,
  3;11,11,11;,
  3;11,11,11;,
  3;11,11,11;,
  3;11,11,11;,
  3;11,11,11;,
  3;11,11,11;,
  3;11,11,11;,
  3;11,11,11;,
  3;11,11,11;,
  3;11,11,11;,
  3;7,7,7;,
  3;7,7,7;,
  3;12,12,12;,
  3;13,13,13;,
  3;14,14,14;,
  3;15,15,15;,
  3;14,14,14;,
  3;14,14,14;,
  3;14,14,14;,
  3;16,16,16;,
  3;17,17,17;,
  3;14,14,14;,
  3;14,14,14;,
  3;14,14,14;;
 }

 MeshMaterialList  {
  7;
  50;
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  0,
  0,
  3,
  3,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  0,
  0,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  6,
  6;
  { tex_concrete1Sub0 }
  { tex_concrete2Sub1 }
  { tex_concrete3Sub2 }
  { tex_concrete4Sub3 }
  { tex_banisterSub4 }
  { tex_stairsSub5 }
  { tex_concrete5Sub6 }
 }

 MeshTextureCoords  {
  80;
  -9.500002;8.000054;,
  10.499999;8.000054;,
  10.500000;6.000030;,
  -9.500001;6.000030;,
  -9.500002;5.499997;,
  10.499999;5.500002;,
  -9.500001;2.993076;,
  10.500000;2.993082;,
  -9.499999;-4.500002;,
  10.500002;-4.499998;,
  -9.500001;2.993076;,
  10.500000;2.993082;,
  10.500000;1.743082;,
  -9.500000;1.743077;,
  -9.500000;1.743077;,
  10.500000;1.743081;,
  10.500000;0.500002;,
  -9.500001;0.499998;,
  -9.500001;0.499998;,
  10.500000;0.500002;,
  10.500001;-0.749998;,
  -9.500000;-0.750002;,
  -9.500000;-0.750002;,
  10.500001;-0.749998;,
  10.500001;-1.999998;,
  -9.500000;-2.000002;,
  -9.500000;-2.000002;,
  10.500001;-1.999998;,
  10.499999;1.999994;,
  -9.500002;1.999994;,
  10.500000;-5.000030;,
  -9.500001;-5.000030;,
  10.500000;0.999994;,
  -9.500001;1.999995;,
  -9.500001;0.999994;,
  10.500000;1.999995;,
  10.500000;-0.000006;,
  -9.500000;0.999994;,
  -9.500000;-0.000006;,
  10.500000;0.999994;,
  10.500000;-1.000006;,
  -9.500001;-0.000006;,
  -9.500001;-1.000006;,
  10.500000;-0.000006;,
  10.500001;-2.000006;,
  -9.500000;-1.000006;,
  -9.500000;-2.000006;,
  10.500001;-1.000006;,
  0.250250;0.091317;,
  0.375125;0.182135;,
  0.375125;0.091317;,
  0.500000;0.272953;,
  0.500000;0.182135;,
  0.624184;0.363771;,
  0.749059;0.454589;,
  0.749059;0.363771;,
  0.999500;0.999501;,
  0.999501;0.454589;,
  0.000500;0.999500;,
  0.624184;0.272953;,
  0.000500;0.000500;,
  0.250250;0.000500;,
  10.500001;-3.000007;,
  -9.500000;-2.000007;,
  -9.500000;-3.000007;,
  10.500001;-2.000007;,
  0.749059;0.454589;,
  0.624184;0.363771;,
  0.749059;0.363771;,
  0.500000;0.272953;,
  0.624184;0.272953;,
  0.375125;0.182135;,
  0.500000;0.182135;,
  0.250250;0.091317;,
  0.375125;0.091317;,
  0.000500;0.000500;,
  0.250250;0.000499;,
  0.000499;0.999500;,
  0.999500;0.454588;,
  0.999500;0.999500;;
 }
}