---
title: Editor tasti di scelta rapida (C++)
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
ms.openlocfilehash: c98ff1fd44b73b3f204e9b952836c387f7f21146
ms.sourcegitcommit: d9c94dcabd94537e304be0261b3263c2071b437b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2020
ms.locfileid: "91353090"
---
# <a name="accelerator-editor-c"></a>Editor tasti di scelta rapida (C++)

Una tabella di tasti di scelta rapida è una risorsa Windows C++ che contiene un elenco di tasti di scelta rapida, noti come tasti di scelta rapida e gli identificatori di comando associati. Un programma può avere più tabelle di tasti di scelta rapida.

In genere i tasti di scelta rapida vengono usati per i comandi di programma disponibili anche in un menu o in una barra degli strumenti. Tuttavia, è possibile usare la tabella di tasti di scelta rapida per definire le combinazioni di tasti per i comandi che non hanno un oggetto dell'interfaccia utente associato.

> [!TIP]
> Quando si usa l' **Editor acceleratore**, fare clic con il pulsante destro del mouse per visualizzare un menu di scelta rapida di comandi frequenti. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il puntatore.

È possibile usare [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) per associare i comandi dei tasti di scelta rapida al codice. Per un elenco di tasti di scelta rapida predefiniti, vedere [tasti di scelta rapida](predefined-accelerator-keys.md).

> [!NOTE]
> Windows non consente di creare tabelle di tasti di scelta rapida vuote. Se si crea una tabella di tasti di scelta rapida priva di voci, questa verrà eliminata automaticamente al salvataggio della tabella.

## <a name="accelerator-properties"></a>Proprietà acceleratore

È possibile impostare le proprietà del tasto di scelta rapida nella [finestra Proprietà](/visualstudio/ide/reference/properties-window) in qualsiasi momento. È anche possibile usare l' **editor di tasti** di scelta rapida per modificare le proprietà dell'acceleratore nella tabella dei tasti di scelta rapida. Le modifiche apportate utilizzando la finestra **Proprietà** o l' **Editor acceleratore** hanno lo stesso risultato, le modifiche vengono riflesse immediatamente nella tabella dei tasti di scelta rapida.

La proprietà **ID** fa riferimento a ogni voce della tabella Accelerator nel codice del programma. Questa voce è il valore del comando che il programma riceve quando un utente preme il tasto di scelta rapida o una combinazione di tasti. Per fare in modo che un acceleratore corrisponda a una voce di menu, rendere l' **ID** uguale, purché l' **ID** della tabella dei tasti di scelta rapida corrisponda all' **ID** della risorsa di menu.

Ogni **ID** acceleratore ha tre proprietà: **modificatore**, **chiave**e **tipo**

La proprietà **Modifier** imposta le combinazioni di tasti di controllo per l'acceleratore.

> [!NOTE]
> Nella finestra **Proprietà** la proprietà **Modifier** viene visualizzata come tre proprietà **booleane** separate, che possono essere controllate in modo indipendente: **ALT**, **CTRL**e **MAIUSC**.

Di seguito sono riportate le voci valide per la proprietà **Modifier** nella tabella Accelerator:

   |valore|Descrizione|
   |-----------|-----------------|
   |**Nessuno**|L'utente preme solo il valore della **chiave** .<br/><br/>Questo valore viene usato più efficacemente con i valori ASCII/ANSI da 001 a 026, interpretato come ^ A-^ Z (**CTRL + a** fino A **CTRL + z**).|
   |**Alt**|L'utente deve premere **ALT** prima del valore della **chiave** .|
   |**CTRL**|L'utente deve premere **CTRL** prima del valore della **chiave** , non valido con il tipo ASCII.|
   |**MAIUSC**|L'utente deve premere **MAIUSC** prima del valore della **chiave** .|
   |**CTRL + ALT**|L'utente deve premere **CTRL** e **ALT** prima del valore della **chiave** , non valido con il tipo ASCII.|
   |**CTRL + MAIUSC**|L'utente deve premere **CTRL** e **spostare** prima del valore della **chiave** , non valido con il tipo ASCII.|
   |**ALT + MAIUSC**|L'utente deve premere **ALT** e **MAIUSC** prima del valore della **chiave** , non valido con il tipo ASCII.|
   |**CTRL + ALT + MAIUSC**|L'utente deve premere **CTRL**, **ALT**e **MAIUSC** prima del valore della **chiave** , non valido con il tipo ASCII.|

