---
title: Compilatore avviso (livello 1) C4407 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4407
dev_langs:
- C++
helpviewer_keywords:
- C4407
ms.assetid: 32bc2c21-363a-4bb8-b486-725faeaededc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cbc02c32463703f658cef1d5756926311d89b193
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33282951"
---
# <a name="compiler-warning-level-1-c4407"></a>Avviso del compilatore (livello 1) C4407
eseguire il cast tra puntatore diversi per le rappresentazioni di membro, compilatore potrebbe generare codice non corretto  
  
 È stato rilevato un cast non corretto.  
  
 C4407 può venire generato a causa di operazioni di conformità del compilatore in Visual C++ 2005 è stata eseguita. Puntatore a membro richiede ora un nome qualificato e l'operatore address-of (&).  
  
 C4407 può verificarsi se si esegue il cast tra un più ereditarietà puntatore a membro di un'ereditarietà singola puntatore a membro. In alcuni casi ciò possa funzionare, ma a volte non viene completata perché la rappresentazione di puntatore a membro ereditarietà singola non contiene informazioni sufficienti. La compilazione con il **/vmm** può contribuire a (per ulteriori informazioni, vedere [/vmm, /vms, /vmv (rappresentazione generale)](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)). È inoltre possibile ridisporre le classi base. il compilatore rileva una perdita di informazioni nella conversione perché è un offset diverso da zero da derivata una classe base.  
  
 L'esempio seguente genera l'errore C4407:  
  
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