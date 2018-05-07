---
title: Errore del compilatore C2589 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2589
dev_langs:
- C++
helpviewer_keywords:
- C2589
ms.assetid: 1d7942c7-8a81-4bb4-b272-76a0019e8513
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c15589358979f554a9c17114f7d78b05dd83c472
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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