---
title: Inizializzazione della finestra di dialogo | Documenti Microsoft
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
ms.openlocfilehash: 1c4bc280c57998b23082f11f4ebe42b660177d3c
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929621"
---
# <a name="initializing-the-dialog-box"></a>Inizializzazione della finestra di dialogo
Dopo la finestra di dialogo casella e tutti i controlli vengono creati ma appena prima la finestra di dialogo verrà visualizzata la finestra (di entrambi i tipi) sullo schermo, l'oggetto finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) funzione membro viene chiamata. Per una finestra di dialogo modale, questo errore si verifica durante la `DoModal` chiamare. Per una finestra di dialogo non modale `OnInitDialog` viene chiamato quando `Create` viene chiamato. È in genere eseguire l'override `OnInitDialog` per inizializzare i controlli della finestra di dialogo, ad esempio l'impostazione il testo iniziale di una casella di modifica. È necessario chiamare il `OnInitDialog` funzione membro della classe base `CDialog`, dal `OnInitDialog` eseguire l'override.  
  
 Se si desidera impostare il colore di sfondo della finestra di dialogo (e che tutte le altre finestre di dialogo dell'applicazione), vedere [impostando il colore di sfondo della finestra di dialogo](../mfc/setting-the-dialog-boxs-background-color.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

