---
title: Errore del compilatore C3865 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3865
dev_langs:
- C++
helpviewer_keywords:
- C3865
ms.assetid: 9bc62bb0-4fb8-4856-a5cf-c7cb4029a596
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cec5eabe6f4fa62648e9d3787d8ef2d2133f7736
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3865"></a>Errore del compilatore C3865
'convenzione_chiamata': utilizzabile solo con funzioni membro native  
  
 Una convenzione di chiamata è stata usata in una funzione che era una funzione globale o in una funzione membro gestito. La convenzione di chiamata è utilizzabile solo in una funzione membro (non gestito) nativo.  
  
 Per ulteriori informazioni, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md).  
  
 L'esempio seguente genera l'errore C3865:  
  
```  
// C3865.cpp  
// compile with: /clr  
// processor: x86  
void __thiscall Func(){}   // C3865  
  
// OK  
struct MyType {  
   void __thiscall Func(){}  
};  
```