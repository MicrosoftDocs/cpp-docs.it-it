---
title: Errore del compilatore C2498 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2498
dev_langs: C++
helpviewer_keywords: C2498
ms.assetid: 0839f12c-aaa4-4a02-bb33-7f072715dd14
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9adf1ef6c7ab5b178a054134115162db75771658
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2498"></a>Errore del compilatore C2498
'function': 'novtable' può essere applicato solo a definizioni o dichiarazioni di classe  
  
 Questo errore può essere causato dall'utilizzo `__declspec(novtable)` con una funzione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2498:  
  
```  
// C2498.cpp  
// compile with: /c  
void __declspec(novtable) f() {}   // C2498  
class __declspec(novtable) A {};   // OK  
```