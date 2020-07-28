---
title: Avviso del compilatore (livello 4) C4459
ms.date: 11/04/2016
f1_keywords:
- C4459
helpviewer_keywords:
- C4459
ms.assetid: ee9f6287-9c70-4b10-82a0-add82a13997f
ms.openlocfilehash: d6d0a802f9f628145fbc5910aca805a5b01b94d2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214373"
---
# <a name="compiler-warning-level-4-c4459"></a>Avviso del compilatore (livello 4) C4459

> la dichiarazione di '*Identifier*' nasconde la dichiarazione globale

La dichiarazione dell' *identificatore* nell'ambito locale nasconde la dichiarazione dell' *identificatore* con nome identico nell'ambito globale. Questo avviso informa che i riferimenti all' *identificatore* in questo ambito vengono risolti nella versione dichiarata localmente, non nella versione globale, che può essere o meno intenzionale. In genere, è consigliabile ridurre al minimo l'uso di variabili globali come procedura di progettazione efficace. Per ridurre al minimo l'inquinamento dello spazio dei nomi globale, è consigliabile usare uno spazio dei nomi denominato per le variabili globali.

Questo avviso è stato nuovo in Visual Studio 2015, nella versione 18,00 del compilatore Microsoft C++. Per escludere gli avvisi da tale versione del compilatore o in seguito durante la migrazione del codice, usare l'opzione del compilatore [/WV: 18](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4459:

```cpp
// C4459_hide.cpp
// compile with: cl /W4 /EHsc C4459_hide.cpp
int global_or_local = 1;

int main() {
    int global_or_local; // warning C4459
    global_or_local = 2;
}
```

Un modo per risolvere questo problema consiste nel creare uno spazio dei nomi per gli elementi globali, ma non usare una **`using`** direttiva per portare tale spazio dei nomi nell'ambito, in modo che tutti i riferimenti debbano usare i nomi completi non ambigui:

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
