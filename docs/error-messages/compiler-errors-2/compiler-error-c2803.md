---
title: Errore del compilatore C2803 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2803
dev_langs: C++
helpviewer_keywords: C2803
ms.assetid: 2cdbe374-8cc4-4c4e-ba15-062a7479e937
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2472c0e1182ad11f5ea95e3411649e6214b110ab
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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