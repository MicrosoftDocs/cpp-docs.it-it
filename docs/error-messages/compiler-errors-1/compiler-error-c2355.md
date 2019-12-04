---
title: Errore del compilatore C2355
ms.date: 11/04/2016
f1_keywords:
- C2355
helpviewer_keywords:
- C2355
ms.assetid: 0a947881-d61f-4f98-8409-32140f39500b
ms.openlocfilehash: e44501f7df05a8b277cd52107ff35c4c4d30578f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759945"
---
# <a name="compiler-error-c2355"></a>Errore del compilatore C2355

'this': riferimento possibile solo all'interno di funzioni membro non statiche o inizializzatori di membri dati non statici

Il puntatore `this` è valido solo all'interno di funzioni membro non statiche o in inizializzatori di membri dati non statici. Questo errore può verificarsi quando l'ambito di classe di una definizione di funzione membro esterna alla dichiarazione di classe non viene qualificato correttamente. Questo errore può verificarsi anche quando il puntatore `this` viene usato in una funzione non dichiarata nella classe.

Per risolvere questo problema, verificare che la definizione di funzione membro corrisponda a una dichiarazione di funzione membro nella classe e che non sia dichiarata static. Per gli inizializzatori di membri dati, assicurarsi che il membro dati non sia dichiarato static.

L'esempio seguente genera l'errore C2355 e mostra come risolverlo:

```cpp
// C2355.cpp
// compile with: /c
class MyClass {};
MyClass *p = this;   // C2355

// OK
class MyClass2 {
public:
   void Test() {
      MyClass2 *p = this;
   }
};
```
