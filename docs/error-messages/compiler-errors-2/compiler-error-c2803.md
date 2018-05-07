---
title: Errore del compilatore C2803 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2803
dev_langs:
- C++
helpviewer_keywords:
- C2803
ms.assetid: 2cdbe374-8cc4-4c4e-ba15-062a7479e937
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 51cf2a8b38a86fcd97ab693b3853fe25527a0bb3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2803"></a>Errore del compilatore C2803
'operatore' deve avere almeno un parametro formale di tipo classe  
  
 Operatore di overload non dispone di un parametro di tipo classe.  
  
 Per poter scrivere "a < b", con a e b di classe tipo A, è necessario passare almeno un parametro per riferimento (utilizzando riferimenti e non puntatori) o per valore.  
  
 Se entrambi i parametri sono puntatori sarà un semplice confronto degli indirizzi di puntatori e non verrà utilizzata la conversione definita dall'utente.  
  
 L'esempio seguente genera l'errore C2803:  
  
```  
// C2803.cpp  
// compile with: /c  
class A{};  
bool operator< (const A *left, const A *right);   // C2803  
// try the following line instead  
// bool operator< (const A& left, const A& right);  
```