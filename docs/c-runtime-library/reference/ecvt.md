---
title: "ecvt | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ecvt"
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
  - "ecvt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ecvt (funzione)"
ms.assetid: a916eb05-92d1-4b5c-8563-093acdb49dc8
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# _ecvt
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un numero `double` in una stringa.  È disponibile una versione più sicura di questa funzione; vedere [\_ecvt\_s](../../c-runtime-library/reference/ecvt-s.md).  
  
## Sintassi  
  
```  
char *_ecvt(   
   double value,  
   int count,  
   int *dec,  
   int *sign   
);  
```  
  
#### Parametri  
 `value`  
 Numeri da convertire.  
  
 `count`  
 Numero di cifre archiviato.  
  
 `dec`  
 Posizione archiviata del separatore decimale.  
  
 `sign`  
 Il segno del numero convertito.  
  
## Valore restituito  
 `_ecvt` restituisce un puntatore a una stringa di cifre; NULL se si è verificato un errore.  
  
## Note  
 La funzione `_ecvt` converte un numero a virgola mobile in una stringa di caratteri terminata da null.  Il parametro `value` è il numero a virgola mobile da convertire.  Questa funzione memorizza fino a `count` cifre di `value` come stringa e aggiunge un carattere null \('\\0'\).  Se il numero di cifre in `value` supera `count`, la cifra meno significativa viene arrotondata.  Se sono presenti meno di `count` cifre, la stringa viene completata con degli zeri.  
  
 Il numero totale di cifre restituite da `_ecvt` non supererà `_CVTBUFSIZE`.  
  
 Solo le cifre vengono archiviate nella stringa.  La posizione del separatore decimale e il segno di `value` possono essere ottenuti da `dec` e `sign` dopo la chiamata.  Il parametro `dec` punta ad un valore Integer che fornisce la posizione del separatore decimale rispetto all'inizio della stringa.  Un Integer 0 o negativo indica che il separatore decimale si trova a sinistra della prima cifra.  I punti del parametro `sign` su un intero che indica il segno del numero convertito.  Se il valore Integer è 0, il numero è positivo.  In caso contrario, il numero è negativo.  
  
 La differenza tra `_ecvt` e `_fcvt` risiede nell'interpretazione del parametro `count`.  `_ecvt` interpreta `count` come il numero totale di cifre contenute nella stringa di output, mentre `_fcvt` interpreta `count` come il numero di cifre dopo il separatore decimale.  
  
 `_ecvt` e `_fcvt` utilizzano un solo buffer allocato in modo statico per la conversione.  Ogni chiamata a una di queste routine distrugge il risultato della chiamata precedente.  
  
 Questa funzione convalida i parametri.  Se `dec` o `sign` sono null, o `count` è 0, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` è impostato su `EINVAL` e viene restituito NULL.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_ecvt`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_ecvt.c  
// compile with: /W3  
// This program uses _ecvt to convert a  
// floating-point number to a character string.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int     decimal,   sign;  
   char    *buffer;  
   int     precision = 10;  
   double  source = 3.1415926535;  
  
   buffer = _ecvt( source, precision, &decimal, &sign ); // C4996  
   // Note: _ecvt is deprecated; consider using _ecvt_s instead  
   printf( "source: %2.10f   buffer: '%s'  decimal: %d  sign: %d\n",  
           source, buffer, decimal, sign );  
}  
```  
  
  **source: 3.1415926535   buffer: '3141592654'  decimal: 1  sign: 0**   
## Equivalente .NET Framework  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [\_fcvt](../../c-runtime-library/reference/fcvt.md)   
 [\_gcvt](../../c-runtime-library/reference/gcvt.md)