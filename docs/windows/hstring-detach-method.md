---
title: "Metodo HString::Detach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HString::Detach"
dev_langs: 
  - "C++"
ms.assetid: 5006ee13-549d-40a8-8dfe-d3fb3b5e18b8
caps.latest.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 2
---
# Metodo HString::Detach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove l'associazione con l'oggetto HString specificato dal valore sottostante.  
  
## Sintassi  
  
```  
HSTRING Detach() throw()  
```  
  
## Valore restituito  
 Il valore sottostante di HString prima che l'operazione di rimozione venga avviata.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HString](../windows/hstring-class.md)