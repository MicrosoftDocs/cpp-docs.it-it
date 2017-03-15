---
title: "operator IMAGEREL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "operator IMAGEREL"
  - "IMAGEREL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator IMAGEREL"
  - "IMAGEREL operator"
ms.assetid: 5b5ea425-36f0-467c-9262-62c484b7fdb4
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# operator IMAGEREL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce l'offset del relativo di immagine `expression`.  
  
## Sintassi  
  
```  
IMAGEREL expression  
```  
  
## Note  
 Il valore risultante viene spesso definito come un gli indirizzi RVA o indirizzo virtuale relativo.  
  
 IMAGEREL è disponibile solo con l'emissione dell'oggetto COFF.  
  
## Vedere anche  
 [Operators Reference](../../assembler/masm/operators-reference.md)