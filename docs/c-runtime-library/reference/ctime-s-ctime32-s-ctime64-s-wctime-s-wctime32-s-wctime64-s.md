---
title: ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s
ms.date: 4/2/2020
api_name:
- _ctime64_s
- _wctime32_s
- ctime_s
- _wctime64_s
- _ctime32_s
- _wctime_s
- _o__ctime32_s
- _o__ctime64_s
- _o__wctime32_s
- _o__wctime64_s
api_location:
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ctime64_s
- _ctime32_s
- _tctime32_s
- _ctime64_s
- _wctime_s
- _tctime_s
- _tctime64_s
- ctime_s
- ctime32_s
helpviewer_keywords:
- _wctime32_s function
- ctime64_s function
- _tctime64_s function
- _wctime_s function
- tctime_s function
- _wctime64_s function
- ctime_s function
- ctime32_s function
- _ctime64_s function
- tctime64_s function
- wctime64_s function
- wctime_s function
- _tctime_s function
- tctime32_s function
- wctime32_s function
- time, converting
- _ctime32_s function
- _tctime32_s function
ms.assetid: 36ac419a-8000-4389-9fd8-d78b747a009b
ms.openlocfilehash: ca7636f7054b6c7e228b57e0e776250f1b4ccb32
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82914826"
---
# <a name="ctime_s-_ctime32_s-_ctime64_s-_wctime_s-_wctime32_s-_wctime64_s"></a>ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s

Convertono un valore di tempo in una stringa e lo regolano per le impostazioni di fuso orario locale. Queste sono versioni di [ctime, _ctime64, _wctime, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md) con miglioramenti di sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t ctime_s(
   char* buffer,
   size_t numberOfElements,
   const time_t *sourceTime
);
errno_t _ctime32_s(
   char* buffer,
   size_t numberOfElements,
   const __time32_t *sourceTime
);
errno_t _ctime64_s(
   char* buffer,
   size_t numberOfElements,
   const __time64_t *sourceTime )
