---
title: Errore del compilatore C2825 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2825
dev_langs:
- C++
helpviewer_keywords:
- C2825
ms.assetid: c832f1c1-5184-4fc2-9356-12b21daa7af3
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: ebe700fed581eadbab256c9c4f9e2f71bf1d1585
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2825"></a>Errore del compilatore C2825
var: deve essere una classe o spazio dei nomi quando seguito da ':: '  
  
 Tentativo non riuscito in modo da formare un nome completo.  
  
 Ad esempio, assicurarsi che il codice non contiene una dichiarazione di funzione in cui inizia con il nome della funzione::.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2825:  
  
```  
// C2825.cpp  
typedef int i;  
int main() {  
   int* p = new int;  
   p->i::i();   // C2825  
   // try the following line instead  
   // p->i::~i();  
}  
```
