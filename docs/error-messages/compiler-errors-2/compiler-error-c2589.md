---
title: Errore del compilatore C2589 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2589
dev_langs:
- C++
helpviewer_keywords:
- C2589
ms.assetid: 1d7942c7-8a81-4bb4-b272-76a0019e8513
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 5301caf0b52e61000a804e1d73b76343a8b7b2eb
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2589"></a>Errore del compilatore C2589
'identifier': token non valido a destra di ':: '  
  
 Se una classe, struttura o unione nome viene visualizzato a sinistra dell'operatore di risoluzione dell'ambito (doppi due punti), il token a destra deve essere una classe, struttura o unione membro. In caso contrario, qualsiasi identificatore globale può essere visualizzato a destra.  
  
 Impossibile eseguire l'overload dell'operatore di risoluzione dell'ambito.  
  
 L'esempio seguente genera l'errore C2589:  
  
```  
// C2589.cpp  
void Test(){}  
class A {};  
void operator :: ();   // C2589  
  
int main() {  
   ::Test();  
}  
```
