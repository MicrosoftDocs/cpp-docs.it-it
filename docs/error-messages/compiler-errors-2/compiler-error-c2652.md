---
title: Errore del compilatore C2652
ms.date: 11/04/2016
f1_keywords:
- C2652
helpviewer_keywords:
- C2652
ms.assetid: 6e3d1a90-a989-4088-8afd-dc82f6a2d66f
ms.openlocfilehash: 9c9772052b690ad87de1d408c06478d82d48e724
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62282114"
---
# <a name="compiler-error-c2652"></a>Errore del compilatore C2652

'identifier': costruttore di copia non valida: primo parametro non deve essere un' 'identifier'

Il primo parametro nel costruttore di copia ha lo stesso tipo della classe, struttura o unione per il quale è definito. Il primo parametro può essere un riferimento al tipo, ma non il tipo stesso.

L'esempio seguente genera l'errore C2651:

```
// C2652.cpp
// compile with: /c
class A {
   A( A );   // C2652 takes an A
};
class B {
   B( B& );   // OK, reference to B
};
```