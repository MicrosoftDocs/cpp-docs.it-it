---
description: 'Altre informazioni su: errore del compilatore C3200'
title: Errore del compilatore C3200
ms.date: 11/04/2016
f1_keywords:
- C3200
helpviewer_keywords:
- C3200
ms.assetid: 44bb5e77-f0ec-421c-a732-b9ee7c0a3529
ms.openlocfilehash: c693878628ff0bd9dddcb2f100ca652910b0fb89
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330655"
---
# <a name="compiler-error-c3200"></a>Errore del compilatore C3200

' template ': argomento di modello non valido per il parametro di modello ' parameter '. previsto un modello di classe

È stato passato un argomento non valido a un modello di classe. Il modello di classe prevede un modello come parametro. Nell'esempio seguente, la chiamata di genererà `Y<int, int> aY` C3200. Il primo parametro deve essere un modello, ad esempio `Y<X, int> aY` .

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
