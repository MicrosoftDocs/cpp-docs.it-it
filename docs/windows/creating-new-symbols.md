---
title: 'Procedura: Creare i simboli (C++)'
ms.date: 02/14/2019
f1_keywords:
- vc.editors.symbol.creating
- vc.editors.symbol.managing
- vc.editors.resourcesymbols
- vc.editors.symbol.resource
helpviewer_keywords:
- New Symbol dialog box [C++]
- symbols [C++], creating
- resources [C++], viewing
- resource symbols
- symbols [C++], viewing
- New Symbol dialog box [C++]
- Resource Symbols dialog box [C++]
- Change Symbol dialog box [C++]
- resource symbols
- View Use button
- resource editors [C++], resource symbols
ms.assetid: 35168d31-3af6-4ecd-9362-3707d47b53f3
ms.openlocfilehash: 91092b29d7265904e69b093310daa72b673d8745
ms.sourcegitcommit: b4645761ce5acf8c2fc7a662334dd5a471ea976d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/07/2019
ms.locfileid: "57563381"
---
# <a name="how-to-create-symbols-c"></a>Procedura: Creare i simboli (C++)

Quando si inizia un nuovo progetto, potrebbe essere utile definire i nomi dei simboli che necessari prima di creare le risorse a cui verrà assegnati.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere [come: Creare risorse](../windows/how-to-create-a-resource-script-file.md).

Il **simboli risorsa** nella finestra di dialogo consente di aggiungere nuovi simboli risorsa, modificare i simboli visualizzati oppure passare alla posizione nel codice sorgente in cui un simbolo è in uso.

La finestra di dialogo contiene le proprietà seguenti:

|Proprietà|Descrizione|
|--------------------------|------------------------------------------|
|**Name**|Visualizza il nome del simbolo.<br/><br/>Per altre informazioni, vedere [restrizioni relative ai nomi di simbolo](../windows/symbol-name-restrictions.md).|
|**Valore**|Visualizza il valore numerico del simbolo.<br/><br/>Per altre informazioni, vedere [restrizioni relative ai valori di simbolo](../windows/symbol-value-restrictions.md).|
|**In uso**|Se è selezionata, questa opzione specifica che il simbolo viene usato da una o più risorse.<br/><br/>Le risorse sono elencate nel **usato da** casella.|
|**Mostra simboli di sola lettura**|Se è selezionata, questa opzione visualizza le risorse di sola lettura.<br/><br/>Per impostazione predefinita, il **simboli risorsa** nella finestra di dialogo Visualizza solo le risorse modificabili nel file di script di risorse, ma questa opzione è selezionata, le risorse modificabili vengono visualizzate in grassetto e le risorse di sola lettura vengono visualizzate come testo normale.|
|**Usato da**|Visualizza la risorsa o le risorse che usano il simbolo selezionato nell'elenco dei simboli.<br/><br/>Per passare all'editor relativo a una determinata risorsa, selezionare la risorsa nel **utilizzato da** e selezionare **Visualizza uso**.|
|**Nuovo**|Apre la **nuovo simbolo** finestra di dialogo che consente di definire il nome e, se necessario, un valore per un nuovo identificatore di risorsa simbolico.|
|**Modifica**|Apre la **Cambia simbolo** finestra di dialogo che consente di modificare il nome o valore di un simbolo.<br/><br/>Se è relativo a un controllo o a una risorsa in uso, è possibile modificare il simbolo solo tramite l'editor di risorse corrispondente. Per altre informazioni, vedere [gestire i simboli](../windows/changing-unassigned-symbols.md).|
|**Visualizza uso**|Apre la risorsa contenente il simbolo nell'editor di risorse corrispondente.|

## <a name="create-symbols"></a>Creare i simboli

### <a name="to-create-a-new-symbol"></a>Per creare un nuovo simbolo

1. Nel **simboli risorsa** finestra di dialogo, scegliere **New**.

1. Nel **nome** , digitare un nome di simbolo.

1. Accettare il valore di simbolo assegnato o digitare un nuovo valore nel **valore** casella.

1. Selezionare **OK** per aggiungere il nuovo simbolo al relativo elenco.

> [!NOTE]
> Se si digita un nome di simbolo già esistente, verrà visualizzato un messaggio che informa che è già definito un simbolo con lo stesso nome. Non è possibile definire due o più simboli con lo stesso nome, ma è possibile definire simboli diversi con lo stesso valore numerico.

## <a name="to-view-resource-symbols"></a>Per visualizzare i simboli risorsa

In [visualizzazione di risorse](/windows/how-to-create-a-resource-script-file#create-resources), fare doppio clic sul *RC* file e selezionare **simboli risorsa** per visualizzare una tabella di simboli di risorsa nel **simboli risorsa**finestra di dialogo.

> [!NOTE]
> Per visualizzare simboli predefiniti, controllare la **Mostra simboli di sola lettura** casella di controllo.

### <a name="to-open-the-resource-editor-for-a-given-symbol"></a>Per aprire l'editor di risorse per un determinato simbolo

Quando si visualizzano i simboli nella **simboli risorsa**, è possibile ottenere altre informazioni sull'utilizzo di un determinato simbolo. Il **Visualizza uso** pulsante offre un modo rapido per ottenere queste informazioni.

1. Nel **simboli risorsa** nella finestra di dialogo il **nome** , selezionare un simbolo.

1. Nel **Used By** , selezionare il tipo di risorsa desiderato.

1. Selezionare il **Visualizza uso** pulsante.

   La risorsa viene visualizzata nella finestra dell'editor appropriato.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Identificatori di risorsa (simboli)](../windows/symbols-resource-identifiers.md)<br/>
[Procedura: Gestire i simboli](../windows/changing-a-symbol-or-symbol-name-id.md)<br/>
[ID simbolo predefiniti](../windows/predefined-symbol-ids.md)<br/>