---
title: Avviso del compilatore (livello 4) C4673
ms.date: 11/04/2016
f1_keywords:
- C4673
helpviewer_keywords:
- C4673
ms.assetid: 95626ec6-f05b-43c7-8b9a-a60a6f98dd30
ms.openlocfilehash: ceaa5cd647dfb527713613b9ce3b5cd81a780fd7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50657730"
---
# <a name="compiler-warning-level-4-c4673"></a>Avviso del compilatore (livello 4) C4673

generare i tipi seguenti di 'identifier' non verrà considerata sito di rilevamento

Un oggetto gettare non può essere gestito nel **catch** blocco. Ogni tipo che non può essere gestito è elencato nell'output degli errori immediatamente dopo la riga contenente l'avviso. Ogni tipo non gestito ha un proprio avviso. Leggere l'avviso per ogni tipo specifico per altre informazioni.

L'esempio seguente genera l'errore C4673:

```
// C4673.cpp
// compile with: /EHsc /W4
class Base {
private:
   char * m_chr;
public:
   Base() {
      m_chr = 0;
   }

   ~Base() {
      if(m_chr)
         delete m_chr;
   }
};

class Derv : private Base {
public:
   Derv() {}
   ~Derv() {}
};

int main() {
   try {
      Derv D1;
      // delete previous line, uncomment the next line to resolve
      // Base D1;
      throw D1;   // C4673
   }

   catch(...) {}
}
```