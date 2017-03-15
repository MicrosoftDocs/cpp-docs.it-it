---
title: CListCtrl (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CListCtrl
dev_langs:
- C++
helpviewer_keywords:
- CListCtrl class
- LVS_REPORT
- LVS_LIST
- LVS_ICON
- list view controls
- list view controls, CListCtrl class
- Windows common controls [C++], CListCtrl
- LVS_SMALLICON
ms.assetid: fe08a1ca-4b05-4ff7-a12a-ee4c765a2197
caps.latest.revision: 23
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: fb82dd194d59bff9e0a3fe8f047686a8bcc4d927
ms.lasthandoff: 02/24/2017

---
# <a name="clistctrl-class"></a>CListCtrl (classe)
Incapsula la funzionalità di un "controllo di visualizzazione elenco" che mostra una raccolta di elementi ciascuno costituito da un'icona (da un elenco di immagini) e da un'etichetta.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CListCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListCtrl::CListCtrl](#clistctrl)|Costruisce un oggetto `CListCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListCtrl::ApproximateViewRect](#approximateviewrect)|Determina la larghezza e altezza richiesta per visualizzare gli elementi di un controllo visualizzazione elenco.|  
|[CListCtrl::Arrange](#arrange)|Allinea gli elementi su una griglia.|  
|[CListCtrl::CancelEditLabel](#canceleditlabel)|Annulla l'operazione di modifica testo dell'elemento.|  
|[CListCtrl::Create](#create)|Crea un elenco di controllo e lo collega a un `CListCtrl` oggetto.|  
|[CListCtrl::CreateDragImage](#createdragimage)|Crea un elenco di immagini di trascinamento per un elemento specificato.|  
|[CListCtrl::CreateEx](#createex)|Crea un controllo elenco con gli stili estesi di Windows specificati e lo collega a un `CListCtrl` oggetto.|  
|[CListCtrl::DeleteAllItems](#deleteallitems)|Elimina tutti gli elementi dal controllo.|  
|[CListCtrl::DeleteColumn](#deletecolumn)|Elimina una colonna nel controllo visualizzazione elenco.|  
|[CListCtrl::DeleteItem](#deleteitem)|Elimina un elemento dal controllo.|  
|[CListCtrl::DrawItem](#drawitem)|Chiamato quando un aspetto visivo di un controllo Cambia proprietario.|  
|[CListCtrl::EditLabel](#editlabel)|Inizia la modifica sul posto del testo di un elemento.|  
|[CListCtrl::EnableGroupView](#enablegroupview)|Abilita o disabilita gli elementi in un controllo visualizzazione elenco è visualizzato come un gruppo.|  
|[CListCtrl::EnsureVisible](#ensurevisible)|Garantisce che un elemento è visibile.|  
|[CListCtrl::FindItem](#finditem)|Cerca un elemento della visualizzazione elenco dopo aver specificato le caratteristiche.|  
|[CListCtrl::GetBkColor](#getbkcolor)|Recupera il colore di sfondo di un controllo visualizzazione elenco.|  
|[CListCtrl::GetBkImage](#getbkimage)|Recupera l'immagine di sfondo corrente di un controllo visualizzazione elenco.|  
|[CListCtrl:: GetCallbackMask](#getcallbackmask)|Recupera la maschera di callback per un controllo visualizzazione elenco.|  
|[CListCtrl::GetCheck](#getcheck)|Recupera lo stato di visualizzazione corrente dell'immagine di stato associato a un elemento.|  
|[CListCtrl::GetColumn](#getcolumn)|Recupera gli attributi della colonna del controllo.|  
|[CListCtrl::GetColumnOrderArray](#getcolumnorderarray)|Recupera l'ordine delle colonne (da sinistra a destra) di un controllo visualizzazione elenco.|  
|[CListCtrl::GetColumnWidth](#getcolumnwidth)|Recupera la larghezza di una colonna nella visualizzazione elenco o report.|  
|[CListCtrl::GetCountPerPage](#getcountperpage)|Calcola il numero di elementi che è possibile adattare verticalmente in un controllo visualizzazione elenco.|  
|[CListCtrl::GetEditControl](#geteditcontrol)|Recupera l'handle del controllo di modifica utilizzato per modificare il testo di un elemento.|  
|[CListCtrl::GetEmptyText](#getemptytext)|Recupera la stringa da visualizzare se il controllo visualizzazione elenco corrente è vuoto.|  
|[CListCtrl::GetExtendedStyle](#getextendedstyle)|Recupera gli stili estesi correnti di un controllo visualizzazione elenco.|  
|[CListCtrl::GetFirstSelectedItemPosition](#getfirstselecteditemposition)|Recupera la posizione del primo elemento di visualizzazione elenco selezionato in un controllo visualizzazione elenco.|  
|[CListCtrl::GetFocusedGroup](#getfocusedgroup)|Recupera il gruppo che ha lo stato attivo nel controllo visualizzazione elenco corrente.|  
|[CListCtrl::GetGroupCount](#getgroupcount)|Recupera il numero di gruppi del controllo visualizzazione elenco corrente.|  
|[CListCtrl::GetGroupInfo](#getgroupinfo)|Ottiene le informazioni per un gruppo specifico di controllo di visualizzazione elenco.|  
|[CListCtrl::GetGroupInfoByIndex](#getgroupinfobyindex)|Recupera le informazioni relative a un gruppo specificato nel controllo visualizzazione elenco corrente.|  
|[CListCtrl::GetGroupMetrics](#getgroupmetrics)|Recupera le metriche di un gruppo.|  
|[CListCtrl::GetGroupRect](#getgrouprect)|Recupera il rettangolo di delimitazione per un gruppo specificato nel controllo visualizzazione elenco corrente.|  
|[CListCtrl::GetGroupState](#getgroupstate)|Recupera lo stato di un gruppo specificato nel controllo visualizzazione elenco corrente.|  
|[CListCtrl::GetHeaderCtrl](#getheaderctrl)|Recupera il controllo intestazione di un controllo visualizzazione elenco.|  
|[CListCtrl::GetHotCursor](#gethotcursor)|Recupera il cursore utilizzato quando è abilitata la funzionalità di intercettazione per un controllo visualizzazione elenco.|  
|[CListCtrl::GetHotItem](#gethotitem)|Recupera l'elemento di visualizzazione elenco attualmente sotto il cursore.|  
|[CListCtrl::GetHoverTime](#gethovertime)|Recupera l'intervallo di tempo corrente di un controllo visualizzazione elenco.|  
|[CListCtrl::GetImageList](#getimagelist)|Recupera l'handle di un elenco di immagini utilizzato per gli elementi di visualizzazione elenco disegno.|  
|[CListCtrl::GetInsertMark](#getinsertmark)|Recupera la posizione corrente del segno di inserimento.|  
|[CListCtrl::GetInsertMarkColor](#getinsertmarkcolor)|Recupera il colore corrente del segno di inserimento.|  
|[CListCtrl::GetInsertMarkRect](#getinsertmarkrect)|Recupera il rettangolo che delimita il punto di inserimento.|  
|[CListCtrl:: GetItem](#getitem)|Recupera gli attributi dell'elemento di visualizzazione elenco.|  
|[CListCtrl::GetItemCount](#getitemcount)|Recupera il numero di elementi in un controllo visualizzazione elenco.|  
|[CListCtrl::GetItemData](#getitemdata)|Recupera il valore specifico dell'applicazione associato a un elemento.|  
|[CListCtrl::GetItemIndexRect](#getitemindexrect)|Recupera il rettangolo di delimitazione per tutta o parte di un elemento secondario nel controllo visualizzazione elenco corrente.|  
|[CListCtrl::GetItemPosition](#getitemposition)|Recupera la posizione di un elemento di visualizzazione elenco.|  
|[CListCtrl::GetItemRect](#getitemrect)|Recupera il rettangolo di delimitazione per un elemento.|  
|[CListCtrl::GetItemSpacing](#getitemspacing)|Calcola la spaziatura tra gli elementi del controllo visualizzazione elenco corrente.|  
|[CListCtrl::GetItemState](#getitemstate)|Recupera lo stato di un elemento di visualizzazione elenco.|  
|[CListCtrl::GetItemText](#getitemtext)|Recupera il testo di un elemento della visualizzazione elenco o un elemento secondario.|  
|[CListCtrl::GetNextItem](#getnextitem)|Cerca un elemento della visualizzazione elenco con le proprietà specificate e con la relazione specificata a un determinato elemento.|  
|[CListCtrl::GetNextItemIndex](#getnextitemindex)|Recupera l'indice dell'elemento nel controllo visualizzazione elenco corrente con un set di proprietà specificato.|  
|[CListCtrl::GetNextSelectedItem](#getnextselecteditem)|Recupera l'indice di una posizione dell'elemento visualizzazione elenco e la posizione dell'elemento di visualizzazione elenco selezionato avanti per eseguire l'iterazione.|  
|[CListCtrl::GetNumberOfWorkAreas](#getnumberofworkareas)|Recupera il numero corrente di aree di lavoro per un controllo visualizzazione elenco.|  
|[CListCtrl::GetOrigin](#getorigin)|Recupera l'origine della vista corrente per un controllo visualizzazione elenco.|  
|[CListCtrl::GetOutlineColor](#getoutlinecolor)|Recupera il colore del bordo di un controllo visualizzazione elenco.|  
|[CListCtrl::GetSelectedColumn](#getselectedcolumn)|Recupera l'indice della colonna attualmente selezionata nel controllo elenco.|  
|[CListCtrl::GetSelectedCount](#getselectedcount)|Recupera il numero di elementi selezionati nel controllo di visualizzazione elenco.|  
|[CListCtrl::GetSelectionMark](#getselectionmark)|Recupera il contrassegno di selezione di un controllo visualizzazione elenco.|  
|[CListCtrl::GetStringWidth](#getstringwidth)|Determina la larghezza di colonna minima necessaria per visualizzare tutte di una determinata stringa.|  
|[CListCtrl::GetSubItemRect](#getsubitemrect)|Recupera il rettangolo di delimitazione di un elemento in un controllo visualizzazione elenco.|  
|[CListCtrl::GetTextBkColor](#gettextbkcolor)|Recupera il colore di sfondo del testo di un controllo visualizzazione elenco.|  
|[CListCtrl::GetTextColor](#gettextcolor)|Recupera il colore del testo di un controllo visualizzazione elenco.|  
|[CListCtrl::GetTileInfo](#gettileinfo)|Recupera informazioni su un riquadro in un controllo visualizzazione elenco.|  
|[CListCtrl::GetTileViewInfo](#gettileviewinfo)|Recupera informazioni su un controllo visualizzazione elenco in visualizzazione affiancata.|  
|[CListCtrl::GetToolTips](#gettooltips)|Recupera il controllo descrizione comando che utilizza il controllo visualizzazione elenco per visualizzare le descrizioni comandi.|  
|[CListCtrl::GetTopIndex](#gettopindex)|Recupera l'indice dell'elemento visibile in primo piano.|  
|[CListCtrl::GetView](#getview)|Ottiene la visualizzazione del controllo di visualizzazione elenco.|  
|[CListCtrl::GetViewRect](#getviewrect)|Recupera il rettangolo di delimitazione di tutti gli elementi nel controllo di visualizzazione elenco.|  
|[CListCtrl::GetWorkAreas](#getworkareas)|Recupera le aree di lavoro corrente di un controllo visualizzazione elenco.|  
|[CListCtrl::HasGroup](#hasgroup)|Determina se il controllo visualizzazione elenco è il gruppo specificato.|  
|[CListCtrl::HitTest](#hittest)|Determina l'elenco elemento di visualizzazione è in una posizione specificata.|  
|[CListCtrl::InsertColumn](#insertcolumn)|Inserisce una nuova colonna in un controllo visualizzazione elenco.|  
|[CListCtrl::InsertGroup](#insertgroup)|Inserisce un gruppo di controllo di visualizzazione elenco.|  
|[CListCtrl::InsertGroupSorted](#insertgroupsorted)|Inserisce il gruppo specificato in un elenco ordinato di gruppi.|  
|[CListCtrl::InsertItem](#insertitem)|Inserisce un nuovo elemento in un controllo visualizzazione elenco.|  
|[CListCtrl::InsertMarkHitTest](#insertmarkhittest)|Recupera il punto di inserimento più vicino al punto specificato.|  
|[CListCtrl::IsGroupViewEnabled](#isgroupviewenabled)|Determina se la vista gruppo è abilitata per un controllo visualizzazione elenco.|  
|[CListCtrl::IsItemVisible](#isitemvisible)|Indica se un elemento specificato nel controllo visualizzazione elenco corrente è visibile.|  
|[CListCtrl::MapIDToIndex](#mapidtoindex)|L'ID univoco di un elemento nel controllo visualizzazione elenco corrente viene eseguito il mapping a un indice.|  
|[CListCtrl::MapIndexToID](#mapindextoid)|Esegue il mapping dell'indice di un elemento nel controllo visualizzazione elenco corrente a un ID univoco.|  
|[CListCtrl::MoveGroup](#movegroup)|Sposta il gruppo specificato.|  
|[CListCtrl::MoveItemToGroup](#moveitemtogroup)|Sposta che gruppo specificato nell'oggetto indice a base zero del controllo di visualizzazione elenco.|  
|[CListCtrl::RedrawItems](#redrawitems)|Forza un controllo visualizzazione elenco per aggiornare la visualizzazione di un intervallo di elementi.|  
|[CListCtrl::RemoveAllGroups](#removeallgroups)|Rimuove tutti i gruppi da un controllo visualizzazione elenco.|  
|[CListCtrl::RemoveGroup](#removegroup)|Rimuove il gruppo specificato dal controllo di visualizzazione elenco.|  
|[CListCtrl::Scroll](#scroll)|Scorre il contenuto di un controllo visualizzazione elenco.|  
|[CListCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo del controllo di visualizzazione elenco.|  
|[CListCtrl::SetBkImage](#setbkimage)|Imposta l'immagine di sfondo corrente di un controllo visualizzazione elenco.|  
|[CListCtrl::SetCallbackMask](#setcallbackmask)|Imposta la maschera di callback per un controllo visualizzazione elenco.|  
|[CListCtrl::SetCheck](#setcheck)|Set corrente è visualizzato lo stato dell'immagine di stato associato a un elemento.|  
|[CListCtrl::SetColumn](#setcolumn)|Imposta gli attributi di una colonna della vista elenco.|  
|[CListCtrl::SetColumnOrderArray](#setcolumnorderarray)|Imposta l'ordine delle colonne (da sinistra a destra) di un controllo visualizzazione elenco.|  
|[CListCtrl::SetColumnWidth](#setcolumnwidth)|Modifica la larghezza di una colonna nella visualizzazione elenco o report.|  
|[CListCtrl:: SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi correnti di un controllo visualizzazione elenco.|  
|[CListCtrl::SetGroupInfo](#setgroupinfo)|Imposta le informazioni per il gruppo specificato di un controllo visualizzazione elenco.|  
|[CListCtrl::SetGroupMetrics](#setgroupmetrics)|Imposta le metriche di gruppo di un controllo visualizzazione elenco.|  
|[CListCtrl::SetHotCursor](#sethotcursor)|Imposta il cursore utilizzato quando è abilitata la funzionalità di intercettazione per un controllo visualizzazione elenco.|  
|[CListCtrl::SetHotItem](#sethotitem)|Imposta l'elemento attivo corrente di un controllo visualizzazione elenco.|  
|[CListCtrl::SetHoverTime](#sethovertime)|Imposta l'intervallo di tempo corrente di un controllo visualizzazione elenco.|  
|[CListCtrl::SetIconSpacing](#seticonspacing)|Imposta la spaziatura tra le icone in un controllo visualizzazione elenco.|  
|[CListCtrl::SetImageList](#setimagelist)|Assegna un elenco di immagini a un controllo visualizzazione elenco.|  
|[CListCtrl::SetInfoTip](#setinfotip)|Imposta il testo della descrizione comando.|  
|[CListCtrl::SetInsertMark](#setinsertmark)|Imposta il punto di inserimento nella posizione specificata.|  
|[CListCtrl::SetInsertMarkColor](#setinsertmarkcolor)|Imposta il colore del punto di inserimento.|  
|[CListCtrl:: SetItem](#setitem)|Imposta gli attributi dell'elemento di alcune o tutte di una visualizzazione elenco.|  
|[CListCtrl::SetItemCount](#setitemcount)|Prepara un controllo visualizzazione elenco per l'aggiunta di un numero elevato di elementi.|  
|[CListCtrl::SetItemCountEx](#setitemcountex)|Imposta il numero di elementi per un controllo visualizzazione elenco virtuale.|  
|[CListCtrl::SetItemData](#setitemdata)|Imposta il valore dell'elemento specifico dell'applicazione.|  
|[CListCtrl::SetItemIndexState](#setitemindexstate)|Imposta lo stato di un elemento nel controllo visualizzazione elenco corrente.|  
|[CListCtrl::SetItemPosition](#setitemposition)|Sposta un elemento in una posizione specificata in un controllo visualizzazione elenco.|  
|[CListCtrl::SetItemState](#setitemstate)|Modifica lo stato di un elemento in un controllo visualizzazione elenco.|  
|[CListCtrl::SetItemText](#setitemtext)|Sostituisce il testo di un elemento della visualizzazione elenco o un elemento secondario.|  
|[CListCtrl::SetOutlineColor](#setoutlinecolor)|Imposta il colore del bordo di un controllo visualizzazione elenco.|  
|[CListCtrl::SetSelectedColumn](#setselectedcolumn)|Imposta la colonna selezionata del controllo di visualizzazione elenco.|  
|[CListCtrl::SetSelectionMark](#setselectionmark)|Imposta il contrassegno di selezione di un controllo visualizzazione elenco.|  
|[CListCtrl::SetTextBkColor](#settextbkcolor)|Imposta il colore di sfondo del testo in un controllo visualizzazione elenco.|  
|[CListCtrl::SetTextColor](#settextcolor)|Imposta il colore del testo di un controllo visualizzazione elenco.|  
|[CListCtrl::SetTileInfo](#settileinfo)|Imposta le informazioni per una sezione del controllo di visualizzazione elenco.|  
|[CListCtrl::SetTileViewInfo](#settileviewinfo)|Imposta informazioni che utilizza un controllo visualizzazione elenco in visualizzazione affiancata.|  
|[CListCtrl::SetToolTips](#settooltips)|Imposta il controllo descrizione comando che verrà utilizzato il controllo visualizzazione elenco per visualizzare le descrizioni comandi.|  
|[CListCtrl::SetView](#setview)|Imposta la visualizzazione del controllo di visualizzazione elenco.|  
|[CListCtrl::SetWorkAreas](#setworkareas)|Imposta l'area in cui le icone possono essere visualizzate in un controllo visualizzazione elenco.|  
|[CListCtrl::SortGroups](#sortgroups)|Ordina i gruppi di un elenco di controllo con una funzione definita dall'utente di visualizzazione.|  
|[CListCtrl::SortItems](#sortitems)|Ordina gli elementi di visualizzazione elenco utilizzando una funzione di confronto definita dall'applicazione.|  
|[CListCtrl::SortItemsEx](#sortitemsex)|Ordina gli elementi di visualizzazione elenco utilizzando una funzione di confronto definita dall'applicazione.|  
|[CListCtrl::SubItemHitTest](#subitemhittest)|Determina quale elemento di visualizzazione elenco, se presente, è in una determinata posizione.|  
|[CListCtrl::Update](#update)|Forza il controllo per aggiornare un elemento specificato.|  
  
## <a name="remarks"></a>Note  
 Oltre a un'icona e l'etichetta, ogni elemento può avere informazioni visualizzate nelle colonne a destra dell'etichetta e icona. Questo controllo (e pertanto la `CListCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Di seguito è riportato una breve panoramica della `CListCtrl` classe. Per informazioni dettagliate, concettuale, vedere [utilizzo di CListCtrl](../../mfc/using-clistctrl.md) e [controlli](../../mfc/controls-mfc.md).  
  
## <a name="views"></a>Visualizzazioni  
 Controlli di visualizzazione elenco consente di visualizzare il contenuto in quattro modi diversi, denominati "views".  
  
-   Visualizzazione di icone  
  
     Ogni elemento viene visualizzato come un'icona ingrandita (32 x 32 pixel) con un'etichetta sotto di esso. L'utente può trascinare gli elementi in un punto qualsiasi nella finestra di visualizzazione elenco.  
  
-   Visualizzazione icone piccole  
  
     Ogni elemento viene visualizzato come una piccola icona (16 x 16 pixel) con l'etichetta alla sua destra. L'utente può trascinare gli elementi in un punto qualsiasi nella finestra di visualizzazione elenco.  
  
-   visualizzazione elenco  
  
     Ogni elemento viene visualizzato come una piccola icona con un'etichetta alla sua destra. Gli elementi vengono disposti in colonne e non possono essere trascinati in qualsiasi posizione nella finestra di visualizzazione elenco.  
  
-   Visualizzazione di report  
  
     Ogni voce viene visualizzata in una riga, con informazioni aggiuntive distribuite in colonne a destra. La colonna più a sinistra contiene l'icona di piccole dimensioni e l'etichetta e le colonne successive contengono gli elementi secondari come specificato dall'applicazione. Un controllo header incorporato (classe [CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)) implementa queste colonne. Per ulteriori informazioni sul controllo di intestazione e le colonne in una visualizzazione di report, vedere [utilizzo di CListCtrl: aggiunta di colonne al controllo (visualizzazione dei Report)](../../mfc/adding-columns-to-the-control-report-view.md).  
  
 Vedere anche:  
  
-   Articolo della Knowledge Base Q250614: procedura: ordinare gli elementi di un oggetto CListCtrl nella visualizzazione Report  
  
-   Articolo della Knowledge Base Q200054: PRB: OnTimer() è non chiamato più volte per un elenco di controllo  
  
 Lo stile corrente del controllo visualizzazione dell'elenco determina la visualizzazione corrente. Per ulteriori informazioni su questi stili e il relativo utilizzo, vedere [utilizzo di CListCtrl: modifica degli stili del controllo List](../../mfc/changing-list-control-styles.md).  
  
## <a name="extended-styles"></a>Stili estesi  
 Oltre gli stili di elenco standard, classe `CListCtrl` supporta un ampio set di stili estesi, fornendo funzionalità arricchite. Alcuni esempi di questa funzionalità includono:  
  
-   Selezione  
  
     Se abilitata, consente la selezione automatica di un elemento quando il cursore rimane su di esso per un determinato periodo di tempo.  
  
-   Visualizzazioni elenco virtuale  
  
     Quando abilitata, consente al controllo di supportare fino a `DWORD` elementi. Ciò è possibile posizionando l'overhead di gestione dei dati dell'elemento dell'applicazione. Fatta eccezione per la selezione di elementi e le informazioni di stato attivo, tutte le informazioni elemento devono essere gestite dall'applicazione. Per ulteriori informazioni, vedere [utilizzo di CListCtrl: controlli elenco virtuali](../../mfc/virtual-list-controls.md).  
  
-   Attivazione di uno e due: clic  
  
     Quando abilitata, consente l'intercettazione (evidenziazione automatico del testo dell'elemento) e uno o due – fare clic con attivazione dell'elemento evidenziato.  
  
-   Trascinamento della selezione di ordinamento delle colonne  
  
     Se abilitata, consente di trascinamento e il riordinamento delle colonne in un controllo visualizzazione elenco. Disponibile solo in visualizzazione report.  
  
 Per informazioni sull'utilizzo di questi nuovi stili estesi, vedere [utilizzo di CListCtrl: modifica degli stili del controllo List](../../mfc/changing-list-control-styles.md).  
  
## <a name="items-and-subitems"></a>Elementi ed elementi secondari  
 Ogni elemento in un controllo visualizzazione elenco è costituito da un'icona (da un elenco di immagini), un'etichetta, uno stato corrente e un valore definito dall'applicazione (noto come "dati dell'elemento"). Uno o più elementi secondari possono essere anche associato a ogni elemento. Un elemento "secondario" è una stringa che, in visualizzazione report, è possibile visualizzare in una colonna a destra dell'icona e un elemento. Tutti gli elementi in un controllo visualizzazione elenco devono avere lo stesso numero di elementi secondari.  
  
 Classe **CListCtrl** offre diverse funzioni per l'inserimento, eliminazione, la ricerca e modifica di questi elementi. Per ulteriori informazioni, vedere [CListCtrl:: GetItem](#getitem), [CListCtrl::InsertItem](#insertitem), e [CListCtrl::FindItem](#finditem), [aggiunta di elementi al controllo](../adding-items-to-the-control.md), e [scorrimento, disposizione, ordinamento e ricerca nei controlli list](../scrolling-arranging-sorting-and-finding-in-list-controls.md).  
  
 Per impostazione predefinita, il controllo visualizzazione elenco è responsabile per la memorizzazione degli attributi di icona e testo di un elemento. Tuttavia, oltre a questi tipi di elemento, classe `CListCtrl` supporta "elementi di callback". Un elemento"callback" è un elemento della visualizzazione elenco per il quale l'applicazione, anziché il controllo, ovvero archivia il testo, icona o entrambi. Una maschera di callback viene utilizzata per specificare gli attributi di elemento (testo e/o icona) vengono forniti dall'applicazione. Se un'applicazione utilizza elementi di callback, deve essere in grado di fornire gli attributi di testo e/o icona su richiesta. Elementi di callback sono utili quando l'applicazione già gestisce alcune di queste informazioni. Per ulteriori informazioni, vedere [utilizzo di CListCtrl: elementi di Callback e maschera di Callback](../callback-items-and-the-callback-mask.md).  
  
## <a name="image-lists"></a>Elenchi di immagini  
 Le icone, le immagini degli elementi intestazione e applicazione – definita stati per gli elementi di visualizzazione elenco sono contenuti negli elenchi di immagini diverse (implementato dalla classe [CImageList](cimagelist-class.md)), che può creare e assegnare al controllo di visualizzazione elenco. Ogni controllo di visualizzazione elenco può avere fino a quattro diversi tipi di elenchi di immagini:  
  
-   Icone grandi  
  
     Utilizzata nella visualizzazione icone per le icone grandi.  
  
-   Icona di piccole dimensioni  
  
     Utilizzata nell'icona di piccole dimensioni, elenco e visualizzazioni dei rapporti per le versioni più piccole delle icone utilizzate nella visualizzazione icone.  
  
-   Stato definito dall'applicazione  
  
     Contiene le immagini di stato, che vengono visualizzate accanto all'icona di un elemento per indicare lo stato definito dall'applicazione.  
  
-   Voce di intestazione  
  
     Utilizzata nella visualizzazione report per le immagini di piccole dimensioni che vengono visualizzati in ogni elemento di controllo intestazione.  
  
 Per impostazione predefinita, un controllo visualizzazione elenco Elimina degli elenchi di immagini assegnati quando viene eliminato; Tuttavia, lo sviluppatore può personalizzare tale comportamento distruggendo ogni elenco di immagini quando non viene più utilizzato, come determinato dall'applicazione. Per ulteriori informazioni, vedere [utilizzo di CListCtrl: elementi elenco ed elenchi di immagini](../list-items-and-image-lists.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](cobject-class.md)  
  
 [CCmdTarget](ccmdtarget-class.md)  
  
 [CWnd](cwnd-class.md)  
  
 `CListCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="a-nameapproximateviewrecta--clistctrlapproximateviewrect"></a><a name="approximateviewrect"></a>CListCtrl::ApproximateViewRect  
 Determina la larghezza e altezza richiesta per visualizzare gli elementi di un controllo visualizzazione elenco.  
  
```  
CSize ApproximateViewRect(
    CSize sz = CSize(-1,  
 -1),  
    int iCount = -1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `sz`  
 Le dimensioni proposte del controllo, in pixel. Se non vengono specificate le dimensioni, il framework utilizza i valori correnti di larghezza o dell'altezza del controllo.  
  
 `iCount`  
 Numero di elementi da visualizzare nel controllo. Se questo parametro è -1, il framework utilizza attualmente il numero totale di elementi nel controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CSize` contenente necessarie per visualizzare gli elementi, in pixel di altezza e la larghezza approssimativa.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_ApproximateViewRect](http://msdn.microsoft.com/library/windows/desktop/bb761231), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namearrangea--clistctrlarrange"></a><a name="arrange"></a>CListCtrl::Arrange  
 Riposiziona gli elementi in una visualizzazione a icone in modo da allinearli su una griglia.  
  
```  
BOOL Arrange(UINT nCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nCode`  
 Specifica lo stile di allineamento per gli elementi. Può essere uno dei valori seguenti:  
  
- `LVA_ALIGNLEFT`Allinea gli elementi lungo il bordo sinistro della finestra.  
  
- `LVA_ALIGNTOP`Allinea gli elementi lungo il bordo superiore della finestra.  
  
- `LVA_DEFAULT`Allinea gli elementi in base a stili di allineamento corrente della visualizzazione elenco (il valore predefinito).  
  
- `LVA_SNAPTOGRID`Consente di bloccare tutte le icone nella posizione della griglia più vicina.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Il `nCode` parametro specifica lo stile di allineamento.  
  
### <a name="example"></a>Esempio    
```cpp  
    // Align all of the list view control items along the top
    // of the window (the list view control must be in icon or
    // small icon mode).
    m_myListCtrl.Arrange(LVA_ALIGNTOP);
```

  
##  <a name="a-namecanceleditlabela--clistctrlcanceleditlabel"></a><a name="canceleditlabel"></a>CListCtrl::CancelEditLabel  
 Annulla l'operazione di modifica testo dell'elemento.  
  
```  
void CancelEditLabel();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_CANCELEDITLABEL](http://msdn.microsoft.com/library/windows/desktop/bb774886) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-nameclistctrla--clistctrlclistctrl"></a><a name="clistctrl"></a>CListCtrl::CListCtrl  
 Costruisce un oggetto `CListCtrl`.  
  
```  
CListCtrl();
```  
  
##  <a name="a-namecreatea--clistctrlcreate"></a><a name="create"></a>CListCtrl::Create  
 Crea un elenco di controllo e lo collega a un `CListCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile del controllo elenco. Applicare qualsiasi combinazione di stili del controllo elenco per il controllo. Vedere [stili di finestra di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774739) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)] per un elenco completo di questi stili. Set specifico di un controllo utilizzando stili estesi [SetExtendedStyle](#setextendedstyle).  
  
 `rect`  
 Specifica le dimensioni e posizione del controllo elenco. Può essere un `CRect` oggetto o un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura.  
  
 `pParentWnd`  
 Specifica finestra padre del controllo elenco, in genere un `CDialog`. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID. del controllo elenco  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Costruire un `CListCtrl` in due passaggi. In primo luogo, chiamare il costruttore, quindi **crea**, che crea il controllo visualizzazione elenco e lo collega a di `CListCtrl` oggetto.  
  
 Per applicare stili estesi di Windows per l'oggetto controllo elenco, chiamare [CreateEx](#createex) anziché **crea**.  
  
### <a name="example"></a>Esempio  

```cpp  
    m_myListCtrl.Create(
        WS_CHILD|WS_VISIBLE|WS_BORDER|LVS_REPORT|LVS_EDITLABELS,
        CRect(10,10,400,200), pParentWnd, IDD_MYLISTCTRL);   
```

  
##  <a name="a-namecreateexa--clistctrlcreateex"></a><a name="createex"></a>CListCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e lo associa a di `CListCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwExStyle`  
 Specifica lo stile esteso di controllo da creare. Per un elenco degli stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 `dwStyle`  
 Specifica lo stile del controllo elenco. Applicare qualsiasi combinazione di stili del controllo elenco per il controllo. Per un elenco completo di questi stili, vedere [stili di finestra di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774739) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) che descrive le dimensioni e posizione della finestra deve essere creata, in coordinate client della struttura `pParentWnd`.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché [crea](#create) per applicare stili estesi di Windows, specificati da precedere Windows stile esteso **WS_EX _**.  
  
 `CreateEx`Crea il controllo con gli stili estesi di Windows specificati da `dwExStyle`. Per impostare gli stili estesi specifici a un controllo, chiamare [SetExtendedStyle](#setextendedstyle). Ad esempio, utilizzare `CreateEx` per impostare questi stili come **WS_EX_CONTEXTHELP**, ma utilizzare `SetExtendedStyle` per impostare questi stili come **LVS_EX_FULLROWSELECT**. Per ulteriori informazioni, vedere gli stili descritti nell'argomento [stili di visualizzazione elenco estesi](http://msdn.microsoft.com/library/windows/desktop/bb774732) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namecreatedragimagea--clistctrlcreatedragimage"></a><a name="createdragimage"></a>CListCtrl::CreateDragImage  
 Crea un elenco di immagini di trascinamento per l'elemento specificato da `nItem`.  
  
```  
CImageList* CreateDragImage(
    int nItem,  
    LPPOINT lpPoint);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice dell'elemento il cui elenco di immagini di trascinamento viene creato.  
  
 `lpPoint`  
 Indirizzo di un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che riceve il percorso iniziale dell'angolo superiore sinistro dell'immagine, le coordinate nella vista.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elenco di immagini trascinare se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Il `CImageList` oggetto è permanente e sarà necessario eliminarlo al termine. Ad esempio:  
  

```cpp  
        CImageList* pImageList = m_myListCtrl.CreateDragImage(nItem, &point);

        // do something

        delete pImageList;
```

  
##  <a name="a-namedeleteallitemsa--clistctrldeleteallitems"></a><a name="deleteallitems"></a>CListCtrl::DeleteAllItems  
 Elimina tutti gli elementi nel controllo visualizzazione elenco.  
  
```  
BOOL DeleteAllItems();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio  

```cpp  
    // Delete all of the items from the list view control.
    m_myListCtrl.DeleteAllItems();
    ASSERT(m_myListCtrl.GetItemCount() == 0);
```

  
##  <a name="a-namedeletecolumna--clistctrldeletecolumn"></a><a name="deletecolumn"></a>CListCtrl::DeleteColumn  
 Elimina una colonna nel controllo visualizzazione elenco.  
  
```  
BOOL DeleteColumn(int nCol);
```  
  
### <a name="parameters"></a>Parametri  
 `nCol`  
 Indice della colonna da eliminare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio  

```cpp  
        int nColumnCount = m_myListCtrl.GetHeaderCtrl()->GetItemCount();

        // Delete all of the columns.
        for (int i=0; i < nColumnCount; i++)
        {
            m_myListCtrl.DeleteColumn(0);
        }
```

  
##  <a name="a-namedeleteitema--clistctrldeleteitem"></a><a name="deleteitem"></a>CListCtrl::DeleteItem  
 Elimina un elemento da un controllo visualizzazione elenco.  
  
```  
BOOL DeleteItem(int nItem);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Specifica l'indice dell'elemento da eliminare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio  
```cpp  
        int nCount = m_myListCtrl.GetItemCount();

        // Delete all of the items from the list view control.
        for (int i=0; i < nCount; i++)
        {
            m_myListCtrl.DeleteItem(0);
        }
```

  
##  <a name="a-namedrawitema--clistctrldrawitem"></a><a name="drawitem"></a>CListCtrl::DrawItem  
 Chiamato dal framework quando un aspetto visivo di un controllo Cambia visualizzazione elenco proprietario.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore long a un `DRAWITEMSTRUCT` struttura che contiene informazioni sul tipo di disegno necessari.  
  
### <a name="remarks"></a>Note  
 Il **itemAction** membro del [DRAWITEMSTRUCT](http://msdn.microsoft.com/library/windows/desktop/bb775802) struttura definisce l'operazione di disegno che deve essere eseguita.  
  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare la creazione per un proprietario `CListCtrl` oggetto.  
  
 L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima di questo membro funzione termina.  
  
##  <a name="a-nameeditlabela--clistctrleditlabel"></a><a name="editlabel"></a>CListCtrl::EditLabel  
 Inizia la modifica sul posto del testo di un elemento.  
  
```  
CEdit* EditLabel(int nItem);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice dell'elemento di visualizzazione dell'elenco che deve essere modificato.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un puntatore per il `CEdit` oggetto che viene utilizzata per modificare il testo dell'elemento; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Un controllo visualizzazione elenco che ha il `LVS_EDITLABELS` stile della finestra consente di modificare le etichette degli elementi sul posto. L'utente inizia a modificare facendo l'etichetta di un elemento con lo stato attivo.  
  
 Utilizzare questa funzione per iniziare la modifica sul posto del testo della voce di visualizzazione elenco specificato.  
  
### <a name="example"></a>Esempio  
```cpp  
        // Make sure the focus is set to the list view control.
        m_myListCtrl.SetFocus();

        // Show the edit control on the label of the first
        // item in the list view control.
        CEdit* pmyEdit = m_myListCtrl.EditLabel(1);
        ASSERT(pmyEdit != NULL);
```

  
##  <a name="a-nameenablegroupviewa--clistctrlenablegroupview"></a><a name="enablegroupview"></a>CListCtrl::EnableGroupView  
 Abilita o disabilita gli elementi in un controllo visualizzazione elenco è visualizzato come un gruppo.  
  
```  
LRESULT EnableGroupView(BOOL fEnable);
```  
  
### <a name="parameters"></a>Parametri  
 `fEnable`  
 Indica se per consentire un controllo listview di gruppo visualizzati gli elementi. **TRUE** per abilitare il raggruppamento. **FALSE** per disabilitarlo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce uno dei valori seguenti:  
  
- **0** la possibilità di visualizzare l'elenco degli elementi di un gruppo è già abilitato o disabilitato.  
  
- **1** lo stato del controllo è stato modificato.  
  
- **-1** l'operazione non riuscita.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_ENABLEGROUPVIEW](http://msdn.microsoft.com/library/windows/desktop/bb774900) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-nameensurevisiblea--clistctrlensurevisible"></a><a name="ensurevisible"></a>CListCtrl::EnsureVisible  
 Assicura che un elemento della visualizzazione elenco sia almeno parzialmente visibile.  
  
```  
BOOL EnsureVisible(
    int nItem,  
    BOOL bPartialOK);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice dell'elemento di visualizzazione dell'elenco che deve essere visibile.  
  
 `bPartialOK`  
 Specifica se la visibilità parziale è accettabile.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Se necessario, è necessario scorrere il controllo visualizzazione elenco. Se il `bPartialOK` parametro è diverso da zero, non lo scorrimento si verifica se l'elemento è parzialmente visibile.  
  
### <a name="example"></a>Esempio  
```cpp  
        // Ensure that the last item is visible.
        int nCount = m_myListCtrl.GetItemCount();
        if (nCount > 0)
            m_myListCtrl.EnsureVisible(nCount-1, FALSE);
```

  
##  <a name="a-namefinditema--clistctrlfinditem"></a><a name="finditem"></a>CListCtrl::FindItem  
 Cerca un elemento della visualizzazione elenco dopo aver specificato le caratteristiche.  
  
```  
int FindItem(
    LVFINDINFO* pFindInfo,  
    int nStart = -1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pFindInfo`  
 Un puntatore a un [LVFINDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774745) struttura contenente informazioni sull'elemento da cercare.  
  
 `nStart`  
 Indice dell'elemento per avviare la ricerca con o -1 per ricominciare dall'inizio. L'elemento in corrispondenza `nStart` esclusi dalla ricerca se `nStart` non è uguale a -1.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'elemento se ha esito positivo oppure -1 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il `pFindInfo` parametro punta a un **LVFINDINFO** struttura che contiene informazioni utilizzate per cercare un elemento della visualizzazione elenco.  
  
### <a name="example"></a>Esempio  

```cpp  
        LVFINDINFO info;
        int nIndex;

        info.flags = LVFI_PARTIAL|LVFI_STRING;
        info.psz = _T("item");

        // Delete all of the items that begin with the string.
        while ((nIndex = m_myListCtrl.FindItem(&info)) != -1)
        {
            m_myListCtrl.DeleteItem(nIndex);
        }
```

  
##  <a name="a-namegetbkcolora--clistctrlgetbkcolor"></a><a name="getbkcolor"></a>CListCtrl::GetBkColor  
 Recupera il colore di sfondo di un controllo visualizzazione elenco.  
  
```  
COLORREF GetBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore a 32 bit utilizzato per specificare un colore RGB.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::SetBkColor](#setbkcolor).  
  
##  <a name="a-namegetbkimagea--clistctrlgetbkimage"></a><a name="getbkimage"></a>CListCtrl::GetBkImage  
 Recupera l'immagine di sfondo corrente di un controllo visualizzazione elenco.  
  
```  
BOOL GetBkImage(LVBKIMAGE* plvbkImage) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `plvbkImage`  
 Un puntatore a un **LVBKIMAGE** struttura contenente l'immagine di sfondo corrente della visualizzazione elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero se ha esito positivo o zero in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento della macro Win32, [ListView_GetBkImage](http://msdn.microsoft.com/library/windows/desktop/bb761246), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  

```cpp  
        LVBKIMAGE bki;

        // If no background image is set for the list view control use
        // the Microsoft homepage image as the background image.
        if (m_myListCtrl.GetBkImage(&bki) && (bki.ulFlags == LVBKIF_SOURCE_NONE))
        {
            m_myListCtrl.SetBkImage(
                _T("http://www.microsoft.com/library/images/gifs/homepage/microsoft.gif"),
                TRUE);
        }
```

  
##  <a name="a-namegetcallbackmaska--clistctrlgetcallbackmask"></a><a name="getcallbackmask"></a>CListCtrl:: GetCallbackMask  
 Recupera la maschera di callback per un controllo visualizzazione elenco.  
  
```  
UINT GetCallbackMask() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Maschera di callback del controllo visualizzazione elenco.  
  
### <a name="remarks"></a>Note  
 Un elemento"callback" è un elemento della visualizzazione elenco per il quale l'applicazione, anziché il controllo, ovvero archivia il testo, icona o entrambi. Anche se un controllo visualizzazione elenco è possibile archiviare questi attributi per l'utente, si consiglia di utilizzare elementi di callback se l'applicazione già gestisce alcune di queste informazioni. Maschera di callback specifica quali bit di stato di elemento sono gestiti dall'applicazione e viene applicato all'intero controllo anziché a un elemento specifico. Maschera di callback è zero per impostazione predefinita, vale a dire che il controllo tiene traccia di tutti gli stati degli elementi. Se un'applicazione utilizza elementi di callback o specifica una maschera di callback diverso da zero, deve essere in grado di fornire l'elenco degli attributi di elemento di visualizzazione su richiesta.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::SetCallbackMask](#setcallbackmask).  
  
##  <a name="a-namegetchecka--clistctrlgetcheck"></a><a name="getcheck"></a>CListCtrl::GetCheck  
 Recupera lo stato di visualizzazione corrente dell'immagine di stato associato a un elemento.  
  
```  
BOOL GetCheck(int nItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice in base zero di un elemento controllo elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è selezionato, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetCheckState](http://msdn.microsoft.com/library/windows/desktop/bb761250), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::SetCheck](#setcheck).  
  
##  <a name="a-namegetcolumna--clistctrlgetcolumn"></a><a name="getcolumn"></a>CListCtrl::GetColumn  
 Recupera gli attributi della colonna del controllo di visualizzazione elenco.  
  
```  
BOOL GetColumn(
    int nCol,  
    LVCOLUMN* pColumn) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nCol`  
 Indice della colonna i cui attributi devono essere recuperate.  
  
 `pColumn`  
 Indirizzo di un [LVCOLUMN](http://msdn.microsoft.com/library/windows/desktop/bb774743) struttura che specifica le informazioni da recuperare e riceve informazioni sulla colonna. Il **mask** membro specifica quale colonna di attributi da recuperare. Se il **mask** membro specifica di `LVCF_TEXT` valore, il **pszText** membro deve contenere l'indirizzo del buffer che riceve il testo dell'elemento e il **cchTextMax** membro deve specificare la dimensione del buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Il **LVCOLUMN** struttura contiene informazioni su una colonna nella visualizzazione report.  
  
### <a name="example"></a>Esempio  

```cpp  
        LVCOLUMN col;

        col.mask = LVCF_WIDTH;

        // Double the column width of the first column.
        if (m_myListCtrl.GetColumn(0, &col))
        {
            col.cx *= 2;
            m_myListCtrl.SetColumn(0, &col);
        }
```

  
##  <a name="a-namegetcolumnorderarraya--clistctrlgetcolumnorderarray"></a><a name="getcolumnorderarray"></a>CListCtrl::GetColumnOrderArray  
 Recupera l'ordine delle colonne (da sinistra a destra) di un controllo visualizzazione elenco.  
  
```  
BOOL GetColumnOrderArray(
    LPINT piArray,  
    int iCount = -1);
```  
  
### <a name="parameters"></a>Parametri  
 `piArray`  
 Un puntatore a un buffer che conterrà i valori di indice delle colonne nel controllo di visualizzazione elenco. Il buffer deve essere abbastanza grande per contenere il numero totale di colonne nel controllo di visualizzazione elenco.  
  
 `iCount`  
 Numero di colonne nel controllo di visualizzazione elenco. Se questo parametro è -1, il numero di colonne viene recuperato automaticamente dal framework.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetColumnOrderArray](http://msdn.microsoft.com/library/windows/desktop/bb761254), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  

```cpp  
        // Reverse the order of the columns in the list view control
        // (i.e. make the first column the last, the last column
        // the first, and so on...).
        CHeaderCtrl* pHeaderCtrl = m_myListCtrl.GetHeaderCtrl();

        if (pHeaderCtrl != NULL)
        {
            int  nColumnCount = pHeaderCtrl->GetItemCount();
            LPINT pnOrder = (LPINT) malloc(nColumnCount*sizeof(int));
            ASSERT(pnOrder != NULL);
m_myListCtrl.GetColumnOrderArray(pnOrder, nColumnCount);

            int i, j, nTemp;
            for (i = 0, j = nColumnCount-1; i < j; i++, j--)
            {
                nTemp = pnOrder[i];
                pnOrder[i] = pnOrder[j];
                pnOrder[j] = nTemp;
            }

            m_myListCtrl.SetColumnOrderArray(nColumnCount, pnOrder);
            free(pnOrder);
        }
```

  
##  <a name="a-namegetcolumnwidtha--clistctrlgetcolumnwidth"></a><a name="getcolumnwidth"></a>CListCtrl::GetColumnWidth  
 Recupera la larghezza di una colonna nella visualizzazione elenco o report.  
  
```  
int GetColumnWidth(int nCol) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nCol`  
 Specifica l'indice della colonna la cui larghezza è da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza, in pixel, della colonna specificata da `nCol`.  
  
### <a name="example"></a>Esempio  

```cpp  
        // Increase the column width of the second column by 20.
        int nWidth = m_myListCtrl.GetColumnWidth(1);
        m_myListCtrl.SetColumnWidth(1, 20 + nWidth);
```

  
##  <a name="a-namegetcountperpagea--clistctrlgetcountperpage"></a><a name="getcountperpage"></a>CListCtrl::GetCountPerPage  
 Calcola il numero di elementi che è possibile adattare verticalmente l'area visibile del controllo di visualizzazione elenco in visualizzazione elenco o report.  
  
```  
int GetCountPerPage() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi che è possibile adattare verticalmente l'area visibile del controllo di visualizzazione elenco in visualizzazione elenco o report.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetTopIndex](#gettopindex).  
  
##  <a name="a-namegeteditcontrola--clistctrlgeteditcontrol"></a><a name="geteditcontrol"></a>CListCtrl::GetEditControl  
 Recupera l'handle del controllo di modifica utilizzato per modificare il testo dell'elemento di visualizzazione elenco.  
  
```  
CEdit* GetEditControl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un puntatore per il [CEdit](cedit-class.md) oggetto che viene utilizzata per modificare il testo dell'elemento; in caso contrario **NULL**.  
  
### <a name="example"></a>Esempio  

```cpp  
        // The string replacing the text in the edit control.
        LPCTSTR lpszmyString = _T("custom label!");

        // If possible, replace the text in the label edit control.
        CEdit* pEdit = m_myListCtrl.GetEditControl();

        if (pEdit != NULL)
        {
            pEdit->SetWindowText(lpszmyString);
        }
```

  
##  <a name="a-namegetemptytexta--clistctrlgetemptytext"></a><a name="getemptytext"></a>CListCtrl::GetEmptyText  
 Recupera la stringa da visualizzare se il controllo visualizzazione elenco corrente è vuoto.  
  
```  
CString GetEmptyText() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il testo da visualizzare se il controllo è vuoto.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [LVM_GETEMPTYTEXT](http://msdn.microsoft.com/library/windows/desktop/bb774921) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetextendedstylea--clistctrlgetextendedstyle"></a><a name="getextendedstyle"></a>CListCtrl::GetExtendedStyle  
 Recupera gli stili estesi correnti di un controllo visualizzazione elenco.  
  
```  
DWORD GetExtendedStyle();
```  
  
### <a name="return-value"></a>Valore restituito  
 Una combinazione degli stili estesi attualmente in uso dall'elenco di controllo di visualizzazione. Per un elenco descrittivo di questi stili estesi, vedere il [stili di visualizzazione elenco estesi](http://msdn.microsoft.com/library/windows/desktop/bb774732) argomento in di [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetExtendedListViewStyle](http://msdn.microsoft.com/library/windows/desktop/bb761264), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl:: SetExtendedStyle](#setextendedstyle).  
  
##  <a name="a-namegetfirstselecteditempositiona--clistctrlgetfirstselecteditemposition"></a><a name="getfirstselecteditemposition"></a>CListCtrl::GetFirstSelectedItemPosition  
 Ottiene la posizione del primo elemento selezionato nel controllo di visualizzazione elenco.  
  
```  
POSITION GetFirstSelectedItemPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per l'iterazione o il recupero degli oggetti puntatore; **NULL** se nessun elemento selezionato.  
  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato l'utilizzo di questa funzione.  
  

```cpp  
        POSITION pos = m_myListCtrl.GetFirstSelectedItemPosition();
        if (pos == NULL)
        {
            TRACE(_T("No items were selected!\n"));
        }
        else
        {
            while (pos)
            {
                int nItem = m_myListCtrl.GetNextSelectedItem(pos);
                TRACE(_T("Item %d was selected!\n"), nItem);
                // you could do your own processing on nItem here
            }
        }
```

  
##  <a name="a-namegetfocusedgroupa--clistctrlgetfocusedgroup"></a><a name="getfocusedgroup"></a>CListCtrl::GetFocusedGroup  
 Recupera il gruppo che ha lo stato attivo nel controllo visualizzazione elenco corrente.  
  
```  
int GetFocusedGroup() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del gruppo del cui stato è `LVGS_FOCUSED`, se è presente un gruppo; in caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [LVM_GETFOCUSEDGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774925) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. Per ulteriori informazioni, vedere il `LVGS_FOCUSED` valore di `state` membro del [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) struttura.  
  
##  <a name="a-namegetgroupcounta--clistctrlgetgroupcount"></a><a name="getgroupcount"></a>CListCtrl::GetGroupCount  
 Recupera il numero di gruppi del controllo visualizzazione elenco corrente.  
  
```  
int GetGroupCount()const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di gruppi nel controllo visualizzazione elenco.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [LVM_GETGROUPCOUNT](http://msdn.microsoft.com/library/windows/desktop/bb774931) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)] -->.  
  
##  <a name="a-namegetgroupinfoa--clistctrlgetgroupinfo"></a><a name="getgroupinfo"></a>CListCtrl::GetGroupInfo  
 Ottiene le informazioni per un gruppo specifico di controllo di visualizzazione elenco.  
  
```  
int GetGroupInfo(
    int iGroupId,  
    PLVGROUP pgrp) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `iGroupId`  
 L'identificatore del gruppo le cui informazioni da recuperare.  
  
 `pgrp`  
 Un puntatore per il [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) contenente le informazioni sul gruppo specificato.  
  
### <a name="return-value"></a>Valore restituito  
 In caso contrario, restituisce l'ID del gruppo se ha esito positivo o -1.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_GETGROUPINFO](http://msdn.microsoft.com/library/windows/desktop/bb774932) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetgroupinfobyindexa--clistctrlgetgroupinfobyindex"></a><a name="getgroupinfobyindex"></a>CListCtrl::GetGroupInfoByIndex  
 Recupera le informazioni relative a un gruppo specificato nel controllo visualizzazione elenco corrente.  
  
```  
BOOL GetGroupInfoByIndex(
    int iIndex,   
    PLVGROUP pGroup) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iIndex`|Indice in base zero di un gruppo.|  
|[out] `pGroup`|Puntatore a un [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) struttura che riceve le informazioni relative al gruppo specificato per il `iIndex` parametro.<br /><br /> Il chiamante è responsabile per l'inizializzazione di membri di [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) struttura. Impostare il `cbSize` membro alla dimensione della struttura e i flag del `mask` membro per specificare le informazioni da recuperare.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [LVM_GETGROUPINFOBYINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774933) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)] -->.  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce una variabile, `m_listCtrl`, che viene utilizzato per accedere al controllo visualizzazione elenco corrente. Questa variabile viene usata nell'esempio riportato di seguito.  

```cpp  
public:
    // Variable used to access the list control.
    CListCtrl m_listCtrl; 
```

  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato il `GetGroupInfoByIndex` metodo. In una sezione precedente di questo codice di esempio viene creato un controllo visualizzazione elenco che visualizza due colonne intitolate "ClientID" e "Livello" in una visualizzazione di report. Esempio di codice seguente recupera informazioni relative al gruppo il cui indice è 0, se esiste un gruppo.    
```cpp  
    // GetGroupInfoByIndex
    const int GROUP_HEADER_BUFFER_SIZE = 40;

// Initialize the structure 
    LVGROUP gInfo = {0};
    gInfo.cbSize = sizeof(LVGROUP);
    wchar_t wstrHeadGet[GROUP_HEADER_BUFFER_SIZE] = {0};
    gInfo.cchHeader = GROUP_HEADER_BUFFER_SIZE;
    gInfo.pszHeader = wstrHeadGet;
    gInfo.mask = (LVGF_ALIGN | LVGF_STATE | LVGF_HEADER | LVGF_GROUPID);
    gInfo.state = LVGS_NORMAL;
    gInfo.uAlign  = LVGA_HEADER_LEFT;

    BOOL bRet = m_listCtrl.GetGroupInfoByIndex( 0, &gInfo );
    if (bRet == TRUE) {
        CString strHeader = CString( gInfo.pszHeader );
        CString str;
        str.Format(_T("Header: '%s'"), strHeader);
        AfxMessageBox(str, MB_ICONINFORMATION);
    }
    else
    {
        AfxMessageBox(_T("No group information was retrieved."));
    }
```

  
##  <a name="a-namegetgroupmetricsa--clistctrlgetgroupmetrics"></a><a name="getgroupmetrics"></a>CListCtrl::GetGroupMetrics  
 Recupera le metriche di un gruppo.  
  
```  
void GetGroupMetrics(PLVGROUPMETRICS pGroupMetrics) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pGroupMetrics`  
 Un puntatore a un [LVGROUPMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb774752) contenente le informazioni delle metriche di gruppo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_GETGROUPMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb774934) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetgrouprecta--clistctrlgetgrouprect"></a><a name="getgrouprect"></a>CListCtrl::GetGroupRect  
 Recupera il rettangolo di delimitazione per un gruppo specificato nel controllo visualizzazione elenco corrente.  
  
```  
BOOL GetGroupRect(
    int iGroupId,   
    LPRECT lpRect,   
    int iCoords = LVGGR_GROUP) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iGroupId`|Specifica un gruppo.|  
|[in, out] `lpRect`|Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura. Se questo metodo ha esito positivo, la struttura riceve le coordinate del rettangolo del gruppo specificato da `iGroupId`.|  
|[in] `iCoords`|Specifica le coordinate del rettangolo da recuperare. Utilizzare uno dei valori seguenti:<br /><br /> - `LVGGR_GROUP`-Le coordinate (impostazione predefinita) l'intero gruppo espanso.<br />- `LVGGR_HEADER`-Le coordinate del solo l'intestazione (gruppo compresso).<br />- `LVGGR_SUBSETLINK`-Le coordinate del solo il collegamento sottoinsieme (subset di markup).|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Il chiamante è responsabile dell'allocazione di [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura a cui punta il `pRect` parametro.  
  
 Questo metodo invia il [LVM_GETGROUPRECT](http://msdn.microsoft.com/library/windows/desktop/bb774935) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce una variabile, `m_listCtrl`, che viene utilizzato per accedere al controllo visualizzazione elenco corrente. Questa variabile viene usata nell'esempio riportato di seguito.    
```cpp  
public:
    // Variable used to access the list control.
    CListCtrl m_listCtrl; 
```

  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato il `GetGroupRect` metodo. In una sezione precedente di questo esempio di codice, sono stati creati un controllo visualizzazione elenco che visualizza due colonne intitolate "ClientID" e "Livello" in una visualizzazione di report. Nell'esempio seguente disegna un rettangolo 3D intorno al gruppo il cui indice è 0, se esiste un gruppo.    
  
```cpp  
    // GetGroupRect

    // Get the graphics rectangle that surrounds group 0.
    CRect rect;
    BOOL bRet = m_listCtrl.GetGroupRect( 0, &rect, LVGGR_GROUP); 
    // Draw a blue rectangle around group 0.
    if (bRet == TRUE) {
        m_listCtrl.GetDC()->Draw3dRect( &rect, RGB(0, 0, 255), RGB(0, 0, 255));
    }
    else {
        AfxMessageBox(_T("No group information was retrieved."), MB_ICONINFORMATION);
    }
```

  
##  <a name="a-namegetgroupstatea--clistctrlgetgroupstate"></a><a name="getgroupstate"></a>CListCtrl::GetGroupState  
 Recupera lo stato di un gruppo specificato nel controllo visualizzazione elenco corrente.  
  
```  
UINT GetGroupState(
    int iGroupId,   
    DWORD dwMask) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iGroupId`|Indice in base zero di un gruppo.|  
|[in] `dwMask`|Maschera che specifica il valore di stato da recuperare per il gruppo specificato. Per ulteriori informazioni, vedere il `mask` membro del [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) struttura.|  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato richiesto per il gruppo specificato, oppure 0 se non è possibile trovare il gruppo.  
  
### <a name="remarks"></a>Note  
 Il valore restituito è il risultato di un'operazione con AND bit per bit sul `dwMask` parametro e il valore di `state` membro di un [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) struttura che rappresenta il controllo visualizzazione elenco corrente.  
  
 Questo metodo invia il [LVM_GETGROUPSTATE](http://msdn.microsoft.com/library/windows/desktop/bb774936) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. Per ulteriori informazioni, vedere il [ListView_GetGroupState](http://msdn.microsoft.com/library/windows/desktop/bb761288) (macro).  
  
##  <a name="a-namegetheaderctrla--clistctrlgetheaderctrl"></a><a name="getheaderctrl"></a>CListCtrl::GetHeaderCtrl  
 Recupera il controllo intestazione di un controllo visualizzazione elenco.  
  
```  
CHeaderCtrl* GetHeaderCtrl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al controllo header, utilizzato dal controllo visualizzazione elenco.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetHeader](http://msdn.microsoft.com/library/windows/desktop/bb761290), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetColumnOrderArray](#getcolumnorderarray).  
  
##  <a name="a-namegethotcursora--clistctrlgethotcursor"></a><a name="gethotcursor"></a>CListCtrl::GetHotCursor  
 Recupera il cursore utilizzato quando è abilitata la funzionalità di intercettazione per un controllo visualizzazione elenco.  
  
```  
HCURSOR GetHotCursor();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per la risorsa cursore attivo corrente utilizzata dal controllo visualizzazione elenco.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetHotCursor](http://msdn.microsoft.com/library/windows/desktop/bb761292), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. Il cursore a caldo, visibile solo quando la selezione è abilitata, viene visualizzato quando il cursore viene posizionato su qualsiasi elemento della visualizzazione elenco. La selezione viene abilitata impostando la **LVS_EX_TRACKSELECT** stile esteso.  
  
### <a name="example"></a>Esempio    
  
```cpp  
        // Set the hot cursor to be the system app starting cursor.
        HCURSOR hCursor = ::LoadCursor(NULL, IDC_APPSTARTING);
        m_myListCtrl.SetHotCursor(hCursor);
        ASSERT(m_myListCtrl.GetHotCursor() == hCursor);
```

  
##  <a name="a-namegethotitema--clistctrlgethotitem"></a><a name="gethotitem"></a>CListCtrl::GetHotItem  
 Recupera l'elemento di visualizzazione elenco attualmente sotto il cursore.  
  
```  
int GetHotItem();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento attivo corrente del controllo di visualizzazione elenco.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetHotItem](http://msdn.microsoft.com/library/windows/desktop/bb761294), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. L'elemento attivo viene definito come l'elemento attualmente selezionato quando a caldo di rilevamento (e passare il puntatore di selezione) è abilitato.  
  
 Se l'intercettazione è abilitata, quando un utente posiziona su un elemento della visualizzazione elenco, l'etichetta dell'elemento viene evidenziato automaticamente senza l'utilizzo di un pulsante del mouse.  
  
### <a name="example"></a>Esempio    
  
```cpp  
    // Set the hot item to the first item only if no other item is 
    // highlighted.
    if (m_myListCtrl.GetHotItem() == -1)
        m_myListCtrl.SetHotItem(0);
```

  
##  <a name="a-namegethovertimea--clistctrlgethovertime"></a><a name="gethovertime"></a>CListCtrl::GetHoverTime  
 Recupera l'intervallo di tempo corrente di un controllo visualizzazione elenco.  
  
```  
DWORD GetHoverTime() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il ritardo, in millisecondi, che deve posizionare il cursore del mouse su un elemento prima che venga selezionato. Se il valore restituito è -1, l'intervallo di tempo è l'intervallo di tempo predefinito.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetHoverTime](http://msdn.microsoft.com/library/windows/desktop/bb761296), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio    
  
```cpp  
        // If the hover time is the default set to 1 sec.
        DWORD dwTime = m_myListCtrl.GetHoverTime();
        if (dwTime == -1)
            m_myListCtrl.SetHoverTime(1000);
```

  
##  <a name="a-namegetimagelista--clistctrlgetimagelist"></a><a name="getimagelist"></a>CListCtrl::GetImageList  
 Recupera l'handle di un elenco di immagini utilizzato per gli elementi di visualizzazione elenco disegno.  
  
```  
CImageList* GetImageList(int nImageList) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nImageList`  
 Valore che specifica l'elenco di immagini da recuperare. Può essere uno dei valori seguenti:  
  
- `LVSIL_NORMAL`Elenco di immagini con icone grandi.  
  
- `LVSIL_SMALL`Elenco di immagini con icone piccole.  
  
- `LVSIL_STATE`Elenco di immagini con le immagini di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'elenco di immagini utilizzato per la creazione di voci della visualizzazione elenco.  
  
### <a name="example"></a>Esempio    
  
```cpp  
        ASSERT(m_myListCtrl.GetImageList(LVSIL_NORMAL) == NULL);
m_myListCtrl.SetImageList(&m_lcImageList, LVSIL_NORMAL);
        ASSERT(m_myListCtrl.GetImageList(LVSIL_NORMAL) == &m_lcImageList);
```

  
##  <a name="a-namegetinsertmarka--clistctrlgetinsertmark"></a><a name="getinsertmark"></a>CListCtrl::GetInsertMark  
 Recupera la posizione corrente del segno di inserimento.  
  
```  
BOOL GetInsertMark(LPLVINSERTMARK lvim) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lvim`  
 Un puntatore a un [LVINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb774758) struttura contenente le informazioni per il segno di inserimento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** se ha esito positivo, o **FALSE** in caso contrario. **FALSE** viene restituito se la dimensione nel `cbSize` membro del **LVINSERTMARK** struttura sono uguali alle dimensioni effettive della struttura.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_GETINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb774945) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetinsertmarkcolora--clistctrlgetinsertmarkcolor"></a><a name="getinsertmarkcolor"></a>CListCtrl::GetInsertMarkColor  
 Recupera il colore corrente del segno di inserimento.  
  
```  
COLORREF GetInsertMarkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) struttura che contiene il colore del punto di inserimento.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_GETINSERTMARKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774947) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetinsertmarkrecta--clistctrlgetinsertmarkrect"></a><a name="getinsertmarkrect"></a>CListCtrl::GetInsertMarkRect  
 Recupera il rettangolo che delimita il punto di inserimento.  
  
```  
int GetInsertMarkRect(LPRECT pRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pRect`  
 Puntatore a un `RECT` struttura che contiene le coordinate di un rettangolo che limita il punto di inserimento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce uno dei valori seguenti:  
  
- **0** punto di inserimento non trovato.  
  
- **1** trovare il punto di inserimento.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_GETINSERTMARKRECT](http://msdn.microsoft.com/library/windows/desktop/bb774949) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetitema--clistctrlgetitem"></a><a name="getitem"></a>CListCtrl:: GetItem  
 Consente di recuperare alcuni o tutti gli attributi dell'elemento di visualizzazione elenco.  
  
```  
BOOL GetItem(LVITEM* pItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore a un [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura che riceve gli attributi dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Il **LVITEM** struttura specifica o riceve gli attributi di un elemento di visualizzazione elenco.  
  
##  <a name="a-namegetitemcounta--clistctrlgetitemcount"></a><a name="getitemcount"></a>CListCtrl::GetItemCount  
 Recupera il numero di elementi in un controllo visualizzazione elenco.  
  
```  
int GetItemCount() const; 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nel controllo di visualizzazione elenco.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::DeleteItem](#deleteitem).  
  
##  <a name="a-namegetitemdataa--clistctrlgetitemdata"></a><a name="getitemdata"></a>CListCtrl::GetItemData  
 Recupera il valore specifico dell'applicazione a 32 bit associato all'elemento specificato da `nItem`.  
  
```  
DWORD_PTR GetItemData(int nItem) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice dell'elemento dell'elenco i cui dati sono da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore specifico dell'applicazione a 32 bit associato all'elemento specificato.  
  
### <a name="remarks"></a>Note  
 Questo valore è il **lParam** membro del [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura, come descritto nel[!INCLUDE[winSDK](./includes/winsdk_md.md)]  
  
### <a name="example"></a>Esempio  

```cpp  
    // If any item's data is equal to zero then reset it to -1.
    for (int i=0; i < m_myListCtrl.GetItemCount(); i++)
    {
        if (m_myListCtrl.GetItemData(i) == 0)
        {
            m_myListCtrl.SetItemData(i, (DWORD) -1);
        }
    }
```

  
##  <a name="a-namegetitemindexrecta--clistctrlgetitemindexrect"></a><a name="getitemindexrect"></a>CListCtrl::GetItemIndexRect  
 Recupera il rettangolo di delimitazione per tutta o parte di un elemento secondario nel controllo visualizzazione elenco corrente.  
  
```  
BOOL GetItemIndexRect(
    PLVITEMINDEX pItemIndex,   
    int iColumn,   
    int rectType,   
    LPRECT pRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pItemIndex`|Puntatore a un [LVITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774762) struttura per l'elemento padre dell'elemento secondario.<br /><br /> Il chiamante è responsabile dell'allocazione e i membri dell'impostazione di [LVITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774762) struttura. Questo parametro non può essere `NULL`.|  
|[in] `iColumn`|Indice in base zero di una colonna nel controllo.|  
|[in] `rectType`|Parte dell'elemento secondario visualizzazione elenco per cui viene recuperato il rettangolo di delimitazione. Specificare uno dei seguenti valori:<br /><br /> `LVIR_BOUNDS`-Restituisce il rettangolo di delimitazione dell'elemento secondario intera, compresi etichetta e l'icona.<br /><br /> `LVIR_ICON`-Restituisce il rettangolo di delimitazione dell'icona o icona di piccole dimensioni dell'elemento secondario.<br /><br /> `LVIR_LABEL`-Restituisce il rettangolo di delimitazione del testo dell'elemento secondario.|  
|[out] `pRect`|Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceve le informazioni relative al rettangolo di delimitazione dell'elemento secondario.<br /><br /> Il chiamante è responsabile dell'allocazione di [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura. Questo parametro non può essere `NULL`.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [LVM_GETITEMINDEXRECT](http://msdn.microsoft.com/library/windows/desktop/bb761046) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. Per ulteriori informazioni, vedere [ListView_GetItemIndexRect Macro](http://msdn.microsoft.com/library/windows/desktop/bb774959).  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce una variabile, `m_listCtrl`, che viene utilizzato per accedere al controllo visualizzazione elenco corrente. Questa variabile viene usata nell'esempio riportato di seguito.    
  
```cpp  
public:
    // Variable used to access the list control.
    CListCtrl m_listCtrl; 
```

  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato il `GetGroupRect` metodo. Prima di inserire il codice riportato di seguito viene creato un controllo visualizzazione elenco che visualizza due colonne intitolate "ClientID" e "Livello" in una visualizzazione di report. Nell'esempio seguente disegna un rettangolo 3D intorno dell'elemento secondario di secondo in entrambe le colonne.    
  
```cpp  
    // GetItemIndexRect
    // Get the rectangle that bounds the second item in the first group.
    LVITEMINDEX lvItemIndex;
    lvItemIndex.iGroup = 0;
    lvItemIndex.iItem = 1;
    CRect rect;
    BOOL bRet = m_listCtrl.GetItemIndexRect(
        &lvItemIndex, 0, LVIR_BOUNDS, &rect);

    // Draw a red rectangle around the item.
    m_listCtrl.GetDC()->Draw3dRect( &rect, RGB(255, 0, 0), RGB(255, 0, 0) );
```

  
##  <a name="a-namegetitempositiona--clistctrlgetitemposition"></a><a name="getitemposition"></a>CListCtrl::GetItemPosition  
 Recupera la posizione di un elemento di visualizzazione elenco.  
  
```  
BOOL GetItemPosition(
    int nItem,  
    LPPOINT lpPoint) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 L'indice dell'elemento la cui posizione è da recuperare.  
  
 `lpPoint`  
 Indirizzo di un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che riceve la posizione dell'angolo superiore sinistro dell'elemento, le coordinate nella vista.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio    
  
```cpp  
        POINT pt;

        // Move all items in the list control 100 pixels to the right.
        UINT i, nCount = m_myListCtrl.GetItemCount();

        for (i=0; i < nCount; i++)
        {
            m_myListCtrl.GetItemPosition(i, &pt);
            pt.x += 100;
            m_myListCtrl.SetItemPosition(i, pt);
        }   
```

  
##  <a name="a-namegetitemrecta--clistctrlgetitemrect"></a><a name="getitemrect"></a>CListCtrl::GetItemRect  
 Recupera il rettangolo di delimitazione per tutta o parte di un elemento nella visualizzazione corrente.  
  
```  
BOOL GetItemRect(
    int nItem,  
    LPRECT lpRect,  
    UINT nCode) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 L'indice dell'elemento la cui posizione è da recuperare.  
  
 `lpRect`  
 Indirizzo di un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceve il rettangolo di delimitazione.  
  
 `nCode`  
 Parte dell'elemento di visualizzazione elenco per il quale recuperare il rettangolo di delimitazione. Può essere uno dei valori seguenti:  
  
- `LVIR_BOUNDS`Restituisce il rettangolo di delimitazione dell'intero elemento, compresi etichetta e l'icona.  
  
- `LVIR_ICON`Restituisce il rettangolo di delimitazione dell'icona o icone piccole.  
  
- `LVIR_LABEL`Restituisce il rettangolo di delimitazione del testo dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio    
  
```cpp  
// OnClick is the handler for the NM_CLICK notification
void CListCtrlDlg::OnClick(NMHDR* pNMHDR, LRESULT* pResult)
{
    UNREFERENCED_PARAMETER(pResult);
LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;

    // Get the current mouse location and convert it to client
    // coordinates.
    CPoint pos( ::GetMessagePos() ); 
    ScreenToClient(&pos);

    // Get indexes of the first and last visible items in 
    // the listview control.
    int index = m_myListCtrl.GetTopIndex();
    int last_visible_index = index + m_myListCtrl.GetCountPerPage();
    if (last_visible_index > m_myListCtrl.GetItemCount())
        last_visible_index = m_myListCtrl.GetItemCount();

    // Loop until number visible items has been reached.
    while (index <= last_visible_index)
    {
        // Get the bounding rectangle of an item. If the mouse
        // location is within the bounding rectangle of the item,
        // you know you have found the item that was being clicked.
        CRect r;
        m_myListCtrl.GetItemRect(index, &r, LVIR_BOUNDS);
        if (r.PtInRect(pia->ptAction))
        {
            UINT flag = LVIS_SELECTED | LVIS_FOCUSED;
            m_myListCtrl.SetItemState(index, flag, flag);
            break;
        }

        // Get the next item in listview control.
        index++;
    }
}
```

  
##  <a name="a-namegetitemspacinga--clistctrlgetitemspacing"></a><a name="getitemspacing"></a>CListCtrl::GetItemSpacing  
 Calcola la spaziatura tra gli elementi del controllo visualizzazione elenco corrente.  
  
```  
BOOL GetItemSpacing(
    BOOL fSmall,   
    int* pnHorzSpacing,   
    int* pnVertSpacing) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `fSmall`|Visualizzazione per il quale recuperare la spaziatura di elemento. Specificare `true` per la visualizzazione di icone piccole o `false` per la visualizzazione a icone.|  
|[out] `pnHorzSpacing`|Contiene la spaziatura orizzontale tra gli elementi.|  
|[out] `pnVertSpacing`|Contiene la spaziatura verticale tra gli elementi.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [LVM_GETITEMSPACING](http://msdn.microsoft.com/library/windows/desktop/bb761051) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetitemstatea--clistctrlgetitemstate"></a><a name="getitemstate"></a>CListCtrl::GetItemState  
 Recupera lo stato di un elemento di visualizzazione elenco.  
  
```  
UINT GetItemState(
    int nItem,  
    UINT nMask) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 L'indice dell'elemento il cui stato è da recuperare.  
  
 `nMask`  
 Maschera che specifica quali lo stato dell'elemento flag da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 I flag di stato per l'elenco specificato di visualizzare l'elemento.  
  
### <a name="remarks"></a>Note  
 Stato di un elemento specificato dal **stato** membro del [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. Quando si specifica o si modifica lo stato di un elemento, il **stateMask** membro specifica quali bit di stato che si desidera modificare.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetTopIndex](#gettopindex).  
  
##  <a name="a-namegetitemtexta--clistctrlgetitemtext"></a><a name="getitemtext"></a>CListCtrl::GetItemText  
 Recupera il testo di un elemento della visualizzazione elenco o un elemento secondario.  
  
```  
int GetItemText(
    int nItem,  
    int nSubItem,  
    LPTSTR lpszText,  
    int nLen) const; 
 
CString GetItemText(
    int nItem,  
    int nSubItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 L'indice dell'elemento il cui testo è da recuperare.  
  
 `nSubItem`  
 Specifica l'elemento secondario il cui testo è da recuperare.  
  
 `lpszText`  
 Puntatore a una stringa che riceverà il testo dell'elemento.  
  
 `nLen`  
 Lunghezza del buffer a cui puntava `lpszText`.  
  
### <a name="return-value"></a>Valore restituito  
 La versione restituzione `int` restituisce la lunghezza della stringa recuperata.  
  
 La versione di restituzione di un `CString` restituisce il testo dell'elemento.  
  
### <a name="remarks"></a>Note  
 Se `nSubItem` è zero, questa funzione recupera l'etichetta dell'elemento; se `nSubItem` è diverso da zero, viene recuperato il testo dell'elemento secondario. Per ulteriori informazioni sull'argomento dell'elemento secondario, vedere la discussione relativa il [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetnextitema--clistctrlgetnextitem"></a><a name="getnextitem"></a>CListCtrl::GetNextItem  
 Cerca un elenco Visualizza l'elemento che dispone delle proprietà specificate e che contiene la relazione specificata a un determinato elemento.  
  
```  
int GetNextItem(
    int nItem,  
    int nFlags) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice dell'elemento da cui iniziare la ricerca con o -1 per individuare il primo elemento che corrisponde ai flag specificati. L'elemento specificato stesso viene escluso dalla ricerca.  
  
 `nFlags`  
 Relazione geometrica dell'elemento richiesto per l'elemento specificato e lo stato dell'elemento richiesto. La relazione geometrica può essere uno dei valori seguenti:  
  
- `LVNI_ABOVE`Cerca un elemento che si trova sopra l'elemento specificato.  
  
- `LVNI_ALL`Cerca un elemento successivo in base all'indice (valore predefinito).  
  
- `LVNI_BELOW`Cerca un elemento che si trova sotto l'elemento specificato.  
  
- `LVNI_TOLEFT`Cerca un elemento a sinistra dell'elemento specificato.  
  
- `LVNI_TORIGHT`Cerca un elemento a destra dell'elemento specificato.  
  
 Lo stato può essere zero o può essere uno o più dei valori seguenti:  
  
- `LVNI_DROPHILITED`L'elemento è il `LVIS_DROPHILITED` set di flag di stato.  
  
- `LVNI_FOCUSED`L'elemento è il `LVIS_FOCUSED` set di flag di stato.  
  
- `LVNI_SELECTED`L'elemento è il `LVIS_SELECTED` set di flag di stato.  
  
 Se un elemento non dispone di tutti i set di flag di stato specificato, la ricerca prosegue con l'elemento successivo.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'elemento successivo, se ha esito positivo oppure -1 in caso contrario.  
  
##  <a name="a-namegetnextitemindexa--clistctrlgetnextitemindex"></a><a name="getnextitemindex"></a>CListCtrl::GetNextItemIndex  
 Recupera l'indice dell'elemento nel controllo visualizzazione elenco corrente con un set di proprietà specificato.  
  
```  
BOOL GetNextItemIndex(
    PLVITEMINDEX pItemIndex,   
    int nFlags) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in, out] `pItemIndex`|Puntatore al [LVITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774762) struttura che descrive l'elemento in cui inizia la ricerca, oppure -1 per individuare il primo elemento che corrisponde ai flag di `nFlags` parametro.<br /><br /> Se questo metodo dà esito positivo, il `LVITEMINDEX` struttura descrive l'elemento trovato dalla ricerca.|  
|[in] `nFlags`|Combinazione bit per bit (OR) di flag che specificano come eseguire la ricerca.<br /><br /> La ricerca può dipendere l'indice, stato o l'aspetto dell'elemento di destinazione o la posizione fisica dell'elemento di destinazione rispetto alla voce specificata da di `pItemIndex` parametro. Per ulteriori informazioni, vedere il `flags` parametro il [LVM_GETNEXTITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb761059) messaggio.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Il chiamante è responsabile dell'allocazione e impostando i membri del `LVITEMINDEX` struttura a cui punta il `pItemIndex` parametro.  
  
 Questo metodo invia il [LVM_GETNEXTITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb761059) messaggio, che è descritta in Windows SDK.  
  
##  <a name="a-namegetnextselecteditema--clistctrlgetnextselecteditem"></a><a name="getnextselecteditem"></a>CListCtrl::GetNextSelectedItem  
 Ottiene l'indice dell'elemento identificato da `pos`, quindi imposta *pos* per il **posizione** valore.  
  
```  
int GetNextSelectedItem(POSITION& pos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Un riferimento a un **posizione** valore restituito da una precedente chiamata a `GetNextSelectedItem` o `GetFirstSelectedItemPosition`. Il valore viene aggiornato alla posizione successiva da questa chiamata.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento identificato da `pos`.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare `GetNextSelectedItem` in un ciclo di iterazione in avanti, se si stabilisce la posizione iniziale con una chiamata a `GetFirstSelectedItemPosition`.  
  
 È necessario assicurarsi che il **posizione** valore è valido. Se non è valido, la versione di Debug della libreria Microsoft Foundation Class asserisce.  
  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato l'utilizzo di questa funzione.    
  
```cpp  
        POSITION pos = m_myListCtrl.GetFirstSelectedItemPosition();
        if (pos == NULL)
        {
            TRACE(_T("No items were selected!\n"));
        }
        else
        {
            while (pos)
            {
                int nItem = m_myListCtrl.GetNextSelectedItem(pos);
                TRACE(_T("Item %d was selected!\n"), nItem);
                // you could do your own processing on nItem here
            }
        }
```

  
##  <a name="a-namegetnumberofworkareasa--clistctrlgetnumberofworkareas"></a><a name="getnumberofworkareas"></a>CListCtrl::GetNumberOfWorkAreas  
 Recupera il numero corrente di aree di lavoro per un controllo visualizzazione elenco.  
  
```  
UINT GetNumberOfWorkAreas() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Non utilizzato in questo momento.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetNumberOfWorkAreas](http://msdn.microsoft.com/library/windows/desktop/bb774988), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio    
  
```cpp  
        UINT i, uCount = m_myListCtrl.GetNumberOfWorkAreas();
        LPRECT lpRects = (LPRECT) malloc(uCount*sizeof(RECT));

        if (lpRects != NULL)
        {
            // Dump all of the work area dimensions.
            m_myListCtrl.GetWorkAreas(uCount, lpRects);

            for (i=0; i < uCount; i++)
            {
                TRACE(_T("Work area %d; left = %d, top = %d, right = %d, ")
                    _T("bottom = %d\r\n"),
                    i, lpRects[i].left, lpRects[i].top, lpRects[i].right, 
                    lpRects[i].bottom);
            }

            free(lpRects);
        }
        else
        {
            TRACE(_T("Couldn't allocate enough memory!"));   
        }

```

  
##  <a name="a-namegetoutlinecolora--clistctrlgetoutlinecolor"></a><a name="getoutlinecolor"></a>CListCtrl::GetOutlineColor  
 Recupera il colore del bordo di un controllo visualizzazione elenco.  
  
```  
COLORREF GetOutlineColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) struttura che contiene il colore di contorno.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_GETOUTLINECOLOR](http://msdn.microsoft.com/library/windows/desktop/bb761065) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetorigina--clistctrlgetorigin"></a><a name="getorigin"></a>CListCtrl::GetOrigin  
 Recupera l'origine della vista corrente per un controllo visualizzazione elenco.  
  
```  
BOOL GetOrigin(LPPOINT lpPoint) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoint`  
 Indirizzo di un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che riceve l'origine della vista.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;. Tuttavia, se il controllo è in visualizzazione report, il valore restituito è sempre zero.  
  
##  <a name="a-namegetselectedcolumna--clistctrlgetselectedcolumn"></a><a name="getselectedcolumn"></a>CListCtrl::GetSelectedColumn  
 Recupera l'indice della colonna attualmente selezionata nel controllo elenco.  
  
```  
UINT GetSelectedColumn() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice della colonna selezionata.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_GETSELECTEDCOLUMN](http://msdn.microsoft.com/library/windows/desktop/bb761067) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetselectedcounta--clistctrlgetselectedcount"></a><a name="getselectedcount"></a>CListCtrl::GetSelectedCount  
 Recupera il numero di elementi selezionati nel controllo di visualizzazione elenco.  
  
```  
UINT GetSelectedCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi selezionati nel controllo di visualizzazione elenco.  
  
### <a name="example"></a>Esempio    
  
```cpp  
        UINT i, uSelectedCount = m_myListCtrl.GetSelectedCount();
        int  nItem = -1;

        // Update all of the selected items.
        if (uSelectedCount > 0)
        {
            for (i=0; i < uSelectedCount; i++)
            {
                nItem = m_myListCtrl.GetNextItem(nItem, LVNI_SELECTED);
                ASSERT(nItem != -1);
                m_myListCtrl.Update(nItem); 
            }
        }
```

  
##  <a name="a-namegetselectionmarka--clistctrlgetselectionmark"></a><a name="getselectionmark"></a>CListCtrl::GetSelectionMark  
 Recupera il contrassegno di selezione di un controllo visualizzazione elenco.  
  
```  
int GetSelectionMark();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il contrassegno di selezione in base zero, oppure -1 se è presente alcun indicatore di selezione.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetSelectionMark](http://msdn.microsoft.com/library/windows/desktop/bb774998), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  

```cpp  
    // Set the selection mark to the first item only if no other item is 
    // selected.
    if (m_myListCtrl.GetSelectionMark() == -1)
        m_myListCtrl.SetSelectionMark(0);
```

  
##  <a name="a-namegetstringwidtha--clistctrlgetstringwidth"></a><a name="getstringwidth"></a>CListCtrl::GetStringWidth  
 Determina la larghezza di colonna minima necessaria per visualizzare tutte di una determinata stringa.  
  
```  
int GetStringWidth(LPCTSTR lpsz) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpsz`  
 Indirizzo di una stringa con terminazione null, la cui larghezza è determinato.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza, in pixel, della stringa a cui puntata `lpsz`.  
  
### <a name="remarks"></a>Note  
 La larghezza restituita prende in considerazione del carattere corrente del controllo e i margini di colonna, ma non la larghezza di un'icona piccola.  
  
### <a name="example"></a>Esempio  

```cpp  
        CString strColumn;
        int nWidth;

        // Insert six columns in the list view control. Make the width of
        // the column be the width of the column header plus 50%.
        for (int i = 0; i < 6; i++)
        {
            strColumn.Format(_T("column %d"), i);
            nWidth = 3*m_myListCtrl.GetStringWidth(strColumn)/2;
            m_myListCtrl.InsertColumn(i, strColumn, LVCFMT_LEFT, nWidth);
        }
```

  
##  <a name="a-namegetsubitemrecta--clistctrlgetsubitemrect"></a><a name="getsubitemrect"></a>CListCtrl::GetSubItemRect  
 Recupera il rettangolo di delimitazione di un elemento in un controllo visualizzazione elenco.  
  
```  
BOOL GetSubItemRect(
    int iItem,  
    int iSubItem,  
    int nArea,  
    CRect& ref);
```  
  
### <a name="parameters"></a>Parametri  
 *Articolo*  
 Indice dell'elemento padre dell'elemento secondario.  
  
 *iSubItem*  
 Indice in base uno dell'elemento secondario.  
  
 *nArea*  
 Determina la parte del rettangolo di delimitazione (dell'elemento secondario visualizzazione elenco) da recuperare. La parte del rettangolo di delimitazione (icona, etichetta o entrambi) viene specificata, applicando l'operatore OR bit per bit a uno o più dei seguenti valori:  
  
- `LVIR_BOUNDS`Restituisce il rettangolo di delimitazione dell'intero elemento, compresi etichetta e l'icona.  
  
- `LVIR_ICON`Restituisce il rettangolo di delimitazione dell'icona o icone piccole.  
  
- `LVIR_LABEL`Restituisce il rettangolo di delimitazione dell'intero elemento, compresi etichetta e l'icona. Questo è identico a `LVIR_BOUNDS`.  
  
 `ref`  
 Fare riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) rettangolo di delimitazione dell'oggetto che contiene le coordinate dell'elemento secondario.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetSubItemRect](http://msdn.microsoft.com/library/windows/desktop/bb775004), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegettextbkcolora--clistctrlgettextbkcolor"></a><a name="gettextbkcolor"></a>CListCtrl::GetTextBkColor  
 Recupera il colore di sfondo del testo di un controllo visualizzazione elenco.  
  
```  
COLORREF GetTextBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore a 32 bit utilizzato per specificare un colore RGB.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::SetTextBkColor](#settextbkcolor).  
  
##  <a name="a-namegettextcolora--clistctrlgettextcolor"></a><a name="gettextcolor"></a>CListCtrl::GetTextColor  
 Recupera il colore del testo di un controllo visualizzazione elenco.  
  
```  
COLORREF GetTextColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore a 32 bit utilizzato per specificare un colore RGB.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::SetTextColor](#settextcolor).  
  
##  <a name="a-namegettileinfoa--clistctrlgettileinfo"></a><a name="gettileinfo"></a>CListCtrl::GetTileInfo  
 Recupera informazioni su un riquadro in un controllo visualizzazione elenco.  
  
```  
BOOL GetTileInfo(PLVTILEINFO pti) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *pti*  
 Un puntatore a un [LVTILEINFO](http://msdn.microsoft.com/library/windows/desktop/bb774766) struttura che riceve le informazioni del riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito non viene utilizzato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_GETTILEINFO](http://msdn.microsoft.com/library/windows/desktop/bb761081) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegettileviewinfoa--clistctrlgettileviewinfo"></a><a name="gettileviewinfo"></a>CListCtrl::GetTileViewInfo  
 Recupera informazioni su un controllo visualizzazione elenco in visualizzazione affiancata.  
  
```  
BOOL GetTileViewInfo(PLVTILEVIEWINFO ptvi) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ptvi`  
 Un puntatore a un [LVTILEVIEWINFO](http://msdn.microsoft.com/library/windows/desktop/bb774768) struttura che riceve le informazioni recuperate.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito non viene utilizzato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_GETTILEVIEWINFO](http://msdn.microsoft.com/library/windows/desktop/bb761083) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegettooltipsa--clistctrlgettooltips"></a><a name="gettooltips"></a>CListCtrl::GetToolTips  
 Recupera il controllo descrizione comando che utilizza il controllo visualizzazione elenco per visualizzare le descrizioni comandi.  
  
```  
CToolTipCtrl* GetToolTips() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CToolTipCtrl](ctooltipctrl-class.md) oggetto da utilizzare per il controllo elenco. Se il [crea](#create) funzione membro viene utilizzato lo stile **LVS_NOTOOLTIPS**, non vengono utilizzate descrizioni comandi, e **NULL** viene restituito.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [LVM_GETTOOLTIPS](http://msdn.microsoft.com/library/windows/desktop/bb761085), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. L'implementazione MFC di `GetToolTips` restituisce un `CToolTipCtrl` oggetto, che viene utilizzato il controllo elenco, anziché un handle a un controllo descrizione comandi.  
  
### <a name="example"></a>Esempio  

```cpp  
        CToolTipCtrl* pTip = m_myListCtrl.GetToolTips();
        if (NULL != pTip)
        {
            pTip->UpdateTipText(_T("I'm a list view!"), &m_myListCtrl,
                IDD_MYLISTCTRL);
        }
```

  
##  <a name="a-namegettopindexa--clistctrlgettopindex"></a><a name="gettopindex"></a>CListCtrl::GetTopIndex  
 Recupera l'indice del primo piano elemento visibile in visualizzazione elenco o report.  
  
```  
int GetTopIndex() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'elemento visibile in primo piano.  
  
### <a name="example"></a>Esempio  

 
```cpp  
        // Make sure the focus is set to the list view control.
        m_myListCtrl.SetFocus();

        // Select all of the items that are completely visible.
        int n = m_myListCtrl.GetTopIndex();
        int nLast = n + m_myListCtrl.GetCountPerPage();

        for (; n < nLast; n++)
        {
            m_myListCtrl.SetItemState(n, LVIS_SELECTED, LVIS_SELECTED);
            ASSERT(m_myListCtrl.GetItemState(n, LVIS_SELECTED) == LVIS_SELECTED); 
        }
```

  
##  <a name="a-namegetviewa--clistctrlgetview"></a><a name="getview"></a>CListCtrl::GetView  
 Ottiene la visualizzazione del controllo di visualizzazione elenco.  
  
```  
DWORD GetView() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La visualizzazione corrente del controllo di visualizzazione elenco.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_GETVIEW](http://msdn.microsoft.com/library/windows/desktop/bb761091) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namegetviewrecta--clistctrlgetviewrect"></a><a name="getviewrect"></a>CListCtrl::GetViewRect  
 Recupera il rettangolo di delimitazione di tutti gli elementi nel controllo di visualizzazione elenco.  
  
```  
BOOL GetViewRect(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Indirizzo di un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Visualizzazione elenco deve essere nella visualizzazione icone o icone piccole.  
  
##  <a name="a-namegetworkareasa--clistctrlgetworkareas"></a><a name="getworkareas"></a>CListCtrl::GetWorkAreas  
 Recupera le aree di lavoro corrente di un controllo visualizzazione elenco.  
  
```  
void GetWorkAreas(
    int nWorkAreas,  
    LPRECT prc) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nWorkAreas`  
 Il numero di `RECT` contenute in strutture di *Repubblica popolare cinese* matrice.  
  
 `prc`  
 Un puntatore a una matrice di `RECT` strutture (o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetti) che ricevono le aree di lavoro del controllo di visualizzazione elenco. I valori in queste strutture sono nelle coordinate client.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_GetWorkAreas](http://msdn.microsoft.com/library/windows/desktop/bb775024), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetNumberOfWorkAreas](#getnumberofworkareas).  
  
##  <a name="a-namehasgroupa--clistctrlhasgroup"></a><a name="hasgroup"></a>CListCtrl::HasGroup  
 Determina se il controllo visualizzazione elenco è il gruppo specificato.  
  
```  
BOOL HasGroup(int iGroupId) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `iGroupId`  
 L'identificatore del gruppo richiesto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_HASGROUP](http://msdn.microsoft.com/library/windows/desktop/bb761097) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namehittesta--clistctrlhittest"></a><a name="hittest"></a>CListCtrl::HitTest  
 Determina quale elemento di visualizzazione elenco, se presente, è in una posizione specificata.  
  
```  
int HitTest(LVHITTESTINFO* pHitTestInfo) const;  
  
int HitTest(
    CPoint pt,  
    UINT* pFlags = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pHitTestInfo`  
 Indirizzo di un **LVHITTESTINFO** struttura che contiene la posizione per l'hit test e che riceve informazioni sui risultati dell'hit test.  
  
 `pt`  
 Punto da sottoporre a test.  
  
 `pFlags`  
 Puntatore a un integer che riceve informazioni sui risultati del test. Vedere la descrizione di **flag** membro del [LVHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb774754) struttura nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento in corrispondenza della posizione specificata da `pHitTestInfo`, se presente, oppure -1 in caso contrario.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare il `LVHT_ABOVE`, `LVHT_BELOW`, `LVHT_TOLEFT`, e `LVHT_TORIGHT` i valori della struttura **flag** membro per determinare se scorrere il contenuto di un controllo visualizzazione elenco. Due di questi flag possono essere combinati, ad esempio, se la posizione è di sopra e a sinistra dell'area client.  
  
 È possibile testare il **LVHT_ONITEM** valore della struttura **flag** membro per determinare se una determinata posizione sia su un elemento della visualizzazione elenco. Questo valore è un'operazione OR bit per bit di `LVHT_ONITEMICON`, `LVHT_ONITEMLABEL`, e `LVHT_ONITEMSTATEICON` i valori della struttura **flag** membro.  
  
### <a name="example"></a>Esempio  

```cpp  
void CListCtrlDlg::OnRClick(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;
    CPoint point(pia->ptAction);

    // Select the item the user clicked on.
    UINT uFlags;
    int nItem = m_myListCtrl.HitTest(point, &uFlags);

    if (uFlags & LVHT_ONITEMLABEL)
    {
        m_myListCtrl.SetItem(nItem, 0, LVIF_STATE, NULL, 0, LVIS_SELECTED, 
            LVIS_SELECTED, 0);
    }

    *pResult = 0;
}
```

  
##  <a name="a-nameinsertcolumna--clistctrlinsertcolumn"></a><a name="insertcolumn"></a>CListCtrl::InsertColumn  
 Inserisce una nuova colonna in un controllo visualizzazione elenco.  
  
```  
int InsertColumn(
    int nCol,  
    const LVCOLUMN* pColumn);

 
int InsertColumn(
    int nCol,  
    LPCTSTR lpszColumnHeading,  
    int nFormat = LVCFMT_LEFT,  
    int nWidth = -1,  
    int nSubItem = -1);
```  
  
### <a name="parameters"></a>Parametri  
 `nCol`  
 L'indice della nuova colonna.  
  
 `pColumn`  
 Indirizzo di un **LVCOLUMN** struttura che contiene gli attributi della nuova colonna.  
  
 *lpszColumnHeading*  
 Indirizzo di una stringa contenente l'intestazione della colonna.  
  
 `nFormat`  
 Intero che specifica l'allineamento della colonna. Può essere uno dei seguenti valori: **LVCFMT_LEFT**, **LVCFMT_RIGHT**, o **LVCFMT_CENTER**.  
  
 `nWidth`  
 Larghezza della colonna, in pixel. Se questo parametro è -1, la larghezza della colonna non è impostata.  
  
 `nSubItem`  
 Indice dell'elemento secondario associato alla colonna. Se questo parametro è -1, nessun elemento secondario è associata alla colonna.  
  
### <a name="return-value"></a>Valore restituito  
 Indice della nuova colonna se ha esito positivo oppure -1 in caso contrario.  
  
### <a name="remarks"></a>Note  
 La colonna più a sinistra in un controllo visualizzazione elenco deve essere allineata a sinistra.  
  
 Il [LVCOLUMN](http://msdn.microsoft.com/library/windows/desktop/bb774743) struttura contiene gli attributi di una colonna nella visualizzazione report. Consente inoltre di ricevere informazioni su una colonna. Questa struttura è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-nameinsertgroupa--clistctrlinsertgroup"></a><a name="insertgroup"></a>CListCtrl::InsertGroup  
 Inserisce un gruppo di controllo di visualizzazione elenco.  
  
```  
LRESULT InsertGroup(
    int index,  
    PLVGROUP pgrp);
```  
  
### <a name="parameters"></a>Parametri  
 *indice*  
 L'indice dell'elemento in cui il gruppo è da inserire.  
  
 `pgrp`  
 Un puntatore a un [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) struttura che contiene il gruppo da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indice dell'elemento che il gruppo è stato aggiunto a o -1 se l'operazione non riuscita.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_INSERTGROUP](http://msdn.microsoft.com/library/windows/desktop/bb761103) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-nameinsertgroupsorteda--clistctrlinsertgroupsorted"></a><a name="insertgroupsorted"></a>CListCtrl::InsertGroupSorted  
 Inserisce il gruppo specificato in un elenco ordinato di gruppi.  
  
```  
LRESULT InsertGroupSorted(PLVINSERTGROUPSORTED pStructInsert);
```  
  
### <a name="parameters"></a>Parametri  
 *pStructInsert*  
 Un puntatore a un [LVINSERTGROUPSORTED](http://msdn.microsoft.com/library/windows/desktop/bb774756) struttura che contiene il gruppo da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito non viene utilizzato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_INSERTGROUPSORTED](http://msdn.microsoft.com/library/windows/desktop/bb761105) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-nameinsertitema--clistctrlinsertitem"></a><a name="insertitem"></a>CListCtrl::InsertItem  
 Inserisce un elemento del controllo visualizzazione elenco.  
  
```  
int InsertItem(const LVITEM* pItem);

 
int InsertItem(
    int nItem,  
    LPCTSTR lpszItem);

 
int InsertItem(
    int nItem,  
    LPCTSTR lpszItem,  
    int nImage);

 
int InsertItem(
    UINT nMask,  
    int nItem,  
    LPCTSTR lpszItem,  
    UINT nState,  
    UINT nStateMask,  
    int nImage,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore a un [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura che specifica gli attributi dell'elemento, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 `nItem`  
 Indice dell'elemento da inserire.  
  
 `lpszItem`  
 Indirizzo di una stringa contenente l'etichetta dell'elemento, o `LPSTR_TEXTCALLBACK` se l'elemento è un elemento di callback. Per informazioni sugli elementi di callback, vedere [CListCtrl:: GetCallbackMask](#getcallbackmask).  
  
 `nImage`  
 Indice dell'immagine dell'elemento, o `I_IMAGECALLBACK` se l'elemento è un elemento di callback. Per informazioni sugli elementi di callback, vedere [CListCtrl:: GetCallbackMask](#getcallbackmask).  
  
 `nMask`  
 Il `nMask` parametro specifica quale elemento attributi passati come parametri sono validi. Può corrispondere a uno o più dei valori di maschera descritti [LVITEM struttura](http://msdn.microsoft.com/library/windows/desktop/bb774760) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. I valori validi possono essere combinati con l'operatore OR bit per bit.  
  
 `nState`  
 Indica lo stato dell'elemento, immagine di stato e immagine sovrapposta. Vedere il [!INCLUDE[winSDK](./includes/winsdk_md.md)] argomenti [LVITEM struttura](http://msdn.microsoft.com/library/windows/desktop/bb774760) per ulteriori informazioni e [degli stati degli elementi di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774733) per un elenco di flag validi.  
  
 `nStateMask`  
 Indica i bit del membro stato saranno recuperati o modificati. Vedere [LVITEM struttura](http://msdn.microsoft.com/library/windows/desktop/bb774760) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)] per ulteriori informazioni.  
  
 `lParam`  
 Un valore specifico dell'applicazione a 32 bit associato all'elemento. Se viene specificato questo parametro, è necessario impostare il `nMask` attributo `LVIF_PARAM`.  
  
### <a name="return-value"></a>Valore restituito  
 Indice del nuovo elemento se ha esito positivo oppure -1 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo può provocare la **LVM_INSERTITEM** messaggio da inviare alla finestra di controllo. Il gestore di messaggi associati per il controllo potrebbe non riuscire impostare il testo delle voci in determinate condizioni (ad esempio utilizzando gli stili di finestra, ad esempio **LVS_OWNERDRAW**). Per ulteriori informazioni su queste condizioni, fare riferimento a [LVM_INSERTITEM](http://msdn.microsoft.com/library/windows/desktop/bb761107) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  

```cpp  
        CString strText;
        int nColumnCount = m_myListCtrl.GetHeaderCtrl()->GetItemCount();

        // Insert 10 items in the list view control.
        for (int i = 0; i < 10; i++)
        {
            strText.Format(TEXT("item %d"), i);

            // Insert the item, select every other item.
            m_myListCtrl.InsertItem(LVIF_TEXT | LVIF_STATE, i, strText, 
                (i % 2) == 0 ? LVIS_SELECTED : 0, LVIS_SELECTED, 0, 0);

            // Initialize the text of the subitems.
            for (int j = 1; j < nColumnCount; j++)
            {
                strText.Format(TEXT("sub-item %d %d"), i, j);
                m_myListCtrl.SetItemText(i, j, strText);
            }
        }
```

  
##  <a name="a-nameinsertmarkhittesta--clistctrlinsertmarkhittest"></a><a name="insertmarkhittest"></a>CListCtrl::InsertMarkHitTest  
 Recupera il punto di inserimento più vicino al punto specificato.  
  
```  
int InsertMarkHitTest(
    LPPOINT pPoint,  
    LPLVINSERTMARK lvim) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pPoint`  
 Un puntatore a un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che contiene l'hit test coordina, relativo all'area client del controllo elenco.  
  
 `lvim`  
 Un puntatore a un [LVINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb774758) struttura che specifica il punto di inserimento più vicino alle coordinate definite dal parametro punto.  
  
### <a name="return-value"></a>Valore restituito  
 Il punto di inserimento più vicino all'oggetto punto.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_INSERTMARKHITTEST](http://msdn.microsoft.com/library/windows/desktop/bb761131) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-nameisgroupviewenableda--clistctrlisgroupviewenabled"></a><a name="isgroupviewenabled"></a>CListCtrl::IsGroupViewEnabled  
 Determina se la vista gruppo è abilitata per un controllo visualizzazione elenco.  
  
```  
BOOL IsGroupViewEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** se la vista gruppo è attivata, o **FALSE** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_ISGROUPVIEWENABLED](http://msdn.microsoft.com/library/windows/desktop/bb761133) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-nameisitemvisiblea--clistctrlisitemvisible"></a><a name="isitemvisible"></a>CListCtrl::IsItemVisible  
 Indica se un elemento specificato nel controllo visualizzazione elenco corrente è visibile.  
  
```  
BOOL IsItemVisible(int index) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `index`|Indice in base zero di un elemento nel controllo visualizzazione elenco corrente.|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se l'elemento specificato è visibile; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [LVM_ISITEMVISIBLE](http://msdn.microsoft.com/library/windows/desktop/bb761135) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namemapidtoindexa--clistctrlmapidtoindex"></a><a name="mapidtoindex"></a>CListCtrl::MapIDToIndex  
 L'ID univoco di un elemento nel controllo visualizzazione elenco corrente viene eseguito il mapping a un indice.  
  
```  
UINT MapIDToIndex(UINT id) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `id`|ID univoco di un elemento.|  
  
### <a name="return-value"></a>Valore restituito  
 L'indice corrente per l'ID specificato.  
  
### <a name="remarks"></a>Note  
 Un controllo visualizzazione elenco internamente tiene traccia di elementi in base all'indice. Ciò può presentare problemi perché gli indici possono cambiare nel corso della durata del controllo. Il controllo visualizzazione elenco possibile contrassegnare un elemento con un ID quando l'elemento viene creato ed è possibile utilizzare questo ID per garantire l'univocità durante il ciclo di vita del controllo visualizzazione elenco.  
  
 Si noti che in un ambiente con multithreading l'indice è garantito solo nel thread che ospita il controllo visualizzazione elenco, non sui thread in background.  
  
 Questo metodo invia il [LVM_MAPIDTOINDEX](http://msdn.microsoft.com/library/windows/desktop/bb761137) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namemapindextoida--clistctrlmapindextoid"></a><a name="mapindextoid"></a>CListCtrl::MapIndexToID  
 Esegue il mapping dell'indice di un elemento nel controllo visualizzazione elenco corrente a un ID univoco.  
  
```  
UINT MapIndexToID(UINT index) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `index`|Indice in base zero dell'elemento.|  
  
### <a name="return-value"></a>Valore restituito  
 ID univoco per l'elemento specificato.  
  
### <a name="remarks"></a>Note  
 Un controllo visualizzazione elenco internamente tiene traccia di elementi in base all'indice. Ciò può presentare problemi perché gli indici possono cambiare nel corso della durata del controllo. Il controllo visualizzazione elenco possibile contrassegnare un elemento con un ID quando viene creato l'elemento. È possibile utilizzare questo ID per accedere a un elemento specifico per la durata del controllo visualizzazione elenco.  
  
 Si noti che in un ambiente con multithreading l'indice è garantito solo nel thread che ospita il controllo visualizzazione elenco, non sui thread in background.  
  
 Questo metodo invia il [LVM_MAPINDEXTOID](http://msdn.microsoft.com/library/windows/desktop/bb761139) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce una variabile, `m_listCtrl`, che viene utilizzato per accedere al controllo visualizzazione elenco corrente. Questa variabile viene usata nell'esempio riportato di seguito.    
  
```cpp  
public:
    // Variable used to access the list control.
    CListCtrl m_listCtrl; 
```

  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato il `MapIndexToID` metodo. In una sezione precedente di questo esempio di codice, sono stati creati un controllo visualizzazione elenco che visualizza due colonne intitolate "ClientID" e "Livello" in una visualizzazione di report. Nell'esempio seguente viene eseguito il mapping dell'indice di ogni elemento di visualizzazione elenco in un numero di identificazione e quindi recupera l'indice per ogni numero di identificazione. Infine, l'esempio segnala se gli indici originali sono stati recuperati.    
  
```cpp  
    // MapIndexToID
    int iCount = m_listCtrl.GetItemCount();
    UINT nId = 0;
    UINT nIndex = 0;
    for (int iIndexOriginal = 0; iIndexOriginal < iCount; iIndexOriginal++)
    {
        // Map index to ID.
        nId = m_listCtrl.MapIndexToID((UINT)iIndexOriginal);

        // Map ID to index.
        nIndex = m_listCtrl.MapIDToIndex(nId);

        if (nIndex != (UINT)(iIndexOriginal))
        {
            CString str;
            str.Format(_T("Mapped index (%d) is not equal to original index (%d)"),
                nIndex, (UINT)(iIndexOriginal));
            AfxMessageBox(str);
            return;
        }
    }
    AfxMessageBox(_T("The mapped indexes and original indexes are equal."), 
        MB_ICONINFORMATION);
```

  
##  <a name="a-namemovegroupa--clistctrlmovegroup"></a><a name="movegroup"></a>CListCtrl::MoveGroup  
 Sposta che gruppo specificato nell'oggetto indice a base zero del controllo di visualizzazione elenco.  
  
```  
LRESULT MoveGroup(
    int iGroupId,  
    int toIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `iGroupId`  
 L'identificatore del gruppo da spostare.  
  
 `toIndex`  
 Indice in base zero in cui è possibile spostare il gruppo.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito non viene utilizzato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_MOVEGROUP](http://msdn.microsoft.com/library/windows/desktop/bb761141) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namemoveitemtogroupa--clistctrlmoveitemtogroup"></a><a name="moveitemtogroup"></a>CListCtrl::MoveItemToGroup  
 Sposta l'elemento specificato al gruppo specificato.  
  
```  
void MoveItemToGroup(
    int idItemFrom,  
    int idGroupTo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `idItemFrom`  
 Indice dell'elemento da spostare.  
  
 [in] `idGroupTo`  
 L'identificatore del gruppo verrà spostato l'elemento a.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Questo metodo non è attualmente implementato.  
  
 Questo metodo emula la funzionalità di [LVM_MOVEITEMTOGROUP](http://msdn.microsoft.com/library/windows/desktop/bb761143) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-nameredrawitemsa--clistctrlredrawitems"></a><a name="redrawitems"></a>CListCtrl::RedrawItems  
 Forza un controllo visualizzazione elenco per aggiornare la visualizzazione di un intervallo di elementi.  
  
```  
BOOL RedrawItems(
    int nFirst,  
    int nLast);
```  
  
### <a name="parameters"></a>Parametri  
 `nFirst`  
 Indice del primo elemento da ridisegnare.  
  
 `nLast`  
 Indice dell'ultimo elemento da ridisegnare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Gli elementi specificati non sono effettivamente ridisegnati fino a quando la finestra di visualizzazione elenco riceve un `WM_PAINT` messaggio. Per aggiornare immediatamente, chiamare Windows [UpdateWindow](http://msdn.microsoft.com/library/windows/desktop/dd145167) funzione dopo l'utilizzo di questa funzione.  
  
##  <a name="a-nameremoveallgroupsa--clistctrlremoveallgroups"></a><a name="removeallgroups"></a>CListCtrl::RemoveAllGroups  
 Rimuove tutti i gruppi da un controllo visualizzazione elenco.  
  
```  
void RemoveAllGroups();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_REMOVEALLGROUPS](http://msdn.microsoft.com/library/windows/desktop/bb761147) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-nameremovegroupa--clistctrlremovegroup"></a><a name="removegroup"></a>CListCtrl::RemoveGroup  
 Rimuove il gruppo specificato dal controllo di visualizzazione elenco.  
  
```  
LRESULT RemoveGroup(int iGroupId);
```  
  
### <a name="parameters"></a>Parametri  
 `iGroupId`  
 L'identificatore del gruppo da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 In caso contrario, restituisce l'indice del gruppo se ha esito positivo o -1.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_REMOVEGROUP](http://msdn.microsoft.com/library/windows/desktop/bb761149) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namescrolla--clistctrlscroll"></a><a name="scroll"></a>CListCtrl::Scroll  
 Scorre il contenuto di un controllo visualizzazione elenco.  
  
```  
BOOL Scroll(CSize size);
```  
  
### <a name="parameters"></a>Parametri  
 `size`  
 Oggetto `CSize` oggetto che specifica la quantità di scorrimento orizzontale e verticale, in pixel. Il **y** membro del `size` viene diviso per l'altezza, in pixel, della riga del controllo visualizzazione elenco, e si scorre il controllo per il numero di righe risultante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
##  <a name="a-namesetbkcolora--clistctrlsetbkcolor"></a><a name="setbkcolor"></a>CListCtrl::SetBkColor  
 Imposta il colore di sfondo del controllo di visualizzazione elenco.  
  
```  
BOOL SetBkColor(COLORREF cr);
```  
  
### <a name="parameters"></a>Parametri  
 `cr`  
 Per impostare, colore di sfondo o `CLR_NONE` valore per alcun colore di sfondo. Controlli della visualizzazione elenco con i colori di sfondo ridisegnarsi significativamente più veloce rispetto a quelli senza colori di sfondo. Per informazioni, vedere [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio  

 
```cpp  
        // Use the 3D button face color for the background.
        COLORREF crBkColor = ::GetSysColor(COLOR_3DFACE);
        m_myListCtrl.SetBkColor(crBkColor);
        ASSERT(m_myListCtrl.GetBkColor() == crBkColor);
```

  
##  <a name="a-namesetbkimagea--clistctrlsetbkimage"></a><a name="setbkimage"></a>CListCtrl::SetBkImage  
 Imposta l'immagine di sfondo di un controllo visualizzazione elenco.  
  
```  
BOOL SetBkImage(LVBKIMAGE* plvbkImage);
 
BOOL SetBkImage(
    HBITMAP hbm,  
    BOOL fTile = TRUE,  
    int xOffsetPercent = 0,  
    int yOffsetPercent = 0);
 
BOOL SetBkImage(
    LPTSTR pszUrl,  
    BOOL fTile = TRUE,  
    int xOffsetPercent = 0,  
    int yOffsetPercent = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `plvbkImage`  
 Indirizzo di un **LVBKIMAGE** struttura, che contiene le nuove informazioni di immagine di sfondo.  
  
 `hbm`  
 Handle per una bitmap.  
  
 `pszUrl`  
 Oggetto **NULL**-terminato stringa che contiene l'URL dell'immagine di sfondo.  
  
 *fTile*  
 Diverso da zero se l'immagine viene affiancata sullo sfondo del controllo della visualizzazione elenco; in caso contrario 0.  
  
 *xOffsetPercent*  
 Offset, in pixel, del bordo sinistro dell'immagine, dall'origine del controllo di visualizzazione elenco.  
  
 *yOffsetPercent*  
 Offset, in pixel, del bordo superiore dell'immagine, dall'origine del controllo di visualizzazione elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero se ha esito positivo o zero in caso contrario.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Poiché `CListCtrl::SetBkImage` sfrutta la funzionalità OLE COM, le librerie OLE devono essere inizializzate prima di utilizzare `SetBkImage`. È consigliabile inizializzare le librerie COM quando l'applicazione viene inizializzato e non inizializzare le librerie quando l'applicazione termina. Ciò avviene automaticamente in MFC applicazioni che utilizzano la tecnologia ActiveX, automazione OLE, OLE collegamento o incorporamento o operazioni di ODBC e DAO.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetBkImage](#getbkimage).  
  
##  <a name="a-namesetcallbackmaska--clistctrlsetcallbackmask"></a><a name="setcallbackmask"></a>CListCtrl::SetCallbackMask  
 Imposta la maschera di callback per un controllo visualizzazione elenco.  
  
```  
BOOL SetCallbackMask(UINT nMask);
```  
  
### <a name="parameters"></a>Parametri  
 `nMask`  
 Nuovo valore della maschera di callback.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio  

 
```cpp  
    // Set the callback mask so that only the selected and focused states
    // are stored for each item.
    m_myListCtrl.SetCallbackMask(LVIS_SELECTED|LVIS_FOCUSED);
    ASSERT(m_myListCtrl.GetCallbackMask() == 
        (LVIS_SELECTED|LVIS_FOCUSED));
```


##  <a name="a-namesetchecka--clistctrlsetcheck"></a><a name="setcheck"></a>CListCtrl::SetCheck  
 Determina se l'immagine di stato di un elemento controllo elenco è visibile.  
  
```  
BOOL SetCheck(
    int nItem,  
    BOOL fCheck = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice in base zero di un elemento controllo elenco.  
  
 `fCheck`  
 Specifica se l'immagine di stato dell'elemento deve essere visibile. Per impostazione predefinita, *fCheck* è **TRUE** e l'immagine di stato è visibile. Se `fCheck` è **FALSE**, non è visibile.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è selezionato, in caso contrario 0.  
  
### <a name="example"></a>Esempio  

 
```cpp  
        int nCount = m_myListCtrl.GetItemCount();
        BOOL fCheck = FALSE;

        // Set the check state of every other item to TRUE and 
        // all others to FALSE.
        for (int i = 0; i < nCount; i++)
        {
            m_myListCtrl.SetCheck(i, fCheck);
            ASSERT((m_myListCtrl.GetCheck(i) && fCheck) || 
                (!m_myListCtrl.GetCheck(i) && !fCheck));
            fCheck = !fCheck;
        }
```

  
##  <a name="a-namesetcolumna--clistctrlsetcolumn"></a><a name="setcolumn"></a>CListCtrl::SetColumn  
 Imposta gli attributi di una colonna della vista elenco.  
  
```  
BOOL SetColumn(
    int nCol,  
    const LVCOLUMN* pColumn);
```  
  
### <a name="parameters"></a>Parametri  
 `nCol`  
 Indice della colonna i cui attributi devono essere impostate.  
  
 `pColumn`  
 Indirizzo di un [LVCOLUMN](http://msdn.microsoft.com/library/windows/desktop/bb774743) attributi struttura che contiene la nuova colonna, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. La struttura **mask** membro specifica quale colonna per impostare gli attributi. Se il **mask** membro specifica di `LVCF_TEXT` valore, la struttura **pszText** membro è l'indirizzo di una stringa con terminazione null e la struttura **cchTextMax** membro viene ignorato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetColumn](#getcolumn).  
  
##  <a name="a-namesetcolumnorderarraya--clistctrlsetcolumnorderarray"></a><a name="setcolumnorderarray"></a>CListCtrl::SetColumnOrderArray  
 Imposta l'ordine delle colonne (da sinistra a destra) di un controllo visualizzazione elenco.  
  
```  
BOOL SetColumnOrderArray(
    int iCount,  
    LPINT piArray);
```  
  
### <a name="parameters"></a>Parametri  
 `piArray`  
 Un puntatore a un buffer contenente i valori di indice delle colonne nel controllo di visualizzazione elenco (da sinistra a destra). Il buffer deve essere abbastanza grande per contenere il numero totale di colonne nel controllo di visualizzazione elenco.  
  
 `iCount`  
 Numero di colonne nel controllo di visualizzazione elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SetColumnOrderArray](http://msdn.microsoft.com/library/windows/desktop/bb775072), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetColumnOrderArray](#getcolumnorderarray).  
  
##  <a name="a-namesetcolumnwidtha--clistctrlsetcolumnwidth"></a><a name="setcolumnwidth"></a>CListCtrl::SetColumnWidth  
 Modifica la larghezza di una colonna nella visualizzazione elenco o report.  
  
```  
BOOL SetColumnWidth(
    int nCol,  
    int cx);
```  
  
### <a name="parameters"></a>Parametri  
 `nCol`  
 Indice della colonna per cui è necessario impostare la larghezza. Nella visualizzazione elenco, questo parametro deve essere 0.  
  
 `cx`  
 La nuova larghezza della colonna. Può essere **LVSCW_AUTOSIZE** o **LVSCW_AUTOSIZE_USEHEADER**, come descritto in [LVM_SETCOLUMNWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb761163) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
##  <a name="a-namesetextendedstylea--clistctrlsetextendedstyle"></a><a name="setextendedstyle"></a>CListCtrl:: SetExtendedStyle  
 Imposta gli stili estesi correnti di un controllo visualizzazione elenco.  
  
```  
DWORD SetExtendedStyle(DWORD dwNewStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `dwNewStyle`  
 Una combinazione degli stili estesi da utilizzare per il controllo visualizzazione elenco. Per un elenco descrittivo di questi stili, vedere il [stili di visualizzazione elenco estesi](http://msdn.microsoft.com/library/windows/desktop/bb774732) argomento in di [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Una combinazione degli stili estesi precedente utilizzata dal controllo visualizzazione elenco.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SetExtendedListViewStyle](http://msdn.microsoft.com/library/windows/desktop/bb775076), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  

 
```cpp  
    // Allow the header controls item to be movable by the user.
    m_myListCtrl.SetExtendedStyle
        (m_myListCtrl.GetExtendedStyle()|LVS_EX_HEADERDRAGDROP);
```

  
##  <a name="a-namesetgroupinfoa--clistctrlsetgroupinfo"></a><a name="setgroupinfo"></a>CListCtrl::SetGroupInfo  
 Imposta le informazioni che descrivono il gruppo specificato del controllo visualizzazione elenco corrente.  
  
```  
int SetGroupInfo(
    int iGroupId,  
    PLVGROUP pgrp);
```  
  
### <a name="parameters"></a>Parametri  
 `iGroupId`  
 L'identificatore del gruppo di cui sono impostate.  
  
 `pgrp`  
 Puntatore a un [LVGROUP](http://msdn.microsoft.com/library/windows/desktop/bb774769) struttura che contiene le informazioni da impostare. Il chiamante è responsabile dell'allocazione di questa struttura e impostare i relativi membri.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID del gruppo se il metodo ha esito positivo; in caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [LVM_SETGROUPINFO](http://msdn.microsoft.com/library/windows/desktop/bb761167) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesetgroupmetricsa--clistctrlsetgroupmetrics"></a><a name="setgroupmetrics"></a>CListCtrl::SetGroupMetrics  
 Imposta le metriche di gruppo di un controllo visualizzazione elenco.  
  
```  
void SetGroupMetrics(PLVGROUPMETRICS pGroupMetrics);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroupMetrics`  
 Un puntatore a un [LVGROUPMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb774752) struttura contenente le informazioni delle metriche di gruppo da impostare.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_SETGROUPMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb761168) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesethotcursora--clistctrlsethotcursor"></a><a name="sethotcursor"></a>CListCtrl::SetHotCursor  
 Imposta il cursore utilizzato quando è abilitata la funzionalità di intercettazione per un controllo visualizzazione elenco.  
  
```  
HCURSOR SetHotCursor(HCURSOR hc);
```  
  
### <a name="parameters"></a>Parametri  
 *HC*  
 Un handle a una risorsa cursore, utilizzato per rappresentare il cursore attivo.  
  
### <a name="return-value"></a>Valore restituito  
 Handle per la risorsa cursore attivo precedente viene utilizzata dal controllo visualizzazione elenco.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SetHotCursor](http://msdn.microsoft.com/library/windows/desktop/bb775082), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 Il cursore a caldo, visibile solo quando la selezione è abilitata, viene visualizzato il cursore è posizionato su qualsiasi elemento della visualizzazione elenco. La selezione viene abilitata impostando la **LVS_EX_TRACKSELECT** stile esteso.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetHotCursor](#gethotcursor).  
  
##  <a name="a-namesethotitema--clistctrlsethotitem"></a><a name="sethotitem"></a>CListCtrl::SetHotItem  
 Imposta l'elemento attivo corrente di un controllo visualizzazione elenco.  
  
```  
int SetHotItem(int iIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `iIndex`  
 Indice in base zero dell'elemento da impostare come elemento attivo.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero dell'elemento in precedenza a caldo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SetHotItem](http://msdn.microsoft.com/library/windows/desktop/bb775083), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetHotItem](#gethotitem).  
  
##  <a name="a-namesethovertimea--clistctrlsethovertime"></a><a name="sethovertime"></a>CListCtrl::SetHoverTime  
 Imposta l'intervallo di tempo corrente di un controllo visualizzazione elenco.  
  
```  
DWORD SetHoverTime(DWORD dwHoverTime = (DWORD)-1);
```  
  
### <a name="parameters"></a>Parametri  
 *dwHoverTime*  
 Il ritardo di nuovo, in millisecondi, che deve posizionare il cursore del mouse su un elemento prima che venga selezionato. Se viene passato il valore predefinito, l'ora è impostata per l'intervallo di tempo predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Il precedente intervallo di tempo, espresso in millisecondi.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SetHoverTime](http://msdn.microsoft.com/library/windows/desktop/bb775084), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetHoverTime](#gethovertime).  
  
##  <a name="a-nameseticonspacinga--clistctrlseticonspacing"></a><a name="seticonspacing"></a>CListCtrl::SetIconSpacing  
 Imposta la spaziatura tra le icone in un controllo visualizzazione elenco.  
  
```  
CSize SetIconSpacing(
    int cx,  
    int cy);  
  
CSize SetIconSpacing(CSize size);
```  
  
### <a name="parameters"></a>Parametri  
 `cx`  
 La distanza (in pixel) tra le icone sull'asse x.  
  
 `cy`  
 La distanza (in pixel) tra le icone sull'asse y.  
  
 `size`  
 Oggetto `CSize` oggetto che specifica la distanza (in pixel) tra le icone in x e y.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto contenente i valori precedenti per la spaziatura a icona.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SetIconSpacing](http://msdn.microsoft.com/library/windows/desktop/bb775085), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  

 
```cpp  
    // Leave lots of space between icons.
    m_myListCtrl.SetIconSpacing(CSize(100, 100));
```

  
##  <a name="a-namesetimagelista--clistctrlsetimagelist"></a><a name="setimagelist"></a>CListCtrl::SetImageList  
 Assegna un elenco di immagini a un controllo visualizzazione elenco.  
  
```  
CImageList* SetImageList(
    CImageList* pImageList,  
    int nImageListType);
```  
  
### <a name="parameters"></a>Parametri  
 `pImageList`  
 Puntatore all'elenco di immagini da assegnare.  
  
 `nImageListType`  
 Tipo di elenco immagini. Può essere uno dei valori seguenti:  
  
- `LVSIL_NORMAL`Elenco di immagini con icone grandi.  
  
- `LVSIL_SMALL`Elenco di immagini con icone piccole.  
  
- `LVSIL_STATE`Elenco di immagini con le immagini di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'elenco di immagini precedenti.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetImageList](#getimagelist).  
  
##  <a name="a-namesetinfotipa--clistctrlsetinfotip"></a><a name="setinfotip"></a>CListCtrl::SetInfoTip  
 Imposta il testo della descrizione comando.  
  
```  
BOOL SetInfoTip(PLVSETINFOTIP plvInfoTip);
```  
  
### <a name="parameters"></a>Parametri  
 *plvInfoTip*  
 Un puntatore a un [LVFSETINFOTIP](http://msdn.microsoft.com/library/windows/desktop/bb774764) struttura contenente le informazioni da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_SETINFOTIP](http://msdn.microsoft.com/library/windows/desktop/bb761180) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesetinsertmarka--clistctrlsetinsertmark"></a><a name="setinsertmark"></a>CListCtrl::SetInsertMark  
 Imposta il punto di inserimento nella posizione specificata.  
  
```  
BOOL SetInsertMark(LPLVINSERTMARK lvim);
```  
  
### <a name="parameters"></a>Parametri  
 `lvim`  
 Un puntatore a un [LVINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb774758) struttura che specifica la posizione in cui impostare il punto di inserimento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** se ha esito positivo, o **FALSE** in caso contrario. **FALSE** viene restituito se la dimensione nel `cbSize` membro del **LVINSERTMARK** struttura sono uguali alle dimensioni effettive della struttura, o quando un cursore non è applicabile nella visualizzazione corrente.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_SETINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb761182) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesetinsertmarkcolora--clistctrlsetinsertmarkcolor"></a><a name="setinsertmarkcolor"></a>CListCtrl::SetInsertMarkColor  
 Imposta il colore del punto di inserimento.  
  
```  
COLORREF SetInsertMarkColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 `color`  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) struttura che specifica il colore per impostare il punto di inserimento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un **COLORREF** struttura che contiene il colore precedente.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_SETINSERTMARKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb761184) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesetitema--clistctrlsetitem"></a><a name="setitem"></a>CListCtrl:: SetItem  
 Imposta gli attributi dell'elemento di alcune o tutte di una visualizzazione elenco.  
  
```  
BOOL SetItem(const LVITEM* pItem);

 
BOOL SetItem(
    int nItem,  
    int nSubItem,  
    UINT nMask,  
    LPCTSTR lpszItem,  
    int nImage,  
    UINT nState,  
    UINT nStateMask,  
    LPARAM lParam);

 
BOOL SetItem(
    int nItem,  
    int nSubItem,  
    UINT nMask,  
    LPCTSTR lpszItem,  
    int nImage,  
    UINT nState,  
    UINT nStateMask,  
    LPARAM lParam,  
    int nIndent);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Indirizzo di un [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) attributi struttura che contiene il nuovo elemento, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. La struttura **iItem** e **iSubItem** membri identificano l'elemento o dell'elemento secondario e la struttura **mask** membro specifica gli attributi da impostare. Per ulteriori informazioni sui **mask** membro, vedere il **osservazioni**.  
  
 `nItem`  
 Indice dell'elemento di cui gli attributi devono essere impostate.  
  
 `nSubItem`  
 Indice dell'elemento secondario i cui attributi devono essere impostate.  
  
 `nMask`  
 Specifica quali attributi devono essere impostate (vedere la sezione Osservazioni).  
  
 `lpszItem`  
 Indirizzo di una stringa con terminazione null che specifica dell'etichetta dell'elemento.  
  
 `nImage`  
 Indice dell'immagine dell'elemento all'interno dell'elenco immagini.  
  
 `nState`  
 Specifica i valori per gli stati da modificare (vedere la sezione Osservazioni).  
  
 `nStateMask`  
 Specifica gli stati da modificare (vedere la sezione Osservazioni).  
  
 `lParam`  
 Un valore specifico dell'applicazione a 32 bit sia associato all'elemento.  
  
 `nIndent`  
 Larghezza, in pixel, del rientro. Se `nIndent` è minore della larghezza minima definita dal sistema, la nuova larghezza viene impostata su almeno definiti dal sistema  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Il **iItem** e **iSubItem** i membri di **LVITEM** struttura e il `nItem` e `nSubItem` parametri identificano l'elemento e l'elemento secondario i cui attributi devono essere impostate.  
  
 Il **mask** membro del **LVITEM** struttura e `nMask` specificano l'elemento di parametro attributi devono essere impostate:  
  
- `LVIF_TEXT`Il **pszText** membro o `lpszItem` parametro è l'indirizzo di una stringa con terminazione null; il **cchTextMax** membro viene ignorato.  
  
- `LVIF_STATE`Il **stateMask** membro o `nStateMask` parametro specifica quale elemento stati da modificare e **stato** membro o `nState` parametro contiene i valori per questi stati.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::HitTest](#hittest).  
  
##  <a name="a-namesetitemcounta--clistctrlsetitemcount"></a><a name="setitemcount"></a>CListCtrl::SetItemCount  
 Prepara un controllo visualizzazione elenco per l'aggiunta di un numero elevato di elementi.  
  
```  
void SetItemCount(int nItems);
```  
  
### <a name="parameters"></a>Parametri  
 `nItems`  
 Numero di elementi che alla fine conterrà il controllo.  
  
### <a name="remarks"></a>Note  
 Per impostare il numero di elementi per un controllo visualizzazione elenco virtuale, vedere [CListCtrl::SetItemCountEx](#setitemcountex).  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SetItemCount](http://msdn.microsoft.com/library/windows/desktop/bb775093), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  

 
```cpp  
        CString str;

        // Add 1024 items to the list view control.
        m_myListCtrl.SetItemCount(1024);

        for (int i = 0; i < 1024; i++)
        {
            str.Format(TEXT("item %d"), i);
            m_myListCtrl.InsertItem(i, str);
        }
```

  
##  <a name="a-namesetitemcountexa--clistctrlsetitemcountex"></a><a name="setitemcountex"></a>CListCtrl::SetItemCountEx  
 Imposta il numero di elementi per un controllo visualizzazione elenco virtuale.  
  
```  
BOOL SetItemCountEx(
    int iCount,  
    DWORD dwFlags = LVSICF_NOINVALIDATEALL);
```  
  
### <a name="parameters"></a>Parametri  
 `iCount`  
 Numero di elementi che alla fine conterrà il controllo.  
  
 `dwFlags`  
 Specifica il comportamento del controllo di visualizzazione elenco dopo la reimpostazione del numero di elementi. Questo valore può essere una combinazione delle operazioni seguenti:  
  
- **LVSICF_NOINVALIDATEALL** controllo visualizzazione elenco non verrà aggiornate a meno che non gli elementi interessati sono attualmente nella visualizzazione. Rappresenta il valore predefinito.  
  
- **LVSICF_NOSCROLL** il controllo visualizzazione elenco non cambierà la posizione di scorrimento quando l'elemento contare le modifiche.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SetItemCountEx](http://msdn.microsoft.com/library/windows/desktop/bb775095), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]e deve essere chiamato solo per le visualizzazioni elenco virtuale.  
  
### <a name="example"></a>Esempio  

 
```cpp  
        CString str;

        // Add 1024 items to the list view control.

        // Force my virtual list view control to allocate 
        // enough memory for my 1024 items.
        m_myVirtualListCtrl.SetItemCountEx(1024, LVSICF_NOSCROLL|
            LVSICF_NOINVALIDATEALL);

        for (int i = 0; i < 1024; i++)
        {
            str.Format(TEXT("item %d"), i);
            m_myVirtualListCtrl.InsertItem(i, str);
        }
```

  
##  <a name="a-namesetitemdataa--clistctrlsetitemdata"></a><a name="setitemdata"></a>CListCtrl::SetItemData  
 Imposta il valore specifico dell'applicazione a 32 bit associato all'elemento specificato da `nItem`.  
  
```  
BOOL SetItemData(int nItem, DWORD_PTR dwData);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice dell'elemento dell'elenco i cui dati si desidera impostare.  
  
 `dwData`  
 Un valore a 32 bit sia associato all'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo valore è il **lParam** membro del [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  

 
```cpp  
    // Set the data of each item to be equal to its index.
    for (int i = 0; i < m_myListCtrl.GetItemCount(); i++)
    {
        m_myListCtrl.SetItemData(i, i);
    }
```

  
##  <a name="a-namesetitemindexstatea--clistctrlsetitemindexstate"></a><a name="setitemindexstate"></a>CListCtrl::SetItemIndexState  
 Imposta lo stato di un elemento nel controllo visualizzazione elenco corrente.  
  
```  
BOOL SetItemIndexState(
    PLVITEMINDEX pItemIndex,   
    DWORD dwState,   
    DWORD dwMask) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pItemIndex`|Puntatore a un [LVITEMINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774762) struttura che descrive un elemento. Il chiamante è responsabile dell'allocazione di questa struttura e impostare i relativi membri.|  
|[in] `dwState`|Lo stato da impostare l'elemento, ovvero una combinazione bit per bit di [elenco degli stati degli elementi di visualizzazione](http://msdn.microsoft.com/library/windows/desktop/bb774733). Specificare zero per la reimpostazione o uno per impostare, uno stato.|  
|[in] `dwMask`|Una maschera di bit valido dello stato specificato per il `dwState` parametro. Specificare una combinazione bit per bit (OR) di [elenco degli stati degli elementi di visualizzazione](http://msdn.microsoft.com/library/windows/desktop/bb774733).|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sui `dwState` parametro, vedere [degli stati degli elementi di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774733).  
  
 Per ulteriori informazioni sui `dwMask` parametro, vedere il `stateMask` membro del [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura.  
  
 Questo metodo invia il [LVM_SETITEMINDEXSTATE](http://msdn.microsoft.com/library/windows/desktop/bb761190) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesetitempositiona--clistctrlsetitemposition"></a><a name="setitemposition"></a>CListCtrl::SetItemPosition  
 Sposta un elemento in una posizione specificata in un controllo visualizzazione elenco.  
  
```  
BOOL SetItemPosition(
    int nItem,  
    POINT pt);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice dell'elemento la cui posizione è necessario impostare.  
  
 `pt`  
 Oggetto [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) coordinate specificando la nuova posizione, nella visualizzazione struttura, dell'angolo superiore sinistro dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Il controllo deve essere nella visualizzazione Icone piccole o icona.  
  
 Se il controllo di visualizzazione elenco ha la `LVS_AUTOARRANGE` stile, la visualizzazione elenco è disposti dopo aver impostata la posizione dell'elemento.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetItemPosition](#getitemposition).  
  
##  <a name="a-namesetitemstatea--clistctrlsetitemstate"></a><a name="setitemstate"></a>CListCtrl::SetItemState  
 Modifica lo stato di un elemento in un controllo visualizzazione elenco.  
  
```  
BOOL SetItemState(
    int nItem,  
    LVITEM* pItem);

 
BOOL SetItemState(
    int nItem,  
    UINT nState,  
    UINT nMask);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice dell'elemento il cui stato è necessario impostare.  
  
 `pItem`  
 Indirizzo di un [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. La struttura **stateMask** membro specifica quali bit di modifica e la struttura stato **stato** membro contiene i nuovi valori per questi bit. Gli altri membri vengono ignorati.  
  
 `nState`  
 Nuovi valori per i bit di stato. Per un elenco di valori possibili, vedere [CListCtrl::GetNextItem](#getnextitem) e [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) membro stato.  
  
 `nMask`  
 Maschera che specifica quali bit di modifica stato. Questo valore corrisponde al membro di stateMask di [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 "Stato di un elemento" è un valore che specifica la disponibilità dell'articolo, che indica le azioni dell'utente o in caso contrario riflette lo stato dell'elemento. Un controllo visualizzazione elenco modifica alcuni bit di stato, ad esempio quando l'utente seleziona un elemento. Un'applicazione può modificare gli altri bit di stato per disabilitare o nascondere l'elemento o per specificare un'immagine sovrapposta o un'immagine di stato.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetTopIndex](#gettopindex).  
  
##  <a name="a-namesetitemtexta--clistctrlsetitemtext"></a><a name="setitemtext"></a>CListCtrl::SetItemText  
 Sostituisce il testo di un elemento della visualizzazione elenco o un elemento secondario.  
  
```  
BOOL SetItemText(
    int nItem,  
    int nSubItem,  
    LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice dell'elemento il cui testo è da impostare.  
  
 `nSubItem`  
 Indice dell'elemento secondario, oppure zero per impostare l'etichetta dell'elemento.  
  
 `lpszText`  
 Puntatore a una stringa che contiene il nuovo testo dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questo metodo non è progettato per l'utilizzo con controlli contenente lo stile di finestra LVS_OWNERDATA (in effetti, questo causerà un'asserzione nelle build di Debug). Per ulteriori informazioni su questo stile del controllo elenco, vedere [Cenni preliminari sui controlli di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774735).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::InsertItem](#insertitem).  
  
##  <a name="a-namesetoutlinecolora--clistctrlsetoutlinecolor"></a><a name="setoutlinecolor"></a>CListCtrl::SetOutlineColor  
 Imposta il colore del bordo di un controllo visualizzazione elenco, se il [LVS_EX_BORDERSELECT](http://msdn.microsoft.com/library/windows/desktop/bb774739) è impostato lo stile di finestra esteso.  
  
```  
COLORREF SetOutlineColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 `color`  
 Il nuovo [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) struttura che contiene il colore di contorno.  
  
### <a name="return-value"></a>Valore restituito  
 Il precedente **COLORREF** struttura che contiene il colore del contorno  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_SETOUTLINECOLOR](http://msdn.microsoft.com/library/windows/desktop/bb761200) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesetselectedcolumna--clistctrlsetselectedcolumn"></a><a name="setselectedcolumn"></a>CListCtrl::SetSelectedColumn  
 Imposta la colonna selezionata del controllo di visualizzazione elenco.  
  
```  
LRESULT SetSelectedColumn(int iCol);
```  
  
### <a name="parameters"></a>Parametri  
 *iCol*  
 L'indice della colonna da selezionare.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito non viene utilizzato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_SETSELECTEDCOLUMN](http://msdn.microsoft.com/library/windows/desktop/bb761202) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesetselectionmarka--clistctrlsetselectionmark"></a><a name="setselectionmark"></a>CListCtrl::SetSelectionMark  
 Imposta il contrassegno di selezione di un controllo visualizzazione elenco.  
  
```  
int SetSelectionMark(int iIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `iIndex`  
 Indice in base zero del primo elemento in una selezione multipla.  
  
### <a name="return-value"></a>Valore restituito  
 Il contrassegno di selezione precedente, oppure -1 se si è verificato alcun indicatore di selezione.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SetSelectionMark](http://msdn.microsoft.com/library/windows/desktop/bb775112), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetSelectionMark](#getselectionmark).  
  
##  <a name="a-namesettextbkcolora--clistctrlsettextbkcolor"></a><a name="settextbkcolor"></a>CListCtrl::SetTextBkColor  
 Imposta il colore di sfondo del testo in un controllo visualizzazione elenco.  
  
```  
BOOL SetTextBkColor(COLORREF cr);
```  
  
### <a name="parameters"></a>Parametri  
 `cr`  
 Oggetto **COLORREF** specificando il nuovo colore di sfondo di testo. Per informazioni, vedere [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio  

 
```cpp  
        // Use the 3D button face color for the background.
        COLORREF crBkColor = ::GetSysColor(COLOR_3DFACE);
        m_myListCtrl.SetTextBkColor(crBkColor);
        ASSERT(m_myListCtrl.GetTextBkColor() == crBkColor);
```

  
##  <a name="a-namesettextcolora--clistctrlsettextcolor"></a><a name="settextcolor"></a>CListCtrl::SetTextColor  
 Imposta il colore del testo di un controllo visualizzazione elenco.  
  
```  
BOOL SetTextColor(COLORREF cr);
```  
  
### <a name="parameters"></a>Parametri  
 `cr`  
 Oggetto **COLORREF** specificando il nuovo colore di testo. Per informazioni, vedere [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio  

 
```cpp  
    // Use the window text color for
    // the item text of the list view control.
    COLORREF crTextColor = ::GetSysColor(COLOR_WINDOWTEXT);
    m_myListCtrl.SetTextColor(crTextColor);
    ASSERT(m_myListCtrl.GetTextColor() == crTextColor);
```

  
##  <a name="a-namesettileinfoa--clistctrlsettileinfo"></a><a name="settileinfo"></a>CListCtrl::SetTileInfo  
 Imposta le informazioni per una sezione del controllo di visualizzazione elenco.  
  
```  
BOOL SetTileInfo(PLVTILEINFO pti);
```  
  
### <a name="parameters"></a>Parametri  
 *pti*  
 Un puntatore a un [LVTILEINFO](http://msdn.microsoft.com/library/windows/desktop/bb774766) struttura contenente le informazioni da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_SETTILEINFO](http://msdn.microsoft.com/library/windows/desktop/bb761210) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesettileviewinfoa--clistctrlsettileviewinfo"></a><a name="settileviewinfo"></a>CListCtrl::SetTileViewInfo  
 Imposta informazioni che utilizza un controllo visualizzazione elenco in visualizzazione affiancata.  
  
```  
BOOL SetTileViewInfo(PLVTILEVIEWINFO ptvi);
```  
  
### <a name="parameters"></a>Parametri  
 `ptvi`  
 Un puntatore a un [LVTILEVIEWINFO](http://msdn.microsoft.com/library/windows/desktop/bb774768) struttura contenente le informazioni da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_SETTILEVIEWINFO](http://msdn.microsoft.com/library/windows/desktop/bb761212) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesettooltipsa--clistctrlsettooltips"></a><a name="settooltips"></a>CListCtrl::SetToolTips  
 Imposta il controllo descrizione comando che verrà utilizzato il controllo visualizzazione elenco per visualizzare le descrizioni comandi.  
  
```  
CToolTipCtrl* SetToolTips(CToolTipCtrl* pWndTip);
```  
  
### <a name="parameters"></a>Parametri  
 `pWndTip`  
 Un puntatore a un `CToolTipCtrl` oggetto che verrà utilizzato il controllo elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CToolTipCtrl](ctooltipctrl-class.md) oggetto contenente la descrizione comando precedentemente utilizzata dal controllo, o `NULL` se non le descrizioni comandi sono state utilizzate in precedenza.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [LVM_SETTOOLTIPS](http://msdn.microsoft.com/library/windows/desktop/bb761216), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 Per non utilizzare le descrizioni comandi, indicare il `LVS_NOTOOLTIPS` stile quando si crea il `CListCtrl` oggetto.  
  
##  <a name="a-namesetviewa--clistctrlsetview"></a><a name="setview"></a>CListCtrl::SetView  
 Imposta la visualizzazione del controllo di visualizzazione elenco.  
  
```  
DWORD SetView(int iView);
```  
  
### <a name="parameters"></a>Parametri  
 *iView*  
 La visualizzazione da selezionare.  
  
### <a name="return-value"></a>Valore restituito  
 In caso contrario, restituisce 1 se ha esito positivo oppure -1. Ad esempio, viene restituito -1 se la vista non è valida.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_SETVIEW](http://msdn.microsoft.com/library/windows/desktop/bb761220) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesetworkareasa--clistctrlsetworkareas"></a><a name="setworkareas"></a>CListCtrl::SetWorkAreas  
 Imposta l'area in cui le icone possono essere visualizzate in un controllo visualizzazione elenco.  
  
```  
void SetWorkAreas(
    int nWorkAreas,  
    LPRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `nWorkAreas`  
 Il numero di `RECT` strutture (o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetti) nella matrice a cui puntata `lpRect`.  
  
 `lpRect`  
 L'indirizzo di una matrice di `RECT` strutture (o `CRect` oggetti) che consente di specificare le nuove aree di lavoro del controllo di visualizzazione elenco. Queste aree devono essere specificate nelle coordinate client. Se questo parametro è **NULL**, l'area di lavoro verrà impostata per l'area client del controllo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SetWorkAreas](http://msdn.microsoft.com/library/windows/desktop/bb775128), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  

 
```cpp  
    // Remove all working areas.
    m_myListCtrl.SetWorkAreas(0, NULL);
```

  
##  <a name="a-namesortgroupsa--clistctrlsortgroups"></a><a name="sortgroups"></a>CListCtrl::SortGroups  
 Utilizza una funzione di confronto definita dall'applicazione per ordinare gruppi dall'ID all'interno di un controllo visualizzazione elenco.  
  
```  
BOOL SortGroups(
    PFNLVGROUPCOMPARE _pfnGroupCompare,  
    LPVOID _plv);
```  
  
### <a name="parameters"></a>Parametri  
 `_pfnGroupCompare`  
 Un puntatore alla funzione di confronto di gruppo.  
  
 `_plv`  
 Un puntatore void.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `true` in caso di esito positivo, `false` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LVM_SORTGROUPS](http://msdn.microsoft.com/library/windows/desktop/bb761225) dei messaggi, come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namesortitemsa--clistctrlsortitems"></a><a name="sortitems"></a>CListCtrl::SortItems  
 Ordina gli elementi di visualizzazione elenco usando una funzione di confronto definita dall'applicazione.  
  
```  
BOOL SortItems(
    PFNLVCOMPARE pfnCompare,  
    DWORD_PTR dwData);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pfnCompare`  
 Indirizzo della funzione di confronto definita dall'applicazione.  
  
 L'operazione di ordinamento chiama la funzione di confronto ogni volta che è necessario determinare l'ordine relativo di due elementi di elenco. La funzione di confronto deve essere un membro statico di una classe o una funzione autonoma che non è un membro di qualsiasi classe.  
  
 [in] `dwData`  
 Valore definito dall'applicazione passato alla funzione di confronto.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il metodo ha esito positivo. in caso contrario `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo modifica l'indice di ogni elemento in modo da riflettere la nuova sequenza.  
  
 La funzione di confronto, `pfnCompare`, ha il formato seguente:  
  
```  
int CALLBACK CompareFunc(LPARAM lParam1,
    LPARAM lParam2,
    LPARAM lParamSort);
```  
La funzione di confronto deve restituire un valore negativo se il primo elemento deve precedere il secondo, un valore positivo se il primo elemento deve seguire la seconda, oppure zero se i due elementi sono uguali.  
  
 Il `lParam1` parametro è il valore a 32 bit associato all'elemento prima che viene confrontato e `lParam2` parametro è il valore associato all'elemento secondo. Questi sono i valori specificati nella `lParam` membro gli elementi [LVITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura quando sono state inserite nell'elenco. Il `lParamSort` parametro è identico il `dwData` valore.  
  
 Questo metodo invia il [LVM_SORTITEMS](http://msdn.microsoft.com/library/windows/desktop/bb761227) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Di seguito è una funzione di confronto semplice che restituisce gli elementi da ordinare da loro `lParam` valori.  
  
```cpp  
// Sort items by associated lParam
int CALLBACK CListCtrlDlg::MyCompareProc(LPARAM lParam1, LPARAM lParam2, 
    LPARAM lParamSort)
{
    UNREFERENCED_PARAMETER(lParamSort);
return (int)(lParam1 - lParam2);
}
```
  
```cpp  
// Sort the items by passing in the comparison function.
void CListCtrlDlg::Sort()
{
    m_myListCtrl.SortItems(&CListCtrlDlg::MyCompareProc, 0);
}
```
  
##  <a name="a-namesortitemsexa--clistctrlsortitemsex"></a><a name="sortitemsex"></a>CListCtrl::SortItemsEx  
 Ordina gli elementi del controllo visualizzazione elenco corrente utilizzando una funzione di confronto definita dall'applicazione.  
  
```  
BOOL SortItemsEx(
    PFNLVCOMPARE pfnCompare,   
    DWORD_PTR dwData);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pfnCompare`|Indirizzo della funzione di confronto definita dall'applicazione.<br /><br /> L'operazione di ordinamento chiama la funzione di confronto ogni volta che è necessario determinare l'ordine relativo di due elementi di elenco. La funzione di confronto deve essere un membro statico di una classe o una funzione autonoma che non è un membro di qualsiasi classe.|  
|[in] `dwData`|Valore definito dall'applicazione passato alla funzione di confronto.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo modifica l'indice di ogni elemento in modo da riflettere la nuova sequenza.  
  
 La funzione di confronto, `pfnCompare`, ha il formato seguente:  
  
```  
int CALLBACK CompareFunc(LPARAM lParam1,
    LPARAM lParam2,
    LPARAM lParamSort);
```  
Questo messaggio è simile a [LVM_SORTITEMS](http://msdn.microsoft.com/library/windows/desktop/bb761227), ad eccezione del tipo di informazioni passato alla funzione di confronto. In [LVM_SORTITEMS](http://msdn.microsoft.com/library/windows/desktop/bb761227), `lParam1` e `lParam2` sono i valori degli elementi da confrontare. In [LVM_SORTITEMSEX](http://msdn.microsoft.com/library/windows/desktop/bb761228), `lParam1` è l'indice corrente del primo elemento da confrontare e `lParam2` è l'indice corrente del secondo elemento. È possibile inviare un [LVM_GETITEMTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761055) messaggio per recuperare ulteriori informazioni su un elemento.  
  
 La funzione di confronto deve restituire un valore negativo se il primo elemento deve precedere il secondo, un valore positivo se il primo elemento deve seguire la seconda, oppure zero se i due elementi sono uguali.  
  
> [!NOTE]
>  Durante il processo di ordinamento, il contenuto della visualizzazione elenco è instabile. Se la funzione di callback invia i messaggi al controllo visualizzazione elenco diverso da [LVM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb774953), i risultati sono imprevedibili.  
  
 Questo metodo invia il [LVM_SORTITEMSEX](http://msdn.microsoft.com/library/windows/desktop/bb761228) messaggio, che è descritta nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce una variabile, `m_listCtrl`, che viene utilizzato per accedere al controllo visualizzazione elenco corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
```cpp  
public:
    // Variable used to access the list control.
    CListCtrl m_listCtrl; 
```

  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato il `SortItemEx` metodo. In una sezione precedente di questo esempio di codice, sono stati creati un controllo visualizzazione elenco che visualizza due colonne intitolate "ClientID" e "Livello" in una visualizzazione di report. Esempio di codice seguente Ordina la tabella utilizzando i valori nella colonna "Grade".  
  

```cpp  
// The ListCompareFunc() method is a global function used by SortItemEx().
int CALLBACK ListCompareFunc(
                             LPARAM lParam1, 
                             LPARAM lParam2, 
                             LPARAM lParamSort)
{
    CListCtrl* pListCtrl = (CListCtrl*) lParamSort;
    CString    strItem1 = pListCtrl->GetItemText(static_cast<int>(lParam1), 1);
    CString    strItem2 = pListCtrl->GetItemText(static_cast<int>(lParam2), 1)
    int x1 = _tstoi(strItem1.GetBuffer());
    int x2 = _tstoi(strItem2.GetBuffer());
    int result = 0;
    if ((x1 - x2) < 0)
        result = -1;
    else if ((x1 - x2) == 0)
        result = 0;
    else
        result = 1;

    return result;
}

void CCListCtrl_s2Dlg::OnBnClickedButton1()
{
    // SortItemsEx
    m_listCtrl.SortItemsEx( ListCompareFunc, (LPARAM)&m_listCtrl );
}
```

  
##  <a name="a-namesubitemhittesta--clistctrlsubitemhittest"></a><a name="subitemhittest"></a>CListCtrl::SubItemHitTest  
 Determina quale elemento di visualizzazione elenco, se presente, è in una determinata posizione.  
  
```  
int SubItemHitTest(LPLVHITTESTINFO pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pInfo`  
 Un puntatore per il [LVHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb774754) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base uno dell'elemento, o elementi secondari, sottoposto a test (se presente) o -1 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32, [ListView_SubItemHitTest](http://msdn.microsoft.com/library/windows/desktop/bb775135), come descritto nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  

```cpp  
void CListCtrlDlg::OnDblClk(NMHDR* pNMHDR, LRESULT* pResult)
{
    UNREFERENCED_PARAMETER(pResult);
LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;
    LVHITTESTINFO lvhti;

    // Clear the subitem text the user clicked on.
    lvhti.pt = pia->ptAction;
    m_myListCtrl.SubItemHitTest(&lvhti);

    if (lvhti.flags & LVHT_ONITEMLABEL)
    {
        m_myListCtrl.SetItemText(lvhti.iItem, lvhti.iSubItem, NULL);
    }
}
```

  
##  <a name="a-nameupdatea--clistctrlupdate"></a><a name="update"></a>CListCtrl::Update  
 Forza il controllo di visualizzazione elenco per aggiornare l'elemento specificato da `nItem`.  
  
```  
BOOL Update(int nItem);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice dell'elemento da aggiornare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questa funzione dispone del controllo visualizzazione elenco anche se dispone di `LVS_AUTOARRANGE` stile.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListCtrl::GetSelectedCount](#getselectedcount).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC ROWLIST](../../visual-cpp-samples.md)   
 [CWnd (classe)](cwnd-class.md)   
 [Grafico delle gerarchie](../hierarchy-chart.md)   
 [CImageList (classe)](cimagelist-class.md)


