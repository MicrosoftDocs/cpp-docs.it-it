---
description: 'Altre informazioni su: _fputc_nolock, _fputwc_nolock'
title: _fputc_nolock, _fputwc_nolock
ms.date: 4/2/2020
api_name:
- _fputwc_nolock
- _fputc_nolock
- _o__fputc_nolock
- _o__fputwc_nolock
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
- api-ms-win-crt-stdio-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _fputc_nolock
- fputwc_nolock
- fputc_nolock
- fputtc_nolock
- _fputwc_nolock
- _fputtc_nolock
helpviewer_keywords:
- streams, writing characters to
- fputwc_nolock function
- fputtc_nolock function
- _fputc_nolock function
- fputc_nolock function
- _fputtc_nolock function
- _fputwc_nolock function
ms.assetid: c63eb3ad-58fa-46d0-9249-9c25f815eab9
ms.openlocfilehash: c9070f641fce2acbd584ef75f6209464f3e90130
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314159"
---
# <a name="_fputc_nolock-_fputwc_nolock"></a>_fputc_nolock, _fputwc_nolock

Scrive un carattere in un flusso senza bloccare il thread.

## <a name="syntax"></a>Sintassi

```C
int _fputc_nolock(
   int c,
   FILE *stream
);
wint_t _fputwc_nolock(
   wchar_t c,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Carattere da scrivere.

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce il carattere scritto. Per informazioni sugli errori, vedere [fputc, fputwc](fputc-fputwc.md).

## <a name="remarks"></a>Commenti

**_fputc_nolock** e **_fputwc_nolock** sono identici rispettivamente a **fputc** e **fputwc**, ad eccezione del fatto che non sono protette da interferenze da parte di altri thread. Potrebbero essere più veloci perché non comportano un sovraccarico che blocca altri thread. Utilizzare queste funzioni solo in contesti thread-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.

Le due funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI. **_fputc_nolock** attualmente non supporta l'output in un flusso Unicode.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_fputtc_nolock**|**_fputc_nolock**|**_fputc_nolock**|**_fputwc_nolock**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fputc_nolock**|\<stdio.h>|
|**_fputwc_nolock**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app piattaforma UWP (Universal Windows Platform) (UWP). Gli handle del flusso standard associati alla console, ovvero **stdin**, **stdout** e **stderr**, devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano usarle nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fputc_nolock.c
// This program uses _fputc_nolock
// to send a character array to stdout.

#include <stdio.h>

int main( void )
{
   char strptr1[] = "This is a test of _fputc_nolock!!\n";
   char *p;

   // Print line to stream using fputc.
   p = strptr1;
   while( (*p != '\0') && _fputc_nolock( *(p++), stdout ) != EOF ) ;

}
```

```Output
This is a test of _fputc_nolock!!
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fgetc, fgetwc](fgetc-fgetwc.md)<br/>
[putc, putwc](putc-putwc.md)<br/>
