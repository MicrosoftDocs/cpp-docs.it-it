---
title: "CListCtrl Class | Microsoft Docs"
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
  - "CListCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CListCtrl (classe)"
  - "list view controls"
  - "list view controls, CListCtrl (classe)"
  - "LVS_ICON"
  - "LVS_LIST"
  - "LVS_REPORT"
  - "LVS_SMALLICON"
  - "Windows common controls [C++], CListCtrl"
ms.assetid: fe08a1ca-4b05-4ff7-a12a-ee4c765a2197
caps.latest.revision: 23
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CListCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula la funzionalità "di un controllo visualizzazione elenco," che visualizza una raccolta di elementi ognuna costituito da un'icona \(da un elenco immagini\) e di un'etichetta.  
  
## Sintassi  
  
```  
class CListCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListCtrl::CListCtrl](../Topic/CListCtrl::CListCtrl.md)|Costruisce un oggetto `CListCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListCtrl::ApproximateViewRect](../Topic/CListCtrl::ApproximateViewRect.md)|Determina la larghezza e l'altezza richieste per visualizzare gli elementi di un controllo visualizzazione elenco.|  
|[CListCtrl::Arrange](../Topic/CListCtrl::Arrange.md)|Allineare gli elementi in una griglia.|  
|[CListCtrl::CancelEditLabel](../Topic/CListCtrl::CancelEditLabel.md)|Annulla l'operazione di modifica del testo elemento.|  
|[CListCtrl::Create](../Topic/CListCtrl::Create.md)|Crea un controllo elenco e lo collega a un oggetto `CListCtrl`.|  
|[CListCtrl::CreateDragImage](../Topic/CListCtrl::CreateDragImage.md)|Crea un elenco di immagine di trascinamento di un elemento specificato.|  
|[CListCtrl::CreateEx](../Topic/CListCtrl::CreateEx.md)|Crea un controllo elenco con gli stili estesi Windows specificati e lo collega a un oggetto `CListCtrl`.|  
|[CListCtrl::DeleteAllItems](../Topic/CListCtrl::DeleteAllItems.md)|Rimuove tutti gli elementi dal controllo.|  
|[CListCtrl::DeleteColumn](../Topic/CListCtrl::DeleteColumn.md)|Elimina una colonna del controllo visualizzazione elenco.|  
|[CListCtrl::DeleteItem](../Topic/CListCtrl::DeleteItem.md)|Rimuove un elemento dal controllo.|  
|[CListCtrl::DrawItem](../Topic/CListCtrl::DrawItem.md)|Chiamato quando un aspetto visivo di controllo del disegno personalizzato.|  
|[CListCtrl::EditLabel](../Topic/CListCtrl::EditLabel.md)|Modifica sul posto di iniziare il testo di un elemento.|  
|[CListCtrl::EnableGroupView](../Topic/CListCtrl::EnableGroupView.md)|Abilita o disabilita se gli elementi in una visualizzazione del controllo visualizzazione elenco come gruppo.|  
|[CListCtrl::EnsureVisible](../Topic/CListCtrl::EnsureVisible.md)|Verifica che un elemento visibile.|  
|[CListCtrl::FindItem](../Topic/CListCtrl::FindItem.md)|Cerca una voce della visualizzazione elenco che specifica le caratteristiche.|  
|[CListCtrl::GetBkColor](../Topic/CListCtrl::GetBkColor.md)|Recupera il colore di sfondo di un controllo visualizzazione elenco.|  
|[CListCtrl::GetBkImage](../Topic/CListCtrl::GetBkImage.md)|Recupera l'immagine di sfondo corrente di un controllo visualizzazione elenco.|  
|[CListCtrl::GetCallbackMask](../Topic/CListCtrl::GetCallbackMask.md)|Recupera la maschera di callback per un controllo visualizzazione elenco.|  
|[CListCtrl::GetCheck](../Topic/CListCtrl::GetCheck.md)|Recupera lo stato di visualizzazione corrente dell'immagine di stato associato a un elemento.|  
|[CListCtrl::GetColumn](../Topic/CListCtrl::GetColumn.md)|Recupera gli attributi di una colonna del controllo.|  
|[CListCtrl::GetColumnOrderArray](../Topic/CListCtrl::GetColumnOrderArray.md)|Recupera l'ordine delle colonne \(da sinistra a destra\) di un controllo visualizzazione elenco.|  
|[CListCtrl::GetColumnWidth](../Topic/CListCtrl::GetColumnWidth.md)|Recupera la larghezza di una colonna nella visualizzazione rapporti o la visualizzazione elenco.|  
|[CListCtrl::GetCountPerPage](../Topic/CListCtrl::GetCountPerPage.md)|Calcola il numero di elementi adattabili verticalmente in un controllo visualizzazione elenco.|  
|[CListCtrl::GetEditControl](../Topic/CListCtrl::GetEditControl.md)|Recupera l'handle del controllo di modifica utilizzato per modificare il testo di un elemento.|  
|[CListCtrl::GetEmptyText](../Topic/CListCtrl::GetEmptyText.md)|Recuperare la stringa da visualizzare se il controllo elenco corrente è vuoto.|  
|[CListCtrl::GetExtendedStyle](../Topic/CListCtrl::GetExtendedStyle.md)|Recupera gli stili estesi correnti di un controllo visualizzazione elenco.|  
|[CListCtrl::GetFirstSelectedItemPosition](../Topic/CListCtrl::GetFirstSelectedItemPosition.md)|Recupera la posizione della prima voce della visualizzazione elenco selezionata in un controllo visualizzazione elenco.|  
|[CListCtrl::GetFocusedGroup](../Topic/CListCtrl::GetFocusedGroup.md)|Recupera il gruppo con lo stato attivo nel controllo elenco corrente.|  
|[CListCtrl::GetGroupCount](../Topic/CListCtrl::GetGroupCount.md)|Recupera il numero dei gruppi nel controllo elenco corrente.|  
|[CListCtrl::GetGroupInfo](../Topic/CListCtrl::GetGroupInfo.md)|Ottiene le informazioni relative a un gruppo specifico del controllo visualizzazione elenco.|  
|[CListCtrl::GetGroupInfoByIndex](../Topic/CListCtrl::GetGroupInfoByIndex.md)|Recupera informazioni su un gruppo specificato nel controllo elenco corrente.|  
|[CListCtrl::GetGroupMetrics](../Topic/CListCtrl::GetGroupMetrics.md)|Recupera la metrica di un gruppo.|  
|[CListCtrl::GetGroupRect](../Topic/CListCtrl::GetGroupRect.md)|Recupera il rettangolo di delimitazione di un gruppo specificato nel controllo elenco corrente.|  
|[CListCtrl::GetGroupState](../Topic/CListCtrl::GetGroupState.md)|Recupera lo stato di un gruppo specificato nel controllo elenco corrente.|  
|[CListCtrl::GetHeaderCtrl](../Topic/CListCtrl::GetHeaderCtrl.md)|Recupera il controllo intestazione di un controllo visualizzazione elenco.|  
|[CListCtrl::GetHotCursor](../Topic/CListCtrl::GetHotCursor.md)|Recupera il cursore utilizzato quando il hot track è abilitato per un controllo visualizzazione elenco.|  
|[CListCtrl::GetHotItem](../Topic/CListCtrl::GetHotItem.md)|Recupera attualmente la voce della visualizzazione elenco sotto il cursore.|  
|[CListCtrl::GetHoverTime](../Topic/CListCtrl::GetHoverTime.md)|Recupera il punto corrente di permanenza di un controllo visualizzazione elenco.|  
|[CListCtrl::GetImageList](../Topic/CListCtrl::GetImageList.md)|Recupera l'handle di un elenco immagini utilizzato per disegnare le voci della visualizzazione elenco.|  
|[CListCtrl::GetInsertMark](../Topic/CListCtrl::GetInsertMark.md)|Recupera la posizione corrente del segno di inserimento.|  
|[CListCtrl::GetInsertMarkColor](../Topic/CListCtrl::GetInsertMarkColor.md)|Recupera il colore corrente del segno di inserimento.|  
|[CListCtrl::GetInsertMarkRect](../Topic/CListCtrl::GetInsertMarkRect.md)|Recupera il rettangolo che limita il punto di inserimento.|  
|[CListCtrl::GetItem](../Topic/CListCtrl::GetItem.md)|Recupera gli attributi di una voce della visualizzazione elenco.|  
|[CListCtrl::GetItemCount](../Topic/CListCtrl::GetItemCount.md)|Recupera il numero di elementi in un controllo visualizzazione elenco.|  
|[CListCtrl::GetItemData](../Topic/CListCtrl::GetItemData.md)|Recupera il valore specifico dell'applicazione associato a un elemento.|  
|[CListCtrl::GetItemIndexRect](../Topic/CListCtrl::GetItemIndexRect.md)|Recupera il rettangolo di delimitazione di tutto o parte di un elemento secondario nel controllo elenco corrente.|  
|[CListCtrl::GetItemPosition](../Topic/CListCtrl::GetItemPosition.md)|Recupera il percorso di una voce della visualizzazione elenco.|  
|[CListCtrl::GetItemRect](../Topic/CListCtrl::GetItemRect.md)|Recupera il rettangolo di delimitazione di un elemento.|  
|[CListCtrl::GetItemSpacing](../Topic/CListCtrl::GetItemSpacing.md)|Calcola la spaziatura tra gli elementi nel controllo elenco corrente.|  
|[CListCtrl::GetItemState](../Topic/CListCtrl::GetItemState.md)|Recupera lo stato di una voce della visualizzazione elenco.|  
|[CListCtrl::GetItemText](../Topic/CListCtrl::GetItemText.md)|Recupera il testo di una voce della visualizzazione elenco o di un elemento secondario.|  
|[CListCtrl::GetNextItem](../Topic/CListCtrl::GetNextItem.md)|Cerca una voce della visualizzazione elenco con le proprietà specificate e con la relazione specificata a un elemento specificato.|  
|[CListCtrl::GetNextItemIndex](../Topic/CListCtrl::GetNextItemIndex.md)|Recupera l'indice dell'elemento nel controllo elenco corrente con un set specificato di proprietà.|  
|[CListCtrl::GetNextSelectedItem](../Topic/CListCtrl::GetNextSelectedItem.md)|Recupera l'indice di una posizione della voce della visualizzazione elenco e la posizione della voce della visualizzazione elenco selezionare seguente per l'iterazione.|  
|[CListCtrl::GetNumberOfWorkAreas](../Topic/CListCtrl::GetNumberOfWorkAreas.md)|Recupera il numero corrente delle aree di lavoro per un controllo visualizzazione elenco.|  
|[CListCtrl::GetOrigin](../Topic/CListCtrl::GetOrigin.md)|Recupera l'origine di visualizzazione corrente per un controllo visualizzazione elenco.|  
|[CListCtrl::GetOutlineColor](../Topic/CListCtrl::GetOutlineColor.md)|Recupera il colore del bordo di un controllo visualizzazione elenco.|  
|[CListCtrl::GetSelectedColumn](../Topic/CListCtrl::GetSelectedColumn.md)|Recupera l'indice della colonna selezionata nel controllo elenco.|  
|[CListCtrl::GetSelectedCount](../Topic/CListCtrl::GetSelectedCount.md)|Recupera il numero di elementi selezionati nel controllo elenco.|  
|[CListCtrl::GetSelectionMark](../Topic/CListCtrl::GetSelectionMark.md)|Recupera il contrassegno di selezione di un controllo visualizzazione elenco.|  
|[CListCtrl::GetStringWidth](../Topic/CListCtrl::GetStringWidth.md)|Determina la larghezza della colonna minima necessaria per visualizzare qualsiasi stringa specificata.|  
|[CListCtrl::GetSubItemRect](../Topic/CListCtrl::GetSubItemRect.md)|Recupera il rettangolo di delimitazione di un elemento in un controllo visualizzazione elenco.|  
|[CListCtrl::GetTextBkColor](../Topic/CListCtrl::GetTextBkColor.md)|Recupera il colore di sfondo del testo di un controllo visualizzazione elenco.|  
|[CListCtrl::GetTextColor](../Topic/CListCtrl::GetTextColor.md)|Recupera il colore del testo di un controllo visualizzazione elenco.|  
|[CListCtrl::GetTileInfo](../Topic/CListCtrl::GetTileInfo.md)|Recupera informazioni su una sezione in un controllo visualizzazione elenco.|  
|[CListCtrl::GetTileViewInfo](../Topic/CListCtrl::GetTileViewInfo.md)|Recupera le informazioni su un controllo visualizzazione elenco nella visualizzazione affiancata.|  
|[CListCtrl::GetToolTips](../Topic/CListCtrl::GetToolTips.md)|Recupera il controllo di descrizione comandi che il controllo elenco appariranno le descrizioni comandi.|  
|[CListCtrl::GetTopIndex](../Topic/CListCtrl::GetTopIndex.md)|Recupera l'indice dell'elemento visibile in primo piano.|  
|[CListCtrl::GetView](../Topic/CListCtrl::GetView.md)|Ottiene la visualizzazione del controllo visualizzazione elenco.|  
|[CListCtrl::GetViewRect](../Topic/CListCtrl::GetViewRect.md)|Recupera il rettangolo di delimitazione di tutti gli elementi nel controllo elenco.|  
|[CListCtrl::GetWorkAreas](../Topic/CListCtrl::GetWorkAreas.md)|Recupera le aree di lavoro correnti di un controllo visualizzazione elenco.|  
|[CListCtrl::HasGroup](../Topic/CListCtrl::HasGroup.md)|Determina se il controllo elenco ha il gruppo specificato.|  
|[CListCtrl::HitTest](../Topic/CListCtrl::HitTest.md)|Determina la voce della visualizzazione elenco è in un percorso specificato.|  
|[CListCtrl::InsertColumn](../Topic/CListCtrl::InsertColumn.md)|Inserisce una nuova colonna in un controllo visualizzazione elenco.|  
|[CListCtrl::InsertGroup](../Topic/CListCtrl::InsertGroup.md)|Inserisce un gruppo nel controllo elenco.|  
|[CListCtrl::InsertGroupSorted](../Topic/CListCtrl::InsertGroupSorted.md)|Inserisce il gruppo specificato in un elenco ordinato dei gruppi.|  
|[CListCtrl::InsertItem](../Topic/CListCtrl::InsertItem.md)|Inserisce un nuovo elemento in un controllo visualizzazione elenco.|  
|[CListCtrl::InsertMarkHitTest](../Topic/CListCtrl::InsertMarkHitTest.md)|Recupera il punto di inserimento più vicino a un punto specificato.|  
|[CListCtrl::IsGroupViewEnabled](../Topic/CListCtrl::IsGroupViewEnabled.md)|Determina se il punto di vista del gruppo è abilitato per un controllo visualizzazione elenco.|  
|[CListCtrl::IsItemVisible](../Topic/CListCtrl::IsItemVisible.md)|Indica se un elemento specificato nel controllo elenco corrente è visibile.|  
|[CListCtrl::MapIDToIndex](../Topic/CListCtrl::MapIDToIndex.md)|Esegue il mapping dell'ID univoco di un elemento nel controllo elenco corrente a un indice.|  
|[CListCtrl::MapIndexToID](../Topic/CListCtrl::MapIndexToID.md)|Esegue il mapping dell'indice di un elemento nel controllo elenco corrente a un ID univoco|  
|[CListCtrl::MoveGroup](../Topic/CListCtrl::MoveGroup.md)|Sposta il gruppo specificato.|  
|[CListCtrl::MoveItemToGroup](../Topic/CListCtrl::MoveItemToGroup.md)|Sposta il gruppo specificato negli indice in base zero specificato del controllo visualizzazione elenco.|  
|[CListCtrl::RedrawItems](../Topic/CListCtrl::RedrawItems.md)|Impone un controllo visualizzazione elenco per aggiornare un intervallo di elementi.|  
|[CListCtrl::RemoveAllGroups](../Topic/CListCtrl::RemoveAllGroups.md)|Rimuove tutti i gruppi da un controllo visualizzazione elenco.|  
|[CListCtrl::RemoveGroup](../Topic/CListCtrl::RemoveGroup.md)|Rimuove il gruppo specificato dal controllo visualizzazione elenco.|  
|[CListCtrl::Scroll](../Topic/CListCtrl::Scroll.md)|Scorre il contenuto di un controllo visualizzazione elenco.|  
|[CListCtrl::SetBkColor](../Topic/CListCtrl::SetBkColor.md)|Imposta il colore di sfondo del controllo visualizzazione elenco.|  
|[CListCtrl::SetBkImage](../Topic/CListCtrl::SetBkImage.md)|L'immagine di sfondo corrente di un controllo visualizzazione elenco.|  
|[CListCtrl::SetCallbackMask](../Topic/CListCtrl::SetCallbackMask.md)|Imposta la maschera di callback per un controllo visualizzazione elenco.|  
|[CListCtrl::SetCheck](../Topic/CListCtrl::SetCheck.md)|Imposta lo stato di visualizzazione corrente dell'immagine di stato associato a un elemento.|  
|[CListCtrl::SetColumn](../Topic/CListCtrl::SetColumn.md)|Imposta gli attributi di una colonna di visualizzazione elenco.|  
|[CListCtrl::SetColumnOrderArray](../Topic/CListCtrl::SetColumnOrderArray.md)|Imposta l'ordine delle colonne \(da sinistra a destra\) di un controllo visualizzazione elenco.|  
|[CListCtrl::SetColumnWidth](../Topic/CListCtrl::SetColumnWidth.md)|Modificare la larghezza di una colonna nella visualizzazione rapporti o la visualizzazione elenco.|  
|[CListCtrl::SetExtendedStyle](../Topic/CListCtrl::SetExtendedStyle.md)|Imposta stili estesi correnti di un controllo visualizzazione elenco.|  
|[CListCtrl::SetGroupInfo](../Topic/CListCtrl::SetGroupInfo.md)|Imposta le informazioni per il gruppo specificato di controllo visualizzazione elenco.|  
|[CListCtrl::SetGroupMetrics](../Topic/CListCtrl::SetGroupMetrics.md)|Imposta la metrica del gruppo di un controllo visualizzazione elenco.|  
|[CListCtrl::SetHotCursor](../Topic/CListCtrl::SetHotCursor.md)|Imposta il cursore utilizzato quando il hot track è abilitato per un controllo visualizzazione elenco.|  
|[CListCtrl::SetHotItem](../Topic/CListCtrl::SetHotItem.md)|Imposta l'elemento personalizzazione corrente di un controllo visualizzazione elenco.|  
|[CListCtrl::SetHoverTime](../Topic/CListCtrl::SetHoverTime.md)|Imposta l'ora corrente del passaggio del mouse di un controllo visualizzazione elenco.|  
|[CListCtrl::SetIconSpacing](../Topic/CListCtrl::SetIconSpacing.md)|Imposta la spaziatura tra le icone in un controllo visualizzazione elenco.|  
|[CListCtrl::SetImageList](../Topic/CListCtrl::SetImageList.md)|Assegna un elenco immagini a un controllo visualizzazione elenco.|  
|[CListCtrl::SetInfoTip](../Topic/CListCtrl::SetInfoTip.md)|Imposta il testo di descrizione comando.|  
|[CListCtrl::SetInsertMark](../Topic/CListCtrl::SetInsertMark.md)|Impostare il punto di inserimento nella posizione definita.|  
|[CListCtrl::SetInsertMarkColor](../Topic/CListCtrl::SetInsertMarkColor.md)|Imposta il colore del punto di inserimento.|  
|[CListCtrl::SetItem](../Topic/CListCtrl::SetItem.md)|Imposta alcuni o tutti gli attributi di una voce della visualizzazione elenco.|  
|[CListCtrl::SetItemCount](../Topic/CListCtrl::SetItemCount.md)|Rende un controllo visualizzazione elenco per l'aggiunta di un numero elevato di elementi.|  
|[CListCtrl::SetItemCountEx](../Topic/CListCtrl::SetItemCountEx.md)|Imposta il conteggio di elementi per un controllo visualizzazione elenco virtuale.|  
|[CListCtrl::SetItemData](../Topic/CListCtrl::SetItemData.md)|Imposta l'indice specifico dell'elemento.|  
|[CListCtrl::SetItemIndexState](../Topic/CListCtrl::SetItemIndexState.md)|Imposta lo stato di un elemento nel controllo elenco corrente.|  
|[CListCtrl::SetItemPosition](../Topic/CListCtrl::SetItemPosition.md)|Sposta un elemento in una posizione specificata in un controllo visualizzazione elenco.|  
|[CListCtrl::SetItemState](../Topic/CListCtrl::SetItemState.md)|Modifica lo stato di un elemento in un controllo visualizzazione elenco.|  
|[CListCtrl::SetItemText](../Topic/CListCtrl::SetItemText.md)|Modifica il testo di una voce della visualizzazione elenco o di un elemento secondario.|  
|[CListCtrl::SetOutlineColor](../Topic/CListCtrl::SetOutlineColor.md)|Imposta il colore del bordo di un controllo visualizzazione elenco.|  
|[CListCtrl::SetSelectedColumn](../Topic/CListCtrl::SetSelectedColumn.md)|Imposta la colonna selezionata del controllo visualizzazione elenco.|  
|[CListCtrl::SetSelectionMark](../Topic/CListCtrl::SetSelectionMark.md)|Imposta il flag di selezione di un controllo visualizzazione elenco.|  
|[CListCtrl::SetTextBkColor](../Topic/CListCtrl::SetTextBkColor.md)|Imposta il colore di sfondo del testo in un controllo visualizzazione elenco.|  
|[CListCtrl::SetTextColor](../Topic/CListCtrl::SetTextColor.md)|Imposta il colore del testo di un controllo visualizzazione elenco.|  
|[CListCtrl::SetTileInfo](../Topic/CListCtrl::SetTileInfo.md)|Imposta le informazioni per una sezione del controllo visualizzazione elenco.|  
|[CListCtrl::SetTileViewInfo](../Topic/CListCtrl::SetTileViewInfo.md)|Imposta le informazioni che un controllo visualizzazione elenco utilizza la visualizzazione affiancata.|  
|[CListCtrl::SetToolTips](../Topic/CListCtrl::SetToolTips.md)|Imposta il controllo di descrizione comandi che il controllo elenco verrà utilizzata per visualizzare le descrizioni comandi.|  
|[CListCtrl::SetView](../Topic/CListCtrl::SetView.md)|Imposta la visualizzazione del controllo visualizzazione elenco.|  
|[CListCtrl::SetWorkAreas](../Topic/CListCtrl::SetWorkAreas.md)|Imposta l'area in cui le icone possono essere visualizzati in un controllo visualizzazione elenco.|  
|[CListCtrl::SortGroups](../Topic/CListCtrl::SortGroups.md)|Ordina i gruppi di controllo visualizzazione elenco con una funzione definita dall'utente.|  
|[CListCtrl::SortItems](../Topic/CListCtrl::SortItems.md)|Ordina le voci della visualizzazione elenco utilizzando una funzione di confronto definita dall'applicazione.|  
|[CListCtrl::SortItemsEx](../Topic/CListCtrl::SortItemsEx.md)|Ordina le voci della visualizzazione elenco utilizzando una funzione di confronto definita dall'applicazione.|  
|[CListCtrl::SubItemHitTest](../Topic/CListCtrl::SubItemHitTest.md)|Determina la voce della visualizzazione elenco, se presente, è in un percorso specificato.|  
|[CListCtrl::Update](../Topic/CListCtrl::Update.md)|Forza il controllo per aggiornare un elemento specificato.|  
  
