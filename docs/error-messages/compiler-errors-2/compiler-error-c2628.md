---
title: Errore del compilatore C2628 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2628
dev_langs:
- C++
helpviewer_keywords:
- C2628
ms.assetid: 19a25e77-d5be-4107-88d5-0745b6281f98
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b3f9813f103f59e61093ab82366e50a7ef6dae46
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33230240"
---
# <a name="compiler-error-c2628"></a>Errore del compilatore C2628
'type1' seguito da 'type2' non è valido (è stato omesso un ';'?)  
  
 Potrebbe non essere presente un punto e virgola.  
  
 L'esempio seguente genera l'errore C2628:  
  
```  
// C2628.cpp  
class CMyClass {}  
int main(){}   // C2628 error  
```  
  
 Possibile soluzione:  
  
```  
// C2628b.cpp  
class CMyClass {};  
int main(){}  
```