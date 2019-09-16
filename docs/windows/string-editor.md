---
title: Editor stringhe (C++)
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
ms.openlocfilehash: 996e5f132e5cfa33c39c4cc3ddbeb692f41925bc
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514722"
---
# <a name="string-editor-c"></a>Editor stringhe (C++)

Una tabella di stringhe è una risorsa di Windows che contiene un elenco di ID, valori e didascalie per tutte le stringhe dell'applicazione. Ad esempio, nella tabella di stringhe sono contenuti i prompt della barra di stato.

Quando si sviluppa un'applicazione possono essere presenti più tabelle di stringhe, uno per ogni lingua o condizione. Un modulo eseguibile, invece, ha una sola tabella di stringhe. Un'applicazione in esecuzione può fare riferimento a più tabelle di stringhe se le tabelle vengano inserite in DLL diverse.

Le tabelle di stringhe semplificano la localizzazione dell'applicazione in diverse lingue. Se tutte le stringhe si trovano in una tabella di stringhe, è possibile localizzare l'applicazione traducendo le stringhe e altre risorse senza modificare il codice sorgente. Questa situazione è più auspicabile rispetto alla ricerca manuale e alla sostituzione di varie stringhe nei file di origine.

> [!NOTE]
> Windows non consente la creazione di tabelle di stringhe vuote. Se si crea una tabella di stringhe priva di voci, questa verrà eliminata automaticamente al salvataggio del file di risorse.

## <a name="how-to"></a>Procedure

L' **editor di stringhe** consente di:

### <a name="to-find-a-string-resource-in-the-string-table"></a>Per trovare una risorsa stringa nella tabella di stringhe

1. Aprire la tabella delle stringhe facendo doppio clic sull'icona in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Andare al menu **modifica** > **trova e Sostituisci** e scegliere **trova**.

1. Nella casella **trova** selezionare una stringa di ricerca precedente dall'elenco a discesa oppure digitare il testo della didascalia o l'identificatore della risorsa della stringa che si desidera trovare.

1. Selezionare una delle opzioni **trova** e selezionare **Trova successivo**.

> [!TIP]
> Per utilizzare le [espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) per la ricerca di file, utilizzare il comando **Cerca nei file** nel menu **modifica** .
>
> Digitare un'espressione regolare per trovare la corrispondenza con un modello oppure selezionare il pulsante a destra della casella **trova** per visualizzare un elenco di espressioni di ricerca regolari. Quando si seleziona un'espressione da questo elenco, viene sostituito come testo di ricerca nella casella **trova** .
>
> Se si usano le espressioni regolari, assicurarsi di **usare: È selezionata** la casella di controllo espressioni regolari.

### <a name="to-add-or-delete-a-string-resource"></a>Per aggiungere o eliminare una risorsa di stringa

È possibile inserire o eliminare rapidamente voci nella tabella di stringhe usando l' **editor di stringhe**. Le nuove stringhe vengono posizionate alla fine della tabella a cui viene assegnato il successivo identificatore disponibile. È possibile modificare le proprietà **ID**, **valore**o **didascalia** nel [finestra Proprietà](/visualstudio/ide/reference/properties-window) in base alle esigenze.

L' **editor di stringhe** verifica che non venga usato un ID già in uso. Se si seleziona un ID già in uso, l' **editor di stringhe** invierà una notifica e quindi si assegnerà un ID univoco `IDS_STRING58113`generico, ad esempio.

#### <a name="to-add-a-string-table-entry"></a>Per aggiungere una voce della tabella di stringhe

1. Aprire la tabella delle stringhe facendo doppio clic sull'icona in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Fare clic con il pulsante destro del mouse all'interno della tabella delle stringhe e scegliere **nuova stringa**.

1. Nell' **editor di stringhe**selezionare un **ID** nell'elenco a discesa **ID** oppure digitare un *ID* direttamente sul posto.

1. Modificare il **valore**, se necessario.

