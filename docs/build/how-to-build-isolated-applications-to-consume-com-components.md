---
title: "Procedura: Compilare applicazioni isolate per l'utilizzo di componenti COM"
ms.date: 11/04/2016
helpviewer_keywords:
- isolated applications [C++]
ms.assetid: 04587547-1174-44ab-bd99-1292358fba20
ms.openlocfilehash: 01b5c7056bd10a7c1f88df74b5c6b4aa78ff3fde
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417879"
---
# <a name="how-to-build-isolated-applications-to-consume-com-components"></a>Procedura: Compilare applicazioni isolate per l'utilizzo di componenti COM

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
