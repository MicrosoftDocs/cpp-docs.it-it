---
title: Errore del compilatore C3551 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3551
dev_langs:
- C++
helpviewer_keywords:
- C3551
ms.assetid: c8ee23da-6568-40db-93a6-3ddb7ac47712
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: be8a55c6033150c5f1c4220885b01b4af8b8a6bd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3551"></a>Errore del compilatore C3551
"è previsto un tipo restituito specificato in ritardo"  
  
 Se si usa la parola chiave `auto` come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Nell'esempio seguente il tipo restituito specificato in ritardo della funzione `myFunction` è un puntatore a una matrice di quattro elementi di tipo `int`.  
  
```  
auto myFunction()->int(*)[4];   
```  
  
## <a name="see-also"></a>Vedere anche  
 [auto](../../cpp/auto-cpp.md)