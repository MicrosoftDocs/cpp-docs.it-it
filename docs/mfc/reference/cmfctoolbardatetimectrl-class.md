---
title: "CMFCToolBarDateTimeCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "OnDrawOnCustomizeList"
  - "CMFCToolBarDateTimeCtrl::OnDraw"
  - "OnDraw"
  - "CMFCToolBarDateTimeCtrl.Serialize"
  - "CMFCToolBarDateTimeCtrl.OnSize"
  - "CMFCToolBarDateTimeCtrl.OnDrawOnCustomizeList"
  - "OnSize"
  - "OnCalculateSize"
  - "CMFCToolBarDateTimeCtrl"
  - "CMFCToolBarDateTimeCtrl::OnCalculateSize"
  - "SetStyle"
  - "CMFCToolBarDateTimeCtrl::OnDrawOnCustomizeList"
  - "CMFCToolBarDateTimeCtrl.OnDraw"
  - "CMFCToolBarDateTimeCtrl.SetStyle"
  - "CMFCToolBarDateTimeCtrl::SetStyle"
  - "CMFCToolBarDateTimeCtrl.OnCalculateSize"
  - "CMFCToolBarDateTimeCtrl::Serialize"
  - "CMFCToolBarDateTimeCtrl::OnSize"
  - "Serialize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarDateTimeCtrl class"
  - "OnCalculateSize method"
  - "OnDraw method"
  - "OnDrawOnCustomizeList method"
  - "OnSize method"
  - "Serialize method"
  - "SetStyle method"
ms.assetid: a3853cb9-8ebc-444f-a1e4-9cf905e24c18
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CMFCToolBarDateTimeCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un pulsante della barra degli strumenti contenente un controllo di selezione data e ora.  
  
## Sintassi  
  
