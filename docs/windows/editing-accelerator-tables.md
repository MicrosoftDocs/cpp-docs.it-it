---
title: Modifica delle tabelle di tasti di scelta rapida (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.accelerator
helpviewer_keywords:
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
ms.assetid: 56e24efb-d06b-4ed9-8915-1f99f725e247
ms.openlocfilehash: dfa0c26132378bcbe8a7f5203351134d91746aa7
ms.sourcegitcommit: 5beace7dcc6bf0e8b8cc96a930e7424f9daa05cb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2019
ms.locfileid: "55232175"
---
# <a name="editing-accelerator-tables-c"></a>Modifica delle tabelle di tasti di scelta rapida (C++)

In un progetto C++, è possibile modificare una tabella di tasti di scelta rapida direttamente con la modifica sul posto nel **acceleratore** editor.

Le procedure seguenti si riferiscono all'uso delle pagine delle proprietà standard, tuttavia, la modifica sul posto e il metodo di pagina di proprietà hanno lo stesso risultato. Le modifiche apportate utilizzando le pagine delle proprietà o la modifica sul posto vengono applicate immediatamente nella tabella di tasti di scelta rapida.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

## <a name="to-edit-in-an-accelerator-table"></a>Per eseguire una modifica in una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

1. Selezionare una voce nella tabella e selezionare questa opzione per attivare la modifica sul posto.

1. Eseguire la selezione dalla casella combinata a discesa oppure digitare sul posto per apportare modifiche.

   - Per la [ID](id-property.md), selezionarlo dall'elenco o digitarlo per apportare modifiche.

   - Per la [modificatore](../windows/accelerator-modifier-property.md)selezionare dall'elenco.

   - Per la [chiave](../windows/accelerator-key-property.md), selezionarlo dall'elenco o digitarlo per apportare modifiche.

   - Per la [tipo](../windows/accelerator-type-property.md), selezionare **ASCII** oppure **VIRTKEY** dall'elenco.

## <a name="to-find-an-entry-in-an-open-accelerator-table"></a>Per cercare una voce in una tabella dei tasti di scelta rapida aperta

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

1. Selezionare un'intestazione di colonna per ordinare il contenuto della colonna in ordine alfabetico. Ad esempio, selezionare **ID** per visualizzare tutti gli ID della tabella dei tasti di scelta rapida in ordine alfabetico.

È quindi possibile analizzare l'elenco e individuare la voce.

## <a name="to-add-an-entry-to-an-accelerator-table"></a>Per aggiungere una voce a una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

1. Fare doppio clic all'interno della tabella di tasti di scelta rapida e scegliere **nuovo Accelerator** dal menu di scelta rapida o selezionare la voce di riga vuota nella parte inferiore della tabella.

1. Selezionare un [ID](id-property.md) dall'elenco a discesa scegliere l'ID casella o digitare un nuovo ID nel **ID** casella.

1. Tipo di [Key](../windows/accelerator-key-property.md) si vuole usare come un tasto di scelta rapida o il pulsante destro del mouse e scegliere **digita** dal menu di scelta rapida per impostare una combinazione di tasti (il **digita** comando è disponibile anche dal **modifica** menu).

1. Modifica il [modificatore](../windows/accelerator-modifier-property.md) e [tipo](../windows/accelerator-type-property.md), se necessario.

1. Premere **INVIO**.

   > [!NOTE]
   > Verificare che tutti gli acceleratori definiti siano univoci. È possibile avere assegnate allo stesso ID senza alcun effetto negativi, ad esempio, diverse combinazioni di tasti **Ctrl** + **P** e **F8** possono entrambi essere assegnati a ID_PRINT. Tuttavia, con una combinazione di tasti assegnata a più ID non è compatibile, ad esempio, **Ctrl** + **Z** assegnato a che a ID_THESAURUS.

## <a name="to-delete-an-entry-from-an-accelerator-table"></a>Per eliminare una voce da una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

1. Selezionare la voce che si vuole eliminare. (Tenere premuto il **Ctrl** oppure **MAIUSC** mentre si seleziona per scegliere più voci.)

1. Pulsante destro del mouse e scegliere **eliminare** dal menu di scelta rapida (o selezionare **eliminare** dal **Edit** menu).

\- oppure -

- Premere il **eliminare** chiave.

## <a name="to-move-or-copy-an-accelerator-table-entry-to-another-resource-script-file"></a>Per spostare o copiare una voce di una tabella dei tasti di scelta rapida in un altro file di script di risorsa

1. Aprire le tabelle di tasti di scelta rapida in entrambi i file script di risorsa.

1. Selezionare la voce che si vuole spostare.

1. Dal **modifica** menu, scegliere **copia** oppure **Taglia**.

1. Selezionare una voce nel file script di risorsa di destinazione.

1. Dal **Edit** menu, scegliere **Incolla**.

   > [!NOTE]
   > È anche possibile usare le combinazioni di tasti per copiare e incollare.

## <a name="to-change-the-properties-of-multiple-accelerator-keys"></a>Per modificare le proprietà di più tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

1. Selezionare i tasti di scelta rapida che si desidera modificare, tenere premuti i **Ctrl** della chiave per la selezione di ognuno di essi.

1. Andare alla [finestra proprietà](/visualstudio/ide/reference/properties-window) e digitare i valori da tutti gli acceleratori selezionati da condividere.

   > [!NOTE]
   > Ogni valore del modificatore viene visualizzato come una proprietà booleana nel **proprietà** finestra. Se si modifica un [modificatore](../windows/accelerator-modifier-property.md) valore le **proprietà** finestra, la tabella di tasti di scelta rapida considera il nuovo modificatore come aggiunta a tutti i modificatori che sono state effettuate in precedenza. Per questo motivo, se si imposta alcun valore di modificatore, è necessario impostare tutti gli elementi per assicurarsi che ogni acceleratore condivide lo stesso **modificatore** impostazioni.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor tasti di scelta rapida](../windows/accelerator-editor.md)<br/>
[Editor di risorse](../windows/resource-editors.md)
