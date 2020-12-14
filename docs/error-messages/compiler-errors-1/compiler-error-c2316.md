---
description: 'Altre informazioni su: errore del compilatore C2316'
title: Errore del compilatore C2316
ms.date: 07/08/2019
f1_keywords:
- C2316
helpviewer_keywords:
- C2316
ms.assetid: 9ad08eb5-060b-4eb0-8d66-0dc134f7bf67
ms.openlocfilehash: 0e2f528b3f13964a971b88fca110980947bd7d11
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282197"
---
# <a name="compiler-error-c2316"></a>Errore del compilatore C2316

> '*class_type*': non può essere intercettato come distruttore e/o il costruttore di copia non è accessibile o è stato eliminato

È stata rilevata un'eccezione per valore o per riferimento, ma il costruttore di copia, l'operatore di assegnazione o entrambi sono inaccessibili.

## <a name="remarks"></a>Commenti

Le modifiche della conformità in Visual Studio 2015 hanno reso questo errore applicabile a istruzioni catch non valide di eccezioni MFC derivate da `CException` . Poiché `CException` ha un costruttore di copia privato ereditato, la classe e i relativi derivati non sono copiabili e non possono essere passati per valore, che significa anche che non possono essere intercettati per valore. Le istruzioni catch che intercettavano le eccezioni MFC in base al valore causavano le eccezioni non rilevate in fase di esecuzione. Ora il compilatore identifica correttamente questa situazione e segnala l'errore C2316. Per risolvere questo problema, è consigliabile usare le macro MFC TRY/CATCH anziché scrivere i propri gestori di eccezioni. Se non è appropriato per il codice, rilevare le eccezioni MFC in base al riferimento.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato C2316 e viene illustrato come risolverlo:

```cpp
// C2316.cpp
// compile with: /EHsc
#include <stdio.h>

struct B
{
public:
    B() {}
    // Delete the following line to resolve.
private:
    // copy constructor
    B(const B&) {}
};

void f(const B&)
{
}

int main()
{
    try
    {
        B aB;
        f(aB);
    }
    catch (B b)    // C2316
    {
        printf_s("Caught an exception!\n");
    }
}
```
