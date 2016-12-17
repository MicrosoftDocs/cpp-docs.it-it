---
title: "Operatori relazionali _variant_t | Microsoft Docs"
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
  - "_variant_t::operator=="
  - "_variant_t.operator!="
  - "_variant_t::operator!="
  - "_variant_t.operator=="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "!= (operatore)"
  - "== (operatore), oggetti specifici di Visual C++"
  - "operatore !=, operatori relazionali"
  - "operatore !=, variant"
  - "operatore ==, variant"
  - "operator!=, operatori relazionali"
  - "operator!=, variant"
  - "operator==, variant"
  - "operatori relazionali, _variant_t (classe)"
ms.assetid: 141bacb8-41a2-44dd-b3c0-4ad1f884f4ea
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori relazionali _variant_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Confronta due oggetti `_variant_t` per verificarne l'uguaglianza o la disuguaglianza.  
  
## Sintassi  
  
```  
  
      bool operator==(  
   const VARIANT& varSrc   
) const;  
bool operator==(  
   const VARIANT* pSrc   
) const;  
bool operator!=(  
   const VARIANT& varSrc   
) const;  
bool operator!=(  
   const VARIANT* pSrc   
) const;  
```  
  
#### Parametri  
 *varSrc*  
 Oggetto **VARIANT** da confrontare con l'oggetto `_variant_t`.  
  
 `pSrc`  
 Puntatore all'oggetto **VARIANT** da confrontare con l'oggetto `_variant_t`.  
  
## Valore restituito  
 Restituisce **true** se il confronto è valido; in caso contrario, **false**.  
  
## Note  
 Confronta un oggetto `_variant_t` con un oggetto **VARIANT**, verificando l'uguaglianza o la disuguaglianza.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_variant\_t](../cpp/variant-t-class.md)