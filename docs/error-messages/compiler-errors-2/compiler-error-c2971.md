---
title: "Errore del compilatore C2971 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2971"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2971"
ms.assetid: fdb5467b-9a41-41ef-ac20-2e9428d5a4fc
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2971
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe': parametro di template 'param': 'arg': non è possibile utilizzare una variabile locale come argomento non di tipo  
  
 Non è possibile utilizzare il nome o l'indirizzo di una variabile locale come argomento di un template.  
  
 Il seguente codice di esempio genera l'errore C2971:  
  
```  
// C2971.cpp  
template <int *pi>   
class Y {};  
  
int global_var = 0;  
  
int main() {  
   int local_var = 0;  
   Y<&local_var> aY;   // C2971  
   // try the following line instead  
   // Y<&global_var> aY;  
}  
```