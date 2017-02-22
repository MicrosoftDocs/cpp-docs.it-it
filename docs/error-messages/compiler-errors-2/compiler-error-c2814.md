---
title: "Errore del compilatore C2814 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2814"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2814"
ms.assetid: 7d165136-a08b-4497-a76d-60a21bb19404
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Errore del compilatore C2814
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'member': impossibile annidare un tipo nativo in un tipo gestito o WinRT 'type'  
  
## Esempio  
 Un tipo nativo non può essere annidato in un tipo CLR o WinRT.  L'esempio seguente genera l'errore C2814 e mostra come risolverlo.  
  
```  
// C2814.cpp  
// compile with: /clr /c  
ref class A {  
   class B {};   // C2814  
   ref class C {};   // OK  
};  
```  
  
## Esempio  
 Usando Estensioni gestite per C\+\+, è necessario specificare in modo esplicito che un tipo incorporato è "soggetto a gestione" mediante una delle parole chiave seguenti: [\_\_gc](../../misc/gc.md), [\_\_nogc](../../misc/nogc.md) o [\_\_value](../../misc/value.md).  
  
 L'esempio seguente genera l'errore C2814 e mostra come risolverlo.  
  
```  
// C2814_b.cpp  
// compile with: /clr:oldSyntax /c  
__gc class A {  
   class B {};   // C2814  
   __gc class C {};   // OK  
};  
```