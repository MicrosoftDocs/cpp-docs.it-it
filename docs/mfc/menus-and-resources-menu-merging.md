---
description: 'Altre informazioni su: menu e risorse: Unione di menu'
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
ms.openlocfilehash: b326e02fb4dbdaaef0ae6015fef6b647cc85b907
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227975"
---
# <a name="menus-and-resources-menu-merging"></a>Menu e risorse: unione di menu

Questo articolo illustra in dettaglio i passaggi necessari per la gestione corretta della modifica visiva e dell'attivazione sul posto delle applicazioni documento OLE. L'attivazione sul posto costituisce una sfida per le applicazioni del contenitore e del server (componente). L'utente rimane nella stessa finestra cornice (all'interno del contesto del documento contenitore) ma esegue effettivamente un'altra applicazione (il server). Questa operazione richiede il coordinamento tra le risorse del contenitore e le applicazioni server.

Gli argomenti trattati in questo articolo includono:

- [Layout di menu](#_core_menu_layouts)

- [Barre degli strumenti e barre di stato](#_core_toolbars_and_status_bars)

## <a name="menu-layouts"></a><a name="_core_menu_layouts"></a> Layout di menu

Il primo passaggio consiste nel coordinare i layout dei menu. Le applicazioni contenitore devono creare un nuovo menu da usare solo quando gli elementi incorporati vengono attivati sul posto. Come minimo, questo menu deve essere costituito dagli elementi seguenti, nell'ordine elencato:

1. Menu file identico a quello usato quando i file sono aperti. In genere nessun'altra voce di menu viene posizionata prima dell'elemento successivo.

1. Due separatori consecutivi.

1. Menu della finestra identico a quello usato quando i file sono aperti (solo se l'applicazione contenitore in un'applicazione MDI). Per alcune applicazioni possono essere presenti altri menu, ad esempio un menu opzioni, che appartengono a questo gruppo, che rimane nel menu quando un elemento incorporato viene attivato sul posto.

    > [!NOTE]
    >  Potrebbero essere presenti altri menu che influiscono sulla visualizzazione del documento del contenitore, ad esempio zoom. Questi menu contenitore vengono visualizzati tra i due separatori in questa risorsa di menu.

Le applicazioni server (componente) devono anche creare un nuovo menu specifico per l'attivazione sul posto. Dovrebbe essere simile al menu utilizzato quando i file sono aperti, ma senza voci di menu, ad esempio file e finestra che modificano il documento del server anziché i dati. In genere, questo menu è costituito dagli elementi seguenti:

1. Menu di modifica identico a quello usato quando i file sono aperti.

1. Separatore.

1. Menu di modifica degli oggetti, ad esempio il menu penna nell'applicazione di esempio Scribble.

1. Separatore.

1. Menu della guida.

Per un esempio, esaminare il layout di alcuni menu sul posto di esempio per un contenitore e un server. I dettagli di ogni voce di menu sono stati rimossi per rendere l'esempio più chiaro. Il menu sul posto del contenitore contiene le voci seguenti:

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

I separatori consecutivi indicano la posizione della prima parte del menu del server. A questo punto, esaminare il menu sul posto del server:

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

Il separatore qui indica il punto in cui deve essere inserito il secondo gruppo di voci di menu del contenitore. La struttura di menu risultante quando un oggetto da questo server viene attivato sul posto all'interno di questo contenitore è simile alla seguente:

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

Come si può notare, i separatori sono stati sostituiti con i diversi gruppi del menu di ogni applicazione.

Le tabelle dei tasti di scelta rapida associate al menu sul posto devono anche essere fornite dall'applicazione server. Il contenitore li includerà nelle proprie tabelle di tasti di scelta rapida.

Quando un elemento incorporato viene attivato sul posto, il Framework carica il menu sul posto. Quindi chiede all'applicazione server di scegliere il menu per l'attivazione sul posto e lo inserisce in cui si trovano i separatori. Questo è il modo in cui vengono combinati i menu. Si ottengono menu dal contenitore per operare sul posizionamento di file e finestre e si ottengono menu dal server per operare sull'elemento.

## <a name="toolbars-and-status-bars"></a><a name="_core_toolbars_and_status_bars"></a> Barre degli strumenti e barre di stato

Le applicazioni server devono creare una nuova barra degli strumenti e archiviare la relativa bitmap in un file separato. Le applicazioni generate dalla creazione guidata applicazione archiviano questa bitmap in un file denominato ITOOLBAR.BMP. La nuova barra degli strumenti sostituisce la barra degli strumenti dell'applicazione contenitore quando l'elemento del server viene attivato sul posto e deve contenere gli stessi elementi della barra degli strumenti normale, ma rimuovere le icone che rappresentano gli elementi nei menu file e finestra.

Questa barra degli strumenti viene caricata nella `COleIPFrameWnd` classe derivata da creata automaticamente dalla creazione guidata applicazione. La barra di stato viene gestita dall'applicazione contenitore. Per ulteriori informazioni sull'implementazione di finestre cornice sul posto, vedere [Servers: Implementing a server](servers-implementing-a-server.md).

## <a name="see-also"></a>Vedi anche

[Menu e risorse (OLE)](menus-and-resources-ole.md)<br/>
[Activation](activation-cpp.md)<br/>
[Server](servers.md)<br/>
[Contenitori](containers.md)
