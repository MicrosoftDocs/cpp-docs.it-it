---
title: 'Procedura: creare simboli (C++)'
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
ms.openlocfilehash: 1c69e8878885acd80c285691fb0861a476af03ea
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80160515"
---
# <a name="how-to-create-symbols-c"></a>Procedura: creare simboli (C++)

Quando si inizia un nuovo progetto, potrebbe risultare utile mappare i nomi dei simboli necessari prima di creare le risorse a cui verranno assegnati.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere [procedura: creare risorse](../windows/how-to-create-a-resource-script-file.md).

La finestra di dialogo **simboli risorsa** consente di aggiungere nuovi simboli di risorsa, modificare i simboli visualizzati oppure passare alla posizione nel codice sorgente in cui è in uso un simbolo.

La finestra di dialogo contiene le proprietà seguenti:

|Proprietà|Descrizione|
|--------------------------|------------------------------------------|
|**Nome**|Visualizza il nome del simbolo.<br/><br/>Per ulteriori informazioni, vedere [restrizioni relative ai nomi di simboli](../windows/symbol-name-restrictions.md).|
|**Valore**|Visualizza il valore numerico del simbolo.<br/><br/>Per altre informazioni, vedere [restrizioni relative ai valori dei simboli](../windows/symbol-value-restrictions.md).|
|**In uso**|Se è selezionata, questa opzione specifica che il simbolo viene usato da una o più risorse.<br/><br/>La risorsa o le risorse sono elencate nella casella **utilizzato da** .|
|**Mostra simboli di sola lettura**|Se è selezionata, questa opzione visualizza le risorse di sola lettura.<br/><br/>Per impostazione predefinita, nella finestra di dialogo **simbolo risorsa** vengono visualizzate solo le risorse modificabili nel file di script di risorsa, ma con questa opzione selezionata, le risorse modificabili vengono visualizzate in grassetto e le risorse di sola lettura vengono visualizzate in testo normale.|
|**Usato da**|Visualizza la risorsa o le risorse che usano il simbolo selezionato nell'elenco dei simboli.<br/><br/>Per passare all'editor per una determinata risorsa, selezionare la risorsa nella casella **usato da** e scegliere **Visualizza uso**.|
|**Nuovo**|Apre la finestra di dialogo **nuovo simbolo** che consente di definire il nome e, se necessario, un valore per un nuovo identificatore di risorsa simbolico.|
|**Modifica**|Apre la finestra di dialogo **Cambia simbolo** che consente di modificare il nome o il valore di un simbolo.<br/><br/>Se è relativo a un controllo o a una risorsa in uso, è possibile modificare il simbolo solo tramite l'editor di risorse corrispondente. Per altre informazioni, vedere [gestire i simboli](../windows/changing-unassigned-symbols.md).|
|**Visualizza utilizzo**|Apre la risorsa contenente il simbolo nell'editor di risorse corrispondente.|

## <a name="create-symbols"></a>Crea simboli

### <a name="to-create-a-new-symbol"></a>Per creare un nuovo simbolo

1. Nella finestra di dialogo **simboli risorsa** scegliere **nuovo**.

1. Nella casella **nome** Digitare il nome di un simbolo.

1. Accettare il valore del simbolo assegnato oppure digitare un nuovo valore nella casella **valore** .

1. Selezionare **OK** per aggiungere il nuovo simbolo all'elenco dei simboli.

> [!NOTE]
> Se si digita un nome di simbolo già esistente, verrà visualizzato un messaggio che informa che è già definito un simbolo con lo stesso nome. Non è possibile definire due o più simboli con lo stesso nome, ma è possibile definire simboli diversi con lo stesso valore numerico.

## <a name="to-view-resource-symbols"></a>Per visualizzare i simboli risorsa

In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)fare clic con il pulsante destro del mouse sul file *RC* e selezionare **simboli risorsa** per visualizzare una tabella dei simboli delle risorse nella finestra di dialogo **simboli risorsa** .

> [!NOTE]
> Per visualizzare i simboli predefiniti, selezionare la casella di controllo **Mostra simboli** di sola lettura.

### <a name="to-open-the-resource-editor-for-a-given-symbol"></a>Per aprire l'editor di risorse per un determinato simbolo

Quando si esplorano i simboli nei **simboli delle risorse**, è possibile ottenere altre informazioni sul modo in cui viene usato un particolare simbolo. Il pulsante **Visualizza utilizzo** fornisce un modo rapido per ottenere queste informazioni.

1. Nella casella **nome** della finestra di dialogo **simboli risorsa** selezionare un simbolo.

1. Nella casella **usato da** selezionare il tipo di risorsa desiderato.

1. Selezionare il pulsante **Visualizza utilizzo** .

   La risorsa viene visualizzata nella finestra dell'editor appropriato.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Identificatori di risorsa (simboli)](../windows/symbols-resource-identifiers.md)<br/>
[Procedura: gestire i simboli](../windows/changing-a-symbol-or-symbol-name-id.md)<br/>
[ID simbolo predefiniti](../windows/predefined-symbol-ids.md)<br/>
