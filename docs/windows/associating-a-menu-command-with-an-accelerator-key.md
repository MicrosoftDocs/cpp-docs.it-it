---
title: Associazione di comandi di Menu (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- keyboard shortcuts [C++], menu association
- commands [C++], associating menu commands with accelerator keys
- menu commands [C++], associating with keyboard shortcuts
- status bars [C++], associating menu items
- menus [C++], status bar text
- access keys [C++], checking
- menus [C++], shortcut keys
- keyboard shortcuts [C++], command assignments
- access keys [C++], assigning
- mnemonics [C++], adding to menus
- keyboard shortcuts [C++], uniqueness checking
- mnemonics [C++], uniqueness checking
- Check Mnemonics command
ms.assetid: ad2de43f-b20a-4c9f-bda8-0420179da48c
ms.openlocfilehash: f72fe5de3ef29b9575ef1a3138d4d114d7470fee
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55703038"
---
# <a name="associating-menu-commands-c"></a>Associazione di comandi di Menu (C++)

Spesso è utile che una voce di menu e una combinazione di tasti eseguano lo stesso comando del programma. I comandi di identici vengono eseguiti usando il **Menu** editor assegnare lo stesso identificatore di risorsa per il comando di menu e una voce nella tabella di tasti di scelta rapida dell'applicazione. Quindi si modifica la [Didascalia](../windows/menu-command-properties.md) del comando di menu per visualizzare il nome del tasto di scelta rapida.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-associate-a-menu-command-with-an-accelerator-key"></a>Per associare un comando di menu a un tasto di scelta rapida

1. Nell'editor **Menu** selezionare il comando di menu desiderato.

1. Nella [Finestra Proprietà](/visualstudio/ide/reference/properties-window)aggiungere il nome del tasto di scelta rapida alla proprietà **Caption** :

   - Dopo la didascalia di menu, digitare la sequenza di escape relativa a un carattere di tabulazione (\t), in modo che tutti che i tasti di scelta rapida del menu vengano allineati a sinistra.

   - Digitare il nome del tasto di modifica (**Ctrl**, **Alt**, o **MAIUSC**) seguito da un segno più (**+**) e il nome, una lettera, o simbolo del tasto aggiuntivo.

       Ad esempio, per assegnare **Ctrl**+**O** per il **Open** comando la **File** menu è modificare il comando di menu  **Didascalia** in modo che risulti simile al testo seguente:

        ```
        &Open...\tCtrl+O
        ```

       Il comando di menu nel **Menu** editor viene aggiornato per riflettere la nuova didascalia durante la digitazione.

1. [Creare la voce della tabella dei tasti di scelta rapida](../windows/adding-an-entry-to-an-accelerator-table.md) nell'editor **tasti di scelta rapida** , assegnando lo stesso identificatore del comando di menu. Usare una combinazione di tasti che sia facile da ricordare.

## <a name="to-associate-a-menu-command-with-a-status-bar-text-string-in-mfc-applications"></a>Per associare un comando di menu con lo stato della barra di stringa di testo nelle applicazioni MFC

L'applicazione MFC può visualizzare un testo descrittivo per ogni utente può selezionare i comandi di menu. Visualizzare il testo descrittivo assegnando una stringa di testo per ogni comando di menu usando la **dei messaggi di richiesta** proprietà nel **proprietà** finestra. Se si dispone di una stringa nella [tabella stringhe](../windows/string-editor.md) il cui ID è uguale al comando, un'applicazione MFC visualizzerà automaticamente questa risorsa stringa nella barra di stato dell'applicazione in esecuzione quando un utente si posiziona su una voce di menu.

1. Nell' **Editor dei menu** selezionare il comando di menu.

1. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)digitare il testo della barra di stato associata nella casella **Prompt** .

> [!NOTE]
> Questa serie di passaggi richiede MFC.

## <a name="to-assign-an-access-shortcut-key-to-a-menu-command"></a>Per assegnare un tasto di scelta (scelta rapida) a un comando di menu

In un progetto C++, è possibile assegnare una chiave di accesso (tasto di scelta che consente all'utente di selezionare il menu di scelta con la tastiera) ai menu e comandi di menu.

Digitare una e commerciale (`&`) davanti a una lettera nel nome di menu o nome del comando per specificare tale lettera come tasto di scelta corrispondente. Ad esempio, "& File" imposta **Alt**+**F** come tasto di scelta rapida per il **File** menu nelle applicazioni scritte per Microsoft Windows.

   La voce di menu visualizzerà un segnale visivo che indica che a una delle lettere è assegnato un tasto di scelta rapida. La lettera che segue la e commerciale verrà visualizzata con una sottolineatura (a seconda del sistema operativo).

   > [!NOTE]
   > Verificare che tutti i tasti di scelta di un menu siano univoci facendo clic con il pulsante destro del mouse sul menu e scegliendo **Tasti di scelta** dal menu di scelta rapida.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor dei menu](../windows/menu-editor.md)<br/>
[Aggiunta di comandi a un menu](../windows/adding-commands-to-a-menu.md)<br/>
[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
