---
title: Editor dei menu (C++)
ms.date: 02/15/2019
f1_keywords:
- vc.editors.menu.F1
- vc.editors.menu
helpviewer_keywords:
- resource editors [C++], Menu editor
- editors, menus
- Menu editor
- menus [C++], Menu editor
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
- menu commands [C++], selecting
- menus [C++], selecting
- commands [C++], menu commands
- commands [C++], copying on menus
- menu items, moving
- commands [C++], moving on menus
- menu items, copying
- menu items, deleting
- commands [C++], deleting from menus
- menus [C++], deleting
ms.assetid: 421fb215-6e12-4ec9-a3af-82d77f87bfa6
ms.openlocfilehash: b5d809fa4e0f608d4c0e6cbdaf8697688c6d3f9c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62376779"
---
# <a name="menu-editor-c"></a>Editor dei menu (C++)

I menu consentono di disporre i comandi in modo logico e facile da trovare. Con il **Editor di Menu**, è possibile creare e modificare i menu lavorando direttamente con una barra dei menu che strettamente è simile a quello dell'applicazione finita.

> [!TIP]
> Quando si usa la **Editor di Menu**, in molti casi, è possibile fare doppio clic per visualizzare un menu di scelta rapida dei comandi usati frequentemente. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il puntatore.

## <a name="how-to"></a>Procedure

Il **Editor di Menu** consente di:

### <a name="to-create-a-standard-menu"></a>Per creare un menu standard

1. Passare al menu di scelta **View** > **visualizzazione risorse** e fare clic sui **Menu** intestazione. Scegli **Aggiungi risorsa**, quindi **Menu**.

