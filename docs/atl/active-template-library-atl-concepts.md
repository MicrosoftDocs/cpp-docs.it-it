---
title: "Concetti relativi alla Libreria ATL (Active Template Library) | Microsoft Docs"
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
  - "ATL, informazioni su ATL"
ms.assetid: a3960991-4d76-4da5-9568-3fa7fde53ff4
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Concetti relativi alla Libreria ATL (Active Template Library)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le Active Template Library \(ATL\) sono un set di classi C\+\+ basate su modelli che consentono di creare piccoli, oggetti veloci di Component Object Model \(COM\).  Con supporto speciale per funzionalità principali COM, incluse le implementazioni predefinite, le interfacce duali, le interfacce standard dell'enumeratore COM, i punti di connessione, di un'interfaccia tear\-off e i controlli ActiveX.  
  
 Se è stata programmazione ATL, vedere per ulteriori informazioni sugli attributi, una nuova funzionalità di Visual C\+\+ .NET progettata per semplificare la programmazione COM.  Per ulteriori informazioni, vedere [programmazione con attributi](../windows/attributed-programming-concepts.md).  
  
## In questa sezione  
 [L'esercitazione ATL](../atl/active-template-library-atl-tutorial.md)  
 Vengono fornite le informazioni per creare un controllo e alcune nozioni fondamentali su ATL relative al processo.  
  
 [Introduzione a COM e ATL](../atl/introduction-to-com-and-atl.md)  
 Vengono introdotti i concetti principali del modello COM \(Component Object Model \(COM\).  In questo articolo viene brevemente viene illustrata ATL è e quando utilizzarlo.  
  
 [Principi fondamentali di oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)  
 Viene descritta la relazione tra le varie classi ATL e come tali classi vengono implementate.  
  
 [interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)  
 Vengono descritte le interfacce duali da una prospettiva ATL.  
  
 [Raccolte e enumeratori ATL](../atl/atl-collections-and-enumerators.md)  
 Viene descritta l'implementazione e la creazione di raccolte e gli enumeratori in ATL.  
  
 [Nozioni di base del controllo composito](../atl/atl-composite-control-fundamentals.md)  
 Vengono fornite istruzioni dettagliate per creare un controllo composito.  Un controllo composito è un tipo di controllo ActiveX che può contenere altri controlli ActiveX o controlli Windows.  
  
 [Il contenimento dei controlli domande frequenti su ATL](../atl/atl-control-containment-faq.md)  
 Relativamente alle domande principali correlate a ospitare i controlli con ATL.  
  
 [Pagine delle proprietà COM ATL](../atl/atl-com-property-pages.md)  
 Viene illustrato come specificare e distribuire le pagine delle proprietà COM.  
  
 [Supporto ATL ai controlli DHTML](../atl/atl-support-for-dhtml-controls.md)  
 Vengono fornite istruzioni dettagliate per la creazione di un controllo DHTML.  
  
 [Punti di connessione ATL](../atl/atl-connection-points.md)  
 Viene illustrata i punti di connessione sono e come ATL le implementa.  
  
 [Gestione degli eventi e ATL](../atl/event-handling-and-atl.md)  
 Vengono descritte le misure che è necessario eseguire per gestire gli eventi COM utilizzando le classi [IDispEventImpl](../atl/reference/idispeventimpl-class.md) e [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) ATL.  
  
 [ATL e il gestore di marshalling con modello di threading Free](../atl/atl-and-the-free-threaded-marshaler.md)  
 Vengono fornite informazioni dettagliate sull'opzione ATL la procedura guidata semplice dell'oggetto che consente che la classe di aggregazione il gestore di marshalling con modello di threading Free \(FTM\).  
  
 [Specificare il modello di threading di progetto](../atl/specifying-the-threading-model-for-a-project-atl.md)  
 Vengono descritte le macro disponibili per controllare relativo alle prestazioni di runtime al threading nel progetto.  
  
 [Classi del modulo ATL](../atl/atl-module-classes.md)  
 Vengono illustrate le classi di modulo nuove per ATL 7,0.  Le classi di modulo implementa la funzionalità di base richieste da ATL.  
  
 [Servizi ATL](../atl/atl-services.md)  
 Alla sequenza di eventi che si verificano quando un servizio viene distribuito.  Si parla di alcuni dei concetti relativi a compilare un servizio.  
  
 [Classi di finestre ATL](../atl/atl-window-classes.md)  
 Viene descritto come creare, superclasse e finestre della sottoclasse in ATL.  Le classi di finestre ATL non sono classi COM.  
  
 [Classi Collection ATL](../atl/atl-collection-classes.md)  
 Viene descritto come utilizzare matrici e i mapping in ATL.  
  
 [Il componente ATL il Registro Di Sistema \(Ufficiale di registrar\)](../atl/atl-registry-component-registrar.md)  
 Viene descritta la sintassi di scripting ATL e i parametri sostituibili.  Viene inoltre illustrato come configurare un collegamento statico al registrar di registrar.  
  
 [Programmazione con il codice di runtime del linguaggio C e ATL](../atl/programming-with-atl-and-c-run-time-code.md)  
 Vengono illustrati i vantaggi del collegamento statico o dinamico alla libreria di runtime C \(CRT\).  
  
 [programmazione con CComBSTR](../atl/programming-with-ccombstr-atl.md)  
 Vengono illustrate diverse situazioni che richiedono una particolare attenzione durante la programmazione con `CComBSTR`.  
  
 [Riferimenti alla codifica](../atl/atl-encoding-reference.md)  
 Fornisce funzioni e le macro che supportano la codifica in un intervallo di standard di Internet comuni quali il uuencode, i valori esadecimali e UTF8 in atlenc.h.  
  
 [Riferimenti sulle utilità](../atl/atl-utilities-reference.md)  
 Fornisce il codice per modificare i percorsi e gli URL sotto forma [CPathT](../atl/reference/cpatht-class.md) e [ricciolo](../atl/reference/curl-class.md).  Un pool di thread, [CThreadPool](../atl/reference/cthreadpool-class.md), può essere utilizzato nelle applicazioni.  Questo codice può essere trovato in atlpath.h e in atlutil.h.  
  
## Sezioni correlate  
 [Esempi relativi ad ATL](../top/visual-cpp-samples.md)  
 Fornisce descrizioni di e collegamenti ai programmi di esempio ATL.  
  
 [Creare un progetto ATL](../atl/reference/creating-an-atl-project.md)  
 Contiene informazioni sulla creazione guidata progetto ATL.  
  
 [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md)  
 Viene illustrato come aggiungere classi.  
  
 [programmazione con attributi](../windows/attributed-programming-concepts.md)  
 Vengono forniti cenni preliminari sull'utilizzo degli attributi per semplificare la programmazione COM in un elenco di collegamenti ad argomenti più dettagliati.  
  
 [I cenni preliminari sulle classi ATL](../atl/atl-class-overview.md)  
 Vengono fornite informazioni di riferimento e collegamenti alle classi ATL.