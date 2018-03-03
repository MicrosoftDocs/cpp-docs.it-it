---
title: Errore del compilatore C2790 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2790
dev_langs:
- C++
helpviewer_keywords:
- C2790
ms.assetid: 38d4fce1-ba00-413d-8bc1-e8aa43d7bc1f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b10da64605743612a4d5522b5c19d1f2029ced8c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2790"></a>Errore del compilatore C2790
'super': questa parola chiave può essere utilizzata solo all'interno del corpo della funzione membro di classe  
  
 Questo messaggio di errore viene visualizzato se l'utente tenta di utilizzare la parola chiave [super](../../cpp/super.md) all'esterno del contesto di una funzione membro.  
  
 L'esempio seguente genera l'errore C2790:  
  
```  
// C2790.cpp  
void f() {  
   __super::g();   // C2790  
}  
```