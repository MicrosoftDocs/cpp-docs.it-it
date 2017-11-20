---
title: Errore del compilatore C2036 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2036
dev_langs: C++
helpviewer_keywords: C2036
ms.assetid: 895821a9-65d1-44b5-bde1-dae827f3e486
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 8ffb8f2b8ad0df1741687c1081fc499d3a9fde31
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2036"></a>Errore del compilatore C2036
'identifier': dimensione sconosciuta  
  
 Un'operazione su `identifier` richiede le dimensioni dell'oggetto dati, che non può essere determinato.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2036.  
  
```  
// C2036.c  
// a C program  
struct A* pA;  
struct B { int i; } *pB;  
int main() {  
   pA++;   // C2036, size of A not known  
   ((char*)pA)++;   // OK  
  
   pB++;   // OK  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2036.  
  
```  
// C2036_2.cpp  
// a C++ program  
struct A* pA;  
int main() {  
   pA++;   // C2036, size of A not known  
   ((char*&)pA)++;   // OK, if sizeof(A) == sizeof(char)  
}  
```