## Note  
 Oltre a un'icona e a un'etichetta, ogni elemento può contenere informazioni visualizzate nelle colonne a destra dell'icona e dell'etichetta.  Questo controllo e la classe `CListCtrl` \) è disponibile solo per i programmi in esecuzione in versioni 3,51 di Windows NT e Windows 95\/98 e successive.  
  
 Ecco una breve panoramica della classe `CListCtrl`.  Per una descrizione dettagliata e concettuale, vedere [Utilizzando CListCtrl](../../mfc/using-clistctrl.md) e [Controlli](../../mfc/controls-mfc.md).  
  
## Visualizzazioni  
 I controlli di visualizzazione elenchi possono visualizzare il contenuto in quattro modi diversi, denominati "visualizzazioni."  
  
-   Visualizzazione icone  
  
     Ogni elemento viene visualizzato come pixel dell'icona grande utilizzata \(32 x 32\) con un'etichetta in.  L'utente può trascinare gli elementi in un punto qualsiasi della finestra di visualizzazione elenco.  
  
-   Piccola visualizzazione icone  
  
     Ogni elemento viene visualizzato come piccoli pixel dell'icona \(16 x 16\) con l'etichetta a destra di.  L'utente può trascinare gli elementi in un punto qualsiasi della finestra di visualizzazione elenco.  
  
