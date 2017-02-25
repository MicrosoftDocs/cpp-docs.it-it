---
title: "CReBarCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CReBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CReBarCtrl class"
  - "rebar controls, control bar"
  - "rebar controls, CReBarCtrl class"
ms.assetid: 154570d7-e48c-425d-8c7e-c64542bcb4cc
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CReBarCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula la funzionalità di un controllo Rebar, che è un contenitore per una finestra figlio.  
  
## Sintassi  
  
```  
class CReBarCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CReBarCtrl::CReBarCtrl](../Topic/CReBarCtrl::CReBarCtrl.md)|Costruisce un oggetto `CReBarCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CReBarCtrl::BeginDrag](../Topic/CReBarCtrl::BeginDrag.md)|Posizionare il controllo Rebar in modalità trascinamento della selezione.|  
|[CReBarCtrl::Create](../Topic/CReBarCtrl::Create.md)|Crea il controllo Rebar e lo aggiunge all'oggetto `CReBarCtrl`.|  
|[CReBarCtrl::CreateEx](../Topic/CReBarCtrl::CreateEx.md)|Crea un controllo Rebar con gli stili estesi Windows specificati e lo collega a un oggetto `CReBarCtrl`.|  
|[CReBarCtrl::DeleteBand](../Topic/CReBarCtrl::DeleteBand.md)|Elimina una banda da un controllo Rebar.|  
|[CReBarCtrl::DragMove](../Topic/CReBarCtrl::DragMove.md)|Aggiorna la posizione di trascinamento nel controllo Rebar dopo una chiamata a `BeginDrag`.|  
|[CReBarCtrl::EndDrag](../Topic/CReBarCtrl::EndDrag.md)|Termina l'operazione di trascinamento della selezione del controllo Rebar.|  
|[CReBarCtrl::GetBandBorders](../Topic/CReBarCtrl::GetBandBorders.md)|Recupera i bordi di una banda.|  
|[CReBarCtrl::GetBandCount](../Topic/CReBarCtrl::GetBandCount.md)|Recupera attualmente il conteggio delle bande nel controllo Rebar.|  
|[CReBarCtrl::GetBandInfo](../Topic/CReBarCtrl::GetBandInfo.md)|Recupera informazioni su una banda specificata in un controllo Rebar.|  
|[CReBarCtrl::GetBandMargins](../Topic/CReBarCtrl::GetBandMargins.md)|Recupera i margini di una banda.|  
|[CReBarCtrl::GetBarHeight](../Topic/CReBarCtrl::GetBarHeight.md)|Recupera l'altezza del controllo Rebar.|  
|[CReBarCtrl::GetBarInfo](../Topic/CReBarCtrl::GetBarInfo.md)|Recupera le informazioni sul controllo Rebar e l'elenco di immagini che utilizza.|  
|[CReBarCtrl::GetBkColor](../Topic/CReBarCtrl::GetBkColor.md)|Recupera il colore di sfondo predefinito di un controllo Rebar.|  
|[CReBarCtrl::GetColorScheme](../Topic/CReBarCtrl::GetColorScheme.md)|Recuperare la struttura [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) associata al controllo Rebar.|  
|[CReBarCtrl::GetDropTarget](../Topic/CReBarCtrl::GetDropTarget.md)|Recupera un puntatore a interfaccia `IDropTarget` di un controllo Rebar.|  
|[CReBarCtrl::GetExtendedStyle](../Topic/CReBarCtrl::GetExtendedStyle.md)|Ottiene lo stile esteso del controllo Rebar corrente.|  
|[CReBarCtrl::GetImageList](../Topic/CReBarCtrl::GetImageList.md)|Recupera l'elenco di immagini associato a un controllo Rebar.|  
|[CReBarCtrl::GetPalette](../Topic/CReBarCtrl::GetPalette.md)|Recupera la tavolozza corrente del controllo Rebar.|  
|[CReBarCtrl::GetRect](../Topic/CReBarCtrl::GetRect.md)|Recupera il rettangolo di delimitazione di una banda specificata in un controllo Rebar.|  
|[CReBarCtrl::GetRowCount](../Topic/CReBarCtrl::GetRowCount.md)|Recupera il numero di righe della banda in un controllo Rebar.|  
|[CReBarCtrl::GetRowHeight](../Topic/CReBarCtrl::GetRowHeight.md)|Recupera l'altezza di una riga specificata in un controllo Rebar.|  
|[CReBarCtrl::GetTextColor](../Topic/CReBarCtrl::GetTextColor.md)|Recupera il colore del testo predefinito di un controllo Rebar.|  
|[CReBarCtrl::GetToolTips](../Topic/CReBarCtrl::GetToolTips.md)|Recupera l'handle a qualsiasi controllo tooltip associato al controllo Rebar.|  
|[CReBarCtrl::HitTest](../Topic/CReBarCtrl::HitTest.md)|Determina quale parte di banda del rebar è in un determinato punto dello schermo, se una banda del rebar presente in tale posizione.|  
|[CReBarCtrl::IDToIndex](../Topic/CReBarCtrl::IDToIndex.md)|Converte un identificatore \(ID\) di banda a un indice di banda in un controllo Rebar.|  
|[CReBarCtrl::InsertBand](../Topic/CReBarCtrl::InsertBand.md)|Inserisce una nuova banda in un controllo Rebar.|  
|[CReBarCtrl::MaximizeBand](../Topic/CReBarCtrl::MaximizeBand.md)|Ridimensiona una banda in un controllo Rebar alla dimensione massima.|  
|[CReBarCtrl::MinimizeBand](../Topic/CReBarCtrl::MinimizeBand.md)|Ridimensiona una banda in un controllo Rebar alla dimensione minore.|  
|[CReBarCtrl::MoveBand](../Topic/CReBarCtrl::MoveBand.md)|Sposta una banda da un indice a un altro.|  
|[CReBarCtrl::PushChevron](../Topic/CReBarCtrl::PushChevron.md)|A livello di codice inserisce una freccia di espansione.|  
|[CReBarCtrl::RestoreBand](../Topic/CReBarCtrl::RestoreBand.md)|Ridimensiona una banda in un controllo Rebar alla dimensione ideale.|  
|[CReBarCtrl::SetBandInfo](../Topic/CReBarCtrl::SetBandInfo.md)|Impostare le caratteristiche di una banda esistente in un controllo Rebar.|  
|[CReBarCtrl::SetBandWidth](../Topic/CReBarCtrl::SetBandWidth.md)|Impostare la larghezza di banda ancorata specificata nel controllo Rebar corrente.|  
|[CReBarCtrl::SetBarInfo](../Topic/CReBarCtrl::SetBarInfo.md)|Impostare le caratteristiche di un controllo Rebar.|  
|[CReBarCtrl::SetBkColor](../Topic/CReBarCtrl::SetBkColor.md)|Imposta il colore di sfondo predefinito di un controllo Rebar.|  
|[CReBarCtrl::SetColorScheme](../Topic/CReBarCtrl::SetColorScheme.md)|Imposta la combinazione di colori per i pulsanti di un controllo Rebar.|  
|[CReBarCtrl::SetExtendedStyle](../Topic/CReBarCtrl::SetExtendedStyle.md)|Imposta stili estesi per il controllo Rebar corrente.|  
|[CReBarCtrl::SetImageList](../Topic/CReBarCtrl::SetImageList.md)|Imposta l'elenco di immagini di un controllo Rebar.|  
|[CReBarCtrl::SetOwner](../Topic/CReBarCtrl::SetOwner.md)|Imposta la finestra proprietaria di un controllo Rebar.|  
|[CReBarCtrl::SetPalette](../Topic/CReBarCtrl::SetPalette.md)|Imposta la tavolozza corrente del controllo Rebar.|  
|[CReBarCtrl::SetTextColor](../Topic/CReBarCtrl::SetTextColor.md)|Imposta il colore del testo predefinito di un controllo Rebar.|  
|[CReBarCtrl::SetToolTips](../Topic/CReBarCtrl::SetToolTips.md)|Associa un controllo di descrizione comandi con il controllo Rebar.|  
|[CReBarCtrl::SetWindowTheme](../Topic/CReBarCtrl::SetWindowTheme.md)|Consente di impostare lo stile di visualizzazione del controllo Rebar.|  
|[CReBarCtrl::ShowBand](../Topic/CReBarCtrl::ShowBand.md)|Mostra o nasconde una banda specificata in un controllo Rebar.|  
|[CReBarCtrl::SizeToRect](../Topic/CReBarCtrl::SizeToRect.md)|Estende un controllo Rebar a un rettangolo specificato.|  
  
