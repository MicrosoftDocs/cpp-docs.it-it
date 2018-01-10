---
title: L'aggiornamento dell'interfaccia utente per visualizzazioni di Record (accesso ai dati MFC) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- user interfaces, updating
- menus, updating as context changes
- record views, user interface
ms.assetid: 2c7914b6-2dc3-40c3-b2f2-8371da2a4063
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 68b013f3b1211c42ffc7355df73f47f6520fac1d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="user-interface-updating-for-record-views--mfc-data-access"></a>Aggiornamento dell'interfaccia utente per le visualizzazioni di record (accesso ai dati MFC)
`CRecordView`fornisce predefinita gestori aggiornamento dell'interfaccia utente per i comandi di navigazione. Questi gestori rendono automatica l'abilitazione e la disabilitazione degli oggetti dell'interfaccia utente, ovvero voci di menu e pulsanti delle barre degli strumenti. La creazione guidata applicazione comprendono menu standard e, se si sceglie il **barra degli strumenti ancorabile** opzione, una serie di pulsanti della barra degli strumenti per i comandi. Se si crea una classe per la visualizzazione di record mediante `CRecordView`, sarà possibile aggiungere all'applicazione oggetti dell'interfaccia utente simili.  
  
### <a name="to-create-menu-resources-with-the-menu-editor"></a>Per creare risorse di menu con l'editor di menu  
  
1.  Fare riferimento alle informazioni sull'utilizzo di [editor menu](../windows/menu-editor.md), creare un menu con gli stessi quattro comandi.  
  
#### <a name="to-create-toolbar-buttons-with-the-graphics-editor"></a>Per creare pulsanti delle barre degli strumenti con l'editor grafico  
  
1.  Fare riferimento alle informazioni sull'utilizzo di [editor barra degli strumenti](../windows/toolbar-editor.md), modificare la risorsa barra degli strumenti per aggiungere i pulsanti della barra degli strumenti per i comandi di navigazione tra i record.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto della navigazione in una visualizzazione di Record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)   
 [Utilizzo di una visualizzazione di Record](../data/using-a-record-view-mfc-data-access.md)