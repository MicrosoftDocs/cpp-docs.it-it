---
description: 'Altre informazioni su: avviso del compilatore (livello 2) C4244'
title: Avviso del compilatore (livello 2) C4244
ms.date: 11/04/2016
f1_keywords:
- C4244
helpviewer_keywords:
- C4244
ms.assetid: 2c19d157-21d1-42c2-a6c0-3f30f2ce3813
ms.openlocfilehash: b51af5179c9afbf01529f545bbc602ac9c9fac6d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97238128"
---
# <a name="compiler-warning-level-2-c4244"></a>Avviso del compilatore (livello 2) C4244

' argument ': conversione da' tipo1' a' tipo2', possibile perdita di dati

Un tipo a virgola mobile è stato convertito in un tipo Integer.  Potrebbe essersi verificata una perdita di dati.

Se viene visualizzato l'errore C4244, è consigliabile modificare il programma per poter usare tipi compatibili o aggiungere al codice la logica, per assicurarsi che l'intervallo di valori possibili sia sempre compatibili con i tipi usati.

C4244 può anche essere attivato al livello 3 e 4; Per ulteriori informazioni, vedere [Avviso del compilatore (livelli 3 e 4) C4244](../../error-messages/compiler-warnings/compiler-warning-levels-3-and-4-c4244.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4244:

```cpp
// C4244_level2.cpp
// compile with: /W2

int f(int x){ return 0; }
int main() {
   double x = 10.1;
   int i = 10;
   return (f(x));   // C4244
   // try the following line instead
   // return (f(i));
}
```
