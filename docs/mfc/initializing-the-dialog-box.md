---
title: Inizializzazione della finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- initializing dialog boxes [MFC]
- OnInitDialog method [MFC]
- modal dialog boxes [MFC], initializing
- modeless dialog boxes [MFC], initializing
- MFC dialog boxes [MFC], initializing
ms.assetid: 968142f5-19f9-4b34-a1d4-8e6412d4379b
ms.openlocfilehash: 87b3405f1441e730cf5c9ce7fc03d2c7372e55db
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57289533"
---
# <a name="initializing-the-dialog-box"></a>Inizializzazione della finestra di dialogo

Dopo la finestra di dialogo finestra e tutti i relativi controlli vengono creati, ma prima la finestra di dialogo viene visualizzata la finestra (di entrambi i tipi) sullo schermo, l'oggetto finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) viene chiamata la funzione membro. Per una finestra di dialogo modale, ciò si verifica durante la `DoModal` chiamare. Per una finestra di dialogo non modale `OnInitDialog` viene chiamato quando `Create` viene chiamato. È in genere eseguire l'override `OnInitDialog` per inizializzare i controlli della finestra di dialogo, ad esempio l'impostazione il testo iniziale di una casella di modifica. È necessario chiamare il `OnInitDialog` la funzione membro della classe di base, `CDialog`, dal `OnInitDialog` eseguire l'override.

Se si desidera impostare il colore di sfondo della finestra di dialogo (e di tutte le altre finestre di dialogo nell'applicazione), vedere [impostando il colore di sfondo della finestra di dialogo](../mfc/setting-the-dialog-boxs-background-color.md).

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)
