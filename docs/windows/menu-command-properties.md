---
title: Comandi di menuC++()
ms.date: 02/15/2019
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
ms.openlocfilehash: 972478923a7c4c60d8ff949c5532b00a1de1efc0
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80075508"
---
# <a name="menu-commands-c"></a>Comandi di menuC++()

Le informazioni riportate di seguito sono organizzate in base alle proprietà dei **menu** visualizzate nella [finestra Proprietà](/visualstudio/ide/reference/properties-window) quando si seleziona un comando di menu. Sono elencate in ordine alfabetico anche se la finestra **Proprietà** consente anche di visualizzare queste proprietà per categoria.

|Proprietà|Descrizione|
|--------------|-----------------|
|**Break**|I possibili valori sono i seguenti:<br/>  - **None**: nessuna pausa. Questa è la modalità predefinita.<br/>  - **Column**: per menu statici, questo valore posiziona il comando di menu su una nuova riga.<br/>      Nei menu a comparsa questo valore consente di posizionare il comando di menu in una nuova colonna, senza linee di separazione tra le colonne.<br/>      L'impostazione di questa proprietà influisce sull'aspetto del menu solo in fase di esecuzione e non nell'Editor dei menu.<br />   - **barra**: uguale a **Column** eccetto per i menu a comparsa, questo valore separa la nuova colonna dalla colonna precedente con una linea verticale.<br/>      L'impostazione di questa proprietà influisca sull'aspetto del menu solo in fase di esecuzione e non nell' **Editor dei menu**.|
|**Caption**|Il testo che costituisce l'etichetta del comando di menu ovvero il nome del menu. Per impostare come tasto di scelta una lettera della didascalia di un comando di menu, anteporre alla lettera desiderata una e commerciale (&).|
|**Checked**|Se **true**, il comando di menu viene inizialmente controllato. Tipo: **bool**. Impostazione predefinita: **False**.|
|**Enabled**|Se il valore impostato è **False**, la voce di menu è disabilitata.|
|**Grayed**|Se **true**, il comando di menu è inizialmente grigio e inattivo. Tipo: **bool**. Impostazione predefinita: **False**.|
|**Guida**|Allinea a destra la voce di menu. Impostazione predefinita: **False**.<br/><br/>In tutte le applicazioni Windows, ad esempio, il comando di menu **?** è sempre posizionato a destra. Impostando questa proprietà su una voce di menu, tale voce verrà visualizzata all'estremità destra del menu. Si applica alle voci di primo livello.|
|**ID**|Un simbolo definito nel file di intestazione. Tipo: **simbolo**, **numero intero**o **stringa racchiusa tra virgolette**.<br/><br/>È possibile usare qualsiasi simbolo normalmente disponibile negli editor. La [finestra Proprietà](/visualstudio/ide/reference/properties-window) non fornisce un elenco a discesa da cui effettuare una selezione.|
|**Popup**|Se **true**, il comando di menu è un menu a comparsa. Tipo: **bool**. Impostazione predefinita: **true** per i menu di primo livello su una barra dei menu, in caso contrario **false**.|
|**Prompt**|Contiene il testo da visualizzare nella barra di stato quando il comando di menu viene evidenziato. Il testo viene inserito nella tabella di stringhe con lo stesso identificatore usato per il comando di menu.<br/><br/>Questa proprietà è disponibile per qualsiasi tipo di progetto, ma la funzionalità in fase di esecuzione è specifica dei progetti MFC.|
|**Right to Left Justify**|Allinea a destra il comando di menu sulla barra dei menu in fase di esecuzione. Tipo: **bool**. Impostazione predefinita: **False**.|
|**Right to Left Order**|Consente la visualizzazione dei comandi di menu da destra a sinistra nei casi in cui l'interfaccia è localizzata in una lingua che prevede la lettura da destra a sinistra, quale l'ebraico o l'arabo.|
|**Separatore**|Se **true**, il comando di menu è un separatore. Tipo: **bool**. Impostazione predefinita: **False**.|

