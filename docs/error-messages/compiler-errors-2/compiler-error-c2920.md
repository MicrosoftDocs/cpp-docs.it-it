---
description: 'Altre informazioni su: errore del compilatore C2920'
title: Errore del compilatore C2920
ms.date: 11/04/2016
f1_keywords:
- C2920
helpviewer_keywords:
- C2920
ms.assetid: 0a4cb2de-00a0-4209-8160-c7ce6ed7d9ab
ms.openlocfilehash: 08c11832fc2241fb8fbebf7bda56db29bf181022
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97270329"
---
# <a name="compiler-error-c2920"></a>Errore del compilatore C2920

ridefinizione: 'class': modello di classe o generico già dichiarato come 'type'

Un generico o un modello di classe dispone di più dichiarazioni, che non sono equivalenti. Per correggere l'errore, usare un nome diverso per ogni tipo o rimuovere la ridefinizione del nome del tipo.

L'esempio seguente genera l'errore C2920 e mostra come risolverlo:

```cpp
// C2920.cpp
// compile with: /c
typedef int TC1;
template <class T>
struct TC1 {};   // C2920
struct TC2 {};   // OK - fix by using a different name
```

C2920 può verificarsi anche quando si usano i generics:

```cpp
// C2920b.cpp
// compile with: /clr /c
typedef int GC1;
generic <class T>
ref struct GC1 {};   // C2920
ref struct GC2 {};   // OK - fix by using a different name
```
