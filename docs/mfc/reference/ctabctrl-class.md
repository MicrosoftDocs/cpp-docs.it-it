---
title: "CTabCtrl Class | Microsoft Docs"
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
  - "CTabCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTabCtrl class"
  - "CTabCtrl class, controlli comuni"
  - "controlli delle schede"
ms.assetid: 42e4aff6-46ae-4b2c-beaa-d1dce8d82138
caps.latest.revision: 21
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTabCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di controllo tab comune di Windows.  
  
## Sintassi  
  
```  
class CTabCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabCtrl::CTabCtrl](../Topic/CTabCtrl::CTabCtrl.md)|Costruisce un oggetto `CTabCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabCtrl::AdjustRect](../Topic/CTabCtrl::AdjustRect.md)|Calcola l'area di visualizzazione di un controllo Struttura a schede fornito un rettangolo della finestra, o calcola il rettangolo della finestra che corrisponde a un'area di visualizzazione specificata.|  
|[CTabCtrl::Create](../Topic/CTabCtrl::Create.md)|Crea un controllo Struttura a schede e lo associa a un'istanza di un oggetto `CTabCtrl`.|  
|[CTabCtrl::CreateEx](../Topic/CTabCtrl::CreateEx.md)|Crea un controllo Struttura a schede con gli stili estesi Windows specificati e lo associa a un'istanza di un oggetto `CTabCtrl`.|  
|[CTabCtrl::DeleteAllItems](../Topic/CTabCtrl::DeleteAllItems.md)|Rimuove tutti gli elementi da un controllo tab.|  
|[CTabCtrl::DeleteItem](../Topic/CTabCtrl::DeleteItem.md)|Rimuove un elemento da un controllo scheda.|  
|[CTabCtrl::DeselectAll](../Topic/CTabCtrl::DeselectAll.md)|Reimposta gli elementi in un controllo scheda, deselezionando qualsiasi oggetto che siano stati rilevati.|  
|[CTabCtrl::DrawItem](../Topic/CTabCtrl::DrawItem.md)|Estrae un elemento specificato di un controllo scheda.|  
|[CTabCtrl::GetCurFocus](../Topic/CTabCtrl::GetCurFocus.md)|Recupera la scheda con lo stato attivo corrente di un controllo scheda.|  
|[CTabCtrl::GetCurSel](../Topic/CTabCtrl::GetCurSel.md)|Determina la scheda selezionata in un controllo scheda.|  
|[CTabCtrl::GetExtendedStyle](../Topic/CTabCtrl::GetExtendedStyle.md)|Recupera gli stili estesi che sono attualmente utilizzate per il controllo Struttura a schede.|  
|[CTabCtrl::GetImageList](../Topic/CTabCtrl::GetImageList.md)|Recupera l'elenco di immagini associato a un controllo scheda.|  
|[CTabCtrl::GetItem](../Topic/CTabCtrl::GetItem.md)|Recupera informazioni su una scheda in un controllo scheda.|  
|[CTabCtrl::GetItemCount](../Topic/CTabCtrl::GetItemCount.md)|Recupera il numero di schede nel controllo Struttura a schede.|  
|[CTabCtrl::GetItemRect](../Topic/CTabCtrl::GetItemRect.md)|Recupera il rettangolo di delimitazione di una scheda in un controllo scheda.|  
|[CTabCtrl::GetItemState](../Topic/CTabCtrl::GetItemState.md)|Recupera lo stato dell'elemento visualizzato di controllo tab.|  
|[CTabCtrl::GetRowCount](../Topic/CTabCtrl::GetRowCount.md)|Recupera il numero corrente di righe di schede in un controllo scheda.|  
|[CTabCtrl::GetToolTips](../Topic/CTabCtrl::GetToolTips.md)|Recupera l'handle del controllo tooltip associato a un controllo scheda.|  
|[CTabCtrl::HighlightItem](../Topic/CTabCtrl::HighlightItem.md)|Imposta lo stato dell'evidenziazione di un elemento della scheda.|  
|[CTabCtrl::HitTest](../Topic/CTabCtrl::HitTest.md)|Determina la scheda, se presente, è in un percorso specificato dello schermo.|  
|[CTabCtrl::InsertItem](../Topic/CTabCtrl::InsertItem.md)|Inserisce una nuova scheda in un controllo scheda.|  
|[CTabCtrl::RemoveImage](../Topic/CTabCtrl::RemoveImage.md)|Rimuove un'immagine dall'elenco immagini di un controllo scheda.|  
|[CTabCtrl::SetCurFocus](../Topic/CTabCtrl::SetCurFocus.md)|Imposta lo stato attivo a una scheda specificata in un controllo scheda.|  
|[CTabCtrl::SetCurSel](../Topic/CTabCtrl::SetCurSel.md)|Selezionare una scheda in un controllo scheda.|  
|[CTabCtrl::SetExtendedStyle](../Topic/CTabCtrl::SetExtendedStyle.md)|Imposta stili estesi per un controllo scheda.|  
|[CTabCtrl::SetImageList](../Topic/CTabCtrl::SetImageList.md)|Assegna un elenco immagini a un controllo tab.|  
|[CTabCtrl::SetItem](../Topic/CTabCtrl::SetItem.md)|Imposta alcuni o tutti gli attributi di una scheda.|  
|[CTabCtrl::SetItemExtra](../Topic/CTabCtrl::SetItemExtra.md)|Imposta il numero di byte per scheda riservata ai dati definiti dall'applicazione in un controllo scheda.|  
|[CTabCtrl::SetItemSize](../Topic/CTabCtrl::SetItemSize.md)|Imposta la larghezza e l'altezza di un elemento.|  
|[CTabCtrl::SetItemState](../Topic/CTabCtrl::SetItemState.md)|Imposta lo stato dell'elemento visualizzato di controllo tab.|  
|[CTabCtrl::SetMinTabWidth](../Topic/CTabCtrl::SetMinTabWidth.md)|Imposta la larghezza minima di elementi in un controllo tab.|  
|[CTabCtrl::SetPadding](../Topic/CTabCtrl::SetPadding.md)|Imposta la quantità di spazio \(riempimento\) attorno a icona e all'etichetta di ogni scheda in un controllo scheda.|  
|[CTabCtrl::SetToolTips](../Topic/CTabCtrl::SetToolTips.md)|Assegna un controllo tooltip a un controllo tab.|  
  
## Note  
 "Un controllo Struttura a schede" è analogo ai divisori di un blocco appunti o alle etichette in un file cabinet di.  Utilizzando un controllo scheda, un'applicazione può definire più pagine per la stessa area di una finestra o finestra di dialogo.  Ogni pagina è costituito da un set di informazioni o gruppo di controlli che viene visualizzato quando l'utente seleziona la scheda corrispondente.  Un tipo speciale di controllo tab visualizzare schede simili ai pulsanti.  Fare clic sul pulsante deve eseguire immediatamente un comando anziché visualizzare una pagina.  
  
 Questo controllo e la classe `CTabCtrl` \) è disponibile solo per i programmi in esecuzione in versioni 3,51 di Windows NT e Windows 95\/98 e successive.  
  
 Per ulteriori informazioni su l `CTabCtrl`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CTabCtrl](../../mfc/using-ctabctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CTabCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CHeaderCtrl Class](../../mfc/reference/cheaderctrl-class.md)   
 [CListCtrl Class](../../mfc/reference/clistctrl-class.md)