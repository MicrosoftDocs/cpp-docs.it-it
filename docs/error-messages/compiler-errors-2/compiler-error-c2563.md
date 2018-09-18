---
title: Errore del compilatore C2563 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2563
dev_langs:
- C++
helpviewer_keywords:
- C2563
ms.assetid: 54abba68-6458-4ca5-894d-3babdb7b3552
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eec8526df1c5ff69899dd0a2d103cb5f28d4c00c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46067403"
---
# <a name="compiler-error-c2563"></a>Errore del compilatore C2563

mancata corrispondenza nell'elenco parametri formale

Elenco di parametri formali di una funzione (o un puntatore a una funzione) non corrispondono a quelli di un'altra funzione (o puntatore a una funzione membro). Di conseguenza, non può essere effettuata l'assegnazione delle funzioni o i puntatori.

L'esempio seguente genera l'errore C2563:

```
// C2563.cpp
void func( int );
void func( int, int );
int main() {
   void *fp();
   fp = func;   // C2563
}
```