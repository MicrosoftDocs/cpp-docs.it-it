---
title: Sfondo OLE
ms.date: 11/04/2016
helpviewer_keywords:
- OLE, about OLE
ms.assetid: 5f654eb5-66b1-40c9-9215-bb85356a67f8
ms.openlocfilehash: f7d65f48c1af678f6626ba7d315ceb735d3e960a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364513"
---
# <a name="ole-background"></a>Sfondo OLE

OLE è un meccanismo che consente agli utenti di creare e modificare documenti contenenti elementi o "oggetti" creati da più applicazioni.

> [!NOTE]
> OLE era originariamente l'acronimo di Object Linking and Embedding. Tuttavia, è ora indicato come OLE. Parti di OLE non correlate al collegamento e all'incorporamento fanno ora parte della tecnologia Active.

I documenti OLE, storicamente chiamati documenti composti, integrano senza soluzione di continuità vari tipi di dati o componenti. Clip audio, fogli di calcolo e bitmap sono esempi tipici di componenti presenti nei documenti OLE. Il supporto di OLE nell'applicazione consente agli utenti di utilizzare documenti OLE senza preoccuparsi di passare da un'applicazione all'altra; OLE fa la commutazione per voi.

Utilizzare un'applicazione contenitore per creare documenti composti e un'applicazione server o un'applicazione componente per creare gli elementi all'interno del documento contenitore. Qualsiasi applicazione scritta può essere un contenitore, un server o entrambi.

OLE incorpora molti concetti diversi che tutti lavorano verso l'obiettivo di interazione senza soluzione di continuità tra le applicazioni. Queste aree includono quanto segue:

- collegamento e incorporamento

   Il collegamento e l'incorporamento sono i due metodi per l'archiviazione di elementi creati all'interno di un documento OLE creati in un'altra applicazione. Per informazioni generali sulle differenze tra i due, vedere l'articolo [Sfondo OLE: collegamento e incorporamento](../mfc/ole-background-linking-and-embedding.md). Per informazioni più dettagliate, vedere gli articoli [Contenitori](../mfc/containers.md) e [server](../mfc/servers.md).

- Attivazione sul posto (modifica visiva)In-Place Activation (Visual Editing)

   L'attivazione di un elemento incorporato nel contesto del documento contenitore viene definita attivazione sul posto o modifica visiva. L'interfaccia dell'applicazione contenitore viene modificata per incorporare le funzionalità dell'applicazione componente che ha creato l'elemento incorporato. Gli elementi collegati non vengono mai attivati sul posto perché i dati effettivi per l'elemento sono contenuti in un file separato, all'esterno del contesto dell'applicazione contenente il collegamento. Per ulteriori informazioni sull'attivazione sul posto, vedere l'articolo [Attivazione](../mfc/activation-cpp.md).

   > [!NOTE]
   > Il collegamento e l'incorporamento e l'attivazione sul posto forniscono le funzionalità principali della modifica visiva OLE.

- Automazione automazione consente a un'applicazione di guidare un'altra applicazione. L'applicazione di guida è nota come client di automazione e l'applicazione guidata è nota come server di automazione o componente di automazione. Per ulteriori informazioni sull'automazione, vedere gli articoli Client di [automazione](../mfc/automation-clients.md) e [server di automazione](../mfc/automation-servers.md).

   > [!NOTE]
   > L'automazione funziona sia in contesti tecnologici OLE che Active. È possibile automatizzare qualsiasi oggetto basato su COM.

- file compositi

   I file composti forniscono un formato di file standard che semplifica l'archiviazione strutturata di documenti composti per le applicazioni OLE. All'interno di un file composto, gli archivi hanno molte caratteristiche di directory e flussi hanno molte caratteristiche dei file. Questa tecnologia è anche chiamata archiviazione strutturata. Per ulteriori informazioni sui file composti, consultate l'articolo [Contenitori: file composti](../mfc/containers-compound-files.md).

- Trasferimento uniforme dei dati

   Uniform Data Transfer (UDT) è un insieme di interfacce che consentono l'invio e la ricezione dei dati in modo standard, indipendentemente dal metodo effettivo scelto per trasferire i dati. Il tipo definito dall'utente costituisce la base per il trasferimento dei dati mediante trascinamento della selezione. Il tipo definito dall'utente funge ora da base per il trasferimento di dati di Windows esistente, ad esempio gli Appunti e lo scambio di dati dinamici (DDE, Dynamic Data Exchange). Per ulteriori informazioni sull'UDT, vedere l'articolo [Oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md).

- Trascinamento e rilascio

   Il trascinamento della selezione è una tecnica di manipolazione diretta facile da usare per trasferire dati tra le applicazioni, tra le finestre all'interno di un'applicazione o anche all'interno di una singola finestra in un'applicazione. I dati da trasferire vengono selezionati e trascinati nella destinazione desiderata. Il trascinamento della selezione si basa sul trasferimento uniforme dei dati. Per ulteriori informazioni sul trascinamento della selezione, vedere l'articolo [Trascinamento](../mfc/drag-and-drop-ole.md)della selezione .

- Component Object Model

   Il modello COM (Component Object Model) fornisce l'infrastruttura utilizzata quando gli oggetti OLE comunicano tra loro. Le classi OLE MFC semplificano COM per il programmatore. COM fa parte della tecnologia Active, perché gli oggetti COM sono alla base sia della tecnologia OLE che della tecnologia Active. Per ulteriori informazioni su COM, vedere gli argomenti [Active Template Library (ATL).](../atl/active-template-library-atl-concepts.md)

Alcuni degli argomenti OLE più importanti sono trattati negli articoli seguenti:

- [Sfondo OLE: collegamento e incorporamento](../mfc/ole-background-linking-and-embedding.md)

- [Sfondo OLE: contenitori e server](../mfc/ole-background-containers-and-servers.md)

- [Sfondo OLE: strategie di implementazione](../mfc/ole-background-implementation-strategies.md)

- [Sfondo OLE: implementazione MFC](../mfc/ole-background-mfc-implementation.md)

Per informazioni OLE generali non trovate negli articoli precedenti, cercare OLE in MSDN.

## <a name="see-also"></a>Vedere anche

[OLE](../mfc/ole-in-mfc.md)
