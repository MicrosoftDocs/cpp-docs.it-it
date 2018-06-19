---
title: Errore del compilatore C2574 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2574
dev_langs:
- C++
helpviewer_keywords:
- C2574
ms.assetid: 3e1c5c18-ee8b-4dbb-bfc0-d3b8991af71b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2832800f85e390c65d225671db9691b4bc13a6f3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33228562"
---
# <a name="compiler-error-c2574"></a>Errore del compilatore C2574
'distruttore': non può essere dichiarato static  
  
 Né i distruttori né i costruttori possono essere dichiarati `static`.  
  
 L'esempio seguente genera l'errore C2574:  
  
```  
// C2574.cpp  
// compile with: /c  
class A {  
   virtual static ~A();   // C2574  
   //  try the following line instead  
   // virtual ~A();  
};  
```