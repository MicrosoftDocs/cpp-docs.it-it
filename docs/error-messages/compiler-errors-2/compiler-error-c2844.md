---
title: Errore del compilatore C2844
ms.date: 11/04/2016
f1_keywords:
- C2844
helpviewer_keywords:
- C2844
ms.assetid: dcaf4cd2-21b0-4280-ae42-0a706c524d83
ms.openlocfilehash: fdfd2200503f80addb120117ce06f5f837d6b9f2
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74752015"
---
# <a name="compiler-error-c2844"></a>Errore del compilatore C2844

' member ': non può essere un membro dell'interfaccia ' Interface '

Una [classe di interfaccia](../../extensions/interface-class-cpp-component-extensions.md) non può contenere un membro dati a meno che non sia anche una proprietà.

In un'interfaccia non è consentito un valore diverso da una proprietà o una funzione membro. Inoltre, i costruttori, i distruttori e gli operatori non sono consentiti.

L'esempio seguente genera l'C2844:

```cpp
// C2844a.cpp
// compile with: /clr /c
public interface class IFace {
   int i;   // C2844
   // try the following line instead
   // property int Size;
};
```
