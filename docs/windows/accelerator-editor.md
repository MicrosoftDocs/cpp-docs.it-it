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
ms.openlocfilehash: 90ef142336cf88c5e40f78f6cc651b2bb35a0f6c
ms.sourcegitcommit: 470de1337035dd33682d935b4b6c6d8b1bdb0bbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/15/2019
ms.locfileid: "56320640"
---
# <a name="accelerator-editor-c"></a>Accelerator Editor (C++)

Una tabella di tasti di scelta rapida è una risorsa di Windows C++ che contiene un elenco di tasti di scelta rapida (noto anche come tasti di scelta rapida) e gli identificatori di comandi che sono associati ad essi. Un programma può avere più tabelle di tasti di scelta rapida.

In genere i tasti di scelta rapida vengono usati per i comandi di programma disponibili anche in un menu o in una barra degli strumenti. Tuttavia, è possibile usare la tabella di tasti di scelta rapida per definire le combinazioni di tasti per i comandi che non hanno un oggetto dell'interfaccia utente associato.

È possibile usare [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) per associare i comandi dei tasti di scelta rapida al codice.

Per un elenco dei tasti di scelta rapida predefiniti, vedere [tasti di scelta rapida](../windows/predefined-accelerator-keys.md).

   > [!TIP]
   > Quando si usa la **acceleratore** editor, è possibile fare doppio clic per visualizzare un menu di scelta rapida dei comandi usati frequentemente. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il puntatore.

   > [!NOTE]
   > Windows non consente di creare tabelle di tasti di scelta rapida vuote. Se si crea una tabella di tasti di scelta rapida priva di voci, questa verrà eliminata automaticamente al salvataggio della tabella.

## <a name="accelerator-properties"></a>Tasti di scelta rapida proprietà

È possibile impostare le proprietà di tasti di scelta rapida nel [finestra proprietà](/visualstudio/ide/reference/properties-window) in qualsiasi momento. È anche possibile usare la **acceleratore** editor per modificare le proprietà di tasti di scelta rapida della tabella di tasti di scelta rapida. Le modifiche apportate tramite il **delle proprietà** finestra o il **acceleratore** editor hanno lo stesso risultato: le modifiche vengono applicate immediatamente nella tabella di tasti di scelta rapida.

### <a name="id-property"></a>ID (proprietà)

Il **ID** proprietà fa riferimento a ogni voce della tabella di tasti di scelta rapida nel codice del programma. Questa voce è il valore del comando che riceverà il programma quando l'utente preme il tasto di scelta rapida o una combinazione di tasti. Per rendere un acceleratore quello utilizzato per una voce di menu, verificare i relativi ID lo stesso da (purché l'ID della tabella di tasti di scelta rapida è quello utilizzato per l'ID per la risorsa di menu).

Esistono tre proprietà per ogni ID acceleratore: il **modificatore** proprietà, il **chiave** proprietà e il **tipo** proprietà.

#### <a name="modifier-property"></a>Modifier (proprietà)

Il **modificatore** proprietà imposta controllo combinazioni per il tasto di scelta rapida.

> [!NOTE]
> Nel **delle proprietà** finestra, questa proprietà viene visualizzato come separato tre **booleano** proprietà, ognuno dei quali può essere controllata in modo indipendente: **ALT**, **Ctrl**, e **MAIUSC**.

Di seguito sono le voci legali per la **modificatore** proprietà nella tabella di tasti di scelta rapida:

   |Value|Descrizione|
   |-----------|-----------------|
   |**None**|Utente preme solo il **chiave** valore. Questo valore viene utilizzato in modo più efficace con i valori ASCII/ANSI 001 tramite 026, che viene interpretato come ^ dalla alla ^ Z (**Ctrl + B** attraverso **Ctrl + Z**).|
   |**ALT**|L'utente deve premere il **Alt** chiave prima di **chiave** valore.|
   |**CTRL**|L'utente deve premere il **Ctrl** chiave prima di **chiave** valore. Non è valida con tipo ASCII.|
   |**MAIUSC**|L'utente deve premere il **Shift** chiave prima di **chiave** valore.|
   |**Ctrl + Alt**|L'utente deve premere il **Ctrl** chiave e il **Alt** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|
   |**CTRL + MAIUSC**|L'utente deve premere il **Ctrl** chiave e il **MAIUSC** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|
   |**ALT + MAIUSC**|L'utente deve premere il **Alt** chiave e il **MAIUSC** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|
   |**Ctrl + Alt + Maiusc**|L'utente deve premere **Ctrl**, **Alt**, e **MAIUSC** prima il **chiave** valore. Non è valida con tipo ASCII.|

