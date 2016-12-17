---
title: "Errore del compilatore C3366 | Microsoft Docs"
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
  - "C3366"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3366"
ms.assetid: efc55bcf-c16d-43c1-a36f-87a6165fa2a8
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3366
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variable': i membri dati statici dei tipi gestiti o WinRT devono essere definiti nella definizione della classe  
  
 Si è tentato di fare riferimento a un membro statico di una classe o un'interfaccia WinRT o .NET al di fuori della definizione di tale classe o interfaccia.  
  
 Il compilatore deve conoscere la definizione completa della classe \(per creare i metadati dopo un solo passaggio\) ed è necessario che i membri dati statici vengano inizializzati all'interno della classe.  
  
 L'esempio seguente genera l'errore C3366 e mostra come risolverlo:  
  
```  
// C3366.cpp  
// compile with: /clr /c  
ref class X {  
   public:  
   static int i;   // initialize i here to avoid C3366  
};  
  
int X::i = 5;      // C3366  
```  
  
 L'esempio seguente genera l'errore C3366 e mostra come risolverlo:  
  
```  
// C3366_b.cpp  
// compile with: /clr:oldSyntax /c  
__gc struct X {  
   static int i;   // initialize i here to avoid C3366  
};  
  
int X::i = 5;      // C3366  
```