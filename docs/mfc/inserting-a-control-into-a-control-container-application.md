---
title: "Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli"
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX control containers [MFC], inserting controls
- ActiveX controls [MFC], adding to projects
ms.assetid: bbb617ff-872f-43d8-b4d6-c49adb16b148
ms.openlocfilehash: 2ca503119df955e8b76f6f8c131421f3e2d85652
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50541375"
---
# <a name="activex-control-containers-inserting-a-control-into-a-control-container-application"></a>Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli

Prima di poter accedere un controllo ActiveX da un'applicazione contenitore di controlli ActiveX, è necessario aggiungere il controllo ActiveX per l'applicazione contenitore usando il [Inserisci controllo ActiveX](../windows/insert-activex-control-dialog-box.md) nella finestra di dialogo.

Per aggiungere un controllo ActiveX per il progetto di contenitore di controlli ActiveX, vedere [visualizzazione e aggiunta di controlli ActiveX a una finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).

Dopo aver aggiunto il controllo, è necessario aggiungere una variabile membro (del tipo di controllo di ActiveX) alla classe della finestra di dialogo. Per altre informazioni su questa procedura, vedere [aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md).

Dopo aver aggiunto la variabile membro una classe, definita come una classe wrapper, viene automaticamente generata e aggiunto al progetto. Questa classe viene utilizzata come interfaccia tra il contenitore del controllo e il controllo incorporato.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

