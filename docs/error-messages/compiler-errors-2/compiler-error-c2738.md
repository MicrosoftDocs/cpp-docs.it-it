---
title: Errore del compilatore C2738 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2738
dev_langs: C++
helpviewer_keywords: C2738
ms.assetid: 896b4640-1ee0-4cd8-9910-de3efa30006a
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a1a62358855f88909a7604cd31103f10b266b805
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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