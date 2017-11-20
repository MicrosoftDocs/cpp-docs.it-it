---
title: Errore del compilatore C2381 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2381
dev_langs: C++
helpviewer_keywords: C2381
ms.assetid: cc765f67-64ac-406f-93ef-ae7d548d58d7
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 0442b94b1151dbee006a0d3ee71b1076d7afe7df
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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