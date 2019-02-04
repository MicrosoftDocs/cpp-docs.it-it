---
title: Editor stringhe (C++)
ms.date: 11/04/2016
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
ms.openlocfilehash: 24e4e6ba5b9c2dff1a179bea39830f4a3bbe5879
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55702979"
---
# <a name="string-editor-c"></a>Editor stringhe (C++)

Una tabella di stringhe è una risorsa di Windows che contiene un elenco di ID, valori e didascalie per tutte le stringhe dell'applicazione. Ad esempio, nella tabella di stringhe sono contenuti i prompt della barra di stato.

Quando si sviluppa un'applicazione possono essere presenti più tabelle di stringhe, uno per ogni lingua o condizione. Un modulo eseguibile, invece, ha una sola tabella di stringhe. Un'applicazione in esecuzione può fare riferimento a più tabelle di stringhe se le tabelle vengano inserite in DLL diverse.

Le tabelle di stringhe semplificano la localizzazione dell'applicazione in diverse lingue. Se tutte le stringhe si trovano in una tabella di stringhe, è possibile localizzare l'applicazione traducendo le stringhe e altre risorse senza modificare il codice sorgente. Questa situazione è più vantaggiosa manualmente ricerca e sostituzione di varie stringhe nei file di origine.

Per informazioni sull'aggiunta di risorse a progetti gestiti (progetti destinati a common language runtime), vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [procedura dettagliata: Localizzazione di Windows Form](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3).

Usare la **stringa** editor per le azioni seguenti:

## <a name="to-find-a-string-resource-in-the-string-table"></a>Per trovare una risorsa stringa nella tabella di stringhe

È possibile eseguire la ricerca di una o più stringhe nella tabella di stringhe e usare [le espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) con il **Cerca nei file** comando (**Edit** menu) per individuare tutte le istanze di stringhe che corrispondono a un criterio.

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel **Edit** dal menu **Trova e sostituisci**, quindi scegliere **trovare**.

1. Nel **Find What** , selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare l'identificatore didascalia di testo o della risorsa della stringa da trovare.

1. Selezionare una qualsiasi delle **trovare** opzioni.

1. Selezionare **Trova successivo**.

   > [!TIP]
   > Per usare le espressioni regolari nella ricerca nei file, usare il **Cerca nei file** comando. Digitare un'espressione regolare per corrispondono a un criterio o selezionare il pulsante a destra del **Find What** casella per visualizzare un elenco di espressioni regolari di ricerca. Quando si seleziona un'espressione da questo elenco, viene sostituita come testo di ricerca nella **Find What** casella. Se si utilizzano espressioni regolari, assicurarsi di **usare: Le espressioni regolari** casella di controllo è selezionata.

## <a name="to-add-or-delete-a-string-resource"></a>Per aggiungere o eliminare una risorsa di stringa

Rapidamente è possibile inserire o eliminare le voci nella tabella stringa tramite il **stringa** editor. Nuove stringhe vengono posizionate alla fine della tabella e vengono assegnate l'identificatore successivo disponibile. È quindi possibile modificare il **ID**, **valore**, o **didascalia** le proprietà nel [finestra proprietà](/visualstudio/ide/reference/properties-window) in base alle esigenze.

Il **stringa** editor garantisce che non si usa un ID che è già in uso. Se si seleziona un ID già in uso, il **stringa** editor sarà ricevere una notifica e quindi assegnare un ID univoco di tipo generico, ad esempio `IDS_STRING58113`.

### <a name="to-add-a-string-table-entry"></a>Per aggiungere una voce di tabella di stringhe

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Fare doppio clic all'interno della tabella di stringhe e scegliere **NewString** dal menu di scelta rapida.

1. Nel **stringa** editor, selezionare un' **ID** dall'elenco di ID elenco a discesa o digitare ID direttamente posto.

1. Modificare il **valore**, se necessario.

1. Digitare una voce per il **didascalia**.

   > [!NOTE]
   > Stringhe null non sono consentite nelle tabelle di stringhe di Windows. Se si crea una voce nella tabella di stringhe che è una stringa null, si riceverà un messaggio che chiede di "Immettere una stringa per questa voce di tabella".

