---
title: "Classe CD2DTextLayout | Microsoft Docs"
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
  - "CD2DTextLayout"
  - "afxrendertarget/CD2DTextLayout"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DTextLayout (classe)"
ms.assetid: 724bd13c-f2ef-4e55-a775-8cb04b7b7908
caps.latest.revision: 16
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CD2DTextLayout
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per IDWriteTextLayout.  
  
## Sintassi  
  
```  
class CD2DTextLayout : public CD2DResource;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextLayout::CD2DTextLayout](../Topic/CD2DTextLayout::CD2DTextLayout.md)|Costruisce un oggetto CD2DTextLayout.|  
|[CD2DTextLayout::~CD2DTextLayout](../Topic/CD2DTextLayout::~CD2DTextLayout.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto layout di testo D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextLayout::Create](../Topic/CD2DTextLayout::Create.md)|Crea un CD2DTextLayout.  \(Esegue l'override di [CD2DResource::Create](../Topic/CD2DResource::Create.md)\).|  
|[CD2DTextLayout::Destroy](../Topic/CD2DTextLayout::Destroy.md)|Elimina un oggetto CD2DTextLayout.  \(Esegue l'override di [CD2DResource::Destroy](../Topic/CD2DResource::Destroy.md).\)|  
|[CD2DTextLayout::Get](../Topic/CD2DTextLayout::Get.md)|Restituisce l'interfaccia IDWriteTextLayout|  
|[CD2DTextLayout::GetFontFamilyName](../Topic/CD2DTextLayout::GetFontFamilyName.md)|Copia il nome della famiglia di caratteri del testo nella posizione specificata.|  
|[CD2DTextLayout::GetLocaleName](../Topic/CD2DTextLayout::GetLocaleName.md)|Ottiene il nome delle impostazioni locali del testo nella posizione specificata.|  
|[CD2DTextLayout::IsValid](../Topic/CD2DTextLayout::IsValid.md)|Controlla la validità della risorsa \(Esegue l'override di [CD2DResource::IsValid](../Topic/CD2DResource::IsValid.md).\)|  
|[CD2DTextLayout::ReCreate](../Topic/CD2DTextLayout::ReCreate.md)|Ricrea un oggetto CD2DTextLayout.  \(Esegue l'override di [CD2DResource::ReCreate](../Topic/CD2DResource::ReCreate.md)\).|  
|[CD2DTextLayout::SetFontFamilyName](../Topic/CD2DTextLayout::SetFontFamilyName.md)|Imposta il nome della famiglia di caratteri con terminazione Null per il testo all'interno di un intervallo di testo specificato|  
|[CD2DTextLayout::SetLocaleName](../Topic/CD2DTextLayout::SetLocaleName.md)|Imposta il nome delle impostazioni locali per il testo all'interno di un intervallo di testo specificato|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextLayout::operator IDWriteTextLayout\*](../Topic/CD2DTextLayout::operator%20IDWriteTextLayout*.md)|Restituisce l'interfaccia IDWriteTextLayout|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextLayout::m\_pTextLayout](../Topic/CD2DTextLayout::m_pTextLayout.md)|Puntatore a un oggetto IDWriteTextLayout.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DTextLayout](../../mfc/reference/cd2dtextlayout-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)