---
title: "Avviso del compilatore (livello 1) C4555 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4555"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4555"
ms.assetid: 50b286c1-f7bf-4292-b1fa-baaac9538611
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4555
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'espressione non ha effetto. Prevista espressione con effetto collaterale  
  
 L'avviso indica quando un'espressione non ha effetto.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 Di seguito è riportato un esempio.  
  
```  
// C4555.cpp  
// compile with: /W1  
#pragma warning(default:4555)  
  
void func1()  
{  
   1;   // C4555  
}  
  
void func2()  
{  
   int x;  
   x;   // C4555  
}  
  
int main()  
{  
}  
```