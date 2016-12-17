---
title: "CToolBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CToolBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bitmap [C++], button controls"
  - "pulsanti [C++], MFC toolbars"
  - "control bars [C++], CToolBar class"
  - "CToolBar class"
  - "barre degli strumenti [C++], CToolBar class"
  - "Windows common controls [C++], CToolBar class"
  - "Windows toolbar common controls [C++]"
ms.assetid: e868da26-5e07-4607-9651-e2f863ad9059
caps.latest.revision: 26
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CToolBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Barre di controllo che litigano dei pulsanti bitmap e dei separatori facoltativi.  
  
## Sintassi  
  
```  
class CToolBar : public CControlBar  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolBar::CToolBar](../Topic/CToolBar::CToolBar.md)|Costruisce un oggetto `CToolBar`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolBar::CommandToIndex](../Topic/CToolBar::CommandToIndex.md)|Restituisce l'indice di un pulsante con un ID di comando|  
|[CToolBar::Create](../Topic/CToolBar::Create.md)|Crea la barra degli strumenti di Windows e allegarlo all'oggetto `CToolBar`.|  
|[CToolBar::CreateEx](../Topic/CToolBar::CreateEx.md)|Crea un oggetto `CToolBar` con gli stili aggiuntivi per l'oggetto incorporato `CToolBarCtrl`.|  
|[CToolBar::GetButtonInfo](../Topic/CToolBar::GetButtonInfo.md)|Recupera l'id, lo stile e il numero di immagine di un pulsante.|  
|[CToolBar::GetButtonStyle](../Topic/CToolBar::GetButtonStyle.md)|Recupera lo stile per un pulsante.|  
|[CToolBar::GetButtonText](../Topic/CToolBar::GetButtonText.md)|Recupera il testo che verrà visualizzato su un pulsante.|  
|[CToolBar::GetItemID](../Topic/CToolBar::GetItemID.md)|Restituisce l'id di comando di un pulsante o di un separatore l'indice specificato.|  
|[CToolBar::GetItemRect](../Topic/CToolBar::GetItemRect.md)|Recupera il rettangolo di visualizzazione per l'elemento all'indice specificato.|  
|[CToolBar::GetToolBarCtrl](../Topic/CToolBar::GetToolBarCtrl.md)|Consente l'accesso diretto a controlli comuni sottostante.|  
|[CToolBar::LoadBitmap](../Topic/CToolBar::LoadBitmap.md)|Carica la bitmap contenente le immagini di bitmap\- pulsante.|  
|[CToolBar::LoadToolBar](../Topic/CToolBar::LoadToolBar.md)|Carica una risorsa della barra degli strumenti creata con l'editor di risorse.|  
|[CToolBar::SetBitmap](../Topic/CToolBar::SetBitmap.md)|Imposta un'immagine bitmap a bit.|  
|[CToolBar::SetButtonInfo](../Topic/CToolBar::SetButtonInfo.md)|Impostare l'id, lo stile e il numero di immagine di un pulsante.|  
|[CToolBar::SetButtons](../Topic/CToolBar::SetButtons.md)|Imposta gli stili del pulsante e un indice delle icone dei pulsanti nella bitmap.|  
|[CToolBar::SetButtonStyle](../Topic/CToolBar::SetButtonStyle.md)|Imposta lo stile per un pulsante.|  
|[CToolBar::SetButtonText](../Topic/CToolBar::SetButtonText.md)|Imposta il testo che verrà visualizzato su un pulsante.|  
|[CToolBar::SetHeight](../Topic/CToolBar::SetHeight.md)|L'altezza della barra degli strumenti.|  
|[CToolBar::SetSizes](../Topic/CToolBar::SetSizes.md)|Impostare le dimensioni dei pulsanti e le bitmap.|  
  
## Note  
 I pulsanti possono agire come pulsanti, pulsanti della casella di controllo, o i pulsanti di opzione.  Gli oggetti di`CToolBar` sono membri generalmente incorporati degli oggetti della finestra cornice derivati dalla classe [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md).  
  
 [CToolBar::GetToolBarCtrl](../Topic/CToolBar::GetToolBarCtrl.md), una funzione membro nuova a MFC 4,0, consente a approfittiate il supporto dei controlli comuni di Windows per la personalizzazione della barra degli strumenti e funzionalità aggiuntive.  Le funzioni membro di`CToolBar` offrono ulteriori funzionalità dei controlli comuni di Windows, tuttavia, quando si chiama `GetToolBarCtrl`, è possibile fornire alle barre degli strumenti ancora più delle caratteristiche delle barre degli strumenti di Windows 95\/98.  Quando si chiama `GetToolBarCtrl`, restituirà un riferimento a un oggetto `CToolBarCtrl`.  Vedere [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) per ulteriori informazioni sulla progettazione delle barre degli strumenti mediante i controlli comuni di Windows.  Per informazioni generali sui controlli, vedere [Controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb775493) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Visual C\+\+ sono disponibili due metodi per creare una barra degli strumenti.  Per creare una risorsa della barra degli strumenti utilizzando l'editor di risorse, seguire questi passaggi:  
  
1.  Creare una risorsa della barra degli strumenti.  
  
2.  Creare l'oggetto `CToolBar`.  
  
3.  Chiamare la funzione [CreateEx](../Topic/CToolBar::CreateEx.md)o [Crea](../Topic/CToolBar::Create.md) \) per creare la barra degli strumenti di Windows e per associarlo all'oggetto `CToolBar`.  
  
4.  Chiamata [LoadToolBar](../Topic/CToolBar::LoadToolBar.md) per caricare le risorse della barra degli strumenti.  
  
 In caso contrario, attenersi ai passaggi riportati di seguito:  
  
1.  Creare l'oggetto `CToolBar`.  
  
2.  Chiamare la funzione [CreateEx](../Topic/CToolBar::CreateEx.md)o [Crea](../Topic/CToolBar::Create.md) \) per creare la barra degli strumenti di Windows e per associarlo all'oggetto `CToolBar`.  
  
3.  Chiamare [LoadBitmap](../Topic/CToolBar::LoadBitmap.md) per caricare la bitmap contenente le icone dei pulsanti della barra degli strumenti.  
  
4.  Chiamare [SetButtons](../Topic/CToolBar::SetButtons.md) per impostare lo stile del pulsante e associare ogni pulsante con un'immagine nella bitmap.  
  
 Tutte le immagini del pulsante nella barra degli strumenti tratte da una bitmap, che deve contenere un'immagine per ciascun pulsante.  Tutte le immagini devono essere la stessa dimensione, l'impostazione predefinita è 16 pixel di larghezza e 15 pixel di altezza.  Le immagini devono essere side\-by\-side nella bitmap.  
  
 La funzione `SetButtons` accetta un puntatore a una matrice di controllo ID e un intero che specifica il numero di elementi nella matrice.  La funzione imposta ID di ciascun pulsante al valore dell'elemento corrispondente della matrice e assegna a ogni pulsante un indice di immagine, che specifica il percorso di un'immagine del pulsante nella bitmap.  Se un elemento di matrice contiene il valore **ID\_SEPARATOR**, alcun indice immagine è assegnato.  
  
 L'ordine di immagini nella bitmap è in genere l'ordine in cui vengono creati nello schermo, ma è possibile utilizzare la funzione [SetButtonInfo](../Topic/CToolBar::SetButtonInfo.md) per modificare la relazione tra l'ordine di immagine e ordine di disegno.  
  
 Tutti i pulsanti di una barra degli strumenti sono la stessa dimensione.  L'impostazione predefinita è 24 x 22 pixel, conforme *alle linee guida dell'interfaccia Windows per progettazione software*.  Tutto lo spazio aggiuntivo tra immagine e le dimensioni del pulsante viene utilizzato per formare un bordo intorno all'immagine.  
  
 Ogni pulsante ha un'immagine.  I diversi stati e stili del pulsante \(pressione, verso il basso, in disabilitato su, disattivare il basso e non definito\) vengono generati da tale un'immagine.  Sebbene le bitmap siano il colore, è possibile ottenere risultati ottimali con immagini in nero e in tonalità di grigi.  
  
> [!WARNING]
>  `CToolBar` supporta le bitmap con un massimo di 16 colori.  Quando si carica un'immagine in un editor della barra degli strumenti, Visual Studio converte automaticamente l'immagine a un colore 16 bitmap se necessario e visualizza un messaggio di avviso se l'immagine è stata convertita.  Se si utilizza un'immagine con più di 16 colori \(utilizzando un editor esterno per modificare l'immagine\), l'applicazione potrebbe presentare comportamenti imprevisti.  
  
 I pulsanti della barra degli strumenti imitano i pulsanti per impostazione predefinita.  Tuttavia, i pulsanti della barra degli strumenti possono anche imitare i pulsanti o i pulsanti di opzione della casella di controllo.  I pulsanti della casella di controllo con tre stati: sì, cancellato e indeterminato.  I pulsanti di opzione sono solo due stati: archiviare e cancellato.  
  
 Per impostare un singolo stile o il separatore del pulsante senza puntare a una matrice, chiamare [GetButtonStyle](../Topic/CToolBar::GetButtonStyle.md) per recuperare lo stile e quindi chiamare [SetButtonStyle](../Topic/CToolBar::SetButtonStyle.md) anziché `SetButtons`.  `SetButtonStyle` è molto utile quando si desidera modificare lo stile di un pulsante in fase di esecuzione.  
  
 Per assegnare che venga visualizzato il testo su un pulsante, chiamare [GetButtonText](../Topic/CToolBar::GetButtonText.md) per recuperare il testo da visualizzare sul pulsante e quindi chiamare [SetButtonText](../Topic/CToolBar::SetButtonText.md) per impostare il testo.  
  
 Per creare un pulsante della casella di controllo, assegnargli lo stile **TBBS\_CHECKBOX** o utilizzare la funzione membro `SetCheck` di un oggetto `CCmdUI` in un gestore `ON_UPDATE_COMMAND_UI`.  Chiamare `SetCheck` trasforma un pulsante in un pulsante della casella di controllo.  Passare a `SetCheck` un argomento di 0 per non selezionato, 1 per archiviare, o 2 per indeterminato.  
  
 Per creare un pulsante di opzione, chiamare la funzione membro [SetRadio](../Topic/CCmdUI::SetRadio.md) di un oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) da un gestore `ON_UPDATE_COMMAND_UI`.  Passare a `SetRadio` un argomento di 0 per selezionare o diverso da zero per archiviare.  Per fornire escludono a un gruppo radiofonico \- comportamento esclusivo, è necessario disporre di gestori `ON_UPDATE_COMMAND_UI` per tutti i pulsanti nel gruppo.  
  
 Per ulteriori informazioni su l `CToolBar`, vedere l'articolo [Implementazione della barra degli strumenti MFC](../../mfc/mfc-toolbar-implementation.md) e [nota tecnica 31: barre di controllo](../../mfc/tn031-control-bars.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CToolBar`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [MFC campione in CTRLBARS](../../top/visual-cpp-samples.md)   
 [Esempio DLGCBR32 MFC](../../top/visual-cpp-samples.md)   
 [Esempio DOCKTOOL MFC](../../top/visual-cpp-samples.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CToolBarCtrl Class](../../mfc/reference/ctoolbarctrl-class.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)   
 [CToolBar::Create](../Topic/CToolBar::Create.md)   
 [CToolBar::LoadBitmap](../Topic/CToolBar::LoadBitmap.md)   
 [CToolBar::SetButtons](../Topic/CToolBar::SetButtons.md)   
 [CCmdUI::SetCheck](../Topic/CCmdUI::SetCheck.md)   
 [CCmdUI::SetRadio](../Topic/CCmdUI::SetRadio.md)