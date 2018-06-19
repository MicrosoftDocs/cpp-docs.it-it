---
title: Errore del compilatore C3865 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3865
dev_langs:
- C++
helpviewer_keywords:
- C3865
ms.assetid: 9bc62bb0-4fb8-4856-a5cf-c7cb4029a596
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 99a872d4cf7ed285a0798461c77adf904cfa3e71
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33275499"
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