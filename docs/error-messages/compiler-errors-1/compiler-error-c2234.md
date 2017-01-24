---
title: "Errore del compilatore C2234 | Microsoft Docs"
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
  - "C2234"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2234"
ms.assetid: cfa42458-c803-4717-a017-9eca1c0cbfb0
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2234
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome': le matrici di riferimenti non sono valide  
  
 Poiché non sono ammessi i puntatori ai riferimenti, le matrici di riferimenti non sono valide.  
  
 Il seguente codice di esempio genera l'errore C2234:  
  
```  
// C2234.cpp  
int main() {  
   int i = 0, j = 0, k = 0, l = 0;  
   int &array[4] = {i,j,k,l};   // C2234  
   int array2[4] = {i,j,k,l};   // OK  
}  
```