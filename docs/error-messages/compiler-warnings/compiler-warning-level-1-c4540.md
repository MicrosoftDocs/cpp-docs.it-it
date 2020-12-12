---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4540'
title: Avviso del compilatore (livello 1) C4540
ms.date: 11/04/2016
f1_keywords:
- C4540
helpviewer_keywords:
- C4540
ms.assetid: 8085e748-5f4d-43c2-b06d-eaf794edbf72
ms.openlocfilehash: 8bd65d09abf48fc3653f160ebdf109235f3e1471
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212259"
---
# <a name="compiler-warning-level-1-c4540"></a>Avviso del compilatore (livello 1) C4540

dynamic_cast utilizzato per convertire la base inaccessibile o ambigua; il test in fase di esecuzione avrà esito negativo (da' tipo1' a' tipo2')

È stato usato **`dynamic_cast`** per eseguire la conversione da un tipo a un altro. Il compilatore ha determinato che il cast avrebbe sempre esito negativo (restituire **null**) perché una classe base è inaccessibile ( **`private`** , ad esempio) o ambigua (ad esempio, appare più di una volta nella gerarchia di classi).

Di seguito viene illustrato un esempio di questo avviso. La classe **B** è derivata dalla classe **A**. Il programma usa **`dynamic_cast`** per eseguire il cast dalla classe **B** (la classe derivata) alla classe **a**, che avrà sempre esito negativo perché la classe **b** è e pertanto non è **`private`** accessibile. La modifica dell'accesso di **un oggetto** a **`public`** risolverà l'avviso.

```cpp
// C4540.cpp
// compile with: /W1

struct A {
   virtual void g() {}
};

struct B : private A {
   virtual void g() {}
};

int main() {
   B b;
   A * ap = dynamic_cast<A*>(&b);   // C4540
}
```
