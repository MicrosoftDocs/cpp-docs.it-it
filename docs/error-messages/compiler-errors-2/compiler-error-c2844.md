---
description: 'Altre informazioni su: errore del compilatore C2844'
title: Errore del compilatore C2844
ms.date: 11/04/2016
f1_keywords:
- C2844
helpviewer_keywords:
- C2844
ms.assetid: dcaf4cd2-21b0-4280-ae42-0a706c524d83
ms.openlocfilehash: 030d8526e7bfd85e7bcca1c115f1b5ce5d45c3aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97260279"
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
