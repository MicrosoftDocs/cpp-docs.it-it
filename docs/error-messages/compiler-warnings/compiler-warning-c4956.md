---
title: Avviso del compilatore C4956 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4956
dev_langs:
- C++
helpviewer_keywords:
- C4956
ms.assetid: 9154f2d1-d49f-4e07-90d2-0e9bc028011a
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 782735be55c043482679740afa9571ba7b29dfc4
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-c4956"></a>Avviso del compilatore C4956
'type': tipo non verificabile  
  
 Questo avviso viene generato quando [/CLR: safe](../../build/reference/clr-common-language-runtime-compilation.md) specificato e il codice contiene un tipo che non è verificabile.  
  
 Per ulteriori informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 Questo avviso viene generato come errore e può essere disabilitato tramite il [avviso](../../preprocessor/warning.md) pragma o [/wd](../../build/reference/compiler-option-warning-level.md) l'opzione del compilatore.  
  
 L'esempio seguente genera l'errore C4956:  
  
```  
// C4956.cpp  
// compile with: /clr:safe  
int* p;   // C4956  
```
