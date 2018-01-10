---
title: Errore del compilatore C2760 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2760
dev_langs: C++
helpviewer_keywords: C2760
ms.assetid: 585757fd-d519-43f3-94e5-50316ac8b90b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 02174986138190a03db2211eb6f67e0626261091
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2760"></a>Errore del compilatore C2760
Errore di sintassi: previsto 'nome1' non 'name2'  
  
 Un operatore di cast viene utilizzato con un operatore non valido.  
  
 L'esempio seguente genera l'errore C2760:  
  
```  
// C2760.cpp  
class B {};  
class D : public B {};  
  
void f(B* pb) {  
    D* pd1 = static_cast<D*>(pb);  
    D* pd2 = static_cast<D*>=(pb);  // C2760  
    D* pd3 = static_cast<D*=(pb);   // C2760  
}  
```