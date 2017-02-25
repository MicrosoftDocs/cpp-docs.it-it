---
title: "Classe unchecked_array_iterator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "unchecked_array_iterator"
  - "stdext::unchecked_array_iterator"
dev_langs: 
  - "C++"
ms.assetid: 693b3b30-4e3a-465b-be06-409700bc50b1
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Classe unchecked_array_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe `unchecked_array_iterator` consente di eseguire il wrapping di una matrice o di un puntatore in un iteratore non verificato.  Utilizzare questa classe come wrapper \(utilizzando la funzione [make\_unchecked\_array\_iterator](../Topic/make_unchecked_array_iterator.md)\) per i puntatori o le matrici non elaborati per gestire gli avvisi relativi ai puntatori non verificati anziché disattivarli globalmente.  Se possibile, preferire la versione verificata della classe, [checked\_array\_iterator](../standard-library/checked-array-iterator-class.md).  
  
> [!NOTE]
>  Questa classe è un'estensione Microsoft della libreria C\+\+ standard.  Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C\+\+ che non supportano questa estensione Microsoft.  
  
## Sintassi  
  
```  
template <class Iterator>  
    class unchecked_array_iterator;  
```  
  
## Note  
 Questa classe è definita nello spazio dei nomi [stdext](../standard-library/stdext-namespace.md).  
  
 Si tratta della versione non verificata della [classe checked\_array\_iterator](../standard-library/checked-array-iterator-class.md) e supporta gli stessi overload e membri.  Per ulteriori informazioni sulla funzionalità relativa agli iteratori verificati, vedere [Iteratori verificati](../standard-library/checked-iterators.md).  
  
## Requisiti  
 **Intestazione:** \<iterator\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<iterator\>](../standard-library/iterator.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)