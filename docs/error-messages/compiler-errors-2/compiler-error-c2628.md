---
title: "Errore del compilatore C2628 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2628"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2628"
ms.assetid: 19a25e77-d5be-4107-88d5-0745b6281f98
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2628
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo1' non può essere seguito da 'tipo2'. Si è omesso ','?  
  
 Potrebbe mancare un punto e virgola.  
  
 Il seguente codice di esempio genera l'errore C2628:  
  
```  
// C2628.cpp  
class CMyClass {}  
int main(){}   // C2628 error  
```  
  
 Possibile soluzione:  
  
```  
// C2628b.cpp  
class CMyClass {};  
int main(){}  
```