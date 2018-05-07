---
title: Errore del compilatore C2738 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2738
dev_langs:
- C++
helpviewer_keywords:
- C2738
ms.assetid: 896b4640-1ee0-4cd8-9910-de3efa30006a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f056d8f38c36011e2b9025283e46164fe53061fd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2738"></a>Errore del compilatore C2738
'declaration': è ambiguo o non è un membro di 'type'  
  
 Una funzione è stata dichiarata in modo non corretto.  
  
 L'esempio seguente genera l'errore C2738:  
  
```  
// C2738.cpp  
struct A {  
   template <class T> operator T*();  
   // template <class T> operator T();  
};  
  
template <>  
A::operator int() {   // C2738  
  
// try the following line instead  
// A::operator int*() {  
  
// or use the commented member declaration  
  
   return 0;  
}  
```