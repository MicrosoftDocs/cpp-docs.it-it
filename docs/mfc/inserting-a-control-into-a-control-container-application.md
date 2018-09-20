---
title: "Contenitori di controlli ActiveX: Inserimento di un controllo in un'applicazione contenitore di controlli | Microsoft Docs"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ActiveX control containers [MFC], inserting controls
- ActiveX controls [MFC], adding to projects
ms.assetid: bbb617ff-872f-43d8-b4d6-c49adb16b148
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f025c9fa564bcd37c585db6ea5c5cd0f5be83e0d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46432139"
---
# <a name="activex-control-containers-inserting-a-control-into-a-control-container-application"></a>Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli

Prima di poter accedere un controllo ActiveX da un'applicazione contenitore di controlli ActiveX, è necessario aggiungere il controllo ActiveX per l'applicazione contenitore usando il [Inserisci controllo ActiveX](../windows/insert-activex-control-dialog-box.md) nella finestra di dialogo.

Per aggiungere un controllo ActiveX per il progetto di contenitore di controlli ActiveX, vedere [visualizzazione e aggiunta di controlli ActiveX a una finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).

Dopo aver aggiunto il controllo, è necessario aggiungere una variabile membro (del tipo di controllo di ActiveX) alla classe della finestra di dialogo. Per altre informazioni su questa procedura, vedere [aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md).

Dopo aver aggiunto la variabile membro una classe, definita come una classe wrapper, viene automaticamente generata e aggiunto al progetto. Questa classe viene utilizzata come interfaccia tra il contenitore del controllo e il controllo incorporato.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

