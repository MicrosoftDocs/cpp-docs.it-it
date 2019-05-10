---
title: Compilatore avviso (livello 4) C4459
ms.date: 11/04/2016
f1_keywords:
- C4459
helpviewer_keywords:
- C4459
ms.assetid: ee9f6287-9c70-4b10-82a0-add82a13997f
ms.openlocfilehash: 441d01eca7c8266b6d7948508eeb561341e64c57
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65447765"
---
# <a name="compiler-warning-level-4-c4459"></a>Compilatore avviso (livello 4) C4459

> dichiarazione di '*identificatore*' nasconde la dichiarazione globale

La dichiarazione di *identifier* nell'ambito locale nasconde la dichiarazione dei con denominazione identica *identificatore* in ambito globale. Questo avviso informa l'utente che fa riferimento a *identificatore* in questo ambito risolvono nella versione dichiarata localmente, non la versione globale, che potrebbe non essere lo scopo previsto. In generale, è consigliabile che è ridurre al minimo l'uso delle variabili globali come una buona norma di progettazione. Per ridurre al minimo inquinamento dello spazio dei nomi globali, è consigliabile usare uno spazio dei nomi denominato per le variabili globali.

Questo avviso è stata introdotta in Visual Studio 2015, in Microsoft C++ versione del compilatore 18.00 inizia. Per eliminare gli avvisi da tale versione del compilatore o in un secondo momento durante la migrazione del codice, usare il [/WV:18](../../build/reference/compiler-option-warning-level.md) opzione del compilatore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4459:

```cpp
// C4459_hide.cpp
// compile with: cl /W4 /EHsc C4459_hide.cpp
int global_or_local = 1;

int main() {
    int global_or_local; // warning C4459
    global_or_local = 2;
}
```

Un modo per risolvere questo problema è per creare uno spazio dei nomi per le funzioni globali, ma non usa un `using` direttiva per portare tale spazio dei nomi nell'ambito, pertanto tutti i riferimenti devono utilizzare l'ambiguità di nomi completi:

```cpp
// C4459_namespace.cpp
// compile with: cl /W4 /EHsc C4459_namespace.cpp
namespace globals {
    int global_or_local = 1;
}

int main() {
    int global_or_local; // OK
    global_or_local = 2;
    globals::global_or_local = 3;
}
```
