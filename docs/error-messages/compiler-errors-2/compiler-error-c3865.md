---
title: "Errore del compilatore C3865 | Microsoft Docs"
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
  - "C3865"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3865"
ms.assetid: 9bc62bb0-4fb8-4856-a5cf-c7cb4029a596
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3865
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'convenzione\_chiamata': utilizzabile solo con funzioni membro native  
  
 Una convenzione di chiamata è stata utilizzata su una funzione globale o una funzione membro di una classe gestita.  La convenzione di chiamata può essere utilizzata solo su una funzione membro nativa \(non gestita\).  
  
 Per ulteriori informazioni, vedere [Convenzioni di chiamata](../../cpp/calling-conventions.md).  
  
 Il seguente codice di esempio genera l'errore C3865:  
  
```  
// C3865.cpp  
// compile with: /clr  
// processor: x86  
void __thiscall Func(){}   // C3865  
  
// OK  
struct MyType {  
   void __thiscall Func(){}  
};  
```