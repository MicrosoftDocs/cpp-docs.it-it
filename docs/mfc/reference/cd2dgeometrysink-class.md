---
title: "Classe CD2DGeometrySink | Microsoft Docs"
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
  - "afxrendertarget/CD2DGeometrySink"
  - "CD2DGeometrySink"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DGeometrySink (classe)"
ms.assetid: e5e07f41-0343-4ab1-9d6b-8c62ed33c04a
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CD2DGeometrySink
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1GeometrySink.  
  
## Sintassi  
  
```  
class CD2DGeometrySink;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometrySink::CD2DGeometrySink](../Topic/CD2DGeometrySink::CD2DGeometrySink.md)|Costruisce un oggetto CD2DGeometrySink da un oggetto CD2DPathGeometry.|  
|[CD2DGeometrySink::~CD2DGeometrySink](../Topic/CD2DGeometrySink::~CD2DGeometrySink.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto sink di geometria D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometrySink::AddArc](../Topic/CD2DGeometrySink::AddArc.md)|Aggiunge un singolo arco alla geometria del percorso|  
|[CD2DGeometrySink::AddBezier](../Topic/CD2DGeometrySink::AddBezier.md)|Consente di creare una curva di Bezier continua tra il punto corrente e il punto finale specificato.|  
|[CD2DGeometrySink::AddBeziers](../Topic/CD2DGeometrySink::AddBeziers.md)|Crea una sequenza di curve di Bézier cubiche e le aggiunge al sink di geometria.|  
|[CD2DGeometrySink::AddLine](../Topic/CD2DGeometrySink::AddLine.md)|Crea un segmento di linea tra il punto corrente e il punto finale specificato e lo aggiunge al sink di geometria.|  
|[CD2DGeometrySink::AddLines](../Topic/CD2DGeometrySink::AddLines.md)|Crea una sequenza di righe utilizzando i punti specificati e le aggiunge al sink di geometria.|  
|[CD2DGeometrySink::AddQuadraticBezier](../Topic/CD2DGeometrySink::AddQuadraticBezier.md)|Consente di creare una curva di Bezier quadratica continua tra il punto corrente e il punto finale specificato.|  
|[CD2DGeometrySink::AddQuadraticBeziers](../Topic/CD2DGeometrySink::AddQuadraticBeziers.md)|Aggiunge una sequenza di segmenti di una curva di Bézier quadratica come matrice in una singola chiamata.|  
|[CD2DGeometrySink::BeginFigure](../Topic/CD2DGeometrySink::BeginFigure.md)|Inizia una nuova figura nel punto specificato.|  
|[CD2DGeometrySink::Close](../Topic/CD2DGeometrySink::Close.md)|Chiude il sink di geometria|  
|[CD2DGeometrySink::EndFigure](../Topic/CD2DGeometrySink::EndFigure.md)|Termina la figura corrente; facoltativamente, la chiude.|  
|[CD2DGeometrySink::Get](../Topic/CD2DGeometrySink::Get.md)|Restituisce l'interfaccia ID2D1GeometrySink.|  
|[CD2DGeometrySink::IsValid](../Topic/CD2DGeometrySink::IsValid.md)|Controlla la validità di sink di geometria|  
|[CD2DGeometrySink::SetFillMode](../Topic/CD2DGeometrySink::SetFillMode.md)|Specifica il metodo utilizzato per determinare quali punti si trovano all'interno della geometria descritta da questo sink di geometria e quali punti si trovano fuori.|  
|[CD2DGeometrySink::SetSegmentFlags](../Topic/CD2DGeometrySink::SetSegmentFlags.md)|Specifica le opzioni tratto e join da applicare ai nuovi segmenti aggiunti al sink di geometria.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometrySink::operator ID2D1GeometrySink\*](../Topic/CD2DGeometrySink::operator%20ID2D1GeometrySink*.md)|Restituisce l'interfaccia ID2D1GeometrySink.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometrySink::m\_pSink](../Topic/CD2DGeometrySink::m_pSink.md)|Puntatore a un oggetto ID2D1GeometrySink.|  
  
## Gerarchia di ereditarietà  
 [CD2DGeometrySink](../../mfc/reference/cd2dgeometrysink-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)