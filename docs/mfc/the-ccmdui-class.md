---
description: 'Altre informazioni su: classe CCmdUI'
title: Classe CCmdUI
ms.date: 11/04/2016
helpviewer_keywords:
- updating user interface objects [MFC]
- user interface objects [MFC], updating
- CCmdUI class [MFC], menu updating
- update handlers [MFC]
- toolbars [MFC], updating
ms.assetid: 2f2bae62-8c29-45a4-bbce-490eb01907d5
ms.openlocfilehash: 5fae6d2dda948fd3720a29d502d7f050e388bceb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216132"
---
# <a name="the-ccmdui-class"></a>Classe CCmdUI

Quando indirizza un comando di aggiornamento al gestore, il framework passa al gestore un puntatore a un oggetto `CCmdUI` (o a un oggetto di una classe derivata da `CCmdUI`). Questo oggetto rappresenta una voce di menu, un pulsante della barra degli strumenti o un altro oggetto dell'interfaccia utente che ha generato il comando. Il gestore aggiornamento chiama le funzioni membro della struttura `CCmdUI` attraverso il puntatore per aggiornare l'oggetto dell'interfaccia utente. Ad esempio, di seguito è riportato un gestore aggiornamento per la voce di menu "Cancella tutto":

[!code-cpp[NVC_MFCDocView#3](../mfc/codesnippet/cpp/the-ccmdui-class_1.cpp)]

Questo gestore chiama la `Enable` funzione membro di un oggetto con accesso alla voce di menu. `Enable` rende l'elemento disponibile per l'utilizzo.

## <a name="see-also"></a>Vedi anche

[Procedura: aggiornare oggetti User-Interface](../mfc/how-to-update-user-interface-objects.md)
