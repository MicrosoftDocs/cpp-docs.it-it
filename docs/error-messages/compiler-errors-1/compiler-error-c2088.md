---
title: Errore del compilatore C2088 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2088
dev_langs: C++
helpviewer_keywords: C2088
ms.assetid: b93f7094-185b-423d-8bb9-507cd757dbf5
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a8c99d25995baf6285fe77761c7a054a0512bdfc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2088"></a>Errore del compilatore C2088
'operator': non valido per 'class-key'  
  
 L'operatore non è stato definito per la struttura o unione. Questo errore è valido solo per codice C.  
  
 L'esempio seguente genera l'errore C2088 tre volte:  
  
```  
// C2088.c  
struct S {  
   int m_i;   
} s;  
  
int main() {  
   int i = s * 1;   // C2088  
   struct S s2 = +s;   // C2088  
   s++;   // C2088  
}  
```