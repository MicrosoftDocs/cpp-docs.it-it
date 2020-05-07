---
title: 'Procedura: compilare componenti COM senza registrazione'
ms.date: 11/04/2016
helpviewer_keywords:
- COM components, registration-free
ms.assetid: 7e585d6a-0314-45b2-8f1b-cae9ac4df037
ms.openlocfilehash: 783677c97835acc98751fc4a19f9405af752b71a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62188938"
---
# <a name="how-to-build-registration-free-com-components"></a>Procedura: compilare componenti COM senza registrazione

I componenti COM senza registrazione sono componenti COM con manifesti incorporati nelle DLL.

### <a name="to-build-manifests-into-com-components"></a>Per compilare manifesti in componenti COM

1. Aprire le pagine delle proprietà del progetto per il componente COM.

1. Espandere il nodo **proprietà di configurazione** , quindi espandere il nodo **strumento Manifesto** .

1. Selezionare la pagina delle proprietà **input e output** , quindi impostare la proprietà **manifesto di incorporamento** su **Sì**.

1. Fare clic su **OK**.

1. Compilare la soluzione.

## <a name="see-also"></a>Vedere anche

[Procedura: Compilare applicazioni isolate per l'utilizzo di componenti COM](how-to-build-isolated-applications-to-consume-com-components.md)
