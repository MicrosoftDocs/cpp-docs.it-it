---
title: "_variant_t::Detach | Microsoft Docs"
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
  - "_variant_t::Detach"
  - "_variant_t.Detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Detach (metodo)"
  - "VARIANT (oggetto)"
  - "VARIANT (oggetto), detatch"
ms.assetid: c348ac08-62cf-4657-a16f-974a79c12158
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _variant_t::Detach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Rimuove l'oggetto **VARIANT** incapsulato da questo oggetto `_variant_t`.  
  
## Sintassi  
  
```  
  
VARIANT Detach( );  
  
```  
  
## Valore restituito  
 L'oggetto **VARIANT** incapsulato.  
  
## Note  
 Estrae e restituisce l'oggetto **VARIANT** incapsulato, quindi rimuove l'oggetto `_variant_t` senza eliminarlo in maniera permanente.  Questa funzione membro rimuove **VARIANT** dall'incapsulamento e imposta **VARTYPE** di questo oggetto `_variant_t` in `VT_EMPTY`.  Il rilascio dell'oggetto **VARIANT** restituito chiamando la funzione [VariantClear](http://msdn.microsoft.com/it-it/28741d81-8404-4f85-95d3-5c209ec13835) è pertanto facoltativo.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_variant\_t](../cpp/variant-t-class.md)