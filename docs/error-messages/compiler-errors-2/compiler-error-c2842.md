---
title: Errore del compilatore C2842 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2842
dev_langs:
- C++
helpviewer_keywords:
- C2842
ms.assetid: 8674f08d-9f50-46ad-9229-abc6b74fa0e5
caps.latest.revision: 13
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
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: e4b3067b3293892d25dace565538a022e49a6f6f
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2842"></a>Errore del compilatore C2842
'class': un tipo gestito o WinRT non può definire il proprio 'operator new' o 'operator delete'  
  
 È possibile definire **operatore new o **operatore delete * * per gestire l'allocazione di memoria nell'heap nativo. Tuttavia, le classi di riferimento non possono definire questi operatori perché vengono allocati esclusivamente nell'heap gestito.  

  
 Per ulteriori informazioni, vedere [operatori definiti dall'utente (C + c++ /CLI)](../../dotnet/user-defined-operators-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2842.  
  
```  
// C2842.cpp  
// compile with: /clr /c  
ref class G {  
   void* operator new( size_t nSize );   // C2842  
};  
```  

