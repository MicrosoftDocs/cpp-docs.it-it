---
title: Errore del compilatore C3011 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3011
dev_langs: C++
helpviewer_keywords: C3011
ms.assetid: 24c3a917-ebff-4deb-9155-23adf6468531
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f6405d987a617ed2bcf9dde2276b1190d831a7c8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3011"></a>Errore del compilatore C3011
assembly inline non consentito direttamente in un'area parallela  
  
 Un'area parallela `omp` non può contenere istruzioni di assembly inline.  
  
 L'esempio seguente genera l'errore C3011:  
  
```  
// C3011.cpp  
// compile with: /openmp  
// processor: /x86  
int main() {  
   int   n = 0;  
  
   #pragma omp parallel  
   {  
      _asm mov eax, n   // Delete this line to resolve this error.  
   }   // C3011  
}  
```