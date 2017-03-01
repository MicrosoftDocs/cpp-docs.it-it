---
title: Classe decay | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- decay
- std::decay
- type_traits/std::decay
dev_langs:
- C++
helpviewer_keywords:
- decay class
ms.assetid: 96baa2fd-c8e0-49af-be91-ba375ba7f9dc
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
translationtype: Machine Translation
ms.sourcegitcommit: 51fbd09793071631985720550007dddbe16f598f
ms.openlocfilehash: cb75f00c4f7dfc46122c8e69e5572de1ec23f8ed
ms.lasthandoff: 02/24/2017

---
# <a name="decay-class"></a>Classe decay
Genera il tipo come passato da valore. Rende il tipo non di riferimento, non costante, non volatile oppure crea un puntatore al tipo da una funzione o un tipo di matrice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>
struct decay;

template <class T>  
using decay_t = typename decay<T>::type;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo da modificare.  
  
## <a name="remarks"></a>Note  
 Usare il modello decay per ottenere il tipo risultante come se il tipo fosse passato dal valore come argomento. Il typedef membro della classe modello `type` contiene un tipo modificato che viene definito nelle seguenti fasi:  
  
-   Il tipo `U` viene definito come `remove_reference<T>::type`.  
  
-   Se `is_array<U>::value` è true, il tipo modificato `type` è `remove_extent<U>::type *`.  
  
-   In caso contrario, se `is_function<U>::value` è true, il tipo modificato `type` è `add_pointer<U>::type`.  
  
-   In caso contrario, il tipo modificato `type` è `remove_cv<U>::type`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




