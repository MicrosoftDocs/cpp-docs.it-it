---
description: 'Altre informazioni su: is, ISW routines'
title: is, isw Routines
ms.date: 11/04/2016
api_location:
- msvcr110_clr0400.dll
- msvcr90.dll
- msvcr80.dll
- msvcr100.dll
- msvcr110.dll
- msvcr120.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- isw
- is
helpviewer_keywords:
- is routines
- isw routines
ms.assetid: 1e171a57-2cde-41f6-a75f-a080fa3c12e5
ms.openlocfilehash: d9229d2437ea7a7e57178acc5fd40ba2afea043b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97246708"
---
# <a name="is-isw-routines"></a>is, isw Routines

:::row:::
   :::column span="":::
      [isalnum, iswalnum, _isalnum_l, _iswalnum_l](../c-runtime-library/reference/isalnum-iswalnum-isalnum-l-iswalnum-l.md)\
      [iswalpha, _isalpha_l, _iswalpha_l](../c-runtime-library/reference/isalpha-iswalpha-isalpha-l-iswalpha-l.md)\
      [caratteri di __isascii, iswascii](../c-runtime-library/reference/isascii-isascii-iswascii.md)\
      [Blank, iswblank, _isblank_l, _iswblank_l](../c-runtime-library/reference/isblank-iswblank-isblank-l-iswblank-l.md)\
      [iscntrl, iswcntrl, _iscntrl_l, _iswcntrl_l](../c-runtime-library/reference/iscntrl-iswcntrl-iscntrl-l-iswcntrl-l.md)\
      [iscsym, iscsymf, __iscsym, \_ _iswcsym, \_ _iscsymf, \_ _iswcsymf, _iscsym_l, _iswcsym_l, _iscsymf_l, _iswcsymf_l](../c-runtime-library/reference/iscsym-functions.md)\
      [_isctype, iswctype, _isctype_l, _iswctype_l](../c-runtime-library/reference/isctype-iswctype-isctype-l-iswctype-l.md)\
      [isdigit, iswdigit, _isdigit_l, _iswdigit_l](../c-runtime-library/reference/isdigit-iswdigit-isdigit-l-iswdigit-l.md)
   :::column-end:::
   :::column span="":::
      [Graph, iswgraph, _isgraph_l, _iswgraph_l](../c-runtime-library/reference/isgraph-iswgraph-isgraph-l-iswgraph-l.md)\
      [isleadbyte, _isleadbyte_l](../c-runtime-library/reference/isleadbyte-isleadbyte-l.md)\
      [Lower, iswlower, _islower_l, _iswlower_l](../c-runtime-library/reference/islower-iswlower-islower-l-iswlower-l.md)\
      [iswprint, _isprint_l, _iswprint_l](../c-runtime-library/reference/isprint-iswprint-isprint-l-iswprint-l.md)\
      [ispunct, iswpunct, _ispunct_l, _iswpunct_l](../c-runtime-library/reference/ispunct-iswpunct-ispunct-l-iswpunct-l.md)\
      [spazio, iswspace, _isspace_l, _iswspace_l](../c-runtime-library/reference/isspace-iswspace-isspace-l-iswspace-l.md)\
      [_isupper_l, iswupper, _iswupper_l](../c-runtime-library/reference/isupper-isupper-l-iswupper-iswupper-l.md)\
      [isxdigit, iswxdigit, _isxdigit_l, _iswxdigit_l](../c-runtime-library/reference/isxdigit-iswxdigit-isxdigit-l-iswxdigit-l.md)
   :::column-end:::
:::row-end:::

## <a name="remarks"></a>Commenti

Queste routine verificano che i caratteri soddisfino le condizioni specificate.

Le routine **is** producono risultati significativi per qualsiasi argomento Integer compreso tra -1 (`EOF`) e **UCHAR_MAX** (0xFF), inclusi. Il tipo di argomento previsto è **`int`** .

> [!CAUTION]
> Per le routine **is** , il passaggio di un argomento di tipo **`char`** può produrre risultati imprevedibili. Un carattere a byte singolo SBCS o MBCS di tipo **`char`** con un valore maggiore di 0x7F è negativo. Se **`char`** viene passato un oggetto, il compilatore può convertire il valore in un oggetto **`signed int`** o **`signed long`** . Il valore potrebbe essere esteso con segno dal compilatore, con risultati non previsti.

Le routine **isw** producono risultati significativi per qualsiasi valore Integer compreso tra -1 (**WEOF**) e 0xFFFF, inclusi. Il tipo di dati **wint_t** è definito in WCHAR. H come **`unsigned short`** ; può conservare qualsiasi carattere wide o il valore di fine del file (**WEOF**) a caratteri wide.

La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali.

