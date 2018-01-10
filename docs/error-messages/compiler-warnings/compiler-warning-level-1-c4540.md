---
title: Compilatore avviso (livello 1) C4540 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4540
dev_langs: C++
helpviewer_keywords: C4540
ms.assetid: 8085e748-5f4d-43c2-b06d-eaf794edbf72
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: aaaef1edaa6af093ae03fe69231a9686e3d087a7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4540"></a>Avviso del compilatore (livello 1) C4540
dynamic_cast usato per convertire in base ambigua o inaccessibile. in fase di esecuzione test avrà esito negativo ('type1' a 'type2')  
  
 È stato utilizzato `dynamic_cast` per convertire da un tipo a altro. Il compilatore determinato che il cast avrà sempre esito negativo (restituire **NULL**) perché una classe di base è inaccessibile (`private`ad esempio,) o è ambigua (ad esempio, viene visualizzata più volte nella gerarchia delle classi,).  
  
 Di seguito viene riportato un esempio di questo avviso. Classe **B** è derivata dalla classe **A**. Il programma utilizza `dynamic_cast` per eseguire il cast dalla classe **B** (la classe derivata) alla classe **A**, che avrà sempre esito negativo perché classe **B** è `private` e pertanto non è accessibile. La modifica dell'accesso di **A** a **pubblica** risolverà il problema.  
  
```  
// C4540.cpp  
// compile with: /W1  
  
struct A {   
   virtual void g() {}  
};  
  
struct B : private A {  
   virtual void g() {}  
};  
  
int main() {  
   B b;  
   A * ap = dynamic_cast<A*>(&b);   // C4540  
}  
```