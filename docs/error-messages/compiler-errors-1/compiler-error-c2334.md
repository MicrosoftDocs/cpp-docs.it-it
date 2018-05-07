---
title: Errore del compilatore C2334 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2334
dev_langs:
- C++
helpviewer_keywords:
- C2334
ms.assetid: 36142855-e00b-4bbf-80f5-a301edeff46e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ff086a9074db3fca2c85427365b4b90d99b17d24
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2334"></a>Errore del compilatore C2334
token imprevisti prima ': o {'; corpo apparente funzione verrà ignorato.  
  
 L'esempio seguente genera l'errore C2334. Questo errore si verifica dopo l'errore C2059:  
  
```  
// C2334.cpp  
// compile with: /c  
// C2059 expected  
struct s1 {  
   s1   {}   // C2334  
   s1() {}   // OK  
};  
```