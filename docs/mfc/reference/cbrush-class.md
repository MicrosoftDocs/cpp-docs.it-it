---
title: "CBrush Class | Microsoft Docs"
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
  - "CBrush"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pennelli, CBrush class"
  - "CBrush class"
ms.assetid: e5ef2c62-dd95-4973-9090-f52f605900e1
caps.latest.revision: 21
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CBrush Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula un pennello di \(GDI\) \(application programming Interface\) di Windows.  
  
## Sintassi  
  
```  
class CBrush : public CGdiObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBrush::CBrush](../Topic/CBrush::CBrush.md)|Costruisce un oggetto `CBrush`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBrush::CreateBrushIndirect](../Topic/CBrush::CreateBrushIndirect.md)|Inizializza un pennello con lo stile, il colore e il modello specificato in una struttura [LOGBRUSH](http://msdn.microsoft.com/library/windows/desktop/dd145035).|  
|[CBrush::CreateDIBPatternBrush](../Topic/CBrush::CreateDIBPatternBrush.md)|Inizializza un pennello a un modello specificato da una bitmap indipendente dal dispositivo \(DIB\).|  
|[CBrush::CreateHatchBrush](../Topic/CBrush::CreateHatchBrush.md)|Inizializza un pennello al modello e il colore covati specificati.|  
|[CBrush::CreatePatternBrush](../Topic/CBrush::CreatePatternBrush.md)|Inizializza un pennello a un modello specificato da una bitmap.|  
|[CBrush::CreateSolidBrush](../Topic/CBrush::CreateSolidBrush.md)|Inizializza un pennello a tinta unita la specificata.|  
|[CBrush::CreateSysColorBrush](../Topic/CBrush::CreateSysColorBrush.md)|Crea un oggetto che rappresenta il colore di sistema predefinito.|  
|[CBrush::FromHandle](../Topic/CBrush::FromHandle.md)|Restituisce un puntatore a un oggetto `CBrush` una volta fornito un handle a un oggetto di Windows `HBRUSH`.|  
|[CBrush::GetLogBrush](../Topic/CBrush::GetLogBrush.md)|Ottiene una struttura [LOGBRUSH](http://msdn.microsoft.com/library/windows/desktop/dd145035).|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBrush::operator HBRUSH](../Topic/CBrush::operator%20HBRUSH.md)|Restituisce un handle di Windows incluse nell'oggetto `CBrush`.|  
  
## Note  
 Per utilizzare un oggetto `CBrush`, costruire un oggetto `CBrush` e passarlo a qualsiasi funzione membro `CDC` che richiede un pennello.  
  
 I pennelli possono essere pieni, covati, o modellati.  
  
 Per ulteriori informazioni su `CBrush`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CBrush`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC campione PROPDLG](../../top/visual-cpp-samples.md)   
 [CGdiObject Class](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CBitmap Class](../../mfc/reference/cbitmap-class.md)   
 [Classe CDC](../../mfc/reference/cdc-class.md)