---
title: Errore del compilatore C3834 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3834
dev_langs:
- C++
helpviewer_keywords:
- C3834
ms.assetid: 059e0dc4-300b-4e74-b6c2-41a57831fe2a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1259ca2126211d6e91ed230a81959810b6427180
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33267714"
---
# <a name="compiler-error-c3834"></a>Errore del compilatore C3834
cast non valido esplicita di un puntatore di blocco. In alternativa, usare una variabile locale bloccata  
  
 Non sono consentiti cast espliciti a un puntatore bloccato.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3834.  
  
```  
// C3834.cpp  
// compile with: /clr  
int main() {  
   int x = 33;  
  
   pin_ptr<int> p = safe_cast<pin_ptr<int> >(&x);   // C3834  
   pin_ptr<int> p2 = &x;   // OK  
}  
```  
