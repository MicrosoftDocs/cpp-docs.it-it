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
ms.openlocfilehash: 149af83bd53b7a97fd264bd6b18701fc9f64ea1f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364763"
---
# <a name="menus-and-resources-menu-merging"></a>Menu e risorse: unione di menu

In questo articolo vengono descritti in dettaglio i passaggi necessari per le applicazioni di documenti OLE per gestire correttamente la modifica visiva e l'attivazione sul posto. L'attivazione sul posto rappresenta una sfida sia per le applicazioni contenitore che per le applicazioni server (componenti). L'utente rimane nella stessa finestra cornice (nel contesto del documento contenitore) ma in realtà è in esecuzione un'altra applicazione (il server). Ciò richiede il coordinamento tra le risorse del contenitore e le applicazioni server.

Gli argomenti trattati in questo articolo includono:Topics covered in this article include:

- [Layout menu](#_core_menu_layouts)

- [Barre degli strumenti e barre di stato](#_core_toolbars_and_status_bars)

## <a name="menu-layouts"></a><a name="_core_menu_layouts"></a>Layout menu

Il primo passaggio consiste nel coordinare i layout dei menu. Le applicazioni contenitore devono creare un nuovo menu da utilizzare solo quando gli elementi incorporati vengono attivati sul posto. Come minimo, questo menu dovrebbe essere costituito da quanto segue, nell'ordine elencato:

1. Menu File identico a quello utilizzato quando i file sono aperti. (In genere non vengono inserite altre voci di menu prima della voce successiva.)

1. Due separatori consecutivi.

1. Menu finestra identico a quello utilizzato quando i file sono aperti (solo se l'applicazione contenitore in un'applicazione MDI). Alcune applicazioni possono avere altri menu, ad esempio un menu Opzioni, che appartengono a questo gruppo, che rimane nel menu quando un elemento incorporato viene attivato sul posto.

    > [!NOTE]
    >  Potrebbero essere presenti altri menu che influiscono sulla visualizzazione del documento contenitore, ad esempio lo zoom. Questi menu contenitore vengono visualizzati tra i due separatori in questa risorsa di menu.

Le applicazioni server (componente) devono inoltre creare un nuovo menu specifico per l'attivazione sul posto. Dovrebbe essere simile al menu utilizzato quando i file sono aperti, ma senza voci di menu, ad esempio File e finestra che modificano il documento server anziché i dati. In genere, questo menu è costituito dai seguenti elementi:

1. Menu Modifica identico a quello utilizzato quando i file sono aperti.

1. Separatore.

1. Menu di modifica degli oggetti, ad esempio il menu Penna nell'applicazione di esempio Scribble.

1. Separatore.

1. dal menu Aiuto.

Per un esempio, esaminare il layout di alcuni menu sul posto di esempio per un contenitore e un server. I dettagli di ogni voce di menu sono stati rimossi per rendere l'esempio più chiaro. Il menu sul posto del contenitore ha le seguenti voci:

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

I separatori consecutivi indicano dove deve andare la prima parte del menu del server. Ora guardate il menu sul posto del server:

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

I separatori indicano dove deve andare il secondo gruppo di voci di menu del contenitore. La struttura di menu risultante quando un oggetto da questo server viene attivato sul posto all'interno di questo contenitore è simile alla seguente:The resulting menu structure when an object from this server is activated in place inside this container looks like this:

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

Come si può vedere, i separatori sono stati sostituiti con i diversi gruppi del menu di ogni applicazione.

Le tabelle dei tasti di scelta rapida associate al menu sul posto devono essere fornite anche dall'applicazione server. Il contenitore li incorporerà nelle proprie tabelle dei tasti di scelta rapida.

Quando un elemento incorporato viene attivato sul posto, il framework carica il menu sul posto. Chiede quindi all'applicazione server il relativo menu per l'attivazione sul posto e lo inserisce dove si trovano i separatori. Questo è il modo in cui i menu si combinano. Si ottengono menu dal contenitore per operare sul posizionamento di file e finestre e si ottengono menu dal server per operare sull'elemento.

## <a name="toolbars-and-status-bars"></a><a name="_core_toolbars_and_status_bars"></a>Barre degli strumenti e barre di stato

Le applicazioni server devono creare una nuova barra degli strumenti e archiviare la bitmap in un file separato. Le applicazioni generate dalla creazione guidata applicazione archiviano questa bitmap in un file denominato ITOOLBAR. Bmp. La nuova barra degli strumenti sostituisce la barra degli strumenti dell'applicazione contenitore quando l'elemento del server viene attivato sul posto e deve contenere gli stessi elementi della barra degli strumenti normale, ma rimuovere le icone che rappresentano gli elementi nei menu File e Finestra.

Questa barra degli `COleIPFrameWnd`strumenti viene caricata nella classe derivata da , creata automaticamente dalla creazione guidata applicazione. La barra di stato viene gestita dall'applicazione contenitore. Per ulteriori informazioni sull'implementazione di finestre cornice sul posto, vedere [Server: implementazione di un server](../mfc/servers-implementing-a-server.md).

## <a name="see-also"></a>Vedere anche

[Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)<br/>
[Activation](../mfc/activation-cpp.md)<br/>
[Server](../mfc/servers.md)<br/>
[Contenitori](../mfc/containers.md)
