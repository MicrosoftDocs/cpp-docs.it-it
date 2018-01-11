---
title: Classe is_trivially_copy_assignable | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::is_trivially_copy_assignable
dev_langs: C++
helpviewer_keywords: is_trivially_copy_assignable
ms.assetid: 7410133e-f367-493f-92a7-e34e3ec5e879
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 477b0c513817860aac40a01d921cec50293b54ef
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="istriviallycopyassignable-class"></a>Classe is_trivially_copy_assignable
Verifica se il tipo ha un operatore di assegnazione di copia semplice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Ty>
struct is_trivially_copy_assignable;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `T` è una classe che ha un operatore di assegnazione di copia semplice; in caso contrario, contiene false.  
  
 Un costruttore di assegnazione per una classe `T` è semplice se è fornito in modo implicito, la classe `T` non ha funzioni virtuali, la classe `T` non ha basi virtuali, le classi di tutti i membri di dati non statici di tipo classe hanno operatori di assegnazione semplice e le classi di tutti i membri di dati non statici di tipo matrice di classe hanno operatori di assegnazione semplice.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)



