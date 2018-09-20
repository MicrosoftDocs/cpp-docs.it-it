---
title: Creazione di finestre di dialogo non modali | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC dialog boxes [MFC], modeless
- modeless dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
ms.assetid: 70d78c7f-3d40-477b-9f78-0f33c359f88b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 77b80f66f2956e71b90e4d939a0fb74aef28edb1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46407036"
---
# <a name="creating-modeless-dialog-boxes"></a>Creazione di finestre di dialogo non modali

Per una finestra di dialogo non modale, è necessario fornire il proprio costruttore pubblico nella classe della finestra. Per creare una finestra di dialogo non modale, chiamare il costruttore pubblico, quindi l'oggetto finestra di dialogo [Create](../mfc/reference/cdialog-class.md#create) funzione membro per caricare la risorsa finestra di dialogo. È possibile chiamare **Create** durante o dopo la chiamata al costruttore. Se la risorsa finestra di dialogo con la proprietà **WS_VISIBLE**, la finestra di dialogo viene visualizzata immediatamente. Se non è necessario chiamare il relativo [ShowWindow](../mfc/reference/cwnd-class.md#showwindow) funzione membro.

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

