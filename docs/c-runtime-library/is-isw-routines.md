---
title: "is, isw Routines | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "isw"
  - "is"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is (routine)"
  - "isw (routine)"
ms.assetid: 1e171a57-2cde-41f6-a75f-a080fa3c12e5
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# is, isw Routines
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

|||  
|-|-|  
|[isalnum, iswalnum, \_isalnum\_l, \_iswalnum\_l](../c-runtime-library/reference/isalnum-iswalnum-isalnum-l-iswalnum-l.md)|[isgraph, iswgraph, \_isgraph\_l, \_iswgraph\_l](../c-runtime-library/reference/isgraph-iswgraph-isgraph-l-iswgraph-l.md)|  
|[isalpha, iswalpha, \_isalpha\_l, \_iswalpha\_l](../c-runtime-library/reference/isalpha-iswalpha-isalpha-l-iswalpha-l.md)|[isleadbyte, \_isleadbyte\_l](../c-runtime-library/reference/isleadbyte-isleadbyte-l.md)|  
|[isascii, isascii, iswascii](../c-runtime-library/reference/isascii-isascii-iswascii.md)|[islower, iswlower, \_islower\_l, \_iswlower\_l](../c-runtime-library/reference/islower-iswlower-islower-l-iswlower-l.md)|  
|[isblank, iswblank, \_isblank\_l, \_iswblank\_l](../c-runtime-library/reference/isblank-iswblank-isblank-l-iswblank-l.md)|[isprint, iswprint, \_isprint\_l, \_iswprint\_l](../c-runtime-library/reference/isprint-iswprint-isprint-l-iswprint-l.md)|  
|[iscntrl, iswcntrl, \_iscntrl\_l, \_iswcntrl\_l](../c-runtime-library/reference/iscntrl-iswcntrl-iscntrl-l-iswcntrl-l.md)|[ispunct, iswpunct, \_ispunct\_l, \_iswpunct\_l](../c-runtime-library/reference/ispunct-iswpunct-ispunct-l-iswpunct-l.md)|  
|[iscsym, iscsymf, iscsym, iswcsym, iscsymf, iswcsymf, iscsym\_l, iswcsym\_l, iscsymf\_l, iswcsymf\_l](../c-runtime-library/reference/iscsym-functions.md)|[isspace, iswspace, \_isspace\_l, \_iswspace\_l](../c-runtime-library/reference/isspace-iswspace-isspace-l-iswspace-l.md)|  
|[\_isctype, iswctype, \_isctype\_l, \_iswctype\_l](../c-runtime-library/reference/isctype-iswctype-isctype-l-iswctype-l.md)|[isupper, \_isupper\_l, iswupper, \_iswupper\_l](../c-runtime-library/reference/isupper-isupper-l-iswupper-iswupper-l.md)|  
|[isdigit, iswdigit, \_isdigit\_l, \_iswdigit\_l](../c-runtime-library/reference/isdigit-iswdigit-isdigit-l-iswdigit-l.md)|[isxdigit, iswxdigit, \_isxdigit\_l, \_iswxdigit\_l](../c-runtime-library/reference/isxdigit-iswxdigit-isxdigit-l-iswxdigit-l.md)|  
  
## Note  
 Queste routine verificano che i caratteri soddisfino le condizioni specificate.  
  
 Le routine **is** forniscono risultati significativi per qualsiasi argomento Integer da –1 \(`EOF`\) a **UCHAR\_MAX** \(0xFF\), inclusi.  Il tipo di argomento previsto è `int`.  
  
> [!CAUTION]
>  Per routine **is**, il passaggio di un argomento di tipo `char` potrebbe generare risultati imprevedibili.  Un carattere a byte singolo SBCS o MBCS di tipo `char` con un valore maggiore di 0x7F è negativo.  Se viene passato un tipo `char`, il compilatore potrebbe convertire il valore in un `int` o **long** con segno.  Il valore potrebbe essere esteso con segno dal compilatore, con risultati non previsti.  
  
 Le routine **isw** forniscono risultati significativi per qualsiasi valore Integer da –1 \(**WEOF**\) a 0xFFFF, inclusi.  Il tipo di dati **wint\_t** è definito in WCHAR.H come **unsigned short**; può utilizzare qualsiasi carattere di tipo "wide" o di tipo "wide" di fine file \(**WEOF**\).  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso **\_l** utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso **\_l** sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  
  
 Nelle impostazioni locali "C", le condizioni di test per le routine **is** sono come specificato qui di seguito:  
  
 `isalnum`  
 Alfanumerico \(A – Z, a – z, o 0 – 9\).  
  
 `isalpha`  
 Alfabetico \(A – Z o a – z\).  
  
 `__isascii`  
 Carattere ASCII \(0x00 – 0x7F\).  
  
 `isblank`  
 Tabulazione orizzontale o spazio \(0x09 o 0x20\).  
  
 `iscntrl`  
 Carattere di controllo \(0x00 – 0x1F o 0x7F\).  
  
 `__iscsym`  
 Lettera, sottolineatura, o cifra.  
  
 `__iscsymf`  
 Lettera o sottolineatura.  
  
 **isdigit**  
 Cifra decimale \(0 – 9\).  
  
 `isgraph`  
 Carattere stampabile eccetto lo spazio \( \).  
  
 `islower`  
 Lettera minuscola \(a – z\).  
  
 `isprint`  
 Carattere stampabile tra cui spazio \(0x20 – 0x7E\).  
  
 `ispunct`  
 Caratteri di punteggiatura.  
  
 `isspace`  
 Carattere di spazio vuoto \(0x09 – 0x0D o 0x20\).  
  
 `isupper`  
 Lettera maiuscola \(A – Z\).  
  
 `isxdigit`  
 Cifra esadecimale \(A – f, a alla f, o 0 – 9\).  
  
 Per le routine **isw**, il risultato del test per la condizione specifica è indipendente dalle impostazioni locali.  Le condizioni di test per le funzioni **isw** sono le seguenti:  
  
 `iswalnum`  
 `iswalpha` o `iswdigit`.  
  
 `iswalpha`  
 Qualsiasi carattere di tipo "wide" di un set definito dall'implementazione per il quale nessuna delle funzioni `iswcntrl`, `iswdigit`, `iswpunct`, o `iswspace` è diversa da zero.  `iswalpha` restituisce un valore diverso da zero solo per i caratteri di tipo " wide " per i quali `iswupper` o `iswlower` è diversa da zero.  
  
 `iswascii`  
 Rappresentazione di caratteri di tipo "wide" nella codifica ASCII \(0x0000 – 0x007F\).  
  
 `iswblank`  
 Il carattere di tipo "wide" che corrisponde allo spazio vuoto standard o è parte di un set definito dall'implementazione di caratteri di tipo "wide" per il quale la funzione `iswalnum` è falsa.  I caratteri vuoti standard sono spazio \(L' '\) e tab orizzontale \(L'\\t'\).  
  
 `iswcntrl`  
 Caratteri di tipo "wide" di controllo.  
  
 **\_\_iswcsym**  
 Qualsiasi carattere di tipo "wide" per il quale **isalnum** è vera, o il carattere "\_".  
  
 **\_\_iswcsymf**  
 Qualsiasi carattere di tipo "wide" per il quale `iswalpha` è vera, o il carattere "\_".  
  
 `iswctype`  
 Il carattere ha una proprietà specificata dall'argomento `desc`.  Per ciascun valore valido dell'argomento `desc` della funzione `iswctype`, esiste un'equivalente routine di classificazione a caratteri di tipo "wide", come illustrato nella tabella seguente:  
  
 **Equivalenza di iswctype\(**   
 ***c, desc* \) ad altre routines isw di Testing**  
  
