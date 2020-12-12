---
description: 'Altre informazioni su: creazione di finestre di dialogo non modali'
title: Creazione di finestre di dialogo non modali
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], modeless
- modeless dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
ms.assetid: 70d78c7f-3d40-477b-9f78-0f33c359f88b
ms.openlocfilehash: c754391a0f1ab2713f3ce01b5d30ccc33be4aaa5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309784"
---
# <a name="creating-modeless-dialog-boxes"></a>Creazione di finestre di dialogo non modali

Per una finestra di dialogo non modale, è necessario fornire un costruttore pubblico personalizzato nella classe della finestra di dialogo. Per creare una finestra di dialogo non modale, chiamare il costruttore pubblico e quindi chiamare la funzione membro [create](reference/cdialog-class.md#create) dell'oggetto finestra di dialogo per caricare la risorsa della finestra di dialogo. È possibile chiamare **create** durante o dopo la chiamata del costruttore. Se la proprietà della risorsa finestra di dialogo è **WS_VISIBLE**, la finestra di dialogo viene visualizzata immediatamente. In caso contrario, è necessario chiamare la relativa funzione membro [ShowWindow](reference/cwnd-class.md#showwindow) .

## <a name="see-also"></a>Vedi anche

[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
