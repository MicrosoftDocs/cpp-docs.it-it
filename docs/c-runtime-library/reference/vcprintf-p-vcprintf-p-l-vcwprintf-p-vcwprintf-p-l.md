---
description: 'Altre informazioni su: _vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l'
title: _vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l
ms.date: 3/9/2021
api_name:
- _vcprintf_p
- _vcwprintf_p_l
- _vcprintf_p_l
- _vcwprintf_p
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
- vcwprintf_p
- vcprintf_p_l
- _vcprintf_p
- _vcprintf_p_l
- vcwprintf_p_l
- vcprintf_p
- _vcwprintf_p
- _vcwprintf_p_l
helpviewer_keywords:
- _vtcprintf_p_l function
- vcprintf_p_l function
- _vcprintf_p_l function
- vtcprintf_p_l function
- vcprintf_p function
- _vcwprintf_p function
- _vcprintf_p function
- vcwprintf_p function
- vcwprintf_p_l function
- vtcprintf_p function
- _vcwprintf_p_l function
- _vtcprintf_p function
ms.openlocfilehash: 4960167be1142b75435566f736b2927217015669
ms.sourcegitcommit: b04b39940b0c1e265f80fc1951278fdb05a1b30a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/10/2021
ms.locfileid: "102621465"
---
# <a name="_vcprintf_p-_vcprintf_p_l-_vcwprintf_p-_vcwprintf_p_l"></a>_vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l

Scrive l'output formattato nella console usando un puntatore a un elenco di argomenti e supporta i parametri posizionali nella stringa di formato.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _vcprintf_p(
   const char* format,
   va_list argptr
);
int _vcprintf_p_l(
   const char* format,
   locale_t locale,
   va_list argptr
);
int _vcwprintf_p(
   const wchar_t* format,
   va_list argptr
);
int _vcwprintf_p_l(
   const wchar_t* format,
   locale_t locale,
   va_list argptr
);
```

### <a name="parameters"></a>Parametri

*format*<br/>
Specifica del formato.

*argptr*<br/>
Un puntatore a un elenco di argomenti.

*locale*<br/>
Impostazioni locali da usare.

Per altre informazioni, vedere [Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

Il numero di caratteri che vengono scritti o un valore negativo se si verifica un errore di output. Se *Format* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e viene restituito-1.

## <a name="remarks"></a>Commenti

Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi usa la funzione **_putch** per formattare e scrivere i dati specificati nella console. (**_vcwprintf_p** utilizza **_putwch** invece di **_putch**. **_vcwprintf_p** è la versione a caratteri wide di **_vcprintf_p**. Accetta una stringa di caratteri wide come argomento).

Le versioni di queste funzioni che hanno il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato anziché le impostazioni locali correnti.

Ogni *argomento* , se presente, viene convertito e viene restituito in base alla specifica di formato corrispondente nel *formato*. La specifica del formato supporta i parametri posizionali in modo da poter specificare l'ordine in cui gli argomenti vengono usati nella stringa di formato. Per altre informazioni, vedere [Parametri posizionali printf_p](../../c-runtime-library/printf-p-positional-parameters.md).

Queste funzioni non convertono i caratteri di avanzamento di riga in combinazioni di caratteri di ritorno a capo ed avanzamento di riga (CR e LF) quando vengono restituiti.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Queste funzioni convalidano il puntatore di input e la stringa di formato. Se *Format* o *argument* è **null** o se la stringa di formato contiene caratteri di formattazione non validi, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1 e impostano **errno** su **EINVAL**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_vtcprintf_p**|**_vcprintf_p**|**_vcprintf_p**|**_vcwprintf_p**|
|**_vtcprintf_p_l**|**_vcprintf_p_l**|**_vcprintf_p_l**|**_vcwprintf_p_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_vcprintf_p**, **_vcprintf_p_l**|\<conio.h> e \<stdarg.h>|
|**_vcwprintf_p**, **_vcwprintf_p_l**|\<conio.h> e \<stdarg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

> [!IMPORTANT]
> A partire da Windows 10 versione 2004 (Build 19041), la `printf` famiglia di funzioni stampa numeri a virgola mobile rappresentati esattamente in base alle regole IEEE 754 per l'arrotondamento. Nelle versioni precedenti di Windows, i numeri a virgola mobile rappresentativi esatti che terminano con "5" verrebbero sempre arrotondati. IEEE 754 indica che è necessario arrotondare al numero pari più vicino (anche noto come "arrotondamento del banco"). Ad esempio, sia `printf("%1.0f", 1.5)` che `printf("%1.0f", 2.5)` devono arrotondare a 2. In precedenza, 1,5 veniva arrotondato a 2 e 2,5 veniva arrotondato a 3. Questa modifica ha effetto solo sui numeri rappresentabili. 2,35, ad esempio, che, quando rappresentata in memoria, è più vicino a 2.35000000000000008, continua a arrotondare fino a 2,4. L'arrotondamento eseguito da queste funzioni ora rispetta anche la modalità di arrotondamento a virgola mobile impostata da [`fesetround`](fegetround-fesetround2.md) . In precedenza, l'arrotondamento sceglie sempre il `FE_TONEAREST` comportamento. Questa modifica influiscono solo sui programmi compilati con Visual Studio 2019 versione 16,2 e successive. Per usare il comportamento di arrotondamento a virgola mobile legacy, collegare con [`legacy_stdio_float_rounding.obj`](../link-options.md) .

## <a name="example"></a>Esempio

```C
// crt_vcprintf_p.c
// compile with: /c
#include <conio.h>
#include <stdarg.h>

// An error formatting function that's used to print to the console.
int eprintf(const char* format, ...)
{
   va_list args;
   va_start(args, format);
   int result = _vcprintf_p(format, args);
   va_end(args);
   return result;
}

int main()
{
   int n = eprintf("parameter 2 = %2$d; parameter 1 = %1$s\r\n",
      "one", 222);
   _cprintf_s("%d characters printed\r\n");
}
```

```Output
parameter 2 = 222; parameter 1 = one
38 characters printed
```

## <a name="see-also"></a>Vedere anche

[I/O console e porta](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
[printf_p parametri posizionali](../../c-runtime-library/printf-p-positional-parameters.md)<br/>
