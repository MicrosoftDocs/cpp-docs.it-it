---
title: Errore del compilatore C2760 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2760
dev_langs:
- C++
helpviewer_keywords:
- C2760
ms.assetid: 585757fd-d519-43f3-94e5-50316ac8b90b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: beee34b7dfa31365e9bdf79c843cca501a930e02
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33229836"
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