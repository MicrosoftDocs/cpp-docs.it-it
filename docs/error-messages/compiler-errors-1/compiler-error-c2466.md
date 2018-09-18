---
title: Errore del compilatore C2466 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2466
dev_langs:
- C++
helpviewer_keywords:
- C2466
ms.assetid: 75b251d1-7d0b-4a86-afca-26adedf74486
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8d43ee9d09fba77db022177a06c6ebe95c65ff79
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46037840"
---
# <a name="compiler-error-c2466"></a>Errore del compilatore C2466

non è possibile allocare una matrice di dimensione costante 0

Una matrice viene allocata o dichiarata con dimensione zero. L'espressione costante per la dimensione della matrice deve essere un numero intero maggiore di zero. Una dichiarazione di matrice con dimensione zero è valida solo per una classe, struttura o membro di unione e solo con le estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).

L'esempio seguente genera l'errore C2466:

```
// C2466.cpp
// compile with: /c
int i[0];   // C2466
int j[1];   // OK
char *p;
```