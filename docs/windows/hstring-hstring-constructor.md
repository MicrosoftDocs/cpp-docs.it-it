---
title: "Costruttore HString::HString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HString::HString"
dev_langs: 
  - "C++"
ms.assetid: 6da12785-ed01-4720-a004-667db60298f1
caps.latest.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 2
---
# Costruttore HString::HString
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza un'istanza nuova della classe HString.  
  
## Sintassi  
  
```cpp  
  
HString(HSTRING hstr = nullptr) throw();  
HString(HString&& other) throw();  
```  
  
#### Parametri  
 `hstr`  
 Un handle di HSTRING.  
  
 `other`  
 Un oggetto esistente di HString.  
  
## Note  
 Il primo costruttore inizializza un nuovo oggetto di HString che è vuoto.  
  
 Il secondo costruttore inizializza un nuovo oggetto di HString al valore del parametro esistente `other` quindi elimina il parametro `other`.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HString](../windows/hstring-class.md)