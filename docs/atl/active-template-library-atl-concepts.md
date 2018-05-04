---
title: Concetti di Active Template Library (ATL) | Documenti Microsoft
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
ms.openlocfilehash: 5636f92df42116b838c24c21d81f0b320f7d69c1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="active-template-library-atl-concepts"></a>Concetti relativi alla Libreria ATL (Active Template Library)
La libreria ATL (Active Template) è un set di classi C++ basate su modelli che consentono di creare gli oggetti modello COM (Component Object) di piccola e veloce. Include un supporto speciale per le principali funzionalità COM, incluse le implementazioni predefinite, le interfacce duali, interfacce di enumeratore COM standard, punti di connessione, interfacce tear-off e controlli ActiveX.  
  
 Se si esegue numerose attività di programmazione ATL, si desidererà per ulteriori informazioni sugli attributi, una nuova funzionalità di Visual C++ .NET è progettato per semplificare la programmazione COM. Per ulteriori informazioni, vedere [programmazione con attributi](../windows/attributed-programming-concepts.md).  
  
## <a name="in-this-section"></a>In questa sezione  
 [Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)  
 Illustra la creazione di un controllo e alcune nozioni ATL nel processo.  
  
 [Introduzione a COM e a ATL](../atl/introduction-to-com-and-atl.md)  
 Introduce i concetti principali dietro il modello COM (Component Object). In questo articolo viene inoltre fornita una breve ATL è e quando è consigliabile utilizzarlo.  
  
 [Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)  
 Viene illustrata la relazione tra le varie classi ATL e la modalità di implementazione di tali classi.  
  
 [Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)  
 Descrive le interfacce duali dal punto di vista ATL.  
  
 [Raccolte ed enumeratori ATL](../atl/atl-collections-and-enumerators.md)  
 Viene descritta l'implementazione e la creazione di raccolte ed enumeratori in ATL.  
  
 [Nozioni fondamentali sul controllo composito](../atl/atl-composite-control-fundamentals.md)  
 Vengono fornite istruzioni dettagliate per la creazione di un controllo composito. Un controllo composito è un tipo di controllo ActiveX che può contenere altri controlli ActiveX o Windows.  
  
 [Domande frequenti sul contenimento di controlli ATL](../atl/atl-control-containment-faq.md)  
 Vengono illustrate le domande fondamentali relativi all'hosting dei controlli con ATL.  
  
 [Pagine delle proprietà COM ATL](../atl/atl-com-property-pages.md)  
 Viene illustrato come specificare e implementare le pagine delle proprietà COM.  
  
 [Supporto ATL per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)  
 Vengono fornite istruzioni dettagliate per la creazione di un controllo DHTML.  
  
 [Punti di connessione ATL](../atl/atl-connection-points.md)  
 Viene illustrato che cosa sono i punti di connessione e la modalità di implementazione in ATL.  
  
 [Gestione di eventi e ATL](../atl/event-handling-and-atl.md)  
 Vengono descritti i passaggi necessari per la gestione di eventi COM mediante ATL [IDispEventImpl](../atl/reference/idispeventimpl-class.md) e [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) classi.  
  
 [ATL e il gestore del marshalling con modello di threading Free](../atl/atl-and-the-free-threaded-marshaler.md)  
 Fornisce informazioni dettagliate sull'opzione ATL semplice oggetto della procedura guidata che consente la classe di aggregazione gestore (FTM).  
  
 [Specifica modello di Threading del progetto](../atl/specifying-the-threading-model-for-a-project-atl.md)  
 Descrive le macro che è possibile controllare le prestazioni in fase di esecuzione correlate al threading nel progetto.  
  
 [Classi di modulo ATL](../atl/atl-module-classes.md)  
 Vengono illustrate le classi nuove in ATL 7.0. Che implementano la funzionalità di base richiesta da ATL.  
  
 [Servizi ATL](../atl/atl-services.md)  
 Viene illustrata la serie di eventi che si verificano quando viene implementato un servizio. Vengono inoltre illustrati alcuni dei concetti correlati allo sviluppo di un servizio.  
  
 [Classi di finestra ATL](../atl/atl-window-classes.md)  
 Descrive come creare, superclasse e sottoclasse di windows in ATL. Le classi di finestra ATL non sono classi COM.  
  
 [Classi di raccolta ATL](../atl/atl-collection-classes.md)  
 Viene descritto l'utilizzo delle matrici e mappe in ATL.  
  
 [Il componente del Registro di sistema ATL (Registrar)](../atl/atl-registry-component-registrar.md)  
 Vengono illustrati script sintassi e parametri sostituibili ATL. Viene inoltre illustrato come configurare un collegamento statico per il programma di registrazione.  
  
 [Programmazione con il codice runtime C e ATL](../atl/programming-with-atl-and-c-run-time-code.md)  
 Vengono illustrati i vantaggi del collegamento statico o dinamico per la libreria di Run-Time C (CRT).  
  
 [Programmazione con CComBSTR](../atl/programming-with-ccombstr-atl.md)  
 Vengono illustrate le diverse situazioni che richiedono attenzione durante la programmazione con `CComBSTR`.  
  
 [Riferimenti alla codifica](../atl/atl-encoding-reference.md)  
 Fornisce funzioni e macro che supporta la codifica in un intervallo di comuni standard di Internet, ad esempio uuencode, esadecimale e UTF8 in atlenc. h.  
  
 [Riferimenti sulle utilità](../atl/atl-utilities-reference.md)  
 Fornisce il codice per la modifica dei percorsi e gli URL nel formato [CPathT](../atl/reference/cpatht-class.md) e [CUrl](../atl/reference/curl-class.md). Un pool di thread, [CThreadPool](../atl/reference/cthreadpool-class.md), può essere utilizzato nelle proprie applicazioni. Questo codice è reperibile in atlpath. h e atlutil. h.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Esempi di ATL](../visual-cpp-samples.md)  
 Fornisce collegamenti ai programmi di esempio ATL e le descrizioni di.  
  
 [Creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md)  
 Contiene informazioni sulla creazione guidata progetto ATL.  
  
 [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md)  
 Viene descritto come aggiungere le classi.  
  
 [Programmazione con attributi](../windows/attributed-programming-concepts.md)  
 Fornisce una panoramica sull'utilizzo degli attributi per semplificare la programmazione COM, con un elenco di collegamenti ad argomenti più dettagliati.  
  
 [Panoramica sulle classi ATL](../atl/atl-class-overview.md)  
 Fornisce informazioni di riferimento e collegamenti per le classi ATL.

