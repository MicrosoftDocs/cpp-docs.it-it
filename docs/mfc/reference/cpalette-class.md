---
title: "CPalette Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPalette"
  - "HPALETTE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tavolozze dei colori, MFC"
  - "CPalette class"
  - "HPALETTE"
ms.assetid: 8cd95498-53ed-4852-85e1-70e522541114
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CPalette Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula una tavolozza dei colori di Windows.  
  
## Sintassi  
  
```  
class CPalette : public CGdiObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPalette::CPalette](../Topic/CPalette::CPalette.md)|Costruisce un oggetto `CPalette` senza la tavolozza associata di Windows.  È necessario inizializzare l'oggetto `CPalette` con una delle funzioni membro di inizializzazione prima di poter essere utilizzata.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPalette::AnimatePalette](../Topic/CPalette::AnimatePalette.md)|Sostituisce le voci della tavolozza logica identificata dall'oggetto `CPalette`.  L'applicazione non è necessario aggiornare la relativa area client, poiché Windows esegue il mapping delle nuove voci nella tavolozza di sistema immediatamente.|  
|[CPalette::CreateHalftonePalette](../Topic/CPalette::CreateHalftonePalette.md)|Crea una tavolozza di mezzitoni per il contesto di dispositivo e allegarlo all'oggetto `CPalette`.|  
|[CPalette::CreatePalette](../Topic/CPalette::CreatePalette.md)|Crea una tavolozza dei colori di Windows e allegarlo all'oggetto `CPalette`.|  
|[CPalette::FromHandle](../Topic/CPalette::FromHandle.md)|Restituisce un puntatore a un oggetto `CPalette` una volta fornito un handle a un oggetto della tavolozza di Windows.|  
|[CPalette::GetEntryCount](../Topic/CPalette::GetEntryCount.md)|Recupera il numero di voci della tavolozza in una tavolozza logica.|  
|[CPalette::GetNearestPaletteIndex](../Topic/CPalette::GetNearestPaletteIndex.md)|Restituisce l'indice della voce nella tavolozza logica che corrisponde maggiormente a un valore di colore.|  
|[CPalette::GetPaletteEntries](../Topic/CPalette::GetPaletteEntries.md)|Recupera un intervallo delle voci della tavolozza in una tavolozza logica.|  
|[CPalette::ResizePalette](../Topic/CPalette::ResizePalette.md)|Modifica della dimensione della tavolozza logica specificata dall'oggetto `CPalette` il numero specificato di elementi.|  
|[CPalette::SetPaletteEntries](../Topic/CPalette::SetPaletteEntries.md)|Impostare i valori e i flag di colore RGB in un intervallo di voci in una tavolozza logica.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPalette::operator HPALETTE](../Topic/CPalette::operator%20HPALETTE.md)|Restituisce `HPALETTE` associato a `CPalette`.|  
  
## Note  
 Una tavolozza fornisce un'interfaccia tra un'applicazione e un dispositivo di output di colore \(ad esempio uno schermo.  L'interfaccia consente l'applicazione sfrutta le funzionalità di colore del dispositivo di output danni senza interferire con i colori visualizzati da altre applicazioni.  Windows utilizza la tavolozza logica dell'applicazione \(un elenco di colori necessarie\) e la tavolozza di sistema \(che definisce i colori disponibili\) per determinare i colori utilizzati.  
  
 Un oggetto `CPalette` fornisce funzioni membro per modificare la tavolozza definita dall'oggetto.  Costruisce un oggetto `CPalette` e utilizzare le funzioni membro per creare l'effettiva tavolozza, un oggetto di \(GDI\) \(application programming Interface\) e modificare le voci e altre proprietà.  
  
 Per ulteriori informazioni su l `CPalette`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CPalette`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC campione DIBLOOK](../../top/visual-cpp-samples.md)   
 [CGdiObject Class](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPalette::GetPaletteEntries](../Topic/CPalette::GetPaletteEntries.md)   
 [CPalette::SetPaletteEntries](../Topic/CPalette::SetPaletteEntries.md)