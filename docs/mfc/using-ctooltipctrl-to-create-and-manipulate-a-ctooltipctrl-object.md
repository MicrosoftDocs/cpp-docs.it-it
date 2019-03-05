---
title: Utilizzo di CToolTipCtrl per creare e modificare un oggetto CToolTipCtrl
ms.date: 11/04/2016
f1_keywords:
- CToolTipCtrl
helpviewer_keywords:
- tool tips [MFC], creating
- CToolTipCtrl class [MFC], using
ms.assetid: 0a34583f-f66d-46a1-a239-31b80ea395ad
ms.openlocfilehash: b0f008c70eeb43455408e5b0ad302df6b923608e
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57261206"
---
# <a name="using-ctooltipctrl-to-create-and-manipulate-a-ctooltipctrl-object"></a>Utilizzo di CToolTipCtrl per creare e modificare un oggetto CToolTipCtrl

Di seguito è riportato un esempio di [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) utilizzo:

### <a name="to-create-and-manipulate-a-ctooltipctrl"></a>Per creare e modificare un oggetto CToolTipCtrl

1. Costruire l'oggetto `CToolTipCtrl`.

1. Chiamare [Create](../mfc/reference/ctooltipctrl-class.md#create) per creare il controllo comune di descrizione comando Windows e associarlo al `CToolTipCtrl` oggetto.

1. Chiamare [AddTool](../mfc/reference/ctooltipctrl-class.md#addtool) per registrare uno strumento con il controllo descrizione comando, in modo che le informazioni archiviate nella descrizione comando viene visualizzate quando il cursore si trova sullo strumento.

1. Chiamare [SetToolInfo](../mfc/reference/ctooltipctrl-class.md#settoolinfo) per impostare le informazioni che gestisce una descrizione comando per uno strumento.

1. Chiamare [SetToolRect](../mfc/reference/ctooltipctrl-class.md#settoolrect) per impostare un nuovo rettangolo di delimitazione per uno strumento.

1. Chiamare [HitTest](../mfc/reference/ctooltipctrl-class.md#hittest) per testare un punto per determinare se è all'interno del rettangolo di delimitazione dello strumento specificato e, in caso affermativo, recuperare le informazioni sullo strumento.

1. Chiamare [GetToolCount](../mfc/reference/ctooltipctrl-class.md#gettoolcount) per recuperare un conteggio degli strumenti registrato con il controllo descrizione comando.

## <a name="see-also"></a>Vedere anche

[Uso di CToolTipCtrl](../mfc/using-ctooltipctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
