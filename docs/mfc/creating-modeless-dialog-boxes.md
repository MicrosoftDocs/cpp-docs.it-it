---
title: Creazione di finestre di dialogo non modali
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], modeless
- modeless dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
ms.assetid: 70d78c7f-3d40-477b-9f78-0f33c359f88b
ms.openlocfilehash: 7a6125e84438b0ef2ad541c26bda33051d483c8d
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619632"
---
# <a name="creating-modeless-dialog-boxes"></a>Creazione di finestre di dialogo non modali

Per una finestra di dialogo non modale, è necessario fornire un costruttore pubblico personalizzato nella classe della finestra di dialogo. Per creare una finestra di dialogo non modale, chiamare il costruttore pubblico e quindi chiamare la funzione membro [create](reference/cdialog-class.md#create) dell'oggetto finestra di dialogo per caricare la risorsa della finestra di dialogo. È possibile chiamare **create** durante o dopo la chiamata del costruttore. Se la proprietà della risorsa finestra di dialogo è **WS_VISIBLE**, la finestra di dialogo viene visualizzata immediatamente. In caso contrario, è necessario chiamare la relativa funzione membro [ShowWindow](reference/cwnd-class.md#showwindow) .

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