#### <a name="key-property"></a>Key (proprietà)

Il **chiave** proprietà imposta il tasto effettivo da usare come tasto di scelta rapida.

Di seguito sono le voci legali per la **chiave** proprietà nella tabella di tasti di scelta rapida:

   |Value|Descrizione|
   |-----------|-----------------|
   |Numero intero compreso tra 0 e 255 in formato decimale.|Il valore determina se il valore viene trattato come ASCII o ANSI come indicato di seguito:<br/><br/>-Cifra numeri vengono sempre interpretati come la chiave corrispondente, anziché come valori ASCII o ANSI.<br/>-I valori da 1 a 26, preceduti da zero, vengono interpretati come ^ dalla alla ^ Z, che rappresenta il valore ASCII delle lettere dell'alfabeto se premuto con il **Ctrl** tasto mantenuto premuto.<br/>-I valori da 27 a 32 vengono sempre interpretati come valori decimali a tre cifre 027 e 032.<br/>-I valori da 033 a 255, preceduto da 0 o non vengono interpretati come valori ANSI.|
   |Un singolo carattere della tastiera.|Caratteri maiuscoli A - Z o i numeri da 0 - 9 può essere ASCII o valori di chiave virtuali; qualsiasi altro carattere è solo ASCII.|
   |Un singolo carattere della tastiera nell'intervallo A - Z (lettere solo), preceduto da un accento circonflesso (^) (ad esempio ^ C).|Questa opzione inserisce il valore ASCII della chiave quando viene premuto con il **Ctrl** tasto mantenuto premuto.|
   |Qualsiasi identificatore di chiave virtuale valido.|La casella di riepilogo a discesa chiave nella tabella di tasti di scelta rapida contiene un elenco di identificatori di chiave virtuali standard.|

> [!NOTE]
> Quando si immette un valore ASCII, le opzioni di proprietà modificatore siano limitate. È l'unica chiave di controllo disponibile per l'uso di **Alt** chiave.

> [!TIP]
> È un altro modo per definire un tasto di scelta rapida per fare doppio clic su una o più voci nella tabella di tasti di scelta rapida, scegliere **digita** dal menu di scelta rapida, quindi premere una delle chiavi o combinazioni di tasti sulla tastiera. Il **digita** comando è disponibile anche la **modificare** menu.

#### <a name="type-property"></a>Type (proprietà)

Il **tipo** proprietà determina se la combinazione di tasti di scelta rapida associata all'ID acceleratore viene interpretata come una combinazione di tasto virtuale (VIRTKEY) o un valore di chiave ASCII/ANSI.

- Se il **tipo** proprietà è ASCII, il **modificatore** proprietà può essere solo `None` o `Alt`, oppure può avere un acceleratore che usa il **Ctrl** (della chiave specificato facendo precedere la chiave con un `^`).

- Se il **tipo** proprietà è VIRTKEY, qualsiasi combinazione delle `Modifier` e `Key` valori è valido.

> [!NOTE]
> Se si desidera immettere un valore nella tabella di tasti di scelta rapida e deve essere considerato come ASCII/ANSI, è sufficiente fare clic sui **tipo** per la voce nella tabella e ASCII selezionare dall'elenco a discesa. Tuttavia, se si usa il **digita** comando (**modificare** menu) per specificare il `Key`, è necessario modificare il **tipo** proprietà da VIRTKEY ASCII *prima* immettendo il `Key` codice.

## <a name="accelerator-tables"></a>Tabelle di tasti di scelta rapida

In un progetto C++, è possibile modificare una tabella di tasti di scelta rapida direttamente con la modifica sul posto nel **acceleratore** editor.

Le procedure seguenti si riferiscono all'uso delle pagine delle proprietà standard, tuttavia, la modifica sul posto e il metodo di pagina di proprietà hanno lo stesso risultato. Le modifiche apportate utilizzando le pagine delle proprietà o la modifica sul posto vengono applicate immediatamente nella tabella di tasti di scelta rapida.

### <a name="to-edit-in-an-accelerator-table"></a>Per eseguire una modifica in una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

1. Selezionare una voce nella tabella e selezionare questa opzione per attivare la modifica sul posto.

