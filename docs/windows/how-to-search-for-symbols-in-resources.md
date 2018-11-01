---
title: 'Procedura: cercare simboli nelle risorse (C++)'
ms.date: 11/04/2016
helpviewer_keywords:
- symbols [C++], finding
- resources [C++], searching for symbols
ms.assetid: 6efef8e8-d0d4-4c49-b895-314974e7791a
ms.openlocfilehash: b289fa1c2e5e5e1997c5024b21cae3d7a22b2b8f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50655988"
---
# <a name="how-to-search-for-symbols-in-resources-c"></a>Procedura: cercare simboli nelle risorse (C++)

### <a name="to-find-symbols-in-resources"></a>Per trovare i simboli nelle risorse

1. Dal **Edit** menu, scegliere **Trova simbolo**.

2. Nel [finestra di dialogo Trova simbolo](/visualstudio/ide/go-to), nella **Find What** casella, selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare il tasto di scelta rapida si desidera trovare (ad esempio ID_ACCEL1).

   > [!TIP]
   > Da utilizzare [le espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) per la ricerca, è necessario utilizzare il [comando Cerca nei file](/visualstudio/ide/reference/find-command) dal **modifica** menu anziché il **Trova simbolo**comando. Per abilitare le espressioni regolari, è necessario disporre del **utilizzo: espressioni regolari** selezionata nella casella di controllo la [nella finestra di dialogo Find](/visualstudio/ide/finding-and-replacing-text). Quindi è possibile fare clic sul pulsante freccia destra a destra del **Find What** casella per visualizzare un elenco di espressioni regolari di ricerca. Quando si seleziona un'espressione da questo elenco, viene sostituita come testo di ricerca nella **Find What** casella.

3. Selezionare una qualsiasi delle **trovare** opzioni.

4. Fare clic su **Trova successivo**.

   > [!NOTE]
   > Non è possibile cercare simboli in risorse di stringa, tasti di scelta rapida o binarie.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e assegnazione di risorse stringhe alle proprietà.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Simboli: identificatori di risorsa](../windows/symbols-resource-identifiers.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor di risorse](../windows/resource-editors.md)