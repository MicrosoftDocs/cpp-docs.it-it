---
title: noreturn | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- noreturn_cpp
- noreturn
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], noreturn
- noreturn __declspec keyword
ms.assetid: 9c6517e5-22d7-4051-9974-3d2200ae4d1d
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 45de52c2c3c0b60a62bf19e38854c53e841ed500
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="noreturn"></a>noreturn
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Questo attributo `__declspec` indica al compilatore che la funzione non restituisce un valore. Di conseguenza, il compilatore riconosce che il codice che segue una chiamata a un **__declspec(noreturn)** funzione non è raggiungibile.  
  
 Se il compilatore rileva una funzione con un percorso di controllo che non restituisce un valore, viene generato un avviso (C4715) o un messaggio di errore (C2202). Se il percorso del controllo non è raggiungibile a causa di una funzione che non restituisce alcun risultato, è possibile utilizzare **__declspec(noreturn)** per evitare questo avviso o errore.  
  
> [!NOTE]
>  Aggiunta di **__declspec(noreturn)** a una funzione che deve restituire può causare un comportamento indefinito.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente, il **else** clausola non contiene un'istruzione return.  Dichiarazione di `fatal` come **__declspec(noreturn)** consente di evitare un errore o un messaggio di avviso.  
  
```  
// noreturn2.cpp  
__declspec(noreturn) extern void fatal () {}  
  
int main() {  
   if(1)  
     return 1;  
   else if(0)  
     return 0;  
   else  
     fatal();  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
