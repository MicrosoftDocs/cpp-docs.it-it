---
title: Avviso del compilatore (livello 1) C4789
ms.date: 11/04/2016
f1_keywords:
- C4789
helpviewer_keywords:
- C4789
ms.assetid: 5800c301-5afb-4af0-85c1-ceb54d775234
ms.openlocfilehash: f489915f07eefd0909cbcd806a590f93f674c258
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50677396"
---
# <a name="compiler-warning-level-1-c4789"></a>Avviso del compilatore (livello 1) C4789

> buffer '*identifier*' della dimensione *N* byte verranno eseguito l'overrun del; *M* byte verranno scritti a partire dall'offset *L*

## <a name="remarks"></a>Note

Genera un avviso sull'overrun del buffer quando vengono usate funzioni di specifiche di runtime del linguaggio C (CRT), vengono passati parametri e vengono eseguite assegnazioni, in modo che le dimensioni dei dati siano note in fase di compilazione. Questo avviso è relativo alle situazioni in cui potrebbe essere eluso il normale rilevamento di dimensioni non corrispondenti dei dati.

L'avviso viene visualizzato quando dei dati, la cui lunghezza è nota in fase di compilazione, vengono copiati e inseriti in un blocco di dati le cui dimensioni sono note come insufficienti in fase di compilazione. La copia deve essere eseguita usando il formato intrinseco di una delle funzioni CRT seguenti:

- [strcpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)

- [memset](../../c-runtime-library/reference/memset-wmemset.md)

- [memcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md), [wmemcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md)

L'avviso viene visualizzato anche quando un tipo di dati di un parametro non corrisponde a causa dell'uso di un cast e quindi viene tentata l'assegnazione di una copia da un riferimento lvalue.

Visual C++ può generare questo avviso per un percorso di codice che non viene mai eseguito. È possibile disabilitare temporaneamente l'avviso usando `#pragma`, come mostrato in questo esempio:

```cpp
#pragma(push)
#pragma warning ( disable : 4789 )
// unused code that generates compiler warning C4789`
#pragma(pop)
```

Questo impedisce a Visual C++ di generare l'avviso per quello specifico blocco di codice. `#pragma(push)` mantiene lo stato esistente prima che `#pragma warning(disable: 4789)` lo modifichi. `#pragma(pop)` ripristina lo stato di cui è stato eseguito il push ed elimina gli effetti di `#pragma warning(disable:4789)`. Per altre informazioni sulla direttiva del preprocessore C++ `#pragma`, vedere [avviso](../../preprocessor/warning.md) e [direttive Pragma e parola chiave pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4789.

```cpp
// C4789.cpp
// compile with: /Oi /W1 /c
#include <string.h>
#include <stdio.h>

int main()
{
    char a[20];
    strcpy(a, "0000000000000000000000000\n");   // C4789

    char buf2[20];
    memset(buf2, 'a', 21);   // C4789

    char c;
    wchar_t w = 0;
    memcpy(&c, &w, sizeof(wchar_t));
}
```

## <a name="example"></a>Esempio

Anche l'esempio seguente genera l'errore C4789.

```cpp
// C4789b.cpp
// compile with: /W1 /O2 /c
// processor: x86
short G;

void main()
{
   int * p = (int *)&G;
   *p = 3;   // C4789 - writes an int through a pointer to short
}
```