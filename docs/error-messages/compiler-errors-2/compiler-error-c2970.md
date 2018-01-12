---
title: Errore del compilatore C2970 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2970
dev_langs: C++
helpviewer_keywords: C2970
ms.assetid: 21d90348-20d3-438c-b278-efdbfb93a7d2
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e29ed219cf0e2faba8d1c12709432a9069c5aacf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2970"></a>Errore del compilatore C2970
'class': parametro di modello 'param': 'arg': un'espressione che comprende oggetti con collegamento interno non può essere utilizzata come argomento non di tipo  
  
 È possibile utilizzare il nome o l'indirizzo di una variabile statica come argomento di modello. La classe di modello prevede un valore costante che può essere valutato in fase di compilazione.  
  
 L'esempio seguente genera l'errore C2970:  
  
```  
// C2970.cpp  
// compile with: /c  
static int si;  
// could declare nonstatic to resolve all errors  
// int si;  
  
template <int i>   
class X {};  
  
template <int *pi>   
class Y {};  
  
X<si> anX;   // C2970 cannot use static variable in templates  
  
// this would also work  
const int i = 10;  
X<i> anX2;  
```