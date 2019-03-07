---
title: Accelerator Editor (C++)
ms.date: 02/14/2019
f1_keywords:
- vc.editors.accelerator.F1
- vc.editors.accelerator
helpviewer_keywords:
- accelerator tables [C++], editing
- tables [C++], accelerator key
- accelerator keys [C++]
- resource editors [C++], Accelerator editor
- keyboard shortcuts [C++], Accelerator editor
- accelerator properties
- properties [C++], accelerator properties
- Type property
- Key property
- Modifier property
- VIRTKEY
- Key property
- ID property
- accelerator tables [C++], editing
- keyboard shortcuts [C++], editing in an accelerator table
- searching, in accelarator tables
- accelerator tables [C++], finding entries
- accelerator tables [C++], adding entries
- New Accelerator command
- accelerator tables [C++], deleting entries
- keyboard shortcuts [C++], deleting entry from accelerator table
- accelerator tables [C++], copying entries
- rc files [C++], moving an accelerator table entry
- .rc files [C++], moving accelerator table entries
- accelerator tables [C++], moving entries
- keyboard shortcuts [C++], property changing
- accelerator tables [C++], changing properties
ms.assetid: 013c30b6-5d61-4f1c-acef-8bd15bed7060
ms.openlocfilehash: f57c09d549a4ceb92db21c06499b4f6e71fc6a52
ms.sourcegitcommit: b4645761ce5acf8c2fc7a662334dd5a471ea976d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/07/2019
ms.locfileid: "57562940"
---
# <a name="accelerator-editor-c"></a>Accelerator Editor (C++)

Una tabella di tasti di scelta rapida è una risorsa di Windows C++ che contiene un elenco di tasti di scelta rapida, noto come tasti di scelta rapida e gli identificatori di comandi che sono associati ad essi. Un programma può avere più tabelle di tasti di scelta rapida.

In genere i tasti di scelta rapida vengono usati per i comandi di programma disponibili anche in un menu o in una barra degli strumenti. Tuttavia, è possibile usare la tabella di tasti di scelta rapida per definire le combinazioni di tasti per i comandi che non hanno un oggetto dell'interfaccia utente associato.

> [!TIP]
> Quando si usa la **tasti di scelta rapida Editor**, pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi frequenti. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il puntatore.

È possibile usare [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) per associare i comandi dei tasti di scelta rapida al codice. Per un elenco dei tasti di scelta rapida predefiniti, vedere [tasti di scelta rapida](../windows/predefined-accelerator-keys.md).

> [!NOTE]
> Windows non consente la creazione di tabelle di tasti di scelta rapida vuote. Se si crea una tabella di tasti di scelta rapida priva di voci, questa verrà eliminata automaticamente al salvataggio della tabella.

## <a name="accelerator-properties"></a>Tasti di scelta rapida proprietà

È possibile impostare le proprietà di tasti di scelta rapida nel [finestra proprietà](/visualstudio/ide/reference/properties-window) in qualsiasi momento. È anche possibile usare la **tasti di scelta rapida Editor** per modificare le proprietà di tasti di scelta rapida della tabella di tasti di scelta rapida. Le modifiche apportate utilizzando la **delle proprietà** finestra o il **Editor tasti di scelta rapida** hanno lo stesso risultato, le modifiche vengono applicate immediatamente nella tabella di tasti di scelta rapida.

Il **ID** proprietà fa riferimento a ogni voce della tabella di tasti di scelta rapida nel codice del programma. Questa voce è il valore del comando che il programma riceve quando l'utente preme il tasto di scelta rapida o una combinazione di tasti. Per rendere un acceleratore quello utilizzato per una voce di menu, verificare i **ID** lo stesso, a condizione che il **ID** del tasto di scelta rapida tabella corrisponde al **ID** per la risorsa di menu.

Ogni acceleratore **ID** dispone di tre proprietà: **Modificatore**, **chiave**, e **tipo**

Il **modificatore** proprietà imposta controllo combinazioni per il tasto di scelta rapida.

> [!NOTE]
> Nel **delle proprietà** finestra, il **modificatore** proprietà viene visualizzato come separato tre **booleano** proprietà, ognuno dei quali può essere controllata in modo indipendente: **ALT**, **Ctrl**, e **MAIUSC**.

