---
title: Sfondo OLE
ms.date: 11/04/2016
helpviewer_keywords:
- OLE, about OLE
ms.assetid: 5f654eb5-66b1-40c9-9215-bb85356a67f8
ms.openlocfilehash: 2501373c2ff5904343a6522e4fb18663f5de3843
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62186589"
---
# <a name="ole-background"></a>Sfondo OLE

OLE è un meccanismo che consente agli utenti di creare e modificare i documenti che contiene elementi o "oggetti" creato da più applicazioni.

> [!NOTE]
>  OLE era in origine l'acronimo di Object Linking and Embedding. Tuttavia è ora nota come OLE. Parti di OLE non correlati a collegamento e incorporamento fanno ora parte della tecnologia Active.

I documenti OLE, in passato chiamati documenti composti, integrano perfettamente i vari tipi di dati o i componenti. Clip audio, fogli di calcolo e bitmap sono esempi tipici dei componenti trovati nei documenti OLE. Supporto OLE nell'applicazione, gli utenti possono usare i documenti OLE senza doversi preoccupare di commutazione tra le diverse applicazioni. OLE esegue il passaggio per l'utente.

Usare un'applicazione contenitore per creare documenti compositi e un'applicazione server o componente applicazione per creare gli elementi all'interno del documento contenitore. Le applicazioni che scritte possono essere un contenitore, un server o entrambi.

OLE è dotato di molti concetti diversi che operano raggiungimento dell'obiettivo di un'agevole interazione tra applicazioni. Tali modifiche includono quanto segue:

- Collegamento e incorporamento

   Collegamento e incorporamento sono i due metodi per archiviare gli elementi creati all'interno di un documento OLE che sono stati creati in un'altra applicazione. Per informazioni generali sulle differenze tra i due oggetti, vedere l'articolo [sfondo OLE: Collegamento e incorporamento](../mfc/ole-background-linking-and-embedding.md). Per informazioni più dettagliate, vedere gli articoli [contenitori](../mfc/containers.md) e [server](../mfc/servers.md).

- Attivazione sul posto (modifica visiva)

   Attivazione di un elemento incorporato nel contesto del documento contenitore è denominato attivazione sul posto o modifica visiva. Interfaccia dell'applicazione contenitore viene modificato per incorporare le funzionalità dell'applicazione componente che ha creato l'elemento incorporato. Gli elementi collegati non sono mai attivati sul posto in quanto i dati effettivi per l'elemento sono contenuti in un file separato, dal contesto dell'applicazione contenente il collegamento. Per altre informazioni sull'attivazione sul posto, vedere l'articolo [attivazione](../mfc/activation-cpp.md).

   > [!NOTE]
   > Collegamento e incorporamento e l'attivazione sul posto fornisce le principali funzionalità di modifica visiva OLE.

- Automazione di automazione consente a un'applicazione a un'altra applicazione. Applicazione con il controllo è noto come un client di automazione e l'applicazione controllata è noto come un componente di automazione o un server di automazione. Per altre informazioni sull'automazione, vedere gli articoli [i client di automazione](../mfc/automation-clients.md) e [server di automazione](../mfc/automation-servers.md).

   > [!NOTE]
   > Automazione funziona in contesti di tecnologia sia OLE sia attivo. È possibile automatizzare qualsiasi oggetto basato su COM.

- File compositi

   File compositi specificando un formato di file standard che semplifica l'archiviazione strutturata di documenti composti per le applicazioni OLE. All'interno di un file composto, le archiviazioni presentano molte funzionalità di directory e i flussi hanno molte funzionalità dei file. Questa tecnologia è l'acronimo di archiviazione strutturata. Per altre informazioni sui file compositi, vedere l'articolo [contenitori: File compositi](../mfc/containers-compound-files.md).

- Trasferimento dei dati uniformi

   Uniform Data Transfer (UDT) è un set di interfacce che consentono i dati inviati e ricevuti in modalità standard, indipendentemente dal metodo scelto per trasferire i dati effettivo. Form di tipo definito dall'utente che trasferisce la base per i dati tramite trascinamento della selezione. Tipo definito dall'utente a questo punto viene utilizzato come base per il trasferimento di dati esistente di Windows, ad esempio negli Appunti e dynamic data exchange (DDE). Per altre informazioni sul tipo definito dall'utente, vedere l'articolo [oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md).

- Trascinamento e rilascio

   Trascinamento della selezione è una tecnica di manipolazione diretta, facile da usare per trasferire dati tra applicazioni, tra windows all'interno di un'applicazione, o persino all'interno di un'unica finestra in un'applicazione. I dati da trasferire sono selezionati e trascinati nella destinazione desiderata. Trascinamento della selezione si basa sul trasferimento dei dati uniformi. Per altre informazioni sul trascinamento della selezione, vedere l'articolo [trascinare e rilasciare](../mfc/drag-and-drop-ole.md).

- Component Object Model

   Il modello COM (Component Object) offre l'infrastruttura usata quando gli oggetti OLE comunicano tra loro. Le classi OLE MFC semplificano COM per il programmatore. COM è parte della tecnologia Active, perché gli oggetti COM sottostanti la tecnologia OLE sia attivo. Per altre informazioni su COM, vedere la [libreria ATL (Active Template)](../atl/active-template-library-atl-concepts.md) argomenti.

Alcuni degli argomenti OLE più importanti sono illustrati negli articoli seguenti:

- [Sfondo OLE: collegamento e incorporamento](../mfc/ole-background-linking-and-embedding.md)

- [Sfondo OLE: contenitori e server](../mfc/ole-background-containers-and-servers.md)

- [Sfondo OLE: strategie di implementazione](../mfc/ole-background-implementation-strategies.md)

- [Sfondo OLE: implementazione MFC](../mfc/ole-background-mfc-implementation.md)

Per informazioni generali su OLE non disponibili negli articoli precedenti, eseguire una ricerca OLE in MSDN.

## <a name="see-also"></a>Vedere anche

[OLE](../mfc/ole-in-mfc.md)