1. Digitare una voce per la **didascalia**.

   > [!NOTE]
   > Le stringhe null non sono consentite nelle tabelle di stringhe di Windows. Se si crea una voce nella tabella di stringhe che è una stringa null, verrà visualizzato un messaggio in cui viene chiesto di **immettere una stringa per la voce della tabella**.

#### <a name="to-delete-a-string-table-entry"></a>Per eliminare una voce della tabella di stringhe

Selezionare la voce che si desidera eliminare ed eseguire una delle operazioni seguenti:

- Vai a menu **modifica** > **Elimina**.

- Fare clic con il pulsante destro del mouse sulla stringa da eliminare e scegliere **Elimina**.

- Premere il tasto **Canc** .

### <a name="to-move-a-string-from-one-resource-script-file-to-another"></a>Per spostare una stringa da un file di script di risorsa a un altro

1. [Aprire le tabelle di stringhe in entrambi i file RC](../windows/how-to-create-a-resource-script-file.md).

1. Fare clic con il pulsante destro del mouse sulla stringa da spostare e scegliere **taglia**.

1. Posizionare il cursore nella finestra **Editor stringa** di destinazione.

1. Nel file *RC* in cui si desidera spostare la stringa, fare clic con il pulsante destro del mouse e scegliere **Incolla**.

> [!NOTE]
> Se l' **ID** o il **valore** della stringa spostata è in conflitto con un **ID** o un **valore** esistente nel file di destinazione, viene modificato l' **ID** o il **valore** della stringa spostata.

### <a name="to-change-the-properties-of-a-string-resource"></a>Per modificare le proprietà di una risorsa di stringa

Per modificare le proprietà **ID**, **valore**e **didascalia** , è possibile usare la modifica sul posto.

> [!NOTE]
>  È anche possibile modificare le proprietà di una stringa nel [finestra Proprietà](/visualstudio/ide/reference/properties-window).

#### <a name="to-change-a-string-or-its-identifier"></a>Per modificare una stringa o il relativo identificatore

1. Aprire la tabella delle stringhe facendo doppio clic sull'icona in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare la stringa che si desidera modificare e fare doppio clic sulla colonna **ID**, **valore**o **didascalia** , quindi è possibile:

   - Selezionare un **ID** nell'elenco a discesa **ID** oppure digitare un *ID* direttamente sul posto.

   - Digitare un numero diverso nella colonna **valore** .

   - Digitare le modifiche nella colonna **didascalia** .

#### <a name="to-change-the-caption-property-of-multiple-string-resources"></a>Per modificare la proprietà Caption di più risorse di stringa

1. Aprire la tabella delle stringhe facendo doppio clic sull'icona in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare le stringhe che si desidera modificare tenendo premuto il tasto **CTRL** mentre si seleziona ciascuna di esse.

1. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)Digitare un nuovo valore per la proprietà che si desidera modificare.

1. Premere **INVIO**.

### <a name="to-add-formatting-or-special-characters-to-a-string-resource"></a>Per aggiungere la formattazione o i caratteri speciali a una risorsa di stringa

1. Aprire la tabella delle stringhe facendo doppio clic sull'icona in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare la stringa che si desidera modificare.

1. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)aggiungere una delle sequenze di escape standard elencate di seguito al testo nella casella **didascalia** e premere **invio**.

   |Per ottenere questo...|Digitare questo...|
   |-----------------|---------------|
   | Nuova riga | \\n |
   | Ritorno a capo | \\r |
   | TAB | \\t |
   | Barra rovesciata (\\) | \\\\ |
   | Carattere ASCII | \\ddd (notazione ottale) |
   | Avviso (campana) | \\un |

   > [!NOTE]
   > L' **editor di stringhe** non supporta il set completo di caratteri ASCI di escape. È possibile usare solo quelli elencati in precedenza.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)
[Stringhe](/windows/win32/menurc/strings)<br/>
[Informazioni sulle stringhe](/windows/win32/menurc/about-strings)<br/>
[Personalizzazione del layout delle finestre](/visualstudio/ide/customizing-window-layouts-in-visual-studio)