---
title: "Metodo HString::Set | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HString::Set"
dev_langs: 
  - "C++"
ms.assetid: c9b3d613-95c4-48b0-999d-f5baf0804faf
caps.latest.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 2
---
# Metodo HString::Set
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Imposta il valore dell'oggetto corrente di HString alla stringa di caratteri estesi o al parametro specifica di HString.  
  
## Sintassi  
  
```  
  
HRESULT Set(  
          const wchar_t* str) throw();  
HRESULT Set(   
          const wchar_t* str,   
          unsigned int len  
           ) throw();  
HRESULT Set(  
          const HSTRING& hstr  
           ) throw();  
```  
  
#### Parametri  
 `str`  
 Una stringa di caratteri estesi.  
  
 `len`  
 La lunghezza massima del parametro `str` assegnato all'oggetto corrente di HString.  
  
 `hstr`  
 Un oggetto esistente di HString.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HString](../windows/hstring-class.md)