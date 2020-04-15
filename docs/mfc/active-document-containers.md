---
title: Contenitore documenti attivi
ms.date: 11/19/2018
helpviewer_keywords:
- active documents [MFC], containers
- active document containers [MFC]
- containers [MFC], active document
- MFC COM, active document containment
ms.assetid: ba20183a-8b4c-440f-9031-e5fcc41d391b
ms.openlocfilehash: e2005ffed592fa1de278e0f6339d94687a20fd06
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377389"
---
# <a name="active-document-containers"></a>Contenitore documenti attivi

Un contenitore di documenti attivi, ad esempio Raccoglitore Microsoft Office o Internet Explorer, consente di utilizzare diversi documenti di diversi tipi di applicazione all'interno di un singolo frame (anziché forzare la creazione e l'utilizzo di più frame dell'applicazione per ogni tipo di documento).

MFC fornisce il supporto completo `COleDocObjectItem` per i contenitori di documenti attivi nella classe. È possibile utilizzare la Creazione guidata applicazione MFC per creare un contenitore di documenti attivi selezionando la casella di controllo **Contenitore documenti attivi** nella pagina **Supporto documenti compositi** della Creazione guidata applicazione MFC. Per ulteriori informazioni, vedere [Creazione di un'applicazione contenitore di documenti attivi](../mfc/creating-an-active-document-container-application.md).

Per altre informazioni sui contenitori di documenti attivi, vedere:For more information about active document containers, see:

- [Requisiti del contenitore](#container_requirements)

- [Oggetti sito documento](#document_site_objects)

- [Visualizzazione degli oggetti del sito](#view_site_objects)

- [Oggetto frame](#frame_object)

- [Unione di menu della Guida](../mfc/help-menu-merging.md)

- [Stampa a livello di codice](../mfc/programmatic-printing.md)

- [Destinazioni comandi](../mfc/message-handling-and-command-targets.md)

## <a name="container-requirements"></a><a name="container_requirements"></a>Requisiti del contenitore

Il supporto di documenti attivi in un contenitore di documenti attivi non implica solo implementazioni di interfaccia: richiede anche la conoscenza dell'utilizzo delle interfacce di un oggetto contenuto. Lo stesso vale per le estensioni di documento attivo, in cui il contenitore deve anche sapere come utilizzare tali interfacce di estensione sui documenti attivi stessi.

Un contenitore di documenti attivi che integra i documenti attivi deve:An active document container that integrates active documents must:

- Essere in grado di `IPersistStorage` gestire l'archiviazione degli oggetti `IStorage` attraverso l'interfaccia, vale a dire, deve fornire un'istanza a ogni documento attivo.

- Supportare le funzionalità di incorporamento di base dei documenti OLE, richiedendo oggetti "sito" (uno per documento o incorporamento) che implementano `IOleClientSite` e `IAdviseSink`.

- Supporta l'attivazione sul posto di oggetti incorporati o documenti attivi. Gli oggetti sito del `IOleInPlaceSite` contenitore devono implementare e `IOleInPlaceFrame`l'oggetto frame del contenitore deve fornire .

- Supportare le estensioni `IOleDocumentSite` dei documenti attivi implementando per fornire il meccanismo per il contenitore di comunicare con il documento. Facoltativamente, il contenitore può implementare le `IOleCommandTarget` interfacce dei documenti attivi e `IContinueCallback` per raccogliere comandi semplici come la stampa o il salvataggio.

L'oggetto frame, gli oggetti visualizzazione e l'oggetto contenitore possono facoltativamente implementare `IOleCommandTarget` per supportare l'invio di determinati comandi, come descritto in [Destinazioni dei comandi](../mfc/message-handling-and-command-targets.md). Gli oggetti View e Container `IPrint` `IContinueCallback`possono anche implementare facoltativamente e , per supportare la stampa a livello di codice, come descritto in [Stampa a livello di codice.](../mfc/programmatic-printing.md)

Nella figura seguente vengono illustrate le relazioni concettuali tra un contenitore e i relativi componenti (a sinistra) e il documento attivo e le relative visualizzazioni (a destra). Il documento attivo gestisce l'archiviazione e i dati e la visualizzazione visualizza o, facoltativamente, stampa i dati. Le interfacce in grassetto sono quelle necessarie per la partecipazione ai documenti attivi; quelli grassetto e corsivo sono opzionali. Tutte le altre interfacce sono obbligatorie.

![Interfacce del contenitore documenti attivo](../mfc/media/vc37gj1.gif "Interfacce del contenitore documenti attivo")

Un documento che supporta solo una singola visualizzazione può implementare sia la visualizzazione e i componenti del documento (vale a dire le interfacce corrispondenti) in una singola classe concreta. Inoltre, un sito contenitore che supporta solo una visualizzazione alla volta può combinare il sito del documento e il sito di visualizzazione in un'unica classe di sito concreta. L'oggetto frame del contenitore, tuttavia, deve rimanere distinto e il componente documento del contenitore è semplicemente incluso qui per fornire un quadro completo dell'architettura; non è influenzato dall'architettura di contenimento del documento attivo.

## <a name="document-site-objects"></a><a name="document_site_objects"></a>Oggetti sito documento

Nell'architettura di contenimento dei documenti attivi, un sito documento è lo stesso `IOleDocument` di un oggetto sito client nei documenti OLE con l'aggiunta dell'interfaccia:

```cpp
interface IOleDocumentSite : IUnknown
{
    HRESULT ActivateMe(IOleDocumentView *pViewToActivate);
}
```

Il sito del documento è concettualmente il contenitore per uno o più oggetti "visualizza sito". Ogni oggetto sito di visualizzazione è associato a singoli oggetti visualizzazione del documento gestito dal sito del documento. Se il contenitore supporta solo una singola visualizzazione per ogni sito di documento, può implementare il sito del documento e il sito di visualizzazione con una singola classe concreta.

## <a name="view-site-objects"></a><a name="view_site_objects"></a>Visualizzazione degli oggetti del sito

L'oggetto sito di visualizzazione di un contenitore gestisce lo spazio di visualizzazione per una determinata visualizzazione di un documento. Oltre a supportare `IOleInPlaceSite` l'interfaccia standard, `IContinueCallback` un sito di visualizzazione implementa in genere anche per il controllo di stampa a livello di codice. Si noti che l'oggetto visualizzazione non esegue mai query per `IContinueCallback` in modo che possa essere effettivamente implementato su qualsiasi oggetto desiderato dal contenitore.

Un contenitore che supporta più visualizzazioni deve essere in grado di creare più oggetti sito di visualizzazione all'interno del sito del documento. In questo modo ogni visualizzazione con servizi `IOleInPlaceSite`di attivazione e disattivazione separati forniti tramite .

## <a name="frame-object"></a><a name="frame_object"></a>Oggetto Frame

L'oggetto frame del contenitore è, per la maggior parte, lo stesso frame utilizzato per l'attivazione sul posto nei documenti OLE, ovvero quello che gestisce la negoziazione di menu e barre degli strumenti. Un oggetto visualizzazione ha accesso `IOleInPlaceSite::GetWindowContext`a questo oggetto frame tramite , che fornisce anche l'accesso all'oggetto contenitore che rappresenta il documento contenitore (che può gestire la negoziazione della barra degli strumenti a livello di riquadro e l'enumerazione degli oggetti contenuti).

Un contenitore di documenti attivi `IOleCommandTarget`può aumentare la cornice aggiungendo . Ciò consente di ricevere comandi che hanno origine nell'interfaccia utente del documento attivo nello stesso modo in cui questa interfaccia può consentire a un contenitore di inviare gli stessi comandi (ad esempio **File Nuovo**, **Apri**, **Salva con**nome , **Stampa**; **Modifica copia**, **Incolla**, **Annulla**e altri) in un documento attivo. Per ulteriori informazioni, vedere [Destinazioni dei](../mfc/message-handling-and-command-targets.md)comandi .

## <a name="see-also"></a>Vedere anche

[Contenimento dei documenti attivi](../mfc/active-document-containment.md)
