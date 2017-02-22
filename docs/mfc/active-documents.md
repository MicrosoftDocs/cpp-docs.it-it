---
title: "Documenti attivi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "documenti attivi [C++]"
  - "documenti attivi [C++], requisiti"
  - "documenti attivi [C++], visualizzazioni"
  - "OLE [C++], documenti attivi"
  - "oggetti visualizzazione, requisiti"
  - "visualizzazioni [C++], documenti attivi"
ms.assetid: 1378f18e-aaa6-420b-8501-4b974905baa0
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Documenti attivi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I documenti attivi estendono la tecnologia composta del documento OLE.  Queste estensioni vengono fornite sotto forma di interfacce aggiuntive che gestiscono le visualizzazioni, in modo che gli oggetti possano essere eseguiti all'interno di contenitori ma mantenere il controllo sulla relativa visualizzazione e sulle funzioni di stampa.  Questo processo consente di visualizzare i documenti nei frame stranieri \(come il raccoglitore Microsoft Office o Microsoft Internet Explorer\) e nei frame nativi \(come le porte del prodotto\).  
  
 In questa sezione vengono descritti i [requisiti per i documenti attivi](#requirements_for_active_documents) funzionali.  Il documento attivo possiede un set di dati e ha accesso all'archivio in cui i dati possono essere salvati e recuperati.  Consente di creare e gestire uno o più visualizzazioni sui dati.  Oltre a supportare l'incorporazione standard e le interfacce sul posto di attivazione dei documenti OLE, il documento attivo passa la possibilità di creare visualizzazioni con `IOleDocument`.  Tramite questa interfaccia, il contenitore può chiedere di creare \(ed eventualmente enumerare\) le visualizzazioni che il documento attivo può visualizzare.  Tramite questa interfaccia, il documento attivo può inoltre fornire informazioni diverse su se stesso, come supportare più visualizzazioni o rettangoli complessi.  
  
 Di seguito viene fornita l'interfaccia **IOleDocument** .  Si noti che l'interfaccia **IEnumOleDocumentViews** è un enumeratore OLE standard per i tipi **IOleDocumentView \***.  
  
 `interface IOleDocument : IUnknown`  
  
 `{`  
  
 `HRESULT CreateView(`  
  
 `[in] IOleInPlaceSite *pIPSite,`  
  
 `[in] IStream *pstm,`  
  
 `[in] DWORD dwReserved,`  
  
 `[out] IOleDocumentView **ppView);`  
  
 `HRESULT GetDocMiscStatus([out] DWORD *pdwStatus);`  
  
 `HRESULT EnumViews(`  
  
 `[out] IEnumOleDocumentViews **ppEnum,`  
  
 `[out] IOleDocumentView **ppView);`  
  
 `}`  
  
 Ogni documento attivo deve disporre di un provider di visualizzazione del frame con questa interfaccia.  Se il documento non è incorporato all'interno di un contenitore, il server di documenti attivi deve fornire il frame di visualizzazione.  Tuttavia, quando il documento attivo viene incorporato in un contenitore di documenti attivi, il contenitore fornisce il frame di visualizzazione.  
  
 Un documento attivo può creare uno o più tipi di [visualizzazioni](#requirements_for_view_objects) dei dati \(ad esempio, normale, struttura, layout di pagina, e così via\).  Le visualizzazioni operano come filtri tramite i quali i dati possono essere visualizzati.  Anche se il documento ha un solo tipo di visualizzazione, è comunque possibile supportare più visualizzazioni al fine di supportare le funzionalità della nuova finestra \(ad esempio, l'elemento **Nuova finestra** dal menu **Finestra** nelle applicazioni Office\).  
  
##  <a name="requirements_for_active_documents"></a> Requisiti per i documenti attivi  
 Un documento attivo che può essere visualizzato in un contenitore di documenti attivi deve:  
  
-   Utilizzare i file compositi OLE come relativo meccanismo di archiviazione implementando `IPersistStorage`.  
  
-   Supportare la base che incorpora le funzionalità dei documenti OLE, inclusi **Crea da file**.  Ciò richiede le interfacce `IPersistFile`, `IOleObject` e `IDataObject`.  
  
-   Supportare una o più visualizzazioni, ognuna delle quali in grado di attivarsi sul posto.  Ovvero le visualizzazioni devono supportare l'interfaccia `IOleDocumentView` nonché le interfacce `IOleInPlaceObject` e `IOleInPlaceActiveObject` \(utilizzando **IOleInPlaceSite** del contenitore e interfacce **IOleInPlaceFrame** \).  
  
-   Supportare le interfacce `IOleDocument`, `IOleCommandTarget` e `IPrint`del documento attivo standard.  
  
 Conoscere come e quando utilizzare le interfacce di contenitore è implicito in questi requisiti.  
  
##  <a name="requirements_for_view_objects"></a> Requisiti per gli oggetti visualizzazione  
 Un documento attivo può creare uno o più visualizzazioni dei dati.  Dal punto di vista funzionale, queste visualizzazioni sono come le porte in un particolare metodo per la visualizzazione dei dati.  Se un documento attivo supporta solo una visualizzazione, il documento attivo e la singola visualizzazione possono essere implementati utilizzando un'unica classe.  **IOleDocument::CreateView** restituisce il puntatore all'interfaccia `IOleDocumentView` dello stesso oggetto.  
  
 Per essere rappresentato in un contenitore di documenti attivi, un componente di visualizzazione deve supportare **IOleInPlaceObject** e **IOleInPlaceActiveObject** oltre a `IOleDocumentView`:  
  
 `interface IOleDocumentView : IUnknown`  
  
 `{`  
  
 `HRESULT SetInPlaceSite([in] IOleInPlaceSite *pIPSite);`  
  
 `HRESULT GetInPlaceSite([out] IOleInPlaceSite **ppIPSite);`  
  
 `HRESULT GetDocument([out] IUnknown **ppunk);`  
  
 `[input_sync] HRESULT SetRect([in] LPRECT prcView);`  
  
 `HRESULT GetRect([in] LPRECT prcView);`  
  
 `[input_sync] HRESULT SetRectComplex(`  
  
 `[in] LPRECT prcView,`  
  
 `[in] LPRECT prcHScroll,`  
  
 `[in] LPRECT prcVScroll,`  
  
 `[in] LPRECT prcSizeBox);`  
  
 `HRESULT Show([in] BOOL fShow);`  
  
 `HRESULT UIActivate([in] BOOL fUIActivate);`  
  
 `HRESULT Open(void);`  
  
 `HRESULT CloseView([in] DWORD dwReserved);`  
  
 `HRESULT SaveViewState([in] IStream *pstm);`  
  
 `HRESULT ApplyViewState([in] IStream *pstm);`  
  
 `HRESULT Clone(`  
  
 `[in] IOleInPlaceSite *pIPSiteNew,`  
  
 `[out] IOleDocumentView **ppViewNew);`  
  
 `}`  
  
 Ogni visualizzazione dispone di un sito di visualizzazione collegato, che incapsula il frame di visualizzazione e la porta di visualizzazione \(HWND e un'area rettangolare in tale finestra\).  Il sito espone la funzionalità attraverso l'interfaccia standard **IOleInPlaceSite** .  Si noti che è possibile avere più di una porta di visualizzazione in un singolo elemento HWND.  
  
 In genere, ogni tipo di visualizzazione dispone di una rappresentazione stampata diversa.  Pertanto le visualizzazioni e i siti di visualizzazione corrispondenti devono implementare interfacce di stampa se `IPrint` e `IContinueCallback`, rispettivamente.  Il frame di visualizzazione deve negoziare con il provider di visualizzazione attraverso **IPrint** durante l'inizio della stampa, in modo che le intestazioni, i piè di pagina, i margini e gli elementi correlati vengano stampati correttamente.  Il provider di visualizzazione notifica il frame degli eventi relativi alla stampa attraverso `IContinueCallback`.  Per ulteriori informazioni sull'uso di queste interfacce, vedere [Stampa a livello di codice](../mfc/programmatic-printing.md).  
  
 Si noti che se un documento attivo supporta solo una visualizzazione, allora il documento attivo e la singola visualizzazione possono essere implementati utilizzando un'unica classe concreta.  **IOleDocument::CreateView** restituisce semplicemente il puntatore all'interfaccia `IOleDocumentView` dello stesso oggetto.  In breve, non è necessario che esistano due istanze di oggetti distinti quando è necessaria una sola visualizzazione .  
  
 Un oggetto visualizzazione può essere una destinazione di comando.  Implementando `IOleCommandTarget` una visualizzazione può ricevere comandi che si verificano nell'interfaccia utente del contenitore \(ad esempio **Nuovo**, **Apri**, **Salva come**, **Stampa** dal menu **File** ; e **Copia**, **Incolla**, **Annulla** dal menu **Modifica** \).  Per ulteriori informazioni, vedere [Gestione dei messaggi e destinazioni comandi](../mfc/message-handling-and-command-targets.md).  
  
## Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)