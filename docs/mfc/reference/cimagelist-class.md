---
title: "CImageList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CImageList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CImageList class"
  - "image lists [C++], CImageList class"
  - "Windows common controls [C++], CImageList"
ms.assetid: b6d1a704-1c82-4548-8a8f-77972adc98a5
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# CImageList Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del controllo comune dell'elenco immagini di Windows.  
  
## Sintassi  
  
```  
class CImageList : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImageList::CImageList](../Topic/CImageList::CImageList.md)|Costruisce un oggetto `CImageList`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImageList::Add](../Topic/CImageList::Add.md)|Aggiungere un'immagine o immagini a un elenco.|  
|[CImageList::Attach](../Topic/CImageList::Attach.md)|Aggiunge un elenco immagini a un oggetto `CImageList`.|  
|[CImageList::BeginDrag](../Topic/CImageList::BeginDrag.md)|Avviare che il trascinamento un'immagine.|  
|[CImageList::Copy](../Topic/CImageList::Copy.md)|Copiare un'immagine in un oggetto `CImageList`.|  
|[CImageList::Create](../Topic/CImageList::Create.md)|Inizializza un elenco immagini e lo collega a un oggetto `CImageList`.|  
|[CImageList::DeleteImageList](../Topic/CImageList::DeleteImageList.md)|Elimina un elenco.|  
|[CImageList::DeleteTempMap](../Topic/CImageList::DeleteTempMap.md)|Chiamato dal gestore del tempo di inattività [CWinApp](../../mfc/reference/cwinapp-class.md) per eliminare qualsiasi oggetto temporaneo `CImageList` creato da `FromHandle`.|  
|[CImageList::Detach](../Topic/CImageList::Detach.md)|Rimuove un oggetto dell'elenco immagini da un oggetto `CImageList` e restituisce un handle a un elenco.|  
|[CImageList::DragEnter](../Topic/CImageList::DragEnter.md)|Aggiornamenti dei blocchi durante un'operazione di trascinamento e viene visualizzata l'immagine di trascinamento in una posizione specificata.|  
|[CImageList::DragLeave](../Topic/CImageList::DragLeave.md)|Sblocca la finestra e nasconde l'immagine di trascinamento in modo da poter aggiornare la finestra.|  
|[CImageList::DragMove](../Topic/CImageList::DragMove.md)|Sposta l'immagine che è possibile trascinare durante un'operazione di trascinamento.|  
|[CImageList::DragShowNolock](../Topic/CImageList::DragShowNolock.md)|Mostra o nasconde l'immagine di trascinamento durante l'operazione di trascinamento, senza bloccare la finestra.|  
|[CImageList::Draw](../Topic/CImageList::Draw.md)|L'immagine viene disegnata che è possibile trascinare durante un'operazione di trascinamento.|  
|[CImageList::DrawEx](../Topic/CImageList::DrawEx.md)|Estrae un elemento dell'elenco immagini nel contesto di dispositivo specificato.  La funzione utilizza lo stile di disegno specificato e consente di fondere l'immagine al colore specificato.|  
|[CImageList::DrawIndirect](../Topic/CImageList::DrawIndirect.md)|Disegna un'immagine da un elenco.|  
|[CImageList::EndDrag](../Topic/CImageList::EndDrag.md)|Termina un'operazione di trascinamento.|  
|[CImageList::ExtractIcon](../Topic/CImageList::ExtractIcon.md)|Crea un'icona basata su un'immagine e una maschera in un elenco.|  
|[CImageList::FromHandle](../Topic/CImageList::FromHandle.md)|Restituisce un puntatore a un oggetto `CImageList` una volta fornito un handle a un elenco.  Se un oggetto `CImageList` non è connesso all'handle, un oggetto temporaneo `CImageList` viene creato e allegato.|  
|[CImageList::FromHandlePermanent](../Topic/CImageList::FromHandlePermanent.md)|Restituisce un puntatore a un oggetto `CImageList` una volta fornito un handle a un elenco.  Se un oggetto `CImageList` non è connesso a l **NULL**, viene restituito.|  
|[CImageList::GetBkColor](../Topic/CImageList::GetBkColor.md)|Recupera il colore di sfondo corrente per un elenco di immagini.|  
|[CImageList::GetDragImage](../Topic/CImageList::GetDragImage.md)|Ottiene l'elenco di immagini temporaneo utilizzato per il trascinamento.|  
|[CImageList::GetImageCount](../Topic/CImageList::GetImageCount.md)|Recupera il numero di immagini in un elenco.|  
|[CImageList::GetImageInfo](../Topic/CImageList::GetImageInfo.md)|Recupera le informazioni su un'immagine.|  
|[CImageList::GetSafeHandle](../Topic/CImageList::GetSafeHandle.md)|Recupera **m\_hImageList**.|  
|[CImageList::Read](../Topic/CImageList::Read.md)|Legge un elenco immagini da un archivio.|  
|[CImageList::Remove](../Topic/CImageList::Remove.md)|Rimuove un'immagine da un elenco.|  
|[CImageList::Replace](../Topic/CImageList::Replace.md)|Sostituisce un'immagine in un elenco immagini con una nuova immagine.|  
|[CImageList::SetBkColor](../Topic/CImageList::SetBkColor.md)|Imposta il colore di sfondo di un elenco.|  
|[CImageList::SetDragCursorImage](../Topic/CImageList::SetDragCursorImage.md)|Crea una nuova immagine di trascinamento.|  
|[CImageList::SetImageCount](../Topic/CImageList::SetImageCount.md)|Reimposta il conteggio delle immagini in un elenco.|  
|[CImageList::SetOverlayImage](../Topic/CImageList::SetOverlayImage.md)|Aggiungere l'indice in base zero di un'immagine all'elenco di immagini da utilizzare come maschere di sovrapposizione.|  
|[CImageList::Write](../Topic/CImageList::Write.md)|Scrive un elenco immagini in un archivio.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImageList::operator HIMAGELIST](../Topic/CImageList::operator%20HIMAGELIST.md)|Restituisce `HIMAGELIST` associato a `CImageList`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImageList::m\_hImageList](../Topic/CImageList::m_hImageList.md)|Handle che contengono l'elenco di immagini associato a questo oggetto.|  
  
## Note  
 "Un elenco immagini" è una raccolta di immagini stesso di tagliare, ognuno dei quali possono fare riferimento al relativo indice a base zero.  Gli elenchi di immagini vengono utilizzati per gestire efficientemente grandi quantità di icone o di bitmap.  Tutte le immagini in un elenco immagini sono contenute in una singola, una bitmap nel formato del dispositivo dello schermo.  Un elenco immagini è possibile includere una bitmap monocromatica contenente le maschere utilizzate per disegnare immagini trasparente \(stile di icona.  L'api \(API\) di Microsoft Win32 forniscono funzioni dell'elenco immagini che consentono di disegnare immagini, creare ed eliminare gli elenchi di immagini, aggiungere e rimuovere immagini, immagini di sostituzione, immagini di unione e le immagini di trascinamento.  
  
 Questo controllo e la classe `CImageList` \) è disponibile solo per i programmi in esecuzione in versioni 3,51 di Windows NT e Windows 95\/98 e successive.  
  
 Per ulteriori informazioni su l `CImageList`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CImageList](../../mfc/using-cimagelist.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CImageList`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CListCtrl Class](../../mfc/reference/clistctrl-class.md)   
 [CTabCtrl Class](../../mfc/reference/ctabctrl-class.md)