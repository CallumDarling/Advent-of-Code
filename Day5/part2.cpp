#include <iostream>
#include <algorithm>

using namespace std;

//int arr[] = {9,    9,        9,        9,        9,    9,    1721,
//           979,  3666,     299,      675,      1451, 2444, 2443,
//           2445, 45234234, 43324423, 43223443, 4324, 2442};


string arr[] = {
  "BFBBFFBRRL",
"BFBFFFFRLL",
"FBFBFFBRRR",
"FFBBBFBRLL",
"BBBFBFBRLR",
"BFBBFBFLRR",
"FBBBFFFRRL",
"BBFFBFFLLL",
"BBBFBBBRLR",
"BFFBFFBRRL",
"FFBFFFFLRR",
"BFBBBFFRRR",
"BFFBBFFRRR",
"BBFFFFBLLL",
"BFBBBFFLLL",
"FBFFBBFRLR",
"BFBBFBFRLR",
"FBFBBBFRRL",
"BBFFBBFLRL",
"FBBFBFBLLR",
"FBFFFFFLLR",
"BFBFFFFLRL",
"FBFFFFFLRR",
"FBBBFFBRLL",
"BFFFBFBRRR",
"FFBBFFBRLR",
"FBBBBBBLRL",
"FFBFFBFLLL",
"BBFBFFFRLL",
"FBFFFFFLRL",
"BBFFBBBRRR",
"FFBBFFBRRR",
"FFFBFBBRRL",
"FBBBFBFRRL",
"BFBFFBBLRL",
"BBBBFFFLRR",
"FBBFFBFLRL",
"FBFFFBFLRL",
"BFFBBFBRRR",
"FBFFBBBRLR",
"FBBBBBBLLR",
"BFBFFBBLLL",
"BBFBFBFLRR",
"BFBFBBBLLL",
"BFBBFBFRLL",
"FBBBBBBRRL",
"BFFFBFFLLR",
"BBFFBFFRLL",
"BFFBFFBLRL",
"BBFBBBFLLR",
"FBFBFBBLRR",
"FBFBBFBLLR",
"BFFFFBBRRR",
"BFBFFFBLRL",
"FBBBFFBLLR",
"FFFBBFBLLR",
"FFBBBFFRLR",
"BFBBFFBLRR",
"BFBFBBFRLL",
"FBFBBBBRRL",
"FBBBFFBRLR",
"FFBBBFBRRL",
"BBFFBFFLRL",
"BFBBFBBRRR",
"BBBFBBFLLR",
"BBFFFBBLRL",
"BBFFBFBLLR",
"FBBFBFBRLR",
"BFFBBBFLRR",
"BFFBFFBLRR",
"BBFBBFBLLR",
"FFBFFFFRRL",
"FBBFFFFLRL",
"FBBBFBFRLL",
"BFFBBFBLRL",
"BBBFFFFRLL",
"FFFBBBFRRR",
"FFBFFBFRRR",
"FBBBFFFRLR",
"BFFBFFFRLR",
"BFBFBFBRRL",
"BFFFBBBLLL",
"BFBBFBFLLR",
"FFFBFBFLRL",
"BFBBBFBLRL",
"FBBBFFBLRL",
"FBFFBBFRRL",
"BBBFFBBLRR",
"FFFBBFFRLR",
"FFFBFFFRLL",
"FFBBBFFLLL",
"BBBFBBFRLL",
"BFFFBBBRRR",
"FBBBFFFLLL",
"BFFBFFFLRL",
"BBFBFFBLRR",
"BFBFFFBRLR",
"BFFBBFFRRL",
"BFBBFBBLRL",
"FFFBBBBRRR",
"BBFBBFFLLL",
"FFBBFBBRLL",
"FFFBBBFLLL",
"FFBBBBFRRL",
"BFBFFBFRRL",
"FBFBFFBLRR",
"FFFBBBFRRL",
"BBFFBFFLRR",
"FBFFBBFLRL",
"BBBFFBFLRL",
"FFBFBFBLRL",
"FFBBFBBRLR",
"FBBFFFBRLL",
"FBBFFBFRLR",
"BFFBFBFLRL",
"BBFFBBBLLR",
"FBFBFBBLRL",
"BBFBBBFRRL",
"BFBBBFFLRL",
"BFFBFBBLLR",
"BBBFBFFRRR",
"BFFFBBBRLL",
"BFFBFBFLRR",
"BFBFBFFRLL",
"BFFBBBFLRL",
"BBFFFBFRLR",
"BBFFFFFRLR",
"BBFBBFBLLL",
"BFBBBBBLRR",
"BFFFBBBRLR",
"FFBFBBBLRR",
"FBFFBFFLRR",
"BFBFFBBLRR",
"FFBFFBBRLL",
"BBFBBBBLRL",
"FFBBBFFLLR",
"FBFBBFBRLL",
"BFBFBFFLLL",
"FFBFFFFRLL",
"BFFFFFFRLL",
"FBBBFBBRRL",
"FBBBFBFLRL",
"FBFBBFFLLR",
"BFBFFFFRLR",
"BBFFBBBLLL",
"FBFFBBFLLR",
"FBFBBFFRRR",
"BBBFFBBLRL",
"FBBFBFFLRL",
"FBFFFFFRRR",
"BBFBFFBRLL",
"FFFBFFBLLR",
"FBFFFFFRRL",
"FFBBFBBLLL",
"FFBFFBFRRL",
"FBBFFBBRRR",
"FBFFFBBRLR",
"FBBFBFFLLL",
"BFFFFBFLRR",
"FBFFFBBRLL",
"FFFBBBBRRL",
"FBBFBBFLLR",
"FFFBBFFRLL",
"FBBFBFBLLL",
"BFBFFFBLLR",
"BFFFFFBLRL",
"BFFFBBBLRL",
"BFBBFBBLRR",
"FFBFBFFRRR",
"BBBFBBBLRL",
"BBBFBBFRRL",
"FFBBBFFLRL",
"BBFBFBFRRR",
"BFFFFFFLLR",
"BFFFFFBLLL",
"FBFBFFFRRL",
"BBBFFBFRRR",
"BFBBFBBRLL",
"BFFFFBFLRL",
"BBBFFBFRLL",
"BBBFFBFLRR",
"BFFFFFFLRR",
"BBFFBFBRRR",
"BBBFBBBRLL",
"BFBFBFFRLR",
"FBBFFFFRRL",
"FBFBBFFRLL",
"BBFBFFFLRR",
"BBFBBFBRRR",
"FBFFBFBLRL",
"FFBFBFFLLR",
"BFBFFFBLLL",
"BFFFFBFRLL",
"BBFFFBBRRR",
"FBBBFBFLLL",
"FBBFBFFLLR",
"FFFBBFFRRR",
"BFFFBFFRRL",
"BFBBFBBRRL",
"BFFFBFBLLR",
"BFFFBBFRRR",
"BFFFFBBLLR",
"FFBBFFBLRL",
"FFFBBBFLLR",
"BBBFFBBRLL",
"FFBFFBFLRL",
"BFFFFBFRLR",
"BBBFBFBLRR",
"BFFFBBFRRL",
"FBBFFFFLRR",
"FBFBFBFRLL",
"BBBFFFBRRL",
"FBFBFFFLLR",
"BFBBFFFLRR",
"BBBFFFFRRL",
"BFBFFBFRLR",
"BBFFFFFLLL",
"FBBFBBFLRR",
"FFBBBFBLRL",
"FFBFFFBRLR",
"FBFFFFFRLR",
"BBBFBFBRRR",
"BBBFFFFRLR",
"BFBBFFFRLL",
"BFBFBBFLLR",
"FFBBBBBLRL",
"BFFFBFBLRR",
"FFBFFFBRRL",
"FBFBFFFRRR",
"BFBBFFFRLR",
"FBBFBFBLRR",
"FFBFFFFLRL",
"BBFFFBBLRR",
"FFBFBBBRRL",
"FBBFFBBLLR",
"FBFBBBFLRL",
"BBFFBFBLRL",
"BBFFBBBRLR",
"FBBBFBBRLL",
"BBFFBBBRRL",
"BFFFBFFRRR",
"BFBFFFFRRR",
"BFBBFFBRLR",
"FFFBBBFRLR",
"BFBBFFFLRL",
"BBFFFBBRRL",
"BFFBFFBRLL",
"FFBFFBBLLL",
"FFFBBFFLRL",
"FBFFBFBLRR",
"FBFBFBBRLL",
"BBBFBBBRRR",
"FFBBFBBRRL",
"BFBBBFBRRL",
"FFBFFFBRRR",
"BFFBBFFRLR",
"FFBFFBBLRR",
"BFFFFFBLLR",
"FFBBFFFRRR",
"FBBBFBBLLL",
"FFBFBFBLLL",
"FFBBFFBRLL",
"BFBBBBBRRL",
"BFBFFBBRLR",
"BBBFBBFLRL",
"BBBFBFFLRR",
"FBBFFFBRRR",
"BBFBFBBRLL",
"BBFBFFBRLR",
"BFFBBBBLRR",
"BBFFBFBLLL",
"FBBFBBFLRL",
"BFFBFBFRRR",
"BFFFBFFRLL",
"FFFBBFFLRR",
"FBBFFBBRLR",
"FBBFFFFRLR",
"BBFBBFBLRR",
"FBFFFFBLRL",
"BBFBBFFRLR",
"BFBFBBBRLL",
"FFBBFFBLRR",
"FBFBBFFLRL",
"FBBFFBFRRR",
"FBFBFFFRLL",
"FBFFFBFLRR",
"FFBBFBBRRR",
"FFBBFFFRLR",
"FBBFFFBLLR",
"FBFFFBBLLR",
"BFBFBFBLLL",
"BBBFBFFLLL",
"BFBFFFBRRR",
"FFFBBFFLLL",
"FBFFBFBLLL",
"FFBFBFBRRL",
"FBFFBBBLRR",
"BBFBFBBLLR",
"BFFBFBFLLL",
"FFFBBBBLLL",
"FBFBBFFLLL",
"BBBFFBFLLR",
"BFFBBFBRLR",
"FBBBBFFRLR",
"FBFBFBBLLR",
"FFBFFFFRRR",
"FBBFBFBRRL",
"FBFBFFBRRL",
"BBFBFFFLLL",
"FFFBFBBRLR",
"BBBFFFBLLL",
"FBBBFFBLLL",
"FFBFFBFRLL",
"BFFFBFFLLL",
"FBFBFFBRLL",
"FFBFFBFRLR",
"FBBFFFBLLL",
"BFFBBBFLLR",
"FFBBBBFRRR",
"BBBFFBBRRL",
"BFFFBBBRRL",
"FFBBBBBLLR",
"FFBBFFFLRL",
"BFFFBFBLLL",
"BFBFFBBRRR",
"FBFBBFBRLR",
"BFFBFBBRRR",
"BFBBBFFRLR",
"BFBBBBBRRR",
"BFBFFFBRLL",
"FFBFBBFLLL",
"BBFFBBFLLR",
"FBFFFBBRRR",
"BBBBFFFLLL",
"BFFBBFFLLR",
"BBBFFBFRRL",
"BBFFBBFRLL",
"FFBFBBBLLR",
"FBFFBBFRRR",
"BFFFFFFRLR",
"BBFFFFFLRL",
"FBBBBFFLRL",
"BFBFFFBLRR",
"FBBBFBFLLR",
"BFFFBFBRRL",
"BBFFFFBLRR",
"FFFBFBFLLL",
"BFBFBBFRRR",
"BBFBFFBLLL",
"BBFFBFBLRR",
"BFBBFFBLRL",
"BBFBBFFRRL",
"BFFBBBBLRL",
"FBBBBBFLLL",
"BFBBFFFRRR",
"FBFFFFBRLL",
"BBFFBBBRLL",
"FBFBBFFRLR",
"FBFBBFBLRR",
"FFBBFFBRRL",
"FBBBBBFLLR",
"BBFBFBFRLL",
"BBFBBBFLRL",
"BFBBBFFLRR",
"FBFBBBBLRR",
"FFBFBBBRRR",
"FBBBBFFRLL",
"BFFFBBFRLR",
"FBBFFBBRRL",
"BBFFBFFRRR",
"FBBFFBBRLL",
"BFFBFBFRLR",
"FFBFBFFRLL",
"FBBBBFBRRL",
"FFFBFFFRRR",
"FBFFFBBLRR",
"FBBBBBBRLR",
"FBBBFBBRLR",
"BFBBBBFRRL",
"BFFFBBFLRL",
"FBBFBBFRLR",
"FFBBFBFRRL",
"BFFBFFBRLR",
"BFBBBBFRRR",
"BFFFBFBLRL",
"FBBFFFBLRR",
"BBFFFBFLLR",
"FBFBFFBLLL",
"BBFBBBBLRR",
"BBFFFBFLRR",
"FBFFBBBLRL",
"FBFFBBFLRR",
"BFBFFBBRRL",
"FBFFBFFRLL",
"BFBFFBFLRL",
"FFBBBFFRLL",
"BFFFBBFLLL",
"BFFFBFFLRR",
"BBFFFBFRRR",
"BFFFBBBLRR",
"FBFBBFBLLL",
"FBFBFBBRLR",
"BFBFFBBRLL",
"BFBBFFFRRL",
"BFFFFBFRRL",
"BBFFBFFLLR",
"BFFBFFFRRR",
"BFFBFFFRRL",
"BFFFBBFLLR",
"BBFBFBBRRR",
"BFBBFFBLLR",
"BFFFFBFRRR",
"FFFBBFBLRL",
"FFBBFBBLRR",
"FFBFBFBRLR",
"FFBFBFFLRL",
"FBFBBBFLLL",
"BFFFBBFRLL",
"FBBFBFFLRR",
"FBFFFFBLRR",
"BBBFFFFLLR",
"BFBBBFFRLL",
"BFBBFFFLLR",
"FFBFFBFLLR",
"FBFFFBFLLR",
"FFBFBBFLRL",
"FBFBFFFRLR",
"FFFBFBBLRR",
"BBBFFBBLLR",
"FBFFBFFRRL",
"FFFBBBFRLL",
"FFFBFFFRLR",
"FBBBFBFRRR",
"BBBFBFBRRL",
"BBFFFBBRLR",
"BFFBFBFLLR",
"BFBBBFBRLL",
"BBFBFBBLRR",
"BBFFFFBRLL",
"BFFFBBFLRR",
"FBBFBFFRRL",
"BFBFFBFRLL",
"BFBFFBFRRR",
"BFFBBBFRRR",
"FBBFBBBRRR",
"FBBFBBBLRL",
"BBFFBBFLRR",
"BBFFBBBLRR",
"BFFFFFBLRR",
"BBBFFBFLLL",
"BFBFBBBLRR",
"FBBBFBBLRL",
"BBBBFFFRLR",
"FBFBBFBRRL",
"FBFBBBFLRR",
"BFBBBBFRLR",
"BFFFFBBLRR",
"FBFFBBBRLL",
"BFBFFFBRRL",
"BBBFBBFRLR",
"FFFBFBBRRR",
"FBFFBFFRRR",
"FBFFFFFRLL",
"BBFFBFBRLR",
"BFFBBBBRRL",
"BBFBFFFLRL",
"FFBBBBFRLL",
"FBBFBFFRRR",
"FFBFFBBLRL",
"FFFBFBFRLR",
"FBFFFFBRRL",
"BBFBBBBRLR",
"FFBBBBBRLL",
"BFBBBFBRLR",
"FBFFFBBLRL",
"BFFFFBBRRL",
"FFBFFFBLRL",
"BBBFFFBRLR",
"FBFFFBFRLR",
"FBBBBFFRRR",
"BFBBFFBRLL",
"FBBFBBFRRL",
"FBBBBFBRRR",
"BBFFFFFLLR",
"BBBFFFBLRR",
"BBFBFBFRLR",
"BFFBBBBRLR",
"FBFBFFFLRR",
"BFBBBBBRLL",
"FBFBFBBRRR",
"BFFFBFFRLR",
"FFBBBBFLRR",
"FBFFFFBLLR",
"FFBBFBFLRR",
"FBBFFFBRRL",
"FFBFFBBRRL",
"BBBFFFFLRR",
"BFBFBFBLRR",
"BFFBFBBLRR",
"BBBFFBBRRR",
"FFBBBFBLRR",
"FBFFBBBLLL",
"FFBBBBFRLR",
"FBBBBFBLLL",
"BFFBBBBRRR",
"FFFBFBFLRR",
"BFFBBBFRLL",
"FFFBBBFLRL",
"FBBBBFFLLL",
"FFFBBBBRLR",
"BFFBFBFRRL",
"BFFFFBBRLL",
"FBBFFBBLRR",
"FFBBFBFRLL",
"FBBFBBBLRR",
"BFBFBFFRRR",
"FFBBFBFLRL",
"BFFBBFFLRR",
"BFBFFBFLLR",
"BFBBBBFLLR",
"FBFBFBFRRR",
"BBFBFBBLLL",
"BBFBFFFRRR",
"BFBFBBBRLR",
"BBFBFFBLLR",
"BFFBFFBLLL",
"FFBFFFFRLR",
"BFFFFBBLLL",
"BFFBBBBRLL",
"BFBFBFFLRR",
"FBBFFBFLLL",
"BFFFBFBRLR",
"FBFFBFFLLL",
"BFFFFBFLLR",
"FFFBFBBLLL",
"FBBBBBFRRL",
"BFFBBFBLLR",
"BBBFFFBRLL",
"FFFBFBBLRL",
"BBFFBBFLLL",
"FFFBFFBRLL",
"BFBBFBFRRL",
"BFBBBFFRRL",
"BBBFBFBLLR",
"BFFBFFFLRR",
"FFFBBFBLRR",
"BFFBBFFLLL",
"BBFBFBFLRL",
"BBFFFFBLRL",
"BFBFBFBRLL",
"FBBBFFFLRR",
"BBBFFFBLRL",
"BBFBFFBLRL",
"BBFFBFBRRL",
"BBFBFFFRLR",
"BFFBBBFLLL",
"FBFFBFBLLR",
"BBFBBBBLLR",
"FFBFFFBLRR",
"FFBBFBFRLR",
"BFBFFFFRRL",
"FBFFBFBRLL",
"FFBFFBBRRR",
"FFBBFFFRLL",
"FBFBFBFRRL",
"FFBBBFBLLR",
"FFBFBFBLRR",
"BFBBBBFLRL",
"BFFBFBBRLR",
"FFFBBBBLLR",
"FFBFFFFLLR",
"FBBBFBBLLR",
"FBFBBFBRRR",
"BFBFBFBLLR",
"FFBBBBBRRL",
"FBBFBBBLLL",
"FFFBBFBRRR",
"FBBFBFBRLL",
"FBBBBBFLRL",
"BBFFFFFRRR",
"BFBBBBBLLR",
"BFFBBBBLLR",
"BFBBFBBRLR",
"BFBBBBFLRR",
"FBBBBFBLRR",
"FBBBBBFLRR",
"BFFBBFBRLL",
"BBFBBFBRLR",
"BBFFBFFRLR",
"FBBFFBBLLL",
"FFBFBFFLLL",
"BFFFFFFRRL",
"BBBFBBBLLR",
"FBFFBBBLLR",
"BBFFFBFLLL",
"FBFBBBFRRR",
"BBBBFFFRLL",
"FBFBBBBRLL",
"BFBFFFFLRR",
"BFBFBBFRLR",
"FBBBFFBRRL",
"FFBFFFBRLL",
"BFBFFBFLRR",
"BFBBFBFRRR",
"FFBBBFBRLR",
"BBFFFBFRRL",
"BBBFFFFLLL",
"FFBBFFFLLR",
"FFBBFFFLRR",
"FBBFFFFRRR",
"FBFBBBFRLR",
"FFFBFFBRRL",
"FFBFBBFRRR",
"FFBBBFBLLL",
"FFBBFFBLLL",
"FFFBBFBLLL",
"FFBBFBBLRL",
"FBBBFFFRLL",
"BBFFBBBLRL",
"BFBBBFBRRR",
"BFBFFBBLLR",
"BFFBFBBLLL",
"BFBBFFFLLL",
"FFBFBBFLRR",
"FBFBBBBLRL",
"BFBFBBFLRR",
"BFBBBBFRLL",
"BBFFFBBLLR",
"FBBFFBBLRL",
"FBBFBFFRLL",
"FBBFBBBLLR",
"FBBFBBBRLR",
"BBFFFFBLLR",
"FBBFBFBRRR",
"BBBFBFBRLL",
"FFFBBFFLLR",
"BBBFBFFRRL",
"BFFFFFFLLL",
"FBFBBFBLRL",
"FBFFBFFRLR",
"FBFBFFBLLR",
"FBBFFBFLLR",
"BFBFBBBLLR",
"FBBBBFBRLR",
"FFBBFBBLLR",
"BFBBBBFLLL",
"FFFBBFFRRL",
"BFBFFBFLLL",
"BBBFFFBLLR",
"BBFFBFFRRL",
"BFFFFBBRLR",
"BBFFBBFRLR",
"BBBFFFBRRR",
"BBFBBBBLLL",
"BFBFBFBRLR",
"FBBFFFFRLL",
"BBFBBFFLRR",
"BFBFBBBLRL",
"BBFFBFBRLL",
"BBBFFBFRLR",
"FFBFBFFRRL",
"BBFFFFBRRL",
"FBBFFBFLRR",
"FBFFBFFLRL",
"BFFFFFBRRR",
"BFFBFBBRRL",
"BFFBFFFLLR",
"BFFBFBFRLL",
"FFBBBBFLLL",
"BBFBFBBRRL",
"BFFFBFFLRL",
"BBBFBBFRRR",
"FFBFBBFRRL",
"BFFBFFFRLL",
"BFBBBFBLRR",
"BFFBFFFLLL",
"FBFBFBFLLR",
"FBBBBBBLRR",
"FBFFBFFLLR",
"FBBBFFFLRL",
"BBFBBBFLRR",
"FFBFBBBLLL",
"BFBBFFBRRR",
"FFFBFBBLLR",
"BFBFBBBRRL",
"BBBFBBFLLL",
"FBFBFFBRLR",
"FFFBFFBRLR",
"FFFBFFBRRR",
"BFFBBFFLRL",
"BBBFBBFLRR",
"FBFBBBFLLR",
"BBFBFFFRRL",
"BFBFFFFLLR",
"FBBFBBBRLL",
"FFBBFFBLLR",
"FBFBBBBRRR",
"BFBFBBFLRL",
"FFBFBFFRLR",
"FBBBBBFRLL",
"FBBFBBFRLL",
"FBBBBBBRLL",
"BFBFBFBRRR",
"FBBBBBFRLR",
"FFBBFBFLLL",
"BBBFBFBLLL",
"FFBBFBFRRR",
"BFFBFFBLLR",
"BBFBBFBRLL",
"FBBBBFBRLL",
"FFFBBBBRLL",
"BBFBFBFLLL",
"FBBBBBBLLL",
"FFFBFBBRLL",
"BBFFFFFRLL",
"BBFBFFFLLR",
"FBBBFFBRRR",
"BBFFFFFLRR",
"FFBFBBFRLL",
"FBFBBBBLLL",
"BBBFFFFRRR",
"BFFBFFBRRR",
"BBBBFFFLLR",
"BFBBBFFLLR",
"FBBFFFFLLR",
"FBFBFBFRLR",
"BFFBFBBLRL",
"FBFFFBFRRL",
"BBBFBFBLRL",
"FFBBFBFLLR",
"FBFFBFBRLR",
"FFFBBBBLRR",
"BFFBBBFRLR",
"FBFFFFBLLL",
"BBFBBBBRRL",
"FFBFBFBRLL",
"BBFBBBFLLL",
"BFBBFBBLLL",
"FFBBBBFLRL",
"FFBFBBFLLR",
"FBFBFBBRRL",
"BFFBBFBLRR",
"BFFBBFBRRL",
"BFBBFBBLLR",
"FFFBFBFRRL",
"BBFBBFBLRL",
"FBBFBBFRRR",
"BBFFFBFLRL",
"BFFFFFFLRL",
"BFFBFBBRLL",
"FBFFFFFLLL",
"BBBBFFFLRL",
"BBBFBFFLRL",
"BFBBBBBLRL",
"FBFBFFFLLL",
"FFFBFBFRRR",
"BBFBBFBRRL",
"FBFFBBFRLL",
"FFBFBBBLRL",
"BBFBFBBLRL",
"FFBFBFFLRR",
"FBFBBFFRRL",
"BBFBFBBRLR",
"BBFFFFBRLR",
"BBFFFBBRLL",
"FBBBBBFRRR",
"FBBFFFBRLR",
"FFBFFBBLLR",
"FBBBFFBLRR",
"BBFBBBFRLR",
"FBFBFFFLRL",
"BFFFBBBLLR",
"BBBFBFFLLR",
"BFFFFFBRRL",
"FBFBFFBLRL",
"FBBBBFFRRL",
"FFBBBFFRRL",
"FBFBBBBRLR",
"FBBBBFBLRL",
"BFFBBBFRRL",
"BFBFBBFLLL",
"BFBFFFFLLL",
"BFFFFBFLLL",
"FFBBBFFRRR",
"BBFFFBBLLL",
"BBBFBBBLRR",
"BFBBBFBLLR",
"FFFBFBFLLR",
"FBBBFBFRLR",
"BFBFBFFRRL",
"FBFBFBFLLL",
"BFFFFFBRLR",
"BBBFFFFLRL",
"BBFBBBFRLL",
"FFFBBFBRLR",
"BBFBFFBRRR",
"BBFBBBBRRR",
"FFBBBFFLRR",
"BFBBFBFLLL",
"FBBBFBBRRR",
"FFBFBBBRLR",
"FFBFBBBRLL",
"FBBFFBFRRL",
"BBFBBBFRRR",
"FBBBFBBLRR",
"FFFBBBFLRR",
"BBFBFBFLLR",
"BFFFFFFRRR",
"FFBBBBBRLR",
"FBBFBBFLLL",
"FBBFFFFLLL",
"BBFFFFFRRL",
"FBFFFBFRLL",
"FBFFBBBRRL",
"BBFFFBFRLL",
"FBFBFBBLLL",
"BBFBFFBRRL",
"FBFFFBFRRR",
"FFBBBBBLLL",
"BBFBBFFLRL",
"BBBFBBBLLL",
"BBFFBBFRRL",
"BBBFFBBRLR",
"FBBFBFBLRL",
"FBFFFBBRRL",
"BFFFFBBLRL",
"FFBFBFBLLR",
"FFBBBBBRRR",
"FBBFBFFRLR",
"BBFBBBBRLL",
"BFBFBBBRRR",
"FBFFBFBRRL",
"FBFBFBFLRL",
"BFBBFBFLRL",
"FFFBBFBRLL",
"BBBFFBBLLL",
"FBBFBBBRRL",
"FFBBBBFLLR",
"FFBBFFFRRL",
"FFBFBBFRLR",
"BBFFFFBRRR",
"FBBBBFFLLR",
"FFBBFFFLLL",
"BFBBFFBLLL",
"FBFFFFBRRR",
"BFFFBFBRLL",
"FBFFFBFLLL",
"BFBFBFFLRL",
"FFBFFBBRLR",
"FFFBBFBRRL",
"FBFFBBFLLL",
"FBFFFBBLLL",
"FFBFFFFLLL",
"FBFFBBBRRR",
"BFBBBBBRLR",
"BFBFBFFLLR",
"BBBFBBBRRL",
"FBBFFFBLRL",
"FFBFBFBRRR",
"FFFBFFFRRL",
"FBBBFFFRRR",
"BFBBBFBLLL",
"FBBFFBFRLL",
"FFBFFBFLRR",
"FBFBFBFLRR",
"BFFBBFBLLL",
"FBFBBFFLRR",
"BFBBBBBLLL",
"FFBFFFBLLR",
"FBBBBFFLRR",
"FBBBBFBLLR",
"FFFBFBFRLL",
"FBFBBBBLLR",
"FFFBFFBLLL",
"BFFBBFFRLL",
"BBFBBFFRRR",
"FFFBFFBLRR",
"BBBFBFFRLR",
"BBFBBFFLLR",
"BBFBBFFRLL",
"FFBBBBBLRR",
"FFFBFFBLRL",
"FFBBBFBRRR",
"BBBFBFFRLL",
"FFFBBBBLRL",
"FBFBBBFRLL",
"FFBFFFBLLL",
"FBBBFBFLRR",
"BBFFBBFRRR",
"BFBFBFBLRL",
"BFBFBBFRRL",
"FBBBFFFLLR",
"FBBBBBBRRR",
"BBFBFBFRRL",
"BFFBBBBLLL",
"FBFFBFBRRR",
"FBFFFFBRLR"
};



