---
title: Classe CCmdUI
ms.date: 11/04/2016
f1_keywords:
- CCmdUI
helpviewer_keywords:
- updating user interface objects [MFC]
- user interface objects [MFC], updating
- CCmdUI class [MFC], menu updating
- update handlers [MFC]
- toolbars [MFC], updating
ms.assetid: 2f2bae62-8c29-45a4-bbce-490eb01907d5
ms.openlocfilehash: 8e0af0703924d6fae626d3753b8523efe0c56652
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57326621"
---
# <a name="the-ccmdui-class"></a>Classe CCmdUI

Quando indirizza un comando di aggiornamento al gestore, il framework passa al gestore un puntatore a un oggetto `CCmdUI` (o a un oggetto di una classe derivata da `CCmdUI`). Questo oggetto rappresenta una voce di menu, un pulsante della barra degli strumenti o un altro oggetto dell'interfaccia utente che ha generato il comando. Il gestore aggiornamento chiama le funzioni membro della struttura `CCmdUI` attraverso il puntatore per aggiornare l'oggetto dell'interfaccia utente. Ad esempio, di seguito è riportato un gestore aggiornamento per la voce di menu "Cancella tutto":

[!code-cpp[NVC_MFCDocView#3](../mfc/codesnippet/cpp/the-ccmdui-class_1.cpp)]

Questo gestore chiama il `Enable` funzione membro di un oggetto con accesso alla voce di menu. `Enable` rende l'elemento disponibile per l'uso.

## <a name="see-also"></a>Vedere anche

[Procedura: Aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)
