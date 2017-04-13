---
title: Errore del compilatore C2388 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2388
dev_langs:
- C++
helpviewer_keywords:
- C2388
ms.assetid: 764ad2d7-cb04-425f-ba30-70989488c4a4
caps.latest.revision: 12
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
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: d82c5cddcd5aaa6e87cf2757377099a3d90bc46f
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2388"></a>Errore del compilatore C2388
'symbol': Impossibile dichiarare un simbolo con entrambi __declspec(appdomain) e \__declspec(process)  
  
 Non è possibile usare i modificatori `appdomain` e `process``__declspec` sullo stesso simbolo. L'archiviazione per una variabile è disponibile per processo o per dominio applicazione.  
  
 Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md) e [processo](../../cpp/process.md).  
  
 L'esempio seguente genera l'errore C2388:  
  
```  
// C2388.cpp  
// compile with: /clr /c  
__declspec(process) __declspec(appdomain) int i;   // C2388  
__declspec(appdomain) int i;   // OK  
```
