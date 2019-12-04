---
title: Errore del compilatore C3200
ms.date: 11/04/2016
f1_keywords:
- C3200
helpviewer_keywords:
- C3200
ms.assetid: 44bb5e77-f0ec-421c-a732-b9ee7c0a3529
ms.openlocfilehash: 7f6b514231bcda18404e891e0acbe457c8f95146
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738778"
---
# <a name="compiler-error-c3200"></a>Errore del compilatore C3200

' template ': argomento di modello non valido per il parametro di modello ' parameter '. previsto un modello di classe

È stato passato un argomento non valido a un modello di classe. Il modello di classe prevede un modello come parametro. Nell'esempio seguente, la chiamata di `Y<int, int> aY` genererà C3200. Il primo parametro deve essere un modello, ad esempio `Y<X, int> aY`.

```cpp
// C3200.cpp
template<typename T>
class X
{
};

template<template<typename U> class T1, typename T2>
class Y
{
};

int main()
{
   Y<int, int> y;   // C3200
}
```