;
errno_t _wctime_s(
   wchar_t* buffer,
   size_t numberOfElements,
   const time_t *sourceTime
);
errno_t _wctime32_s(
   wchar_t* buffer,
   size_t numberOfElements,
   const __time32_t *sourceTime
);
errno_t _wctime64_s(
   wchar_t* buffer,
   size_t numberOfElements,
   const __time64_t *sourceTime
);
```

```cpp
template <size_t size>
errno_t _ctime32_s(
   char (&buffer)[size],
   const __time32_t *sourceTime
); // C++ only
template <size_t size>
errno_t _ctime64_s(
   char (&buffer)[size],
   const __time64_t *sourceTime
); // C++ only
template <size_t size>
errno_t _wctime32_s(
   wchar_t (&buffer)[size],
   const __time32_t *sourceTime
); // C++ only
template <size_t size>
errno_t _wctime64_s(
   wchar_t (&buffer)[size],
   const __time64_t *sourceTime
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Deve essere sufficientemente grande da contenere 26 caratteri. Puntatore al risultato della stringa di caratteri oppure **null** se:

- *sourceTime* rappresenta una data precedente alla mezzanotte del 1 gennaio 1970, UTC.

- Se si usa **_ctime32_s** o **_wctime32_s** e *sourceTime* rappresenta una data successiva 23:59:59 del 18 gennaio 2038, UTC.

- Se si usa **_ctime64_s** o **_wctime64_s** e *sourceTime* rappresenta una data successiva 23:59:59, 31 dicembre 3000, UTC.

- Se si usa **_ctime_s** o **_wctime_s**, queste funzioni sono wrapper per le funzioni precedenti. Vedere la sezione relativa alle osservazioni.

*numberOfElements*<br/>
Dimensione del buffer.

*sourceTime*<br/>
Puntatore all'ora archiviata.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Se si verifica un errore a causa di un parametro non valido, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, viene restituito un codice di errore. I codici di errore sono definiti in ERRNO.H. Per un elenco di questi errori, vedere [errno](../../c-runtime-library/errno-constants.md). I codici di errore effettivo generati per ogni condizione di errore vengono visualizzati nella tabella seguente.

## <a name="error-conditions"></a>Condizioni di errore

|*buffer*|*numberOfElements*|*sourceTime*|Return|Valore nel *buffer*|
|--------------|------------------------|------------|------------|-----------------------|
|**NULL**|any|any|**EINVAL**|Non modificato|
|Not **null** (punta alla memoria valida)|0|any|**EINVAL**|Non modificato|
|Not **null**|0< size < 26|any|**EINVAL**|stringa vuota|
|Not **null**|>= 26|NULL|**EINVAL**|stringa vuota|
|Not **null**|>= 26|< 0|**EINVAL**|stringa vuota|

## <a name="remarks"></a>Osservazioni

La funzione **ctime_s** converte un valore di ora archiviato come struttura di [time_t](../../c-runtime-library/standard-types.md) in una stringa di caratteri. Il valore *sourceTime* viene in genere ottenuto da una chiamata a [Time](time-time32-time64.md), che restituisce il numero di secondi trascorsi dalla mezzanotte (00:00:00) del 1 ° gennaio 1970, UTC (Coordinated Universal Time). La stringa del valore restituito contiene esattamente 26 caratteri e ha il formato:

`Wed Jan 02 02:03:55 1980\n\0`

Viene usato un formato 24 ore. Tutti i campi hanno una larghezza costante. Il carattere di nuova riga ('\n') e il carattere null ('\0') occupano le ultime due posizioni della stringa.

La stringa di caratteri convertita viene anche regolata in base alle impostazioni di fuso orario locale. Per informazioni sulla configurazione dell'ora locale e della funzione [_tzset](tzset.md) , vedere le funzioni [Time](time-time32-time64.md), [_ftime](ftime-ftime32-ftime64.md)e [localtime32_s](localtime-s-localtime32-s-localtime64-s.md) per informazioni sulla definizione dell'ambiente e delle variabili globali del fuso orario.

**_wctime32_s** e **_wctime64_s** sono la versione a caratteri wide di **_ctime32_s** e **_ctime64_s**; restituzione di un puntatore a una stringa di caratteri wide. In caso contrario, **_ctime64_s**, **_wctime32_s**e **_wctime64_s** si comportano in modo identico a **_ctime32_s**.

**ctime_s** è una funzione inline che restituisce **_ctime64_s** e **time_t** equivale a **__time64_t**. Se è necessario forzare il compilatore a interpretare **time_t** come la precedente **time_t**a 32 bit, è possibile definire **_USE_32BIT_TIME_T**. In questo modo **ctime_s** restituirà **_ctime32_s**. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 e l'uso non è consentito in piattaforme a 64 bit.

In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tctime_s**|**ctime_s**|**ctime_s**|**_wctime_s**|
|**_tctime32_s**|**_ctime32_s**|**_ctime32_s**|**_wctime32_s**|
|**_tctime64_s**|**_ctime64_s**|**_ctime64_s**|**_wctime64_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ctime_s**, **_ctime32_s**, **_ctime64_s**|\<time.h>|
|**_wctime_s**, **_wctime32_s**, **_wctime64_s**|\<time.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_wctime_s.c
// This program gets the current
// time in time_t form and then uses _wctime_s to
// display the time in string form.

#include <time.h>
#include <stdio.h>

#define SIZE 26

int main( void )
{
   time_t ltime;
   wchar_t buf[SIZE];
   errno_t err;

   time( &ltime );

   err = _wctime_s( buf, SIZE, &ltime );
   if (err != 0)
   {
      printf("Invalid Arguments for _wctime_s. Error Code: %d\n", err);
   }
   wprintf_s( L"The time is %s\n", buf );
}
```

```Output
The time is Fri Apr 25 13:03:39 2003
```

## <a name="see-also"></a>Vedere anche

[Gestione del tempo](../../c-runtime-library/time-management.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
