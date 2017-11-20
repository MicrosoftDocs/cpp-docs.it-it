---
title: Errore del compilatore C3846 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3846
dev_langs: C++
helpviewer_keywords: C3846
ms.assetid: c470f8a5-106b-4efb-b8dc-e1319e04130f
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 58ffd3f240505d173014f1f9b358b4957a41eaf5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3846"></a>Errore del compilatore C3846
'symbol': Impossibile importare il simbolo da 'assembly2': come 'simbolo' è già stato importato da un altro assembly 'assembly1'  
  
 Un simbolo non può essere importato da un assembly di riferimento, perché è stata precedentemente importata da un assembly di riferimento.  
  
## <a name="example"></a>Esempio
L'esempio seguente genera l'errore C3846:  
  
```  
// C3846a.cpp  
// compile with: /LD /clr  
public ref struct G  
{  
};  
```  
  
 E quindi effettuare la compilazione:  
  
```  
// C3846b.cpp  
// compile with: /clr  
#using "c3846a.dll"  
#using "c3846a.obj"   // C3846  
  
int main()  
{  
}  
```  
