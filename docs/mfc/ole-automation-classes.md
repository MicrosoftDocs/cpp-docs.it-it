---
title: Classi di automazione OLE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.ole
dev_langs:
- C++
helpviewer_keywords:
- Automation, classes
- Automation classes [MFC], OLE classes
- OLE Automation [MFC], classes
- Automation classes [MFC]
- OLE Automation [MFC]
ms.assetid: 96e5372b-ff8a-4da1-933b-4d9bbf4dceb3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ea35e51296b2fc528657c4dd9f9b9b76b84aae83
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46391514"
---
# <a name="ole-automation-classes"></a>Classi di automazione OLE

Queste classi supportano i client di automazione (applicazioni che consentono di controllare altre applicazioni). Il server di automazione (applicazioni che possono essere controllati da altre applicazioni) è supportato tramite [mappe di invio](../mfc/reference/dispatch-maps.md).

[COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)<br/>
Usato per chiamare i server di automazione dal client di automazione. Quando si aggiunge una classe, questa classe viene utilizzata per creare le classi indipendenti dai tipi per i server di automazione che forniscono una libreria dei tipi.

[COleDispatchException](../mfc/reference/coledispatchexception-class.md)<br/>
Eccezione generata da un errore durante l'automazione OLE. Le eccezioni di automazione sono generate dai server di automazione e vengono acquisite dai client di automazione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