```  
class CMFCToolBarDateTimeCtrl : public CMFCToolBarButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl](../Topic/CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl.md)|Costruisce un oggetto `CMFCToolBarDateTimeCtrl`.|  
|`CMFCToolBarDateTimeCtrl::~CMFCToolBarDateTimeCtrl`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarDateTimeCtrl::CanBeStretched](../Topic/CMFCToolBarDateTimeCtrl::CanBeStretched.md)|Specifica se un utente può contenere il pulsante durante la personalizzazione.  \(Override [CMFCToolBarButton::CanBeStretched](../Topic/CMFCToolBarButton::CanBeStretched.md)\).|  
|[CMFCToolBarDateTimeCtrl::CopyFrom](../Topic/CMFCToolBarDateTimeCtrl::CopyFrom.md)|Copiare le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente.  \(Override [CMFCToolBarButton::CopyFrom](../Topic/CMFCToolBarButton::CopyFrom.md)\).|  
|`CMFCToolBarDateTimeCtrl::DuplicateData`|Riservato per utilizzi futuri.|  
|[CMFCToolBarButton::ExportToMenuButton](../Topic/CMFCToolBarButton::ExportToMenuButton.md)|Le copie il testo del pulsante della barra degli strumenti a un menu.|  
|`CMFCToolBarDateTimeCtrl::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMFCToolBarDateTimeCtrl::GetByCmd](../Topic/CMFCToolBarDateTimeCtrl::GetByCmd.md)|Recupera il primo oggetto `CMFCToolBarDateTimeCtrl` nell'applicazione che dispone dell'ID di comando|  
|[CMFCToolBarDateTimeCtrl::GetDateTimeCtrl](../Topic/CMFCToolBarDateTimeCtrl::GetDateTimeCtrl.md)|Restituisce un puntatore al controllo di selezione data e ora.|  
|[CMFCToolBarDateTimeCtrl::GetHwnd](../Topic/CMFCToolBarDateTimeCtrl::GetHwnd.md)|Recupera l'handle della finestra associata al pulsante della barra degli strumenti.  \(Override [CMFCToolBarButton::GetHwnd](../Topic/CMFCToolBarButton::GetHwnd.md)\).|  
|`CMFCToolBarDateTimeCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCToolBarDateTimeCtrl::GetTime](../Topic/CMFCToolBarDateTimeCtrl::GetTime.md)|Ottiene il tempo selezionato da un controllo di selezione data e ora e lo inserisce in una struttura specifica [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950).|  
|[CMFCToolBarDateTimeCtrl::GetTimeAll](../Topic/CMFCToolBarDateTimeCtrl::GetTimeAll.md)|Restituisce il tempo selezionato il pulsante del controllo selezione di tempo con un ID di comando|  
|[CMFCToolBarDateTimeCtrl::HaveHotBorder](../Topic/CMFCToolBarDateTimeCtrl::HaveHotBorder.md)|Determina se un bordo del pulsante viene visualizzato quando un utente seleziona il pulsante.  \(Override [CMFCToolBarButton::HaveHotBorder](../Topic/CMFCToolBarButton::HaveHotBorder.md)\).|  
|[CMFCToolBarDateTimeCtrl::NotifyCommand](../Topic/CMFCToolBarDateTimeCtrl::NotifyCommand.md)|Specifica se il pulsante elabora il messaggio [WM\_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591).  \(Override [CMFCToolBarButton::NotifyCommand](../Topic/CMFCToolBarButton::NotifyCommand.md)\).|  
|[CMFCToolBarDateTimeCtrl::OnAddToCustomizePage](../Topic/CMFCToolBarDateTimeCtrl::OnAddToCustomizePage.md)|Chiamato dal framework quando il pulsante viene aggiunto a una finestra di dialogo **Personalizza**.  \(Override [CMFCToolBarButton::OnAddToCustomizePage](../Topic/CMFCToolBarButton::OnAddToCustomizePage.md)\).|  
|`CMFCToolBarDateTimeCtrl::OnCalculateSize`|Chiamato dal framework per calcolare la dimensione del pulsante per lo stato specificato di ancoraggio e di contesto di dispositivo.  \(Override [CMFCToolBarButton::OnCalculateSize](../Topic/CMFCToolBarButton::OnCalculateSize.md)\).|  
|[CMFCToolBarDateTimeCtrl::OnChangeParentWnd](../Topic/CMFCToolBarDateTimeCtrl::OnChangeParentWnd.md)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.  \(Override [CMFCToolBarButton::OnChangeParentWnd](../Topic/CMFCToolBarButton::OnChangeParentWnd.md)\).|  
|[CMFCToolBarDateTimeCtrl::OnClick](../Topic/CMFCToolBarDateTimeCtrl::OnClick.md)|Chiamato dal framework quando l'utente fa clic sul controllo.  \(Override [CMFCToolBarButton::OnClick](../Topic/CMFCToolBarButton::OnClick.md)\).|  
|[CMFCToolBarDateTimeCtrl::OnCtlColor](../Topic/CMFCToolBarDateTimeCtrl::OnCtlColor.md)|Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio `WM_CTLCOLOR`.  \(Override [CMFCToolBarButton::OnCtlColor](../Topic/CMFCToolBarButton::OnCtlColor.md)\).|  
|`CMFCToolBarDateTimeCtrl::OnDraw`|Chiamato dal framework per disegnare il pulsante utilizzando gli stili e le opzioni specificate.  \(Override [CMFCToolBarButton::OnDraw](../Topic/CMFCToolBarButton::OnDraw.md)\).|  
|`CMFCToolBarDateTimeCtrl::OnDrawOnCustomizeList`|Chiamato dal framework per disegnare il pulsante nel riquadro **Comandi** la finestra di dialogo **Personalizza**.  \(Override [CMFCToolBarButton::OnDrawOnCustomizeList](../Topic/CMFCToolBarButton::OnDrawOnCustomizeList.md)\).|  
|[CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged](../Topic/CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged.md)|Chiamato dal framework quando il tipo globale è stato modificato.  \(Override [CMFCToolBarButton::OnGlobalFontsChanged](../Topic/CMFCToolBarButton::OnGlobalFontsChanged.md)\).|  
|[CMFCToolBarDateTimeCtrl::OnMove](../Topic/CMFCToolBarDateTimeCtrl::OnMove.md)|Chiamato dal framework quando la barra degli strumenti padre viene spostato.  \(Override [CMFCToolBarButton::OnMove](../Topic/CMFCToolBarButton::OnMove.md)\).|  
|[CMFCToolBarDateTimeCtrl::OnShow](../Topic/CMFCToolBarDateTimeCtrl::OnShow.md)|Chiamato dal framework quando il pulsante diventa visibile o invisibile.  \(Override [CMFCToolBarButton::OnShow](../Topic/CMFCToolBarButton::OnShow.md)\).|  
|`CMFCToolBarDateTimeCtrl::OnSize`|Chiamato dal framework quando la barra degli strumenti padre modifica le relative cause di dimensione o di posizione e di questa modifica il pulsante alle dimensioni di modifica.  \(Override [CMFCToolBarButton::OnSize](../Topic/CMFCToolBarButton::OnSize.md)\).|  
|[CMFCToolBarDateTimeCtrl::OnUpdateToolTip](../Topic/CMFCToolBarDateTimeCtrl::OnUpdateToolTip.md)|Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo di descrizione comando.  \(Override [CMFCToolBarButton::OnUpdateToolTip](../Topic/CMFCToolBarButton::OnUpdateToolTip.md)\).|  
|`CMFCToolBarDateTimeCtrl::Serialize`|Legge l'oggetto da un archivio o scritto in un archivio, \(override [CMFCToolBarButton::Serialize](../Topic/CMFCToolBarButton::Serialize.md)\).|  
|`CMFCToolBarDateTimeCtrl::SetStyle`|Imposta lo stile del pulsante della barra degli strumenti.  \(Override [CMFCToolBarButton::SetStyle](../Topic/CMFCToolBarButton::SetStyle.md)\).|  
|[CMFCToolBarDateTimeCtrl::SetTime](../Topic/CMFCToolBarDateTimeCtrl::SetTime.md)|Imposta l'ora e la data nel controllo di selezione di tempo.|  
|[CMFCToolBarDateTimeCtrl::SetTimeAll](../Topic/CMFCToolBarDateTimeCtrl::SetTimeAll.md)|Imposta l'ora e la data di tutte le istanze del controllo selezione di tempo con un ID di comando|  
  
## Note  
 Per un esempio di come utilizzare un controllo di selezione data e ora, vedere progetto di esempio ToolbarDateTimePicker.  Per informazioni su come aggiungere pulsanti alle barre degli strumenti, vedere [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarDateTimeCtrl](../../mfc/reference/cmfctoolbardatetimectrl-class.md)  
  
## Requisiti  
 **intestazione:** afxtoolbardatetimectrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)