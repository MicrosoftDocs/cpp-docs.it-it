---
title: asctime_s, _wasctime_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wasctime_s
- asctime_s
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-time-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- asctime_s
- _wasctime_s
- _tasctime_s
dev_langs:
- C++
helpviewer_keywords:
- tasctime_s function
- _tasctime_s function
- time structure conversion
- wasctime_s function
- time, converting
- _wasctime_s function
- asctime_s function
ms.assetid: 17ad9b2b-a459-465d-976a-42822897688a
caps.latest.revision: 29
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 4d4b2bf3c4fb4180b6da1d39ca26bfe819971f31
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="asctimes-wasctimes"></a>asctime_s, _wasctime_s
Convertire una struttura temporale `tm` in una stringa di caratteri. Queste funzioni sono versioni di [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md) con miglioramenti per la sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `buffer`  
 [out] Puntatore a un buffer per archiviare il risultato della stringa di caratteri. Questa funzione presuppone un puntatore a una posizione di memoria valida con una dimensione specificata da `numberOfElements`.  
  
 `numberOfElements`  
 [in] Dimensioni del buffer usato per archiviare il risultato.  
  
 `_tm`  
 [in] Struttura di data e ora. Questa funzione presuppone un puntatore a un oggetto `struct tm` valido.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo. In caso di esito negativo, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, il valore restituito è un codice di errore. I codici di errore sono definiti in ERRNO.H. Per altre informazioni, vedere [Costanti errno](../../c-runtime-library/errno-constants.md). I codici di errore effettivo restituiti per ogni condizione di errore sono elencati nella tabella seguente.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`buffer`|`numberOfElements`|`tm`|Valore restituito|Valore in `buffer`|  
|--------------|------------------------|----------|------------|-----------------------|  
|`NULL`|Qualsiasi|Qualsiasi|`EINVAL`|Non modificato|  
|Non `NULL` (punta alla memoria valida)|0|Qualsiasi|`EINVAL`|Non modificato|  
|Not `NULL`|0< size < 26|Qualsiasi|`EINVAL`|Stringa vuota|  
|Not `NULL`|>= 26|`NULL`|`EINVAL`|Stringa vuota|  
|Not `NULL`|>= 26|Struttura temporale non valida o valori fuori intervallo per i componenti dell'ora|`EINVAL`|Stringa vuota|  
  
> [!NOTE]
>  Condizioni di errore per `wasctime_s` sono simili a `asctime_s` con l'eccezione che il limite delle dimensioni è misurato in parole.  
  
## <a name="remarks"></a>Note  
 La funzione `asctime` converte un'ora archiviata come struttura in una stringa di caratteri. Il valore `_tm` viene in genere ottenuto da una chiamata a `gmtime` o `localtime`. Entrambe le funzioni possono essere usate per compilare una struttura `tm`, come definito in TIME.H.  
  
|membro timeptr|Valore|  
|--------------------|-----------|  
|`tm_hour`|Ore da mezzanotte (0-23)|  
|`tm_isdst`|Positivo se è in vigore l'ora legale. 0 se l'ora legale non è in vigore. Negativo se lo stato dell'ora legale è sconosciuto. La libreria di runtime C presuppone le regole relative agli Stati Uniti per implementare il calcolo dell'ora legale (DST).|  
|`tm_mday`|Giorno del mese (1-31)|  
|`tm_min`|Minuti dopo l'ora (0-59)|  
|`tm_mon`|Mese (da 0 a 11; Gennaio = 0)|  
|`tm_sec`|Secondi dopo il minuto (0-59)|  
|`tm_wday`|Giorno della settimana (0-6. Domenica = 0)|  
|`tm_yday`|Giorno dell'anno (365-0; Il 1 ° gennaio = 0)|  
|`tm_year`|Anno (anno corrente meno 1900)|  
  
 La stringa di caratteri convertita viene anche modificata in base alle impostazioni di fuso orario locale. Vedere le funzioni [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md), [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md) e [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md) per informazioni sulla configurazione dell'ora locale e la funzione [_tzset](../../c-runtime-library/reference/tzset.md) per informazioni sulla definizione delle variabili di ambiente e globali del fuso orario.  
  
 Il risultato stringa prodotto da `asctime_s` contiene esattamente 26 caratteri e ha il formato `Wed Jan 02 02:03:55 1980\n\0`. Viene usato un formato 24 ore. Tutti i campi hanno una larghezza costante. Il carattere di nuova riga e il carattere null occupano le ultime due posizioni della stringa. Il valore passato come secondo parametro deve avere una dimensione minima corrispondente. Se è minore, verrà restituito il codice di errore `EINVAL`.  
  
 `_wasctime_s` è una versione a caratteri wide di `asctime_s`. In caso contrario, `_wasctime_s` e `asctime_s` si comportano in modo identico.  
  
### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tasctime_s`|`asctime_s`|`asctime_s`|`_wasctime_s`|  
  
 In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`asctime_s`|\<time.h>|  
|`_wasctime_s`|\<time.h> o \<wchar.h>|  
  
## <a name="security"></a>Sicurezza  
 Se il puntatore del buffer non è `NULL` e il puntatore non punta a un buffer valido, la funzione sovrascriverà qualsiasi elemento che si trova nella posizione. Questo può comportare anche una violazione di accesso.  
  
 Se l'argomento di dimensione passato è maggiore della dimensione effettiva del buffer, è possibile che si verifichi un [sovraccarico del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
## <a name="example"></a>Esempio  
 Questo programma inserisce l'ora di sistema in `aclock` long integer, la traduce nella struttura `newtime` e quindi la converte in stringa per l'output usando la funzione `asctime_s`.  
  
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
  
```Output  
Current date and time: Wed May 14 15:30:17 2003  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [_tzset](../../c-runtime-library/reference/tzset.md)