Di seguito sono le voci legali per la **modificatore** proprietà nella tabella di tasti di scelta rapida:

   |Value|Descrizione|
   |-----------|-----------------|
   |**None**|Utente preme solo il **chiave** valore.<br/><br/>Questo valore viene utilizzato in modo più efficace con i valori ASCII/ANSI 001 tramite 026, che viene interpretato come ^ dalla alla ^ Z (**Ctrl + B** attraverso **Ctrl + Z**).|
   |**ALT**|L'utente deve premere **Alt** prima di **chiave** valore.|
   |**CTRL**|L'utente deve premere **Ctrl** prima di **chiave** valore, non valida con tipo ASCII.|
   |**MAIUSC**|L'utente deve premere **Shift** prima di **chiave** valore.|
   |**Ctrl + Alt**|L'utente deve premere **Ctrl** e **Alt** prima il **chiave** valore, non valida con tipo ASCII.|
   |**CTRL + MAIUSC**|L'utente deve premere **Ctrl** e **MAIUSC** prima il **chiave** valore, non valida con tipo ASCII.|
   |**ALT + MAIUSC**|L'utente deve premere **Alt** e **MAIUSC** prima il **chiave** valore, non valida con tipo ASCII.|
   |**Ctrl + Alt + Maiusc**|L'utente deve premere **Ctrl**, **Alt**, e **MAIUSC** prima il **chiave** valore, non valida con tipo ASCII.|

Il **chiave** proprietà imposta il tasto effettivo da usare come tasto di scelta rapida.

Di seguito sono le voci legali per la **chiave** proprietà nella tabella di tasti di scelta rapida:

   |Value|Descrizione|
   |-----------|-----------------|
   |Numero intero compreso tra 0 e 255 in formato decimale.|Il valore determina se il valore viene trattato come ASCII o ANSI come indicato di seguito:<br/><br/>   -Cifra numeri vengono sempre interpretati come la chiave corrispondente, anziché come valori ASCII o ANSI.<br/>   -I valori da 1 a 26, preceduti da zero, vengono interpretati come ^ dalla alla ^ Z, che rappresenta il valore ASCII delle lettere dell'alfabeto se premuto con il **Ctrl** tasto mantenuto premuto.<br/>   -I valori da 27 a 32 vengono sempre interpretati come valori decimali a tre cifre 027 e 032.<br/>   -I valori da 033 a 255, preceduto da 0 o non vengono interpretati come valori ANSI.|
   |Un singolo carattere della tastiera.|Caratteri maiuscoli A - Z o i numeri da 0 - 9 può essere ASCII o i valori di chiave virtuali. Qualsiasi altro carattere è solo ASCII.|
   |Un singolo carattere della tastiera nell'intervallo A - Z (lettere solo), preceduto da un accento circonflesso (^), ad esempio ^ C.|Questa opzione inserisce il valore ASCII della chiave quando viene premuto con il **Ctrl** tasto mantenuto premuto.|
   |Qualsiasi identificatore di chiave virtuale valido.|Elenco a discesa **chiave** nella tabella di tasti di scelta rapida finestra contiene un elenco di identificatori di chiave virtuali standard.|

> [!NOTE]
> Quando si immette un valore ASCII, il **modificatore** opzioni delle proprietà sono limitate. È l'unica chiave di controllo disponibile per l'uso di **Alt** chiave.

> [!TIP]
> Un collegamento per definire un tasto di scelta rapida consiste nella scelta di una voce o più voci nella tabella di tasti di scelta rapida, quindi scegliere **digita** premere una delle chiavi o combinazioni di tasti sulla tastiera.
>
> Ciò **digita** comando è disponibile anche la **modificare** menu.

Il **tipo** proprietà determina se la combinazione di tasti di scelta rapida associato all'acceleratore **ID** viene interpretato come una combinazione di tasto virtuale (VIRTKEY) o un valore di chiave ASCII/ANSI.

- Se il **tipo** è di proprietà **ASCII**, il **modificatore** proprietà può essere solo `None` o `Alt`, oppure può avere un acceleratore che utilizza il **Ctrl** principali, come specificato dalle precedenti la chiave con un `^`.

- Se il **tipo** è di proprietà **VIRTKEY**, qualsiasi combinazione delle **modificatore** e **chiave** valori è valido.

> [!NOTE]
> Se si desidera immettere un valore nella tabella di tasti di scelta rapida e ha il valore considerato come ASCII/ANSI, selezionare la **tipo** per la voce nella tabella e selezionare **ASCII** nell'elenco a discesa. Tuttavia, se si usa il **digita** dal **modifica** menu per specificare il **chiave**, è necessario modificare il **tipo** proprietà da **VIRTKEY** al **ASCII** *prima* immettendo il **chiave** codice.

## <a name="accelerator-tables"></a>Tabelle di tasti di scelta rapida

In un progetto C++, è possibile modificare una tabella di tasti di scelta rapida direttamente con la modifica sul posto nel **tasti di scelta rapida Editor**.

Le procedure seguenti si riferiscono all'uso delle pagine delle proprietà standard, tuttavia, la modifica sul posto e il metodo di pagina di proprietà hanno lo stesso risultato. Le modifiche apportate utilizzando le pagine delle proprietà o la modifica sul posto vengono applicate immediatamente nella tabella di tasti di scelta rapida.

