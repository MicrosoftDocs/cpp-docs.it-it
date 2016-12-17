---
title: "CStatic Class | Microsoft Docs"
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
  - "CStatic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bitmap, visualizzazione"
  - "controlli [MFC], statiche"
  - "CStatic class"
  - "cursori, visualizzazione"
  - "enhanced metafiles"
  - "enhanced metafiles, visualizzazione"
  - "icone, visualizzazione"
  - "static controls"
ms.assetid: e7c94cd9-5ebd-428a-aa30-b3e51f8efb95
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CStatic Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di un controllo statico di Windows.  
  
## Sintassi  
  
```  
class CStatic : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatic::CStatic](../Topic/CStatic::CStatic.md)|Costruisce un oggetto `CStatic`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatic::Create](../Topic/CStatic::Create.md)|Crea il controllo statico di Windows e lo aggiunge all'oggetto `CStatic`.|  
|[CStatic::DrawItem](../Topic/CStatic::DrawItem.md)|Override per disegnare un controllo statico creato dal proprietario.|  
|[CStatic::GetBitmap](../Topic/CStatic::GetBitmap.md)|Recupera l'handle della bitmap precedentemente impostata con [SetBitmap](../Topic/CStatic::SetBitmap.md).|  
|[CStatic::GetCursor](../Topic/CStatic::GetCursor.md)|Recupera l'handle di un'immagine del cursore già impostata con [SetCursor](../Topic/CStatic::SetCursor.md).|  
|[CStatic::GetEnhMetaFile](../Topic/CStatic::GetEnhMetaFile.md)|Recupera l'handle di Enhanced Metafile precedentemente impostata con [SetEnhMetaFile](../Topic/CStatic::SetEnhMetaFile.md).|  
|[CStatic::GetIcon](../Topic/CStatic::GetIcon.md)|Recupera l'handle icona precedentemente impostata con [SetIcon](../Topic/CStatic::SetIcon.md).|  
|[CStatic::SetBitmap](../Topic/CStatic::SetBitmap.md)|Specifica una bitmap da visualizzare nel controllo statico.|  
|[CStatic::SetCursor](../Topic/CStatic::SetCursor.md)|Specifica un'immagine del cursore da visualizzare nel controllo statico.|  
|[CStatic::SetEnhMetaFile](../Topic/CStatic::SetEnhMetaFile.md)|Specifica un Enhanced Metafile da visualizzare nel controllo statico.|  
|[CStatic::SetIcon](../Topic/CStatic::SetIcon.md)|Specificare l'icona da visualizzare nel controllo statico.|  
  
## Note  
 Un controllo statico viene visualizzata una stringa di testo, una casella, un rettangolo, l'icona, un cursore, una bitmap, o un Enhanced Metafile.  Può essere utilizzato per contrassegnare, il boxing, o separare gli altri controlli.  Un controllo statico in genere non accetta input e non fornisce output, tuttavia, può notificare il padre di clic del mouse venga creato con stile **SS\_NOTIFY**.  
  
 Creare un controllo statico in due passaggi.  Innanzitutto, chiamare il costruttore per costruire l'oggetto `CStatic`, quindi chiamare la funzione membro [Crea](../Topic/CStatic::Create.md) per creare il controllo statico e per associarlo all'oggetto `CStatic`.  
  
 Se si crea un oggetto `CStatic` di una finestra di dialogo tramite una risorsa finestra di dialogo, l'oggetto `CStatic` automaticamente eliminato quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un oggetto `CStatic` interno di una finestra, è inoltre necessario distruggerla.  Un oggetto `CStatic` creato nello stack interno di una finestra automaticamente distrutto.  Se si crea l'oggetto `CStatic` nell'heap mediante la funzione **new**, è necessario chiamare **delete** sull'oggetto per distruggerlo quando l'operazione è stata eseguita.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CStatic`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CButton Class](../../mfc/reference/cbutton-class.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)   
 [CScrollBar Class](../../mfc/reference/cscrollbar-class.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)