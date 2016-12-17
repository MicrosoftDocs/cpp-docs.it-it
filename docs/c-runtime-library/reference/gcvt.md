---
title: "_gcvt | Microsoft Docs"
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
  - "_gcvt"
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
  - "_gcvt"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_CVTBUFSIZE"
  - "_gcvt (funzione)"
  - "conversioni, da virgola mobile in stringhe"
  - "CVTBUFSIZE"
  - "funzioni a virgola mobile, conversione di un numero in stringa"
  - "gcvt (funzione)"
  - "numeri, conversione in stringhe"
  - "stringhe [C++], conversione da virgola mobile"
ms.assetid: 5761411e-c06b-409a-912f-810fe7f4bcb5
caps.latest.revision: 25
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _gcvt
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un valore in virgola mobile in una stringa, che sono memorizzate in un buffer.  È disponibile una versione più sicura di questa funzione; consultare [\_gcvt\_s](../../c-runtime-library/reference/gcvt-s.md).  
  
## Sintassi  
  
```  
char *_gcvt(   
   double value,  
   int digits,  
   char *buffer   
);  
```  
  
#### Parametri  
 `value`  
 Valore da convertire.  
  
 `digits`  
 Numero di cifre significative archiviate.  
  
 `buffer`  
 Percorso di archiviazione per il risultato.  
  
## Valore restituito  
 `_gcvt` restituisce un puntatore alla stringa di cifre.  
  
## Note  
 La funzione `_gcvt` converte un `value` in virgola mobile in una stringa di caratteri \(che include un separatore decimale e un possibile byte di segno\) e archivia la stringa in `buffer`.  Il `buffer` deve essere grande a sufficienza per contenere il valore convertito più un carattere di terminazione null, che viene aggiunto automaticamente.  Se viene utilizzata la dimensione del buffer `digits` \+ 1, la funzione sovrascrive la fine del buffer.  Questo perché la stringa convertita include un separatore decimale e può contenere le informazioni sull'esponente ed il segno.  Non esiste alcuna operazione di overflow.  `_gcvt` tenta di generare le cifre `digits` in formato decimale.  Se non è possibile, produce le cifre `digits` in formato esponenziale.  Gli zeri finali potrebbero essere eliminati nella conversione.  
  
 Un buffer `buffer` di lunghezza `_CVTBUFSIZE` è sufficiente per qualsiasi valore in virgola mobile.  
  
 Questa funzione convalida i parametri.  Se `buffer` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` e imposta `EINVAL` su `NULL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_gcvt`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_gcvt.c  
// compile with: /W3  
#include <stdlib.h>  
#include <stdio.h>  
#include <string.h>  
  
int main( void )  
{  
   char buffer[_CVTBUFSIZE];  
   double value = -1234567890.123;  
   printf( "The following numbers were converted by _gcvt(value,12,buffer):\n" );  
   _gcvt( value, 12, buffer ); // C4996  
   // Note: _gcvt is deprecated; consider using _gcvt_s instead  
   printf( "buffer: '%s' (%d chars)\n", buffer, strlen(buffer) );  
   value *= 10;  
   _gcvt( value, 12, buffer ); // C4996  
   printf( "buffer: '%s' (%d chars)\n", buffer, strlen(buffer) );  
   value *= 10;  
   _gcvt( value, 12, buffer ); // C4996  
   printf( "buffer: '%s' (%d chars)\n", buffer, strlen(buffer) );  
   value *= 10;  
   _gcvt( value, 12, buffer ); // C4996  
   printf( "buffer: '%s' (%d chars)\n", buffer, strlen(buffer) );  
  
   printf( "\n" );  
   value = -12.34567890123;  
   _gcvt( value, 12, buffer ); // C4996  
   printf( "buffer: '%s' (%d chars)\n", buffer, strlen(buffer) );  
   value /= 10;  
   _gcvt( value, 12, buffer ); // C4996  
   printf( "buffer: '%s' (%d chars)\n", buffer, strlen(buffer) );  
   value /= 10;  
   _gcvt( value, 12, buffer ); // C4996  
   printf( "buffer: '%s' (%d chars)\n", buffer, strlen(buffer) );  
   value /= 10;  
   _gcvt( value, 12, buffer ); // C4996  
   printf( "buffer: '%s' (%d chars)\n", buffer, strlen(buffer) );  
}  
```  
  
  **The following numbers were converted by \_gcvt\(value,12,buffer\):**  
**buffer: '\-1234567890.12' \(14 chars\)**  
**buffer: '\-1234567890.12' \(14 chars\)**  
**buffer: '\-123456789012' \(13 chars\)**  
**buffer: '\-1.23456789012e\+012' \(19 chars\)**  
**buffer: '\-1234567890.12' \(14 chars\)**  
**buffer: '\-1234567890.12' \(14 chars\)**  
**buffer: '\-0.123456789012' \(15 chars\)**  
**buffer: '\-1.23456789012e\-002' \(19 chars\)**   
## Equivalente .NET Framework  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [\_ecvt](../../c-runtime-library/reference/ecvt.md)   
 [\_fcvt](../../c-runtime-library/reference/fcvt.md)