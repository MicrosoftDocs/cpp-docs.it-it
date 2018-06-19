---
title: Errore del compilatore C2555 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2555
dev_langs:
- C++
helpviewer_keywords:
- C2555
ms.assetid: 5e49ebb8-7c90-457a-aa12-7ca7ab6574b2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6d2d1a710177e2c8c72b0afeff662dddf1c22ef5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33230585"
---
# <a name="compiler-error-c2555"></a>Errore del compilatore C2555
'class1::function1': funzione virtual in override restituito di tipo covariante e differisce non da 'classe2:: funzione2'  
  
 Una funzione virtuale e una funzione di override derivata hanno elenchi di parametri sono identici, ma restituire tipi diversi. Una funzione di override in una classe derivata non può essere diversa da una funzione virtuale in una classe base solo per il tipo restituito.  
  
 Per correggere l'errore, il cast del valore restituito dopo la chiamata di funzione virtuale.  
  
 Questo errore potrebbe essere visualizzato anche se esegue la compilazione con /clr.   Ad esempio, Visual C++ equivale alla dichiarazione c# seguente:  
  
```  
Guid[] CheckSources(Guid sourceID, Guid[] carouselIDs);  
```  
  
 is  
  
```  
Guid CheckSources(Guid sourceID, Guid carouselIDs[]) [];  
```  
  
 Per ulteriori informazioni sull'errore C2555, vedere l'argomento della Knowledge Base Q240862.  
  
 L'esempio seguente genera l'errore C2555:  
  
```  
// C2555.cpp  
// compile with: /c  
struct X {  
   virtual void func();  
};  
struct Y : X {  
   char func();  // C2555  
   void func2();   // OK  
};  
```