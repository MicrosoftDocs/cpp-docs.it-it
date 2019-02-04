---
title: Creazione di menu a comparsa (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- context menus [C++], Menu Editor
- pop-up menus [C++], creating
- menus [C++], pop-up
- menus [C++], creating
- shortcut menus [C++], creating
- pop-up menus [C++], displaying
- pop-up menus [C++], connecting to applications
- context menus [C++], connecting to applications
- shortcut menus [C++], connecting to applications
- pop-up menus
ms.assetid: dff4dddf-2e8d-4c34-b755-90baae426b58
ms.openlocfilehash: cf2e3578f49cb6b4af8797052273211f699a6b4f
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55702830"
---
# <a name="creating-pop-up-menus-c"></a>Creazione di menu a comparsa (C++)

I[menu a comparsa](../mfc/menus-mfc.md) visualizzano i comandi usati frequentemente. Possono essere sensibili al contesto per la posizione del puntatore. Quando si usa il menu a comparsa nell'applicazione è necessario compilare il menu e quindi connetterlo al codice dell'applicazione.

Dopo aver creato la risorsa di menu, il codice dell'applicazione deve caricare la risorsa di menu e usare [TrackPopupMenu](/windows/desktop/api/winuser/nf-winuser-trackpopupmenu) per visualizzare il menu. Dopo che l'utente ha chiuso il menu a comparsa selezionando al suo esterno o ha selezionato un comando, che verrà restituito. Se l'utente sceglie un comando, tale messaggio di comando verrà inviato alla finestra di cui è stato passato l'handle.

## <a name="to-create-a-pop-up-menu"></a>Per creare un menu a comparsa

1. [Creare un menu](../windows/creating-a-menu.md) con un titolo vuoto (non viene fornito un titolo **Didascalia**).

1. [Aggiungere un comando di menu al nuovo menu](../windows/adding-commands-to-a-menu.md). Spostare il primo comando di menu di scelta sotto il titolo del menu vuoto (la didascalia temporanea indica `Type Here`). Digitare una **Didascalia** e qualsiasi altra informazione.

   Ripetere questo processo per tutti gli altri comandi di menu a comparsa.

1. Salvare la risorsa di menu.

## <a name="to-connect-a-pop-up-menu-to-your-application"></a>Per connettere un menu a comparsa all'applicazione

1. Aggiungere un gestore di messaggi per WM_CONTEXTMENU (ad esempio). Per altre informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).

1. Aggiungere al gestore messaggio il codice seguente:

    ```cpp
    CMenu menu;
    VERIFY(menu.LoadMenu(IDR_MENU1));
    CMenu* pPopup = menu.GetSubMenu(0);
    ASSERT(pPopup != NULL);
    pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, AfxGetMainWnd());
    ```

   > [!NOTE]
   > Il [CPoint](../atl-mfc-shared/reference/cpoint-class.md) passato per il messaggio di gestore di è in coordinate dello schermo.

   > [!NOTE]
   > La connessione di un menu a comparsa all'applicazione richiede MFC.

## <a name="to-view-a-menu-resource-as-a-pop-up-menu"></a>Per visualizzare una risorsa di menu come menu a comparsa

In genere, quando si usa la **Menu** editor, una risorsa di menu viene visualizzata come una barra dei menu. Tuttavia, potrebbero esserci risorse di menu che vengono aggiunte alla barra dei menu dell'applicazione durante l'esecuzione del programma.

Il menu di scelta rapida e scegliere **Visualizza come Popup** dal menu di scelta rapida.

   Questa opzione è solo una preferenza di visualizzazione e non verrà modificato il menu di scelta.

   > [!NOTE]
   > Per modificare la visualizzazione della barra dei menu, fare clic su **Visualizza come Popup** nuovamente (che consente di rimuovere il segno di spunta e restituisce la visualizzazione della barra dei menu).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor dei menu](../windows/menu-editor.md)
