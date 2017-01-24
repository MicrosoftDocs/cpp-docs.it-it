---
title: "CBitmap Class | Microsoft Docs"
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
  - "CBitmap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBitmap class"
  - "drawing, strumenti"
  - "GDI bitmap"
ms.assetid: 3980616a-c59d-495a-86e6-62bd3889c84c
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CBitmap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula una bitmap di \(GDI\) \(application programming Interface\) Windows e fornisce funzioni membro per modificare la bitmap.  
  
## Sintassi  
  
```  
class CBitmap : public CGdiObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmap::CBitmap](../Topic/CBitmap::CBitmap.md)|Costruisce un oggetto `CBitmap`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmap::CreateBitmap](../Topic/CBitmap::CreateBitmap.md)|Inizializza l'oggetto con una bitmap dipendente dal dispositivo di memoria con larghezza, altezza e uno schema di bit specificati.|  
|[CBitmap::CreateBitmapIndirect](../Topic/CBitmap::CreateBitmapIndirect.md)|Inizializza l'oggetto con una bitmap con larghezza, altezza e lo schema di bit \(eventualmente specificato\) specificato in una struttura **BITMAP**.|  
|[CBitmap::CreateCompatibleBitmap](../Topic/CBitmap::CreateCompatibleBitmap.md)|Inizializza l'oggetto con una bitmap in modo che sia compatibile con un dispositivo specificato.|  
|[CBitmap::CreateDiscardableBitmap](../Topic/CBitmap::CreateDiscardableBitmap.md)|Inizializza l'oggetto con una bitmap eliminabile compatibile con un dispositivo specificato.|  
|[CBitmap::FromHandle](../Topic/CBitmap::FromHandle.md)|Restituisce un puntatore a un oggetto `CBitmap` una volta fornito un handle a una bitmap di Windows `HBITMAP`.|  
|[CBitmap::GetBitmap](../Topic/CBitmap::GetBitmap.md)|Compila una struttura **BITMAP** di informazioni sulla bitmap.|  
|[CBitmap::GetBitmapBits](../Topic/CBitmap::GetBitmapBits.md)|Copia i bit della bitmap specificata nel buffer specificato.|  
|[CBitmap::GetBitmapDimension](../Topic/CBitmap::GetBitmapDimension.md)|Restituisce la larghezza e l'altezza della bitmap.  L'altezza e la larghezza sono dovrebbero essere impostate in precedenza dalla funzione membro [SetBitmapDimension](../Topic/CBitmap::SetBitmapDimension.md).|  
|[CBitmap::LoadBitmap](../Topic/CBitmap::LoadBitmap.md)|Inizializza l'oggetto caricamento di una risorsa immagine denominata dal file eseguibile dell'applicazione e connettendo la bitmap all'oggetto.|  
|[CBitmap::LoadMappedBitmap](../Topic/CBitmap::LoadMappedBitmap.md)|Carica una bitmap e i colori di mapping ai colori di sistema correnti.|  
|[CBitmap::LoadOEMBitmap](../Topic/CBitmap::LoadOEMBitmap.md)|Inizializza l'oggetto caricamento di una bitmap predefinita di Windows e connettendo la bitmap all'oggetto.|  
|[CBitmap::SetBitmapBits](../Topic/CBitmap::SetBitmapBits.md)|Imposta i bit della bitmap ai valori di bit specificati.|  
|[CBitmap::SetBitmapDimension](../Topic/CBitmap::SetBitmapDimension.md)|Assegna una larghezza e un'altezza in una bitmap in unità da 0,1 millimetri.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmap::operator HBITMAP](../Topic/CBitmap::operator%20HBITMAP.md)|Restituisce un handle di Windows incluse nell'oggetto `CBitmap`.|  
  
## Note  
 Per utilizzare un oggetto `CBitmap`, costruire l'oggetto, allegare un handle bitmap a una delle funzioni membro di inizializzazione e quindi chiamare le funzioni membro dell'oggetto.  
  
 Per ulteriori informazioni sull'utilizzo degli oggetti grafici come `CBitmap`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CBitmap`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Esempio MDI MFC](../../top/visual-cpp-samples.md)   
 [CGdiObject Class](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)