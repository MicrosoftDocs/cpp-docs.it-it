---
title: "Procedura: compilare applicazioni isolate per l'utilizzo di componenti COM | Microsoft Docs"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- isolated applications [C++]
ms.assetid: 04587547-1174-44ab-bd99-1292358fba20
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6d2acabb6a5e9c35029b346097a66eaf1311826c
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45704028"
---
# <a name="how-to-build-isolated-applications-to-consume-com-components"></a>Procedura: compilare applicazioni isolate per l'utilizzo di componenti COM

Applicazioni isolate sono applicazioni che contengono manifesti generati nel programma. È possibile creare applicazioni isolate per l'utilizzo di componenti COM.

### <a name="to-add-com-references-to-manifests-of-isolated-applications"></a>Per aggiungere riferimenti COM da manifesti di applicazioni isolate

1. Aprire le pagine delle proprietà di progetto per l'applicazione di tipo isolato.

1. Espandere la **le proprietà di configurazione** nodo, quindi espandere il **strumento manifesto** nodo.

1. Selezionare il **COM isolato** pagina delle proprietà e quindi impostare il **nome File componente** proprietà sul nome del componente COM che si desidera che l'applicazione di tipo isolato può usare.

1. Fare clic su **OK**.

### <a name="to-build-manifests-into-isolated-applications"></a>Per creare i manifesti nelle applicazioni isolate

1. Aprire le pagine delle proprietà di progetto per l'applicazione di tipo isolato.

1. Espandere la **le proprietà di configurazione** nodo, quindi espandere il **strumento manifesto** nodo.

1. Selezionare il **di Input e Output** pagina delle proprietà e quindi impostare il **Incorpora manifesto** uguale alla proprietà **Sì**.

1. Fare clic su **OK**.

1. Compilare la soluzione.

## <a name="see-also"></a>Vedere anche

[Applicazioni isolate](/windows/desktop/SbsCs/isolated-applications)<br/>
[Informazioni sugli assembly Side-by-Side](/windows/desktop/SbsCs/about-side-by-side-assemblies-)