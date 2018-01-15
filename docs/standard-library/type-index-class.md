---
title: Classe type_index | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: typeindex/std::type_index
dev_langs: C++
helpviewer_keywords: type_index class
ms.assetid: db366119-74cb-43e8-aacf-9679e561fa2f
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e27a626a7371c0358f05c49b33d0a9c1a019e72e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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



