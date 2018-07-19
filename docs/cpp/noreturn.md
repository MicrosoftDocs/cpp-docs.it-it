---
title: noreturn | Microsoft Docs
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
ms.openlocfilehash: 2323af14472741901c4e4b7d8fe27e56e1d4d4f0
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943886"
---
# <a name="noreturn"></a>noreturn
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Ciò **declspec** attributo indica al compilatore che non restituisce una funzione. Di conseguenza, il compilatore sa che il codice che segue una chiamata a un **__declspec(noreturn)** funzione non è raggiungibile.  
  
 Se il compilatore rileva una funzione con un percorso di controllo che non restituisce un valore, viene generato un avviso (C4715) o un messaggio di errore (C2202). Se il percorso del controllo non è raggiungibile a causa di una funzione che non restituisce alcun risultato, è possibile usare **__declspec(noreturn)** per evitare questo avviso o errore.  
  
> [!NOTE]
>  Aggiunta **__declspec(noreturn)** a una funzione che deve restituire può causare un comportamento indefinito.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente, il **else** clausola non contiene un'istruzione return.  La dichiarazione `fatal` come **__declspec(noreturn)** evita un errore o un messaggio di avviso.  
  
```cpp 
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