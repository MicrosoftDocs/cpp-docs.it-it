---
title: "Errore del compilatore C3195 | Microsoft Docs"
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
  - "C3195"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3195"
ms.assetid: 97e4f681-812b-49e8-ba57-24b7817e3cd8
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3195
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': è riservata e non può essere utilizzata come membro di una classe di riferimento o un tipo di valore.Gli operatori CLR o WinRT devono essere definiti usando la parola chiave 'operator'  
  
 Il compilatore ha rilevato una definizione dell'operatore che usa la sintassi di Estensioni gestite per C\+\+.  
  
 Usare la nuova sintassi di C\+\+ o usare l'opzione del compilatore **\/clr:oldSyntax** per abilitare la sintassi di Estensioni gestite per C\+\+.  
  
 L'esempio seguente genera l'errore C3195 e mostra come risolverlo:  
  
```  
// C3195.cpp  
// compile with: /clr /LD  
#using <mscorlib.dll>  
value struct V {  
   static V op_Addition(V v, int i);   // C3195  
   static V operator +(V v, char c);   // OK for new C++ syntax   
};  
```