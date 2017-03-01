---
title: Errore del compilatore C3077 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-csharp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3077
dev_langs:
- C++
helpviewer_keywords:
- C3077
ms.assetid: d9f3c619-d1e2-4656-81a5-a35a9586a7d4
caps.latest.revision: 6
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
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: c7647e3700036e360858fd616df330e6db964835
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3077"></a>Errore del compilatore C3077
'finalizer': un finalizzatore può essere membro solo di un tipo riferimento  
  
 È possibile dichiarare un finalizzatore in un tipo nativo o di valore.  
  
 Per ulteriori informazioni, vedere [distruttori e finalizzatori in Procedura: definire e utilizzare classi e struct (C + c++ /CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3077.  
  
```  
// C3077.cpp  
// compile with: /clr /c  
value struct vs {  
   !vs(){}   // C3077  
};  
  
ref struct rs {  
protected:  
   !rs(){}   // OK  
};  
```
