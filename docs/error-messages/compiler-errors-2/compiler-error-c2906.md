---
title: Errore del compilatore C2906
ms.date: 11/04/2016
f1_keywords:
- C2906
helpviewer_keywords:
- C2906
ms.assetid: 30f652f1-6af6-4a2f-a69e-a1a4876cc8c6
ms.openlocfilehash: bf21c4f14948d56fe781226e5aaf1b479059cb55
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74748697"
---
# <a name="compiler-error-c2906"></a>Errore del compilatore C2906

' specializzazione ': la specializzazione esplicita richiede ' template < >'

È necessario utilizzare la nuova sintassi per la specializzazione esplicita di modelli.

L'esempio seguente genera l'C2906:

```cpp
// C2906.cpp
// compile with: /c
template<class T> class X{};   // primary template
class X<int> { }   // C2906
template<> class X<int> { };   // new syntax
```
