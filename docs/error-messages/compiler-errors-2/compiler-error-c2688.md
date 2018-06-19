---
title: Errore del compilatore C2688 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2688
dev_langs:
- C++
helpviewer_keywords:
- C2688
ms.assetid: 168c9e9d-8f65-4664-af86-db71d3e6ee46
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dd2ebb16acfbc5c7d540e877baab909a950c7f55
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33236014"
---
# <a name="compiler-error-c2688"></a>Errore del compilatore C2688
'C2::fgrv': tipo restituito da covariante con più o ereditarietà virtuale non è supportato per le funzioni varargs  
  
 Tipi restituiti di covariante non sono supportati in Visual C++, quando una funzione contiene argomenti variabili.  
  
 Per correggere l'errore, definire le funzioni in modo che non utilizzano argomenti variabili o rendere i valori restituiti gli stessi per tutte le funzioni virtuali.  
  
 L'esempio seguente genera l'errore C2688:  
  
```  
// C2688.cpp  
struct G1 {};  
struct G2 {};  
struct G3 : G1, G2 {};  
struct G4 {};  
struct G5 {};  
struct G6 : G4, G5 {};  
struct G7 : G3, G6 {};  
  
struct C1 {  
   virtual G4& fgrv(int,...);  
};  
  
struct C2 : C1 {  
   virtual G7& fgrv(int,...);   // C2688, does not return G4&  
};  
```