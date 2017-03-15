---
title: "Operatori di cast | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatori di cast"
  - "operatori [C++], cast"
  - "tipo (cast), operatori"
  - "tipo (conversione), operatori di cast"
ms.assetid: 43b90bbd-39ef-43e6-ae5d-e8a67a01de40
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Operatori di cast
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un cast di tipo fornisce un metodo per convertire esplicitamente il tipo di un oggetto in una situazione specifica.  
  
## Sintassi  
 *cast\-expression*:  
 *unary\-expression*  
  
 **\(**  *type\-name*  **\)**  *cast\-expression*  
  
 Il compilatore considera *cast\-expression* come tipo *type\-name* dopo aver eseguito un cast di tipo.  I cast possono essere utilizzati per convertire gli oggetti di qualsiasi tipo scalare verso o da qualsiasi altro tipo scalare.  I cast di tipo espliciti sono limitati dalle stesse regole che determinano gli effetti delle conversioni implicite discusse in [Conversioni di assegnazione](../c-language/assignment-conversions.md).  I limiti aggiuntivi sui cast possono risultare dalle dimensioni effettive o dalla rappresentazione di tipi specifici.  Vedere [Archiviazione dei tipi di base](../c-language/storage-of-basic-types.md) per informazioni sulle dimensioni effettive di tipi integrali.  Per ulteriori informazioni sui cast di tipo, vedere [Conversioni del cast di tipo](../c-language/type-cast-conversions.md).  
  
## Vedere anche  
 [Operatore cast: \(\)](../cpp/cast-operator-parens.md)