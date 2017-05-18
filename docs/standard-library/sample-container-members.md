---
title: Membri sample container | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- container classes
ms.assetid: dc5a1998-a31b-4adf-b888-8abe5b87a4e0
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 2d8485f7fa62f2aaf3d3e6be920620aaf14fd7ca
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="sample-container-members"></a>Membri contenitore di esempio
> [!NOTE]
>  Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [C++ Standard Library Containers](../standard-library/stl-containers.md) (Contenitori della libreria standard C++).  
  
## <a name="reference"></a>Riferimento  
  
## <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[const_iterator](../standard-library/container-class-const-iterator.md)|Descrive un oggetto che può essere usato come iteratore costante per la sequenza controllata.|  
|[const_reference](../standard-library/container-class-const-reference.md)|Descrive un oggetto che può essere usato come riferimento costante a un elemento della sequenza controllata.|  
|[const_reverse_iterator](../standard-library/container-class-const-reverse-iterator.md)|Descrive un oggetto che può essere usato come iteratore inverso costante per la sequenza controllata.|  
|[difference_type](../standard-library/container-class-difference-type.md)|Descrive un oggetto che può rappresentare la differenza tra gli indirizzi di due qualsiasi elementi nella sequenza controllata.|  
|[iterator](../standard-library/container-class-iterator.md)|Descrive un oggetto che può essere usato come iteratore per la sequenza controllata.|  
|[reference](../standard-library/container-class-reference.md)|Descrive un oggetto che può essere usato come riferimento a un elemento della sequenza controllata.|  
|[reverse_iterator](../standard-library/container-class-reverse-iterator.md)|Descrive un oggetto che può essere usato come iteratore inverso per la sequenza controllata.|  
|[size_type](../standard-library/container-class-size-type.md)|Descrive un oggetto che può rappresentare la lunghezza di una sequenza controllata.|  
|[value_type](../standard-library/container-class-value-type.md)|Funge da sinonimo del parametro di modello **Ty**.|  
  
## <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[begin](../standard-library/container-class-begin.md)|Restituisce un iteratore che punta al primo elemento della sequenza (o appena oltre la fine di una sequenza vuota).|  
|[clear](../standard-library/container-class-clear.md)|Chiama [erase](../standard-library/container-class-erase.md)( [begin](../standard-library/container-class-begin.md), [end](../standard-library/container-class-end.md)).|  
|[empty](../standard-library/container-class-empty.md)|Restituisce **true** per una sequenza controllata vuota.|  
|[end](../standard-library/container-class-end.md)|Restituisce un iteratore che punta poco oltre la fine della sequenza.|  
|[erase](../standard-library/container-class-erase.md)|Cancella un elemento.|  
|[max_size](../standard-library/container-class-max-size.md)|Restituisce la lunghezza della sequenza più lunga che l'oggetto può controllare, in un tempo costante indipendentemente dalla lunghezza della sequenza controllata.|  
|[rbegin](../standard-library/container-class-rbegin.md)|Restituisce un iteratore inverso che punta oltre la fine della sequenza controllata, designando l'inizio della sequenza inversa.|  
|[rend](../standard-library/container-class-rend.md)|La funzione membro restituisce un iteratore inverso che punta al primo elemento della sequenza (o appena oltre la fine di una sequenza vuota), designando la fine della sequenza inversa.|  
|[size](../standard-library/container-class-size.md)|Restituisce la lunghezza della sequenza controllata, in un tempo costante indipendentemente dalla lunghezza della sequenza controllata.|  
|[swap](../standard-library/container-class-swap.md)

