---
title: "Errore del compilatore C3063 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3063"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3063"
ms.assetid: 0ecf6f1f-e4a7-487a-9fd5-79d8ac470001
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3063
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

operatore 'operatore': tutti gli operandi devono avere lo stesso tipo di enumerazione  
  
 Quando si utilizzano gli operatori in enumeratori, entrambi gli operandi devono avere lo stesso tipo di enumerazione.  Per ulteriori informazioni, vedere [Utilizzo di operatori ed enumerazioni](../../misc/operators-and-enumerations.md).  
  
 Il seguente codice di esempio genera l'errore C3063:  
  
```  
// C3063.cpp  
// compile with: /clr  
enum class E { a, b } e, mask;  
int main() {  
   if ( ( e & mask ) != 0 ) ;   // C3063 no operator!= (E, int)  
  
   if ( ( e & mask ) != E() )   // OK  
      ;  
}  
```