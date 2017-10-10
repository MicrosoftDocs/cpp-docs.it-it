---
title: Errore del compilatore C2466 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2466
dev_langs:
- C++
helpviewer_keywords:
- C2466
ms.assetid: 75b251d1-7d0b-4a86-afca-26adedf74486
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 3c3ad19ce37aa51bd6b670da6e857d7eccce04ca
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

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
