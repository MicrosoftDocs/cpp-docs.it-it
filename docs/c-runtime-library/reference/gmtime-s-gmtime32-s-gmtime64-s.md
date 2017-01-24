---
title: "gmtime_s, _gmtime32_s, _gmtime64_s | Microsoft Docs"
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
  - "_gmtime32_s"
  - "gmtime_s"
  - "_gmtime64_s"
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
  - "api-ms-win-crt-time-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_gmtime_s"
  - "gmtime64_s"
  - "gmtime32_s"
  - "_gmtime64_s"
  - "gmtime_s"
  - "_gmtime32_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "gmtime_s (funzione)"
  - "gmtime32_s (funzione)"
  - "funzioni ora"
  - "gmtime64_s (funzione)"
  - "_gmtime64_s (funzione)"
  - "conversione della struttura di ora"
  - "_gmtime_s (funzione)"
  - "_gmtime32_s (funzione)"
ms.assetid: 261c7df0-2b0c-44ba-ba61-cb83efaec60f
caps.latest.revision: 29
caps.handback.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# gmtime_s, _gmtime32_s, _gmtime64_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un valore di ora a una struttura. Queste sono versioni di [gmtime32, gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t gmtime_s(  
   struct tm* _tm,  
   const __time_t* time  
);  
errno_t _gmtime32_s(  
   struct tm* _tm,  
   const __time32_t* time  
);  
errno_t _gmtime64_s(  
   struct tm* _tm,  
   const __time64_t* time   
);  
```  
  
#### Parametri  
 `_tm`  
 Puntatore a un `tm` struttura. I campi della struttura restituita contengono il valore restituito di `timer` argomento in formato UTC anziché nell'ora locale.  
  
 `time`  
 Puntatore al tempo di archiviazione. L'ora è rappresentata come secondi trascorsi dalla mezzanotte \(00: 00:00\), 1 gennaio 1970, ora UTC \(coordinated universal time\).  
  
## Valore restituito  
 Zero se ha esito positivo. Il valore restituito è un codice di errore se si verifica un errore. Codici di errore sono definiti in errno; per un elenco di questi errori, vedere [errno](../../c-runtime-library/errno-constants.md).  
  
### Condizioni di errore  
  
|`_tm`|`time`|Valore restituito|Valore in `_tm`|  
|-----------|------------|-----------------------|---------------------|  
|`NULL`|any|`EINVAL`|Non è stato modificato.|  
|Non `NULL` \(punta alla memoria valida\)|`NULL`|`EINVAL`|Tutti i campi impostati su \-1.|  
|Non `NULL`|\< 0|`EINVAL`|Tutti i campi impostati su \-1.|  
  
 Nel caso di condizioni di due errore prima, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
## Note  
 Il `_gmtime32_s` funzione suddivide il `time` valore e lo archivia in una struttura di tipo `tm`, definito in h. Viene passato l'indirizzo della struttura `_tm`. Il valore di `time` viene in genere ottenuto da una chiamata al `time` \(funzione\).  
  
> [!NOTE]
>  L'ambiente di destinazione è consigliabile provare a determinare se l'ora legale è attivo. La libreria di run\-time C si presuppone che le regole di Stati Uniti per implementare il calcolo dell'ora legale.  
  
 Ognuno dei campi della struttura è di tipo `int`, come illustrato nella tabella seguente.  
  
 `tm_sec`  
 Secondi dopo il minuto \(0 – 59\).  
  
 `tm_min`  
 Minuti dopo l'ora \(0 – 59\).  
  
 `tm_hour`  
 Ore da mezzanotte \(0\-23\).  
  
 `tm_mday`  
 Giorno del mese \(1 – 31\).  
  
 `tm_mon`  
 Mese \(da 0 a 11; Gennaio \= 0\).  
  
 `tm_year`  
 Year \(anno meno 1900\).  
  
 `tm_wday`  
 Giorno della settimana \(0\-6; Domenica \= 0\).  
  
 `tm_yday`  
 Giorno dell'anno \(da 0 a 365; Il 1 ° gennaio \= 0\).  
  
 `tm_isdst`  
 Restituisce sempre 0 per `gmtime`.  
  
 `_gmtime64_s`, che utilizza il `__time64_t` struttura, consente le date di esprimere tramite 23:59:59, 31 dicembre 3000 UTC; mentre `gmtime32_s` rappresentano solo una data tramite 23:59:59 18 gennaio 2038 UTC. Mezzanotte del 1 gennaio 1970, è il limite inferiore dell'intervallo di date per entrambe queste funzioni.  
  
 `gmtime_s` è una funzione inline che restituisce `_gmtime64_s` e `time_t` equivale a `__time64_t`. Se è necessario forzare il compilatore in modo che interpreti `time_t` come il vecchio `time_t` a 32 bit, è possibile definire `_USE_32BIT_TIME_T`. Questo determinerebbe `gmtime_s` essere allineati al `_gmtime32_s`. Questa operazione è sconsigliata perché l'applicazione potrebbe non riuscire dopo il 18 gennaio 2038, e non è consentito in piattaforme a 64 bit.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`gmtime_s`|\<time.h\>|  
|`_gmtime32_s`|\<time.h\>|  
|`_gmtime64_s`|\<time.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_gmtime64_s.c  
// This program uses _gmtime64_s to convert a 64-bit  
// integer representation of coordinated universal time  
// to a structure named newtime, then uses asctime_s to  
// convert this structure to an output string.  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   struct tm newtime;  
   __int64 ltime;  
   char buf[26];  
   errno_t err;  
  
   _time64( &ltime );  
  
   // Obtain coordinated universal time:   
   err = _gmtime64_s( &newtime, &ltime );  
   if (err)  
   {  
      printf("Invalid Argument to _gmtime64_s.");  
   }  
  
   // Convert to an ASCII representation   
   err = asctime_s(buf, 26, &newtime);  
   if (err)  
   {  
      printf("Invalid Argument to asctime_s.");  
   }  
  
   printf( "Coordinated universal time is %s\n",   
           buf );  
}  
```  
  
```Output  
UTC è 25 aprile venerdì 20:12:33 2003  
```  
  
## Equivalente .NET Framework  
  
-   [System::DateTime::UtcNow](https://msdn.microsoft.com/en-us/library/system.datetime.utcnow.aspx)  
  
-   [System::DateTime::ToUniversalTime](https://msdn.microsoft.com/en-us/library/system.datetime.touniversaltime.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime\_s, \_wasctime\_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [\_mkgmtime, \_mkgmtime32, \_mkgmtime64](../../c-runtime-library/reference/mkgmtime-mkgmtime32-mkgmtime64.md)   
 [mktime, \_mktime32, \_mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)