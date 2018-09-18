---
title: Del compilatore (livello 4) Avviso C4840 | Microsoft Docs
ms.custom: ''
ms.date: 09/13/2018
ms.topic: error-reference
f1_keywords:
- C4840
dev_langs:
- C++
helpviewer_keywords:
- C4840
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c43ce60d319c427877b77a043df7c30bd00edc9b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025880"
---
# <a name="compiler-warning-level-4-c4840"></a>Del compilatore (livello 4) Avviso C4840

> uso non portabile della classe*tipo*' come argomento per una funzione variadic

## <a name="remarks"></a>Note

Classi o struct che vengono passati a una funzione variadic deve essere facilmente copiabili. Quando si passano tali oggetti il compilatore si limita a creare una copia bit per bit e non chiama il costruttore o distruttore.

Questo avviso è disponibile a partire da Visual Studio 2017.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4840 e Mostra come risolverlo:

```cpp
// C4840.cpp
// compile by using: cl /EHsc /W4 C4840.cpp
#include <stdio.h>

int main()
{
    struct S {
        S(int i) : i(i) {}
        S(const S& other) : i(other.i) {}
        operator int() { return i; }
    private:
        int i;
    } s(0);

    printf("%i\n", s); // warning C4840 : non-portable use of class 'main::S'
                       // as an argument to a variadic function
    // To correct the error, you can perform a static cast
    // to convert the object before passing it:
    printf("%i\n", static_cast<int>(s));
}
```

Per le stringhe compilate e gestite usando `CStringW`, l'oggetto fornito `operator LPCWSTR()` deve essere usato per eseguire il cast un `CStringW` oggetto per il puntatore di stringa di tipo C previsto dalla stringa di formato:

```cpp
    CStringW str1;
    CStringW str2;
    // ...
    str1.Format("%s", static_cast<LPCWSTR>(str2));
```