---
title: "_fcvt_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fcvt_s"
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
  - "fcvt_s"
  - "_fcvt_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_fcvt_s (funzione)"
  - "conversione virgola mobile, in stringhe"
  - "fcvt_s (funzione)"
  - "funzioni a virgola mobile, conversione di un numero in stringa"
ms.assetid: 48671197-1d29-4c2b-a5d8-d2368f5f68a1
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 27
---
# _fcvt_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un numero a virgola mobile in una stringa.  Si tratta di una versione di [\_fcvt](../../c-runtime-library/reference/fcvt.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _fcvt_s(   
   char* buffer,  
   size_t sizeInBytes,  
   double value,  
   int count,  
   int *dec,  
   int *sign   
);  
template <size_t size>  
errno_t _fcvt_s(   
   char (&buffer)[size],  
   double value,  
   int count,  
   int *dec,  
   int *sign   
); // C++ only  
```  
  
#### Parametri  
 \[out\] `buffer`  
 Il buffer fornito che conterrà il risultato della conversione.  
  
 \[in\] `sizeInBytes`  
 La dimensione, in byte, del buffer.  
  
 \[in\] `value`  
 Numeri da convertire.  
  
 \[in\] `count`  
 Numero di cifre dopo il separatore decimale.  
  
 \[out\] `dec`  
 Puntatore alla posizione del separatore decimale archiviata.  
  
 \[out\] `sign`  
 Puntatore all'indicatore di segno archiviato.  
  
## Valore restituito  
 Zero se ha esito positivo.  Il valore restituito è un codice di errore in presenza di un fallimento.  I codici di errore sono definiti in Errno.h.  Per un elenco di questi errori, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Nel caso di un parametro non valido, come indicato nella seguente tabella, questa funzione viene richiamata dal gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` e imposta `EINVAL` su `EINVAL`.  
  
### Condizioni di errore  
  
|`buffer`|`sizeInBytes`|predefinito|Conteggio|dec|sign|Restituzione|Valore in `buffer`|  
|--------------|-------------------|-----------------|---------------|---------|----------|------------------|------------------------|  
|`NULL`|any|any|any|any|any|`EINVAL`|Non modificato.|  
|Non `NULL` \(punta alla memoria valida\)|\<\=0|any|any|any|any|`EINVAL`|Non modificato.|  
|any|any|any|any|`NULL`|any|`EINVAL`|Non modificato.|  
|any|any|any|any|any|`NULL`|`EINVAL`|Non modificato.|  
  
 **Problemi relativi alla sicurezza**  
  
 `_fcvt_s` potrebbe generare una violazione di accesso se `buffer` non punta alla memoria valida e non è `NULL`.  
  
## Note  
 La funzione di `_fcvt_s` converte un numero a virgola mobile in una stringa di caratteri terminata da null.  Il parametro `value` è il numero a virgola mobile da convertire.  `_fcvt_s` archivia le cifre di `value` come stringa e aggiunge un carattere null \("\\0"\).  Il parametro `count` specifica il numero di cifre da archiviare dopo il separatore decimale.  Le cifre in eccesso vengono arrotondati alle posizioni di `count`.  Se sono presenti meno di `count` cifre di precisione, la stringa viene completata con degli zeri.  
  
 Solo le cifre vengono archiviate nella stringa.  La posizione del separatore decimale e il segno di `value` possono essere ottenuti da `dec` e `sign` dopo la chiamata.  Il parametro `dec` punta ad un valore Integer; questo valore Integer fornisce la posizione del separatore decimale rispetto all'inizio della stringa.  Un valore Integer zero o negativo indica che il separatore decimale si trova a sinistra della prima cifra.  Il parametro `sign` punta ad un intero che indica il segno di `value`.  L'intero è impostato a 0 se `value` è positivo e ad un numero diverso da zero se `value` è negativo.  
  
 Un buffer di lunghezza `_CVTBUFSIZE` è sufficiente per qualsiasi valore in virgola mobile.  
  
 La differenza tra `_ecvt_s` e `_fcvt_s` risiede nell'interpretazione del parametro `count`.  `_ecvt_s` interpreta `count` come il numero totale di cifre contenute nella stringa di output e `_fcvt_s` interpreta c`ount` come il numero di cifre dopo il separatore decimale.  
  
 In C\+\+, l'utilizzo di questa funzione viene semplificato da un overload del modello; l'overload può dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento per la dimensione.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 La versione di debug della funzione per prima cosa inserisce nel buffer il valore 0xFD.  Per disattivare questo comportamento, utilizzare [\_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|-------------------------------|------------------------------|  
|`_fcvt_s`|\<stdlib.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
 **Librerie:** Tutte le versioni di [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// fcvt_s.c  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
int main()  
{  
  char * buf = 0;  
  int decimal;  
  int sign;  
  int err;  
  
  buf = (char*) malloc(_CVTBUFSIZE);  
  err = _fcvt_s(buf, _CVTBUFSIZE, 1.2, 5, &decimal, &sign);  
  
  if (err != 0)  
  {  
     printf("_fcvt_s failed with error code %d\n", err);  
     exit(1);  
  }  
  
  printf("Converted value: %s\n", buf);    
  
}  
```  
  
  **Valore convertito: 120000**   
## Equivalente .NET Framework  
 <xref:System.Convert.ToString%2A>  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [\_ecvt\_s](../../c-runtime-library/reference/ecvt-s.md)   
 [\_gcvt\_s](../../c-runtime-library/reference/gcvt-s.md)   
 [\_fcvt](../../c-runtime-library/reference/fcvt.md)