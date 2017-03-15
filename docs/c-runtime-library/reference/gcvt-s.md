---
title: "_gcvt_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_gcvt_s"
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
  - "_gcvt_s"
  - "gcvt_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CVTBUFSIZE"
  - "_gcvt_s (funzione)"
  - "conversioni, da virgola mobile in stringhe"
  - "CVTBUFSIZE"
  - "funzioni a virgola mobile, conversione di un numero in stringa"
  - "gcvt_s (funzione)"
  - "numeri, conversione in stringhe"
  - "stringhe [C++], conversione da virgola mobile"
ms.assetid: 0a8d8a26-5940-4ae3-835e-0aa6ec1b0744
caps.latest.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 30
---
# _gcvt_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un valore in virgola mobile in una stringa.  Si tratta di una versione di [\_gcvt](../../c-runtime-library/reference/gcvt.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _gcvt_s(   
   char *buffer,  
   size_t sizeInBytes,  
   double value,  
   int digits   
);  
template <size_t cchStr>  
errno_t _gcvt_s(   
   char (&buffer)[cchStr],  
   double value,  
   int digits   
); // C++ only  
```  
  
#### Parametri  
 \[out\] `buffer`  
 Buffer per archiviare il risultato della conversione.  
  
 \[in\] `sizeInBytes`  
 Dimensione del buffer.  
  
 \[in\] `value`  
 Valore da convertire.  
  
 \[in\] `digits`  
 Numero di cifre significative archiviate.  
  
## Valore restituito  
 Zero se ha esito positivo.  Se si verifica un errore a causa di un parametro non valido \(vedere la tabella seguente per un elenco dei valori non validi\), verrà richiamato il gestore di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, viene restituito un codice di errore.  I codici di errore sono definiti in Errno.h.  Per un elenco di questi errori, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
### Condizioni di errore  
  
|`buffer`|`sizeInBytes`|`value`|`digits`|Return|Valore in `buffer`|  
|--------------|-------------------|-------------|--------------|------------|------------------------|  
|`NULL`|any|any|any|`EINVAL`|Non modificato.|  
|Non `NULL` \(punta alla memoria valida\)|zero|any|any|`EINVAL`|Non modificato.|  
|Non `NULL` \(punta alla memoria valida\)|any|any|\>\= `sizeInBytes`|`EINVAL`|Non modificato.|  
  
 **Problemi relativi alla sicurezza**  
  
 `_gcvt_s` può generare una violazione di accesso se `buffer` non punta alla memoria valida e non è `NULL`.  
  
## Note  
 La funzione `_gcvt_s` converte un `value` in virgola mobile in una stringa di caratteri \(che include un separatore decimale e un possibile byte di segno\) e archivia la stringa in `buffer`.  `buffer` deve essere grande a sufficienza per contenere il valore convertito più un carattere di terminazione null, che viene aggiunto automaticamente.  Un buffer di lunghezza `_CVTBUFSIZE` è sufficiente per qualsiasi valore in virgola mobile.  Se viene utilizzato un buffer di dimensioni `digits` \+ 1, la funzione non sovrascriverà la fine del buffer, pertanto assicurarsi di fornire un buffer di dimensioni sufficienti per l'operazione.  `_gcvt_s` tenta di generare le cifre `digits` in formato decimale.  Se non è possibile, produce le cifre `digits` in formato esponenziale.  Gli zeri finali possono essere eliminati nella conversione.  
  
 In C\+\+, l'utilizzo di questa funzione viene semplificato da un overload del modello; l'overload può dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento per la dimensione.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 La versione di debug della funzione per prima cosa inserisce nel buffer il valore 0xFD.  Per disabilitare questo comportamento, utilizzare [\_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_gcvt_s`|\<stdlib.h\>|\<error.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_gcvt_s.c  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
int main()  
{  
  char buf[_CVTBUFSIZE];  
  int decimal;  
  int sign;  
  int err;  
  
  err = _gcvt_s(buf, _CVTBUFSIZE, 1.2, 5);  
  
  if (err != 0)  
  {  
     printf("_gcvt_s failed with error code %d\n", err);  
     exit(1);  
  }  
  
  printf("Converted value: %s\n", buf);    
  
}  
```  
  
  **Valore convertito: 1.2**   
## Equivalente .NET Framework  
 <xref:System.Convert.ToString%2A>  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [\_ecvt\_s](../../c-runtime-library/reference/ecvt-s.md)   
 [\_fcvt\_s](../../c-runtime-library/reference/fcvt-s.md)   
 [\_gcvt](../../c-runtime-library/reference/gcvt.md)