---
title: Errore del compilatore C2252 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2252
dev_langs:
- C++
helpviewer_keywords:
- C2252
ms.assetid: fee74ab9-1997-4615-82fe-e6d1fe3aacd9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 31fb5b48f322fbce71f1b830a01e428930937958
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46041376"
---
# <a name="compiler-error-c2252"></a>Errore del compilatore C2252

non è possibile creare in modo esplicito un'istanza di modello nell'ambito corrente

Il compilatore ha rilevato un problema con un'istanza esplicita di un modello.  Ad esempio, non è possibile creare in modo esplicito un modello in una funzione.

L'esempio seguente genera l'errore C2252:

```
// C2252.cpp
class A {
public:
   template <class T>
   int getit(int i , T * it ) {
      return i;
   }
   template int A::getit<double>(int i, double * it);   // C2252
   // try the following line instead
   // template <> int A::getit<double>(int i, double * it);

};

int main() {
   // cannot explicitly instantiate in function
   template int A::getit<long>(int i, long * it);   // C2252
}
```