### <a name="to-edit-in-an-accelerator-table"></a>Per eseguire una modifica in una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](/windows/how-to-create-a-resource-script-file#create-resources).

1. Selezionare una voce nella tabella e selezionare questa opzione per attivare la modifica sul posto.

1. Selezionare la casella combinata a discesa oppure digitare sul posto per apportare modifiche:

   - Per la **ID**, selezionarlo dall'elenco o digitarlo per apportare modifiche.

   - Per la **modificatore**selezionare dall'elenco.

   - Per la **chiave**, selezionarlo dall'elenco o digitarlo per apportare modifiche.

   - Per la **tipo**, selezionare **ASCII** oppure **VIRTKEY** dall'elenco.

### <a name="to-find-an-entry-in-an-open-accelerator-table"></a>Per cercare una voce in una tabella dei tasti di scelta rapida aperta

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](/windows/how-to-create-a-resource-script-file#create-resources).

1. Selezionare un'intestazione di colonna per ordinare il contenuto della colonna in ordine alfabetico. Ad esempio, selezionare **ID** per visualizzare tutti gli ID della tabella dei tasti di scelta rapida in ordine alfabetico.

   È quindi possibile analizzare l'elenco e individuare la voce.

### <a name="to-add-an-entry-to-an-accelerator-table"></a>Per aggiungere una voce a una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](/windows/how-to-create-a-resource-script-file#create-resources).

1. Fare doppio clic all'interno della tabella di tasti di scelta rapida e scegliere **nuovo Accelerator**, oppure selezionare la voce di riga vuota nella parte inferiore della tabella.

1. Selezionare un **ID** dall'elenco a discesa nella **ID** casella o digitare un nuovo *ID* nel **ID** casella.

1. Tipo di *Key* si vuole usare come un tasto di scelta rapida, o fare clic e scegliere **digita** per impostare una combinazione di tasti o passare al menu **modifica**  >  **Digita**.

1. Modifica il **modificatore** e **tipo**, se necessario, quindi premere **invio**.

> [!NOTE]
> Verificare che tutti gli acceleratori definiti siano univoci. È possibile avere assegnate allo stesso ID senza alcun effetto negativi, ad esempio, diverse combinazioni di tasti **Ctrl**+**P** e **F8** possono entrambi essere assegnati a ID_PRINT. Tuttavia, con una combinazione di tasti assegnata a più ID non è compatibile, ad esempio, **Ctrl**+**Z** assegnato a che a ID_THESAURUS.

### <a name="to-delete-an-entry-from-an-accelerator-table"></a>Per eliminare una voce da una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](/windows/how-to-create-a-resource-script-file#create-resources).

1. Selezionare la voce che si desidera eliminare oppure tenere premuto il **Ctrl** oppure **MAIUSC** mentre si seleziona per scegliere più voci.

1. Pulsante destro del mouse e scegliere **eliminare**, o passare al menu **Edit** > **eliminare**.

> [!TIP]
> È anche possibile premere il **eliminare** chiave da eliminare.

### <a name="to-move-or-copy-an-accelerator-table-entry-to-another-resource-script-file"></a>Per spostare o copiare una voce di una tabella dei tasti di scelta rapida in un altro file di script di risorsa

1. Aprire le tabelle di tasti di scelta rapida in entrambi i file script di risorsa e selezionare la voce che si desidera spostare.

1. Dal **modifica** menu, scegliere **copia** oppure **Taglia**.

1. Selezionare una voce nel file di script della risorsa di destinazione e dal **Edit** menu, scegliere **Incolla**.

> [!NOTE]
> È anche possibile usare le combinazioni di tasti per copiare e incollare.

### <a name="to-change-the-properties-of-multiple-accelerator-keys"></a>Per modificare le proprietà di più tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](/windows/how-to-create-a-resource-script-file#create-resources).

1. Selezionare i tasti di scelta rapida che si desidera modificare, tenere premuti i **Ctrl** della chiave per la selezione di ognuno di essi.

1. Andare alla [finestra proprietà](/visualstudio/ide/reference/properties-window) e digitare i valori da tutti gli acceleratori selezionati da condividere.

> [!NOTE]
> Ogni valore del modificatore viene visualizzato come una proprietà booleana nel **proprietà** finestra. Se si modifica un [modificatore](../windows/accelerator-modifier-property.md) valore le **proprietà** finestra, la tabella di tasti di scelta rapida considera il nuovo modificatore come aggiunta a tutti i modificatori che sono state effettuate in precedenza. Per questo motivo, se si imposta alcun valore di modificatore, è necessario impostare tutti gli elementi per assicurarsi che ogni acceleratore condivide lo stesso **modificatore** impostazioni.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Tasti di scelta rapida](../windows/predefined-accelerator-keys.md)<br/>