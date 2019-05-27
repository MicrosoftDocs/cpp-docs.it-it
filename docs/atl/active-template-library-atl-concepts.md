---
title: Concetti relativi alla Libreria ATL (Active Template Library)
ms.date: 05/06/2019
helpviewer_keywords:
- ATL, about ATL
ms.assetid: a3960991-4d76-4da5-9568-3fa7fde53ff4
ms.openlocfilehash: a7b6a40eaed05462f3aa5c877a1c4da3e19c0b03
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65836991"
---
# <a name="active-template-library-atl-concepts"></a>Concetti relativi alla Libreria ATL (Active Template Library)

La libreria ATL (Active Template Library) è costituita da una serie di classi C++ basate su modelli che consentono di creare oggetti COM (Component Object Model) rapidi e di piccole dimensioni. Include un supporto speciale per le principali funzionalità COM, tra cui implementazioni predefinite, interfacce duali, interfacce dell'enumeratore standard, punti di connessione, interfacce a scomparsa e controllo ActiveX.

Se si programma molto con ATL, è utile conoscere meglio gli attributi COM e .NET che semplificano la programmazione COM. Per altre informazioni, vedere [Programmazione con attributi](../windows/attributed-programming-concepts.md). Gli attributi COM e .NET non devono essere confusi con la funzione \[\[attribute]] nel codice standard C++.

## <a name="in-this-section"></a>In questa sezione

[Introduzione a COM e a ATL](../atl/introduction-to-com-and-atl.md)<br/>
Descrive i concetti principali alla base di COM (Component Object Model). Questo articolo illustra brevemente la libreria ATL e il suo utilizzo.

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)<br/>
Illustra la relazione tra diverse classi ATL e la relativa implementazione.

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)<br/>
Descrive le interfacce duali dal punto di vista ATL.

[Raccolte ed enumeratori ATL](../atl/atl-collections-and-enumerators.md)<br/>
Descrive l'implementazione e la creazione di raccolte ed enumeratori in ATL.

[Nozioni fondamentali sul controllo composito](../atl/atl-composite-control-fundamentals.md)<br/>
Offre istruzioni dettagliate per la creazione di un controllo composito. Un controllo composito è un tipo di controllo ActiveX che può contenere altri controlli ActiveX o Windows.

[Domande frequenti sul contenimento di controlli ATL](../atl/atl-control-containment-faq.md)<br/>
Descrive le domande principali sull'hosting di controlli con ATL.

[Pagine delle proprietà COM ATL](../atl/atl-com-property-pages.md)<br/>
Illustra come specificare e implementare le pagine delle proprietà COM.

[Supporto ATL per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)<br/>
Offre istruzioni dettagliate per la creazione di un controllo DHTML.

[Punti di connessione ATL](../atl/atl-connection-points.md)<br/>
Spiega cosa sono i punti di connessione e come vengono implementi da ATL.

[Gestione di eventi e ATL](../atl/event-handling-and-atl.md)<br/>
Descrive i passaggi da eseguire per gestire gli eventi COM tramite le classi ATL [IDispEventImpl](../atl/reference/idispeventimpl-class.md) e [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md).

[ATL e il gestore del marshalling con modello di threading Free](../atl/atl-and-the-free-threaded-marshaler.md)<br/>
Offre informazioni dettagliate sull'opzione Creazione guidata oggetto semplice ATL che consente alle classi di aggregare il marshaler privo di thread.

[Specifica di un modello di threading per un progetto](../atl/specifying-the-threading-model-for-a-project-atl.md)<br/>
Descrive le macro disponibili per controllare le prestazioni in fase di esecuzione relative al threading nel progetto.

[Classi di modulo ATL](../atl/atl-module-classes.md)<br/>
Illustra le nuovi classi di modulo in ATL 7.0. Le classi di modulo implementano le funzionalità di base richieste da ATL.

[Servizi ATL](../atl/atl-services.md)<br/>
Illustra le serie di eventi che si verificano quando viene implementato un servizio. Illustra anche alcuni dei concetti relativi allo sviluppo di un servizio.

[Classi di finestra ATL](../atl/atl-window-classes.md)<br/>
Descrive come creare finestre, creare superclassi e sottoclassi in ATL. Le classi di finestra ATL non sono classi COM.

[Classi di raccolta ATL](../atl/atl-collection-classes.md)<br/>
Descrive come usare array e mapping in ATL.

[Componente del Registro di sistema ATL (registrar)](../atl/atl-registry-component-registrar.md)<br/>
Illustra la sintassi e i parametri sostituibili per gli script ATL. Spiega anche come configurare un collegamento statico al registrar.

[Programmazione con il codice runtime C e ATL](../atl/programming-with-atl-and-c-run-time-code.md)<br/>
Illustra i vantaggi del collegamento statico o dinamico alla libreria di runtime del linguaggio C (CRT).

[Programmazione con CComBSTR](../atl/programming-with-ccombstr-atl.md)<br/>
Illustra diverse situazioni che richiedono attenzione durante la programmazione con `CComBSTR`.

[Riferimenti alla codifica](../atl/atl-encoding-reference.md)<br/>
Descrive funzioni e macro che supportano la codifica in una serie di norme Internet comuni, ad esempio uuencode, hexadecimal e UTF8 in atlenc.h.

[Riferimenti sulle utilità](../atl/atl-utilities-reference.md)<br/>
Descrive il codice per modificare percorsi e URL nel formato [CPathT](../atl/reference/cpatht-class.md) e [CUrl](../atl/reference/curl-class.md). Nelle applicazioni è possibile usare un pool di thread [CThreadPool](../atl/reference/cthreadpool-class.md). Questo codice è disponibile in atlutil. h e atlpath. h.

## <a name="related-sections"></a>Sezioni correlate

[Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)<br/>
Illustra la creazione di un controllo e descrive alcuni elementi fondamentali ATL nel processo.

[Esempi di ATL](../overview/visual-cpp-samples.md)<br/>
Contiene descrizioni e collegamenti ai programmi di esempio ATL.

[Creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md)<br/>
Contiene informazioni sulla Creazione guidata progetto ATL.

[Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md)<br/>
Descrive come aggiungere le classi.

[Programmazione con attributi](../windows/attributed-programming-concepts.md)<br/>
Offre una panoramica dell'uso di attributi per semplificare la programmazione COM, nonché un elenco di collegamenti ad argomenti più dettagliati.

[Panoramica sulle classi ATL](../atl/atl-class-overview.md)<br/>
Offre informazioni di riferimento e collegamenti alle classi ATL.
