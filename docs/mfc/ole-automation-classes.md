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
ms.openlocfilehash: 08e33e1fce3f792e76e2eec4ecb59601c99d9822
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62348718"
---
# <a name="ole-automation-classes"></a>Classi di automazione OLE

Queste classi supportano i client di automazione (applicazioni che consentono di controllare altre applicazioni). Il server di automazione (applicazioni che possono essere controllati da altre applicazioni) è supportato tramite [mappe di invio](../mfc/reference/dispatch-maps.md).

[COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)<br/>
Usato per chiamare i server di automazione dal client di automazione. Quando si aggiunge una classe, questa classe viene utilizzata per creare le classi indipendenti dai tipi per i server di automazione che forniscono una libreria dei tipi.

[COleDispatchException](../mfc/reference/coledispatchexception-class.md)<br/>
Eccezione generata da un errore durante l'automazione OLE. Le eccezioni di automazione sono generate dai server di automazione e vengono acquisite dai client di automazione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
