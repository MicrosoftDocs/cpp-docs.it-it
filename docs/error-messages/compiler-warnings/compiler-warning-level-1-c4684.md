---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4684'
title: Avviso del compilatore (livello 1) C4684
ms.date: 11/04/2016
f1_keywords:
- C4684
helpviewer_keywords:
- C4684
ms.assetid: e95f1a83-2784-4b05-ae94-12148e056e26
ms.openlocfilehash: 036548912c55b2f21d9d62b00a06e49c0af252ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285214"
---
# <a name="compiler-warning-level-1-c4684"></a>Avviso del compilatore (livello 1) C4684

' attribute ': avviso. l'attributo può causare la generazione di codice non valido: usare con cautela

È stato usato un attributo che non deve essere usato in genere.

L'esempio seguente genera l'C4684:

```cpp
// C4684.cpp
// compile with: /W1 /LD
[module(name="xx")]; // C4684 expected
[no_injected_text];
```
