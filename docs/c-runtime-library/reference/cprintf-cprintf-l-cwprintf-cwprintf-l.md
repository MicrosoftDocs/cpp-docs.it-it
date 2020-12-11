---
description: 'Altre informazioni su: _cprintf, _cprintf_l, _cwprintf, _cwprintf_l'
title: _cprintf, _cprintf_l, _cwprintf, _cwprintf_l
ms.date: 11/04/2016
api_name:
- _cwprintf_l
- _cprintf_l
- _cwprintf
- _cprintf
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _cwprintf
- cwprintf
- tcprintf
- _tcprintf
- _cprintf
- cwprintf_l
- tcprintf_l
- _tcprintf_l
- cprintf_l
- _cprintf_l
- _cwprintf_l
helpviewer_keywords:
- _cprintf_l function
- _cwprintf_l function
- cwprintf function
- cprintf_l function
- characters, printing to console
- printing characters to console
- _tcprintf_l function
- tcprintf function
- _tcprintf function
- tcprintf_l function
- _cwprintf function
- cwprintf_l function
- _cprintf function
ms.assetid: 67ffefd4-45b3-4be0-9833-d8d26ac7c4e2
ms.openlocfilehash: a935f43c00fab31a582012e938db16e3aa1a5f6e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97162378"
---
# <a name="_cprintf-_cprintf_l-_cwprintf-_cwprintf_l"></a>_cprintf, _cprintf_l, _cwprintf, _cwprintf_l

Formatta e stampa nella console. Sono disponibili versioni più sicure, vedere [cprintf_s, _cprintf_s_l, cwprintf_s, _cwprintf_s_l](cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _cprintf(
   const char * format [, argument_list]
);
int _cprintf_l(
   const char * format,
   locale_t locale [, argument_list]
);
int _cwprintf(
   const wchar * format [, argument_list]
);
int _cwprintf_l(
   const wchar * format,
   locale_t locale [, argument_list]
);
```

### <a name="parameters"></a>Parametri

*format*<br/>
Stringa di controllo del formato.

*argument_list*<br/>
Parametri facoltativi per la stringa di formato.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Numero di caratteri stampati.

## <a name="remarks"></a>Commenti

Queste funzioni formattano e stampano una serie di caratteri e valori direttamente nella console, usando la funzione **_putch** (**_putwch** per **_cwprintf**) per restituire i caratteri. Ogni argomento in *argument_list* , se presente, viene convertito e restituito in base alla specifica di formato corrispondente nel *formato*. L'argomento *Format* usa la [sintassi per la specifica del formato per le funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md). Diversamente dalle funzioni **fprintf**, **printf** e **sprintf** , non **_cprintf** né **_cwprintf** converte i caratteri di avanzamento riga in combinazioni di ritorno a capo/avanzamento riga (CR-LF) durante l'output.

Una differenza importante è che **_cwprintf** Visualizza i caratteri Unicode quando viene usato in Windows. A differenza di **_cprintf**, **_cwprintf** usa le impostazioni locali della console correnti.

Le versioni di queste funzioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato anziché le impostazioni locali correnti.

**_cprintf** convalida il parametro *Format* . Se *Format* è un puntatore null, la funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce-1 e **errno** viene impostato su **EINVAL**.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcprintf**|**_cprintf**|**_cprintf**|**_cwprintf**|
|**_tcprintf_l**|**_cprintf_l**|**_cprintf_l**|**_cwprintf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_cprintf**, **_cprintf_l**|\<conio.h>|
|**_cwprintf**, **_cwprintf_l**|\<conio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_cprintf.c
// compile with: /c
// This program displays some variables to the console.

#include <conio.h>

int main( void )
{
    int         i = -16,
                h = 29;
    unsigned    u = 62511;
    char        c = 'A';
    char        s[] = "Test";

    // Note that console output does not translate \n as
    // standard output does. Use \r\n instead.
    //
    _cprintf( "%d  %.4x  %u  %c %s\r\n", i, h, u, c, s );
}
```

```Output
-16  001d  62511  A Test
```

## <a name="see-also"></a>Vedere anche

[I/O console e porta](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_cscanf, _cscanf_l, _cwscanf, _cwscanf_l](cscanf-cscanf-l-cwscanf-cwscanf-l.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \_ _swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l](vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)<br/>
[_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l](cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md)<br/>
[_cprintf_p, _cprintf_p_l, _cwprintf_p, _cwprintf_p_l](cprintf-p-cprintf-p-l-cwprintf-p-cwprintf-p-l.md)<br/>
[Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)<br/>
