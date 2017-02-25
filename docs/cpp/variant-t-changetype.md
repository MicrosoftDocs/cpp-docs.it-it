---
title: "_variant_t::ChangeType | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_variant_t::ChangeType"
  - "_variant_t.ChangeType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Metodo ChangeType"
  - "VARIANT (oggetto)"
  - "VARIANT (oggetto), ChangeType"
ms.assetid: 829d2eeb-3338-4a88-9dce-0ca145f47aac
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# _variant_t::ChangeType
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Modifica il tipo dell'oggetto `_variant_t` nel **VARTYPE** indicato.  
  
## Sintassi  
  
```  
  
      void ChangeType(  
   VARTYPE vartype,  
   const _variant_t* pSrc = NULL   
);  
```  
  
#### Parametri  
 `vartype`  
 Il **VARTYPE** per questo oggetto `_variant_t`.  
  
 `pSrc`  
 Puntatore all'oggetto `_variant_t` da convertire.  Se questo valore è **NULL**, la conversione viene eseguita sul posto.  
  
## Note  
 Questa funzione membro converte un oggetto `_variant_t` nel **VARTYPE** indicato.  Se `pSrc` è **NULL**, la conversione viene eseguita sul posto; in caso contrario questo oggetto `_variant_t` viene copiato da `pSrc`, quindi convertito.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_variant\_t](../cpp/variant-t-class.md)