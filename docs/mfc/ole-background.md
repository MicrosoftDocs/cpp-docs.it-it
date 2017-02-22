---
title: "Sfondo OLE | Microsoft Docs"
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
  - "OLE, informazioni su OLE"
ms.assetid: 5f654eb5-66b1-40c9-9215-bb85356a67f8
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Sfondo OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

OLE è un meccanismo che consente agli utenti di creare e modificare i documenti che contengono gli elementi o "" gli oggetti creati da più applicazioni.  
  
> [!NOTE]
>  OLE era originariamente acronimo di oggetto che collega e che incorpora.  Tuttavia, è detto OLE.  Le parti OLE non correlate al collegamento e per incorporare ora fanno parte della tecnologia active.  
  
 I documenti OLE, storicamente chiamati documenti composti, senza integrano perfettamente i vari tipi di dati, o componenti.  I clip corretti, i fogli di calcolo e bitmap sono tipici esempi di componenti presenti nei documenti OLE.  Il supporto di OLE nell'applicazione consente agli utenti ai documenti OLE di utilizzo senza preoccuparsi della commutazione tra applicazioni diverse; OLE consente di passare automaticamente.  
  
 Si utilizza un'applicazione contenitore creare documenti composti e un'applicazione server o un componente creare gli elementi nel documento contenitore.  Qualsiasi applicazione che si scrivono può essere un contenitore, un server, oppure entrambe.  
  
 OLE include numerosi concetti diversi che tutto il lavoro allo scopo di fornire interazione tra le applicazioni.  Queste aree includono:  
  
 Collegamento e incorporare  
 Collegamento e incorporare sono i due metodi per archiviare gli elementi creati in un documento OLE creati in un'altra applicazione.  Per informazioni generali sulle differenze tra i due, vedere l'articolo [Sfondo OLE: Collegamento e incorporare](../mfc/ole-background-linking-and-embedding.md).  Per informazioni dettagliate, vedere gli articoli [Contenitori](../mfc/containers.md) e [Server](../mfc/servers.md).  
  
 L'attivazione sul posto \(modifica visiva\)  
 Attivando un elemento incorporato nel contesto del documento contenitore viene chiamato modifica sul posto o visivi di attivazione.  Le modifiche dell'applicazione contenitore per includere funzionalità di applicazione del componente che ha creato l'elemento incorporato.  Gli elementi collegati non vengono attivati mai disponibile perché i dati effettivi per l'elemento è contenuto in un file separato, dal contesto dell'applicazione contenente il collegamento.  Per ulteriori informazioni sull'attivazione sul posto, vedere l'articolo [Attivazione](../mfc/activation-cpp.md).  
  
> [!NOTE]
>  Collegamento e incorporando e l'attivazione sul posto fornisce le funzionalità principali di modifica visiva OLE.  
  
 Automazione  
 L'automazione consente a un'applicazione di determinare un'altra applicazione.  L'applicazione movente è nota come client di automazione e l'applicazione che è guidata è nota come un server di automazione o componente di automazione.  Per ulteriori informazioni sull'automazione, vedere gli articoli [Client di automazione](../mfc/automation-clients.md) e [Server di automazione](../mfc/automation-servers.md).  
  
> [!NOTE]
>  Attività di automazione sia in contesti OLE che attivi con tecnologia.  È possibile automatizzare qualsiasi oggetto COM.  
  
 File composte  
 I file composte fornisce un formato di file standard che semplifica archiviare strutturato documenti composti per le applicazioni OLE.  In un file composito, le archiviazioni hanno diverse funzionalità delle directory e i flussi hanno diverse funzionalità dei file.  Questa tecnologia è denominata anche un'archiviazione strutturata.  Per ulteriori informazioni sui file compositi, vedere l'articolo [Contenitori: File composte](../mfc/containers-compound-files.md).  
  
 Uniformi il trasferimento dei dati  
 Il trasferimento di dati uniforme \(UDT\) è un set di interfacce che consentono ai dati da inviare e ricevere a un modo standard, indipendentemente dall'effettivo metodo scelto per trasferire i dati.  Il tipo definito dall'utente costituisce la base per il trasferimento dei dati di trascinamento della selezione.  Tipo definito dall'ora funge da base per il trasferimento di dati windows esistente, ad esempio gli Appunti e lo scambio dinamico dati \(DDE\).  Per ulteriori informazioni sul tipo definito dall'utente, vedere l'articolo [Oggetti dati e origini dati \(OLE\)](../mfc/data-objects-and-data-sources-ole.md).  
  
 Trascinamento della selezione  
 Trascinare della selezione è una tecnica di modifica diretta e facile trasferire i dati tra applicazioni, tra le finestre in un'applicazione, o anche all'interno di una finestra in un'applicazione.  I dati da trasferire vengono selezionati e trascinati nella destinazione desiderata.  Il trascinamento della selezione è basato su trasferimento dei dati uniforme.  Per ulteriori informazioni su trascinamento e su elimina, vedere l'articolo [Trascina la selezione](../mfc/drag-and-drop-ole.md).  
  
 Component Object Model\)  
 Il modello COM \(Component Object Model \(COM\) fornisce un'infrastruttura utilizzata quando gli oggetti OLE comunicano tra loro.  Le classi OLE MFC semplifica COM per il programmatore.  COM fa parte della tecnologia active, poiché gli oggetti COM sono alla base della tecnologia OLE che attiva.  Per ulteriori informazioni su COM, vedere gli argomenti di [Active Template Library \(ATL\)](../atl/active-template-library-atl-concepts.md).  
  
 Alcuni degli argomenti OLE più importanti vengono analizzati in articoli seguenti:  
  
-   [Sfondo OLE: Collegamento e incorporare](../mfc/ole-background-linking-and-embedding.md)  
  
-   [Sfondo OLE: Contenitori e server](../mfc/ole-background-containers-and-servers.md)  
  
-   [Sfondo OLE: Strategie di implementazione](../mfc/ole-background-implementation-strategies.md)  
  
-   [Sfondo OLE: Implementazione MFC](../mfc/ole-background-mfc-implementation.md)  
  
 Per informazioni generali OLE impossibile trovare gli articoli in precedenza, ricerca OLE in MSDN.  
  
## Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)