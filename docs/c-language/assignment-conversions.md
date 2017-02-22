---
title: "Conversioni di assegnazione | Microsoft Docs"
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
  - "conversioni di assegnazione"
  - "conversioni, assegnazione"
ms.assetid: 4ee01013-de32-4aae-b12e-0051d0cde927
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Conversioni di assegnazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nelle operazioni di assegnazione, il tipo del valore assegnato viene convertito nel tipo della variabile che riceve l'assegnazione.  C consente le conversioni per assegnazione tra i tipi integrali e mobili, anche se le informazioni vengono perse nella conversione.  Il metodo di conversione utilizzato dipende dai tipi interessati nell'assegnazione, come descritto in [Conversioni aritmetiche consuete](../c-language/usual-arithmetic-conversions.md) e nelle sezioni seguenti:  
  
-   [Conversioni dai tipi integrali con segno](../c-language/conversions-from-signed-integral-types.md)  
  
-   [Conversioni dai tipi integrali senza segno](../c-language/conversions-from-unsigned-integral-types.md)  
  
-   [Conversioni dai tipi a virgola mobile](../c-language/conversions-from-floating-point-types.md)  
  
-   [Conversioni da e verso tipi di puntatore](../c-language/conversions-to-and-from-pointer-types.md)  
  
-   [Conversioni da altri tipi](../c-language/conversions-from-other-types.md)  
  
 I qualificatori del tipo non influiscono sulla possibilità di eseguire la conversione sebbene un l\-value **const** non possa essere utilizzato a sinistra dell'assegnazione.  
  
## Vedere anche  
 [Conversione di tipi](../c-language/type-conversions-c.md)