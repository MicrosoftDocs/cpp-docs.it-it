---
title: Errore del compilatore C2464 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2464
dev_langs:
- C++
helpviewer_keywords:
- C2464
ms.assetid: ace953d6-b414-49ee-bfef-90578a8da00c
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3992f1ecc19beb5c4fa1208fe82a93deab546260
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2464"></a>Errore del compilatore C2464
'identifier': Impossibile utilizzare 'new' per allocare un riferimento  
  
 Un identificatore di riferimento è stato allocato con il `new` operatore. I riferimenti non sono oggetti di memoria, pertanto `new` non può restituire un puntatore a essi. Utilizzare la sintassi di dichiarazione di variabile standard per dichiarare un riferimento.  
  
 L'esempio seguente genera l'errore C2464:  
  
```  
// C2464.cpp  
int main() {  
   new ( int& ir );   // C2464  
}  
```