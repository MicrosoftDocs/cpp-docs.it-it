---
title: Errore del compilatore C2381 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2381
dev_langs:
- C++
helpviewer_keywords:
- C2381
ms.assetid: cc765f67-64ac-406f-93ef-ae7d548d58d7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7bd5f5edcf95144333524c41b803c24b728a621f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33225277"
---
# <a name="compiler-error-c2381"></a>Errore del compilatore C2381
'function': ridefinizione. __declspec(noreturn) diverso  
  
 Una funzione è stata dichiarata e definita, ma la definizione utilizzata la [noreturn](../../cpp/noreturn.md) `__declspec` modificatore. L'utilizzo di `noreturn` rappresenta una ridefinizione della funzione; la dichiarazione e definizione di dover concordare l'utilizzo di `noreturn`.  
  
 L'esempio seguente genera l'errore C2381:  
  
```  
// C2381.cpp  
// compile with: /c  
void f1();  
void __declspec(noreturn) f1() {}   // C2381  
void __declspec(noreturn) f2() {}   // OK  
```