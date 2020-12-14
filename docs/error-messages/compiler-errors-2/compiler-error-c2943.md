---
description: 'Altre informazioni su: errore del compilatore C2943'
title: Errore del compilatore C2943
ms.date: 11/04/2016
f1_keywords:
- C2943
helpviewer_keywords:
- C2943
ms.assetid: ede6565e-d892-44c0-8eee-c69545f3be2e
ms.openlocfilehash: f85000ae554e25f2ca783b605b036abb3f04eadb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249581"
---
# <a name="compiler-error-c2943"></a>Errore del compilatore C2943

'class': id-classe-tipo ridefinito come argomento di tipo di un modello

Non è possibile usare una classe generica o una classe modello al posto di un simbolo come argomento di tipo generico o modello.

L'esempio seguente genera l'errore C2943:

```cpp
// C2943.cpp
// compile with: /c
template<class T>
class List {};

template<class List<int> > class MyList;   // C2943
template<class T >  class MyList;
```
