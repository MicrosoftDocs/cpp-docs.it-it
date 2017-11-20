---
title: Finestra di dialogo convalida dei dati | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- validating data [MFC], message boxes
- data validation [MFC], dialog boxes
- dialog boxes [MFC], validating data
- validating data [MFC], dialog box data entry
- DDV (dialog data validation) [MFC]
- data validation [MFC], message boxes
ms.assetid: f070c309-2044-4ff2-8c92-1ec1ea84af58
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 58fbff4a5192d15a60cf3340ce762574947fb249
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="dialog-data-validation"></a>Convalida dei dati delle finestre di dialogo
È possibile specificare la convalida dei dati mediante la chiamata di funzioni DDV, come illustrato nell'esempio di [Dialog Data Exchange](../mfc/dialog-data-exchange.md). Il `DDV_MaxChars` chiamata di convalida che la stringa immessa nel controllo casella di testo non è più di 20 caratteri. La funzione DDV avvisa l'utente con una finestra di messaggio se la convalida ha esito negativo e inserito lo stato attivo sul controllo all'origine del problema in modo che l'utente può immettere nuovamente i dati. Una funzione DDV per un determinato controllo deve essere chiamata immediatamente dopo la funzione DDX per il controllo stesso.  
  
 È inoltre possibile definire le proprie routine DDX e DDV personalizzati. Per informazioni dettagliate su questo e altri aspetti di DDX e DDV, vedere [MFC Nota tecnica 26](../mfc/tn026-ddx-and-ddv-routines.md).  
  
 Il [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) verranno scritti tutti i DDX e DDV viene chiamato nel mapping dei dati.  
  
## <a name="see-also"></a>Vedere anche  
 [Dialog Data Exchange e convalida](../mfc/dialog-data-exchange-and-validation.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange.md)

