---
title: "Classe type_index | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "typeindex/std::type_index"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "type_index (classe)"
ms.assetid: db366119-74cb-43e8-aacf-9679e561fa2f
caps.latest.revision: 14
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe type_index
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe di `type_index` esegue il wrapping di un puntatore a [Classe type\_info](../cpp/type-info-class.md) per soddisfare indicizzazione da tali oggetti.  
  
```  
class type_index {  
public:  
    type_index(const type_info& tinfo);  
    const char *name() const;  
    size_t hash_code() const;  
    bool operator==(const type_info& right) const;  
    bool operator!=(const type_info& right) const;  
    bool operator<(const type_info& right) const;  
    bool operator<=(const type_info& right) const;  
    bool operator>(const type_info& right) const;  
    bool operator>=(const type_info& right) const;  
};  
```  
  
 Il costruttore inizializza `ptr` a `&tinfo`.  
  
 Il metodo `name` restituisce il valore `ptr->name()`.  
  
 `hash_code` restituisce `ptr->hash_code().`.  
  
 Il metodo `operator==` restituisce il valore `*ptr == right.ptr`.  
  
 Il metodo `operator!=` restituisce il valore `!(*this == right)`.  
  
 Il metodo `operator<` restituisce il valore `*ptr->before(*right.ptr)`.  
  
 `operator<=` restituisce `!(right < *this).`.  
  
 `operator>` restituisce `right < *this`.  
  
 Il metodo `operator>=` restituisce il valore `!(*this < right)`.  
  
## Vedere anche  
 [Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)   
 [\<typeindex\>](../standard-library/typeindex.md)