Nelle impostazioni locali "C" le condizioni di test per le routine **is** sono quelle specificate di seguito:

`isalnum`<br/>
Alfanumerico (A - Z, a - z o 0 - 9).

`isalpha`<br/>
Alfabetico (A - Z o a - z).

`__isascii`<br/>
Carattere ASCII (0x00 - 0x7F).

`isblank`<br/>
Tabulazione orizzontale o spazio (0x09 o 0x20).

`iscntrl`<br/>
Carattere di controllo (0x00-0x1F o 0x7F).

`__iscsym`<br/>
Lettera, carattere di sottolineatura o cifra.

`__iscsymf`<br/>
Lettera o carattere di sottolineatura.

`isdigit`<br/>
Cifra decimale (0 - 9).

`isgraph`<br/>
Carattere stampabile, eccetto lo spazio ( ).

`islower`<br/>
Lettera minuscola (a - z).

`isprint`<br/>
Caratteri stampabili, incluso lo spazio (0x20 - 0x7E).

`ispunct`<br/>
Carattere di punteggiatura.

`isspace`<br/>
Spazio vuoto (0x09 - 0x0D o 0x20).

`isupper`<br/>
Lettera maiuscola (A - Z).

`isxdigit`<br/>
Cifra esadecimale (A - F, a - f o 0 - 9).

Per le routine **isw**, il risultato del test per la condizione specifica è indipendente dalle impostazioni locali. Le condizioni di test per le funzioni **isw** sono le seguenti:

`iswalnum`<br/>
`iswalpha` o `iswdigit`.

`iswalpha`<br/>
Qualsiasi carattere wide di un set definito a livello di implementazione per il quale nessuna delle funzioni `iswcntrl`, `iswdigit`, `iswpunct`, o `iswspace` è diversa da zero. `iswalpha` restituisce un valore diverso da zero solo per i caratteri wide per i quali `iswupper` o `iswlower` è diversa da zero.

`iswascii`<br/>
Rappresentazione di caratteri wide in caratteri ASCII (0x0000 - 0x007F).

`iswblank`<br/>
Carattere wide che corrisponde allo spazio standard o è parte di un set definito a livello di implementazione di caratteri wide per il quale la funzione `iswalnum` è falsa. I caratteri vuoti standard sono spazio (L' ') e tabulazione orizzontale (L'\t').

`iswcntrl`<br/>
Carattere di controllo wide.

`__iswcsym`<br/>
Qualsiasi carattere wide per il quale `isalnum` è vera, o il carattere "_".

`__iswcsymf`<br/>
Qualsiasi carattere wide per il quale `iswalpha` è vera, o il carattere "_".

`iswctype`<br/>
Il carattere ha una proprietà specificata dall'argomento `desc`. Per ogni valore valido dell'argomento `desc` della funzione `iswctype`, esiste un'equivalente routine di classificazione a caratteri wide, come illustrato nella tabella seguente:

### <a name="equivalence-of-iswctypec-desc-to-other-isw-testing-routines"></a>Equivalenza di iswctype(c, desc) ad altre routine di test isw

|Valore dell'argomento *desc*|Equivalente di iswctype( *c, desc*)|
|------------------------------|----------------------------------------|
|**_ALPHA**|**iswalpha (** `c` **)**|
|**_ALPHA** &#124; **_DIGIT**|**iswalnum(** `c` **)**|
|**_BLANK**|**iswblank (** `c` **)**|
|**_CONTROL**|**iswcntrl(** `c` **)**|
|**_DIGIT**|**iswdigit(** `c` **)**|
|**_ALPHA** &#124; **_DIGIT** &#124; **_PUNCT**|**iswgraph (** `c` **)**|
|**_LOWER**|**iswlower(** `c` **)**|
|**_ALPHA** &#124; **_BLANK** &#124; **_DIGIT** &#124; **_PUNCT**|**iswprint (** `c` **)**|
|**_PUNCT**|**iswpunct (** `c` **)**|
|**_BLANK**|**iswblank (** `c` **)**|
|**_SPACE**|**iswspace(** `c` **)**|
|**_UPPER**|**iswupper(** `c` **)**|
|**_HEX**|**iswxdigit (** `c` **)**|

`iswdigit`<br/>
Carattere wide corrispondente a una cifra decimale.

