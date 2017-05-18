---
title: Errore del compilatore C3155 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3155
dev_langs:
- C++
helpviewer_keywords:
- C3155
ms.assetid: b04a42e1-64e7-40f8-81fe-c7945348b2cf
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 65e7a7bd56096fbeec61b651ab494d82edef9c90
ms.openlocfilehash: 651eb1a03eed55a3d383a32f027991a4a56d4371
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3155"></a>Errore del compilatore C3155
attributi non consentiti in un indicizzatore di proprietà  
  
Una proprietà indicizzata è stata dichiarata in modo non corretto. Per ulteriori informazioni, vedere [procedura: utilizzare le proprietà in C + + CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente viene generato l'errore C3155.  
  
```  
// C3155.cpp  
// compile with: /clr /c  
using namespace System;  
ref struct R {  
   property int F[[ParamArray] int] {   // C3155  
   // try the following line instead  
   // property int F[ int] {   // OK  
      int get(int i) {   
         return 0;   
      }  
   }  
};  
```
