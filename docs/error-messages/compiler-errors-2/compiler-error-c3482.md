---
title: Errore del compilatore C3482 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3482
dev_langs:
- C++
helpviewer_keywords:
- C3482
ms.assetid: bf99558e-bef4-421c-bb16-dcd9c54c1011
caps.latest.revision: 7
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
ms.openlocfilehash: ca80df6224311db87c4c5f1425d825cbada2116c
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3482"></a>Errore del compilatore C3482
è possibile utilizzare 'this' come acquisizione di espressioni lambda solo all'interno di una funzione membro non statica  
  
 Non è possibile passare `this` all'elenco di acquisizione di un'espressione lambda dichiarata in un metodo statico o in una funzione globale.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Convertire la funzione contenitore in un metodo non statico oppure  
  
-   Rimuovere il puntatore `this` dall'elenco di acquisizione dell'espressione lambda.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3482:  
  
```  
// C3482.cpp  
// compile with: /c  
  
class C  
{  
public:  
   static void staticMethod()  
   {  
      [this] {}(); // C3482  
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