1. Selezionare il **nuovo elemento** casella (rettangolo contenente *digitare qui*) sulla barra dei menu.

   ![Casella nuovo elemento nell'editor di menu](../windows/media/vcmenueditornewitembox.gif "vcMenuEditorNewItemBox")<br/>
   **Nuovo elemento** casella

1. Digitare un nome per il nuovo menu, ad esempio *File*.

   Il testo immesso verrà visualizzato in entrambe le **Editor dei Menu** e nel **didascalia** nella casella il [finestra proprietà](/visualstudio/ide/reference/properties-window). È possibile modificare le proprietà per il nuovo menu in questa posizione.

   Dopo aver assegnato al nuovo menu un nome nella barra dei menu, la casella del nuovo elemento viene spostata verso destra (per consentire l'aggiunta di un altro menu) e un'altra casella del nuovo elemento viene visualizzata sotto il primo menu in modo da poter aggiungere i comandi di menu.

   ![Casella nuovo elemento espansa](../windows/media/vcmenueditornewitemboxexpanded.gif "vcMenuEditorNewItemBoxExpanded")<br/>
   **Nuovo elemento** finestra con lo stato attivo spostato dopo aver digitato il nome di menu

   > [!NOTE]
   > Per creare un singolo elemento menu sulla barra dei menu, impostare il **Popup** proprietà **False**.

### <a name="to-create-a-submenu"></a>Per creare un sottomenu

1. Selezionare il comando di menu per il quale si desidera creare un sottomenu.

1. Nella casella **Nuovo elemento** visualizzata a destra, digitare il nome del nuovo comando di menu. Questo nuovo comando verrà visualizzato come prima voce del sottomenu.

1. Aggiungere altri comandi di menu alla voce del sottomenu.

### <a name="to-insert-a-new-menu-between-existing-menus"></a>Per inserire un nuovo menu tra menu esistenti

Selezionare un nome di menu di scelta e premere esistente di **inserire** oppure fare doppio clic sulla barra dei menu e scegliere **Inserisci nuovo**.

   Il **nuovo elemento** casella viene inserita prima dell'elemento selezionato.

### <a name="to-add-commands-to-a-menu"></a>Per aggiungere comandi a un menu

1. Creare un menu. Selezionare quindi un nome di menu, ad esempio **File**.

   Ciascuna voce di menu espanderà ed esporrà una casella nuovo elemento per i comandi. Ad esempio, è possibile aggiungere i comandi **New**, **Open**, e **Chiudi** da un **File** menu.

1. Nella casella del nuovo elemento, digitare un nome per il nuovo comando di menu.

   > [!NOTE]
   > Il testo immesso verrà visualizzato in entrambe le **Editor dei Menu** e nel **didascalia** nella casella il [finestra proprietà](/visualstudio/ide/reference/properties-window). È possibile modificare le proprietà per il nuovo menu in questa posizione.

   > [!TIP]
   > È possibile definire un tasto di scelta rapida che consente all'utente di selezionare il comando di menu. Digitare una e commerciale (`&`) davanti a una lettera per specificarla come tasto di scelta. L'utente può selezionare il comando di menu digitando quella lettera.

1. Nel **proprietà** finestra, seleziona il menu comando proprietà che si applicano. Per informazioni dettagliate, vedere [proprietà dei comandi di Menu](../windows/menu-command-properties.md).

1. Nel **prompt dei comandi** nella casella il **proprietà** finestra, digitare la stringa di messaggio di richiesta da visualizzare nella barra di stato dell'applicazione.

   Questo passaggio Crea una voce nella tabella di stringhe con lo stesso identificatore di risorsa del comando di menu creato.

   > [!NOTE]
   > È possibile applicare solo alle voci di menu con un **Popup** proprietà di **True**. Ad esempio, gli elementi del menu di primo livello possono avere richieste se dispongono di voci di menu secondario. Lo scopo di un **dei messaggi di richiesta** consiste nell'indicare cosa succede se un utente seleziona la voce di menu.

1. Premere **invio** per completare il comando di menu.

   La casella del nuovo elemento è selezionata, pertanto è possibile creare comandi di menu aggiuntivi.

### <a name="to-select-multiple-menu-commands-to-run-bulk-operations-such-as-deleting-or-changing-properties"></a>Per selezionare più comandi di menu per l'esecuzione delle operazioni bulk, ad esempio l'eliminazione o modifica delle proprietà

Mentre si tiene premuto il **Ctrl** della chiave, selezionare il menu o comandi del sottomenu desiderato.

### <a name="to-move-and-copy-menus-and-menu-commands"></a>Per spostare e copiare menu e comandi di menu

- Usare il metodo di trascinamento e rilascio:

   1. Trascinare o copiare l'elemento che si vuole spostare in:

      - La nuova posizione del menu corrente.

      - Un altro menu. È possibile passare agli altri menu trascinando il puntatore del mouse su di essi.

   1. Trascinare il comando di menu quando la guida di inserimento mostra la posizione desiderata.

- Usare i comandi di menu di scelta rapida:

   1. Fare doppio clic su uno o più menu o comandi di menu, quindi scegliere **tagliare** (per spostare) o **copia**.

   1. Se stai spostando gli elementi in un altro menu risorse o file script di risorsa [aprirlo in un'altra finestra](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

   1. Selezionare la posizione del menu o del comando di menu che si vuole spostare o copiare.

   1. Dal menu di scelta rapida scegliere **Incolla**. L'elemento spostato o copiato viene inserito prima dell'elemento selezionato.

> [!NOTE]
> È anche possibile trascinare, copiare e incollare in altre finestre dai menu.

### <a name="to-delete-a-menu-or-menu-command"></a>Per eliminare un menu o un comando di menu

Fare clic sul nome di menu o comandi e scegliere **Elimina**.

> [!NOTE]
> Analogamente, è possibile usare il menu di scelta rapida per eseguire altre azioni quali Copia, Taglia, Incolla, Inserisci nuovo, Inserisci separatore, Modifica ID, Visualizza come popup, tasti di scelta e così via.

## <a name="pop-up-menus"></a>Menu di scelta rapida

I[menu a comparsa](../mfc/menus-mfc.md) visualizzano i comandi usati frequentemente. Possono essere sensibili al contesto per la posizione del puntatore. Quando si usa il menu a comparsa nell'applicazione è necessario compilare il menu e quindi connetterlo al codice dell'applicazione.

Dopo aver creato la risorsa di menu, il codice dell'applicazione deve caricare la risorsa di menu e usare [TrackPopupMenu](/windows/desktop/api/winuser/nf-winuser-trackpopupmenu) per visualizzare il menu. Dopo che l'utente ha chiuso il menu a comparsa selezionando al suo esterno o ha selezionato un comando, che verrà restituito. Se l'utente sceglie un comando, tale messaggio di comando verrà inviato alla finestra di cui è stato passato l'handle.

> [!NOTE]
> Per i programmi di libreria di classi MFC (Microsoft Foundation) e ATL, usare **creazioni guidate codice** per associare i comandi di menu al codice. Per altre informazioni, vedere [aggiunta di un evento](../ide/adding-an-event-visual-cpp.md) e [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).

- Per creare un menu a comparsa, creare un menu con un titolo vuoto e non forniscono un *didascalia*. Aggiungere quindi un comando di menu al nuovo menu, spostare il primo comando di menu di scelta sotto il titolo del menu vuoto con la didascalia temporanea *digitare qui* e digitare un *didascalia* e qualsiasi altra informazione.

   Ripetere questo processo per tutti gli altri comandi di menu nel menu a comparsa e assicurarsi di salvare la risorsa di menu.

- Per connettere un menu a comparsa all'applicazione, ad esempio, aggiungere un gestore di messaggi per WM_CONTEXTMENU, quindi aggiungere il codice seguente al gestore del messaggio:

    ```cpp
    CMenu menu;
    VERIFY(menu.LoadMenu(IDR_MENU1));
    CMenu* pPopup = menu.GetSubMenu(0);
    ASSERT(pPopup != NULL);
    pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, AfxGetMainWnd());
    ```

   > [!NOTE]
   > Il [CPoint](../atl-mfc-shared/reference/cpoint-class.md) passato per il messaggio di gestore di è in coordinate dello schermo.

In genere, quando si usa la **Editor di Menu**, una risorsa di menu viene visualizzata come una barra dei menu. Tuttavia, potrebbero esserci risorse di menu che vengono aggiunte alla barra dei menu dell'applicazione durante l'esecuzione del programma.

- Per visualizzare una risorsa di menu come menu a comparsa, il menu di scelta rapida e scegliere **Visualizza come Popup**.

   Questa opzione è solo una preferenza di visualizzazione e non verrà modificato il menu di scelta.

> [!TIP]
> Per modificare la visualizzazione della barra dei menu, selezionare **Visualizza come Popup** nuovamente. Questa azione rimuove il segno di spunta e restituisce la visualizzazione della barra dei menu.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Comandi di menu](../windows/menu-command-properties.md)<br/>

<!--
[User-Interface Objects and Command IDs](../mfc/user-interface-objects-and-command-ids.md)<br/>
[Menus](../mfc/menus-mfc.md)<br/>
[Menus](https://msdn.microsoft.com/library/windows/desktop/ms646977.aspx)-->