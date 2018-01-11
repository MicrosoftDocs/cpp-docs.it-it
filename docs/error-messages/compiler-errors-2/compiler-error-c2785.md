---
title: Errore del compilatore C2785 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2785
dev_langs: C++
helpviewer_keywords: C2785
ms.assetid: d8d13360-0d00-4815-8475-b49c7f0dc0f3
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9587151175c593e4b1d9d30f45a19ce807c24990
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2785"></a>Errore del compilatore C2785
'dichiarazione1' e 'dichiarazione2' hanno tipi restituiti diversi  
  
 Il tipo restituito di una specializzazione di modello di funzione è diverso dal tipo restituito del modello di funzione primaria.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Controllare tutte le specializzazioni del modello di funzione per la coerenza.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2785:  
  
```  
// C2785.cpp  
// compile with: /c  
template<class T> void f(T);  
  
template<> int f(int); // C2785  
template<> void f(int); // OK  
```