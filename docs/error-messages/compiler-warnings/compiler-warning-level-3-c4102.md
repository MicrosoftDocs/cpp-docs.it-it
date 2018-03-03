---
title: Compilatore avviso (livello 3) C4102 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4102
dev_langs:
- C++
helpviewer_keywords:
- C4102
ms.assetid: 349f308a-daf3-48c6-bd53-6c38b73f8880
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 92161f1c1b6d4a11babfeda11b23c9c71cad3398
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4102"></a>Avviso del compilatore (livello 3) C4102
'label': etichetta senza riferimenti  
  
 L'etichetta è stata definita mai utilizzata come riferimento. Il compilatore ignora l'etichetta.  
  
 L'esempio seguente genera l'errore C4102:  
  
```  
// C4102.cpp  
// compile with: /W3  
int main() {  
   int a;  
  
   test:   // C4102, remove the unreferenced label to resolve  
  
   a = 1;  
}  
```