`iswgraph`<br/>
Carattere wide stampabile, escluso il carattere wide dello spazio (L ').

`iswlower`<br/>
Lettera minuscola o una parte di un set di caratteri wide definito dall'implementazione per il quale nessuna delle funzioni `iswcntrl`, `iswdigit`, `iswpunct`, o `iswspace` è diversa da zero. `iswlower` restituisce un valore diverso da zero solo per i caratteri wide che corrispondono a lettere minuscole.

`iswprint`<br/>
Carattere wide stampabile, incluso il carattere wide dello spazio (L ').

`iswpunct`<br/>
Carattere wide stampabile che non sia il carattere wide di spazio (L' ') né un carattere wide per il quale la funzione `iswalnum` sia diversa da zero.

`iswspace`<br/>
Carattere wide che corrisponde allo spazio vuoto standard o è parte di un set definito a livello di implementazione di caratteri wide per il quale la funzione `iswalnum` è falsa. Gli spazi vuoti standard sono: spazio (L' '), avanzamento carta (L'\f'), nuova riga (L'\n'), ritorno a capo (L'\r'), tabulazione orizzontale (L'\t') e tabulazione verticale (L'\v').

`iswupper`<br/>
Carattere wide maiuscolo o una parte di un set di caratteri wide definito a livello di implementazione per il quale nessuna delle funzioni `iswcntrl`, `iswdigit`, `iswpunct`, o `iswspace` è diversa da zero. `iswupper` restituisce un valore diverso da zero solo per i caratteri wide che corrispondono a caratteri maiuscoli.

`iswxdigit`<br/>
Carattere wide che corrisponde a una cifra esadecimale.

## <a name="example"></a>Esempio

```C
// crt_isfam.c
/* This program tests all characters between 0x0
* and 0x7F, then displays each character with abbreviations
* for the character-type codes that apply.
*/

#include <stdio.h>
#include <ctype.h>

int main( void )
{
   int ch;
   for( ch = 0; ch <= 0x7F; ch++ )
   {
      printf( "%.2x  ", ch );
      printf( " %c", isprint( ch )  ? ch   : ' ' );
      printf( "%4s", isalnum( ch )  ? "AN" : "" );
      printf( "%3s", isalpha( ch )  ? "A"  : "" );
      printf( "%3s", __isascii( ch )  ? "AS" : "" );
      printf( "%3s", iscntrl( ch )  ? "C"  : "" );
      printf( "%3s", __iscsym( ch )  ? "CS "  : "" );
      printf( "%3s", __iscsymf( ch )  ? "CSF"  : "" );
      printf( "%3s", isdigit( ch )  ? "D"  : "" );
      printf( "%3s", isgraph( ch )  ? "G"  : "" );
      printf( "%3s", islower( ch )  ? "L"  : "" );
      printf( "%3s", ispunct( ch )  ? "PU" : "" );
      printf( "%3s", isspace( ch )  ? "S"  : "" );
      printf( "%3s", isprint( ch )  ? "PR" : "" );
      printf( "%3s", isupper( ch )  ? "U"  : "" );
      printf( "%3s", isxdigit( ch ) ? "X"  : "" );
      printf( ".\n" );
   }
}
```

## <a name="output"></a>Output

```Output
00            AS  C                              .
01            AS  C                              .
02            AS  C                              .
03            AS  C                              .
04            AS  C                              .
05            AS  C                              .
06            AS  C                              .
07            AS  C                              .
08            AS  C                              .
09            AS  C                    S         .
0a            AS  C                    S         .
0b            AS  C                    S         .
0c            AS  C                    S         .
0d            AS  C                    S         .
0e            AS  C                              .
0f            AS  C                              .
10            AS  C                              .
11            AS  C                              .
12            AS  C                              .
13            AS  C                              .
14            AS  C                              .
15            AS  C                              .
16            AS  C                              .
17            AS  C                              .
18            AS  C                              .
19            AS  C                              .
1a            AS  C                              .
1b            AS  C                              .
1c            AS  C                              .
1d            AS  C                              .
1e            AS  C                              .
1f            AS  C                              .
20            AS                       S PR      .
21   !        AS              G    PU    PR      .
22   "        AS              G    PU    PR      .
23   #        AS              G    PU    PR      .
24   $        AS              G    PU    PR      .
25   %        AS              G    PU    PR      .
26   &        AS              G    PU    PR      .
27   '        AS              G    PU    PR      .
28   (        AS              G    PU    PR      .
29   )        AS              G    PU    PR      .
2a   *        AS              G    PU    PR      .
2b   +        AS              G    PU    PR      .
2c   ,        AS              G    PU    PR      .
2d   -        AS              G    PU    PR      .
2e   .        AS              G    PU    PR      .
2f   /        AS              G    PU    PR      .
30   0  AN    AS   CS      D  G          PR     X.
31   1  AN    AS   CS      D  G          PR     X.
32   2  AN    AS   CS      D  G          PR     X.
33   3  AN    AS   CS      D  G          PR     X.
34   4  AN    AS   CS      D  G          PR     X.
35   5  AN    AS   CS      D  G          PR     X.
36   6  AN    AS   CS      D  G          PR     X.
37   7  AN    AS   CS      D  G          PR     X.
38   8  AN    AS   CS      D  G          PR     X.
39   9  AN    AS   CS      D  G          PR     X.
3a   :        AS              G    PU    PR      .
3b   ;        AS              G    PU    PR      .
3c   <        AS              G    PU    PR      .
3d   =        AS              G    PU    PR      .
3e   >        AS              G    PU    PR      .
3f   ?        AS              G    PU    PR      .
40   @        AS              G    PU    PR      .
41   A  AN  A AS   CS CSF     G          PR  U  X.
42   B  AN  A AS   CS CSF     G          PR  U  X.
43   C  AN  A AS   CS CSF     G          PR  U  X.
44   D  AN  A AS   CS CSF     G          PR  U  X.
45   E  AN  A AS   CS CSF     G          PR  U  X.
46   F  AN  A AS   CS CSF     G          PR  U  X.
47   G  AN  A AS   CS CSF     G          PR  U   .
48   H  AN  A AS   CS CSF     G          PR  U   .
49   I  AN  A AS   CS CSF     G          PR  U   .
4a   J  AN  A AS   CS CSF     G          PR  U   .
4b   K  AN  A AS   CS CSF     G          PR  U   .
4c   L  AN  A AS   CS CSF     G          PR  U   .
4d   M  AN  A AS   CS CSF     G          PR  U   .
4e   N  AN  A AS   CS CSF     G          PR  U   .
4f   O  AN  A AS   CS CSF     G          PR  U   .
50   P  AN  A AS   CS CSF     G          PR  U   .
51   Q  AN  A AS   CS CSF     G          PR  U   .
52   R  AN  A AS   CS CSF     G          PR  U   .
53   S  AN  A AS   CS CSF     G          PR  U   .
54   T  AN  A AS   CS CSF     G          PR  U   .
55   U  AN  A AS   CS CSF     G          PR  U   .
56   V  AN  A AS   CS CSF     G          PR  U   .
57   W  AN  A AS   CS CSF     G          PR  U   .
58   X  AN  A AS   CS CSF     G          PR  U   .
59   Y  AN  A AS   CS CSF     G          PR  U   .
5a   Z  AN  A AS   CS CSF     G          PR  U   .
5b   [        AS              G    PU    PR      .
5c   \        AS              G    PU    PR      .
5d   ]        AS              G    PU    PR      .
5e   ^        AS              G    PU    PR      .
5f   _        AS   CS CSF     G    PU    PR      .
60   `        AS              G    PU    PR      .
61   a  AN  A AS   CS CSF     G  L       PR     X.
62   b  AN  A AS   CS CSF     G  L       PR     X.
63   c  AN  A AS   CS CSF     G  L       PR     X.
64   d  AN  A AS   CS CSF     G  L       PR     X.
65   e  AN  A AS   CS CSF     G  L       PR     X.
66   f  AN  A AS   CS CSF     G  L       PR     X.
67   g  AN  A AS   CS CSF     G  L       PR      .
68   h  AN  A AS   CS CSF     G  L       PR      .
69   i  AN  A AS   CS CSF     G  L       PR      .
6a   j  AN  A AS   CS CSF     G  L       PR      .
6b   k  AN  A AS   CS CSF     G  L       PR      .
6c   l  AN  A AS   CS CSF     G  L       PR      .
6d   m  AN  A AS   CS CSF     G  L       PR      .
6e   n  AN  A AS   CS CSF     G  L       PR      .
6f   o  AN  A AS   CS CSF     G  L       PR      .
70   p  AN  A AS   CS CSF     G  L       PR      .
71   q  AN  A AS   CS CSF     G  L       PR      .
72   r  AN  A AS   CS CSF     G  L       PR      .
73   s  AN  A AS   CS CSF     G  L       PR      .
74   t  AN  A AS   CS CSF     G  L       PR      .
75   u  AN  A AS   CS CSF     G  L       PR      .
76   v  AN  A AS   CS CSF     G  L       PR      .
77   w  AN  A AS   CS CSF     G  L       PR      .
78   x  AN  A AS   CS CSF     G  L       PR      .
79   y  AN  A AS   CS CSF     G  L       PR      .
7a   z  AN  A AS   CS CSF     G  L       PR      .
7b   {        AS              G    PU    PR      .
7c   |        AS              G    PU    PR      .
7d   }        AS              G    PU    PR      .
7e   ~        AS              G    PU    PR      .
7f            AS  C                              .
```

## <a name="see-also"></a>Vedi anche

[Classificazione caratteri](../c-runtime-library/character-classification.md)<br/>
[Impostazioni locali](../c-runtime-library/locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[Interpretazione delle sequenze di Multibyte-Character](../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Funzioni to](../c-runtime-library/to-functions.md)
