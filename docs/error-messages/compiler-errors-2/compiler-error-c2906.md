---
description: 'Altre informazioni su: errore del compilatore C2906'
title: Errore del compilatore C2906
ms.date: 11/04/2016
f1_keywords:
- C2906
helpviewer_keywords:
- C2906
ms.assetid: 30f652f1-6af6-4a2f-a69e-a1a4876cc8c6
ms.openlocfilehash: 49a7e5736c1f5e1869b04e79f1c979c3620b58ed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97270667"
---
# <a name="compiler-error-c2906"></a>Errore del compilatore C2906

' specializzazione ': la specializzazione esplicita richiede ' template <>'

È necessario utilizzare la nuova sintassi per la specializzazione esplicita di modelli.

L'esempio seguente genera l'C2906:

```cpp
// C2906.cpp
// compile with: /c
template<class T> class X{};   // primary template
class X<int> { }   // C2906
template<> class X<int> { };   // new syntax
```
