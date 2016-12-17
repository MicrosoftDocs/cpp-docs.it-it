---
title: "CTreeCtrl Class | Microsoft Docs"
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
  - "CTreeCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTreeCtrl class"
  - "directory lists"
  - "file lists [C++]"
  - "tree view controls"
ms.assetid: 96e20031-6161-4143-8c12-8d1816c66d90
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTreeCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di controllo di visualizzazione ad albero comuni di Windows.  
  
## Sintassi  
  
```  
class CTreeCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTreeCtrl::CTreeCtrl](../Topic/CTreeCtrl::CTreeCtrl.md)|Costruisce un oggetto `CTreeCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTreeCtrl::Create](../Topic/CTreeCtrl::Create.md)|Crea un controllo di visualizzazione ad albero e lo collega a un oggetto `CTreeCtrl`.|  
|[CTreeCtrl::CreateDragImage](../Topic/CTreeCtrl::CreateDragImage.md)|Crea una bitmap di trascinamento verrà per l'elemento specificato nella visualizzazione struttura ad albero.|  
|[CTreeCtrl::CreateEx](../Topic/CTreeCtrl::CreateEx.md)|Crea un controllo struttura ad albero con gli stili estesi Windows specificati e lo collega a un oggetto `CTreeCtrl`.|  
|[CTreeCtrl::DeleteAllItems](../Topic/CTreeCtrl::DeleteAllItems.md)|Rimuove tutti gli elementi in un controllo di visualizzazione ad albero.|  
|[CTreeCtrl::DeleteItem](../Topic/CTreeCtrl::DeleteItem.md)|Rimuove un nuovo elemento in un controllo di visualizzazione ad albero.|  
|[CTreeCtrl::EditLabel](../Topic/CTreeCtrl::EditLabel.md)|Modifica di un elemento specificato della visualizzazione struttura ad albero sul posto.|  
|[CTreeCtrl::EndEditLabelNow](../Topic/CTreeCtrl::EndEditLabelNow.md)|Annulla l'operazione di modifica sull'etichetta di un elemento di visualizzazione struttura ad albero nel controllo di visualizzazione ad albero corrente.|  
|[CTreeCtrl::EnsureVisible](../Topic/CTreeCtrl::EnsureVisible.md)|Verifica che un elemento di visualizzazione struttura ad albero è visibile nel controllo di visualizzazione ad albero.|  
|[CTreeCtrl::Expand](../Topic/CTreeCtrl::Expand.md)|Espandere, o compresso, gli elementi figlio dell'elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetBkColor](../Topic/CTreeCtrl::GetBkColor.md)|Recupera il colore di sfondo corrente del controllo.|  
|[CTreeCtrl::GetCheck](../Topic/CTreeCtrl::GetCheck.md)|Recupera lo stato di selezione di un elemento del controllo struttura ad albero.|  
|[CTreeCtrl::GetChildItem](../Topic/CTreeCtrl::GetChildItem.md)|Recupera il figlio di un elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetCount](../Topic/CTreeCtrl::GetCount.md)|Recupera il numero di elementi albero associati a un controllo di visualizzazione ad albero.|  
|[CTreeCtrl::GetDropHilightItem](../Topic/CTreeCtrl::GetDropHilightItem.md)|Recupera il database di destinazione un'operazione di trascinamento.|  
|[CTreeCtrl::GetEditControl](../Topic/CTreeCtrl::GetEditControl.md)|Recupera l'handle del controllo di modifica utilizzato per modificare l'elemento specificato nella visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetExtendedStyle](../Topic/CTreeCtrl::GetExtendedStyle.md)|Recupera gli stili estesi che il controllo di visualizzazione ad albero corrente sta utilizzando.|  
|[CTreeCtrl::GetFirstVisibleItem](../Topic/CTreeCtrl::GetFirstVisibleItem.md)|Recupera il primo elemento visibile dell'elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetImageList](../Topic/CTreeCtrl::GetImageList.md)|Recupera l'handle dell'elenco immagini associato a un controllo di visualizzazione ad albero.|  
|[CTreeCtrl::GetIndent](../Topic/CTreeCtrl::GetIndent.md)|Recupera offset \(in pixel\) di un elemento di visualizzazione struttura ad albero dall'elemento padre.|  
|[CTreeCtrl::GetInsertMarkColor](../Topic/CTreeCtrl::GetInsertMarkColor.md)|Recupera il colore utilizzato per disegnare il segno di inserimento per la visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetItem](../Topic/CTreeCtrl::GetItem.md)|Recupera gli attributi di un elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetItemData](../Topic/CTreeCtrl::GetItemData.md)|Restituisce il valore specifico dell'applicazione a 32 bit associato a un elemento.|  
|[CTreeCtrl::GetItemExpandedImageIndex](../Topic/CTreeCtrl::GetItemExpandedImageIndex.md)|Recupera l'indice dell'immagine da visualizzare quando l'elemento specificato del controllo di visualizzazione ad albero corrente è espanso.|  
|[CTreeCtrl::GetItemHeight](../Topic/CTreeCtrl::GetItemHeight.md)|Recupera l'altezza corrente degli elementi di visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetItemImage](../Topic/CTreeCtrl::GetItemImage.md)|Recupera le immagini associate a un elemento.|  
|[CTreeCtrl::GetItemPartRect](../Topic/CTreeCtrl::GetItemPartRect.md)|Recupera il rettangolo di delimitazione di una parte specifica di un elemento specificato nel controllo di visualizzazione ad albero corrente.|  
|[CTreeCtrl::GetItemRect](../Topic/CTreeCtrl::GetItemRect.md)|Recupera il rettangolo di delimitazione di un elemento di visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetItemState](../Topic/CTreeCtrl::GetItemState.md)|Restituisce lo stato di un elemento.|  
|[CTreeCtrl::GetItemStateEx](../Topic/CTreeCtrl::GetItemStateEx.md)|Recupera lo stato esteso dell'elemento specificato nel controllo di visualizzazione ad albero corrente.|  
|[CTreeCtrl::GetItemText](../Topic/CTreeCtrl::GetItemText.md)|Restituisce il testo di un elemento.|  
|[CTreeCtrl::GetLastVisibleItem](../Topic/CTreeCtrl::GetLastVisibleItem.md)|Recupera l'ultimo elemento espanso nel controllo di visualizzazione ad albero corrente.|  
|[CTreeCtrl::GetLineColor](../Topic/CTreeCtrl::GetLineColor.md)|Recupera il colore della riga corrente per il controllo di visualizzazione ad albero.|  
|[CTreeCtrl::GetNextItem](../Topic/CTreeCtrl::GetNextItem.md)|Recupera l'elemento successivo della visualizzazione struttura ad albero che corrisponde a una relazione specificata.|  
|[CTreeCtrl::GetNextSiblingItem](../Topic/CTreeCtrl::GetNextSiblingItem.md)|Recupera l'elemento di pari livello successivo dell'elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetNextVisibleItem](../Topic/CTreeCtrl::GetNextVisibleItem.md)|Recupera l'elemento visibileelemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetParentItem](../Topic/CTreeCtrl::GetParentItem.md)|Recupera il padre dell'elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetPrevSiblingItem](../Topic/CTreeCtrl::GetPrevSiblingItem.md)|Recupera l'elemento di pari livello precedente dell'elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetPrevVisibleItem](../Topic/CTreeCtrl::GetPrevVisibleItem.md)|Recupera l'elemento visibile precedente dell'elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetRootItem](../Topic/CTreeCtrl::GetRootItem.md)|Recupera la radice dell'elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetScrollTime](../Topic/CTreeCtrl::GetScrollTime.md)|Recupera il tempo massimo scroll per il controllo di visualizzazione ad albero.|  
|[CTreeCtrl::GetSelectedCount](../Topic/CTreeCtrl::GetSelectedCount.md)|Recupera il numero di elementi selezionati nel controllo di visualizzazione ad albero corrente.|  
|[CTreeCtrl::GetSelectedItem](../Topic/CTreeCtrl::GetSelectedItem.md)|Recupera l'elemento attualmente selezionato nella visualizzazione struttura ad albero.|  
|[CTreeCtrl::GetTextColor](../Topic/CTreeCtrl::GetTextColor.md)|Recupera il colore del testo del controllo corrente.|  
|[CTreeCtrl::GetToolTips](../Topic/CTreeCtrl::GetToolTips.md)|Recupera l'handle per il controllo figlio di descrizione comando utilizzato da un controllo di visualizzazione ad albero.|  
|[CTreeCtrl::GetVisibleCount](../Topic/CTreeCtrl::GetVisibleCount.md)|Recupera il numero di elementi visibili albero associati a un controllo di visualizzazione ad albero.|  
|[CTreeCtrl::HitTest](../Topic/CTreeCtrl::HitTest.md)|Restituisce la posizione corrente del cursore correlato all'oggetto `CTreeCtrl`.|  
|[CTreeCtrl::InsertItem](../Topic/CTreeCtrl::InsertItem.md)|Inserisce un nuovo elemento in un controllo di visualizzazione ad albero.|  
|[CTreeCtrl::ItemHasChildren](../Topic/CTreeCtrl::ItemHasChildren.md)|Restituisce diverso da zero se l'elemento specificato ha voci figlio.|  
|[CTreeCtrl::MapAccIdToItem](../Topic/CTreeCtrl::MapAccIdToItem.md)|Esegue il mapping l'identificatore specificato di accessibilità di un handle per un elemento di visualizzazione struttura ad albero nel controllo di visualizzazione ad albero corrente.|  
|[CTreeCtrl::MapItemToAccID](../Topic/CTreeCtrl::MapItemToAccID.md)|Esegue il mapping di un handle specificate a un elemento di visualizzazione struttura ad albero nel controllo di visualizzazione ad albero corrente a un identificatore di accessibilità.|  
|[CTreeCtrl::Select](../Topic/CTreeCtrl::Select.md)|Seleziona, scorre nella visualizzazione, o ridisegna un elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::SelectDropTarget](../Topic/CTreeCtrl::SelectDropTarget.md)|Ridisegna l'elemento albero come destinazione dell'operazione di trascinamento.|  
|[CTreeCtrl::SelectItem](../Topic/CTreeCtrl::SelectItem.md)|Selezionare un elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::SelectSetFirstVisible](../Topic/CTreeCtrl::SelectSetFirstVisible.md)|Selezionare un elemento specificato della visualizzazione struttura ad albero come primo elemento visibile.|  
|[CTreeCtrl::SetAutoscrollInfo](../Topic/CTreeCtrl::SetAutoscrollInfo.md)|Imposta la frequenza di autoscroll del controllo di visualizzazione ad albero corrente.|  
|[CTreeCtrl::SetBkColor](../Topic/CTreeCtrl::SetBkColor.md)|Imposta il colore di sfondo del controllo.|  
|[CTreeCtrl::SetCheck](../Topic/CTreeCtrl::SetCheck.md)|Imposta lo stato di selezione di un elemento del controllo struttura ad albero.|  
|[CTreeCtrl::SetExtendedStyle](../Topic/CTreeCtrl::SetExtendedStyle.md)|Imposta stili estesi per il controllo di visualizzazione ad albero corrente.|  
|[CTreeCtrl::SetImageList](../Topic/CTreeCtrl::SetImageList.md)|Imposta gli handle dell'elenco immagini associato a un controllo di visualizzazione ad albero.|  
|[CTreeCtrl::SetIndent](../Topic/CTreeCtrl::SetIndent.md)|Imposta offset \(in pixel\) di un elemento di visualizzazione struttura ad albero dall'elemento padre.|  
|[CTreeCtrl::SetInsertMark](../Topic/CTreeCtrl::SetInsertMark.md)|Impostare il segno di inserimento in un controllo di visualizzazione ad albero.|  
|[CTreeCtrl::SetInsertMarkColor](../Topic/CTreeCtrl::SetInsertMarkColor.md)|Imposta il colore utilizzato per disegnare il segno di inserimento per la visualizzazione struttura ad albero.|  
|[CTreeCtrl::SetItem](../Topic/CTreeCtrl::SetItem.md)|Imposta gli attributi di un elemento specificato della visualizzazione struttura ad albero.|  
|[CTreeCtrl::SetItemData](../Topic/CTreeCtrl::SetItemData.md)|Imposta il valore specifico dell'applicazione a 32 bit associato a un elemento.|  
|[CTreeCtrl::SetItemExpandedImageIndex](../Topic/CTreeCtrl::SetItemExpandedImageIndex.md)|Imposta il valore dell'immagine da visualizzare quando l'elemento specificato del controllo di visualizzazione ad albero corrente è espanso.|  
|[CTreeCtrl::SetItemHeight](../Topic/CTreeCtrl::SetItemHeight.md)|L'altezza degli elementi della visualizzazione struttura ad albero.|  
|[CTreeCtrl::SetItemImage](../Topic/CTreeCtrl::SetItemImage.md)|Associa le immagini a un elemento.|  
|[CTreeCtrl::SetItemState](../Topic/CTreeCtrl::SetItemState.md)|Imposta lo stato di un elemento.|  
|[CTreeCtrl::SetItemStateEx](../Topic/CTreeCtrl::SetItemStateEx.md)|Imposta lo stato esteso dell'elemento specificato nel controllo di visualizzazione ad albero corrente.|  
|[CTreeCtrl::SetItemText](../Topic/CTreeCtrl::SetItemText.md)|Imposta il testo di un elemento.|  
|[CTreeCtrl::SetLineColor](../Topic/CTreeCtrl::SetLineColor.md)|Imposta il colore della riga corrente per il controllo di visualizzazione ad albero.|  
|[CTreeCtrl::SetScrollTime](../Topic/CTreeCtrl::SetScrollTime.md)|Imposta il tempo massimo scroll per il controllo di visualizzazione ad albero.|  
|[CTreeCtrl::SetTextColor](../Topic/CTreeCtrl::SetTextColor.md)|Imposta il colore del testo del controllo.|  
|[CTreeCtrl::SetToolTips](../Topic/CTreeCtrl::SetToolTips.md)|Imposta il controllo figlio della descrizione comando di un controllo di visualizzazione ad albero.|  
|[CTreeCtrl::ShowInfoTip](../Topic/CTreeCtrl::ShowInfoTip.md)|Visualizzare il infotip per l'elemento specificato nel controllo di visualizzazione ad albero corrente.|  
|[CTreeCtrl::SortChildren](../Topic/CTreeCtrl::SortChildren.md)|Ordina gli elementi figlio di un elemento padre specificato.|  
|[CTreeCtrl::SortChildrenCB](../Topic/CTreeCtrl::SortChildrenCB.md)|Ordina gli elementi figlio di un elemento padre specificato utilizzando una funzione definita dall'applicazione di ordinamento.|  
  
## Note  
 "Un controllo di visualizzazione ad albero" è una finestra che visualizza un elenco gerarchico di elementi, quali le intestazioni in un documento, le voci di un indice, o i file e le directory su un disco.  Ogni elemento è costituito da un'etichetta e di un'immagine bitmap a bit facoltativa e ogni elemento può avere un elenco di elementi secondari associati.  Facendo clic su un elemento, l'utente può espandere e comprimere l'elenco collegato di elementi secondari.  
  
 Questo controllo e la classe `CTreeCtrl` \) è disponibile solo per i programmi in esecuzione in versioni 4 di Windows NT e Windows 98 e successive.  
  
 Per ulteriori informazioni su l `CTreeCtrl`, vedere:  
  
-   [Controlli](../../mfc/controls-mfc.md)  
  
-   [Utilizzando CTreeCtrl](../../mfc/using-ctreectrl.md)  
  
-   [Riferimento al controllo di visualizzazione ad albero](http://msdn.microsoft.com/library/windows/desktop/bb759988) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
-   Articolo della Knowledge Base Q222905: HOWTO: Visualizzare un menu di scelta rapida per CTreeCtrl  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CTreeCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [MFC campione CMNCTRL1](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CImageList Class](../../mfc/reference/cimagelist-class.md)