La proprietà **chiave** imposta la chiave effettiva da usare come tasto di scelta rapida.

Di seguito sono riportate le voci valide per la proprietà **chiave** nella tabella dei tasti di scelta rapida:

   |valore|Descrizione|
   |-----------|-----------------|
   |Numero intero compreso tra 0 e 255 in formato decimale.|Il valore determina se il valore viene considerato come ASCII o ANSI come indicato di seguito:<br/><br/>   -I numeri a una sola cifra vengono sempre interpretati come chiave corrispondente, anziché come valori ASCII o ANSI.<br/>   -I valori compresi tra 1 e 26, quando sono preceduti da zeri, vengono interpretati come ^ A-^ Z, che rappresenta il valore ASCII delle lettere dell'alfabeto quando viene premuto con il tasto **CTRL** .<br/>   -I valori da 27-32 vengono sempre interpretati come valori decimali a tre cifre da 027 a 032.<br/>   -I valori compresi tra 033 e 255, preceduti da 0 o non vengono interpretati come valori ANSI.|
   |Singolo carattere di tastiera.|I caratteri maiuscoli A-Z o numeri 0-9 possono essere valori ASCII o di chiave virtuale. Qualsiasi altro carattere è solo ASCII.|
   |Un singolo carattere di tastiera nell'intervallo A-Z (solo lettere maiuscole), preceduto da un accento circonflesso (^), ad esempio ^ C.|Questa opzione consente di immettere il valore ASCII della chiave quando viene premuto tenendo premuto il tasto **CTRL** .|
   |Qualsiasi identificatore di chiave virtuale valido.|La casella **chiave** a discesa nella tabella dei tasti di scelta rapida contiene un elenco di identificatori di chiave virtuale standard.|

> [!NOTE]
> Quando si immette un valore ASCII, le opzioni delle proprietà del **modificatore** sono limitate. L'unica chiave di controllo disponibile per l'uso è il tasto **ALT** .

> [!TIP]
> Un tasto di scelta rapida per definire un tasto di scelta rapida è fare clic con il pulsante destro del mouse su una voce o più voci nella tabella dei tasti di scelta rapida, quindi scegliere **digitato chiave successiva** e premere una delle chiavi o combinazioni di tasti sulla tastiera.
>
> Questo comando **Next Key digitato** è disponibile anche nel menu **modifica** .

La proprietà **Type** determina se la combinazione di tasti di scelta rapida associata all' **ID** acceleratore viene interpretata come un valore di chiave ASCII/ANSI o una combinazione di chiave virtuale (VIRTKEY).

- Se la proprietà **Type** è **ASCII**, la proprietà **Modifier** può essere solo `None` o oppure `Alt` può avere un tasto di scelta rapida che usa il tasto **CTRL** , come specificato dalla chiave con un oggetto `^` .

- Se la proprietà **Type** è **VIRTKEY**, qualsiasi combinazione di **modificatori** e valori di **chiave** è valida.

> [!NOTE]
> Se si desidera immettere un valore nella tabella dei tasti di scelta rapida e fare in modo che il valore venga considerato ASCII/ANSI, selezionare il **tipo** per la voce nella tabella e selezionare **ASCII** nell'elenco a discesa. Tuttavia, se si usa il comando **chiave tipizzata successiva** dal **menu modifica** per specificare la **chiave**, è necessario modificare la proprietà **Type** da **VIRTKEY** a **ASCII** *prima* di immettere il codice **chiave** .

## <a name="accelerator-tables"></a>Tabelle dei tasti di scelta rapida

In un progetto C++ è possibile modificare direttamente una tabella dei tasti di scelta rapida con la modifica sul posto nell' **editor di tasti di scelta rapida**.

Le procedure riportate di seguito si riferiscono all'utilizzo delle pagine delle proprietà standard, ma la modifica sul posto e il metodo della pagina delle proprietà hanno lo stesso risultato. Le modifiche apportate utilizzando le pagine delle proprietà o la modifica sul posto vengono immediatamente riflesse nella tabella dei tasti di scelta rapida.

### <a name="to-edit-in-an-accelerator-table"></a>Per eseguire una modifica in una tabella dei tasti di scelta rapida

1. Aprire la tabella dei tasti di scelta rapida facendo doppio clic sull'icona in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare una voce nella tabella e selezionare per attivare la modifica sul posto.