### <a name="to-delete-a-string-table-entry"></a>Per eliminare una voce della tabella di stringhe

1. Selezionare la voce che si vuole eliminare.

1. Nel **Edit** dal menu **eliminare**.

\- oppure -

 Fare doppio clic la stringa di cui si desidera eliminare e scegliere **Elimina** dal menu di scelta rapida.

\- oppure -

 Premere il **eliminare** chiave.

## <a name="to-move-a-string-from-one-resource-script-file-to-another"></a>Per spostare una stringa dal file di script una sola risorsa a un altro

1. Aprire le tabelle di stringhe in entrambi i file RC. (Per altre informazioni, vedere [visualizzazione di risorse in un File di Script di risorsa all'esterno di un progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).)

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Fare doppio clic la stringa di cui si desidera spostare e scegliere **Taglia** dal menu di scelta rapida.

1. Posizionare il cursore nel database di destinazione **Editor stringhe** finestra.

1. Nel file RC a cui si desidera spostare la stringa, pulsante destro del mouse e scegliere **Incolla** dal menu di scelta rapida.

   > [!NOTE]
   > Se il **ID** o **valore** conflitti stringa spostato con un oggetto esistente **ID** oppure **valore** nel file di destinazione, entrambi i **ID** o il **valore** delle modifiche stringa spostata. Se esiste una stringa con lo stesso **ID**, il **ID** delle modifiche stringa spostata. Se esiste una stringa con lo stesso **valore**, il **valore** delle modifiche stringa spostata.

## <a name="to-change-the-properties-of-a-string-resource"></a>Per modificare le proprietà di una risorsa stringa

Per modificare l'ID, value e le proprietà delle didascalie, è possibile usare la modifica sul posto.

### <a name="to-change-a-string-or-its-identifier"></a>Modificare il relativo identificatore o una stringa

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Selezionare la stringa di cui si desidera modificare e fare doppio clic il **ID**, **valore**, o **didascalia** colonna. È ora possibile:

   - Selezionare un **ID** dalle **elenco a discesa ID** elenco o digitare un `ID` direttamente sul posto.

   - Digitare un numero diverso nel **valore** colonna.

   - Digitare le modifiche apportate nel **didascalia** colonna.

        > [!NOTE]
        >  È anche possibile modificare le proprietà della stringa nel [finestra proprietà](/visualstudio/ide/reference/properties-window).

### <a name="to-change-the-caption-property-of-multiple-string-resources"></a>Per modificare la proprietà caption di più risorse di tipo stringa

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Selezionare le stringhe che si desidera modificare, tenere premuti i **Ctrl** della chiave per la selezione di ognuno di essi.

1. Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), digitare un nuovo valore della proprietà da modificare.

1. Premere **INVIO**.

## <a name="to-add-formatting-or-special-characters-to-a-string-resource"></a>Aggiungere caratteri speciali o di formattazione a una risorsa stringa

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Selezionare la stringa da modificare.

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), aggiungere una delle sequenze di escape standard elencati di seguito per il testo nel **didascalia** , quindi premere **invio**.

   |Per ottenere questo|Digitare quanto segue|
   |-----------------|---------------|
   | Nuova riga | \\n |
   | Ritorno a capo | \\r |
   | Scheda | \\t |
   | Barra rovesciata (\\) | \\\\ |
   | Carattere ASCII | \\ddd (notazione ottale) |
   | avviso (campana) | \\a |

> [!NOTE]
> Il **stringa** editor non supporta il set completo di ASCII di caratteri di escape. È possibile utilizzare solo quelle elencate in precedenza.

> [!NOTE]
> Windows non consente la creazione di tabelle di stringhe vuote. Se si crea una tabella di stringhe priva di voci, questa verrà eliminata automaticamente al salvataggio del file di risorse.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Stringhe](https://msdn.microsoft.com/library/windows/desktop/ms646979.aspx)<br/>
[Informazioni sulle stringhe](/windows/desktop/menurc/about-strings)<br/>
[Personalizzazione del layout delle finestre](/visualstudio/ide/customizing-window-layouts-in-visual-studio)