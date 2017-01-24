---
title: "gmtime, _gmtime32, _gmtime64 | Microsoft Docs"
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
  - "_gmtime32"
  - "gmtime"
  - "_gmtime64"
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
  - "gmtime"
  - "_gmtime32"
  - "_gmtime64"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_gmtime32 (funzione)"
  - "_gmtime64 (funzione)"
  - "gmtime (funzione)"
  - "gmtime32 (funzione)"
  - "gmtime64 (funzione)"
  - "funzioni ora"
  - "conversione della struttura di ora"
ms.assetid: 315501f3-477e-475d-a414-ef100ee0db27
caps.latest.revision: 30
caps.handback.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# gmtime, _gmtime32, _gmtime64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un valore di ora a una struttura. Le versioni più sicure di queste funzioni sono disponibili. vedere [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md).  
  
## Sintassi  
  
```  
struct tm *gmtime(   
   const time_t *timer   
);  
struct tm *_gmtime32(   
   const __time32_t *timer   
);  
struct tm *_gmtime64(   
   const __time64_t *timer   
);  
```  
  
#### Parametri  
 `timer`  
 Puntatore al tempo di archiviazione. L'ora è rappresentata come secondi trascorsi dalla mezzanotte \(00: 00:00\), 1 gennaio 1970, ora UTC \(coordinated universal time\).  
  
## Valore restituito  
 Un puntatore a una struttura di tipo [tm](../../c-runtime-library/standard-types.md). I campi della struttura restituita contengono il valore restituito di `timer` argomento in formato UTC anziché nell'ora locale. Ognuno dei campi della struttura è di tipo `int`, come segue:  
  
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
  
 Entrambe le versioni a 32 bit e 64 bit di `gmtime`, `mktime`, `mkgmtime`, e `localtime` utilizzano in genere `tm` struttura per ogni thread per la conversione. Ogni chiamata a una di queste funzioni elimina il risultato di una chiamata precedente. Se `timer` rappresenta una data precedente alla mezzanotte dell'1 gennaio 1970, `gmtime` restituisce `NULL`. Non vi è restituzione di errori.  
  
 `_gmtime64`, che utilizza il `__time64_t` struttura, abilita le date di esprimere tramite 23:59:59, 31 dicembre 3000 UTC, mentre `_gmtime32` rappresentano solo una data tramite 23:59:59 18 gennaio 2038 UTC. Mezzanotte del 1 gennaio 1970, è il limite inferiore dell'intervallo di date per entrambe le funzioni.  
  
 `gmtime` è una funzione inline che restituisce `_gmtime64`, e `time_t` equivale a `__time64_t` a meno che non `_USE_32BIT_TIME_T` è definito. Se è necessario forzare il compilatore a interpretare `time_t` come il precedente 32\-bit `time_t`, è possibile definire `_USE_32BIT_TIME_T`, ma determina `gmtime` essere allineati al `_gmtime32` e `time_t` deve essere definito come `__time32_t`. È consigliabile che non eseguire questa operazione, perché non è consentito in piattaforme a 64 bit e in ogni caso l'applicazione potrebbe non riuscire dopo il 18 gennaio 2038.  
  
 Queste funzioni convalidano i relativi parametri. Se `timer` è un puntatore null o se il valore del timer è negativo, queste funzioni richiamano un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono `NULL` e impostare `errno` a `EINVAL`.  
  
## Note  
 Il `_gmtime32` funzione suddivide il `timer` valore e lo archivia in una struttura allocata in modo statico di tipo `tm`, definito in tempo. H. Il valore di `timer` viene in genere ottenuto da una chiamata al `time` \(funzione\).  
  
> [!NOTE]
>  Nella maggior parte dei casi, l'ambiente di destinazione tenta di determinare se l'ora legale è attivo. La libreria di run\-time C si presuppone che vengono utilizzate le regole di Stati Uniti per implementare il calcolo dell'ora legale \(DST\).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`gmtime`|\<time.h\>|  
|`_gmtime32`|\<time.h\>|  
|`_gmtime64`|\<time.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
  
      // crt_gmtime.c  
// compile with: /W3  
// This program uses _gmtime64 to convert a long-  
// integer representation of coordinated universal time  
// to a structure named newtime, then uses asctime to  
// convert this structure to an output string.  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   struct tm *newtime;  
   __int64 ltime;  
   char buff[80];  
  
   _time64( &ltime );  
  
   // Obtain coordinated universal time:  
   newtime = _gmtime64( &ltime ); // C4996  
   // Note: _gmtime64 is deprecated; consider using _gmtime64_s  
   asctime_s( buff, sizeof(buff), newtime );  
   printf( "Coordinated universal time is %s\n", buff );  
}  
```  
  
```Output  
UTC è 12 Feb mar 11:23:31 2002  
```  
  
## Equivalente .NET Framework  
  
-   [System::DateTime::UtcNow](https://msdn.microsoft.com/en-us/library/system.datetime.utcnow.aspx)  
  
-   [System::DateTime::ToUniversalTime](https://msdn.microsoft.com/en-us/library/system.datetime.touniversaltime.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [\_mkgmtime, \_mkgmtime32, \_mkgmtime64](../../c-runtime-library/reference/mkgmtime-mkgmtime32-mkgmtime64.md)   
 [mktime, \_mktime32, \_mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)