---
title: Classe type_index | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- typeindex/std::type_index
dev_langs:
- C++
helpviewer_keywords:
- type_index class
ms.assetid: db366119-74cb-43e8-aacf-9679e561fa2f
caps.latest.revision: 14
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
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: ca921a28653cf83cd76f4d8e826af277f1f574e1
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="typeindex-class"></a>Classe type_index
La classe `type_index` esegue il wrapping di un puntatore a una classe [type_info](../cpp/type-info-class.md) per facilitare l'indicizzazione in base a tali oggetti.  
  
classe type_index { public: type_index(const type_info& tinfo); const char *name() const; size_t hash_code() const; bool operator==(const type_info& right) const; bool operator!=(const type_info& right) const; bool operator<(const type_info& right) const; bool operator\<=(const type_info& right) const; bool operator>(const type_info& right) const; bool operator>=(const type_info& right) const; };  
  
 Il costruttore inizializza un oggetto `ptr` con `&tinfo`.  
  
 `name` restituisce `ptr->name()`.  
  
 `hash_code` restituisce `ptr->hash_code().`  
  
 `operator==` restituisce `*ptr == right.ptr`.  
  
 `operator!=` restituisce `!(*this == right)`.  
  
 `operator<` restituisce `*ptr->before(*right.ptr)`.  
  
 `operator<=` restituisce `!(right < *this).`  
  
 `operator>` restituisce `right < *this`.  
  
 `operator>=` restituisce `!(*this < right)`.  
  
## <a name="see-also"></a>Vedere anche  
 [Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)   
 [\<typeindex>](../standard-library/typeindex.md)