int findRow(string pass, int top, int tail, char leftDelim, char rightDelim){
  int mid = top + (tail - top) / 2;
  if(pass.empty())
	return tail;

  
  //cout << pass << " T: " << top << " t: " << tail << endl;
  if(pass.at(0)==leftDelim){
	pass.erase(0,1);
	return findRow(pass, top, mid, leftDelim, rightDelim);
  }
  if(pass.at(0)==rightDelim){
	pass.erase(0,1);
	return findRow(pass, mid, tail, leftDelim, rightDelim );
  }
  return tail;
}




int main()
{
  int currMax = 0;
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<int> ids;
  int seat = 0;

  for(int x=0; x<n; x++){
	
	int row = findRow(arr[x], 0, 127, 'F', 'B');
	int col = findRow(arr[x].substr(7,3), 0, 7, 'L', 'R');
	int id =  row * 8 + col;
	ids.push_back(id);
	//cout << "R:" << row << " C:" << col << " ID:" << id <<endl;
	if(id>currMax)
	  currMax = id;
  }
  sort(ids.begin(), ids.end());
  for(std::vector<int>::size_type i = 1; i != ids.size()-2; i+=2) {
	
	if(ids[i]+1 != ids[i+1]){
	  cout << ids[i] << " + " << ids[i+1] << endl;
	  seat = ids[i]+1; 
	}
	if(ids[i]-1 != ids[i-1]){
	  cout << ids[i] << " - " << ids[i-1] << endl;
	  seat = ids[i]-1; 
	}
	/* std::cout << v[i]; ... */
  }
	

  cout << "max: " << currMax << endl;
  cout << "seat: "<< seat << s; 
}
