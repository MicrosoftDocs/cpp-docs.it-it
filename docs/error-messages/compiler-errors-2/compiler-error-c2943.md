---
title: Errore del compilatore C2943
ms.date: 11/04/2016
f1_keywords:
- C2943
helpviewer_keywords:
- C2943
ms.assetid: ede6565e-d892-44c0-8eee-c69545f3be2e
ms.openlocfilehash: 53340611ef92aac7c9bed30f364fed424fdfe140
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62366277"
---
# <a name="compiler-error-c2943"></a>Errore del compilatore C2943

'class': id-classe-tipo ridefinito come argomento di tipo di un modello

Non è possibile usare una classe generica o una classe modello al posto di un simbolo come argomento di tipo generico o modello.

L'esempio seguente genera l'errore C2943:

```
// C2943.cpp
// compile with: /c
template<class T>
class List {};

template<class List<int> > class MyList;   // C2943
template<class T >  class MyList;
```