---
title: "Classe CD2DSizeF | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CD2DSizeF"
  - "CD2DSizeF"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DSizeF (classe)"
ms.assetid: f486a1e1-997d-4286-8cb9-26369dc82055
caps.latest.revision: 18
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CD2DSizeF
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per D2D1\_SIZE\_F.  
  
## Sintassi  
  
```  
class CD2DSizeF : public D2D1_SIZE_F;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSizeF::CD2DSizeF](../Topic/CD2DSizeF::CD2DSizeF.md)|Di overload.  Costruisce un oggetto `CD2DSizeF` dall'oggetto `D2D1_SIZE_F`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSizeF::IsNull](../Topic/CD2DSizeF::IsNull.md)|Restituisce un valore `boolean` che indica se un'espressione non contiene dati validi \(`null`\).|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSizeF::operator CSize](../Topic/CD2DSizeF::operator%20CSize.md)|Converte `CD2DSizeF`oggetto `CSize`.|  
  
## Gerarchia di ereditarietà  
 `D2D1_SIZE_F`  
  
 [CD2DSizeF](../../mfc/reference/cd2dsizef-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)