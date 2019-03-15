---
title: 'Procedura: Compilare componenti COM senza registrazione'
ms.date: 11/04/2016
helpviewer_keywords:
- COM components, registration-free
ms.assetid: 7e585d6a-0314-45b2-8f1b-cae9ac4df037
ms.openlocfilehash: 783677c97835acc98751fc4a19f9405af752b71a
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57809600"
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

[Procedura: Compilare applicazioni isolate per l'uso di componenti COM](how-to-build-isolated-applications-to-consume-com-components.md)
