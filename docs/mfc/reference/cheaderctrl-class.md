---
title: "CHeaderCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CHeaderCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHeaderCtrl class"
  - "header controls, CHeaderCtrl class"
  - "Windows common controls [C++], CHeaderCtrl"
ms.assetid: b847ac90-5fae-4a87-88e0-ca45f77b8b3b
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CHeaderCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce funzionalità del controllo intestazione comuni di Windows.  
  
## Sintassi  
  
```  
class CHeaderCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeaderCtrl::CHeaderCtrl](../Topic/CHeaderCtrl::CHeaderCtrl.md)|Costruisce un oggetto `CHeaderCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeaderCtrl::ClearAllFilters](../Topic/CHeaderCtrl::ClearAllFilters.md)|Rimuove tutti i filtri per un controllo intestazione.|  
|[CHeaderCtrl::ClearFilter](../Topic/CHeaderCtrl::ClearFilter.md)|Rimuove il filtro per un controllo intestazione.|  
|[CHeaderCtrl::Create](../Topic/CHeaderCtrl::Create.md)|Crea un controllo intestazione e lo collega a un oggetto `CHeaderCtrl`.|  
|[CHeaderCtrl::CreateDragImage](../Topic/CHeaderCtrl::CreateDragImage.md)|Crea una versione dotata dell'immagine di un elemento in un controllo intestazione.|  
|[CHeaderCtrl::CreateEx](../Topic/CHeaderCtrl::CreateEx.md)|Crea un controllo intestazione con gli stili estesi Windows specificati e lo collega a un oggetto `CListCtrl`.|  
|[CHeaderCtrl::DeleteItem](../Topic/CHeaderCtrl::DeleteItem.md)|Rimuove un elemento da un controllo intestazione.|  
|[CHeaderCtrl::DrawItem](../Topic/CHeaderCtrl::DrawItem.md)|Estrae l'elemento specificato di un controllo intestazione.|  
|[CHeaderCtrl::EditFilter](../Topic/CHeaderCtrl::EditFilter.md)|Inizio che modificano il filtro specificato di un controllo intestazione.|  
|[CHeaderCtrl::GetBitmapMargin](../Topic/CHeaderCtrl::GetBitmapMargin.md)|Recupera la larghezza del margine di una bitmap in un controllo intestazione.|  
|[CHeaderCtrl::GetFocusedItem](../Topic/CHeaderCtrl::GetFocusedItem.md)|Ottiene l'identificatore dell'elemento nel controllo intestazione corrente con lo stato attivo.|  
|[CHeaderCtrl::GetImageList](../Topic/CHeaderCtrl::GetImageList.md)|Recupera l'handle di un elenco immagini utilizzato per disegnare le voci di intestazione in un controllo intestazione.|  
|[CHeaderCtrl::GetItem](../Topic/CHeaderCtrl::GetItem.md)|Recupera informazioni su un elemento in un controllo intestazione.|  
|[CHeaderCtrl::GetItemCount](../Topic/CHeaderCtrl::GetItemCount.md)|Recupera un conteggio di elementi in un controllo intestazione.|  
|[CHeaderCtrl::GetItemDropDownRect](../Topic/CHeaderCtrl::GetItemDropDownRect.md)|Ottiene le informazioni del rettangolo di delimitazione del pulsante a discesa specificato in un controllo intestazione.|  
|[CHeaderCtrl::GetItemRect](../Topic/CHeaderCtrl::GetItemRect.md)|Recupera il rettangolo di delimitazione di un dato elemento in un controllo intestazione.|  
|[CHeaderCtrl::GetOrderArray](../Topic/CHeaderCtrl::GetOrderArray.md)|Recupera ordine da sinistra a destra degli elementi in un controllo intestazione.|  
|[CHeaderCtrl::GetOverflowRect](../Topic/CHeaderCtrl::GetOverflowRect.md)|Ottiene il rettangolo di delimitazione del pulsante di overflow per il controllo intestazione corrente.|  
|[CHeaderCtrl::HitTest](../Topic/CHeaderCtrl::HitTest.md)|Determina la voce di intestazione, se presente, si trova in un determinato punto.|  
|[CHeaderCtrl::InsertItem](../Topic/CHeaderCtrl::InsertItem.md)|Inserisce un nuovo elemento in un controllo intestazione.|  
|[CHeaderCtrl::Layout](../Topic/CHeaderCtrl::Layout.md)|Recupera le dimensioni e la posizione di un controllo intestazione all'interno di un rettangolo specificato.|  
|[CHeaderCtrl::OrderToIndex](../Topic/CHeaderCtrl::OrderToIndex.md)|Recupera il valore di indice di un elemento in base al relativo ordine nel controllo intestazione.|  
|[CHeaderCtrl::SetBitmapMargin](../Topic/CHeaderCtrl::SetBitmapMargin.md)|Impostare la larghezza del margine di una bitmap in un controllo intestazione.|  
|[CHeaderCtrl::SetFilterChangeTimeout](../Topic/CHeaderCtrl::SetFilterChangeTimeout.md)|Imposta l'intervallo di tempo tra il momento in cui una modifica viene riportata negli attributi di filtro e l'invio di una notifica `HDN_FILTERCHANGE`.|  
|[CHeaderCtrl::SetFocusedItem](../Topic/CHeaderCtrl::SetFocusedItem.md)|Imposta lo stato attivo su una voce di intestazione specificata nel controllo intestazione corrente.|  
|[CHeaderCtrl::SetHotDivider](../Topic/CHeaderCtrl::SetHotDivider.md)|Modifica il separatore tra le voci di intestazione per indicare un trascinamento manuali di una voce di intestazione.|  
|[CHeaderCtrl::SetImageList](../Topic/CHeaderCtrl::SetImageList.md)|Assegna un elenco immagini a un controllo intestazione.|  
|[CHeaderCtrl::SetItem](../Topic/CHeaderCtrl::SetItem.md)|Imposta gli attributi dell'elemento specificato in un controllo intestazione.|  
|[CHeaderCtrl::SetOrderArray](../Topic/CHeaderCtrl::SetOrderArray.md)|Imposta l'ordine da sinistra a destra degli elementi in un controllo intestazione.|  
  