1. Selezionare una casella combinata a discesa o digitare per apportare le modifiche:

   - Per **ID**selezionare un elenco o un tipo da modificare.

   - Per **modificatore**selezionare dall'elenco.

   - Per la **chiave**, selezionare dall'elenco o digitare per modificare.

   - Per **tipo**selezionare **ASCII** o **VIRTKEY** dall'elenco.

### <a name="to-find-an-entry-in-an-open-accelerator-table"></a>Per cercare una voce in una tabella dei tasti di scelta rapida aperta

1. Aprire la tabella dei tasti di scelta rapida facendo doppio clic sull'icona in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare un'intestazione di colonna per ordinare il contenuto della colonna in ordine alfabetico. Selezionare ad esempio **ID** per visualizzare in ordine alfabetico tutti gli ID nella tabella dei tasti di scelta rapida.

   È quindi possibile analizzare l'elenco e individuare la voce.

### <a name="to-add-an-entry-to-an-accelerator-table"></a>Per aggiungere una voce a una tabella dei tasti di scelta rapida

1. Aprire la tabella dei tasti di scelta rapida facendo doppio clic sull'icona in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Fare clic con il pulsante destro del mouse all'interno della tabella dei tasti di scelta rapida e scegliere **nuovo acceleratore**oppure selezionare la voce di riga vuota nella parte inferiore della tabella.

1. Selezionare un **ID** nell'elenco a discesa nella casella **ID** oppure digitare un nuovo *ID* nella casella **ID** .

1. Digitare la *chiave* che si desidera utilizzare come acceleratore oppure fare clic con il pulsante destro del mouse e scegliere **digitato chiave successiva** per impostare una combinazione di tasti o vai a menu **modifica**  >  **chiave successiva digitata**.

1. Modificare il **modificatore** e il **tipo**, se necessario, e premere **invio**.

> [!NOTE]
> Verificare che tutti gli acceleratori definiti siano univoci. È possibile assegnare diverse combinazioni di chiavi allo stesso ID senza effetti negativi. ad esempio, è possibile assegnare a ID_PRINT la **combinazione di tasti CTRL** + **P** e **F8** . Tuttavia, la combinazione di tasti assegnata a più di un ID non funzionerà correttamente, ad esempio **CTRL** + **Z** assegnata a ID_SPELL_CHECK e ID_THESAURUS.

### <a name="to-delete-an-entry-from-an-accelerator-table"></a>Per eliminare una voce da una tabella dei tasti di scelta rapida

1. Aprire la tabella dei tasti di scelta rapida facendo doppio clic sull'icona in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare la voce che si desidera eliminare oppure tenere premuto **CTRL** o **MAIUSC** mentre si selezionano più voci.

1. Fare clic con il pulsante destro del mouse e scegliere **Elimina**o vai a menu **modifica**  >  **Elimina**.

> [!TIP]
> È anche possibile premere il tasto **Canc** per eliminare.

### <a name="to-move-or-copy-an-accelerator-table-entry-to-another-resource-script-file"></a>Per spostare o copiare una voce di una tabella dei tasti di scelta rapida in un altro file di script di risorsa

1. Aprire le tabelle dei tasti di scelta rapida in entrambi i file di script di risorsa e selezionare la voce che si desidera spostare.

1. Scegliere **copia** o **taglia**dal menu **modifica** .

1. Selezionare una voce nel file di script di risorsa di destinazione e scegliere **Incolla**dal menu **modifica** .

> [!NOTE]
> È anche possibile usare le combinazioni di tasti per copiare e incollare.

### <a name="to-change-the-properties-of-multiple-accelerator-keys"></a>Per modificare le proprietà di più tasti di scelta rapida

1. Aprire la tabella dei tasti di scelta rapida facendo doppio clic sull'icona in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Selezionare i tasti di scelta rapida che si desidera modificare tenendo premuto il tasto **CTRL** mentre si seleziona ognuno di essi.

1. Passare alla [finestra Proprietà](/visualstudio/ide/reference/properties-window) e digitare i valori da condividere con tutti gli acceleratori selezionati.

> [!NOTE]
> Ogni valore del modificatore viene visualizzato come proprietà booleana nella finestra **Proprietà** . Se si modifica un valore di modificatore nella finestra **Proprietà** , la tabella Accelerator considera il nuovo modificatore come un'aggiunta ai modificatori precedentemente presenti. Per questo motivo, se si impostano i valori dei modificatori, è necessario impostarli tutti per assicurarsi che ogni acceleratore condivida le stesse impostazioni del **modificatore** .

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](resource-editors.md)<br/>
[Tasti di scelta rapida](predefined-accelerator-keys.md)<br/>
