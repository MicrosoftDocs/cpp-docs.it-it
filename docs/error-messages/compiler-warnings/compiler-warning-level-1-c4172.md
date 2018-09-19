---
title: Compilatore Warning (level 1) C4172 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4172
dev_langs:
- C++
helpviewer_keywords:
- C4172
ms.assetid: a8d2bf65-d8b1-4fe3-8340-a223d7e7fde6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 56f606b48fb060472dd67d34800c06946bc41712
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46043508"
---
# <a name="compiler-warning-level-1-c4172"></a>Compilatore Warning (level 1) C4172

restituzione di indirizzo della variabile locale o temporanei

Una funzione restituisce l'indirizzo di un oggetto temporaneo o variabile locale. Le variabili locali e gli oggetti temporanei vengono eliminati definitivamente quando una funzione viene restituito, in modo che l'indirizzo restituito non è valido.

Riprogettare la funzione in modo che non viene restituito l'indirizzo di un oggetto locale.

L'esempio seguente genera l'errore C4172:

```
// C4172.cpp
// compile with: /W1 /LD
float f = 10;

const double& bar() {
// try the following line instead
// const float& bar() {
   return f;   // C4172
}
```