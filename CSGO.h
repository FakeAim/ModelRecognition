/*
** Game Name: Counter Strike Global Offensive
** File Name: CSGO.h
** Author: Calvin Hartwell, 100Proof
** Description: Model Recognition for Counter-Strike Global Offensive 
** 				Players are all drawn on the same mStride, the game has multiple
** 				DOF (Depths of field) and so there are multiple values per player. 
*"
*/ 


// Update 31st December 2013: 
// Use this to catch everything, it's pretty ghetto but the old model rec doesn't cover all the new game textures. 
// This needs fixing for new model rec, but I'm too lazy to log it all. 
// in DrawIndexedPrimitive do: if(ALL_PLAYER_ENTS)  { disable z buffer/wallhack code; }
#define ALL_PLAYER_ENTS (WEP || T || CT || (g_uiStride == 32 && NumVertices >= 870 &&  NumVertices <= 5500 &&  primCount >= 1630 && primCount <= 8600)

#define PLAYERS (T | CT)
#define T ((mStride == 32 && NumVertices == 1430 && primCount == 2422 ) || (mStride == 32 && NumVertices == 2414 && primCount == 3778 ) || (mStride == 32 && NumVertices == 2578 && primCount == 4334 ) || (mStride == 32 && NumVertices == 3816 && primCount == 5930 ) || (mStride == 32 && NumVertices == 1887 && primCount == 3088 ) || (mStride == 32 && NumVertices == 1310 && primCount == 2302 ) || (mStride == 32 && NumVertices == 1986 && primCount == 3044 ) || (mStride == 32 && NumVertices == 3162 && primCount == 5182 ) || (mStride == 32 && NumVertices == 1372 && primCount == 2286 ) || (mStride == 32 && NumVertices == 1352 && primCount == 2268 ) || (mStride == 32 && NumVertices == 2587 && primCount == 4334 ) || (mStride == 32 && NumVertices == 2136 && primCount == 3424 ) || (mStride == 32 && NumVertices == 1134 && primCount == 2024 ) || (mStride == 32 && NumVertices == 3606 && primCount == 5856 ) || (mStride == 32 && NumVertices == 2529 && primCount == 3888 ) || (mStride == 32 && NumVertices == 876 && primCount == 1630 ) || (mStride == 32 && NumVertices == 2944 && primCount == 4916 ) || (mStride == 32 && NumVertices == 2593 && primCount == 4097 ) || (mStride == 32 && NumVertices == 1345 && primCount == 2488 ) || (mStride == 32 && NumVertices == 1273 && primCount == 2113 ) || (mStride == 32 && NumVertices == 5468 && primCount == 8542 ) || (mStride == 32 && NumVertices == 1215 && primCount == 2286 ) || (mStride == 32 && NumVertices == 1624 && primCount == 2936 ) || (mStride == 32 && NumVertices == 1214 && primCount == 2292 ) || (mStride == 32 && NumVertices == 1291 && primCount == 2437 ))
#define CT ((mStride == 32 && NumVertices == 2539 && primCount == 3527 ) || (mStride == 32 && NumVertices == 2925 && primCount == 3540 ) || (mStride == 32 && NumVertices == 5547 && primCount == 8003 ) || (mStride == 32 && NumVertices == 5680 && primCount == 8166 ) || (mStride == 32 && NumVertices == 2967 && primCount == 3792 ) || (mStride == 32 && NumVertices == 2924 && primCount == 3540 ) || (mStride == 32 && NumVertices == 5436 && primCount == 8003 ) || (mStride == 32 && NumVertices == 4085 && primCount == 4697 ) || (mStride == 32 && NumVertices == 5524 && primCount == 8106 ) || (mStride == 32 && NumVertices == 3140 && primCount == 3948 ) || (mStride == 32 && NumVertices == 5334 && primCount == 7910 ) || (mStride == 32 && NumVertices == 3249 && primCount == 4158 ) || (mStride == 32 && NumVertices == 4854 && primCount == 7410 ) || (mStride == 32 && NumVertices == 1258 && primCount == 1950 ) || (mStride == 32 && NumVertices == 1645 && primCount == 2568 ) || (mStride == 32 && NumVertices == 1611 && primCount == 2522 ) || (mStride == 32 && NumVertices == 1601 && primCount == 2502 ) || (mStride == 32 && NumVertices == 256 && primCount == 396 ) || (mStride == 32 && NumVertices == 1410 && primCount == 2352 ) || (mStride == 32 && NumVertices == 3301 && primCount == 5424 ) || (mStride == 32 && NumVertices == 2113 && primCount == 3391 ) || (mStride == 32 && NumVertices == 2151 && primCount == 3459 ) || (mStride == 32 && NumVertices == 2157 && primCount == 3461 ) || (mStride == 32 && NumVertices == 116 && primCount == 164 ))

#define WEAPONS ((NumVertices == 4023 && primCount == 4384 ) || (NumVertices == 10390 && primCount == 9707 ) || (NumVertices == 8007 && primCount == 8945 ) || (NumVertices == 10660 && primCount == 11216 ) || (NumVertices == 12772 && primCount == 11886 ) || (NumVertices == 8729 && primCount == 8090 ) || (NumVertices == 16533 && primCount == 19168 ) || (NumVertices == 21845 && primCount == 19335 ) || (NumVertices == 3388 && primCount == 4298 ) || (NumVertices == 13324 && primCount == 11946 ) || (NumVertices == 17793 && primCount == 16395 ) || (NumVertices == 7495 && primCount == 8531 ) || (NumVertices == 18447 && primCount == 16548 ) || (NumVertices == 12683 && primCount == 10421 ) || (NumVertices == 14442 && primCount == 15907 ) || (NumVertices == 15339 && primCount == 15972 ) || (NumVertices == 8389 && primCount == 6799 ) || (NumVertices == 12118 && primCount == 13069 ) || (NumVertices == 7558 && primCount == 6905 ) || (NumVertices == 110 && primCount == 144 ) || (NumVertices == 6586 && primCount == 6504 ) || (NumVertices == 13942 && primCount == 12878 ) || (NumVertices == 58 && primCount == 56 ) || (NumVertices == 21043 && primCount == 21868 ) || (NumVertices == 50 && primCount == 48 ) || (NumVertices == 13890 && primCount == 13554 ) || (NumVertices == 114 && primCount == 160) || (NumVertices == 14044 && primCount == 10092) || (NumVertices == 10414 && primCount == 9425) || (NumVertices == 10298 && primCount == 10384) || (NumVertices == 19445 && primCount == 18154) || (NumVertices == 12541 && primCount == 16274) || (NumVertices == 97 && primCount == 126) || (NumVertices == 4543 && primCount == 4955) || (NumVertices == 13241 && primCount == 11836) || (NumVertices == 38 && primCount == 36) || (NumVertices == 4734 && primCount == 5458) || (NumVertices == 1776 && primCount == 2026))