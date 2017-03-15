---
title: "Metodo HString::CopyTo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: a1fd2ef0-e175-4c18-927b-550e02a89e43
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo HString::CopyTo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Copia l'oggetto HString corrente in un oggetto HSTRING.  
  
## Sintassi  
  
```  
  
HRESULT CopyTo(  
   _Out_ HSTRING *str  
   ) const throw();  
```  
  
#### Parametri  
 `str`  
 HSTRING che riceve la copia.  
  
## Note  
 Questo metodo chiama la funzione [WindowsDuplicateString](http://msdn.microsoft.com/library/br224634.aspx).  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HString](../windows/hstring-class.md)