---
title: Concetti relativi alla Libreria ATL (Active Template Library)
ms.date: 05/06/2019
helpviewer_keywords:
- ATL, about ATL
ms.assetid: a3960991-4d76-4da5-9568-3fa7fde53ff4
ms.openlocfilehash: c87eedff5b6ce7d906c05ac0678425af575f0af8
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91504265"
---
# <a name="active-template-library-atl-concepts"></a>Concetti relativi alla Libreria ATL (Active Template Library)

La libreria ATL (Active Template Library) è costituita da una serie di classi C++ basate su modelli che consentono di creare oggetti COM (Component Object Model) rapidi e di piccole dimensioni. Include un supporto speciale per le principali funzionalità COM, tra cui implementazioni predefinite, interfacce duali, interfacce dell'enumeratore standard, punti di connessione, interfacce a scomparsa e controllo ActiveX.

Se si programma molto con ATL, è utile conoscere meglio gli attributi COM e .NET che semplificano la programmazione COM. Per altre informazioni, vedere [Programmazione con attributi](../windows/attributes/cpp-attributes-com-net.md). Gli attributi COM e .NET non devono essere confusi con la funzione \[\[attribute]] nel codice standard C++.

## <a name="in-this-section"></a>Contenuto della sezione

[Introduzione a COM e ATL](introduction-to-com-and-atl.md)<br/>
Descrive i concetti principali alla base di COM (Component Object Model). Questo articolo illustra brevemente la libreria ATL e il suo utilizzo.

[Nozioni fondamentali sugli oggetti COM ATL](fundamentals-of-atl-com-objects.md)<br/>
Illustra la relazione tra diverse classi ATL e la relativa implementazione.

[Interfacce duali e ATL](dual-interfaces-and-atl.md)<br/>
Descrive le interfacce duali dal punto di vista ATL.

[Raccolte ed enumeratori ATL](atl-collections-and-enumerators.md)<br/>
Descrive l'implementazione e la creazione di raccolte ed enumeratori in ATL.

[Nozioni fondamentali sul controllo composito](atl-composite-control-fundamentals.md)<br/>
Offre istruzioni dettagliate per la creazione di un controllo composito. Un controllo composito è un tipo di controllo ActiveX che può contenere altri controlli ActiveX o Windows.

[Domande frequenti sul contenimento di controlli ATL](atl-control-containment-faq.md)<br/>
Descrive le domande principali sull'hosting di controlli con ATL.

[Pagine delle proprietà COM ATL](atl-com-property-pages.md)<br/>
Illustra come specificare e implementare le pagine delle proprietà COM.

[Supporto ATL per controlli DHTML](atl-support-for-dhtml-controls.md)<br/>
Offre istruzioni dettagliate per la creazione di un controllo DHTML.

[Punti di connessione ATL](atl-connection-points.md)<br/>
Spiega cosa sono i punti di connessione e come vengono implementi da ATL.

[Gestione degli eventi e ATL](event-handling-and-atl.md)<br/>
Descrive i passaggi da eseguire per gestire gli eventi COM tramite le classi ATL [IDispEventImpl](reference/idispeventimpl-class.md) e [IDispEventSimpleImpl](reference/idispeventsimpleimpl-class.md).

[ATL e il gestore di marshalling a thread libero](atl-and-the-free-threaded-marshaler.md)<br/>
Offre informazioni dettagliate sull'opzione Creazione guidata oggetto semplice ATL che consente alle classi di aggregare il marshaler privo di thread.

[Specifica di un modello di threading per un progetto](specifying-the-threading-model-for-a-project-atl.md)<br/>
Descrive le macro disponibili per controllare le prestazioni in fase di esecuzione relative al threading nel progetto.

[Classi del modulo ATL](atl-module-classes.md)<br/>
Illustra le nuovi classi di modulo in ATL 7.0. Le classi di modulo implementano le funzionalità di base richieste da ATL.

[Servizi ATL](atl-services.md)<br/>
Illustra le serie di eventi che si verificano quando viene implementato un servizio. Illustra anche alcuni dei concetti relativi allo sviluppo di un servizio.

[Classi di finestra ATL](atl-window-classes.md)<br/>
Descrive come creare finestre, creare superclassi e sottoclassi in ATL. Le classi di finestra ATL non sono classi COM.

[Classi Collection ATL](atl-collection-classes.md)<br/>
Descrive come usare array e mapping in ATL.

[Componente del Registro di sistema ATL (registrar)](atl-registry-component-registrar.md)<br/>
Illustra la sintassi e i parametri sostituibili per gli script ATL. Spiega anche come configurare un collegamento statico al registrar.

[Programmazione con il codice di runtime di C e ATL](programming-with-atl-and-c-run-time-code.md)<br/>
Illustra i vantaggi del collegamento statico o dinamico alla libreria di runtime del linguaggio C (CRT).

[Programmazione con CComBSTR](programming-with-ccombstr-atl.md)<br/>
Illustra diverse situazioni che richiedono attenzione durante la programmazione con `CComBSTR`.

[Riferimenti alla codifica](atl-encoding-reference.md)<br/>
Descrive funzioni e macro che supportano la codifica in una serie di norme Internet comuni, ad esempio uuencode, hexadecimal e UTF8 in atlenc.h.

[Riferimenti sulle utilità](atl-utilities-reference.md)<br/>
Descrive il codice per modificare percorsi e URL nel formato [CPathT](reference/cpatht-class.md) e [CUrl](reference/curl-class.md). Nelle applicazioni è possibile usare un pool di thread [CThreadPool](reference/cthreadpool-class.md). Questo codice è disponibile in atlutil. h e atlpath. h.

## <a name="related-sections"></a>Sezioni correlate

[Esercitazione ATL](active-template-library-atl-tutorial.md)<br/>
Illustra la creazione di un controllo e descrive alcuni elementi fondamentali ATL nel processo.

[Esempi di ATL](../overview/visual-cpp-samples.md)<br/>
Contiene descrizioni e collegamenti ai programmi di esempio ATL.

[Creazione di un progetto ATL](reference/creating-an-atl-project.md)<br/>
Contiene informazioni sulla Creazione guidata progetto ATL.

[Creazione guidata controllo ATL](reference/atl-control-wizard.md)<br/>
Descrive come aggiungere le classi.

[Programmazione con attributi](../windows/attributes/cpp-attributes-com-net.md)<br/>
Offre una panoramica dell'uso di attributi per semplificare la programmazione COM, nonché un elenco di collegamenti ad argomenti più dettagliati.

[Panoramica della classe ATL](atl-class-overview.md)<br/>
Offre informazioni di riferimento e collegamenti alle classi ATL.
