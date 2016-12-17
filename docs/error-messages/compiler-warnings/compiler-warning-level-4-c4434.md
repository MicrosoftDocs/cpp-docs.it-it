---
title: "Avviso del compilatore (livello 4) C4434 | Microsoft Docs"
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
  - "C4434"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4434"
ms.assetid: 24b8785e-353a-4c37-8bed-ed61001a871d
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4434
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

un costruttore di classi deve avere accessibilità privata; conversione in accesso privato  
  
 L'avviso C4434 viene visualizzato per segnalare che l'accessibilità di un costruttore statico è stata modificata.  I costruttori statici devono avere accessibilità privata perché possono solo essere chiamati da Common Language Runtime.  Per ulteriori informazioni, vedere [Costruttori statici](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Static_constructors).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4434:  
  
```  
// C4434.cpp  
// compile with: /W4 /c /clr  
public ref struct R {  
   static R(){}   // C4434  
};  
```