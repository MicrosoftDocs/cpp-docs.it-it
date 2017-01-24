---
title: "Errore del compilatore C3737 | Microsoft Docs"
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
  - "C3737"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3737"
ms.assetid: ca2aeb23-2491-4ccb-8838-884abf7065c8
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3737
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'delegato': un delegato non può avere una convenzione di chiamata esplicita  
  
 Non è possibile specificare la [convenzione di chiamata](../../cpp/calling-conventions.md) per un [\_\_delegate](../../misc/delegate.md).  
  
 Il seguente codice di esempio genera l'errore C3737:  
  
```  
// C3737a.cpp  
// compile with: /clr  
delegate void __stdcall MyFunc();   // C3737  
// Try the following line instead.  
// delegate void MyFunc();  
  
int main() {  
}  
```  
  
 Il seguente codice di esempio genera l'errore C3737:  
  
```  
// C3737b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__delegate void __stdcall MyFunc();   // C3737  
// Try the following line instead.  
// __delegate void MyFunc();  
  
int main() {  
}  
```