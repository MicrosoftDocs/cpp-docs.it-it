---
title: "Contenitori di controlli ActiveX: Inserimento di un controllo in un'applicazione contenitore di controlli | Documenti Microsoft"
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
ms.openlocfilehash: 716c045fc10b4dd5f3dede20a233d958e669bbd7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="activex-control-containers-inserting-a-control-into-a-control-container-application"></a>Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli
Prima di accedere a un controllo ActiveX da un'applicazione contenitore di controlli ActiveX, è necessario aggiungere il controllo ActiveX per il contenitore dell'applicazione utilizzando il [Inserisci controllo ActiveX](../windows/insert-activex-control-dialog-box.md) la finestra di dialogo.  
  
 Per aggiungere un controllo ActiveX per il progetto di contenitore di controlli ActiveX, vedere [la visualizzazione e aggiunta di controlli ActiveX a una finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).  
  
 Dopo aver aggiunto il controllo, è necessario aggiungere una variabile membro (del tipo di controllo ActiveX) per la classe di finestra di dialogo. Per ulteriori informazioni su questa procedura, vedere [aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md).  
  
 Dopo aver aggiunto la variabile membro una classe, definita come una classe wrapper, viene automaticamente generata e aggiunto al progetto. Questa classe viene utilizzata come interfaccia tra il contenitore del controllo e il controllo incorporato.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

