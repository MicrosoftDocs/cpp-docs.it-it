---
title: Editor di stringhe (C
ms.date: 02/14/2019
f1_keywords:
- vc.editors.string.F1
- vc.editors.string
helpviewer_keywords:
- String editor
- string tables
- string tables [C++], String editor
- string editing
- string editing, string tables
- resource editors [C++], String editor
- strings [C++], editing
- strings [C++], searching
- strings [C++]
- strings [C++], adding to string tables
- string tables [C++], deleting strings
- strings [C++], deleting in string tables
- string tables [C++], adding strings
- strings [C++], moving between files
- resource script files [C++], moving strings
- string editing, moving strings between resources
- String editor [C++], moving strings between files
- resource identifiers, string properties
- string tables [C++], changing strings
- strings [C++], properties
- String editor [C++], changing properties of multiple strings
- string tables [C++], changing caption of multiple strings
- special characters, adding to strings
- ASCII characters, adding to strings
- strings [C++], formatting
- strings [C++], special characters
ms.assetid: f71ab8de-3068-4e29-8e28-5a33d18dd416
ms.openlocfilehash: b0fb077752cf1912e07175c68cdc8acfe758b0c4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370236"
---
# <a name="string-editor-c"></a>Editor di stringhe (C

Una tabella di stringhe è una risorsa di Windows che contiene un elenco di ID, valori e didascalie per tutte le stringhe dell'applicazione. Ad esempio, nella tabella di stringhe sono contenuti i prompt della barra di stato.

Quando si sviluppa un'applicazione possono essere presenti più tabelle di stringhe, uno per ogni lingua o condizione. Un modulo eseguibile, invece, ha una sola tabella di stringhe. Un'applicazione in esecuzione può fare riferimento a più tabelle di stringhe se le tabelle vengano inserite in DLL diverse.

Le tabelle di stringhe semplificano la localizzazione dell'applicazione in diverse lingue. Se tutte le stringhe si trovano in una tabella di stringhe, è possibile localizzare l'applicazione traducendo le stringhe e altre risorse senza modificare il codice sorgente. Questa situazione è più auspicabile che trovare e sostituire manualmente varie stringhe nei file di origine.

> [!NOTE]
> Windows non consente la creazione di tabelle di stringhe vuote. Se si crea una tabella di stringhe priva di voci, questa verrà eliminata automaticamente al salvataggio del file di risorse.

## <a name="how-to"></a>Procedure

**L'Editor stringhe** consente di:

### <a name="to-find-a-string-resource-in-the-string-table"></a>Per trovare una risorsa stringa nella tabella di stringheTo find a string resource in the string table

1. Aprire la tabella di stringhe facendo doppio clic sulla relativa icona in [Visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Vai al menu **Modifica** > **Trova e sostituisci** e scegli **Trova**.

1. Nella casella **Trova** selezionare una stringa di ricerca precedente dall'elenco a discesa oppure digitare il testo della didascalia o l'identificatore di risorsa della stringa che si desidera trovare.

1. Selezionare una delle opzioni **Trova** e selezionare **Trova successivo**.

> [!TIP]
> Per utilizzare [le espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) durante la ricerca dei file, utilizzare il comando Trova nei **file** del menu **Modifica.**
>
> Digitare un'espressione regolare che corrisponda a un criterio o selezionare il pulsante a destra della casella **Trova** per visualizzare un elenco di espressioni di ricerca regolari. Quando si seleziona un'espressione da questo elenco, questa viene sostituita come testo di ricerca nella casella **Trova.**
>
> Se si utilizzano espressioni regolari, assicurarsi che la casella di controllo **Usa: Espressioni regolari** sia selezionata.

### <a name="to-add-or-delete-a-string-resource"></a>Per aggiungere o eliminare una risorsa di tipo stringaTo add or delete a string resource

È possibile inserire o eliminare rapidamente voci nella tabella di stringhe utilizzando **l'Editor di**stringhe . Le nuove stringhe vengono inserite alla fine della tabella e viene assegnato il successivo identificatore disponibile. È possibile modificare le proprietà **ID**, **Value**o **Caption** nella [finestra Proprietà](/visualstudio/ide/reference/properties-window) in base alle esigenze.

**L'editor di** stringhe assicura che non si utilizza un ID che è già in uso. Se si seleziona un ID già in uso, l'Editor **di** stringhe `IDS_STRING58113`invierà una notifica e quindi assegnerà un ID univoco generico, ad esempio .

#### <a name="to-add-a-string-table-entry"></a>Per aggiungere una voce di tabella di stringheTo add a string table entry

1. Aprire la tabella di stringhe facendo doppio clic sulla relativa icona in [Visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Fare clic con il pulsante destro del mouse all'interno della tabella di stringhe e scegliere **Nuova stringa**.

1. **Nell'Editor stringhe**, selezionare un **ID** dall'elenco a discesa **ID** o digitare un *ID* direttamente sul posto.

1. Modificare il **valore**, se necessario.

1. Digitare una voce per **La didascalia**.

   > [!NOTE]
   > Le stringhe Null non sono consentite nelle tabelle di stringhe di Windows.Null strings aren't allowed in Windows string tables. Se si crea una voce nella tabella di stringhe che è una stringa null, verrà visualizzato un messaggio che richiede di **immettere una stringa per questa voce della tabella**.

#### <a name="to-delete-a-string-table-entry"></a>Per eliminare una voce di tabella di stringheTo delete a string table entry

Selezionare la voce che si desidera eliminare ed eseguire una delle operazioni seguenti:

- Vai al menu **Modifica** > **Elimina**.

- Fare clic con il pulsante destro del mouse sulla stringa da eliminare e scegliere **Elimina**.

- Premere il tasto **Canc.**

### <a name="to-move-a-string-from-one-resource-script-file-to-another"></a>Per spostare una stringa da un file di script di risorsa a un altroTo move a string from one resource script file to another

1. [Aprire le tabelle di stringhe in entrambi i file RC.](../windows/how-to-create-a-resource-script-file.md)

1. Fare clic con il pulsante destro del mouse sulla stringa da spostare e scegliere **Taglia**.

1. Posizionare il cursore nella finestra **dell'editor di stringhe** di destinazione.

1. Nel file *RC* in cui si desidera spostare la stringa fare clic con il pulsante destro del mouse e scegliere **Incolla**.

> [!NOTE]
> Se **l'ID** o il **valore** della stringa spostata è in conflitto con un **ID** o un **valore** esistente nel file di destinazione, tale **ID** o il **valore** della stringa spostata viene modificato.

### <a name="to-change-the-properties-of-a-string-resource"></a>Per modificare le proprietà di una risorsa di tipo stringaTo change the properties of a string resource

È possibile utilizzare la modifica sul posto per modificare le proprietà **ID**, **Value**e **Caption** .

> [!NOTE]
> È inoltre possibile modificare le proprietà di una stringa nella [finestra Proprietà](/visualstudio/ide/reference/properties-window).

#### <a name="to-change-a-string-or-its-identifier"></a>Per modificare una stringa o il relativo identificatoreTo change a string or its identifier

1. Aprire la tabella di stringhe facendo doppio clic sulla relativa icona in [Visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare la stringa da modificare e fare doppio clic sulla colonna **ID**, **Valore**o **Didascalia,** quindi è possibile:

   - Selezionare un **ID** dall'elenco a discesa **ID** o digitare un *ID* direttamente sul posto.

   - Digitare un numero diverso nella colonna **Valore.**

   - Digitare le modifiche nella colonna **Didascalia.**

#### <a name="to-change-the-caption-property-of-multiple-string-resources"></a>Per modificare la proprietà caption di più risorse stringaTo change the caption property of multiple string resources

1. Aprire la tabella di stringhe facendo doppio clic sulla relativa icona in [Visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare le stringhe che si desidera modificare tenendo premuto il **tasto Ctrl** mentre si seleziona ciascuna di esse.

1. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)digitare un nuovo valore per la proprietà che si desidera modificare.

1. Premere **INVIO**.

### <a name="to-add-formatting-or-special-characters-to-a-string-resource"></a>Per aggiungere formattazione o caratteri speciali a una risorsa stringaTo add formatting or special characters to a string resource

1. Aprire la tabella di stringhe facendo doppio clic sulla relativa icona in [Visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare la stringa che si desidera modificare.

1. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)aggiungere una delle sequenze di escape standard elencate di seguito al testo nella casella **Didascalia** e premere **INVIO**.

   |Per avere questo...|Digita questo...|
   |-----------------|---------------|
   | Nuova riga | \\n |
   | Ritorno a capo | \\R |
   | Scheda | \\t |
   | Barra rovesciata (\\) | \\\\ |
   | Carattere ASCII | \\ddd (notazione ottale) |
   | Allarme (campana) | \\a |

   > [!NOTE]
   > **L'editor di** stringhe non supporta il set completo di caratteri ASCI con caratteri di escape. È possibile utilizzare solo quelli sopra elencati.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Stringhe degli editor di risorseResource Editors](../windows/resource-editors.md)
[Strings](/windows/win32/menurc/strings)<br/>
[Informazioni sulle stringhe](/windows/win32/menurc/about-strings)<br/>
[Personalizzazione del layout della finestra](/visualstudio/ide/customizing-window-layouts-in-visual-studio)
