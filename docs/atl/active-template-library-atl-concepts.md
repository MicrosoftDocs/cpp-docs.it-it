---
title: Active Template Library (ATL) concetti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ATL, about ATL
ms.assetid: a3960991-4d76-4da5-9568-3fa7fde53ff4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 554fddbb778a19555fc7342f08eaac2e5642d815
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46019445"
---
# <a name="active-template-library-atl-concepts"></a>Concetti relativi alla Libreria ATL (Active Template Library)

La libreria ATL (Active Template) è un set di classi C++ basate su modelli che consentono di creare gli oggetti modello COM (Component Object) di veloci e di piccole dimensioni. Include un supporto speciale per le principali funzionalità COM, tra cui le implementazioni predefinite, le interfacce duali, interfacce di enumeratore COM standard, i punti di connessione, interfacce tear-off e controlli ActiveX.

Se fai un sacco di programmazione di ATL, è consigliabile per altre informazioni sugli attributi, una nuova funzionalità di Visual C++ .NET che è progettato per semplificare la programmazione COM. Per altre informazioni, vedere [programmazione con attributi](../windows/attributed-programming-concepts.md).

## <a name="in-this-section"></a>In questa sezione

[Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)<br/>
Illustra la creazione di un controllo e illustra alcuni concetti di base ATL nel processo.

[Introduzione a COM e a ATL](../atl/introduction-to-com-and-atl.md)<br/>
Introduce i concetti principali alla base il modello COM (Component Object). Questo articolo illustra inoltre fornita una breve ATL è e quando è consigliabile usarlo.

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)<br/>
Illustra la relazione tra diverse classi ATL e come vengono implementate tali classi.

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)<br/>
Descrive le interfacce duali dal punto di vista ATL.

[Raccolte ed enumeratori ATL](../atl/atl-collections-and-enumerators.md)<br/>
Viene descritta l'implementazione e la creazione di raccolte ed enumeratori in ATL.

[Nozioni fondamentali sul controllo composito](../atl/atl-composite-control-fundamentals.md)<br/>
Vengono fornite istruzioni dettagliate per la creazione di un controllo composito. Un controllo composito è un tipo di controllo di ActiveX che può contenere altri controlli ActiveX o Windows.

[Domande frequenti sul contenimento di controlli ATL](../atl/atl-control-containment-faq.md)<br/>
Descrive le domande fondamentali relative all'hosting di controlli con ATL.

[Pagine delle proprietà COM ATL](../atl/atl-com-property-pages.md)<br/>
Illustra come specificare e implementare le pagine delle proprietà COM.

[Supporto ATL per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)<br/>
Vengono fornite istruzioni dettagliate per la creazione di un controllo DHTML.

[Punti di connessione ATL](../atl/atl-connection-points.md)<br/>
Viene spiegato che cosa sono i punti di connessione e la modalità di implementazione in ATL.

[Gestione di eventi e ATL](../atl/event-handling-and-atl.md)<br/>
Vengono descritti i passaggi da eseguire per gestire gli eventi COM tramite ATL [IDispEventImpl](../atl/reference/idispeventimpl-class.md) e [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) classi.

[ATL e il gestore del marshalling con modello di threading Free](../atl/atl-and-the-free-threaded-marshaler.md)<br/>
Fornisce informazioni dettagliate sull'opzione ATL semplice oggetto della procedura guidata che consente la classe aggregare il marshalling a thread gratuito (FTM).

[Specifica di un modello di Threading del progetto](../atl/specifying-the-threading-model-for-a-project-atl.md)<br/>
Descrive le macro che è possibile controllare le prestazioni di runtime relativi al threading nel progetto.

[Classi di modulo ATL](../atl/atl-module-classes.md)<br/>
Vengono illustrate le classi di modulo nuovo per ATL 7.0. Modulo classi implementano la funzionalità di base necessaria per ATL.

[Servizi ATL](../atl/atl-services.md)<br/>
Illustra le serie di eventi che si verificano quando viene implementato un servizio. Vengono inoltre illustrati alcuni dei concetti relativi allo sviluppo di un servizio.

[Classi di finestra ATL](../atl/atl-window-classes.md)<br/>
Descrive come creare, superclasse e finestre di sottoclasse in ATL. Le classi di finestra ATL non sono classi COM.

[Classi di raccolta ATL](../atl/atl-collection-classes.md)<br/>
Viene descritto come usare matrici e mappe in ATL.

[Il componente del Registro di sistema ATL (Registrar)](../atl/atl-registry-component-registrar.md)<br/>
Illustra la sintassi e parametri sostituibili script ATL. Viene inoltre spiegato come configurare un collegamento statico per il Registrar.

[Programmazione con il codice runtime C e ATL](../atl/programming-with-atl-and-c-run-time-code.md)<br/>
Illustra i vantaggi del collegamento statico o dinamico per la libreria di Run-Time C (CRT).

[Programmazione con CComBSTR](../atl/programming-with-ccombstr-atl.md)<br/>
Illustra diverse situazioni che richiedono attenzione durante la programmazione con `CComBSTR`.

[Riferimenti alla codifica](../atl/atl-encoding-reference.md)<br/>
Fornisce funzioni e macro che supportano la codifica in una gamma di standard di Internet più comuni, ad esempio uuencode, esadecimali e UTF8 in atlenc. h.

[Riferimenti sulle utilità](../atl/atl-utilities-reference.md)<br/>
Fornisce il codice per la modifica dei percorsi e gli URL nel formato [CPathT](../atl/reference/cpatht-class.md) e [CUrl](../atl/reference/curl-class.md). Un pool di thread [CThreadPool](../atl/reference/cthreadpool-class.md), può essere usato nelle proprie applicazioni. Questo codice è reperibile in atlutil. h e atlpath. h.

## <a name="related-sections"></a>Sezioni correlate

[Esempi relativi ad ATL](../visual-cpp-samples.md)<br/>
Fornisce collegamenti a programmi di esempio ATL e le descrizioni di.

[Creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md)<br/>
Contiene informazioni sulla creazione guidata progetto ATL.

[Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md)<br/>
Viene descritto come aggiungere le classi.

[Programmazione con attributi](../windows/attributed-programming-concepts.md)<br/>
Viene fornita una panoramica sull'uso di attributi per semplificare la programmazione COM, con un elenco di collegamenti ad argomenti più dettagliati.

[Panoramica sulle classi ATL](../atl/atl-class-overview.md)<br/>
Fornisce informazioni di riferimento e i collegamenti alle classi ATL.

