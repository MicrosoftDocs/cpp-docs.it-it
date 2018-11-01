---
title: 'Menu e risorse: unione di menu'
ms.date: 11/04/2016
helpviewer_keywords:
- status bars [MFC], OLE document applications
- visual editing [MFC], application menus and resources
- coordinating menu layouts [MFC]
- OLE containers [MFC], menus and resources
- toolbars [MFC], OLE document applications
- merging toolbar and status bar [MFC]
- menus [MFC], OLE document applications
ms.assetid: 80b6bb17-d830-4122-83f0-651fc112d4d1
ms.openlocfilehash: 30663afae0bfd30b42f99daf95cb8ff35979ee50
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438441"
---
# <a name="menus-and-resources-menu-merging"></a>Menu e risorse: unione di menu

Questo articolo illustra in dettaglio i passaggi necessari per le applicazioni documento OLE gestire la modifica visiva e posto attivazione in modo corretto. Attivazione sul posto costituisce una sfida per contenitori e server applicazioni (componente). L'utente rimane nella stessa finestra del frame, nell'ambito del documento contenitore, ma è effettivamente in esecuzione un'altra applicazione (server). Ciò richiede il coordinamento tra le risorse delle applicazioni contenitore e il server.

Gli argomenti trattati in questo articolo includono:

- [Layout di menu](#_core_menu_layouts)

- [Barre degli strumenti e le barre di stato](#_core_toolbars_and_status_bars)

##  <a name="_core_menu_layouts"></a> Layout di menu

Il primo passaggio è per il coordinamento dei layout dei menu. Per altre informazioni, vedere la **Menu di creazione** sezione [considerazioni sulla programmazione di Menu](https://msdn.microsoft.com/library/ms647557.aspx) nel SDK di Windows.

Le applicazioni del contenitore devono creare un nuovo menu per essere usato solo quando gli elementi incorporati sono attivati sul posto. Come minimo, questo menu deve includere quanto segue, nell'ordine elencato:

1. Menu file identico a quello utilizzato quando i file sono aperti. (In genere altre voci di menu non vengono inserite prima dell'elemento successivo).

1. Due separatori consecutivi.

1. Menu finestra identico a quella usata quando i file sono aperti (solo se l'applicazione contenitore in un'applicazione MDI). Alcune applicazioni possono presentare altri menu di scelta, ad esempio un menu di opzioni, che fanno parte di questo gruppo, che rimane nel menu quando un elemento incorporato è attivato sul posto.

    > [!NOTE]
    >  Potrebbero esserci altri menu di scelta che interessano la visualizzazione del documento contenitore, come lo Zoom. Questi menu del contenitore vengono visualizzati tra i due separatori in questa risorsa di menu.

Le applicazioni server, componente, è necessario creare anche un nuovo menu in modo specifico per l'attivazione sul posto. Deve essere, ad esempio il menu usato quando i file sono aperti, ma senza voci di menu, ad esempio File e finestra che modificano il documento server anziché i dati. In genere, questo menu include gli elementi seguenti:

1. Modificare menu identico a quella usata quando i file sono aperti.

1. Separatore.

1. Oggetto menu, ad esempio il menu di penna nell'applicazione di esempio Scribble di modifica.

1. Separatore.

1. Menu della Guida.

Per un esempio, esaminare il layout di alcuni menu sul posto di esempio per un contenitore e un server. I dettagli di ogni voce di menu sono stati rimossi per rendere più chiaro l'esempio. Di menu del contenitore presenta le seguenti voci:

```
IDR_CONTAINERTYPE_CNTR_IP MENU PRELOAD DISCARDABLE
BEGIN
    POPUP "&File C1"
    MENUITEM SEPARATOR
    POPUP "&Zoom C2"
    MENUITEM SEPARATOR
    POPUP "&Options C3"
    POPUP "&Window C3"
END
```

I separatori consecutivi indicano dove la prima parte del menu del server. Esaminare ora di menu del server:

```
IDR_SERVERTYPE_SRVR_IP MENU PRELOAD DISCARDABLE
BEGIN
    POPUP "&Edit S1"
    MENUITEM SEPARATOR
    POPUP "&Format S2"
    MENUITEM SEPARATOR
    POPUP "&Help S3"
END
```

I separatori di seguito indicano dove il secondo gruppo di contenitori di voci di menu. La struttura di menu quando un oggetto di questo server è attivato sul posto all'interno di questo contenitore è simile alla seguente:

```
BEGIN
    POPUP "&File C1"
    POPUP "&Edit S1"
    POPUP "&Zoom C2"
    POPUP "&Format S2"
    POPUP "&Options C3
    POPUP "&Window C3"
    POPUP "&Help S3"
END
```

Come può notare, i separatori sono stati sostituiti con i diversi gruppi di menu di ogni applicazione.

Le tabelle di tasti di scelta rapida associate al posto menu devono essere fornite anche dall'applicazione server. Il contenitore esse verrà incorporate nelle rispettive tabelle di tasti di scelta rapida.

Quando un elemento incorporato è attivato sul posto, il framework di carica il menu sul posto. Quindi, richiede che l'applicazione server per il menu di scelta per l'attivazione sul posto e lo inserisce in cui i separatori sono. Si tratta di come combinano i menu. Si ottengono i menu del contenitore per l'uso del posizionamento di file e nella finestra, e si ottengono i menu dal server per il funzionamento dell'elemento.

##  <a name="_core_toolbars_and_status_bars"></a> Barre degli strumenti e le barre di stato

Applicazioni server devono creare una nuova barra degli strumenti e la relativa bitmap di archiviare in un file separato. Le applicazioni generate dalla creazione guidata applicazione archiviano questa bitmap in un file denominato ITOOLBAR. BMP. Quando l'elemento del server è attivato sul posto e deve contenere gli stessi elementi come la barra degli strumenti normali, ma rimuovere le icone che rappresentano elementi nel menu File e finestra, la nuova barra degli strumenti sostituisce barra degli strumenti dell'applicazione contenitore.

Questa barra degli strumenti viene caricato nel `COleIPFrameWnd`-derivato (classe), creato dalla procedura guidata dell'applicazione. La barra di stato viene gestita dall'applicazione contenitore. Per altre informazioni sull'implementazione di finestre cornice sul posto, vedere [server: implementazione di un Server](../mfc/servers-implementing-a-server.md).

## <a name="see-also"></a>Vedere anche

[Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)<br/>
[Attivazione](../mfc/activation-cpp.md)<br/>
[Server](../mfc/servers.md)<br/>
[Contenitori](../mfc/containers.md)

