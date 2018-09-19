---
title: Errore del compilatore C2085 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2085
dev_langs:
- C++
helpviewer_keywords:
- C2085
ms.assetid: 0a86785c-8e6f-481b-8c7b-412220c1950d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d88968e49e38a13782dde2d905a614ad4d177e81
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46082378"
---
# <a name="compiler-error-c2085"></a>Errore del compilatore C2085

'identifier': non in elenco parametri formale

L'identificatore è stato dichiarato in una definizione di funzione ma non in elenco di parametri formali. (Solo in ANSI C)

L'esempio seguente genera l'errore C2085:

```
// C2085.c
void func1( void )
int main( void ) {}   // C2085
```

Possibile soluzione:

```
// C2085b.c
void func1( void );
int main( void ) {}
```

Con il punto e virgola, `func1()` è simile a una definizione di funzione, non un prototipo, pertanto `main` è definito all'interno `func1()`, errore C2085 per identificatore `main`.