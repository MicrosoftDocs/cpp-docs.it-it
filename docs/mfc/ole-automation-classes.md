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
ms.openlocfilehash: 04cb93b8ce3699b579342d33c0dae77176878379
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625303"
---
# <a name="ole-automation-classes"></a>Classi di automazione OLE

Queste classi supportano i client di automazione (applicazioni che controllano altre applicazioni). I server di automazione, ovvero le applicazioni che possono essere controllati da altre applicazioni, sono supportati tramite le [mappe di invio](reference/dispatch-maps.md).

[COleDispatchDriver](reference/coledispatchdriver-class.md)<br/>
Usato per chiamare i server di automazione dal client di automazione. Quando si aggiunge una classe, questa classe viene utilizzata per creare classi indipendenti dai tipi per i server di automazione che forniscono una libreria dei tipi.

[COleDispatchException](reference/coledispatchexception-class.md)<br/>
Eccezione generata da un errore durante l'automazione OLE. Le eccezioni di automazione sono generate dai server di automazione e vengono acquisite dai client di automazione.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](class-library-overview.md)
