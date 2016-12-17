---
title: "Avviso del compilatore (livello 4) C4324 | Microsoft Docs"
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
  - "C4324"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4324"
ms.assetid: 420fa929-d9c0-40b4-8808-2d8ad3ca8090
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4324
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome\_struttura': struttura compilata in base all'attributo \_\_declspec\(align\(\)\)  
  
 La spaziatura interna è stata aggiunta alla fine di una struttura poiché è stato specificato un valore [\_\_declspec\(align\)](../../cpp/align-cpp.md).  
  
 Nel codice seguente, ad esempio, viene generato l'avviso C4324:  
  
```  
// C4324.cpp  
// compile with: /W4  
struct __declspec(align(32)) A  
{  
   char a;  
};   // C4324  
  
int main()  
{  
}  
```