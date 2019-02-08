---
title: Creazione di menu (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.menu
helpviewer_keywords:
- mnemonics [C++], associating menu items
- menus [C++], associating commands with mnemonic keys
- menus [C++], creating
- menus [C++], adding items
- commands [C++], adding to menus
- menu items, adding to menus
- submenus
- submenus [C++], creating
- menus [C++], creating
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
ms.assetid: 66f94448-9b97-4b73-bf97-10d4bf87cc65
ms.openlocfilehash: e3b3cc58b82f68c55ac98601fd11775422c901e5
ms.sourcegitcommit: 5a7dbd640376e13379f5d5b2cf66c4842e5e737b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/08/2019
ms.locfileid: "55905771"
---
# <a name="creating-menus-c"></a>Creazione di menu (C++)

> [!NOTE]
> Il **finestra risorse** non è disponibile nelle edizioni Express.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-create-a-standard-menu"></a>Per creare un menu standard

1. Dal **View** dal menu **visualizzazione risorse** e quindi fare clic sul **Menu** intestazione e scegliere **Aggiungi risorsa**. Scegliere **Menu**.

1. Selezionare la casella **Nuovo elemento** (il rettangolo che contiene "Digitare qui") nella barra dei menu.

   ![Casella nuovo elemento nell'editor di menu](../windows/media/vcmenueditornewitembox.gif "vcMenuEditorNewItemBox")<br/>
   Casella Nuovo elemento

1. Digitare un nome per il nuovo menu, ad esempio "File".

   Il testo immesso verrà visualizzato nell'editor di **menu** e nella casella **Didascalia** della [finestra Proprietà](/visualstudio/ide/reference/properties-window). È possibile modificare le proprietà per il nuovo menu in questa posizione.

   Dopo aver assegnato al nuovo menu un nome nella barra dei menu, la casella del nuovo elemento viene spostata verso destra (per consentire l'aggiunta di un altro menu) e un'altra casella del nuovo elemento viene visualizzata sotto il primo menu in modo da poter aggiungere i comandi di menu.

   ![Casella nuovo elemento espansa](../windows/media/vcmenueditornewitemboxexpanded.gif "vcMenuEditorNewItemBoxExpanded")<br/>
   Casella del nuovo elemento con stato attivo spostato dopo aver digitato il nome del menu

   > [!NOTE]
   > Per creare un singolo elemento menu sulla barra dei menu, impostare il **Popup** proprietà **False**.

## <a name="to-create-a-submenu"></a>Per creare un sottomenu

1. Selezionare il comando di menu per il quale si desidera creare un sottomenu.

1. Nella casella **Nuovo elemento** visualizzata a destra, digitare il nome del nuovo comando di menu. Questo nuovo comando verrà visualizzato come prima voce del sottomenu.

1. Aggiungere altri comandi di menu alla voce del sottomenu.

## <a name="to-insert-a-new-menu-between-existing-menus"></a>Per inserire un nuovo menu tra menu esistenti

Selezionare un nome di menu di scelta e premere esistente di **Inserisci** chiave. Il **nuovo elemento** casella viene inserita prima dell'elemento selezionato.

   \- oppure -

Fare clic sulla barra dei menu e scegliere **Inserisci nuovo** dal menu di scelta rapida.

## <a name="to-add-commands-to-a-menu"></a>Per aggiungere comandi a un menu

1. Creare un menu.

1. Selezionare un nome di menu, ad esempio **File**.

   Ciascuna voce di menu espanderà ed esporrà una casella nuovo elemento per i comandi. Ad esempio, è possibile aggiungere i comandi **New**, **Open**, e **Chiudi** da un **File** menu.

1. Nella casella del nuovo elemento, digitare un nome per il nuovo comando di menu.

   > [!NOTE]
   > Il testo immesso verrà visualizzato nell'editor di **menu** e nella casella **Didascalia** della [finestra Proprietà](/visualstudio/ide/reference/properties-window). È possibile modificare le proprietà per il nuovo menu in questa posizione.

   > [!TIP]
   > È possibile definire un tasto di scelta rapida che consente all'utente di selezionare il comando di menu. Digitare una e commerciale (`&`) davanti a una lettera per specificarla come tasto di scelta. L'utente può selezionare il comando di menu digitando quella lettera.

1. Nel **proprietà** finestra, seleziona il menu comando proprietà che si applicano. Per informazioni dettagliate, vedere [proprietà dei comandi di Menu](../windows/menu-command-properties.md).

1. Nel **prompt dei comandi** nella casella il **proprietà** finestra, digitare la stringa di messaggio di richiesta da visualizzare nella barra di stato dell'applicazione.

   Questo passaggio Crea una voce nella tabella di stringhe con lo stesso identificatore di risorsa del comando di menu creato.

   > [!NOTE]
   > È possibile applicare solo alle voci di menu con un **Popup** proprietà di **True**. Ad esempio, gli elementi del menu di primo livello possono avere richieste se dispongono di voci di menu secondario. Lo scopo di un **dei messaggi di richiesta** consiste nell'indicare cosa succede se un utente seleziona la voce di menu.

1. Premere **invio** per completare il comando di menu.

   La casella del nuovo elemento è selezionata, pertanto è possibile creare comandi di menu aggiuntivi.

## <a name="to-create-pop-up-menus"></a>Per creare menu a comparsa

I[menu a comparsa](../mfc/menus-mfc.md) visualizzano i comandi usati frequentemente. Possono essere sensibili al contesto per la posizione del puntatore. Quando si usa il menu a comparsa nell'applicazione è necessario compilare il menu e quindi connetterlo al codice dell'applicazione.

Dopo aver creato la risorsa di menu, il codice dell'applicazione deve caricare la risorsa di menu e usare [TrackPopupMenu](/windows/desktop/api/winuser/nf-winuser-trackpopupmenu) per visualizzare il menu. Dopo che l'utente ha chiuso il menu a comparsa selezionando al suo esterno o ha selezionato un comando, che verrà restituito. Se l'utente sceglie un comando, tale messaggio di comando verrà inviato alla finestra di cui è stato passato l'handle.

### <a name="to-create-a-pop-up-menu"></a>Per creare un menu a comparsa

1. [Creare un menu](../windows/creating-a-menu.md) con un titolo vuoto (non viene fornito un titolo **Didascalia**).

1. [Aggiungere un comando di menu al nuovo menu](../windows/adding-commands-to-a-menu.md). Spostare il primo comando di menu di scelta sotto il titolo del menu vuoto (la didascalia temporanea indica `Type Here`). Digitare una **Didascalia** e qualsiasi altra informazione.

   Ripetere questo processo per tutti gli altri comandi di menu a comparsa.

1. Salvare la risorsa di menu.

### <a name="to-connect-a-pop-up-menu-to-your-application"></a>Per connettere un menu a comparsa all'applicazione

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

### <a name="to-view-a-menu-resource-as-a-pop-up-menu"></a>Per visualizzare una risorsa di menu come menu a comparsa

In genere, quando si usa la **Menu** editor, una risorsa di menu viene visualizzata come una barra dei menu. Tuttavia, potrebbero esserci risorse di menu che vengono aggiunte alla barra dei menu dell'applicazione durante l'esecuzione del programma.

Il menu di scelta rapida e scegliere **Visualizza come Popup** dal menu di scelta rapida.

   Questa opzione è solo una preferenza di visualizzazione e non verrà modificato il menu di scelta.

   > [!NOTE]
   > Per modificare la visualizzazione della barra dei menu, fare clic su **Visualizza come Popup** nuovamente (che consente di rimuovere il segno di spunta e restituisce la visualizzazione della barra dei menu).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor dei menu](../windows/menu-editor.md)