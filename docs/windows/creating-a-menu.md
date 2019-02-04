---
title: Creazione di un Menu (C++)
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
ms.assetid: 66f94448-9b97-4b73-bf97-10d4bf87cc65
ms.openlocfilehash: 438480032f1fe9208e406b4ee499267e42148a48
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55702804"
---
# <a name="creating-a-menu-c"></a>Creazione di un Menu (C++)

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

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor dei menu](../windows/menu-editor.md)