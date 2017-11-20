---
title: Errore del compilatore C2464 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2464
dev_langs: C++
helpviewer_keywords: C2464
ms.assetid: ace953d6-b414-49ee-bfef-90578a8da00c
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7e2600608ae490363d9042ad72ad91bf7cfe32d2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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