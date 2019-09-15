---
title: va_arg, va_copy, va_end, va_start
ms.date: 11/04/2016
api_name:
- va_arg
- va_end
- va_copy
- va_start
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
- va_arg
- va_start
- va_list
- va_alist
- va_dcl
- va_copy
- va_end
helpviewer_keywords:
- variable argument lists, accessing
- va_start macro
- va_arg macro
- va_end macro
- arguments [C++], argument lists
- va_list macro
- va_dcl macro
- va_alist macro
- va_copy macro
ms.assetid: a700dbbd-bfe5-4077-87b6-3a07af74a907
ms.openlocfilehash: 47bd9e3913c6664a52c970dd8a190636683d214e
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957358"
---
# <a name="va_arg-va_copy-va_end-va_start"></a>va_arg, va_copy, va_end, va_start

Accede a elenchi di argomenti variabili.

## <a name="syntax"></a>Sintassi

```C
type va_arg(
   va_list arg_ptr,
   type
);
void va_copy(
   va_list dest,
   va_list src
); // (ISO C99 and later)
void va_end(
   va_list arg_ptr
);
void va_start(
   va_list arg_ptr,
   prev_param
); // (ANSI C89 and later)
void va_start(
   arg_ptr
);  // (deprecated Pre-ANSI C89 standardization version)
```

### <a name="parameters"></a>Parametri

*type*<br/>
Tipo di argomento da recuperare.

*arg_ptr*<br/>
Puntatore all'elenco di argomenti.

*dest*<br/>
Puntatore all'elenco di argomenti da inizializzare da *src*

*src*<br/>
Puntatore all'elenco inizializzato di argomenti da copiare in *dest*.

*prev_param*<br/>
Parametro che precede il primo argomento facoltativo.

## <a name="return-value"></a>Valore restituito

**va_arg** restituisce l'argomento corrente. **va_copy**, **va_start** e **va_end** non restituiscono valori.

## <a name="remarks"></a>Note

Le macro **va_arg**, **va_copy**, **va_end**e **va_start** offrono un modo portatile per accedere agli argomenti a una funzione quando la funzione accetta un numero variabile di argomenti. Sono disponibili due versioni delle macro: Macro definite in STDARG. H conforme allo standard ISO C99; macro definite in VARARGS. Le H sono deprecate, ma vengono mantenute per compatibilità con le versioni precedenti del codice scritto prima dello standard ANSI C89.

Queste macro presuppongono che la funzione accetti un numero fisso di argomenti obbligatori, seguito da un numero variabile di argomenti facoltativi. Gli argomenti obbligatori vengono dichiarati come parametri comuni per la funzione e sono accessibili tramite i nomi dei parametri. Gli argomenti facoltativi sono accessibili tramite le macro in STDARG.H (o VARARGS.H per il codice scritto prima dello standard ANSI C89), che impostano un puntatore al primo argomento facoltativo nell'elenco di argomenti, recuperano gli argomenti dall'elenco e reimpostano il puntatore al termine dell'elaborazione degli argomenti.

Le macro standard C, definite in STDARG. H, vengono usate come segue:

- **va_start** imposta *arg_ptr* sul primo argomento facoltativo nell'elenco di argomenti passati alla funzione. L'argomento *arg_ptr* deve avere il tipo **va_list** . L'argomento *prev_param* è il nome del parametro obbligatorio che precede immediatamente il primo argomento facoltativo nell'elenco di argomenti. Se *prev_param* viene dichiarata con la classe di archiviazione register, il comportamento della macro non è definito. **va_start** deve essere usato prima di usare **va_arg** per la prima volta.

- **va_arg** recupera un valore di *tipo* dalla posizione fornita da *arg_ptr*e incrementa *arg_ptr* in modo che punti all'argomento successivo nell'elenco usando le dimensioni del *tipo* per determinare dove inizia l'argomento successivo. **va_arg** può essere usato per un numero qualsiasi di volte nella funzione per recuperare gli argomenti dall'elenco.