-   Visualizzazione elenco  
  
     Ogni elemento viene visualizzato come piccola icona con un'etichetta a destra di.  Gli elementi sono disposti in colonne e non possono essere trascinate direttamente in una posizione nella finestra visualizzazione elenco.  
  
-   Visualizzazione di rapporti  
  
     Ogni elemento viene visualizzato su una riga distinta, con informazioni aggiuntive disposti in colonne a destra.  La colonna più a sinistra contiene una piccola icona e etichetta e colonne successive contengono elementi secondari come specificato dall'applicazione.  Un controllo intestazione incorporato \(classe\) [CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)implementa tali colonne.  Per ulteriori informazioni sul controllo intestazione e colonne in una visualizzazione del rapporto, vedere [Utilizzando CListCtrl: Aggiunta di colonne al controllo \(visualizzazione di rapporti\)](../../mfc/adding-columns-to-the-control-report-view.md).  
  
 Vedere anche:  
  
-   Articolo della Knowledge Base Q250614: HOWTO: Elementi in un CListCtrl nella visualizzazione rapporti  
  
-   Articolo della Knowledge Base Q200054: PRB: OnTimer \(\) non viene chiamato ripetutamente per un controllo elenco  
  
 Lo stile di visualizzazione elenco corrente del controllo determina la visualizzazione corrente.  Per ulteriori informazioni su questi stili e sul relativo utilizzo, vedere [Utilizzando CListCtrl: Modificare gli stili del controllo elenco](../../mfc/changing-list-control-styles.md).  
  
