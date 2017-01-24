---
title: "wctrans | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wctrans"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-convert-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wctrans"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "codici carattere, wctrans"
  - "caratteri, codici"
  - "caratteri, conversione"
  - "wctrans (funzione)"
ms.assetid: 215404bf-6d60-489c-9ae9-880e6b586162
caps.latest.revision: 13
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# wctrans
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina un mapping da un set di codici di caratteri a un altro.  
  
## Sintassi  
  
```  
wctrans_t wctrans(  
   const char *property   
);  
```  
  
#### Parametri  
 `property`  
 Una stringa che specifica una delle trasformazioni valide.  
  
## Valore restituito  
 Se la categoria `LC_CTYPE` delle impostazioni locali correnti non definisce un mapping il cui nome corrisponde alla stringa `property`della proprietà, la funzione ritorna zero.  In caso contrario, restituisce un valore diverso da zero appropriato da utilizzare come secondo argomento a una chiamata successiva a [towctrans](../../c-runtime-library/reference/towctrans.md).  
  
## Note  
 Questa funzione determina un mapping da un set di codici di caratteri a un altro.  
  
 Le seguenti coppie di chiamate hanno lo stesso comportamento in tutte le impostazioni locali, ma è possibile definire mapping aggiuntivi anche nelle impostazioni locali di "C":  
  
|Funzione|Uguale a|  
|--------------|--------------|  
|`tolower(`  `c`  `)`|`towctrans(`  `c` `, wctrans("towlower" ) )`|  
|`towupper(`  `c`  `)`|`towctrans(`  `c` `, wctrans( "toupper" ) )`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`wctrans`|\<wctype.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_wctrans.cpp  
// compile with: /EHsc  
// This example determines a mapping from one set of character  
// codes to another.   
  
#include <wchar.h>  
#include <wctype.h>  
#include <stdio.h>  
#include <iostream>  
  
int main()   
{  
    wint_t c = 'a';  
    printf_s("%d\n",c);  
  
    wctrans_t i = wctrans("toupper");  
    printf_s("%d\n",i);  
  
    wctrans_t ii = wctrans("towlower");  
    printf_s("%d\n",ii);  
  
    wchar_t wc = towctrans(c, i);  
    printf_s("%d\n",wc);  
}  
```  
  
  **97**  
**1**  
**0**  
**65**   
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)