---
title: "asctime_s, _wasctime_s | Microsoft Docs"
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
  - "_wasctime_s"
  - "asctime_s"
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
  - "asctime_s"
  - "_wasctime_s"
  - "_tasctime_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_tasctime_s (funzione)"
  - "_wasctime_s (funzione)"
  - "asctime_s (funzione)"
  - "tasctime_s (funzione)"
  - "conversione della struttura di ora"
  - "ora, conversione"
  - "wasctime_s (funzione)"
ms.assetid: 17ad9b2b-a459-465d-976a-42822897688a
caps.latest.revision: 29
caps.handback.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# asctime_s, _wasctime_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire una struttura di tempo `tm` in una stringa di caratteri.  Queste funzioni sono versioni di [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md) con dei miglioramenti nella sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t asctime_s(   
   char* buffer,  
   size_t numberOfElements,  
   const struct tm *_tm   
);  
errno_t _wasctime_s(   
   wchar_t* buffer,  
   size_t numberOfElements  
   const struct tm *_tm   
);  
template <size_t size>  
errno_t asctime_s(   
   char (&buffer)[size],  
   const struct tm *_tm   
); // C++ only  
template <size_t size>  
errno_t _wasctime_s(   
   wchar_t (&buffer)[size],  
   const struct tm *_tm   
); // C++ only  
```  
  
#### Parametri  
 `buffer`  
 \[out\] Puntatore ad un buffer per archiviare il risultato della stringa di caratteri.  Questa funzione presuppone un puntatore ad una posizione di memoria valida con una dimensione specificata da `numberOfElements`.  
  
 `numberOfElements`  
 \[in\] La dimensione del buffer utilizzato per archiviare il risultato.  
  
 `_tm`  
 \[in\] Struttura DateTime  Questa funzione presuppone un puntatore a un oggetto valido `struct` `tm` .  
  
## Valore restituito  
 Zero se ha esito positivo.  Se è presente un errore, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se viene permesso all'esecuzione di continuare, il valore restituito è un codice di errore.  I codici di errore sono definiti in ERRNO.H.  Per ulteriori informazioni, vedere [Costanti errno](../../c-runtime-library/errno-constants.md).  I codici di errore restituiti per ogni condizione di errore vengono mostrati nella tabella seguente.  
  
### Condizioni di errore  
  
|`buffer`|`numberOfElements`|`tm`|Restituzione|Valore in `buffer`|  
|--------------|------------------------|----------|------------------|------------------------|  
|`NULL`|Uno|Uno|`EINVAL`|Non modificato|  
|Non`NULL` \(punta a della memoria valida\)|0|Uno|`EINVAL`|Non modificato|  
|Non `NULL`|0\< dimensione \< 26|Uno|`EINVAL`|Stringa vuota.|  
|Non `NULL`|\>\= 26|`NULL`|`EINVAL`|Stringa vuota.|  
|Non `NULL`|\>\= 26|Struttura di tempo non valida o valori fuori dall'intervallo per i componenti del tempo|`EINVAL`|Stringa vuota.|  
  
> [!NOTE]
>  Le condizioni di errore per `wasctime_s` sono simili a quelle per `asctime_s` con l'eccezione che il limite di dimensione viene misurato in parole.  
  
## Note  
 La funzione `asctime` converte un'ora archiviata come struttura in una stringa di caratteri.  Il valore `_tm` in genere viene ottenuto da una chiamata a `gmtime` o da una chiamata a `localtime`.  Entrambe le funzioni possono essere utilizzate per riempire una struttura `tm`, come definito in. TIME.H.  
  
|membro del timeptr|Valore|  
|------------------------|------------|  
|`tm_hour`|Ore da mezzanotte \(0\-23\)|  
|`tm_isdst`|Positivo se l'ora legale è attiva, 0 altrimenti; negativo se lo stato dell'ora legale è sconosciuto.  La libreria di runtime C utilizza le direttive degli Stati Uniti per implementare il calcolo dell'ora legale \(DST\).|  
|`tm_mday`|Giorno del mese \(1–31\)|  
|`tm_min`|Minuti dopo l'ora \(0\-59\)|  
|`tm_mon`|Mese \(0\-11; Gennaio \= 0\)|  
|`tm_sec`|Secondi dopo il minuto \(0\-59\)|  
|`tm_wday`|Giorno della settimana \(0–6; Domenica \= 0\)|  
|`tm_yday`|Giorno dell'anno \(0–365; Gennaio 1 \= 0\)|  
|`tm_year`|Anno \(anno corrente meno 1900\)|  
  
 Una stringa di caratteri convertita viene regolata in base alle impostazioni del fuso orario locali.  Vedere [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md), [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)e le funzioni [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md) per informazioni sulla configurazione dell'ora locale e la funzione [\_tzset](../../c-runtime-library/reference/tzset.md) per informazioni sulla definizione dell'ambiente del fuso orario e delle variabili globali,  
  
 Il risultato della stringa fornito da `asctime_s` contiene esattamente 26 caratteri e ha il seguente formato `Wed Jan 02 02:03:55 1980\n\0`.  Viene utilizzato un orario nel formato a 24 ore.  Tutti i campi hanno una larghezza costante.  Il carattere di nuova riga e il carattere null occupano le ultime due posizioni della stringa.  Il valore passato come secondo parametro deve essere almeno così grande.  Se dovesse essere inferiore, verrà restituito il codice di errore `EINVAL`.  
  
 `_wasctime_s` è una versione a caratteri di tipo "wide" di `asctime_s`.  `_wasctime_s` e `asctime_s` si comportano in modo identico in caso contrario.  
  
### Mapping di routine a Testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tasctime_s`|`asctime_s`|`asctime_s`|`_wasctime_s`|  
  
 In C\+\+, l'utilizzo di queste funzioni viene semplificato da overload del modello; gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento per la dimensione.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`asctime_s`|\<time.h\>|  
