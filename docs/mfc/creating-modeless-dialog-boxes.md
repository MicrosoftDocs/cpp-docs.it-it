---
title: Creazione di finestre di dialogo non modali
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], modeless
- modeless dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
ms.assetid: 70d78c7f-3d40-477b-9f78-0f33c359f88b
ms.openlocfilehash: 7da6d82257d1407dfcf4d6d3c15cdadbb8c0fa30
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685663"
---
# <a name="creating-modeless-dialog-boxes"></a>Creazione di finestre di dialogo non modali

Per una finestra di dialogo non modale, è necessario fornire un costruttore pubblico personalizzato nella classe della finestra di dialogo. Per creare una finestra di dialogo non modale, chiamare il costruttore pubblico e quindi chiamare la funzione membro [create](../mfc/reference/cdialog-class.md#create) dell'oggetto finestra di dialogo per caricare la risorsa della finestra di dialogo. È possibile chiamare **create** durante o dopo la chiamata del costruttore. Se la risorsa della finestra di dialogo contiene la proprietà **WS_VISIBLE**, la finestra di dialogo viene visualizzata immediatamente. In caso contrario, è necessario chiamare la relativa funzione membro [ShowWindow](../mfc/reference/cwnd-class.md#showwindow) .

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)
