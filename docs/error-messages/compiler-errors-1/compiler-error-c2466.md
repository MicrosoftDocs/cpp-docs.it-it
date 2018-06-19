---
title: Errore del compilatore C2466 | Documenti Microsoft
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
ms.openlocfilehash: e55e5c130b0a0454577a7155b704a18933b86198
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33224308"
---
# <a name="compiler-error-c2466"></a>Errore del compilatore C2466
Impossibile allocare una matrice di dimensione costante 0  
  
 Una matrice viene allocata o dichiarata con dimensione zero. L'espressione costante per la dimensione della matrice deve essere un numero intero maggiore di zero. Una dichiarazione di matrice con dimensione zero è valida solo per una classe, struttura o membro di unione e solo con le estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).  
  
 L'esempio seguente genera l'errore C2466:  
  
```  
// C2466.cpp  
// compile with: /c  
int i[0];   // C2466  
int j[1];   // OK  
char *p;  
```