## Extended Styles  
 Oltre agli stili standard di elenco, classificare `CListCtrl` supporta un insieme ampio di stili estesi, fornendo funzionalità arricchita.  Alcuni esempi di questa funzionalità includono:  
  
-   Selezione del passaggio del mouse  
  
     Una volta abilitata, consente la selezione automatica di un elemento quando il cursore rimane sull'elemento per un determinato punto.  
  
-   Visualizzazioni elenco virtuali  
  
     Una volta abilitata, consente al controllo supporta fino a `DWORD` gli elementi.  Ciò è possibile racchiudere il sovraccarico di gestione dei dati sull'applicazione.  Fatta eccezione per la selezione dell'elemento e le informazioni di stato attivo, tutte le informazioni sull'elemento devono essere gestite dall'applicazione.  Per ulteriori informazioni, vedere [Utilizzando CListCtrl: Controlli elenco virtuali](../../mfc/virtual-list-controls.md).  
  
-   Per l'attivazione di un oggetto e due clic su  
  
     Una volta abilitata, consente il hot track \(evidenziare automatica di testo elemento\) e di attivazione di una o due clic sull'elemento evidenziato.  
  
-   L'ordine delle colonne di trascinamento della selezione  
  
     Una volta abilitata, consente il riordinamento trascinamento della selezione colonne in un controllo visualizzazione elenco.  Disponibile solo nella visualizzazione rapporti.  
  
 Per informazioni sull'utilizzo di questi nuovi stili estesi, vedere [Utilizzando CListCtrl: Modificare gli stili del controllo elenco](../../mfc/changing-list-control-styles.md).  
  
