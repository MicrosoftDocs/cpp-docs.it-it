---
description: 'Altre informazioni su: errore del compilatore C2355'
title: Errore del compilatore C2355
ms.date: 11/04/2016
f1_keywords:
- C2355
helpviewer_keywords:
- C2355
ms.assetid: 0a947881-d61f-4f98-8409-32140f39500b
ms.openlocfilehash: f28799d4fbd72c7a5959bc4c68e1810b26052844
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328382"
---
# <a name="compiler-error-c2355"></a>Errore del compilatore C2355

'this': riferimento possibile solo all'interno di funzioni membro non statiche o inizializzatori di membri dati non statici

Il **`this`** puntatore è valido solo all'interno di funzioni membro non statiche o inizializzatori di membri dati non statici. Questo errore può verificarsi quando l'ambito di classe di una definizione di funzione membro esterna alla dichiarazione di classe non viene qualificato correttamente. L'errore può verificarsi anche quando il **`this`** puntatore viene usato in una funzione non dichiarata nella classe.

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
