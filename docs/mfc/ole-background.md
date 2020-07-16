---
title: Sfondo OLE
ms.date: 11/04/2016
helpviewer_keywords:
- OLE, about OLE
ms.assetid: 5f654eb5-66b1-40c9-9215-bb85356a67f8
ms.openlocfilehash: f18614f7b156a1757df9dfaac9e4a0ad4f8209eb
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86404294"
---
# <a name="ole-background"></a>Sfondo OLE

OLE è un meccanismo che consente agli utenti di creare e modificare documenti contenenti elementi o "oggetti" creati da più applicazioni.

> [!NOTE]
> OLE originariamente era un acronimo per il collegamento e l'incorporamento di oggetti. Tuttavia, viene ora definito OLE. Parti di OLE non correlate al collegamento e all'incorporamento fanno ora parte della tecnologia attiva.

Documenti OLE, denominati in modo cronologico, integrano facilmente vari tipi di dati o componenti. Le clip audio, i fogli di calcolo e le bitmap sono esempi tipici di componenti trovati nei documenti OLE. Il supporto di OLE nell'applicazione consente agli utenti di utilizzare i documenti OLE senza doversi preoccupare del cambio tra le diverse applicazioni. OLE esegue il cambio.

Usare un'applicazione contenitore per creare documenti composti e un'applicazione server o un'applicazione componente per creare gli elementi all'interno del documento contenitore. Qualsiasi applicazione scritta può essere un contenitore, un server o entrambi.

OLE incorpora molti concetti diversi che funzionano per l'obiettivo di un'interazione uniforme tra le applicazioni. Queste aree includono quanto segue:

- collegamento e incorporamento

   Il collegamento e l'incorporamento sono i due metodi per archiviare gli elementi creati all'interno di un documento OLE creato in un'altra applicazione. Per informazioni generali sulle differenze tra le due, vedere l'articolo [sfondo OLE: collegamento e incorporamento](ole-background-linking-and-embedding.md). Per informazioni più dettagliate, vedere gli articoli [contenitori](containers.md) e [Server](servers.md).

- Attivazione sul posto (modifica visiva)

   L'attivazione di un elemento incorporato nel contesto del documento contenitore viene chiamata attivazione sul posto o modifica visiva. L'interfaccia dell'applicazione contenitore cambia per incorporare le funzionalità dell'applicazione componente che ha creato l'elemento incorporato. Gli elementi collegati non vengono mai attivati perché i dati effettivi per l'elemento sono contenuti in un file separato, dal contesto dell'applicazione contenente il collegamento. Per ulteriori informazioni sull'attivazione sul posto, vedere l'articolo [attivazione](activation-cpp.md).

   > [!NOTE]
   > Il collegamento e l'incorporamento e l'attivazione sul posto forniscono le principali funzionalità della modifica visiva OLE.

- Automazione automazione consente a un'applicazione di guidare un'altra applicazione. L'applicazione di guida è nota come client di automazione e l'applicazione da guidare è nota come un server di automazione o un componente di automazione. Per ulteriori informazioni sull'automazione, vedere gli articoli [client di automazione](automation-clients.md) e [server di automazione](automation-servers.md).

   > [!NOTE]
   > L'automazione funziona sia in contesti di tecnologia OLE che attivi. È possibile automatizzare qualsiasi oggetto in base a COM.

- file compositi

   I file composti forniscono un formato di file standard che semplifica l'archiviazione strutturata dei documenti compositi per le applicazioni OLE. All'interno di un file composto, le archiviazioni includono molte funzionalità di directory e flussi che includono molte funzionalità di file. Questa tecnologia è detta anche archiviazione strutturata. Per ulteriori informazioni sui file composti, vedere l'articolo [contenitori: file composti](containers-compound-files.md).

- Uniform Data Transfer

   Uniform Data Transfer (UDT) è un set di interfacce che consentono l'invio e la ricezione dei dati in modo standard, indipendentemente dal metodo effettivo scelto per trasferire i dati. UDT costituisce la base per i trasferimenti di dati tramite trascinamento della selezione. Il tipo definito dall'utente viene ora usato come base per il trasferimento dei dati di Windows esistente, ad esempio gli appunti e il servizio DDE (Dynamic Data Exchange). Per ulteriori informazioni sul tipo definito dall'utente, vedere l'articolo [oggetti dati e origini dati (OLE)](data-objects-and-data-sources-ole.md).

- Trascinamento e rilascio

   Il trascinamento della selezione è una tecnica di facile utilizzo e manipolazione diretta per trasferire i dati tra le applicazioni, tra le finestre all'interno di un'applicazione o persino all'interno di un'unica finestra di un'applicazione. I dati da trasferire vengono selezionati e trascinati nella destinazione desiderata. Il trascinamento della selezione è basato sul trasferimento di dati uniformi. Per altre informazioni sul trascinamento della selezione, vedere l'articolo [trascinamento](drag-and-drop-ole.md)della selezione.

- Component Object Model

   Il Component Object Model (COM) fornisce l'infrastruttura utilizzata quando gli oggetti OLE comunicano tra loro. Le classi OLE MFC semplificano COM per il programmatore. COM fa parte della tecnologia attiva, perché gli oggetti COM sono sottostanti sia la tecnologia OLE che quella attiva. Per ulteriori informazioni su COM, vedere gli argomenti [Active Template Library (ATL)](../atl/active-template-library-atl-concepts.md) .

Negli articoli seguenti sono trattati alcuni degli argomenti OLE più importanti:

- [Sfondo OLE: collegamento e incorporamento](ole-background-linking-and-embedding.md)

- [Sfondo OLE: contenitori e server](ole-background-containers-and-servers.md)

- [Sfondo OLE: strategie di implementazione](ole-background-implementation-strategies.md)

- [Sfondo OLE: implementazione MFC](ole-background-mfc-implementation.md)

Per informazioni OLE generali non trovate negli articoli precedenti, [cercare OLE](https://docs.microsoft.com/search/?terms=ole) in Microsoft docs.

## <a name="see-also"></a>Vedere anche

[OLE](ole-in-mfc.md)
