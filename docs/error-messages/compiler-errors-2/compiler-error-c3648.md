---
title: "Errore del compilatore C3648 | Microsoft Docs"
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
  - "C3648"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3648"
ms.assetid: 5d042989-41cb-4cd0-aa50-976b70146aaf
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3648
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la sintassi di questo override esplicito richiede \/clr:oldSyntax  
  
 Durante la compilazione per la sintassi gestita più recente, è stata rilevata la sintassi di override esplicito di versioni precedenti.  
  
 Per ulteriori informazioni, vedere [Override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).  Per ulteriori informazioni sulla sintassi precedente, vedere [Override espliciti](../../cpp/explicit-overrides-cpp.md).  
  
 Il seguente codice di esempio genera l'errore C3648:  
  
```  
// C3648.cpp  
// compile with: /clr  
public interface struct I {  
   void f();  
};  
  
public ref struct R : I {  
   virtual void I::f() {}   // C3648  
   // try the following line instead  
   // virtual void f() = I::f{}  
};  
```