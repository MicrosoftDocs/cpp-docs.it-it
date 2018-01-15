---
title: Classe is_move_assignable | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::is_move_assignable
dev_langs: C++
helpviewer_keywords: is_move_assignable
ms.assetid: f33137f2-0639-4912-8745-bc0f9fd18d28
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9fba36cfb8b23a804a6851810294b54bf65c5055
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ismoveassignable-class"></a>Classe is_move_assignable
Verifica se il tipo può essere assegnato mediante spostamento.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>
struct is_move_assignable;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un tipo può essere assegnato mediante spostamento se un riferimento rvalue a tale tipo può essere assegnato a un riferimento al tipo stesso. Il predicato del tipo è equivalente a `is_assignable<T&, T&&>`. I tipi assegnabili tramite spostamento includono tipi scalari referenziabili e tipi di classe con operatori di assegnazione mediante spostamento generati dal compilatore o definiti dall'utente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)



