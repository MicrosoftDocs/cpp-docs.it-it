---
title: "_ecvt_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ecvt_s"
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
  - "ecvt_s"
  - "_ecvt_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ecvt_s (funzione)"
  - "conversione di numeri double"
  - "ecvt_s (funzione)"
  - "numeri, conversione"
ms.assetid: d52fb0a6-cb91-423f-80b3-952a8955d914
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 25
---
# _ecvt_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un numero `double` in una stringa.  Si tratta di una versione di [\_ecvt](../../c-runtime-library/reference/ecvt.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _ecvt_s(   
   char * _Buffer,  
   size_t _SizeInBytes,  
   double _Value,  
   int _Count,  
   int *_Dec,  
   int *_Sign  
);  
template <size_t size>  
errno_t _ecvt_s(   
   char (&_Buffer)[size],  
   double _Value,  
   int _Count,  
   int *_Dec,  
   int *_Sign  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `_Buffer`  
 Riempito con il puntatore alla stringa di cifre, il risultato della conversione.  
  
 \[in\] `_SizeInBytes`  
 Dimensione, in byte, del buffer.  
  
 \[in\] `_Value`  
 Numeri da convertire.  
  
 \[in\] `_Count`  
 Numero di cifre archiviato.  
  
 \[out\] `_Dec`  
 Posizione archiviata del separatore decimale.  
  
 \[out\] `_Sign`  
 Il segno del numero convertito.  
  
## Valore restituito  
 Zero se ha esito positivo.  Il valore restituito è un codice di errore in presenza di un fallimento.  I codici di errore sono definiti in Errno.h.  Per ulteriori informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Nel caso di un parametro non valido, come indicato nella seguente tabella, questa funzione viene richiamata dal gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` e imposta `EINVAL` su `EINVAL`.  
  
### Condizioni di errore  
  
|`_Buffer`|`_SizeInBytes`|\_Value|\_Count|\_Dec|\_Sign|Valore restituito|Valore in `buffer`|  
|---------------|--------------------|-------------|-------------|-----------|------------|-----------------------|------------------------|  
|`NULL`|any|any|any|any|any|`EINVAL`|Non modificato.|  
|Non `NULL` \(punta alla memoria valida\)|\<\=0|any|any|any|any|`EINVAL`|Non modificato.|  
|any|any|any|any|`NULL`|any|`EINVAL`|Non modificato.|  
|any|any|any|any|any|`NULL`|`EINVAL`|Non modificato.|  
  
 **Problemi relativi alla sicurezza**  
  
 `_ecvt_s` potrebbe generare una violazione di accesso se `buffer` non punta alla memoria valida e non è `NULL`.  
  
## Note  
 La funzione `_ecvt_s` converte un numero a virgola mobile in una stringa di caratteri terminata da null.  Il parametro `_Value` è il numero a virgola mobile da convertire.  Questa funzione memorizza fino a `count` cifre di `_Value` come stringa e aggiunge un carattere null \('\\0'\).  Se il numero di cifre in `_Value` supera `_Count`, la cifra meno significativa viene arrotondata.  Se sono presenti meno di `count` cifre, la stringa viene completata con degli zeri.  
  
 Solo le cifre vengono archiviate nella stringa.  La posizione del separatore decimale e il segno di `_Value` possono essere ottenuti da `_Dec` e `_Sign` dopo la chiamata.  Il parametro `_Dec` punta ad un valore Integer che fornisce la posizione del separatore decimale rispetto all'inizio della stringa.  Un Integer 0 o negativo indica che il separatore decimale si trova a sinistra della prima cifra.  I punti del parametro `_Sign` su un intero che indica il segno del numero convertito.  Se il valore Integer è 0, il numero è positivo.  In caso contrario, il numero è negativo.  
  
 Un buffer di lunghezza `_CVTBUFSIZE` è sufficiente per qualsiasi valore in virgola mobile.  
  
 La differenza tra `_ecvt_s` e `_fcvt_s` risiede nell'interpretazione del parametro `_Count`.  `_ecvt_s` interpreta `_Count` come il numero totale di cifre contenute nella stringa di output, mentre `_fcvt_s` interpreta `_Count` come il numero di cifre dopo il separatore decimale.  
  
 In C\+\+, l'utilizzo di questa funzione viene semplificato da un overload del modello; l'overload può dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento per la dimensione.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 La versione di debug della funzione per prima cosa inserisce nel buffer il valore 0xFD.  Per disattivare questo comportamento, utilizzare [\_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|-------------------------------|------------------------------|  
|`_ecvt_s`|\<stdlib.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// ecvt_s.c  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
int main( )  
{  
  char * buf = 0;  
  int decimal;  
  int sign;  
  int err;  
  
  buf = (char*) malloc(_CVTBUFSIZE);  
  err = _ecvt_s(buf, _CVTBUFSIZE, 1.2, 5, &decimal, &sign);  
  
  if (err != 0)  
  {  
     printf("_ecvt_s failed with error code %d\n", err);  
     exit(1);  
  }  
  
  printf("Converted value: %s\n", buf);    
  
}  
```  
  
  **Valore convertito: 12000**   
## Equivalente .NET Framework  
 <xref:System.Convert.ToString%2A>  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [\_ecvt](../../c-runtime-library/reference/ecvt.md)   
 [\_fcvt\_s](../../c-runtime-library/reference/fcvt-s.md)   
 [\_gcvt\_s](../../c-runtime-library/reference/gcvt-s.md)