---
title: "CDialogBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDialogBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDialogBar class"
  - "dialog bars, Windows modeless dialog box"
  - "finestre di dialogo, non modali"
ms.assetid: da2f7a30-970c-44e3-87f0-6094bd002cab
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CDialogBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di una finestra di dialogo non modale di Windows in una barra di controllo.  
  
## Sintassi  
  
```  
class CDialogBar : public CControlBar  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialogBar::CDialogBar](../Topic/CDialogBar::CDialogBar.md)|Costruisce un oggetto `CDialogBar`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialogBar::Create](../Topic/CDialogBar::Create.md)|Crea una barra della finestra di dialogo di Windows e allegarlo all'oggetto `CDialogBar`.|  
  
## Note  
 Una barra della finestra di dialogo sarà simile a una finestra di dialogo in che contiene controlli Windows standard che l'utente può spostarsi tra.  Un'altra analogie viene creato un modello di finestra di dialogo per rappresentare la barra della finestra di dialogo.  
  
 Creazione e utilizzo di una barra della finestra di dialogo sono simili alla creazione e utilizzo di un oggetto `CFormView`.  Innanzitutto, utilizzare [editor finestre](../../mfc/dialog-editor.md) per definire un modello di finestra di dialogo con lo stile **WS\_CHILD** e nessuno altro stile.  Il modello non deve avere lo stile **WS\_VISIBLE**.  Nel codice dell'applicazione, chiamare il costruttore per costruire l'oggetto `CDialogBar`, quindi chiamare **Crea** per creare la finestra della barra della finestra di dialogo e per associarlo all'oggetto `CDialogBar`.  
  
 Per ulteriori informazioni su `CDialogBar`, vedere l'articolo [barre di finestra di dialogo](../../mfc/dialog-bars.md) e [nota tecnica 31](../../mfc/tn031-control-bars.md), barre di controllo.  
  
> [!NOTE]
>  Nella versione corrente, un oggetto `CDialogBar` non può contenere i controlli windows form.  Per ulteriori informazioni sui controlli Windows Form in Visual C\+\+, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CDialogBar`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [Esempio CTRLBARS MFC](../../top/visual-cpp-samples.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFormView Class](../../mfc/reference/cformview-class.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)