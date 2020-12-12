---
description: 'Altre informazioni su: eliminazione definitiva della finestra di dialogo'
title: Distruzione della finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- dialog boxes [MFC], deleting
- destruction, dialog box
- dialog boxes [MFC], destroying
- dialog boxes [MFC], removing
- modeless dialog boxes [MFC], destroying
- MFC dialog boxes [MFC], destroying
- modal dialog boxes [MFC], destroying
ms.assetid: dabceee7-3639-4d85-bf34-73515441b3d0
ms.openlocfilehash: f46c86e5f3e869f321b8306470e5821658ceafcb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327840"
---
# <a name="destroying-the-dialog-box"></a>Distruzione della finestra di dialogo

Le finestre di dialogo modali vengono in genere create nel stack frame e distrutte al termine della funzione che le ha create. Il distruttore dell'oggetto finestra di dialogo viene chiamato quando l'oggetto esce dall'ambito.

Le finestre di dialogo non modali vengono in genere create e sono di proprietà di una visualizzazione padre o di una finestra cornice, ovvero la finestra cornice principale dell'applicazione o una finestra cornice del documento. Il gestore [OnClose](reference/cwnd-class.md#onclose) predefinito chiama [DestroyWindow](reference/cwnd-class.md#destroywindow), che elimina la finestra di dialogo. Se la finestra di dialogo è autonoma, senza puntatori o altra semantica di proprietà speciale, è necessario eseguire l'override di [PostNcDestroy](reference/cwnd-class.md#postncdestroy) per eliminare l'oggetto finestra di dialogo C++. È anche necessario eseguire l'override di [OnCancel](reference/cdialog-class.md#oncancel) e chiamare `DestroyWindow` dall'interno di esso. In caso contrario, il proprietario della finestra di dialogo deve eliminare l'oggetto C++ quando non è più necessario.

## <a name="see-also"></a>Vedi anche

[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
