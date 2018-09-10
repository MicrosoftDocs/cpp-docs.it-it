---
title: Risorsa simboli nella finestra di dialogo (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.resourcesymbols
dev_langs:
- C++
helpviewer_keywords:
- New Symbol dialog box [C++]
- Resource Symbols dialog box [C++]
- Change Symbol dialog box [C++]
ms.assetid: 9706cde3-1f48-4fcd-bedb-2b03b455e3c1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 064fb9adce8b41c13709819f7ce0b7c515fea12a
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44313169"
---
# <a name="resource-symbols-dialog-box-c"></a>Finestra di dialogo Simboli risorsa (C++)

Il **simboli risorsa** C++ finestra di dialogo consente di aggiungere nuovi simboli risorsa, modificare i simboli visualizzati oppure passare alla posizione nel codice sorgente in cui un simbolo è in uso.

**Name**  
Visualizza il nome del simbolo. Per altre informazioni, vedere [restrizioni relative ai nomi di simbolo](../windows/symbol-name-restrictions.md).

**Valore**  
Visualizza il valore numerico del simbolo. Per altre informazioni, vedere [restrizioni relative ai valori di simbolo](../windows/symbol-value-restrictions.md).

**In uso**  
Se è selezionata, questa opzione specifica che il simbolo viene usato da una o più risorse. La risorsa o le risorse vengono elencate nella casella Usato da.

**Mostra simboli di sola lettura**  
Se è selezionata, questa opzione visualizza le risorse di sola lettura. Per impostazione predefinita, il **simboli risorsa** nella finestra di dialogo Visualizza solo le risorse modificabili nel file di script di risorse, ma questa opzione è selezionata, le risorse modificabili vengono visualizzate in grassetto e le risorse di sola lettura vengono visualizzate come testo normale.

**Usato da**  
Visualizza la risorsa o le risorse che usano il simbolo selezionato nell'elenco dei simboli. Per passare all'editor relativo a una determinata risorsa, selezionare la risorsa nel **Used By** casella e fare clic su **Visualizza uso**. Per altre informazioni, vedere [apertura dell'Editor di risorse per un determinato simbolo](../windows/opening-the-resource-editor-for-a-given-symbol.md).

**Nuovo**  
Apre la **nuovo simbolo** nella finestra di dialogo consente di definire il nome e, se necessario, un valore per un nuovo identificatore di risorsa simbolico. Per altre informazioni, vedere [creazione di nuovi simboli](../windows/creating-new-symbols.md).

**Modifica**  
Apre la **Cambia simbolo** nella finestra di dialogo consente di modificare il nome o valore di un simbolo. Se è relativo a un controllo o a una risorsa in uso, è possibile modificare il simbolo solo tramite l'editor di risorse corrispondente. Per altre informazioni, vedere [modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).

**Visualizza uso**  
Apre la risorsa contenente il simbolo nell'editor di risorse corrispondente. Per altre informazioni, vedere [apertura dell'Editor di risorse per un determinato simbolo](../windows/opening-the-resource-editor-for-a-given-symbol.md).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Visualizzazione di simboli risorsa](../windows/viewing-resource-symbols.md)