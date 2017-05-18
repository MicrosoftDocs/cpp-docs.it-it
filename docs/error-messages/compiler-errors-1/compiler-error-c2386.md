---
title: Errore del compilatore C2386 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2386
dev_langs:
- C++
helpviewer_keywords:
- C2386
ms.assetid: aaaa1284-34a0-4da2-8547-9fcbb559dae0
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 27bd3f734fec48bc65cf4f0967f6320d845b7737
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2386"></a>Errore del compilatore C2386
'symbol': nell'ambito corrente esiste già un simbolo con questo nome  
  
 Si è provato a creare un alias dello spazio dei nomi, ma il nome scelto è già presente.  
  
 L'esempio seguente genera l'errore C2386:  
  
```  
// C2386.cpp  
namespace A {  
   int k;  
}  
  
int i;  
namespace i = A;   // C2386, i already exists  
```
