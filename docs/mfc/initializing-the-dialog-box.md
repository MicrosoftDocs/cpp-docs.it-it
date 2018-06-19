---
title: Nella finestra di dialogo di inizializzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- initializing dialog boxes [MFC]
- OnInitDialog method [MFC]
- modal dialog boxes [MFC], initializing
- modeless dialog boxes [MFC], initializing
- MFC dialog boxes [MFC], initializing
ms.assetid: 968142f5-19f9-4b34-a1d4-8e6412d4379b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7918180a437687eded090b3d014e4affe38fe8f9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33344711"
---
# <a name="initializing-the-dialog-box"></a>Inizializzazione della finestra di dialogo
Dopo la finestra di dialogo casella e tutti i relativi controlli vengono creati, ma prima la finestra di dialogo verrà visualizzata la (di entrambi i tipi) sullo schermo, l'oggetto finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) viene chiamata la funzione membro. Per una finestra di dialogo modale, ciò si verifica durante la `DoModal` chiamare. Per una finestra di dialogo non modale, `OnInitDialog` viene chiamato quando **crea** viene chiamato. È in genere di eseguire l'override `OnInitDialog` per inizializzare i controlli della finestra di dialogo, ad esempio l'impostazione il testo iniziale di una casella di modifica. È necessario chiamare il `OnInitDialog` funzione membro della classe di base, `CDialog`, dal `OnInitDialog` eseguire l'override.  
  
 Se si desidera impostare il colore di sfondo della finestra di dialogo (e che tutte le altre finestre di dialogo dell'applicazione), vedere [impostando il colore di sfondo della finestra di dialogo](../mfc/setting-the-dialog-boxs-background-color.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

