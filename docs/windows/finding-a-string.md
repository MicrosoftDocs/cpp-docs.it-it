---
title: Ricerca di una risorsa di tipo stringa (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.string
dev_langs:
- C++
helpviewer_keywords:
- strings [C++], searching
- strings [C++]
ms.assetid: c2497173-f356-4f77-97d6-f0ac41782510
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 23855fc0605992c7348fd4a8dd901abb4d629949
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50057725"
---
# <a name="finding-a-string-resource-c"></a>Ricerca di una risorsa di tipo stringa (C++)

È possibile eseguire la ricerca di una o più stringhe nella tabella di stringhe e usare [le espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) con il **Cerca nei file** comando (**Edit** menu) per individuare tutte le istanze di stringhe che corrispondono a un criterio.

### <a name="to-find-a-string-in-the-string-table"></a>Per trovare una stringa nella tabella di stringhe

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Nel **Edit** menu, fare clic su **Trova e sostituisci**, quindi scegliere **trovare**.

3. Nel **Find What** , selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare l'identificatore didascalia di testo o della risorsa della stringa da trovare.

4. Selezionare una qualsiasi delle **trovare** opzioni.

5. Fare clic su **Trova successivo**.

   > [!TIP]
   > Per usare le espressioni regolari nella ricerca nei file, usare il **Cerca nei file** comando. Digitare un'espressione regolare corrispondente a un modello oppure fare clic sul pulsante a destra del **Find What** casella per visualizzare un elenco di espressioni regolari di ricerca. Quando si seleziona un'espressione da questo elenco, viene sostituita come testo di ricerca nella **Find What** casella. Se si utilizzano espressioni regolari, assicurarsi che il **utilizzare: le espressioni regolari** casella di controllo è selezionata.

Per informazioni sull'aggiunta di risorse a progetti gestiti (quelli destinati a common language runtime), vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [procedura dettagliata: localizzazione di Windows Form](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor stringhe](../windows/string-editor.md)