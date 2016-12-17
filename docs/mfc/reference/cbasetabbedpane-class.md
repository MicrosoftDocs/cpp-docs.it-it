---
title: "Classe CBaseTabbedPane | Microsoft Docs"
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
  - "CBaseTabbedPane"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBaseTabbedPane (classe)"
ms.assetid: f22c0080-5b29-4a0a-8f74-8f0a4cd2dbcf
caps.latest.revision: 26
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CBaseTabbedPane
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Estende la funzionalità di [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) per supportare la creazione di finestre a schede.  
  
## Sintassi  
  
```  
class CBaseTabbedPane : public CDockablePane  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CBaseTabbedPane::CBaseTabbedPane`|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseTabbedPane::AddTab](../Topic/CBaseTabbedPane::AddTab.md)|Aggiunge una nuova scheda nel riquadro a schede.|  
|[CBaseTabbedPane::AllowDestroyEmptyTabbedPane](../Topic/CBaseTabbedPane::AllowDestroyEmptyTabbedPane.md)|Specifica se il riquadro a schede vuoto può eliminato.|  
|[CBaseTabbedPane::ApplyRestoredTabInfo](../Topic/CBaseTabbedPane::ApplyRestoredTabInfo.md)|Applica le impostazioni di tabulazione, caricati dal Registro di sistema, un riquadro a schede.|  
|[CBaseTabbedPane::CanFloat](../Topic/CBaseTabbedPane::CanFloat.md)|Determina se il riquadro è mobile.  \(Override [CBasePane::CanFloat](../Topic/CBasePane::CanFloat.md)\).|  
|[CBaseTabbedPane::CanSetCaptionTextToTabName](../Topic/CBaseTabbedPane::CanSetCaptionTextToTabName.md)|Determina se la barra del titolo del riquadro a schede deve visualizzare lo stesso testo della scheda attiva.|  
|[CBaseTabbedPane::ConvertToTabbedDocument](../Topic/CBaseTabbedPane::ConvertToTabbedDocument.md)|\(Override [CDockablePane::ConvertToTabbedDocument](../Topic/CDockablePane::ConvertToTabbedDocument.md)\).|  
|[CBaseTabbedPane::DetachPane](../Topic/CBaseTabbedPane::DetachPane.md)|Converte una o più riquadri ancorabili a documenti a schede MDI.|  
|[CBaseTabbedPane::EnableSetCaptionTextToTabName](../Topic/CBaseTabbedPane::EnableSetCaptionTextToTabName.md)|Abilita o disabilita la capacità del riquadro a schede di sincronizzare il testo della didascalia con il testo dell'etichetta nella scheda attiva.|  
|[CBaseTabbedPane::FillDefaultTabsOrderArray](../Topic/CBaseTabbedPane::FillDefaultTabsOrderArray.md)|Ripristina l'ordine di tabulazione interno in uno stato predefinito.|  
|[CBaseTabbedPane::FindBarByTabNumber](../Topic/CBaseTabbedPane::FindBarByTabNumber.md)|Restituisce un riquadro che si trova in una scheda alla scheda è identificata da un indice in base zero della scheda.|  
|||  
|[CBaseTabbedPane::FindPaneByID](../Topic/CBaseTabbedPane::FindPaneByID.md)|Restituisce un riquadro identificato dall'ID del riquadro|  
|[CBaseTabbedPane::FloatTab](../Topic/CBaseTabbedPane::FloatTab.md)|Esegue e un riquadro, ma solo se il riquadro attualmente si trova in una scheda staccabile.|  
|[CBaseTabbedPane::GetDefaultTabsOrder](../Topic/CBaseTabbedPane::GetDefaultTabsOrder.md)|Restituisce l'ordine predefinito delle schede nel riquadro.|  
|[CBaseTabbedPane::GetFirstVisibleTab](../Topic/CBaseTabbedPane::GetFirstVisibleTab.md)|Recupera un puntatore alla scheda nella prima visualizzazione.|  
|[CBaseTabbedPane::GetMinSize](../Topic/CBaseTabbedPane::GetMinSize.md)|Recupera il minimo dimensione consentita per il riquadro.  \(Override [CPane::GetMinSize](../Topic/CPane::GetMinSize.md)\).|  
|[CBaseTabbedPane::GetPaneIcon](../Topic/CBaseTabbedPane::GetPaneIcon.md)|Restituisce l'handle l'icona del riquadro.  \(Override [CBasePane::GetPaneIcon](../Topic/CBasePane::GetPaneIcon.md)\).|  
|[CBaseTabbedPane::GetPaneList](../Topic/CBaseTabbedPane::GetPaneList.md)|Restituisce un elenco dei riquadri contenuti nel riquadro a schede.|  
|[CBaseTabbedPane::GetTabArea](../Topic/CBaseTabbedPane::GetTabArea.md)|Restituisce un rettangolo di delimitazione delle aree della scheda superiore e inferiore dell'elevato.|  
|[CBaseTabbedPane::GetTabsNum](../Topic/CBaseTabbedPane::GetTabsNum.md)|Restituisce il conteggio delle schede in una finestra della scheda.|  
|[CBaseTabbedPane::GetUnderlyingWindow](../Topic/CBaseTabbedPane::GetUnderlyingWindow.md)|Ottiene la finestra \(cui è stato eseguito il wrapping\) sottostante della scheda.|  
|[CBaseTabbedPane::GetVisibleTabsNum](../Topic/CBaseTabbedPane::GetVisibleTabsNum.md)|Restituisce il conteggio delle schede video.|  
|[CBaseTabbedPane::HasAutoHideMode](../Topic/CBaseTabbedPane::HasAutoHideMode.md)|Determina se il riquadro a schede può essere modificato in modalità nascondi automaticamente.|  
|[CBaseTabbedPane::IsHideSingleTab](../Topic/CBaseTabbedPane::IsHideSingleTab.md)|Determina se il riquadro a schede viene nascosto se solo una scheda.|  
|`CBaseTabbedPane::LoadSiblingPaneIDs`|Utilizzato internamente durante la serializzazione.|  
|[CBaseTabbedPane::RecalcLayout](../Topic/CBaseTabbedPane::RecalcLayout.md)|Ricalcola le informazioni sul layout per il riquadro.  \(Override [CPane::RecalcLayout](../Topic/CPane::RecalcLayout.md)\).|  
|[CBaseTabbedPane::RemovePane](../Topic/CBaseTabbedPane::RemovePane.md)|Rimuove un riquadro dal riquadro a schede.|  
|`CBaseTabbedPane::SaveSiblingBarIDs`|Utilizzato internamente durante la serializzazione.|  
|`CBaseTabbedPane::Serialize`|\(Override [CDockablePane::Serialize](http://msdn.microsoft.com/it-it/09787e59-e446-4e76-894b-206d303dcfd6)\).|  
|`CBaseTabbedPane::SerializeTabWindow`|Utilizzato internamente durante la serializzazione.|  
|[CBaseTabbedPane::SetAutoDestroy](../Topic/CBaseTabbedPane::SetAutoDestroy.md)|Determina se la barra di controllo a schede viene distrutto automaticamente.|  
|[CBaseTabbedPane::SetAutoHideMode](../Topic/CBaseTabbedPane::SetAutoHideMode.md)|Scorre il riquadro ancorato tra la modalità nascondi automaticamente e viene visualizzato.  \(Override [CDockablePane::SetAutoHideMode](../Topic/CDockablePane::SetAutoHideMode.md)\).|  
|[CBaseTabbedPane::ShowTab](../Topic/CBaseTabbedPane::ShowTab.md)|Mostra o nasconde una scheda.|  
  
## Note  
 Questa classe è una classe astratta e non è possibile creare un'istanza.  Implementa i servizi comuni a tutti i tipi di riquadri a schede.  
  
 Attualmente, la libreria include due classi a schede derivate dal riquadro: [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md) e [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).  
  
 Un oggetto di `CBaseTabbedPane` esegue il wrapping di un puntatore a un oggetto di [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md).  [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md) diventa quindi una finestra figlio del riquadro a schede.  
  
 Per ulteriori informazioni sulla creazione di riquadri a schede, vedere [CDockablePane Class](../../mfc/reference/cdockablepane-class.md), [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md)e [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 [CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)  
  
## Requisiti  
 **Intestazione:** afxBaseTabbedPane.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)