---
title: "Funzioni to | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
f1_keywords: 
  - "To"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "maiuscole e minuscole, conversione"
  - "caratteri, conversione"
  - "minuscole, conversione di stringhe"
  - "conversione di stringhe, maiuscole e minuscole"
  - "conversione di stringhe, in caratteri diversi"
  - "to (funzioni)"
  - "maiuscole, conversione di stringhe"
ms.assetid: f636a4c6-8c9f-4be2-baac-064f9dbae300
caps.latest.revision: 13
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni to
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ognuna delle funzioni **to** e della macro associate, se presenti, converte un singolo carattere in un altro carattere.  
  
|||  
|-|-|  
|[\_\_toascii](../c-runtime-library/reference/toascii-toascii.md)|[toupper, \_toupper, towupper](../c-runtime-library/reference/toupper-toupper-towupper-toupper-l-towupper-l.md)|  
|[tolower, \_tolower, towlower](../c-runtime-library/reference/tolower-tolower-towlower-tolower-l-towlower-l.md)||  
  
## Note  
 Le funzioni **to** e le conversioni macro sono indicati di seguito.  
  
|Routine|Macro|Descrizione|  
|-------------|-----------|-----------------|  
|`__toascii`|`__toascii`|Converte `c` in un carattere ASCII|  
|`tolower`|`tolower`|Converte `c`, se necessario, in minuscolo|  
|`_tolower`|`_tolower`|Converte `c` in minuscolo|  
|`towlower`|None|Converte `c` nel corrispondente carattere wide in minuscolo|  
|`toupper`|`toupper`|Converte `c`, se necessario, in maiuscolo|  
|`_toupper`|`_toupper`|Converte `c` in maiuscolo|  
|`towupper`|None|Converte c nel corrispondente carattere wide in maiuscolo|  
  
 Per utilizzare le versioni di funzione delle routine **to** definite anche come macro, rimuovere le definizioni di macro con le direttive `#undef` o non includere CTYPE.H.  Se si utilizza l'opzione del compilatore \/Za, il compilatore utilizza la versione di funzione di `toupper` o di `tolower`.  Le dichiarazioni delle funzioni di `tolower` e di `toupper` sono in STDLIB.H.  
  
 La routine di `__toascii` imposta tutti i 7 bit meno significativi di `c` su 0, in modo che il valore convertito rappresenti un carattere del set di caratteri ASCII.  Se `c` rappresenta già un carattere ASCII, `c` resta invariato.  
  
 Le routine `toupper` e `tolower` :  
  
-   Sono dipendenti dalla categoria `LC_CTYPE` delle impostazioni locali correnti \(`tolower` chiama `isupper` e `toupper` chiama `islower`\).  
  
-   Convertire `c` se `c` rappresenta una lettera convertibile nell'appropriato minuscolo\/maiuscolo nelle impostazioni locali correnti e esiste il caso opposto per tali impostazioni.  In caso contrario, `c` resta invariato.  
  
 Le routine `_toupper` e `_tolower` :  
  
-   Sono indipendenti dalle impostazioni locali, le versioni molto più veloci di `tolower` e **toupper.**  
  
-   Possono essere utilizzate solo quando **isascii\(**`c`**\)** e **isupper\(**`c`**\)** o **islower\(**`c`**\)**, sono, rispettivamente, diverse da zero.  
  
-   Si ottengono risultati indefiniti se `c` non è un carattere alfabetico ASCII maiuscolo\/minuscolo appropriato per la conversione.  
  
 Le funzioni `towupper` e `towlower` restituiscono una copia convertita di `c` se e solo se entrambe le condizioni seguenti sono diverse da zero.  In caso contrario, `c` resta invariato.  
  
-   `c` è un tipo di carattere maiuscolo\/minuscolo appropriato \(ovvero per il quale `iswupper` o **iswlower**, rispettivamente, sono diverse da zero\).  
  
-   È presente un carattere di tipo wide corrispondente per la destinazione maiuscolo\/minuscolo \(ovvero per il quale `iswlower` o **iswupper**, rispettivamente, sono diverse da zero\).  
  
## Esempio  
  
```  
// crt_toupper.c  
/* This program uses toupper and tolower to  
 * analyze all characters between 0x0 and 0x7F. It also  
 * applies _toupper and _tolower to any code in this  
 * range for which these functions make sense.  
 */  
  
#include <ctype.h>  
#include <string.h>  
  
char msg[] = "Some of THESE letters are Capitals.";  
char *p;  
  
int main( void )  
{  
   printf( "%s\n", msg );  
  
   /* Reverse case of message. */  
   for( p = msg; p < msg + strlen( msg ); p++ )  
   {  
      if( islower( *p ) )  
         putchar( _toupper( *p ) );  
      else if( isupper( *p ) )  
         putchar( _tolower( *p ) );  
      else  
         putchar( *p );  
   }  
}  
```  
  
  **Some of THESE letters are Capitals.**  
**sOME OF these LETTERS ARE cAPITALS.**   
## Vedere anche  
 [Conversione dei dati](../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../c-runtime-library/locale.md)   
 [is, isw Routines](../c-runtime-library/is-isw-routines.md)