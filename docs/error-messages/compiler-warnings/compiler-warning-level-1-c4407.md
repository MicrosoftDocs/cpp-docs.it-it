---
title: "Avviso del compilatore (livello 1) C4407 | Microsoft Docs"
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
  - "C4407"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4407"
ms.assetid: 32bc2c21-363a-4bb8-b486-725faeaededc
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4407
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

cast tra rappresentazioni di puntatori a membri differenti; il compilatore potrebbe generare codice non corretto  
  
 È stato rilevato un cast errato.  
  
 L'errore C4407 può essere il risultato delle operazioni di conformità del compilatore effettuate in Visual C\+\+ 2005.  Puntatore a membro richiede ora un nome qualificato e l'operatore address\-of \(&\).  
  
 L'errore C4407 può verificarsi se si esegue un cast tra un puntatore a membri a ereditarietà multipla e un puntatore a membri a ereditarietà singola.  In alcuni casi questa operazione ha esito positivo, ma in altri non viene completata perché la rappresentazione del puntatore a membri a ereditarietà singola non contiene informazioni sufficienti.  Una soluzione potrebbe consistere nel compilare con **\/vmm** \(per ulteriori informazioni, vedere [\/vmm, \/vms, \/vmv \(Rappresentazione generale\)](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)\).  È inoltre possibile tentare di ridisporre le classi base. Il compilatore rileva una perdita di informazioni nella conversione perché una classe base non si trova in corrispondenza di un offset diverso da zero rispetto alla relativa derivata.  
  
 Il seguente codice di esempio genera l'errore C4407:  
  
```  
// C4407.cpp  
// compile with: /W1 /c  
struct C1 {};  
struct C2 {};  
struct C3 : C1, C2 {};  
  
typedef void(C3::*PMF_C3)();  
typedef void(C2::*PMF_C2)();  
  
PMF_C2 f1(PMF_C3 pmf) {  
   return (PMF_C2)pmf;   // C4407, change type of cast,  
   // or reverse base class inheritance of C3 (i.e. : C2, C1)  
}  
```