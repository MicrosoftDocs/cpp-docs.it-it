---
title: "_com_error::HelpFile | Microsoft Docs"
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
  - "HelpFile"
  - "_com_error::HelpFile"
  - "_com_error.HelpFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HelpFile (metodo)"
ms.assetid: d2d3a0a1-6b62-4d52-a818-3cfae545a4af
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::HelpFile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Chiama la funzione **IErrorInfo::GetHelpFile**.  
  
## Sintassi  
  
```  
  
_bstr_t HelpFile() const;  
  
```  
  
## Valore restituito  
 Restituisce il risultato di **IErrorInfo::GetHelpFile** per l'oggetto **IErrorInfo** registrato nell'oggetto `_com_error`.  La stringa BSTR risultante viene incapsulata in un oggetto `_bstr_t`.  Se non è registrato alcun oggetto **IErrorInfo**, restituisce un oggetto `_bstr_t` vuoto.  
  
## Note  
 Qualsiasi errore durante la chiamata al metodo **IErrorInfo::GetHelpFile** viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_error](../cpp/com-error-class.md)