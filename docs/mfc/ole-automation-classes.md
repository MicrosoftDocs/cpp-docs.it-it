---
title: Classi di automazione OLE
ms.date: 11/04/2016
helpviewer_keywords:
- Automation, classes
- Automation classes [MFC], OLE classes
- OLE Automation [MFC], classes
- Automation classes [MFC]
- OLE Automation [MFC]
ms.assetid: 96e5372b-ff8a-4da1-933b-4d9bbf4dceb3
ms.openlocfilehash: 644a4930eb55636ba6e87b949ed610b725334661
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447689"
---
# <a name="ole-automation-classes"></a>Classi di automazione OLE

Queste classi supportano i client di automazione (applicazioni che controllano altre applicazioni). I server di automazione, ovvero le applicazioni che possono essere controllati da altre applicazioni, sono supportati tramite le [mappe di invio](../mfc/reference/dispatch-maps.md).

[COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)<br/>
Usato per chiamare i server di automazione dal client di automazione. Quando si aggiunge una classe, questa classe viene utilizzata per creare classi indipendenti dai tipi per i server di automazione che forniscono una libreria dei tipi.

[COleDispatchException](../mfc/reference/coledispatchexception-class.md)<br/>
Eccezione generata da un errore durante l'automazione OLE. Le eccezioni di automazione sono generate dai server di automazione e vengono acquisite dai client di automazione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
