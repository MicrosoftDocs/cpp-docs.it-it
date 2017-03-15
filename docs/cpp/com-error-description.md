---
title: "_com_error::Description | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_error.Description"
  - "_com_error::Description"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Description (metodo)"
ms.assetid: 88191e24-4ee8-44a6-8c4c-3758e22e0548
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# _com_error::Description
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Chiama la funzione **IErrorInfo::GetDescription**.  
  
## Sintassi  
  
```  
  
_bstr_t Description( ) const;  
  
```  
  
## Valore restituito  
 Restituisce il risultato di **IErrorInfo::GetDescription** per l'oggetto **IErrorInfo** registrato nell'oggetto `_com_error`.  La stringa `BSTR` risultante viene incapsulata in un oggetto `_bstr_t`.  Se non è registrato alcun oggetto **IErrorInfo**, restituisce un oggetto `_bstr_t` vuoto.  
  
## Note  
 Chiama la funzione **IErrorInfo::GetDescription** e recupera **IErrorInfo** registrato nell'oggetto `_com_error`.  Qualsiasi errore durante la chiamata al metodo **IErrorInfo::GetDescription** viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_error](../cpp/com-error-class.md)