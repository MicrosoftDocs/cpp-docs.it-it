---
title: Contenitore documenti attivi
ms.date: 11/19/2018
helpviewer_keywords:
- active documents [MFC], containers
- active document containers [MFC]
- containers [MFC], active document
- MFC COM, active document containment
ms.assetid: ba20183a-8b4c-440f-9031-e5fcc41d391b
ms.openlocfilehash: dc7017a205bedd716e5c87aa23ac96b257af2e16
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626030"
---
# <a name="active-document-containers"></a>Contenitore documenti attivi

Un contenitore di documenti attivi, ad esempio Microsoft Office Binder o Internet Explorer, consente di usare diversi documenti di diversi tipi di applicazioni all'interno di un singolo frame, invece di forzare la creazione e l'uso di più frame dell'applicazione per ogni tipo di documento.

MFC offre supporto completo per i contenitori di documenti attivi nella `COleDocObjectItem` classe. È possibile utilizzare la creazione guidata applicazione MFC per creare un contenitore di documenti attivo selezionando la casella di controllo **contenitore documenti attivi** nella pagina **supporto documenti compositi** della creazione guidata applicazione MFC. Per altre informazioni, vedere [creazione di un'applicazione contenitore di documenti attivi](creating-an-active-document-container-application.md).

Per ulteriori informazioni sui contenitori di documenti attivi, vedere:

- [Requisiti del contenitore](#container_requirements)

- [Oggetti del sito del documento](#document_site_objects)

- [Visualizza oggetti sito](#view_site_objects)

- [Oggetto frame](#frame_object)

- [Unione di menu della Guida](help-menu-merging.md)

- [Stampa a livello di codice](programmatic-printing.md)

- [Destinazioni comandi](message-handling-and-command-targets.md)

## <a name="container-requirements"></a><a name="container_requirements"></a>Requisiti del contenitore

Il supporto dei documenti attivi in un contenitore di documenti attivi implica più di una semplice implementazione dell'interfaccia: richiede anche la conoscenza dell'uso delle interfacce di un oggetto contenuto. Lo stesso vale per le estensioni dei documenti attive, in cui il contenitore deve anche essere in grado di utilizzare tali interfacce di estensione sui documenti attivi.

Un contenitore di documenti attivi che integra i documenti attivi deve:

- Essere in grado di gestire l'archiviazione di oggetti tramite l' `IPersistStorage` interfaccia, ovvero deve fornire un' `IStorage` istanza a ogni documento attivo.

- Supportano le funzionalità di incorporamento di base dei documenti OLE, che necessitano di oggetti "site" (uno per documento o incorporamento) che implementano `IOleClientSite` e `IAdviseSink` .

- Supportare l'attivazione sul posto di oggetti incorporati o documenti attivi. Gli oggetti del sito del contenitore devono implementare `IOleInPlaceSite` e l'oggetto frame del contenitore deve fornire `IOleInPlaceFrame` .

- Supportare le estensioni dei documenti attivi implementando `IOleDocumentSite` per fornire al contenitore il meccanismo per comunicare con il documento. Facoltativamente, il contenitore può implementare le interfacce dei documenti attive `IOleCommandTarget` e `IContinueCallback` selezionare semplici comandi, ad esempio la stampa o il salvataggio.

L'oggetto frame, gli oggetti View e l'oggetto contenitore possono facoltativamente implementare `IOleCommandTarget` per supportare l'invio di determinati comandi, come descritto in [destinazioni](message-handling-and-command-targets.md)dei comandi. Gli oggetti visualizzazione e contenitore possono inoltre implementare facoltativamente `IPrint` e `IContinueCallback` per supportare la stampa a livello di codice, come descritto in [stampa a livello di codice](programmatic-printing.md).

Nella figura seguente sono illustrate le relazioni concettuali tra un contenitore e i relativi componenti (a sinistra) e il documento attivo e le relative visualizzazioni (a destra). Il documento attivo gestisce i dati e l'archiviazione e visualizza o facoltativamente stampa i dati. Le interfacce in grassetto sono quelle necessarie per la partecipazione ai documenti attivi; questi grassetto e corsivo sono facoltativi. Tutte le altre interfacce sono obbligatorie.

![Interfacce del contenitore documenti attivo](../mfc/media/vc37gj1.gif "Interfacce del contenitore documenti attivo")

Un documento che supporta solo una singola visualizzazione può implementare sia la visualizzazione che i componenti del documento (ovvero le interfacce corrispondenti) in una singola classe concreta. Inoltre, un sito contenitore che supporta solo una visualizzazione alla volta può combinare il sito del documento e il sito di visualizzazione in una singola classe di siti concreti. Tuttavia, l'oggetto frame del contenitore deve rimanere distinto e il componente del documento del contenitore è semplicemente incluso qui per fornire un quadro completo dell'architettura; non è influenzato dall'architettura di contenimento dei documenti attivi.

## <a name="document-site-objects"></a><a name="document_site_objects"></a>Oggetti del sito del documento

Nell'architettura di contenimento dei documenti attivi, un sito del documento è identico a quello di un oggetto sito client nei documenti OLE con l'aggiunta dell' `IOleDocument` interfaccia:

```cpp
interface IOleDocumentSite : IUnknown
{
    HRESULT ActivateMe(IOleDocumentView *pViewToActivate);
}
```

Il sito del documento è concettualmente il contenitore per uno o più oggetti "Visualizza sito". Ogni oggetto visualizzazione del sito è associato a singoli oggetti visualizzazione del documento gestito dal sito del documento. Se il contenitore supporta solo una singola visualizzazione per ogni sito di documento, può implementare il sito del documento e il sito di visualizzazione con una sola classe concreta.

## <a name="view-site-objects"></a><a name="view_site_objects"></a>Visualizza oggetti sito

L'oggetto del sito di visualizzazione di un contenitore gestisce lo spazio di visualizzazione per una particolare visualizzazione di un documento. Oltre a supportare l'interfaccia standard `IOleInPlaceSite` , un sito di visualizzazione implementa in genere anche `IContinueCallback` per il controllo di stampa a livello di codice. Si noti che l'oggetto visualizzazione non esegue mai query per `IContinueCallback` , quindi può essere implementato in qualsiasi oggetto desiderato dal contenitore.

Un contenitore che supporta più visualizzazioni deve essere in grado di creare più oggetti del sito di visualizzazione all'interno del sito del documento. In questo modo, ogni visualizzazione con servizi di attivazione e disattivazione distinti viene fornita tramite `IOleInPlaceSite` .

## <a name="frame-object"></a><a name="frame_object"></a>Oggetto frame

L'oggetto frame del contenitore è, nella maggior parte dei casi, lo stesso frame usato per l'attivazione sul posto nei documenti OLE, ovvero quello che gestisce la negoziazione di menu e barre degli strumenti. Un oggetto View può accedere a questo oggetto frame tramite `IOleInPlaceSite::GetWindowContext` , che fornisce anche l'accesso all'oggetto contenitore che rappresenta il documento contenitore, che può gestire la negoziazione della barra degli strumenti a livello di riquadro e l'enumerazione di oggetti contenuti.

Un contenitore di documenti attivi può aumentare il frame aggiungendo `IOleCommandTarget` . Ciò consente di ricevere i comandi che hanno origine nell'interfaccia utente del documento attivo nello stesso modo in cui questa interfaccia può consentire a un contenitore di inviare gli stessi comandi, ad esempio **file nuovo**, **Apri**, **Salva con nome**, **stampa**; **Modificare copia**, **Incolla**, **Annulla**e altri) in un documento attivo. Per altre informazioni, vedere [destinazioni dei comandi](message-handling-and-command-targets.md).

## <a name="see-also"></a>Vedere anche

[Contenimento dei documenti attivi](active-document-containment.md)
