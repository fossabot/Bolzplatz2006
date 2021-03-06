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


Material PDX01_-_Default {
 1.000000;1.000000;1.000000;1.000000;;
 3.200000;
 0.000000;0.000000;0.000000;;
 0.000000;0.000000;0.000000;;

 TextureFilename {
  "floodlight3_light.png";
 }
}

Mesh Plane01 {
 4;
 15.668090;78.198555;8.688762;,
 5.668090;78.198555;8.688763;,
 15.668090;87.805305;11.465498;,
 5.668090;87.805305;11.465499;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane02 {
 4;
 10.495212;78.198555;8.035659;,
 0.495212;78.198555;8.035660;,
 10.495213;87.805305;10.812395;,
 0.495212;87.805305;10.812396;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane03 {
 4;
 4.954645;78.198555;8.688763;,
 -5.045355;78.198555;8.688764;,
 4.954645;87.805305;11.465499;,
 -5.045355;87.805305;11.465500;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane04 {
 4;
 -0.095836;78.198555;8.035660;,
 -10.095837;78.198555;8.035661;,
 -0.095836;87.805305;10.812396;,
 -10.095836;87.805305;10.812397;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane05 {
 4;
 -5.799932;78.198555;8.688764;,
 -15.799932;78.198555;8.688765;,
 -5.799932;87.805305;11.465500;,
 -15.799932;87.805305;11.465501;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane06 {
 4;
 4.954645;73.122375;7.483104;,
 -5.045355;73.122375;7.483105;,
 4.954645;82.729126;10.259840;,
 -5.045355;82.729126;10.259841;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane07 {
 4;
 -0.095836;73.122375;6.830001;,
 -10.095837;73.122375;6.830002;,
 -0.095836;82.729126;9.606737;,
 -10.095836;82.729126;9.606738;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane08 {
 4;
 -5.799932;73.122375;7.483105;,
 -15.799932;73.122375;7.483106;,
 -5.799932;82.729126;10.259841;,
 -15.799932;82.729126;10.259842;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane09 {
 4;
 10.495212;73.122375;6.830000;,
 0.495212;73.122375;6.830001;,
 10.495213;82.729126;9.606736;,
 0.495212;82.729126;9.606737;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane10 {
 4;
 4.954644;67.931808;5.616958;,
 -5.045356;67.931808;5.616959;,
 4.954645;77.538559;8.393694;,
 -5.045355;77.538559;8.393695;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane11 {
 4;
 -0.095836;67.931808;4.963855;,
 -10.095837;67.931808;4.963856;,
 -0.095836;77.538559;7.740591;,
 -10.095836;77.538559;7.740592;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane12 {
 4;
 -5.799932;67.931808;5.616959;,
 -15.799932;67.931808;5.616960;,
 -5.799932;77.538559;8.393695;,
 -15.799932;77.538559;8.393696;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane13 {
 4;
 10.495212;67.931808;4.963854;,
 0.495212;67.931808;4.963855;,
 10.495213;77.538559;7.740590;,
 0.495212;77.538559;7.740591;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane14 {
 4;
 4.954644;63.688946;4.020966;,
 -5.045356;63.688946;4.020967;,
 4.954645;73.295700;6.797701;,
 -5.045355;73.295700;6.797703;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane15 {
 4;
 -0.095836;63.688946;3.367862;,
 -10.095837;63.688946;3.367864;,
 -0.095836;73.295700;6.144598;,
 -10.095836;73.295700;6.144600;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane16 {
 4;
 -5.799932;63.688946;4.020967;,
 -15.799932;63.688946;4.020968;,
 -5.799932;73.295700;6.797702;,
 -15.799932;73.295700;6.797704;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane17 {
 4;
 10.495212;63.688946;3.367862;,
 0.495212;63.688946;3.367863;,
 10.495213;73.295700;6.144598;,
 0.495212;73.295700;6.144599;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane18 {
 4;
 4.954644;58.930565;2.296314;,
 -5.045356;58.930565;2.296316;,
 4.954645;68.537323;5.073050;,
 -5.045355;68.537323;5.073052;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane19 {
 4;
 -0.095836;58.930565;1.643212;,
 -10.095837;58.930565;1.643213;,
 -0.095836;68.537323;4.419948;,
 -10.095836;68.537323;4.419949;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane20 {
 4;
 -5.799932;58.930565;2.296315;,
 -15.799932;58.930565;2.296317;,
 -5.799932;68.537323;5.073051;,
 -15.799932;68.537323;5.073053;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane21 {
 4;
 10.495212;58.930565;1.643211;,
 0.495212;58.930565;1.643212;,
 10.495213;68.537323;4.419947;,
 0.495212;68.537323;4.419948;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane22 {
 4;
 15.598044;73.122375;7.483104;,
 5.598044;73.122375;7.483105;,
 15.598044;82.729126;10.259840;,
 5.598044;82.729126;10.259841;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane23 {
 4;
 15.440241;67.931808;5.616958;,
 5.440241;67.931808;5.616959;,
 15.440241;77.538559;8.393694;,
 5.440241;77.538559;8.393695;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane24 {
 4;
 15.456880;63.688946;4.020966;,
 5.456880;63.688946;4.020967;,
 15.456880;73.295700;6.797701;,
 5.456880;73.295700;6.797703;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}

Mesh Plane25 {
 4;
 15.649216;58.930565;2.296314;,
 5.649216;58.930565;2.296316;,
 15.649216;68.537323;5.073050;,
 5.649216;68.537323;5.073052;;
 2;
 3;2,3,0;,
 3;1,0,3;;

 MeshNormals  {
  1;
  0.000000;-0.277674;0.960675;;
  2;
  3;0,0,0;,
  3;0,0,0;;
 }

 MeshMaterialList  {
  1;
  2;
  0,
  0;
  { PDX01_-_Default }
 }

 MeshTextureCoords  {
  4;
  0.000000;1.000000;,
  1.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;;
 }
}