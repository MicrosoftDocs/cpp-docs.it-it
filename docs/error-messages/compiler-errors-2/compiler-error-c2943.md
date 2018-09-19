---
title: Errore del compilatore C2943 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2943
dev_langs:
- C++
helpviewer_keywords:
- C2943
ms.assetid: ede6565e-d892-44c0-8eee-c69545f3be2e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4849e138cdbef97595d4aa1bbb45c277e7feb96a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46047330"
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