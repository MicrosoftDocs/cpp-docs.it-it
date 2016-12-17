---
title: "CDrawingManager Class | Microsoft Docs"
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
  - "CDrawingManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDrawingManager class"
ms.assetid: 9e4775ca-101b-4aa9-a85a-4d047c701215
caps.latest.revision: 30
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDrawingManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CDrawingManager` implementa gli algoritmi complessi di disegno.  
  
## Sintassi  
  
```  
class CDrawingManager : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDrawingManager::CDrawingManager](../Topic/CDrawingManager::CDrawingManager.md)|Costruisce un oggetto `CDrawingManager`.|  
|`CDrawingManager::~CDrawingManager`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDrawingManager::CreateBitmap\_32](../Topic/CDrawingManager::CreateBitmap_32.md)|Crea una bitmap indipendente dal dispositivo \(DIB\) a 32 bit che le applicazioni possono scrivere direttamente.|  
|[CDrawingManager::DrawAlpha](../Topic/CDrawingManager::DrawAlpha.md)|Visualizzare le bitmap con pixel trasparenti o semitrasparenti.|  
|[CDrawingManager::DrawRotated](../Topic/CDrawingManager::DrawRotated.md)|Ruota un interno di origine del contenuto di controller di dominio il rettangolo specificato \+\/\- di 90 gradi|  
|[CDrawingManager::DrawEllipse](../Topic/CDrawingManager::DrawEllipse.md)|Disegnare un'ellisse con spaziatura interna e i colori del bordo forniti.|  
|[CDrawingManager::DrawGradientRing](../Topic/CDrawingManager::DrawGradientRing.md)|Disegna un livello e riempie con una sfumatura di colore.|  
|[CDrawingManager::DrawLine, CDrawingManager::DrawLineA](../Topic/CDrawingManager::DrawLine,%20CDrawingManager::DrawLineA.md)|Disegna una linea.|  
|[CDrawingManager::DrawRect](../Topic/CDrawingManager::DrawRect.md)|Consente di disegnare un rettangolo con spaziatura interna e i colori del bordo forniti.|  
|[CDrawingManager::DrawShadow](../Topic/CDrawingManager::DrawShadow.md)|Disegna ombreggiatura per un'area rettangolare.|  
|[CDrawingManager::Fill4ColorsGradient](../Topic/CDrawingManager::Fill4ColorsGradient.md)|Riempie un'area rettangolare di due sfumatura di colore.|  
|[CDrawingManager::FillGradient](../Topic/CDrawingManager::FillGradient.md)|Riempie un'area rettangolare di sfumatura di colore specificato.|  
|[CDrawingManager::FillGradient2](../Topic/CDrawingManager::FillGradient2.md)|Riempie un'area rettangolare di sfumatura di colore specificato.  La direzione della modifica del colore di una sfumatura è specificata.|  
|[CDrawingManager::GrayRect](../Topic/CDrawingManager::GrayRect.md)|Inserisce un rettangolo di colore grigio specificato.|  
|[CDrawingManager::HighlightRect](../Topic/CDrawingManager::HighlightRect.md)|Evidenzia un'area rettangolare.|  
|[CDrawingManager::HLStoRGB\_ONE](../Topic/CDrawingManager::HLStoRGB_ONE.md)|Converte un colore da una rappresentazione di HLS una rappresentazione RGB.|  
|[CDrawingManager::HLStoRGB\_TWO](../Topic/CDrawingManager::HLStoRGB_TWO.md)|Converte un colore da una rappresentazione di HLS una rappresentazione RGB.|  
|[CDrawingManager::HSVtoRGB](../Topic/CDrawingManager::HSVtoRGB.md)|Converte un colore da una rappresentazione di HSV una rappresentazione RGB.|  
|[CDrawingManager::HuetoRGB](../Topic/CDrawingManager::HuetoRGB.md)|Metodo di supporto che converte un valore di sfumatura a un componente rossa, verde, blu o.|  
|[CDrawingManager::MirrorRect](../Topic/CDrawingManager::MirrorRect.md)|Capovolgere un'area rettangolare.|  
|[CDrawingManager::PixelAlpha](../Topic/CDrawingManager::PixelAlpha.md)|Metodo di supporto che determina il colore finale di un pixel semitrasparente.|  
|[CDrawingManager::PrepareShadowMask](../Topic/CDrawingManager::PrepareShadowMask.md)|Crea una bitmap che può essere utilizzata come ombreggiatura.|  
|[CDrawingManager::RGBtoHSL](../Topic/CDrawingManager::RGBtoHSL.md)|Converte un colore da una rappresentazione RGB una rappresentazione di HSL.|  
|[CDrawingManager::RGBtoHSV](../Topic/CDrawingManager::RGBtoHSV.md)|Converte un colore da una rappresentazione RGB una rappresentazione di HSV.|  
|[CDrawingManager::SetAlphaPixel](../Topic/CDrawingManager::SetAlphaPixel.md)|Metodo di supporto che la colorazione di un pixel parzialmente trasparenti in una bitmap.|  
|[CDrawingManager::SetPixel](../Topic/CDrawingManager::SetPixel.md)|Metodo di supporto che modifica un singolo pixel in una bitmap nel colore specificato.|  
|[CDrawingManager::SmartMixColors](../Topic/CDrawingManager::SmartMixColors.md)|Combina due colori basati su un rapporto pesato.|  
  
## Note  
 La classe `CDrawingManager` fornisce funzioni per la creazione di nasconde, sfumature di colore e rettangoli evidenziati.  Esegue la fusione alfa.  È possibile utilizzare questa classe per modificare direttamente l'interfaccia utente dell'applicazione.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDrawingManager](../../mfc/reference/cdrawingmanager-class.md)  
  
## Requisiti  
 **intestazione:** afxdrawmanager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)