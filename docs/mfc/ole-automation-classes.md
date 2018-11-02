---
title: Classi di automazione OLE
ms.date: 11/04/2016
f1_keywords:
- vc.classes.ole
helpviewer_keywords:
- Automation, classes
- Automation classes [MFC], OLE classes
- OLE Automation [MFC], classes
- Automation classes [MFC]
- OLE Automation [MFC]
ms.assetid: 96e5372b-ff8a-4da1-933b-4d9bbf4dceb3
ms.openlocfilehash: 590a2846f4e732179331eba1b0c61d3b9d6c1a19
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50505911"
---
# <a name="ole-automation-classes"></a>Classi di automazione OLE

Queste classi supportano i client di automazione (applicazioni che consentono di controllare altre applicazioni). Il server di automazione (applicazioni che possono essere controllati da altre applicazioni) è supportato tramite [mappe di invio](../mfc/reference/dispatch-maps.md).

[COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)<br/>
Usato per chiamare i server di automazione dal client di automazione. Quando si aggiunge una classe, questa classe viene utilizzata per creare le classi indipendenti dai tipi per i server di automazione che forniscono una libreria dei tipi.

[COleDispatchException](../mfc/reference/coledispatchexception-class.md)<br/>
Eccezione generata da un errore durante l'automazione OLE. Le eccezioni di automazione sono generate dai server di automazione e vengono acquisite dai client di automazione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

