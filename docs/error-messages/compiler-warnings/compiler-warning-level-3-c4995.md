---
title: Compilatore avviso (livello 3) C4995 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4995
dev_langs: C++
helpviewer_keywords: C4995
ms.assetid: c6b61755-4730-4947-ad4d-d1c2bc82585a
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 65fcab42a09de35db8df82ed3d4b5c16a5d60177
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-3-c4995"></a>Compilatore avviso (livello 3) C4995
'function': nome contrassegnato come obsoleto #pragma  
  
 Il compilatore ha rilevato una funzione contrassegnata con il pragma [deprecato](../../preprocessor/deprecated-c-cpp.md). È possibile che tale funzione non sia più supportata in una versione futura. È possibile disattivare questo avviso con il [avviso](../../preprocessor/warning.md) pragma (ad esempio riportato di seguito).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4995:  
  
```  
// C4995.cpp  
// compile with: /W3  
#include <stdio.h>  
  
// #pragma warning(disable : 4995)  
void func1(void)  
{  
    printf("\nIn func1");  
}  
  
int main()   
{  
    func1();  
    #pragma deprecated(func1)  
    func1();   // C4995  
}  
```