---
description: 'Altre informazioni su: vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s _vsnwprintf_s_l'
title: vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l
ms.date: 11/04/2016
api_name:
- _vsnwprintf_s
- _vsnwprintf_s_l
- _vsnprintf_s
- vsnprintf_s
- _vsnprintf_s_l
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
- ntdll.dll
- ucrtbase.dll
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _vsnprintf_s
- _vsntprintf_s
- _vsnwprintf_s
helpviewer_keywords:
- vsnwprintf_s function
- _vsntprintf_s function
- _vsntprintf_s_l function
- vsntprintf_s function
- vsnwprintf_s_l function
- vsnprintf_s_l function
- vsntprintf_s_l function
- _vsnwprintf_s_l function
- _vsnprintf_s function
- vsnprintf_s function
- _vsnprintf_s_l function
- _vsnwprintf_s function
- formatted text [C++]
ms.assetid: 147ccfce-58c7-4681-a726-ef54ac1c604e
ms.openlocfilehash: 27c91d6064b4a92da8a6f09e7d7e5b6bfb8bf95f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342153"
---
# <a name="vsnprintf_s-_vsnprintf_s-_vsnprintf_s_l-_vsnwprintf_s-_vsnwprintf_s_l"></a>vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l

Scrivere l'output formattato mediante un puntatore a un elenco di argomenti. Queste sono versioni di [vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l](vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
int vsnprintf_s(
   char *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const char *format,
   va_list argptr
);
int _vsnprintf_s(
   char *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const char *format,
   va_list argptr
);
int _vsnprintf_s_l(
   char *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const char *format,
   locale_t locale,
   va_list argptr
);
int _vsnwprintf_s(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const wchar_t *format,
   va_list argptr
);
int _vsnwprintf_s_l(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const wchar_t *format,
   locale_t locale,
   va_list argptr
);
template <size_t size>
int _vsnprintf_s(
   char (&buffer)[size],
   size_t count,
   const char *format,
   va_list argptr
); // C++ only
template <size_t size>
int _vsnwprintf_s(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format,
   va_list argptr
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Percorso di archiviazione per l'output.

*sizeOfBuffer*<br/>
Dimensioni del *buffer* per l'output, come numero di caratteri.

*count*<br/>
Numero massimo di caratteri wide da scrivere, escluso il carattere Null di terminazione o [_TRUNCATE](../../c-runtime-library/truncate.md).

*format*<br/>
Specifica di formato.

*argptr*<br/>
Puntatore a un elenco di argomenti.

*locale*<br/>
Impostazioni locali da usare.

Per altre informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

**vsnprintf_s**, **_vsnprintf_s** e **_vsnwprintf_s** restituiscono il numero di caratteri scritti, escluso il carattere null di terminazione, o un valore negativo se si verifica un troncamento dei dati o un errore di output.

* Se *count* è minore di *sizeOfBuffer* e il numero di caratteri dei dati è minore o uguale a *count* oppure *count* è [_TRUNCATE](../../c-runtime-library/truncate.md) e il numero di caratteri dei dati è minore di *sizeOfBuffer*, vengono scritti tutti i dati e viene restituito il numero di caratteri.

* Se *count* è minore di *sizeOfBuffer* ma i dati superano il *numero* di caratteri, verranno scritti i primi caratteri di *conteggio* . Il troncamento dei dati rimanenti si verifica e viene restituito-1 senza richiamare il gestore di parametro non valido.

* Se *count* è [_TRUNCATE](../../c-runtime-library/truncate.md) e il numero di caratteri dei dati è uguale o superiore a *sizeOfBuffer*, la maggior parte della stringa che rientrerà nel *buffer* (con terminazione null) viene scritta. Il troncamento dei dati rimanenti si verifica e viene restituito-1 senza richiamare il gestore di parametro non valido.

* Se *count* è uguale a o supera *sizeOfBuffer* , ma il numero di caratteri dei dati è minore di *sizeOfBuffer*, tutti i dati vengono scritti (con terminazione null) e viene restituito il numero di caratteri.

* Se *count* e il numero di caratteri dei dati è uguale o superiore a *sizeOfBuffer*, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione continua dopo il gestore di parametro non valido, queste funzioni impostano il *buffer* su una stringa vuota, impostano **errno** su **ERANGE** e restituiscono-1.

* Se il *buffer* o il *formato* è un puntatore **null** o se *count* è minore o uguale a zero, viene richiamato il gestore di parametri non validi. Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono-1.

### <a name="error-conditions"></a>Condizioni di errore

|**Condition**|Return|**errno**|
|-----------------|------------|-------------|
|il *buffer* è **null**|-1|**EINVAL**|
|il *formato* è **null**|-1|**EINVAL**|
|*conteggio* <= 0|-1|**EINVAL**|
|*sizeOfBuffer* troppo piccolo (e *count* ! = **_TRUNCATE**)|-1 (e il *buffer* è impostato su una stringa vuota)|**ERANGE**|

## <a name="remarks"></a>Commenti

**vsnprintf_s** è identico a **_vsnprintf_s**. **vsnprintf_s** è incluso per la conformità allo standard ANSI. **_vnsprintf** viene mantenuta per compatibilità con le versioni precedenti.

Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta e scrive fino a *conteggiare* i caratteri dei dati specificati nella memoria a cui punta il *buffer* e aggiunge un valore null di terminazione.

Se *count* è [_TRUNCATE](../../c-runtime-library/truncate.md), queste funzioni scrivono la maggior parte della stringa che rientrerà nel *buffer* lasciando spazio per un valore null di terminazione. Se l'intera stringa (con terminazione null) si integra nel *buffer*, queste funzioni restituiscono il numero di caratteri scritti (escluso il carattere null di terminazione); in caso contrario, queste funzioni restituiscono-1 per indicare che si è verificato il troncamento.

Le versioni di queste funzioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

> [!NOTE]
> Per assicurarsi che sia disponibile spazio per il carattere null di terminazione, verificare che il *conteggio* sia rigorosamente inferiore rispetto alla lunghezza del buffer o usare **_TRUNCATE**.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vsntprintf_s**|**_vsnprintf_s**|**_vsnprintf_s**|**_vsnwprintf_s**|
|**_vsntprintf_s_l**|**_vsnprintf_s_l**|**_vsnprintf_s_l**|**_vsnwprintf_s_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**vsnprintf_s**|\<stdio.h> e \<stdarg.h>|\<varargs.h>*|
|**_vsnprintf_s**, **_vsnprintf_s_l**|\<stdio.h> e \<stdarg.h>|\<varargs.h>*|
|**_vsnwprintf_s**, **_vsnwprintf_s_l**|\<stdio.h> o \<wchar.h> , e \<stdarg.h>|\<varargs.h>*|

\* Richiesto per la compatibilità con UNIX V.

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```cpp
// crt_vsnprintf_s.cpp
#include <stdio.h>
#include <wtypes.h>

void FormatOutput(LPCSTR formatstring, ...)
{
   int nSize = 0;
   char buff[10];
   memset(buff, 0, sizeof(buff));
   va_list args;
   va_start(args, formatstring);
   nSize = vsnprintf_s( buff, _countof(buff), _TRUNCATE, formatstring, args);
   printf("nSize: %d, buff: %s\n", nSize, buff);
   va_end(args);
}

int main() {
   FormatOutput("%s %s", "Hi", "there");
   FormatOutput("%s %s", "Hi", "there!");
   FormatOutput("%s %s", "Hi", "there!!");
}
```

```Output
nSize: 8, buff: Hi there
nSize: 9, buff: Hi there!
nSize: -1, buff: Hi there!
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \_ _swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
