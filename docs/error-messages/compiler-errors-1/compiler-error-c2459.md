---
title: Errore del compilatore C2459 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2459
dev_langs:
- C++
helpviewer_keywords:
- C2459
ms.assetid: 81e29f4c-5b60-40fb-9557-1cdc630d77e8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6013720b55892ffd34e1faf132a69842e4bceb50
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33198508"
---
# <a name="compiler-error-c2459"></a>Errore del compilatore C2459
'identifier': è definito; non è possibile aggiungere come membro anonimo  
  
 Una classe, struttura o unione viene ridefinita nel proprio ambito da un membro di un'unione anonima.  
  
 L'esempio seguente genera l'errore C2459:  
  
```  
// C2459.cpp  
// compile with: /c  
class C {  
   union { int C; };   // C2459  
   union { int D; };  
};  
```