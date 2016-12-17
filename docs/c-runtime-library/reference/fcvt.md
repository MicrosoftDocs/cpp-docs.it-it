---
title: "_fcvt | Microsoft Docs"
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
  - "_fcvt"
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
  - "_fcvt"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fcvt (funzione)"
  - "conversione virgola mobile, in stringhe"
  - "fcvt (funzione)"
  - "funzioni a virgola mobile"
  - "funzioni a virgola mobile, conversione di un numero in stringa"
ms.assetid: 74584c88-f0dd-4907-8fca-52da5df583f5
caps.latest.revision: 24
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _fcvt
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un numero a virgola mobile in una stringa.  È disponibile una versione più sicura di questa funzione; vedere [\_fcvt\_s](../../c-runtime-library/reference/fcvt-s.md).  
  
## Sintassi  
  
```  
char *_fcvt(   
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
 Numero di cifre dopo il separatore decimale.  
  
 `dec`  
 Puntatore alla posizione del separatore decimale archiviata.  
  
 `sign`  
 Puntatore all'indicatore di segno archiviato.  
  
## Valore restituito  
 `_fcvt` restituisce un puntatore a una stringa di cifre, NULL in caso di errore.  
  
## Note  
 La funzione di `_fcvt` converte un numero a virgola mobile in una stringa di caratteri terminata da null.  Il parametro `value` è il numero a virgola mobile da convertire.  `_fcvt` archivia le cifre di `value` come stringa e aggiunge un carattere null \("\\0"\).  Il parametro `count` specifica il numero di cifre da archiviare dopo il separatore decimale.  Le cifre in eccesso vengono arrotondati alle posizioni di `count`.  Se sono presenti meno di `count` cifre di precisione, la stringa viene completata con degli zeri.  
  
 Il numero totale di cifre restituite da `_fcvt` non supererà `_CVTBUFSIZE`.  
  
 Solo le cifre vengono archiviate nella stringa.  La posizione del separatore decimale e il segno di `value` possono essere ottenuti da `dec` e il segno dopo la chiamata.  Il parametro `dec` punta ad un valore Integer; questo valore Integer fornisce la posizione del separatore decimale rispetto all'inizio della stringa.  Un valore Integer zero o negativo indica che il separatore decimale si trova a sinistra della prima cifra.  Il parametro `sign` punta ad un intero che indica il segno di `value`.  L'intero è impostato a 0 se `value` è positivo e ad un numero diverso da zero se `value` è negativo.  
  
 La differenza tra `_ecvt` e `_fcvt` risiede nell'interpretazione del parametro `count`.  `_ecvt` interpreta `count` come il numero totale di cifre contenute nella stringa di output, mentre `_fcvt` interpreta `count` come il numero di cifre dopo il separatore decimale.  
  
 `_ecvt` e `_fcvt` utilizzano un solo buffer allocato in modo statico per la conversione.  Ogni chiamata a una di queste routine distrugge i risultati della chiamata precedente.  
  
 Questa funzione convalida i parametri.  Se `dec` o `sign` sono null, o `count` è 0, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` è impostato su `EINVAL` e viene restituito NULL.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fcvt`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_fcvt.c  
// compile with: /W3  
// This program converts the constant  
// 3.1415926535 to a string and sets the pointer  
// buffer to point to that string.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int  decimal, sign;  
   char *buffer;  
   double source = 3.1415926535;  
  
   buffer = _fcvt( source, 7, &decimal, &sign ); // C4996  
   // Note: _fcvt is deprecated; consider using _fcvt_s instead  
   printf( "source: %2.10f   buffer: '%s'   decimal: %d   sign: %d\n",  
            source, buffer, decimal, sign );  
}  
```  
  
  **source: 3.1415926535   buffer: '31415927'   decimal: 1   sign: 0**   
## Equivalente .NET Framework  
 [System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [\_ecvt](../../c-runtime-library/reference/ecvt.md)   
 [\_gcvt](../../c-runtime-library/reference/gcvt.md)