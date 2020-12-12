---
description: 'Altre informazioni su: CTime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64'
title: ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64
ms.date: 4/2/2020
api_name:
- _ctime64
- _wctime32
- ctime
- _wctime64
- _ctime32
- _wctime
- _o__wctime32
- _o__wctime64
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
- _wctime64
- _ctime32
- _tctime
- _wctime
- _wctime32
- _tctime64
- _ctime64
- ctime
helpviewer_keywords:
- tctime64 function
- _ctime32 function
- ctime32 function
- _wctime function
- wctime64 function
- _tctime64 function
- _tctime32 function
- _ctime64 function
- _wctime64 function
- ctime function
- wctime32 function
- ctime64 function
- _wctime32 function
- _tctime function
- tctime32 function
- tctime function
- wctime function
- time, converting
ms.assetid: 2423de37-a35c-4f0a-a378-3116bc120a9d
ms.openlocfilehash: e50e5dca470b7e764a7b71a596d4c253d023083b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329314"
---
# <a name="ctime-_ctime32-_ctime64-_wctime-_wctime32-_wctime64"></a>ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64

Convertono un valore di tempo in una stringa e lo regolano per le impostazioni di fuso orario locale. Sono disponibili versioni più sicure di queste funzioni. Vedere [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md).

## <a name="syntax"></a>Sintassi

```C
char *ctime( const time_t *sourceTime );
char *_ctime32( const __time32_t *sourceTime );
char *_ctime64( const __time64_t *sourceTime );
wchar_t *_wctime( const time_t *sourceTime );
wchar_t *_wctime32( const __time32_t *sourceTime );
wchar_t *_wctime64( const __time64_t *sourceTime );
```

### <a name="parameters"></a>Parametri

*sourceTime*<br/>
Puntatore al tempo archiviato per la conversione.

## <a name="return-value"></a>Valore restituito

Puntatore al risultato della stringa di caratteri. Viene restituito **null** se:

- *sourceTime* rappresenta una data precedente alla mezzanotte del 1 gennaio 1970, UTC.

- Se si usa **_ctime32** o **_wctime32** e *sourceTime* rappresenta una data successiva 23:59:59 del 18 gennaio 2038, UTC.

- Se si usa **_ctime64** o **_wctime64** e *sourceTime* rappresenta una data successiva 23:59:59, 31 dicembre 3000, UTC.

**CTime** è una funzione inline che restituisce **_ctime64** e **time_t** equivale a **__time64_t**. Se è necessario forzare il compilatore a interpretare **time_t** come la precedente **time_t** a 32 bit, è possibile definire **_USE_32BIT_TIME_T**. In questo modo, **CTime** restituirà **_ctime32**. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 e l'uso non è consentito in piattaforme a 64 bit.

## <a name="remarks"></a>Commenti

La funzione **CTime** converte un valore di ora archiviato come valore di [time_t](../../c-runtime-library/standard-types.md) in una stringa di caratteri. Il valore *sourceTime* viene in genere ottenuto da una chiamata a [Time](time-time32-time64.md), che restituisce il numero di secondi trascorsi dalla mezzanotte (00:00:00) del 1 ° gennaio 1970, UTC (Coordinated Universal Time). La stringa del valore restituito contiene esattamente 26 caratteri e ha il formato:

```Output
Wed Jan 02 02:03:55 1980\n\0
```

Viene usato un formato 24 ore. Tutti i campi hanno una larghezza costante. Il carattere di nuova riga ('\n') e il carattere null ('\0') occupano le ultime due posizioni della stringa.

La stringa di caratteri convertita viene anche regolata in base alle impostazioni di fuso orario locale. Vedere le funzioni [Time](time-time32-time64.md), [_ftime](ftime-ftime32-ftime64.md)e [localtime](localtime-localtime32-localtime64.md) per informazioni sulla configurazione dell'ora locale e della funzione [_tzset](tzset.md) per informazioni dettagliate sulla definizione dell'ambiente e delle variabili globali del fuso orario.

Una chiamata a **CTime** modifica il singolo buffer allocato in modo statico usato dalle funzioni **gmtime** e **localtime** . Ogni chiamata a una di queste funzioni elimina il risultato della chiamata precedente. **CTime** condivide un buffer statico con la funzione **asctime** . Pertanto, una chiamata a **CTime** Elimina i risultati di qualsiasi chiamata precedente a **asctime**, **localtime** o **gmtime**.

**_wctime** e **_wctime64** sono la versione a caratteri wide di **CTime** e **_ctime64**; restituzione di un puntatore a una stringa di caratteri wide. In caso contrario, **_ctime64**, **_wctime** e **_wctime64** si comportano in modo identico a **CTime**.

Queste funzioni convalidano i relativi parametri. Se *sourceTime* è un puntatore null o se il valore *sourceTime* è negativo, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono **null** e impostano **errno** su **EINVAL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tctime**|**ctime**|**ctime**|**_wctime**|
|**_tctime32**|**_ctime32**|**_ctime32**|**_wctime32**|
|**_tctime64**|**_ctime64**|**_ctime64**|**_wctime64**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ctime**|\<time.h>|
|**_ctime32**|\<time.h>|
|**_ctime64**|\<time.h>|
|**_wctime**|\<time.h> o \<wchar.h>|
|**_wctime32**|\<time.h> o \<wchar.h>|
|**_wctime64**|\<time.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_ctime64.c
// compile with: /W3
/* This program gets the current
* time in _time64_t form, then uses ctime to
* display the time in string form.
*/

#include <time.h>
#include <stdio.h>

int main( void )
{
   __time64_t ltime;

   _time64( &ltime );
   printf( "The time is %s\n", _ctime64( &ltime ) ); // C4996
   // Note: _ctime64 is deprecated; consider using _ctime64_s
}
```

```Output
The time is Wed Feb 13 16:04:43 2002
```

## <a name="see-also"></a>Vedere anche

[Gestione del tempo](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