## Note  
 Un controllo intestazione è una finestra che in genere si trova sopra un gruppo di colonne di testo o di numeri.  Contiene il titolo di ciascuna colonna e può essere suddiviso in parti.  L'utente può trascinare i divisori che separano le parti per impostare la larghezza di ogni colonna.  Per un'illustrazione di un controllo intestazione, vedere [controlli intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775238).  
  
 Questo controllo e la classe `CHeaderCtrl` \) è disponibile solo per i programmi da eseguire in versioni 3,51 di Windows NT e Windows 95\/98 e successive.  
  
 La funzionalità aggiunta per i controlli comuni Internet Explorer 4.0 o Windows 95 include quanto segue:  
  
-   Ordinamento personalizzato voce di intestazione.  
  
-   Trascinamento della selezione voce di intestazione, per riordinare le voci di intestazione.  Utilizzare lo stile `HDS_DRAGDROP` quando si crea l'oggetto `CHeaderCtrl`.  
  
-   Testo della colonna dell'intestazione continuamente visualizzabile durante il ridimensionamento della colonna.  Utilizzare lo stile `HDS_FULLDRAG` quando si crea un oggetto `CHeaderCtrl`.  
  
-   Hot track di intestazione, per comprendere la voce di intestazione quando il puntatore sta controllando.  Utilizzare lo stile `HDS_HOTTRACK` quando si crea l'oggetto `CHeaderCtrl`.  
  
-   Supporto dell'elenco.  Le voci di intestazione possono contenere immagini archiviate in un oggetto `CImageList` o il testo.  
  
 Per ulteriori informazioni su l `CHeaderCtrl`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CHeaderCtrl](../../mfc/using-cheaderctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CHeaderCtrl`  
  
## Requisiti  
 **intestazione:** afxcmn.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CTabCtrl Class](../../mfc/reference/ctabctrl-class.md)   
 [CListCtrl Class](../../mfc/reference/clistctrl-class.md)   
 [CImageList Class](../../mfc/reference/cimagelist-class.md)