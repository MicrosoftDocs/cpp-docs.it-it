---
title: Avviso del compilatore (livello 3) C4800
ms.date: 11/04/2016
f1_keywords:
- C4800
helpviewer_keywords:
- C4800
ms.assetid: 4f409799-a250-45ed-bb5f-657691b0d9f7
ms.openlocfilehash: 591b706249201691c7a9743d2cad082eb61e68b5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50636137"
---
# <a name="compiler-warning-level-3-c4800"></a>Avviso del compilatore (livello 3) C4800

> «*tipo*': forzare il valore bool 'true' o 'false' (avviso di prestazioni)

Questo avviso viene generato quando un valore che non è `bool` deve essere assegnata o convertito nel tipo `bool`. In genere, questo messaggio viene visualizzato mediante l'assegnazione `int` le variabili `bool` variabili in cui il `int` variabile contiene solo valori **true** e **false**e può essere ridichiarato come tipo `bool`. Se è possibile riscrivere l'espressione per usare il tipo `bool`, quindi è possibile aggiungere "`!=0`" per l'espressione, che fornisce il tipo dell'espressione `bool`. Esegue il cast dell'espressione nel tipo `bool` non disabilita l'avviso, per impostazione predefinita.

Questo avviso non viene generato non è più in Visual Studio 2017.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4800 e Mostra come risolverlo:

```cpp
// C4800.cpp
// compile with: /W3
int main() {
   int i = 0;

   // To fix, instead try:
   // bool i = 0;

   bool j = i;   // C4800
   j++;
}
```