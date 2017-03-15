---
title: "Classe collate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::collate"
  - "locale/std::collate"
  - "std.collate"
  - "collate"
  - "Collate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "collate (classe)"
ms.assetid: 92168798-9628-4a2e-be6e-fa62dcd4d6a6
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe collate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare l'ordinamento e il raggruppamento dei caratteri all'interno di una stringa, i confronti tra tali caratteri e l'hashing delle stringhe.  
  
## Sintassi  
  
```  
template <class CharType >  
   class collate : public locale::facet;  
```  
  
#### Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri.  
  
## Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero.  Il primo tentativo di accedere al relativo valore archiviato consente di archiviare un valore positivo univoco in **id.** In alcuni linguaggi i caratteri vengono raggruppati e considerati come singoli caratteri, mentre in altri linguaggi i singoli caratteri vengono considerati come se fossero due caratteri.  I servizi di ordinamento forniti dalla classe di ordinamento forniscono una modalità di ordinamento per questi casi.  
  
### Costruttori  
  
|||  
|-|-|  
|[collate](../Topic/collate::collate.md)|Costruttore per gli oggetti della classe `collate` utilizzato come facet delle impostazioni locali per gestire le convenzioni di ordinamento delle stringhe.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/collate::char_type.md)|Tipo che descrive un carattere di tipo `CharType`.|  
|[string\_type](../Topic/collate::string_type.md)|Tipo che descrive una stringa di tipo `basic_string` contenente caratteri di tipo `CharType`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[compare](../Topic/collate::compare.md)|Confronta due sequenze di caratteri in base alle regole specifiche del relativo facet per verificarne l'uguaglianza o la disuguaglianza.|  
|[do\_compare](../Topic/collate::do_compare.md)|Funzione virtuale chiamata per confrontare due sequenze di caratteri in base alle regole specifiche del relativo facet per verificarne l'uguaglianza o la disuguaglianza.|  
|[do\_hash](../Topic/collate::do_hash.md)|Funzione virtuale chiamata per determinare il valore hash delle sequenze in base alle regole specifiche del relativo facet.|  
|[do\_transform](../Topic/collate::do_transform.md)|Funzione virtuale chiamata per convertire una sequenza di caratteri in una stringa che può essere utilizzata nei confronti lessicografici con altre sequenze di caratteri convertite in modo analogo dalle stesse impostazioni locali.|  
|[hash](../Topic/collate::hash.md)|Determina il valore hash della sequenza in base alle regole specifiche del relativo facet.|  
|[trasformazione](../Topic/collate::transform.md)|Converte una sequenza di caratteri dalle impostazioni locali in una stringa che può essere utilizzata nei confronti lessicografici con altre sequenze di caratteri convertite in modo analogo dalle stesse impostazioni locali.|  
  
## Requisiti  
 **Intestazione:** \<locale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<locale\>](../standard-library/locale.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)