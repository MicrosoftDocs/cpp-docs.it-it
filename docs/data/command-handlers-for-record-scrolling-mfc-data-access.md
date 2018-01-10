---
title: Gestori di comandi per lo scorrimento (accesso ai dati MFC) dei Record | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- record views [C++], scrolling
- record scrolling [C++]
- scrolling records
ms.assetid: f8b13477-2a37-459e-a30c-806fb78165ac
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d3164cfd8a7d78191f2076637b51d96bb45f2293
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="command-handlers-for-record-scrolling--mfc-data-access"></a>Gestione dei comandi per lo scorrimento dei record (accesso ai dati MFC)
Il [CRecordView](../mfc/reference/crecordview-class.md) classe fornisce il comando predefinito per i seguenti comandi standard:  
  
-   **ID_RECORD_MOVE_FIRST**  
  
-   **ID_RECORD_MOVE_LAST**  
  
-   **ID_RECORD_MOVE_NEXT**  
  
-   **ID_RECORD_MOVE_PREV**  
  
 Il `OnMove` funzione membro fornisce predefinito gestione dei comandi per tutti i quattro comandi che consentono lo spostamento da un record a altro. Quando vengono eseguiti tali comandi, RFX (o DFX) carica il nuovo record nei campi del recordset e DDX sposta i valori nei controlli del form del record. Per informazioni su RFX, vedere [trasferimento di campi di Record (RFX)](../data/odbc/record-field-exchange-rfx.md).  
  
> [!NOTE]
>  Usare sempre questi ID di comando standard per qualsiasi oggetto di interfaccia utente associato ai comandi standard di navigazione tra i record.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto della navigazione in una visualizzazione di Record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)