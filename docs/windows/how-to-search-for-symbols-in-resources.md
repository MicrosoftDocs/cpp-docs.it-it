---
title: 'Procedura: cercare simboli nelle risorse | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- symbols, finding
- resources [Visual Studio], searching for symbols
ms.assetid: 6efef8e8-d0d4-4c49-b895-314974e7791a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b45780223191c8dacec12d5312f4d2ac724b4d4f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="how-to-search-for-symbols-in-resources"></a>Procedura: cercare simboli nelle risorse
### <a name="to-find-symbols-in-resources"></a>Per trovare i simboli nelle risorse  
  
1.  Dal **modifica** menu, scegliere **Trova simbolo**.  
  
2.  Nel [la finestra di dialogo Trova simbolo](http://msdn.microsoft.com/en-us/63e93d9c-784f-418d-a76a-723da5ff5d96)nella **trova** casella, selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare il tasto di scelta rapida che si desidera trovare (ad esempio ID_ACCEL1).  
  
    > [!TIP]
    >  Per utilizzare [espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) per la ricerca, è necessario utilizzare il [comando Cerca nei file](/visualstudio/ide/reference/find-command) dal **modifica** menu anziché il **Trova simbolo**comando. Per attivare le espressioni regolari, è necessario disporre di **utilizzo: espressioni regolari** selezionata nella casella di controllo il [la finestra di dialogo Trova](http://msdn.microsoft.com/en-us/dad03582-4931-4893-83ba-84b37f5b1600). Quindi è possibile fare clic sul pulsante freccia destra, a destra del **trova** casella per visualizzare un elenco di espressioni regolari di ricerca. Quando si seleziona un'espressione da questo elenco, viene sostituita come testo di ricerca nella **trova** casella.  
  
3.  Selezionare una qualsiasi del **trovare** opzioni.  
  
4.  Fare clic su **Trova successivo**.  
  
    > [!NOTE]
    >  Non è possibile cercare simboli in risorse di stringa, tasti di scelta rapida o binarie.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Simboli: Identificatori di risorsa](../windows/symbols-resource-identifiers.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor di risorse](../windows/resource-editors.md)