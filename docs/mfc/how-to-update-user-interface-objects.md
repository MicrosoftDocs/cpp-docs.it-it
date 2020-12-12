---
description: 'Altre informazioni su: procedura: aggiornare oggetti User-Interface'
title: "Procedura: aggiornare oggetti dell'interfaccia utente"
ms.date: 11/04/2016
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
ms.openlocfilehash: 32d7c033d03ba679fa295237c1c49c5060c731ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330161"
---
# <a name="how-to-update-user-interface-objects"></a>Procedura: aggiornare oggetti dell'interfaccia utente

In genere, le voci di menu e i pulsanti della barra degli strumenti hanno più di uno stato. Una voce di menu, ad esempio, è disattivata (in grigio) se non è disponibile nel contesto corrente. Le voci di menu possono anche essere selezionate o deselezionate. Un pulsante della barra degli strumenti può essere disabilitato anche se non disponibile oppure può essere controllato.

Chi aggiorna lo stato di questi elementi quando le condizioni del programma cambiano logicamente, se una voce di menu Genera un comando gestito da, ad esempio, un documento, è opportuno che il documento aggiorni la voce di menu. È probabile che il documento contenga le informazioni su cui si basa l'aggiornamento.

Se un comando ha più oggetti dell'interfaccia utente (ad esempio una voce di menu e un pulsante della barra degli strumenti), entrambi vengono indirizzati alla stessa funzione del gestore. Questo incapsula il codice di aggiornamento dell'interfaccia utente per tutti gli oggetti dell'interfaccia utente equivalente in un'unica posizione.

Il Framework fornisce un'interfaccia utile per l'aggiornamento automatico degli oggetti dell'interfaccia utente. È possibile scegliere di eseguire l'aggiornamento in altro modo, ma l'interfaccia fornita è efficiente e facile da utilizzare.

Negli argomenti seguenti viene illustrato l'utilizzo dei gestori di aggiornamenti:

- [Casi in cui vengono chiamati i gestori aggiornamento](when-update-handlers-are-called.md)

- [Macro ON_UPDATE_COMMAND_UI](on-update-command-ui-macro.md)

- [Classe CCmdUI](the-ccmdui-class.md)

## <a name="see-also"></a>Vedi anche

[Menu](menus-mfc.md)