## Note  
 L'applicazione in cui il controllo Rebar risiede assegna la finestra figlio contenuta dal controllo Rebar la banda del rebar.  La finestra figlio è in genere un altro controllo comune.  
  
 I controlli Rebar contiene uno o più bande.  Ogni banda può contenere una combinazione di barra gripper, di bitmap, di un'etichetta di testo e di finestra figlio.  La banda può contenere solo uno di questi elementi.  
  
 Il controllo Rebar può visualizzare la finestra figlio in una bitmap specificata di sfondo.  Tutte le bande di controllo Rebar possono essere ridimensionate, ad eccezione di quelle che utilizzano lo stile **RBBS\_FIXEDSIZE**.  Come riposizionati o ridimensiona una banda di controllo Rebar, il controllo Rebar gestisce la dimensione e la posizione della finestra figlio assegnato alla banda.  Per ridimensionare o modificare l'ordine delle bande nel controllo, scegliere e trascinare la barra gripper di una banda.  
  
 Nella figura seguente viene illustrato un controllo Rebar che ha tre strisce:  
  
-   La banda 0 contiene un controllo toolbar piano e trasparente.  
  
-   La banda 1 contiene sia lo standard trasparente che pulsanti a discesa trasparenti.  
  
-   La banda 2 include una casella combinata e quattro pulsanti standard.  
  
     ![Esempio di menu Rebar](../../mfc/reference/media/vc4scc1.png "vc4SCC1")  
  
## Controllo Rebar  
 Supporto del controllo:  
  
-   Elenchi di immagini.  
  
-   Gestione dei messaggi.  
  
-   Funzionalità personalizzata di disegno.  
  
-   Diversi stili del controllo oltre agli stili delle finestre standard.  Per un elenco di questi stili, vedere [Stili del controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774377) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni, vedere [Utilizzando CReBarCtrl](../../mfc/using-crebarctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CReBarCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)