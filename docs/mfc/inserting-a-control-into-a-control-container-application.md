---
title: 'Contenitori di controlli ActiveX: Inserimento di un controllo in un''applicazione contenitore di controlli | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- ActiveX control containers [MFC], inserting controls
- ActiveX controls [MFC], adding to projects
ms.assetid: bbb617ff-872f-43d8-b4d6-c49adb16b148
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3cf288014f47ee1e497ca5a38a3c48368a3b1e6f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="activex-control-containers-inserting-a-control-into-a-control-container-application"></a>Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli
Prima di accedere a un controllo ActiveX da un'applicazione contenitore di controlli ActiveX, è necessario aggiungere il controllo ActiveX per il contenitore dell'applicazione utilizzando il [Inserisci controllo ActiveX](../windows/insert-activex-control-dialog-box.md) la finestra di dialogo.  
  
 Per aggiungere un controllo ActiveX per il progetto di contenitore di controlli ActiveX, vedere [la visualizzazione e aggiunta di controlli ActiveX a una finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).  
  
 Dopo aver aggiunto il controllo, è necessario aggiungere una variabile membro (del tipo di controllo ActiveX) per la classe di finestra di dialogo. Per ulteriori informazioni su questa procedura, vedere [aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md).  
  
 Dopo aver aggiunto la variabile membro una classe, definita come una classe wrapper, viene automaticamente generata e aggiunto al progetto. Questa classe viene utilizzata come interfaccia tra il contenitore del controllo e il controllo incorporato.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
