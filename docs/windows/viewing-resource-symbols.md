---
title: Visualizzazione di simboli risorsa (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.symbol.managing
- vc.editors.resourcesymbols
helpviewer_keywords:
- resources [C++], viewing
- resource symbols
- symbols [C++], viewing
- New Symbol dialog box [C++]
- Resource Symbols dialog box [C++]
- Change Symbol dialog box [C++]
ms.assetid: 4bcc06d9-7d36-486a-8a37-71da0541643c
ms.openlocfilehash: e61269261fc9172288f1edf58419009178c755d9
ms.sourcegitcommit: 63c072f5e941989636f5a2b13800b68bb7129931
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/06/2019
ms.locfileid: "55763973"
---
# <a name="viewing-resource-symbols"></a>Visualizzazione di simboli risorsa

Il **simboli risorsa** C++ finestra di dialogo consente di aggiungere nuovi simboli risorsa, modificare i simboli visualizzati oppure passare alla posizione nel codice sorgente in cui un simbolo è in uso.

La finestra di dialogo contiene le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Name**|Visualizza il nome del simbolo. Per altre informazioni, vedere [restrizioni relative ai nomi di simbolo](../windows/symbol-name-restrictions.md).|
|**Valore**|Visualizza il valore numerico del simbolo. Per altre informazioni, vedere [restrizioni relative ai valori di simbolo](../windows/symbol-value-restrictions.md).|
|**In uso**|Se è selezionata, questa opzione specifica che il simbolo viene usato da una o più risorse. La risorsa o le risorse vengono elencate nella casella Usato da.|
|**Mostra simboli di sola lettura**|Se è selezionata, questa opzione visualizza le risorse di sola lettura. Per impostazione predefinita, il **simboli risorsa** nella finestra di dialogo Visualizza solo le risorse modificabili nel file di script di risorse, ma questa opzione è selezionata, le risorse modificabili vengono visualizzate in grassetto e le risorse di sola lettura vengono visualizzate come testo normale.|
|**Usato da**|Visualizza la risorsa o le risorse che usano il simbolo selezionato nell'elenco dei simboli. Per passare all'editor relativo a una determinata risorsa, selezionare la risorsa nel **Used By** casella e fare clic su **Visualizza uso**. Per altre informazioni, vedere [apertura dell'Editor di risorse per un determinato simbolo](../windows/opening-the-resource-editor-for-a-given-symbol.md).|
|**Nuovo**|Apre la **nuovo simbolo** nella finestra di dialogo consente di definire il nome e, se necessario, un valore per un nuovo identificatore di risorsa simbolico. Per altre informazioni, vedere [creazione di nuovi simboli](../windows/creating-new-symbols.md).|
|**Modifica**|Apre la **Cambia simbolo** nella finestra di dialogo consente di modificare il nome o valore di un simbolo. Se è relativo a un controllo o a una risorsa in uso, è possibile modificare il simbolo solo tramite l'editor di risorse corrispondente. Per altre informazioni, vedere [modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).|
|**Visualizza uso**|Apre la risorsa contenente il simbolo nell'editor di risorse corrispondente. Per altre informazioni, vedere [apertura dell'Editor di risorse per un determinato simbolo](../windows/opening-the-resource-editor-for-a-given-symbol.md).|

## <a name="to-view-resource-symbols"></a>Per visualizzare i simboli risorsa

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), pulsante destro del mouse sul file RC.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Selezionare **simboli risorsa** dal menu di scelta rapida per visualizzare una tabella di simboli risorsa nella **simboli risorsa** nella finestra di dialogo.

   > [!NOTE]
   > Per visualizzare simboli predefiniti, controllare la **Mostra simboli di sola lettura** casella di controllo.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Simboli: identificatori di risorsa](../windows/symbols-resource-identifiers.md)