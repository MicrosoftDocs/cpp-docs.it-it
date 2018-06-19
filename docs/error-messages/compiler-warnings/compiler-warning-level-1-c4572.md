---
title: Compilatore avviso (livello 1) C4572 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4572
dev_langs:
- C++
helpviewer_keywords:
- C4572
ms.assetid: 482dee5a-29bd-4fc3-b769-9dfd4cd2a964
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ec0c0068a3da1033162f90330876d74d62878178
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33280468"
---
# <a name="compiler-warning-level-1-c4572"></a>Avviso del compilatore (livello 1) C4572
L'attributo [ParamArray] è deprecato in /clr, utilizzare '...' invece  
  
 È stato usato un stile obsoleto per specificare un elenco di argomenti variabile. Quando si compila per Common Language Runtime, utilizzare la sintassi di puntini di sospensione anziché <xref:System.ParamArrayAttribute>. Per ulteriori informazioni, vedere [elenchi di argomenti variabili (...) (C + C++ /CLI) ](../../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4572.  
  
```  
// C4572.cpp  
// compile with: /clr /W1  
void Func([System::ParamArray] array<int> ^);   // C4572  
void Func2(... array<int> ^){}   // OK  
  
int main() {  
   Func2(1, 2, 3);  
}  
```