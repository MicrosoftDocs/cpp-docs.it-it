---
title: 'Procedura: Compilare componenti COM senza registrazione'
ms.date: 11/04/2016
helpviewer_keywords:
- COM components, registration-free
ms.assetid: 7e585d6a-0314-45b2-8f1b-cae9ac4df037
ms.openlocfilehash: 503c3e4399359d793ce660f36844d2edc6602146
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57416770"
---
# <a name="how-to-build-registration-free-com-components"></a>Procedura: Compilare componenti COM senza registrazione

I componenti COM senza registrazione sono i componenti COM che dispongono di manifesti incorporati nelle DLL.

### <a name="to-build-manifests-into-com-components"></a>Per generare manifesti nei componenti COM

1. Aprire le pagine delle proprietà di progetto per il componente COM.

1. Espandere la **le proprietà di configurazione** nodo, quindi espandere il **strumento manifesto** nodo.

1. Selezionare il **di Input e Output** pagina delle proprietà e quindi impostare il **Incorpora manifesto** uguale alla proprietà **Sì**.

1. Fare clic su **OK**.

1. Compilare la soluzione.

## <a name="see-also"></a>Vedere anche

[Applicazioni isolate](/windows/desktop/SbsCs/isolated-applications)<br/>
[Informazioni sugli assembly Side-by-Side](/windows/desktop/SbsCs/about-side-by-side-assemblies-)<br/>
[Procedura: Compilare applicazioni isolate per l'uso di componenti COM](../build/how-to-build-isolated-applications-to-consume-com-components.md)
