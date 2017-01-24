---
title: "Classe CD2DResource | Microsoft Docs"
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
  - "afxrendertarget/CD2DResource"
  - "CD2DResource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DResource (classe)"
ms.assetid: 34e3ee18-aab6-4c39-9294-de869e1f7820
caps.latest.revision: 18
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CD2DResource
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Classe astratta che fornisce un'interfaccia per la creazione e la gestione di risorse D2D, ad esempio pennelli, livelli e testi.  
  
## Sintassi  
  
```  
class CD2DResource : public CObject;  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DResource::CD2DResource](../Topic/CD2DResource::CD2DResource.md)|Costruisce un oggetto CD2DResource.|  
|[CD2DResource::~CD2DResource](../Topic/CD2DResource::~CD2DResource.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto risorsa D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DResource::Create](../Topic/CD2DResource::Create.md)|Crea un CD2DResource.|  
|[CD2DResource::Destroy](../Topic/CD2DResource::Destroy.md)|Elimina un oggetto CD2DResource.|  
|[CD2DResource::IsValid](../Topic/CD2DResource::IsValid.md)|Controlla la validità della risorsa|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DResource::IsAutoDestroy](../Topic/CD2DResource::IsAutoDestroy.md)|Controllare il flag di autoeliminazione.|  
|[CD2DResource::ReCreate](../Topic/CD2DResource::ReCreate.md)|Ricrea un oggetto CD2DResource.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DResource::m\_bIsAutoDestroy](../Topic/CD2DResource::m_bIsAutoDestroy.md)|La risorsa verrà eliminata dal proprietario \(CRenderTarget\)|  
|[CD2DResource::m\_pParentTarget](../Topic/CD2DResource::m_pParentTarget.md)|Puntatore al padre CRenderTarget\)|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)