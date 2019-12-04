---
title: Errore del compilatore C3208
ms.date: 11/04/2016
f1_keywords:
- C3208
helpviewer_keywords:
- C3208
ms.assetid: 6d060bfe-52cf-4599-8f70-bdeb5a670df3
ms.openlocfilehash: 61577ac4f28b8432a4425a76002ed5ad83186419
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761894"
---
# <a name="compiler-error-c3208"></a>Errore del compilatore C3208

'function': l'elenco dei parametri di modello per il modello di classe 'class' non corrisponde all'elenco dei parametri di modello per il parametro di modello 'param'

Il numero di parametri di modello di un modello non è uguale a quello del modello di classe specificato.

L'esempio seguente genera l'errore C3208:

```cpp
// C3208.cpp
template <template <class T> class TT >
int f();

template <class T1, class T2>
struct S;

template <class T1>
struct R;

int i = f<S>();   // C3208
// try the following line instead
// int i = f<R>();
```