|Valore dell'argomento *desc*|l'equivalente di iswctype \( *c, desc* \)|  
|----------------------------------|-----------------------------------------------|  
|**\_ALPHA**|**iswalpha\(** `c` **\)**|  
|**\_ALPHA** &#124; **\_DIGIT**|**iswalnum\(** `c` **\)**|  
|**\_BLANK**|**iswblank\(** `c` **\)**|  
|**\_CONTROL**|**iswcntrl\(** `c` **\)**|  
|**\_DIGIT**|**iswdigit\(** `c` **\)**|  
|**\_ALPHA** &#124; **\_DIGIT** &#124; **\_PUNCT**|**iswgraph\(** `c` **\)**|  
|**\_LOWER**|**iswlower\(** `c` **\)**|  
|**\_ALPHA** &#124; **\_BLANK** &#124; **\_DIGIT** &#124; **\_PUNCT**|**iswprint\(** `c` **\)**|  
|**\_PUNCT**|**iswpunct\(** `c` **\)**|  
|**\_BLANK**|**iswblank\(** `c` **\)**|  
|**\_SPACE**|**iswspace\(** `c` **\)**|  
|**\_UPPER**|**iswupper\(** `c` **\)**|  
|**\_HEX**|**iswxdigit\(** `c` **\)**|  
  
 `iswdigit`  
 Carattere di tipo "wide" corrispondente ad una cifra decimale.  
  
 `iswgraph`  
 Carattere di tipo "wide" stampabile escluso il carattere di spazio \(L '\).  
  
 `iswlower`  
 Lettera in minuscolo, o una del set definito dall'implementazione di caratteri di tipo "wide" per il quale nessuna delle funzioni `iswcntrl`, `iswdigit`, `iswpunct`, o `iswspace` è diversa da zero.  `iswlower` restituisce un valore diverso da zero solo per i caratteri di tipo "wide" che corrispondono alle lettere minuscole.  
  
 `iswprint`  
 Carattere di tipo "wide" stampabile incluso il carattere di spazio \(L '\).  
  
 `iswpunct`  
 Carattere di tipo "wide" stampabile che non è né un carattere di spazio \(L '\) né un carattere di tipo "wide" per il quale la funzione `iswalnum` è diversa da zero.  
  
 `iswspace`  
 Il carattere di tipo "wide" che corrisponde allo spazio vuoto standard o è parte di un set definito dall'implementazione di caratteri di tipo "wide" per il quale la funzione `iswalnum` è falsa.  Gli spazi vuoti standard sono: spazio \(L' '\), avanzamento modulo \(L'\\f'\), nuova riga \(L'\\n'\), ritorno a capo \(L'\\r'\), tabulazione orizzontale \(L'\\t'\) e tabulazione verticale \(L'\\v'\).  
  
 `iswupper`  
 Il carattere di tipo "wide" che è maiuscolo o è parte di un set definito dall'implementazione di caratteri di tipo "wide" per il quale nessuna delle funzioni `iswcntrl`, `iswdigit`, `iswpunct`, o `iswspace` è diversa da zero.  `iswupper` restituisce un valore diverso da zero solo per i caratteri di tipo "wide" che corrispondono caratteri maiuscoli.  
  
 `iswxdigit`  
 Carattere di tipo "wide" che corrisponde a una cifra esadecimale.  
  
## Esempio  
  
```  
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
  
## Output  
  
```  
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
  
## Vedere anche  
 [Classificazione di caratteri](../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../c-runtime-library/locale.md)   
 [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Funzioni to](../c-runtime-library/to-functions.md)