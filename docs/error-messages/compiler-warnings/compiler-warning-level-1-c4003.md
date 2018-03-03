---
title: Compilatore (livello 1) avviso C4003 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4003
dev_langs:
- C++
helpviewer_keywords:
- C4003
ms.assetid: 0ed1c285-4428-4c90-8131-86897e31f115
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c353c97dab10e8abd380e138df14aa7e1eb699bc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4003"></a>Compilatore (livello 1) avviso C4003
parametri effettivi insufficienti per la macro 'identifier'  
  
 Il numero di parametri formali nella definizione della macro supera il numero di parametri effettivi nella macro. Espansione della macro sostituisce il testo vuoto per i parametri mancanti.  
  
 L'esempio seguente genera l'errore C4003:  
  
```  
// C4003.cpp  
// compile with: /WX  
#define test(a,b) (a+b)  
  
int main()  
{  
   int a = 1;  
   int b = 2;  
   a = test(b);   // C4003  
   // try..  
   a = test(a,b);  
}  
```