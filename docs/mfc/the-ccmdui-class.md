---
title: "Classe CCmdUI | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CCmdUI"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCmdUI (classe), aggiornamento menu"
  - "barre degli strumenti [C++], aggiornamento"
  - "gestori aggiornamento"
  - "aggiornamento di oggetti dell'interfaccia utente"
  - "oggetti dell'interfaccia utente, aggiornamento"
ms.assetid: 2f2bae62-8c29-45a4-bbce-490eb01907d5
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Classe CCmdUI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando indirizza un comando di aggiornamento al gestore, il framework passa al gestore un puntatore ad un oggetto `CCmdUI` \(o ad un oggetto derivante dalla classe `CCmdUI`\).  Questo oggetto rappresenta una voce di menu, un pulsante della barra degli strumenti o un altro oggetto dell'interfaccia utente che ha generato il comando.  Il gestore aggiornamento chiama le funzioni membro della struttura `CCmdUI` attraverso il puntatore per aggiornare l'oggetto dell'interfaccia utente.  Ad esempio, di seguito è riportato un gestore aggiornamento per la voce di menu "Cancella tutto":  
  
 [!code-cpp[NVC_MFCDocView#3](../mfc/codesnippet/CPP/the-ccmdui-class_1.cpp)]  
  
 Questo gestore chiama la funzione membro **Abilita** di un oggetto con accesso alla voce di menu.  **Abilita** rende l'elemento disponibile per l'utilizzo.  
  
## Vedere anche  
 [Procedura: aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)