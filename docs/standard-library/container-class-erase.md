---
title: Container Class::erase | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- erase method
ms.assetid: abc091c5-5a80-4bd8-93a8-a2d9bde2efec
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: aeb81554bdc50db44e9e8d4ee66369149eceb875
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="container-classerase"></a>Container Class::erase
> [!NOTE]
>  Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionante dei contenitori usati nella libreria standard di C++. Per altre informazioni, vedere [C++ Standard Library Containers](../standard-library/stl-containers.md) (Contenitori della libreria standard di C++).  
  
 Cancella un elemento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
 
    iterator erase(
    iterator _Where);

iterator erase(
    iterator first,  
    iterator last);
```  
  
## <a name="remarks"></a>Note  
 La prima funzione membro rimuove l'elemento della sequenza controllata a cui puntata *WHERE*. La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`). Entrambe restituiscono un iteratore che definisce il primo elemento rimanente oltre tutti gli elementi rimossi, [end](../standard-library/container-class-end.md) se tale elemento non esiste.  
  
 Le funzioni membro generano un'eccezione solo se un'operazione di copia genera un'eccezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Sample Container Class](../standard-library/sample-container-class.md) (Classe contenitore di esempio)

