---
title: "Avviso del compilatore (livello 3) C4240 | Microsoft Docs"
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
  - "C4240"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4240"
ms.assetid: a2657cdb-18e1-493f-882b-4e10c0bca71d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4240
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: l'accesso a 'nomeclasse', ora definito come 'identificatore di accesso', era precedentemente definito come 'identificatore di accesso'  
  
 In compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\), non è possibile modificare l'accesso a una classe annidata.  Tale operazione è invece possibile con le estensioni Microsoft predefinite \(\/Ze\) e genera l'avviso illustrato di seguito.  
  
## Esempio  
  
```  
// C4240.cpp  
// compile with: /W3  
class X  
{  
private:  
   class N;  
public:  
   class N  
   {   // C4240  
   };  
};  
  
int main()  
{  
}  
```