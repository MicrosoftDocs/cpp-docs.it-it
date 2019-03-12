---
title: Parametri posizionali printf_p
ms.date: 11/04/2016
apilocation:
- msvcr120.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr90.dll
- msvcr80.dll
- msvcr100.dll
apitype: DLLExport
helpviewer_keywords:
- _printf_p function, positional parameters
- printf_p function, positional parameters
ms.assetid: beb4fd85-a7aa-4665-9085-2c907a5b9ab0
ms.openlocfilehash: f6ee84a68b2f40e535ed1dc76e4617a21bb29a6e
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57751466"
---
# <a name="printfp-positional-parameters"></a>Parametri posizionali printf_p

I parametri posizionali consentono di specificare in modo numerico gli argomenti da sostituire in un campo in una stringa di formato. Sono disponibili le seguenti funzioni `printf` di parametro posizionale:

| Funzioni printf non posizionali | Equivalenti di parametri posizionali |
|---|---|
|[printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)|[_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l](../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)|
|[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)|[_sprintf_p, _sprintf_p_l, _swprintf_p, _swprintf_p_l](../c-runtime-library/reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)|
|[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)|[_cprintf_p, _cprintf_p_l, _cwprintf_p, _cwprintf_p_l](../c-runtime-library/reference/cprintf-p-cprintf-p-l-cwprintf-p-cwprintf-p-l.md)|
|[fprintf, _fprintf_l, fwprintf, _fwprintf_l](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)|[_fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l](../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)|
|[vprintf, _vprintf_l, vwprintf, _vwprintf_l](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)|[_vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l](../c-runtime-library/reference/vprintf-p-vprintf-p-l-vwprintf-p-vwprintf-p-l.md)|
|[vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)|[_vfprintf_p, _vfprintf_p_l, _vfwprintf_p, _vfwprintf_p_l](../c-runtime-library/reference/vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)|
|[vsprintf, _vsprintf_l, vswprintf, _vswprintf_l, \__vswprintf_l](../c-runtime-library/reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md)|[_vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l](../c-runtime-library/reference/vsprintf-p-vsprintf-p-l-vswprintf-p-vswprintf-p-l.md)|

## <a name="how-to-specify-positional-parameters"></a>Impostazione dei parametri posizionali

### <a name="parameter-indexing"></a>Indicizzazione dei parametri

Per impostazione predefinita, se non è presente alcuna formattazione posizionale, le funzioni posizionali si comportano in modo identico a quelle non posizionali. Il parametro posizionale da formattare viene specificato inserendo `%n$` all'inizio dell'identificatore di formato, dove `n` corrisponde alla posizione del parametro da formattare all'interno dell'elenco dei parametri. La posizione del parametro parte da 1 per il primo argomento dopo la stringa del formato. La restante parte dell'identificatore di formato segue le stesse regole dell'identificatore di formato `printf`. Per altre informazioni sugli identificatori di formato, vedere [Sintassi per la specifica del formato: funzioni printf wprintf](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

Di seguito è riportato un esempio di formattazione posizionale:

```C
_printf_p("%1$s %2$s", "November", "10");
```

Verrà stampato quanto segue:

```
November 10
```

Non è necessario che l'ordine dei numeri usati corrisponda a quello degli argomenti specificati. Ad esempio, la stringa di formato seguente è valida:

```C
_printf_p("%2$s %1$s", "November", "10");
```

Verrà stampato quanto segue:

```
10 November
```

A differenza delle stringhe di formato tradizionali, i parametri posizionali possono essere usati più volte in una stringa di formato. Ad esempio,

```C
_printf_p("%1$d times %1$d is %2$d", 10, 100);
```

Verrà stampato quanto segue:

```
10 times 10 is 100
```

Tutti gli argomenti devono essere usati almeno una volta in un punto della stringa di formato. Il numero massimo di parametri posizionali consentiti in una stringa di formato è indicato dal valore `_ARGMAX`.

### <a name="width-and-precision"></a>Larghezza e precisione

È possibile usare `*n$` per specificare un parametro posizionale come identificatore di larghezza o precisione, dove `n` corrisponde alla posizione del parametro di larghezza o precisione all'interno dell'elenco dei parametri. La posizione del valore della larghezza o della precisione deve essere visualizzata subito dopo il simbolo \*. Ad esempio,

```C
_printf_p("%1$*2$s","Hello", 10);
```

oppure

```C
_printf_p("%2$*1$s", 10, "Hello");
```

### <a name="mixing-positional-and-non-positional-arguments"></a>Combinazione di argomenti posizionali e non posizionali

I parametri posizionali non possono essere combinati con i parametri non posizionali nella stessa stringa di formato. Se viene usata una formattazione posizionale, tutti gli identificatori di formato devono usare tale formattazione. Tuttavia, `printf_p` e l funzioni correlate supportano ancora i parametri non posizionali nelle stringhe di formato che non contengono parametri posizionali.

## <a name="example"></a>Esempio

```C
// positional_args.c
// Build by using: cl /W4 positional_args.c
// Positional arguments allow the specification of the order
// in which arguments are consumed in a formatting string.

#include <stdio.h>

int main()
{
    int     i = 1,
            j = 2,
            k = 3;
    double  x = 0.1,
            y = 2.22,
            z = 333.3333;
    char    *s1 = "abc",
            *s2 = "def",
            *s3 = "ghi";

    // If positional arguments are unspecified,
    // normal input order is used.
    _printf_p("%d %d %d\n", i, j, k);

    // Positional arguments are numbers followed by a $ character.
    _printf_p("%3$d %1$d %2$d\n", i, j, k);

    // The same positional argument may be reused.
    _printf_p("%1$d %2$d %1$d\n", i, j);

    // The positional arguments may appear in any order.
    _printf_p("%1$s %2$s %3$s\n", s1, s2, s3);
    _printf_p("%3$s %1$s %2$s\n", s1, s2, s3);

    // Precision and width specifiers must be int types.
    _printf_p("%3$*5$f %2$.*4$f %1$*4$.*5$f\n", x, y, z, j, k);
}
```

```Output
1 2 3
3 1 2
1 2 1
abc def ghi
ghi abc def
333.333300 2.22 0.100
```

## <a name="see-also"></a>Vedere anche

[Sintassi per la specifica del formato: funzioni printf e wprintf](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)
