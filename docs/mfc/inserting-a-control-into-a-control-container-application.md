---
title: "Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli"
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX control containers [MFC], inserting controls
- ActiveX controls [MFC], adding to projects
ms.assetid: bbb617ff-872f-43d8-b4d6-c49adb16b148
ms.openlocfilehash: 1d2fc82628b3bcf842a6efb1d36ab9e8389fc0ba
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84618489"
---
# <a name="activex-control-containers-inserting-a-control-into-a-control-container-application"></a>Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli

Prima di poter accedere a un controllo ActiveX da un'applicazione contenitore di controlli ActiveX, è necessario aggiungere il controllo ActiveX all'applicazione contenitore utilizzando la finestra di dialogo [Inserisci controllo ActiveX](../windows/insert-activex-control-dialog-box.md) .

Per aggiungere un controllo ActiveX al progetto del contenitore di controlli ActiveX, vedere [visualizzazione e aggiunta di controlli ActiveX a una finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).

Una volta aggiunto il controllo, è necessario aggiungere una variabile membro (del tipo di controllo ActiveX) alla classe della finestra di dialogo. Per ulteriori informazioni su questa procedura, vedere [aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md).

Una volta aggiunta la variabile membro, una classe, definita classe wrapper, viene generata automaticamente e aggiunta al progetto. Questa classe viene utilizzata come interfaccia tra il contenitore di controlli e il controllo incorporato.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](activex-control-containers.md)
