---
title: "_variant_t::SetString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_variant_t::SetString"
  - "_variant_t.SetString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetString (metodo)"
ms.assetid: 816b08e5-6830-46ca-b3d7-7689308b3be3
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# _variant_t::SetString
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Assegna una stringa a questo oggetto `_variant_t`.  
  
## Sintassi  
  
```  
  
      void SetString(  
   const char* pSrc   
);  
```  
  
#### Parametri  
 `pSrc`  
 Puntatore alla stringa di caratteri.  
  
## Note  
 Converte una stringa di caratteri ANSI in una stringa `BSTR` Unicode e la assegna a questo oggetto `_variant_t`.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_variant\_t](../cpp/variant-t-class.md)