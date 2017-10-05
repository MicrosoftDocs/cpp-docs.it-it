---
title: operator== (&lt;sample container&gt;) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std.==
- std::==
- operator==
- std.operator==
- std::operator==
- ==
dev_langs:
- C++
helpviewer_keywords:
- operator ==, containers
- operator==, containers
- == operator, with specific standard C++ objects
ms.assetid: d3d8754e-5157-4b8b-bf9c-da41856f5eed
caps.latest.revision: 9
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
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 01e9b1f6eb5d20bb36726924e63ace29d40751e5
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="operator-ltsample-containergt"></a>operator== (&lt;sample container&gt;)
> [!NOTE]
>  Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [C++ Standard Library Containers](../standard-library/stl-containers.md) (Contenitori della libreria standard C++).  
  
 Esegue l'overload di `operator==` per confrontare due oggetti della classe modello [Container](../standard-library/sample-container-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Ty>  
bool operator==(
    const Container <Ty>& left,  
    const Container <Ty>& right);
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce `left.` [dimensioni](../standard-library/container-class-size.md) ` == right.size && equal(left.` [iniziare](../standard-library/container-class-begin.md)`, left.`[fine](../standard-library/container-class-end.md)`, right.begin)`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<sample container>](../standard-library/sample-container.md)


