---
title: 'Procedura: cercare simboli nelle risorse | Microsoft Docs'
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
ms.openlocfilehash: 3aada3dac208fcf08a9b0e61ef822c3ab13b7b44
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42605766"
---
# <a name="how-to-search-for-symbols-in-resources"></a>Procedura: cercare simboli nelle risorse

### <a name="to-find-symbols-in-resources"></a>Per trovare i simboli nelle risorse

1. Dal **Edit** menu, scegliere **Trova simbolo**.

2. Nel [finestra di dialogo Trova simbolo](http://msdn.microsoft.com/63e93d9c-784f-418d-a76a-723da5ff5d96), nella **Find What** casella, selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare il tasto di scelta rapida si desidera trovare (ad esempio ID_ACCEL1).

   > [!TIP]
   > Da utilizzare [le espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) per la ricerca, è necessario utilizzare il [comando Cerca nei file](/visualstudio/ide/reference/find-command) dal **modifica** menu anziché il **Trova simbolo**comando. Per abilitare le espressioni regolari, è necessario disporre del **utilizzo: espressioni regolari** selezionata nella casella di controllo la [nella finestra di dialogo Find](http://msdn.microsoft.com/dad03582-4931-4893-83ba-84b37f5b1600). Quindi è possibile fare clic sul pulsante freccia destra a destra del **Find What** casella per visualizzare un elenco di espressioni regolari di ricerca. Quando si seleziona un'espressione da questo elenco, viene sostituita come testo di ricerca nella **Find What** casella.

3. Selezionare una qualsiasi delle **trovare** opzioni.

4. Fare clic su **Trova successivo**.

   > [!NOTE]
   > Non è possibile cercare simboli in risorse di stringa, tasti di scelta rapida o binarie.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Simboli: identificatori di risorsa](../windows/symbols-resource-identifiers.md)  
[File di risorse](../windows/resource-files-visual-studio.md)  
[Editor di risorse](../windows/resource-editors.md)