1. Eseguire la selezione dalla casella combinata a discesa oppure digitare sul posto per apportare modifiche.

   - Per la **ID**, selezionarlo dall'elenco o digitarlo per apportare modifiche.

   - Per la **modificatore**selezionare dall'elenco.

   - Per la **chiave**, selezionarlo dall'elenco o digitarlo per apportare modifiche.

   - Per la **tipo**, selezionare **ASCII** oppure **VIRTKEY** dall'elenco.

### <a name="to-find-an-entry-in-an-open-accelerator-table"></a>Per cercare una voce in una tabella dei tasti di scelta rapida aperta

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

1. Selezionare un'intestazione di colonna per ordinare il contenuto della colonna in ordine alfabetico. Ad esempio, selezionare **ID** per visualizzare tutti gli ID della tabella dei tasti di scelta rapida in ordine alfabetico.

È quindi possibile analizzare l'elenco e individuare la voce.

### <a name="to-add-an-entry-to-an-accelerator-table"></a>Per aggiungere una voce a una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

1. Fare doppio clic all'interno della tabella di tasti di scelta rapida e scegliere **nuovo Accelerator** dal menu di scelta rapida o selezionare la voce di riga vuota nella parte inferiore della tabella.

1. Selezionare un **ID** dall'elenco a discesa scegliere l'ID casella o digitare un nuovo ID nel **ID** casella.

1. Tipo di **Key** si vuole usare come un tasto di scelta rapida o il pulsante destro del mouse e scegliere **digita** dal menu di scelta rapida per impostare una combinazione di tasti (il **digita** comando è disponibile anche dal **modifica** menu).

1. Modifica il **modificatore** e **tipo**, se necessario.

1. Premere **INVIO**.

   > [!NOTE]
   > Verificare che tutti gli acceleratori definiti siano univoci. È possibile avere assegnate allo stesso ID senza alcun effetto negativi, ad esempio, diverse combinazioni di tasti **Ctrl** + **P** e **F8** possono entrambi essere assegnati a ID_PRINT. Tuttavia, con una combinazione di tasti assegnata a più ID non è compatibile, ad esempio, **Ctrl** + **Z** assegnato a che a ID_THESAURUS.

### <a name="to-delete-an-entry-from-an-accelerator-table"></a>Per eliminare una voce da una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

1. Selezionare la voce che si vuole eliminare. (Tenere premuto il **Ctrl** oppure **MAIUSC** mentre si seleziona per scegliere più voci.)

1. Pulsante destro del mouse e scegliere **eliminare** dal menu di scelta rapida (o selezionare **eliminare** dal **Edit** menu).

> [!TIP]
> Un collegamento per l'eliminazione è necessario premere il **eliminare** chiave.

### <a name="to-move-or-copy-an-accelerator-table-entry-to-another-resource-script-file"></a>Per spostare o copiare una voce di una tabella dei tasti di scelta rapida in un altro file di script di risorsa

1. Aprire le tabelle di tasti di scelta rapida in entrambi i file script di risorsa.

1. Selezionare la voce che si vuole spostare.

1. Dal **modifica** menu, scegliere **copia** oppure **Taglia**.

1. Selezionare una voce nel file script di risorsa di destinazione.

1. Dal **Edit** menu, scegliere **Incolla**.

   > [!NOTE]
   > È anche possibile usare le combinazioni di tasti per copiare e incollare.

### <a name="to-change-the-properties-of-multiple-accelerator-keys"></a>Per modificare le proprietà di più tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

1. Selezionare i tasti di scelta rapida che si desidera modificare, tenere premuti i **Ctrl** della chiave per la selezione di ognuno di essi.

1. Andare alla [finestra proprietà](/visualstudio/ide/reference/properties-window) e digitare i valori da tutti gli acceleratori selezionati da condividere.

   > [!NOTE]
   > Ogni valore del modificatore viene visualizzato come una proprietà booleana nel **proprietà** finestra. Se si modifica un [modificatore](../windows/accelerator-modifier-property.md) valore le **proprietà** finestra, la tabella di tasti di scelta rapida considera il nuovo modificatore come aggiunta a tutti i modificatori che sono state effettuate in precedenza. Per questo motivo, se si imposta alcun valore di modificatore, è necessario impostare tutti gli elementi per assicurarsi che ogni acceleratore condivide lo stesso **modificatore** impostazioni.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Tasti di scelta rapida predefiniti](../windows/predefined-accelerator-keys.md)<br/>