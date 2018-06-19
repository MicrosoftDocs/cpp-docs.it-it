---
title: Errore del compilatore C2785 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2785
dev_langs:
- C++
helpviewer_keywords:
- C2785
ms.assetid: d8d13360-0d00-4815-8475-b49c7f0dc0f3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dc0ca6235e0fd4bdd22330e807464e96280ae461
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33234029"
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