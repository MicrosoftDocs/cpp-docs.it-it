---
description: 'Altre informazioni su: uso di CToolTipCtrl per creare e modificare un oggetto CToolTipCtrl'
title: Utilizzo di CToolTipCtrl per creare e modificare un oggetto CToolTipCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- tool tips [MFC], creating
- CToolTipCtrl class [MFC], using
ms.assetid: 0a34583f-f66d-46a1-a239-31b80ea395ad
ms.openlocfilehash: 363d46ce078b71cf88d742ae390ab674a73ab935
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202340"
---
# <a name="using-ctooltipctrl-to-create-and-manipulate-a-ctooltipctrl-object"></a>Utilizzo di CToolTipCtrl per creare e modificare un oggetto CToolTipCtrl

Di seguito è riportato un esempio di utilizzo di [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) :

### <a name="to-create-and-manipulate-a-ctooltipctrl"></a>Per creare e modificare un oggetto CToolTipCtrl

1. Costruire l'oggetto `CToolTipCtrl`.

1. Chiamare [create](../mfc/reference/ctooltipctrl-class.md#create) per creare il controllo comune di descrizione comandi di Windows e collegarlo all' `CToolTipCtrl` oggetto.

1. Chiamare [AddTool](../mfc/reference/ctooltipctrl-class.md#addtool) per registrare uno strumento con il controllo descrizione comando, in modo che le informazioni archiviate nella descrizione comandi vengano visualizzate quando il cursore si trova sullo strumento.

1. Chiamare [SetToolInfo](../mfc/reference/ctooltipctrl-class.md#settoolinfo) per impostare le informazioni gestite da una descrizione comando per uno strumento.

1. Chiamare [SetToolRect](../mfc/reference/ctooltipctrl-class.md#settoolrect) per impostare un nuovo rettangolo di delimitazione per uno strumento.

1. Chiamare [HitTest](../mfc/reference/ctooltipctrl-class.md#hittest) per verificare un punto per determinare se si trova all'interno del rettangolo di delimitazione dello strumento specificato e, in caso affermativo, recuperare le informazioni sullo strumento.

1. Chiamare [GetToolCount](../mfc/reference/ctooltipctrl-class.md#gettoolcount) per recuperare un conteggio degli strumenti registrati con il controllo descrizione comando.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CToolTipCtrl](../mfc/using-ctooltipctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
