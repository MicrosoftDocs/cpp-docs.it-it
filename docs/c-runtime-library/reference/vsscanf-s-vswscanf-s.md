---
title: vsscanf_s, vswscanf_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- vswscanf_s
- vsscanf_s
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
- vsscanf_s
- vswscanf_s
- _vstscanf_s
dev_langs:
- C++
ms.assetid: 7b732e68-c6f4-4579-8917-122f5a7876e1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dbcf6d0a8b54cc08242d613b24c415ac1ef05fd3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="vsscanfs-vswscanfs"></a>vsscanf_s, vswscanf_s

Legge i dati formattati da una stringa. Queste versioni di [vsscanf, vswscanf](vsscanf-vswscanf.md) includono miglioramenti per sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
int vsscanf_s(
   const char *buffer,
   const char *format,
   va_list argptr
);
int vswscanf_s(
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

Ognuna di queste funzioni restituisce il numero di campi che vengono convertiti e assegnati correttamente. Il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. Il valore restituito sarà **EOF** per un errore o se viene raggiunta la fine della stringa prima della conversione prima.

Se *buffer* oppure *formato* è un **NULL** puntatore, il gestore di parametri non validi viene richiamato, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostare **errno** alla **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **vsscanf_s** funzione legge i dati dal *buffer* nelle posizioni forniti da ciascun argomento nella *arglist* elenco di argomenti. Gli argomenti nell'elenco di argomenti specificano i puntatori alle variabili che hanno un tipo che corrisponde a un identificatore di tipo in *formato*. A differenza delle versioni meno sicuro **vsscanf**, è necessario un parametro di dimensione del buffer quando si usano i caratteri di campo di tipo **c**, **C**, **s**, **S**, o set di controllo di stringa sono racchiusi tra parentesi **[]**. Le dimensioni del buffer in caratteri vengono passate come parametro aggiuntivo subito dopo ogni parametro del buffer che le richiede.

La dimensione del buffer include il carattere di terminazione null. Potrebbe essere usato un campo di specifica della larghezza per assicurarsi che il token letto possa essere inserito nel buffer. Se non viene utilizzato alcun campo di specifica di larghezza e il token letto è troppo grande per entrare nel buffer, non vengono scritti dati nel buffer.

Per altre informazioni, vedere [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) e [Caratteri di campo di tipo per scanf](../../c-runtime-library/scanf-type-field-characters.md).

> [!NOTE]
> Il parametro di dimensione è di tipo **unsigned**, non **size_t**.

Il *formato* controlli argomento l'interpretazione dell'input di campi e ha lo stesso modulo e funziona come il *formato* argomento per il **scanf_s** (funzione). Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

**vswscanf_s** è una versione a caratteri wide **vsscanf_s**; gli argomenti da **vswscanf_s** sono stringhe a caratteri "wide". **vsscanf_s** non gestisce i caratteri esadecimali multibyte. **vswscanf_s** non gestisce esadecimale a larghezza intera Unicode o caratteri "area di compatibilità". In caso contrario, **vswscanf_s** e **vsscanf_s** si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vstscanf_s**|**vsscanf_s**|**vsscanf_s**|**vswscanf_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**vsscanf_s**|\<stdio.h>|
|**vswscanf_s**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_vsscanf_s.c
// compile with: /W3
// This program uses vsscanf_s to read data items
// from a string named tokenstring, then displays them.

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int call_vsscanf_s(char *tokenstring, char *format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vsscanf_s(tokenstring, format, arglist);
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
    call_vsscanf_s(tokenstring, "%80s", s, _countof(s));
    call_vsscanf_s(tokenstring, "%c", &c, sizeof(char));
    call_vsscanf_s(tokenstring, "%d", &i);
    call_vsscanf_s(tokenstring, "%f", &fp);

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
[sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[vsscanf, vswscanf](vsscanf-vswscanf.md)<br/>