## <a name="associate-menu-commands"></a>Associare i comandi di menu

Spesso è utile che una voce di menu e una combinazione di tasti eseguano lo stesso comando del programma. I comandi identici vengono eseguiti usando l' **editor di menu** per assegnare lo stesso identificatore di risorsa al comando di menu e a una voce nella tabella dei tasti di scelta rapida dell'applicazione. Quindi si modifica la [Didascalia](../windows/menu-command-properties.md) del comando di menu per visualizzare il nome del tasto di scelta rapida.

### <a name="to-associate-a-menu-command-with-an-accelerator-key"></a>Per associare un comando di menu a un tasto di scelta rapida

1. Nell' **Editor dei menu**selezionare il comando di menu desiderato.

1. Nella [Finestra Proprietà](/visualstudio/ide/reference/properties-window)aggiungere il nome del tasto di scelta rapida alla proprietà **Caption** :

   - Dopo la didascalia di menu, digitare la sequenza di escape relativa a un carattere di tabulazione (\t), in modo che tutti che i tasti di scelta rapida del menu vengano allineati a sinistra.

   - Digitare il nome del tasto di modifica (**CTRL**, **ALT**o **MAIUSC**) seguito da un segno di addizione ( **+** ) e dal nome, dalla lettera o dal simbolo della chiave aggiuntiva.

   Ad esempio, per assegnare **Ctrl**+**O** al comando **Apri** nel menu **file** , modificare la **didascalia** del comando di menu in modo che sia simile al testo seguente:

   ```
   &Open...\tCtrl+O
   ```

   Il comando di menu nell' **Editor dei menu** viene aggiornato in modo da riflettere la nuova didascalia durante la digitazione.

1. [Creare la voce della tabella dei tasti di scelta rapida](../windows/adding-an-entry-to-an-accelerator-table.md) nell'editor **tasti di scelta rapida** , assegnando lo stesso identificatore del comando di menu. Usare una combinazione di tasti che sia facile da ricordare.

L'applicazione MFC può visualizzare testo descrittivo per ogni comando di menu che un utente può selezionare. Visualizzare il testo descrittivo assegnando una stringa di testo a ogni comando di menu usando la proprietà **prompt** nella finestra **Proprietà** . Se si dispone di una stringa nella [tabella stringhe](../windows/string-editor.md) il cui ID è uguale al comando, un'applicazione MFC visualizzerà automaticamente questa risorsa stringa nella barra di stato dell'applicazione in esecuzione quando un utente si posiziona su una voce di menu.

- Per associare un comando di menu a una stringa di testo della barra di stato in applicazioni MFC, selezionare il comando di menu nell' **Editor dei menu**. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)digitare il testo della barra di stato associata nella casella **Prompt** .

In un C++ progetto è possibile assegnare una chiave di accesso (un tasto di scelta che consente all'utente di selezionare il menu con la tastiera) per i menu e i comandi di menu.

- Per assegnare una chiave di accesso (collegamento) a un comando di menu, digitare una e commerciale (`&`) davanti a una lettera nel nome del menu o nel nome del comando per specificare tale lettera come chiave di accesso corrispondente.

   Ad esempio, "& file" imposta **Alt**+**F** come tasto di scelta rapida per il menu **file** nelle applicazioni scritte per Microsoft Windows.

   La voce di menu visualizzerà un segnale visivo che indica che a una delle lettere è assegnato un tasto di scelta rapida. La lettera che segue la e commerciale verrà visualizzata con una sottolineatura (a seconda del sistema operativo).

> [!NOTE]
> Assicurarsi che tutte le chiavi di accesso in un menu siano univoche facendo clic con il pulsante destro del mouse sul menu e scegliendo **Controlla tasti**di scelta.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor dei menu](../windows/menu-editor.md)

<!--
[Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>-->