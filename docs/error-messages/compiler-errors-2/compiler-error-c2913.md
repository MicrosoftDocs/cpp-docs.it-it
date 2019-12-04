---
title: Errore del compilatore C2913
ms.date: 11/04/2016
f1_keywords:
- C2913
helpviewer_keywords:
- C2913
ms.assetid: c6cf6090-02e8-49a5-913f-5bc6f864b769
ms.openlocfilehash: 89f9e9393d0b4ee4075b24c20f0755a5317e94eb
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761072"
---
# <a name="compiler-error-c2913"></a>Errore del compilatore C2913

specializzazione esplicita; ' declaration ' non è una specializzazione di un modello di classe

Non è possibile specializzare una classe non modello.

L'esempio seguente genera l'C2913:

```cpp
// C2913.cpp
// compile with: /c
class X{};
template <class T> class Y{};

template<> class X<int> {};   // C2913
template<> class Y<int> {};
```
