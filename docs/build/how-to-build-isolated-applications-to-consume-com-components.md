---
title: "Procedura: Compilazione di applicazioni isolate per l'utilizzo di componenti COM"
ms.date: 11/04/2016
helpviewer_keywords:
- isolated applications [C++]
ms.assetid: 04587547-1174-44ab-bd99-1292358fba20
ms.openlocfilehash: 8ae3c51502267f202cbb85ea7be2a81dc3310410
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69493241"
---
# <a name="how-to-build-isolated-applications-to-consume-com-components"></a>Procedura: Compilazione di applicazioni isolate per l'utilizzo di componenti COM

Le applicazioni isolate sono applicazioni con manifesti integrati nel programma. È possibile creare applicazioni isolate per utilizzare i componenti COM.

### <a name="to-add-com-references-to-manifests-of-isolated-applications"></a>Per aggiungere riferimenti COM a manifesti di applicazioni isolate

1. Aprire le pagine delle proprietà del progetto per l'applicazione isolata.

1. Espandere il nodo **proprietà di configurazione** , quindi espandere il nodo **strumento Manifesto** .

1. Selezionare la pagina delle proprietà **com isolata** , quindi impostare la proprietà **nome file componente** sul nome del componente COM che si desidera venga utilizzato dall'applicazione isolata.

1. Fare clic su **OK**.

### <a name="to-build-manifests-into-isolated-applications"></a>Per compilare manifesti in applicazioni isolate

1. Aprire le pagine delle proprietà del progetto per l'applicazione isolata.

1. Espandere il nodo **proprietà di configurazione** , quindi espandere il nodo **strumento Manifesto** .

1. Selezionare la pagina delle proprietà **input e output** , quindi impostare la proprietà **manifesto** di incorporamento su **Sì**.

1. Fare clic su **OK**.

1. Compilare la soluzione.

## <a name="see-also"></a>Vedere anche

[Applicazioni isolate](/windows/win32/SbsCs/isolated-applications)<br/>
[Informazioni sugli assembly affiancati](/windows/win32/SbsCs/about-side-by-side-assemblies-)
