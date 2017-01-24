---
title: "Errore del compilatore C3150 | Microsoft Docs"
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
  - "C3150"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3150"
ms.assetid: c1ff28f5-52fe-4fd4-81d0-2e0ad8548631
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3150
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'elemento': 'attributo' può essere utilizzato solo con una classe, una struttura, un'interfaccia, una matrice o un puntatore  
  
 [\_\_gc](../../misc/gc.md) può essere utilizzato solo su una classe, un'interfaccia o una matrice.  
  
 L'errore C3150 può essere generato solo utilizzando **\/clr:oldSyntax**.  
  
 Il seguente codice di esempio genera l'errore C3150:  
  
```  
// C3150.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc void f()   // C3150; function cannot be managed  
{  
}  
```