## Gli elementi e secondari  
 Ogni elemento in un controllo elenco è costituito da un'icona \(da un elenco immagini\), etichetta, uno stato corrente e di un valore definito dall'applicazione \(definito come "dati dell'elemento"\).  Uno o più elementi secondari possono essere associati a ciascun elemento.  "Un elemento secondario" è una stringa che, nella visualizzazione di rapporti, può essere visualizzato in una colonna a destra dell'icona eetichetta di un elemento.  Tutti gli elementi in un controllo elenco devono avere lo stesso numero di elementi secondari.  
  
 La classe **CListCtrl** fornisce numerose funzioni per l'inserimento, l'eliminazione, l'individuazione e la modifica di questi elementi.  Per ulteriori informazioni, vedere [CListCtrl::GetItem](../Topic/CListCtrl::GetItem.md), [CListCtrl::InsertItem](../Topic/CListCtrl::InsertItem.md)e [CListCtrl::FindItem](../Topic/CListCtrl::FindItem.md), [Utilizzando CListCtrl: Aggiunta di elementi al controllo](../../mfc/adding-items-to-the-control.md)e [Utilizzando CListCtrl: Scorrendo, disporre, l'ordinamento e la ricerca in controlli elenco](../../mfc/scrolling-arranging-sorting-and-finding-in-list-controls.md).  
  
 Per impostazione predefinita, il controllo elenco è responsabile dell'archiviazione dell'icona e gli attributi di testo di un elemento.  Tuttavia, oltre a questi tipi di elemento, la classe `CListCtrl` "supporta gli elementi di callback." "Un elemento di callback" è una voce della visualizzazione elenco per cui l'applicazione — anziché il controllo archivia il testo, l'icona, o di entrambi.  Una maschera di callback viene utilizzata per specificare gli attributi dell'elemento \(testo\) e\/o icona vengono forniti dall'applicazione.  Se un'applicazione utilizza elementi di callback, deve essere in grado di fornire attributi dell'icona e\/o di testo su richiesta.  Gli elementi di callback sono utili quando l'applicazione è già aggiornati alcune di queste informazioni.  Per ulteriori informazioni, vedere [Utilizzando CListCtrl: elementi di callback e la maschera di callback](../../mfc/callback-items-and-the-callback-mask.md).  
  
