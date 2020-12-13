---
description: 'Altre informazioni su: vsscanf, vswscanf'
title: vsscanf, vswscanf
ms.date: 11/04/2016
api_name:
- vsscanf
- vswscanf
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
- _vstscanf
- vsscanf
- vswscanf
helpviewer_keywords:
- vswscanf function
- vsscanf function
ms.assetid: e96180f2-df46-423d-b4eb-0a49ab819bde
ms.openlocfilehash: 8659fc132c3b3c4f8fc36ef2f36122a53f1be6ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342088"
---
# <a name="vsscanf-vswscanf"></a>vsscanf, vswscanf

Legge i dati formattati da una stringa. Sono disponibili versioni più sicure di queste funzioni. Vedere [vsscanf_s, vswscanf_s](vsscanf-s-vswscanf-s.md).

## <a name="syntax"></a>Sintassi

```C
int vsscanf(
   const char *buffer,
   const char *format,
   va_list arglist
);
int vswscanf(
   const wchar_t *buffer,
   const wchar_t *format,
   va_list arglist
);
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Dati archiviati

*format*<br/>
Stringa di controllo del formato. Per altre informazioni, vedere [Campi di specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).

*arglist*<br/>
Elenco di argomenti variabili.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce il numero di campi che vengono convertiti e assegnati correttamente. Il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. Il valore restituito è **EOF** per un errore o se viene raggiunta la fine della stringa prima della prima conversione.

Se il *buffer* o il *formato* è un puntatore **null** , viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1 e impostano **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La funzione **vsscanf** legge i dati dal *buffer* nei percorsi specificati da ogni argomento nell'elenco di argomenti di *arglist* . Ogni argomento nell'elenco deve essere un puntatore a una variabile con un tipo che corrisponde a un identificatore di tipo nel *formato*. L'argomento *Format* controlla l'interpretazione dei campi di input e ha lo stesso formato e la stessa funzione dell'argomento *Format* per la funzione **scanf** . Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

> [!IMPORTANT]
> Quando si utilizza **vsscanf** per leggere una stringa, specificare sempre una larghezza per il formato **% s** (ad esempio, **"% 32s"** anziché **"% s"**); in caso contrario, l'input formattato in modo errato può causare un sovraccarico del buffer.

**vswscanf** è una versione a caratteri wide di **vsscanf**; gli argomenti di **vswscanf** sono stringhe a caratteri wide. **vsscanf** non gestisce i caratteri esadecimali multibyte. **vswscanf** non gestisce i caratteri esadecimali a larghezza intera Unicode o "zona di compatibilità". In caso contrario, **vswscanf** e **vsscanf** si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vstscanf**|**vsscanf**|**vsscanf**|**vswscanf**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**vsscanf**|\<stdio.h>|
|**vswscanf**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_vsscanf.c
// compile with: /W3
// This program uses vsscanf to read data items
// from a string named tokenstring, then displays them.

#include <stdio.h>
#include <stdarg.h>

int call_vsscanf(char *tokenstring, char *format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vsscanf(tokenstring, format, arglist);
    va_end(arglist);
    return result;
}

int main( void )
{
    char  tokenstring[] = "15 12 14...";
    char  s[81];
    char  c;
    int   i;
    float fp;

    // Input various data from tokenstring:
    // max 80 character string:
    call_vsscanf(tokenstring, "%80s", s);
    call_vsscanf(tokenstring, "%c", &c);
    call_vsscanf(tokenstring, "%d", &i);
    call_vsscanf(tokenstring, "%f", &fp);

    // Output the data read
    printf("String    = %s\n", s);
    printf("Character = %c\n", c);
    printf("Integer:  = %d\n", i);
    printf("Real:     = %f\n", fp);
}
```

```Output
String    = 15
Character = 1
Integer:  = 15
Real:     = 15.000000
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \_ _swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[vsscanf_s, vswscanf_s](vsscanf-s-vswscanf-s.md)<br/>
