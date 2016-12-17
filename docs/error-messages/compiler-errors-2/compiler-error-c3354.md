---
title: "Errore del compilatore C3354 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3354"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3354"
ms.assetid: 185de401-231e-4999-a149-172ee4c69d84
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3354
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': la funzione usata per creare un delegato non può avere un tipo restituito 'type'  
  
 I tipi seguenti non sono validi come tipi restituiti per un [delegato](../../misc/delegate.md):  
  
-   Puntatore a funzione  
  
-   Puntatore a membro  
  
-   Puntatore a funzione membro  
  
-   Riferimento a funzione  
  
-   Riferimento a funzione membro  
  
 L'esempio seguente genera l'errore C3354:  
  
```  
// C3354_2.cpp // compile with: /clr /c using namespace System; typedef void ( *VoidPfn )(); delegate VoidPfn func(); // C3354 // try the following line instead // delegate  void func();  
```  
  
 L'esempio seguente genera l'errore C3354:  
  
```  
// C3354.cpp // compile with: /clr:oldSyntax /c #using <mscorlib.dll> using namespace System; typedef void (*VoidPfn)(); __delegate VoidPfn func();   // C3354 // try the following line instead // __delegate void func();  
```