---
title: Classe is_trivially_move_assignable | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::is_trivially_move_assignable
dev_langs: C++
helpviewer_keywords: is_trivially_move_assignable
ms.assetid: 374f7322-0706-4bc1-a1a5-4191d0315e28
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 267314b73bfdf2d408038836bc3c4eac8e3317ee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="istriviallymoveassignable-class"></a>Classe is_trivially_move_assignable
Verifica se il tipo ha un operatore di assegnazione di spostamento semplice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Ty>
struct is_trivially_move_assignable;
```  
  
#### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe che ha un operatore di assegnazione di spostamento semplice; in caso contrario, contiene false.  
  
 Un operatore di assegnazione di spostamento per una classe `Ty` è semplice se:  
  
 viene fornito in modo implicito  
  
 la classe `Ty` non ha funzioni virtuali  
  
 la classe `Ty` non ha basi virtuali  
  
 le classi di tutti i membri dati non statici del tipo di classe hanno operatori di assegnazione di spostamento semplici  
  
 le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione di spostamento semplici  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)



