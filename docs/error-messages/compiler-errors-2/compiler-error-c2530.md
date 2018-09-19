---
title: Errore del compilatore C2530 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2530
dev_langs:
- C++
helpviewer_keywords:
- C2530
ms.assetid: b790a312-48df-4a6a-9e27-be2c5f32f16c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f41f9ec64e2074ed5e0cd2654f2b6bfec886bc07
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46103193"
---
# <a name="compiler-error-c2530"></a>Errore del compilatore C2530

'identifier': i riferimenti devono essere inizializzati

È necessario inizializzare un riferimento quando è stata dichiarata, a meno che non è già dichiarato:

- Con la parola chiave [extern](../../cpp/using-extern-to-specify-linkage.md).

- Come membro di una classe, struttura o unione (e viene inizializzato nel costruttore).

- Come parametro in una definizione o dichiarazione di funzione.

- Come tipo restituito di una funzione.

L'esempio seguente genera l'errore C2530:

```
// C2530.cpp
int main() {
   int i = 0;
   int &j;   // C2530
   int &k = i;   // OK
}
```