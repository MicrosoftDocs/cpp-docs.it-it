---
title: "CDialogEx Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDialogEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDialogEx class"
  - "CDialogEx::PreTranslateMessage method"
ms.assetid: a6ed3b1f-aef8-4b66-ac78-2160faf63c13
caps.latest.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CDialogEx Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CDialogEx` specifica il colore e l'immagine di sfondo di una finestra di dialogo.  
  
## Sintassi  
  
```  
class CDialogEx : public CDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialogEx::CDialogEx](../Topic/CDialogEx::CDialogEx.md)|Costruisce un oggetto `CDialogEx`.|  
|`CDialogEx::~CDialogEx`|Distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialogEx::SetBackgroundColor](../Topic/CDialogEx::SetBackgroundColor.md)|Imposta il colore di sfondo della finestra di dialogo.|  
|[CDialogEx::SetBackgroundImage](../Topic/CDialogEx::SetBackgroundImage.md)|Imposta l'immagine di sfondo della finestra di dialogo.|  
  
## Note  
 Per usare la classe `CDialogEx`, derivare la classe della finestra di dialogo dalla classe `CDialogEx` e non dalla classe `CDialog`.  
  
 Le immagini della finestra di dialogo vengono archiviate in un file di risorse.  Il framework elimina automaticamente tutte le immagini caricate dal file di risorse.  Per eliminare a livello di codice l'immagine di sfondo corrente, chiamare il metodo [CDialogEx::SetBackgroundImage](../Topic/CDialogEx::SetBackgroundImage.md) o implementare un gestore dell'evento `OnDestroy`.  Quando si chiama il metodo [CDialogEx::SetBackgroundImage](../Topic/CDialogEx::SetBackgroundImage.md), passare un parametro `HBITMAP` come handle dell'immagine.  L'oggetto `CDialogEx` diventa proprietario dell'immagine e la elimina se il flag `m_bAutoDestroyBmp` è `TRUE`.  
  
 Un oggetto `CDialogEx` può essere padre di un oggetto [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md).  L'oggetto [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) chiama il metodo `CDialogEx::SetActiveMenu` quando l'oggetto [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) viene aperto.  In seguito, l'oggetto `CDialogEx` gestisce qualsiasi evento di menu finché l'oggetto [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) non viene chiuso.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
## Requisiti  
 **Intestazione:** afxdialogex.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md)   
 [CContextMenuManager Class](../../mfc/reference/ccontextmenumanager-class.md)