---
title: "Metodo HString::MakeReference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HString::MakeReference"
dev_langs: 
  - "C++"
ms.assetid: 9e1fd2b2-66ad-4a50-b647-a20ab10e522f
caps.latest.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 2
---
# Metodo HString::MakeReference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un oggetto di HStringReference da un parametro di stringa specificato.  
  
## Sintassi  
  
```  
template<unsigned int sizeDest>  
    static HStringReference MakeReference(  
              wchar_t const (&str)[ sizeDest]);  
  
    template<unsigned int sizeDest>  
    static HStringReference MakeReference(  
              wchar_t const (&str)[sizeDest],   
              unsigned int len);  
```  
  
#### Parametri  
 `sizeDest`  
 Un parametro di modello che specifica la dimensione del buffer di destinazione di HStringReference.  
  
 `str`  
 Un riferimento a una stringa a caratteri "wide".  
  
 `len`  
 La lunghezza massima del buffer `str` del parametro da utilizzare in questa operazione.  Se il parametro `len` non viene specificato, l'intero parametro `str` viene utilizzato.  
  
## Valore restituito  
 Un oggetto di HStringReference il cui valore è lo stesso del parametro specificato `str`.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HString](../windows/hstring-class.md)