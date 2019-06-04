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
ms.openlocfilehash: e596aa475f0fb08609a0772ecc3f8a302e849275
ms.sourcegitcommit: ecf274bcfe3a977c48745aaa243e5e731f1fdc5f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2019
ms.locfileid: "66504812"
---
# <a name="string-editor-c"></a>Editor stringhe (C++)

Una tabella di stringhe è una risorsa di Windows che contiene un elenco di ID, valori e didascalie per tutte le stringhe dell'applicazione. Ad esempio, nella tabella di stringhe sono contenuti i prompt della barra di stato.

Quando si sviluppa un'applicazione possono essere presenti più tabelle di stringhe, uno per ogni lingua o condizione. Un modulo eseguibile, invece, ha una sola tabella di stringhe. Un'applicazione in esecuzione può fare riferimento a più tabelle di stringhe se le tabelle vengano inserite in DLL diverse.

Le tabelle di stringhe semplificano la localizzazione dell'applicazione in diverse lingue. Se tutte le stringhe si trovano in una tabella di stringhe, è possibile localizzare l'applicazione traducendo le stringhe e altre risorse senza modificare il codice sorgente. Questa situazione è più vantaggiosa manualmente ricerca e sostituzione di varie stringhe nei file di origine.

> [!NOTE]
> Windows non consente la creazione di tabelle di stringhe vuota. Se si crea una tabella di stringhe priva di voci, questa verrà eliminata automaticamente al salvataggio del file di risorse.

## <a name="how-to"></a>Procedure

Il **Editor stringhe** consente di:

### <a name="to-find-a-string-resource-in-the-string-table"></a>Per trovare una risorsa stringa nella tabella di stringhe

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Passare al menu di scelta **Edit** > **Trova e sostituisci** e scegliere **trovare**.

1. Nel **Find What** casella, selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare l'identificatore didascalia di testo o della risorsa della stringa da trovare.

1. Selezionare una qualsiasi delle **trovare** opzioni e selezionare **Trova successivo**.

> [!TIP]
> Per usare [espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) quando si esegue la ricerca di file, usare il **Cerca nei file** comando il **modifica** menu.
>
> Digitare un'espressione regolare per corrispondono a un criterio o selezionare il pulsante a destra del **Find What** casella per visualizzare un elenco di espressioni regolari di ricerca. Quando si seleziona un'espressione da questo elenco, viene sostituita come testo di ricerca nella **Find What** casella.
>
> Se si utilizzano espressioni regolari, assicurarsi di **usare: Le espressioni regolari** casella di controllo è selezionata.

### <a name="to-add-or-delete-a-string-resource"></a>Per aggiungere o eliminare una risorsa di stringa

Rapidamente è possibile inserire o eliminare le voci nella tabella stringa tramite il **Editor stringhe**. Nuove stringhe vengono posizionate alla fine della tabella e vengono assegnate l'identificatore successivo disponibile. È possibile modificare il **ID**, **valore**, o **didascalia** le proprietà nel [finestra proprietà](/visualstudio/ide/reference/properties-window) in base alle esigenze.

Il **Editor stringhe** garantisce che non si usa un ID che è già in uso. Se si seleziona un ID già in uso, il **Editor stringhe** verranno ricevere una notifica e quindi assegnare un ID univoco di tipo generico, ad esempio `IDS_STRING58113`.

#### <a name="to-add-a-string-table-entry"></a>Per aggiungere una voce di tabella di stringhe

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Fare doppio clic all'interno della tabella di stringhe e scegliere **NewString**.

1. Nel **Editor stringhe**, selezionare un' **ID** dal **ID** elenco di riepilogo a discesa o digitare un *ID* direttamente sul posto.

1. Modificare il **valore**, se necessario.

1. Digitare una voce per il **didascalia**.

   > [!NOTE]
   > Stringhe null non sono consentite nelle tabelle di stringhe di Windows. Se si crea una voce nella tabella di stringhe che è una stringa null, si riceverà un messaggio che chiede poter **immettere una stringa per questa voce di tabella**.

#### <a name="to-delete-a-string-table-entry"></a>Per eliminare una voce della tabella di stringhe

Selezionare la voce che si desidera eliminare ed eseguire una delle operazioni seguenti:

- Passare al menu di scelta **Edit** > **eliminare**.

- Fare doppio clic la stringa da eliminare e scegliere **Elimina**.

- Premere il **eliminare** chiave.

### <a name="to-move-a-string-from-one-resource-script-file-to-another"></a>Per spostare una stringa dal file di script una sola risorsa a un altro

1. [Aprire le tabelle di stringhe in entrambi i file RC](../windows/how-to-create-a-resource-script-file.md).

1. Fare doppio clic su per spostare e scegliere la stringa **Taglia**.

1. Posizionare il cursore nel database di destinazione **Editor stringhe** finestra.

1. Nel *RC* file a cui si desidera spostare la stringa, pulsante destro del mouse e scegliere **Incolla**.

> [!NOTE]
> Se il **ID** o **valore** conflitti stringa spostato con un oggetto esistente **ID** oppure **valore** nel file di destinazione, entrambi tale **ID** o il **valore** delle modifiche stringa spostata.

### <a name="to-change-the-properties-of-a-string-resource"></a>Per modificare le proprietà di una risorsa stringa

È possibile usare la modifica sul posto per modificare la **ID**, **valore**, e **didascalia** proprietà.

> [!NOTE]
>  È anche possibile modificare le proprietà della stringa nel [finestra proprietà](/visualstudio/ide/reference/properties-window).

#### <a name="to-change-a-string-or-its-identifier"></a>Modificare il relativo identificatore o una stringa

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare la stringa di cui si desidera modificare e fare doppio clic il **ID**, **valore**, o **didascalia** colonna, quindi è possibile:

   - Selezionare un **ID** dalle **ID** elenco a discesa elenco o digitare un *ID* direttamente sul posto.

   - Digitare un numero diverso nel **valore** colonna.

   - Digitare le modifiche apportate nel **didascalia** colonna.

#### <a name="to-change-the-caption-property-of-multiple-string-resources"></a>Per modificare la proprietà caption di più risorse di tipo stringa

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare le stringhe che si desidera modificare, tenere premuti i **Ctrl** della chiave per la selezione di ognuno di essi.

1. Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), digitare un nuovo valore della proprietà da modificare.

1. Premere **INVIO**.

### <a name="to-add-formatting-or-special-characters-to-a-string-resource"></a>Aggiungere caratteri speciali o di formattazione a una risorsa stringa

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare la stringa da modificare.

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), aggiungere una delle sequenze di escape standard elencati di seguito per il testo nel **didascalia** casella e premere **invio**.

   |Per ottenere questo...|Digitare quanto segue...|
   |-----------------|---------------|
   | Nuova riga | \\n |
   | Ritorno a capo | \\r |
   | Scheda | \\t |
   | Barra rovesciata (\\) | \\\\ |
   | Carattere ASCII | \\ddd (notazione ottale) |
   | avviso (campana) | \\a |

   > [!NOTE]
   > Il **Editor stringhe** non supporta il set completo di ASCII di caratteri di escape. È possibile utilizzare solo quelle elencate in precedenza.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)
[stringhe](/windows/desktop/menurc/strings)<br/>
[Informazioni sulle stringhe](/windows/desktop/menurc/about-strings)<br/>
[Personalizzazione del layout delle finestre](/visualstudio/ide/customizing-window-layouts-in-visual-studio)