---
title: Avviso (livello 3) del compilatore C4800 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4800
dev_langs:
- C++
helpviewer_keywords:
- C4800
ms.assetid: 4f409799-a250-45ed-bb5f-657691b0d9f7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b5a19c27731192a5fe2930aec3e78fb66d790484
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46090907"
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