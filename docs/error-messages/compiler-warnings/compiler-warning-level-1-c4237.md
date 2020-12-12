---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4237'
title: Avviso del compilatore (livello 1) C4237
ms.date: 11/04/2016
f1_keywords:
- C4237
helpviewer_keywords:
- C4237
ms.assetid: f2e86c4b-80d8-460e-9429-83c5f3f5d7ca
ms.openlocfilehash: a83c40d54a5bd711fbc399ac4880a211f3cf9bd7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266247"
---
# <a name="compiler-warning-level-1-c4237"></a>Avviso del compilatore (livello 1) C4237

parola chiave ' keyword ' non ancora supportata, riservata per un utilizzo futuro

Una parola chiave nella specifica C++ non è implementata nel compilatore Microsoft C++, ma la parola chiave non è disponibile come simbolo definito dall'utente.

L'esempio seguente genera l'C4237:

```cpp
// C4237.cpp
// compile with: /W1 /c
int export;   // C4237
```
