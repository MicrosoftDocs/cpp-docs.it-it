---
title: Compilatore avviso (livello 1) C4174 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4174
dev_langs:
- C++
helpviewer_keywords:
- C4174
ms.assetid: 63301e51-24bc-43c4-bb11-252f7d513e9e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 22ca4cfa9efb93d46977597215dceb6dd4c8e503
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33271853"
---
# <a name="compiler-warning-level-1-c4174"></a>Avviso del compilatore (livello 1) C4174
'name': non disponibile come componente #pragma  
  
## <a name="example"></a>Esempio  
  
```  
// C4174.cpp  
// compile with: /W1  
#pragma component(info)  // C4174; unknown  
#pragma component(browser, off)  // turn off browse info  
int main()  
{  
}  
```