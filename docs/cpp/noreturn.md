---
title: noreturn | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- noreturn_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], noreturn
- noreturn __declspec keyword
ms.assetid: 9c6517e5-22d7-4051-9974-3d2200ae4d1d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 90fab865a02b7ad00bd25b6d74f2d19b2678875c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)