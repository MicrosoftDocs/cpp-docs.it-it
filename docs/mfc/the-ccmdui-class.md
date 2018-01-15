---
title: Classe CCmdUI | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CCmdUI
dev_langs: C++
helpviewer_keywords:
- updating user interface objects [MFC]
- user interface objects [MFC], updating
- CCmdUI class [MFC], menu updating
- update handlers [MFC]
- toolbars [MFC], updating
ms.assetid: 2f2bae62-8c29-45a4-bbce-490eb01907d5
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: efb87fc04ee9ee55806ec4fc1103ded42231b433
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="the-ccmdui-class"></a>Classe CCmdUI
Quando indirizza un comando di aggiornamento al gestore, il framework passa al gestore un puntatore a un oggetto `CCmdUI` (o a un oggetto di una classe derivata da `CCmdUI`). Questo oggetto rappresenta una voce di menu, un pulsante della barra degli strumenti o un altro oggetto dell'interfaccia utente che ha generato il comando. Il gestore aggiornamento chiama le funzioni membro della struttura `CCmdUI` attraverso il puntatore per aggiornare l'oggetto dell'interfaccia utente. Ad esempio, di seguito è riportato un gestore aggiornamento per la voce di menu "Cancella tutto":  
  
 [!code-cpp[NVC_MFCDocView#3](../mfc/codesnippet/cpp/the-ccmdui-class_1.cpp)]  
  
 Questo gestore chiama il **abilitare** funzione membro di un oggetto con accesso alla voce di menu. **Abilitare** rende disponibili per utilizzare l'elemento.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: Aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)

