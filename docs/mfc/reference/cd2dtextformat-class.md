---
title: "Classe CD2DTextFormat | Microsoft Docs"
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
  - "afxrendertarget/CD2DTextFormat"
  - "CD2DTextFormat"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DTextFormat (classe)"
ms.assetid: db194cec-9dae-4644-ab84-7c43b7164117
caps.latest.revision: 16
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CD2DTextFormat
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per IDWriteTextFormat.  
  
## Sintassi  
  
```  
class CD2DTextFormat : public CD2DResource;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::CD2DTextFormat](../Topic/CD2DTextFormat::CD2DTextFormat.md)|Costruisce un oggetto CD2DTextFormat.|  
|[CD2DTextFormat::~CD2DTextFormat](../Topic/CD2DTextFormat::~CD2DTextFormat.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto formato di testo D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::Create](../Topic/CD2DTextFormat::Create.md)|Crea un CD2DTextFormat.  \(Esegue l'override di [CD2DResource::Create](../Topic/CD2DResource::Create.md)\).|  
|[CD2DTextFormat::Destroy](../Topic/CD2DTextFormat::Destroy.md)|Elimina un oggetto CD2DTextFormat.  \(Esegue l'override di [CD2DResource::Destroy](../Topic/CD2DResource::Destroy.md).\)|  
|[CD2DTextFormat::Get](../Topic/CD2DTextFormat::Get.md)|Restituisce l'interfaccia IDWriteTextFormat|  
|[CD2DTextFormat::GetFontFamilyName](../Topic/CD2DTextFormat::GetFontFamilyName.md)|Ottiene una copia del nome della famiglia di caratteri.|  
|[CD2DTextFormat::GetLocaleName](../Topic/CD2DTextFormat::GetLocaleName.md)|Ottiene una copia del nome delle impostazioni locali.|  
|[CD2DTextFormat::IsValid](../Topic/CD2DTextFormat::IsValid.md)|Controlla la validità della risorsa \(Esegue l'override di [CD2DResource::IsValid](../Topic/CD2DResource::IsValid.md).\)|  
|[CD2DTextFormat::ReCreate](../Topic/CD2DTextFormat::ReCreate.md)|Ricrea un oggetto CD2DTextFormat.  \(Esegue l'override di [CD2DResource::ReCreate](../Topic/CD2DResource::ReCreate.md)\).|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::operator IDWriteTextFormat\*](../Topic/CD2DTextFormat::operator%20IDWriteTextFormat*.md)|Restituisce l'interfaccia IDWriteTextFormat|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::m\_pTextFormat](../Topic/CD2DTextFormat::m_pTextFormat.md)|Puntatore a un oggetto IDWriteTextFormat.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DTextFormat](../../mfc/reference/cd2dtextformat-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)