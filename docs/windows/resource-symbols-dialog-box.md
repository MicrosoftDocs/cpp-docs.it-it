---
title: Risorsa finestra di dialogo simboli | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.editors.resourcesymbols
dev_langs:
- C++
helpviewer_keywords:
- New Symbol dialog box
- Resource Symbols dialog box
- Change Symbol dialog box
ms.assetid: 9706cde3-1f48-4fcd-bedb-2b03b455e3c1
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0e21f60fb2ca90e9e4825e93103fa74be3563780
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resource-symbols-dialog-box"></a>Simboli risorsa (finestra di dialogo)
Il **simboli risorsa** la finestra di dialogo consente di aggiungere nuovi simboli risorsa, modificare i simboli visualizzati oppure passare alla posizione nel codice sorgente in cui un simbolo è in uso.  
  
 **Name**  
 Visualizza il nome del simbolo. Per ulteriori informazioni, vedere [restrizioni relative ai nomi di simbolo](../windows/symbol-name-restrictions.md).  
  
 **Valore**  
 Visualizza il valore numerico del simbolo. Per ulteriori informazioni, vedere [restrizioni relative ai valori di simbolo](../windows/symbol-value-restrictions.md).  
  
 **In uso**  
 Se è selezionata, questa opzione specifica che il simbolo viene usato da una o più risorse. La risorsa o le risorse vengono elencate nella casella Usato da.  
  
 **Mostra simboli di sola lettura**  
 Se è selezionata, questa opzione visualizza le risorse di sola lettura. Per impostazione predefinita, nella finestra di dialogo Simboli risorsa vengono visualizzate soltanto le risorse modificabili nel file di script di risorsa. Se questa opzione è selezionata, tuttavia, le risorse modificabili vengono visualizzate in grassetto e le risorse di sola lettura in testo normale.  
  
 **Usato da**  
 Visualizza la risorsa o le risorse che usano il simbolo selezionato nell'elenco dei simboli. Per passare all'editor per una determinata risorsa, selezionare la risorsa nel **utilizzato da** casella e fare clic su **Visualizza uso**. Per ulteriori informazioni, vedere [apertura dell'Editor di risorse per un determinato simbolo](../windows/opening-the-resource-editor-for-a-given-symbol.md).  
  
 **Nuovo**  
 Apre la finestra di dialogo Nuovo simbolo, che consente di definire il nome e, se necessario, un valore per un nuovo identificatore di risorsa simbolico. Per ulteriori informazioni, vedere [creazione di nuovi simboli](../windows/creating-new-symbols.md).  
  
 **Modifica**  
 Apre la finestra di dialogo Cambia simbolo, che consente di modificare il nome o il valore di un simbolo. Se è relativo a un controllo o a una risorsa in uso, è possibile modificare il simbolo solo tramite l'editor di risorse corrispondente. Per ulteriori informazioni, vedere [modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).  
  
 **Visualizza uso**  
 Apre la risorsa contenente il simbolo nell'editor di risorse corrispondente. Per ulteriori informazioni, vedere [apertura dell'Editor di risorse per un determinato simbolo](../windows/opening-the-resource-editor-for-a-given-symbol.md).  
  

  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Visualizzazione di simboli risorsa](../windows/viewing-resource-symbols.md)