- **va_copy** crea una copia di un elenco di argomenti nello stato corrente. Il parametro *src* deve essere già inizializzato con **va_start**; potrebbe essere stato aggiornato con le chiamate a **va_arg** , ma non deve essere stato reimpostato con **va_end**. L'argomento successivo recuperato da **va_arg** da *dest* è uguale all'argomento successivo recuperato da *src*.

- Dopo che sono stati recuperati tutti gli argomenti, **va_end** Reimposta il puntatore su **null**. **va_end** deve essere chiamato su ogni elenco di argomenti inizializzato con **va_start** o **va_copy** prima che la funzione restituisca.

> [!NOTE]
> Le macro in VARARGS.H sono deprecate e vengono mantenute solo per garantire la compatibilità con il codice scritto prima dello standard ANSI C89. In tutti gli altri casi, usare le macro in STDARGS.H.

Quando vengono compilati con [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md), i programmi che usano queste macro potrebbero generare risultati imprevisti a causa delle differenze tra i sistemi dei tipi nativi e CLR (Common Language Runtime). Si consideri questo programma:

```C
#include <stdio.h>
#include <stdarg.h>

void testit (int i, ...)
{
    va_list argptr;
    va_start(argptr, i);

    if (i == 0)
    {
        int n = va_arg(argptr, int);
        printf("%d\n", n);
    }
    else
    {
        char *s = va_arg(argptr, char*);
        printf("%s\n", s);
    }

    va_end(argptr);
}

int main()
{
    testit(0, 0xFFFFFFFF); // 1st problem: 0xffffffff is not an int
    testit(1, NULL);       // 2nd problem: NULL is not a char*
}
```

Si noti che **TestIt** prevede che il secondo parametro sia di **tipo int** o **char**<strong>\*</strong>. Gli argomenti passati sono 0xFFFFFFFF ( **unsigned** **int**, not an **int**) e **null** (actually an **int**, not a **char**<strong>\*</strong>). Quando il programma viene compilato per il codice nativo, produce il seguente output:

```Output
-1

(null)
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<stdio.h> e \<stdarg.h>

**Intestazione deprecata:** \<varargs.h>

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_va.c
// Compile with: cl /W3 /Tc crt_va.c
// The program below illustrates passing a variable
// number of arguments using the following macros:
//      va_start            va_arg              va_copy
//      va_end              va_list

#include <stdio.h>
#include <stdarg.h>
#include <math.h>

double deviation(int first, ...);

int main( void )
{
    /* Call with 3 integers (-1 is used as terminator). */
    printf("Deviation is: %f\n", deviation(2, 3, 4, -1 ));

    /* Call with 4 integers. */
    printf("Deviation is: %f\n", deviation(5, 7, 9, 11, -1));

    /* Call with just -1 terminator. */
    printf("Deviation is: %f\n", deviation(-1));
}

/* Returns the standard deviation of a variable list of integers. */
double deviation(int first, ...)
{
    int count = 0, i = first;
    double mean = 0.0, sum = 0.0;
    va_list marker;
    va_list copy;

    va_start(marker, first);     /* Initialize variable arguments. */
    va_copy(copy, marker);       /* Copy list for the second pass */
    while (i != -1)
    {
        sum += i;
        count++;
        i = va_arg(marker, int);
    }
    va_end(marker);              /* Reset variable argument list. */
    mean = sum ? (sum / count) : 0.0;

    i = first;                  /* reset to calculate deviation */
    sum = 0.0;
    while (i != -1)
    {
        sum += (i - mean)*(i - mean);
        i = va_arg(copy, int);
    }
    va_end(copy);               /* Reset copy of argument list. */
    return count ? sqrt(sum / count) : 0.0;
}
```

```Output
Deviation is: 0.816497
Deviation is: 2.236068
Deviation is: 0.000000
```

## <a name="see-also"></a>Vedere anche

[Accesso agli argomenti](../../c-runtime-library/argument-access.md)<br/>
[vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l](vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)<br/>
