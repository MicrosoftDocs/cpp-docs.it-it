---
title: Errore del compilatore C2601 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2601
dev_langs: C++
helpviewer_keywords: C2601
ms.assetid: 88275582-5f37-45d7-807d-05f06ba00965
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: cdffa40b751232525920d1d92affd9e3778d2f61
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2601"></a>Errore del compilatore C2601
'function': non sono valide le definizioni di funzione locale  
  
 Codice tenta di definire una funzione all'interno di una funzione.  
  
 In alternativa, nel codice sorgente prima della posizione dell'errore C2601 potrebbe essere presente una parentesi graffa supplementare.  
  
 L'esempio seguente genera l'errore C2601:  
  
```  
// C2601.cpp  
int main() {  
   int i = 0;  
  
   void funcname(int j) {   // C2601  
      j++;  
   }  
}  
```