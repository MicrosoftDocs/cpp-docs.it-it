---
title: Errore del compilatore C2196 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2196
dev_langs: C++
helpviewer_keywords: C2196
ms.assetid: fd2f6a58-48ce-4e58-96f8-e37720feb8e7
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 858fbc2f1998aa50b02618655b6ccfcab007cc81
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2196"></a>Errore del compilatore C2196
valore case 'value' già usato.  
  
 Un'istruzione switch usa più volte lo stesso valore case.  
  
 L'esempio seguente genera l'errore C2196:  
  
```  
// C2196.cpp  
int main() {  
   int i = 0;  
   switch( i ) {  
   case 0:  
      break;  
   case 0:   // C2196  
   // try the following line instead  
   // case 1:  
      break;  
   }  
}  
```