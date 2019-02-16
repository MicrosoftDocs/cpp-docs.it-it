---
title: Proprietà dei comandi di menu (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- menu items, properties
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
ms.assetid: 6d308205-3c9e-42f2-ab42-45e656940e45
ms.openlocfilehash: 8989b96640bbb64eb5dcba09d60363dd0989263f
ms.sourcegitcommit: 470de1337035dd33682d935b4b6c6d8b1bdb0bbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/15/2019
ms.locfileid: "56320575"
---
# <a name="menu-command-properties-c"></a>Proprietà dei comandi di menu (C++)

Le informazioni seguenti sono organizzate in base al **dal Menu** le proprietà visualizzate nel [finestra proprietà](/visualstudio/ide/reference/properties-window) quando si seleziona un comando di menu. Queste limitazioni sono elencate in ordine alfabetico anche se il **proprietà** finestra consente inoltre di visualizzare queste proprietà per categoria.

|Proprietà|Descrizione|
|--------------|-----------------|
|**Break**|Può essere uno dei seguenti valori:<br /><br />- **Nessuno** (predefinito): Nessuna interruzione.<br />- **Colonna**: Per menu statici, questo valore posiziona il comando di menu in una nuova riga. Nei menu a comparsa questo valore consente di posizionare il comando di menu in una nuova colonna, senza linee di separazione tra le colonne. L'impostazione di questa proprietà influisce sull'aspetto del menu solo in fase di esecuzione e non nell'Editor dei menu.<br />- **Barra**: Uguale allo **colonna** except, nei menu a comparsa, questo valore la nuova colonna viene separata dalla precedente mediante una linea verticale. Impostazione di questa proprietà influisce sull'aspetto del menu solo in fase di esecuzione, non nel **Menu** editor.|
|**Caption**|Il testo che costituisce l'etichetta del comando di menu ovvero il nome del menu. Per impostare come tasto di scelta una lettera della didascalia di un comando di menu, anteporre alla lettera desiderata una e commerciale (&).|
|**Checked**|Se **True**, il comando di menu inizialmente selezionato. Tipo: **Bool**. Valore predefinito: **False**.|
|**Enabled**|Se il valore impostato è **False**, la voce di menu è disabilitata.|
|**Grayed**|Se **True**, il comando di menu è inizialmente disabilitato e inattivo. Tipo: **Bool**. Valore predefinito: **False**.|
|**Guida**|Allinea a destra la voce di menu. In tutte le applicazioni Windows, ad esempio, il comando di menu **?** è sempre posizionato a destra. Impostando questa proprietà su una voce di menu, tale voce verrà visualizzata all'estremità destra del menu. Si applica alle voci di primo livello. Valore predefinito: **False**.|
|**ID**|Un simbolo definito nel file di intestazione. Tipo: **Simbolo**, **Integer**, o **stringa tra virgolette**. È possibile usare qualsiasi simbolo normalmente disponibile negli editor. La [finestra Proprietà](/visualstudio/ide/reference/properties-window) non fornisce un elenco a discesa da cui effettuare una selezione.|
|**Popup**|Se **True**, il comando di menu è un menu a comparsa. Tipo: **Bool**. Valore predefinito: **True** per i menu di primo livello in una barra dei menu; in caso contrario **False**.|
|**Prompt**|Contiene il testo da visualizzare nella barra di stato quando il comando di menu viene evidenziato. Il testo viene inserito nella tabella di stringhe con lo stesso identificatore usato per il comando di menu. Questa proprietà è disponibile per qualsiasi tipo di progetto, ma la funzionalità in fase di esecuzione è specifica dei progetti MFC.|
|**Right to Left Justify**|Allinea a destra il comando di menu sulla barra dei menu in fase di esecuzione. Tipo: **Bool**. Valore predefinito: **False**.|
|**Right to Left Order**|Consente la visualizzazione dei comandi di menu da destra a sinistra nei casi in cui l'interfaccia è localizzata in una lingua che prevede la lettura da destra a sinistra, quale l'ebraico o l'arabo.|
|**Separatore**|Se **True**, il comando di menu è un separatore. Tipo: **Bool**. Valore predefinito: **False**.|

## <a name="associate-menu-commands"></a>Associare i comandi di menu

Spesso è utile che una voce di menu e una combinazione di tasti eseguano lo stesso comando del programma. I comandi di identici vengono eseguiti usando il **Menu** editor assegnare lo stesso identificatore di risorsa per il comando di menu e una voce nella tabella di tasti di scelta rapida dell'applicazione. Quindi si modifica la [Didascalia](../windows/menu-command-properties.md) del comando di menu per visualizzare il nome del tasto di scelta rapida.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

### <a name="to-associate-a-menu-command-with-an-accelerator-key"></a>Per associare un comando di menu a un tasto di scelta rapida

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

### <a name="to-associate-a-menu-command-with-a-status-bar-text-string-in-mfc-applications"></a>Per associare un comando di menu con lo stato della barra di stringa di testo nelle applicazioni MFC

L'applicazione MFC può visualizzare un testo descrittivo per ogni utente può selezionare i comandi di menu. Visualizzare il testo descrittivo assegnando una stringa di testo per ogni comando di menu usando la **dei messaggi di richiesta** proprietà nel **proprietà** finestra. Se si dispone di una stringa nella [tabella stringhe](../windows/string-editor.md) il cui ID è uguale al comando, un'applicazione MFC visualizzerà automaticamente questa risorsa stringa nella barra di stato dell'applicazione in esecuzione quando un utente si posiziona su una voce di menu.

1. Nell' **Editor dei menu** selezionare il comando di menu.

1. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)digitare il testo della barra di stato associata nella casella **Prompt** .

> [!NOTE]
> Questa serie di passaggi richiede MFC.

### <a name="to-assign-an-access-shortcut-key-to-a-menu-command"></a>Per assegnare un tasto di scelta (scelta rapida) a un comando di menu

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