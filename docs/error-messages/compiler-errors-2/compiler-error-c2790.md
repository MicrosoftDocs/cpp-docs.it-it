---
title: Errore del compilatore C2790 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2790
dev_langs: C++
helpviewer_keywords: C2790
ms.assetid: 38d4fce1-ba00-413d-8bc1-e8aa43d7bc1f
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 11ea7285d20808f16f2588d50caebe99429c8da0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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