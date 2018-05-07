---
title: Utilizzo di CToolTipCtrl per creare e modificare un oggetto CToolTipCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CToolTipCtrl
dev_langs:
- C++
helpviewer_keywords:
- tool tips [MFC], creating
- CToolTipCtrl class [MFC], using
ms.assetid: 0a34583f-f66d-46a1-a239-31b80ea395ad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6f2143ea37cfe9448e43aacfa75622beab93d2fb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="using-ctooltipctrl-to-create-and-manipulate-a-ctooltipctrl-object"></a>Utilizzo di CToolTipCtrl per creare e modificare un oggetto CToolTipCtrl
Di seguito è riportato un esempio di [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) utilizzo:  
  
### <a name="to-create-and-manipulate-a-ctooltipctrl"></a>Per creare e modificare un oggetto CToolTipCtrl  
  
1.  Costruire l'oggetto `CToolTipCtrl`.  
  
2.  Chiamare [crea](../mfc/reference/ctooltipctrl-class.md#create) per creare il controllo comune di descrizione comando Windows e associarlo al `CToolTipCtrl` oggetto.  
  
3.  Chiamare [AddTool](../mfc/reference/ctooltipctrl-class.md#addtool) per registrare uno strumento con il controllo descrizione comandi, in modo che le informazioni archiviate nella descrizione comando viene visualizzate quando il cursore si trova sullo strumento.  
  
4.  Chiamare [SetToolInfo](../mfc/reference/ctooltipctrl-class.md#settoolinfo) per impostare le informazioni che gestisce una descrizione comando per uno strumento.  
  
5.  Chiamare [SetToolRect](../mfc/reference/ctooltipctrl-class.md#settoolrect) per impostare un nuovo rettangolo di delimitazione per uno strumento.  
  
6.  Chiamare [HitTest](../mfc/reference/ctooltipctrl-class.md#hittest) per testare un punto per determinare se è all'interno del rettangolo di delimitazione dello strumento specificato e, in caso affermativo, recuperare le informazioni sullo strumento.  
  
7.  Chiamare [GetToolCount](../mfc/reference/ctooltipctrl-class.md#gettoolcount) per recuperare un conteggio degli strumenti registrato con il controllo descrizione comandi.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

