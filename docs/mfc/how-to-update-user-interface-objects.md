---
title: "Procedura: aggiornare oggetti dell'interfaccia utente | Microsoft Docs"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- menus [MFC], updating as context changes
- user interface objects [MFC], updating
- user interface objects [MFC]
- update handlers [MFC]
- enabling UI elements [MFC]
- disabling menus [MFC]
- updating user-interface objects [MFC]
- disabling UI elements [MFC]
- commands [MFC], updating UI
- enabling menus [MFC]
ms.assetid: 82f09773-c978-427b-b321-05a6143b7369
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8afe8f6f7594c2dff75125aa56a210505bf5301d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46410587"
---
# <a name="how-to-update-user-interface-objects"></a>Procedura: aggiornare oggetti dell'interfaccia utente

In genere, le voci di menu e pulsanti della barra degli strumenti dispongono di più di uno stato. Ad esempio, una voce di menu è inattivo (in grigio) se non è disponibile in questo contesto. Voci di menu possono inoltre essere selezionato o deselezionato. È anche possibile disabilitare un pulsante della barra degli strumenti se non è disponibile, o possa essere verificato.

Chi Aggiorna lo stato di questi elementi come programmare cambiano le condizioni in modo logico, se una voce di menu Genera un comando che viene gestito da, ad esempio, un documento, è opportuno aggiornare la voce di menu per il documento. Il documento contiene probabilmente le informazioni su cui si basa l'aggiornamento.

Se un comando contiene più oggetti dell'interfaccia utente (ad esempio una voce di menu e un pulsante della barra degli strumenti), entrambi vengono indirizzate alla stessa funzione del gestore. In questo modo viene incapsulata del codice di aggiornamento dell'interfaccia utente per tutti gli oggetti equivalenti dell'interfaccia utente in un'unica posizione.

Il framework offre una comoda interfaccia per l'aggiornamento automatico di oggetti dell'interfaccia utente. È possibile scegliere di eseguire l'aggiornamento in un altro modo, ma l'interfaccia fornita è efficiente e facile da usare.

Gli argomenti seguenti illustrano l'uso di gestori di aggiornamento:

- [Quando vengono chiamati i gestori aggiornamento](../mfc/when-update-handlers-are-called.md)

- [Macro ON_UPDATE_COMMAND_UI](../mfc/on-update-command-ui-macro.md)

- [Classe CCmdUI](../mfc/the-ccmdui-class.md)

## <a name="see-also"></a>Vedere anche

[Menu](../mfc/menus-mfc.md)

