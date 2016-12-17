---
title: "_variant_t::Attach | Microsoft Docs"
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
  - "_variant_t::Attach"
  - "_variant_t.Attach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Attach (metodo)"
  - "VARIANT (oggetto)"
  - "VARIANT (oggetto), attach"
ms.assetid: 2f02bd08-2306-4477-aa88-d2a5dee2b859
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _variant_t::Attach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Associa un oggetto **VARIANT** all'oggetto `_variant_t`.  
  
## Sintassi  
  
```  
  
      void Attach(  
   VARIANT& varSrc   
);  
```  
  
#### Parametri  
 *varSrc*  
 Oggetto **VARIANT** da associare a questo oggetto `_variant_t`.  
  
## Note  
 Acquisisce la proprietà dell'oggetto **VARIANT** incapsulandolo.  Questa funzione membro rilascia qualsiasi oggetto **VARIANT** incapsulato esistente, quindi copia l'oggetto **VARIANT** fornito e imposta la proprietà **VARTYPE** su `VT_EMPTY` per garantire che le risorse possano essere eliminate solo dal distruttore `_variant_t`.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_variant\_t](../cpp/variant-t-class.md)