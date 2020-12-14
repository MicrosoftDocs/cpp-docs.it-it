---
description: "Altre informazioni su: contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli"
title: "Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli"
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX control containers [MFC], inserting controls
- ActiveX controls [MFC], adding to projects
ms.assetid: bbb617ff-872f-43d8-b4d6-c49adb16b148
ms.openlocfilehash: 14e1895c39aeea788ab83b8a18be6d8b0ef6c20c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220604"
---
# <a name="activex-control-containers-inserting-a-control-into-a-control-container-application"></a>Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli

Prima di poter accedere a un controllo ActiveX da un'applicazione contenitore di controlli ActiveX, è necessario aggiungere il controllo ActiveX all'applicazione contenitore utilizzando la finestra di dialogo [Inserisci controllo ActiveX](../windows/adding-editing-or-deleting-controls.md) .

Per aggiungere un controllo ActiveX al progetto del contenitore di controlli ActiveX, vedere [visualizzazione e aggiunta di controlli ActiveX a una finestra di dialogo](../windows/adding-editing-or-deleting-controls.md).

Una volta aggiunto il controllo, è necessario aggiungere una variabile membro (del tipo di controllo ActiveX) alla classe della finestra di dialogo. Per ulteriori informazioni su questa procedura, vedere [aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md).

Una volta aggiunta la variabile membro, una classe, definita classe wrapper, viene generata automaticamente e aggiunta al progetto. Questa classe viene utilizzata come interfaccia tra il contenitore di controlli e il controllo incorporato.

## <a name="see-also"></a>Vedi anche

[Contenitori di controlli ActiveX](activex-control-containers.md)
