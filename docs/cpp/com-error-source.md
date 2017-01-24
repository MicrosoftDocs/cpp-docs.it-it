---
title: "_com_error::Source | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_error.Source"
  - "_com_error::Source"
  - "source"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Source (metodo)"
ms.assetid: 55353741-fabc-4b0c-9787-b5a69bb189f2
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::Source
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Chiama la funzione **IErrorInfo::GetSource**.  
  
## Sintassi  
  
```  
  
_bstr_t Source() const;  
  
```  
  
## Valore restituito  
 Restituisce il risultato di **IErrorInfo::GetSource** per l'oggetto **IErrorInfo** registrato nell'oggetto `_com_error`.  La stringa BSTR risultante viene incapsulata in un oggetto `_bstr_t`.  Se non è registrato alcun oggetto **IErrorInfo**, restituisce un oggetto `_bstr_t` vuoto.  
  
## Note  
 Eventuali errori durante la chiamata del metodo **IErrorInfo::GetSource** vengono ignorati.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_error](../cpp/com-error-class.md)