---
title: "Contenitori: implementazione di un contenitore | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni [OLE], contenitore OLE"
  - "contenitori OLE, implementazione"
ms.assetid: af1e2079-619a-4eac-9327-985ad875823a
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitori: implementazione di un contenitore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene riepilogata la procedura per implementare un contenitore e indicante altri elementi che prevedono ulteriori spiegazioni più dettagliate su implementare contenitori.  Sono inoltre elencate alcune funzionalità OLE facoltativi che è possibile implementare e gli articoli che descrivono le funzionalità.  
  
#### Per preparare la classe derivata da cwinapp  
  
1.  Inizializzare le librerie OLE **AfxOleInit** chiamando la funzione membro di `InitInstance`.  
  
2.  Chiamare `CDocTemplate::SetContainerInfo` in `InitInstance` per assegnare il menu e le risorse tasto di scelta rapida utilizzati quando un elemento incorporato è attivato sul posto.  Per ulteriori informazioni su questo argomento, vedere [Attivazione](../mfc/activation-cpp.md).  
  
 Queste funzionalità vengono fornite automaticamente quando si utilizza la Creazione guidata applicazione MFC per creare un'applicazione contenitore.  Vedere [Creare un programma EXE MFC](../mfc/reference/mfc-application-wizard.md).  
  
#### Per preparare la classe di visualizzazione  
  
1.  Disponibilità track of ha selezionato gli elementi di un puntatore, o l'elenco dei puntatori se supporta la selezione multipla, elementi selezionati.  La funzione di `OnDraw` deve estrarre tutti gli elementi OLE.  
  
2.  Eseguire l'override `IsSelected` per controllare se l'elemento passato sia attualmente selezionato.  
  
3.  Implementare un gestore di messaggi di **OnInsertObject** per visualizzare la finestra di dialogo **Inserisci oggetto** .  
  
4.  Implementare un gestore di messaggi di `OnSetFocus` per trasferire lo stato attivo dalla visualizzazione in un elemento incorporato OLE attivo sul posto.  
  
5.  Implementare un gestore di messaggi di `OnSize` per notificare a un elemento OLE incorporato che è necessario modificare il rettangolo in base alla modifica della dimensione del punto di vista contenitore.  
  
 Poiché l'implementazione di queste funzionalità varia notevolmente da un'applicazione a l, la creazione guidata applicazione solo fornisce un'implementazione di base.  Potrebbe essere necessario personalizzare queste funzioni per ottenere l'applicazione funzionare correttamente.  Per un esempio, vedere l'esempio di [CONTENITORE](../top/visual-cpp-samples.md).  
  
#### Per gestire incorporato e gli elementi collegati  
  
1.  Derivare la classe da [COleClientItem](../mfc/reference/coleclientitem-class.md).  Gli oggetti della classe rappresentano elementi cui sono stati incorporati in o collegati al documento OLE.  
  
2.  Override **OnChange**, `OnChangeItemPosition` e `OnGetItemPosition`.  Queste funzioni gestiscono il ridimensionamento, collocando e modificando incorporato e elemento collegato.  
  
 La creazione guidata applicazione derivare la classe automaticamente, ma sarà probabilmente necessario eseguire l'override di **OnChange** e l'altro viene elencato con nel passaggio 2 precedente.  Gli scheletri di implementazioni devono essere personalizzati per la maggior parte delle applicazioni, poiché queste funzioni vengono implementate in modo diverso da un'applicazione all'altra.  Per esempi di questo argomento, vedere gli esempi [DRAWCLI](../top/visual-cpp-samples.md) e [CONTENITORE](../top/visual-cpp-samples.md)MFC.  
  
 È necessario aggiungere una serie di elementi alla struttura del menu dell'applicazione contenitore OLE support.  Per ulteriori informazioni, vedere [Menu e risorse: Aggiunta del contenitore](../mfc/menus-and-resources-container-additions.md).  
  
 È inoltre possibile supportare alcune delle funzionalità nell'applicazione contenitore:  
  
-   L'attivazione sul posto quando si modifica un elemento incorporato.  
  
     Per ulteriori informazioni, vedere [Attivazione](../mfc/activation-cpp.md).  
  
-   Creazione degli elementi OLE trascinandone una selezione da un'applicazione server.  
  
     Per ulteriori informazioni, vedere [Trascinamento della selezione \(OLE\)](../mfc/drag-and-drop-ole.md).  
  
-   Collegamenti agli oggetti incorporati o alle applicazioni contenitore\/server di combinazione.  
  
     Per ulteriori informazioni, vedere [Contenitori: Funzionalità avanzate](../mfc/containers-advanced-features.md).  
  
## Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Contenitori: elementi client](../mfc/containers-client-items.md)