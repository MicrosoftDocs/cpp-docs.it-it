---
title: Creazione di finestre di dialogo non modali
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], modeless
- modeless dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
ms.assetid: 70d78c7f-3d40-477b-9f78-0f33c359f88b
ms.openlocfilehash: 71cca82e667ddbf5cfc4c2abb5880cd69c7fafae
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57266354"
---
# <a name="creating-modeless-dialog-boxes"></a>Creazione di finestre di dialogo non modali

Per una finestra di dialogo non modale, è necessario fornire il proprio costruttore pubblico nella classe della finestra. Per creare una finestra di dialogo non modale, chiamare il costruttore pubblico, quindi l'oggetto finestra di dialogo [Create](../mfc/reference/cdialog-class.md#create) funzione membro per caricare la risorsa finestra di dialogo. È possibile chiamare **Create** durante o dopo la chiamata al costruttore. Se la risorsa finestra di dialogo con la proprietà **WS_VISIBLE**, la finestra di dialogo viene visualizzata immediatamente. Se non è necessario chiamare il relativo [ShowWindow](../mfc/reference/cwnd-class.md#showwindow) funzione membro.

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)
