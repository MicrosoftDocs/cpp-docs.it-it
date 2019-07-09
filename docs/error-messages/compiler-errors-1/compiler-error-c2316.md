---
title: Errore del compilatore C2316
ms.date: 07/08/2019
f1_keywords:
- C2316
helpviewer_keywords:
- C2316
ms.assetid: 9ad08eb5-060b-4eb0-8d66-0dc134f7bf67
ms.openlocfilehash: 5a3d9052775a5e1cbedfd58ccaaf0ff039a8475d
ms.sourcegitcommit: 07b34ca1c1fecced9fadc95de15dc5fee4f31e5a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/09/2019
ms.locfileid: "67693437"
---
# <a name="compiler-error-c2316"></a>Errore del compilatore C2316

> «*class_type*': non può essere intercettato come distruttore e/o costruttore di copia è inaccessibili o eliminati

È stata rilevata un'eccezione per valore o per riferimento, ma il costruttore di copia, l'operatore di assegnazione, o entrambi sono inaccessibili.

## <a name="remarks"></a>Note

Modifiche della conformità in Visual Studio 2015 apportate questo errore si applicano a istruzioni catch errata delle eccezioni MFC derivate da `CException`. Poiché `CException` ha un costruttore di copia privato ereditata la classe e i relativi derivati non sono copiabili e non possono essere passati per valore, che significa anche che non possono essere intercettate per valore. Genera istruzioni che MFC eccezioni rilevate dal valore in precedenza ha portato a eccezioni non rilevate in fase di esecuzione. Ora correttamente il compilatore identifica questa situazione e segnala l'errore C2316. Per risolvere questo problema, è consigliabile è usare le macro MFC TRY/CATCH piuttosto che scrivere i propri gestori di eccezioni. Se non è appropriato per il codice, intercettare le eccezioni MFC per riferimento.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2316 e viene illustrato un modo per risolvere il problema:

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
