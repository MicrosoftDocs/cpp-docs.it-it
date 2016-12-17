---
title: "Errore del compilatore C3755 | Microsoft Docs"
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
  - "C3755"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3755"
ms.assetid: 9317b55e-a52e-4b87-b915-5a208d6eda38
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3755
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'delegato': è possibile che un delegato non sia definito  
  
 Un [delegato](../../windows/delegate-cpp-component-extensions.md) può essere dichiarato, ma non definito.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3755:  
  
```  
// C3755.cpp  
// compile with: /clr /c  
delegate void MyDel() {};   // C3755  
```  
  
## Esempio  
 L'errore C3755 può verificarsi anche quando si tenta di creare un modello di delegato.  Nell'esempio seguente viene generato l'errore C3755:  
  
```  
// C3755_b.cpp  
// compile with: /clr /c  
ref struct R {  
   template<class T>  
   delegate void D(int) {}   // C3755  
};  
```