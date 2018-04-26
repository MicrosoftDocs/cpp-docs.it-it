---
title: _cprintf, _cprintf_l, _cwprintf, _cwprintf_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _cwprintf_l
- _cprintf_l
- _cwprintf
- _cprintf
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
apitype: DLLExport
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
dev_langs:
- C++
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
caps.latest.revision: 34
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 99673b75a09147a1596f133720b640f6fa5138f1
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="cprintf-cprintfl-cwprintf-cwprintfl"></a>_cprintf, _cprintf_l, _cwprintf, _cwprintf_l

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

## <a name="remarks"></a>Note

Queste funzioni formattano e stampano una serie di caratteri e valori direttamente sulla console, utilizzando il **putch** funzione (**putwch** per **cwprintf**) e caratteri di output . Ogni argomento nel *argument_list* (se presente) viene convertita e restituita in base alla specifica del formato corrispondente in *formato*. Il *formato* argomento Usa il [formattare sintassi specifica per le funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md). A differenza di **fprintf**, **printf**, e **sprintf** funzioni, né **cprintf** né **cwprintf**converte i caratteri di avanzamento di riga in combinazioni di ritorno a capo e avanzamento riga (CR-LF) quando l'output.

Una differenza importante è che **cwprintf** consente di visualizzare caratteri Unicode quando si utilizza Windows. A differenza **cprintf**, **cwprintf** utilizza le impostazioni locali della console corrente.

Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passato anziché le impostazioni locali correnti.

**cprintf** convalida il *formato* parametro. Se *formato* è un puntatore null, la funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e imposta **errno** alla **EINVAL**.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tcprintf**|**_cprintf**|**_cprintf**|**_cwprintf**|
|**tcprintf_l**|**_cprintf_l**|**_cprintf_l**|**_cwprintf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**cprintf**, **cprintf_l**|\<conio.h>|
|**cwprintf**, **cwprintf_l**|\<conio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[I/O su console e porta](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_cscanf, _cscanf_l, _cwscanf, _cwscanf_l](cscanf-cscanf-l-cwscanf-cwscanf-l.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l](vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)<br/>
[_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l](cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md)<br/>
[_cprintf_p, _cprintf_p_l, _cwprintf_p, _cwprintf_p_l](cprintf-p-cprintf-p-l-cwprintf-p-cwprintf-p-l.md)<br/>
[Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)<br/>
