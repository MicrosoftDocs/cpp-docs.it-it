---
title: "Errore del compilatore C2842 | Microsoft Docs"
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
  - "C2842"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2842"
ms.assetid: 8674f08d-9f50-46ad-9229-abc6b74fa0e5
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2842
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': un tipo gestito o WinRT non può definire il proprio 'operator new' o 'operator delete'  
  
 È possibile definire il proprio [operator new](../Topic/operator%20new%20\(%3Cnew%3E\).md) o [operator delete](../Topic/operator%20delete%20\(%3Cnew%3E\).md) per gestire l'allocazione della memoria nell'heap nativo.  Tuttavia, le classi di riferimento non possono definire questi operatori perché vengono allocati esclusivamente nell'heap gestito.  
  
 Per altre informazioni, vedere [Operatori definiti dall'utente](../../dotnet/user-defined-operators-cpp-cli.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C2842.  
  
```  
// C2842.cpp  
// compile with: /clr /c  
ref class G {  
   void* operator new( size_t nSize );   // C2842  
};  
```  
  
## Esempio  
 L'esempio seguente genera l'errore C2842.  
  
```  
// C2842_b.cpp  
// compile with: /clr:oldSyntax /c  
__gc class G {  
   void* operator new( size_t nSize );   // C2842  
};  
```