|`_wasctime_s`|\<time.h\> o \<wchar.h\>|  
  
## Sicurezza  
 Se il puntatore del buffer non è `NULL` e il puntatore non punta ad un buffer valido, la funzione sovrascriverà qualsiasi cosa ci sia a quella locazione.  Ciò può generare una violazione di accesso.  
  
 Un [sovraccarico del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795) può verificarsi se la dimensione dell'argomento passato è maggiore della dimensione del buffer.  
  
## Esempio  
 Questo programma imposta l'ora di sistema in un long integer `aclock`, la traduce nella struttura `newtime` e quindi la convertite in stringa per l'output, utilizzando la funzione `asctime_s`.  
  
```  
// crt_asctime_s.c  
#include <time.h>  
#include <stdio.h>  
  
struct tm newtime;  
__time32_t aclock;  
  
int main( void )  
{  
   char buffer[32];  
   errno_t errNum;  
   _time32( &aclock );   // Get time in seconds.  
   _localtime32_s( &newtime, &aclock );   // Convert time to struct tm form.  
  
   // Print local time as a string.  
  
   errNum = asctime_s(buffer, 32, &newtime);  
   if (errNum)  
   {  
       printf("Error code: %d", (int)errNum);  
       return 1;  
   }  
   printf( "Current date and time: %s", buffer );  
   return 0;  
}  
```  
  
  **Data e ora corrente: mercoledì 14 maggio 2003 15.30.17**   
## Equivalente .NET Framework  
  
-   <xref:System.DateTime.ToLongDateString%2A?displayProperty=fullName>  
  
-   <xref:System.DateTime.ToLongTimeString%2A?displayProperty=fullName>  
  
-   <xref:System.DateTime.ToShortDateString%2A?displayProperty=fullName>  
  
-   <xref:System.DateTime.ToShortTimeString%2A?displayProperty=fullName>  
  
-   <xref:System.DateTime.ToString%2A?displayProperty=fullName>  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [ctime\_s, \_ctime32\_s, \_ctime64\_s, \_wctime\_s, \_wctime32\_s, \_wctime64\_s](../../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime\_s, \_localtime32\_s, \_localtime64\_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [\_tzset](../../c-runtime-library/reference/tzset.md)