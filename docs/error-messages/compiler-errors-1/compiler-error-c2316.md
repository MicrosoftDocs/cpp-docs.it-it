---
title: Errore del compilatore C2316 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2316
dev_langs:
- C++
helpviewer_keywords:
- C2316
ms.assetid: 9ad08eb5-060b-4eb0-8d66-0dc134f7bf67
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2868d3a81fcbc94d8b20adcdc775363eb0a8eaeb
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46033017"
---
# <a name="compiler-error-c2316"></a>Errore del compilatore C2316

> «*eccezione*': non può essere intercettato come distruttore e/o costruttore di copia è inaccessibile

È stata rilevata un'eccezione per valore o riferimento, ma il costruttore di copia e/o l'operatore di assegnazione erano inaccessibili.

Questo codice è stato accettato da versioni di Visual C++ precedenti Visual Studio 2003, ma attualmente causa un errore.

Modifiche della conformità in Visual Studio 2015 apportate questo errore si applicano a istruzioni catch errata delle eccezioni MFC derivate da `CException`. Poiché `CException` ha un costruttore di copia privato ereditata la classe e i relativi derivati vengono non copiabile e non possono essere passati per valore, che significa anche che non possono essere intercettate per valore. Genera istruzioni che MFC eccezioni rilevate dal valore in precedenza ha portato a eccezioni non rilevate in fase di esecuzione, ma ora il compilatore identifica correttamente questa situazione e i rapporti errore C2316. Per risolvere questo problema, è consigliabile che usare le macro MFC TRY/CATCH piuttosto che scrivono i propri gestori di eccezione, ma se non è appropriato per il codice, intercettare le eccezioni MFC invece per riferimento.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2316:

```
// C2316.cpp
// compile with: /EHsc
#include <stdio.h>

extern "C" int printf_s(const char*, ...);

struct B
{
public:
    B() {}
    // Delete the following line to resolve.
private:
    // copy constructor
    B(const B&)
    {
    }
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
    catch (B b) {   // C2316
        printf_s("Caught an exception!\n");
    }
}
```