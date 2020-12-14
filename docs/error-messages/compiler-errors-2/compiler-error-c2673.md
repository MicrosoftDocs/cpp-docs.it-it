---
description: 'Altre informazioni su: errore del compilatore C2673'
title: Errore del compilatore C2673
ms.date: 11/04/2016
f1_keywords:
- C2673
helpviewer_keywords:
- C2673
ms.assetid: 780230c0-619b-4a78-b01d-ff5886306741
ms.openlocfilehash: 1b7d634e4c1b62860a648ef5327ffd8b888c7d7f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282068"
---
# <a name="compiler-error-c2673"></a>Errore del compilatore C2673

' Function ': le funzioni globali non hanno puntatori ' This '

Una funzione globale ha tentato di accedere a **`this`** .

L'esempio seguente genera l'C2673:

```cpp
// C2673.cpp
int main() {
   this = 0;   // C2673
}
```
