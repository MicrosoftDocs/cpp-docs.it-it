---
title: "COleDocument Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDocument"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDocument class"
  - "documenti, OLE"
  - "OLE containers, client items"
  - "OLE (documenti)"
  - "OLE (documenti), classi base"
  - "visual editing, OLE document base class"
ms.assetid: dc2ecb99-03e1-44c7-bb69-48056dd1b672
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# COleDocument Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base per i documenti OLE che supportano modifica visiva.  
  
## Sintassi  
  
```  
class COleDocument : public CDocument  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocument::COleDocument](../Topic/COleDocument::COleDocument.md)|Costruisce un oggetto `COleDocument`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocument::AddItem](../Topic/COleDocument::AddItem.md)|Aggiunge un elemento all'elenco di elementi gestiti dal documento.|  
|[COleDocument::ApplyPrintDevice](../Topic/COleDocument::ApplyPrintDevice.md)|Imposta il dispositivo di stampa di destinazione per tutti gli elementi client nel documento.|  
|[COleDocument::EnableCompoundFile](../Topic/COleDocument::EnableCompoundFile.md)|Nei documenti a essere archiviato utilizzando il formato di file di archivio strutturato OLE.|  
|[COleDocument::GetInPlaceActiveItem](../Topic/COleDocument::GetInPlaceActiveItem.md)|Restituisce l'elemento OLE attualmente attivo sul posto.|  
|[COleDocument::GetNextClientItem](../Topic/COleDocument::GetNextClientItem.md)|Ottiene l'elemento client seguente per l'iterazione.|  
|[COleDocument::GetNextItem](../Topic/COleDocument::GetNextItem.md)|Ottiene l'elemento riportato di documento per l'iterazione.|  
|[COleDocument::GetNextServerItem](../Topic/COleDocument::GetNextServerItem.md)|Ottiene l'elemento server seguente per l'iterazione.|  
|[COleDocument::GetPrimarySelectedItem](../Topic/COleDocument::GetPrimarySelectedItem.md)|Restituisce l'elemento OLE primario selezionato nel documento.|  
|[COleDocument::GetStartPosition](../Topic/COleDocument::GetStartPosition.md)|Ottiene la posizione iniziale per avviare l'iterazione.|  
|[COleDocument::HasBlankItems](../Topic/COleDocument::HasBlankItems.md)|Controlli per gli elementi vuoti nel documento.|  
|[COleDocument::OnShowViews](../Topic/COleDocument::OnShowViews.md)|Chiamato quando quest'ultimo diventa visibile o invisibile.|  
|[COleDocument::RemoveItem](../Topic/COleDocument::RemoveItem.md)|Rimuove un elemento dall'elenco di elementi gestiti dal documento.|  
|[COleDocument::UpdateModifiedFlag](../Topic/COleDocument::UpdateModifiedFlag.md)|Quindi viene contrassegnato come modificato se qualsiasi elemento OLE contenuto sono stati modificati.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocument::OnEditChangeIcon](../Topic/COleDocument::OnEditChangeIcon.md)|Gestisce gli eventi del comando di menu modifica dell'icona.|  
|[COleDocument::OnEditConvert](../Topic/COleDocument::OnEditConvert.md)|Gestisce la conversione di un oggetto incorporato o collegato da un tipo a un altro.|  
|[COleDocument::OnEditLinks](../Topic/COleDocument::OnEditLinks.md)|Gestire eventi nei collegamenti nel menu Modifica.|  
|[COleDocument::OnFileSendMail](../Topic/COleDocument::OnFileSendMail.md)|Invia un messaggio di posta elettronica con il documento associato.|  
|[COleDocument::OnUpdateEditChangeIcon](../Topic/COleDocument::OnUpdateEditChangeIcon.md)|Chiamato dal framework per aggiornare l'interfaccia utente del comando per l'opzione di menu icona modifica o di modifica.|  
|[COleDocument::OnUpdateEditLinksMenu](../Topic/COleDocument::OnUpdateEditLinksMenu.md)|Chiamato dal framework per aggiornare l'interfaccia utente del comando per l'opzione di menu collegamenti o di modifica.|  
|[COleDocument::OnUpdateObjectVerbMenu](../Topic/COleDocument::OnUpdateObjectVerbMenu.md)|Chiamato dal framework per aggiornare l'interfaccia utente del comando per l'opzione di menu*Nomeoggetto* \/modifica del menu dei verbi a cui accede la modifica\/*Nomeoggetto*.|  
|[COleDocument::OnUpdatePasteLinkMenu](../Topic/COleDocument::OnUpdatePasteLinkMenu.md)|Chiamato dal framework per aggiornare l'interfaccia utente del comando per la voce di menu di incollare speciale.|  
|[COleDocument::OnUpdatePasteMenu](../Topic/COleDocument::OnUpdatePasteMenu.md)|Chiamato dal framework per aggiornare l'interfaccia utente del comando per l'opzione di menu incolla.|  
  
## Note  
 `COleDocument` è derivato da **CDocument**, che consente alle applicazioni OLE utilizzare l'architettura documento\/visualizzazione fornita dalla libreria MFC.  
  
 `COleDocument` considera un documento come una raccolta di oggetti [CDocItem](../../mfc/reference/cdocitem-class.md) agli elementi OLE handle.  Sia il contenitore che le applicazioni server richiedono tale architettura poiché i documenti devono essere in grado di contenere elementi OLE.  Le classi [COleClientItem](../../mfc/reference/coleclientitem-class.md) e [COleServerItem](../../mfc/reference/coleserveritem-class.md), entrambe derivate da `CDocItem`, gestisce le interazioni tra applicazioni e gli elementi OLE.  
  
 Se si scrive un'applicazione contenitore semplice, derivare la classe del documento da `COleDocument`.  Se si scrive un'applicazione contenitore che supporta collegati agli elementi incorporati contenuto dai documenti, derivano la classe del documento da [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md).  Se si scrive un'applicazione server o una combinazione contenitore\/server, derivare la classe del documento da [COleServerDoc](../../mfc/reference/coleserverdoc-class.md).  `COleLinkingDoc` e `COleServerDoc` sono derivati da `COleDocument`, in modo che queste classi ereditano tutti i servizi disponibili in `COleDocument` e in **CDocument**.  
  
 Per utilizzare `COleDocument`, derivare una classe da e aggiungere la funzionalità per gestire i dati non di OLE dell'applicazione nonché incorporato o elementi collegati.  Se si definisce `CDocItem`di classi derivate da per archiviare i dati nativi dell'applicazione, è possibile utilizzare l'implementazione predefinita definita da `COleDocument` per l'archiviazione dei dati OLE non OLE.  È inoltre possibile progettare le proprie strutture di dati per archiviare i dati non OLE separatamente dagli elementi OLE.  Per ulteriori informazioni, vedere l'articolo [contenitori: File composita](../../mfc/containers-compound-files.md).  
  
 **CDocument** supporta inviare il documento tramite posta elettronica se il supporto di posta elettronica \(MAPI\) è presente.  `COleDocument` ha aggiornato [OnFileSendMail](../Topic/COleDocument::OnFileSendMail.md) per gestire documenti composte correttamente.  Per ulteriori informazioni, vedere gli articoli [MAPI](../../mfc/mapi.md) e. [Supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 `COleDocument`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [Nell'esempio CONTAINER di esempio MFC](../../top/visual-cpp-samples.md)   
 [Esempio MFCBIND MFC](../../top/visual-cpp-samples.md)   
 [CDocument Class](../../mfc/reference/cdocument-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)