---
title: Classe CCmdUI | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CCmdUI
dev_langs:
- C++
helpviewer_keywords:
- updating user interface objects [MFC]
- user interface objects [MFC], updating
- CCmdUI class [MFC], menu updating
- update handlers [MFC]
- toolbars [MFC], updating
ms.assetid: 2f2bae62-8c29-45a4-bbce-490eb01907d5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a857d1cddcc78c7cfff4243b9c99194986af3d9b
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956486"
---
# <a name="the-ccmdui-class"></a>Classe CCmdUI
Quando indirizza un comando di aggiornamento al gestore, il framework passa al gestore un puntatore a un oggetto `CCmdUI` (o a un oggetto di una classe derivata da `CCmdUI`). Questo oggetto rappresenta una voce di menu, un pulsante della barra degli strumenti o un altro oggetto dell'interfaccia utente che ha generato il comando. Il gestore aggiornamento chiama le funzioni membro della struttura `CCmdUI` attraverso il puntatore per aggiornare l'oggetto dell'interfaccia utente. Ad esempio, di seguito è riportato un gestore aggiornamento per la voce di menu "Cancella tutto":  
  
 [!code-cpp[NVC_MFCDocView#3](../mfc/codesnippet/cpp/the-ccmdui-class_1.cpp)]  
  
 Questo gestore chiama il `Enable` funzione membro di un oggetto con l'accesso alla voce di menu. `Enable` l'elemento diventa disponibile per l'utilizzo.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: Aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)

