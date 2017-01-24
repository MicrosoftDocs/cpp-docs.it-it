---
title: "Costruttore HStringReference::HStringReference | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HStringReference::HStringReference"
dev_langs: 
  - "C++"
ms.assetid: 29f5fe11-3928-4f60-9861-f0894247bfcb
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore HStringReference::HStringReference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza una nuova istanza della classe HStringReference.  
  
## Sintassi  
  
```cpp  
  
    template<unsigned int sizeDest>  
    HStringReference(wchar_t const (&str)[ sizeDest]) throw();  
  
    template<unsigned int sizeDest>  
    HStringReference(wchar_t const (&str)[ sizeDest],   
unsigned int len)  
       throw();  
  
    HStringReference(HStringReference&& other) throw();  
  
```  
  
#### Parametri  
 `sizeDest`  
 Un parametro di modello che specifica la dimensione del buffer di destinazione di HStringReference.  
  
 `str`  
 Un riferimento a una stringa a caratteri "wide".  
  
 `len`  
 La lunghezza massima del buffer `str` del parametro da utilizzare in questa operazione.  Se il parametro `len` non viene specificato, l'intero parametro `str` viene utilizzato.  Se `len` è maggiore di `sizeDest`, `len` viene impostato a `sizeDest`\-1.  
  
 `other`  
 Un altro oggetto HStringReference.  
  
## Note  
 Il primo costruttore inizializza un nuovo oggetto HStringReference con la stessa dimensione del parametro `str`.  
  
 Il secondo costruttore inizializza un nuovo oggetto HStringReference con dimensione specificata dal parametro `len`.  
  
 Il terzo costruttore inizializza un nuovo oggetto HStringReference con il valore del parametro `other`quindi elimina il parametro `other`.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)