## Elenchi di immagini  
 Icone, immagini voce di intestazione e stati definiti dall'applicazione per le voci della visualizzazione elenco sono contenuti in più elenchi di immagini \(implementati dalla classe [CImageList](../../mfc/reference/cimagelist-class.md)\), che crea e assegnare al controllo elenco.  Ogni controllo visualizzazione elenco può contenere fino a quattro tipi diversi di elenchi di immagini:  
  
-   L'icona grande  
  
     Utilizzato nella visualizzazione icone per le icone grandi utilizzate.  
  
-   Piccola icona  
  
     Utilizzato in piccoli icona, elencare e visualizzazioni dei rapporti per le versioni minori saranno le icone utilizzate in visualizzazione icone.  
  
-   Stato definito dall'applicazione  
  
     Contiene le immagini di stato, che viene visualizzata accanto all'icona di un elemento per indicare uno stato definito dall'applicazione.  
  
-   Voce di intestazione  
  
     Utilizzato nella visualizzazione report per piccole immagini visualizzate in ogni elemento del controllo intestazione.  
  
 Per impostazione predefinita, un controllo visualizzazione elenco elimina gli elenchi di immagini assegnati quando viene eliminato; tuttavia, lo sviluppatore può personalizzare questo comportamento eliminazione di ogni elenco immagini quando non viene più utilizzato, come determinato dall'applicazione.  Per ulteriori informazioni, vedere [Utilizzando CListCtrl: Elementi di elenco e elenchi di immagini](../../mfc/list-items-and-image-lists.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CListCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [MFC campione ROWLIST](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CImageList Class](../../mfc/reference/cimagelist-class.md)