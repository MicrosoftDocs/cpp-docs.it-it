---
title: I gestori di comando per lo scorrimento (accesso ai dati MFC) dei Record | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- record views [C++], scrolling
- record scrolling [C++]
- scrolling records
ms.assetid: f8b13477-2a37-459e-a30c-806fb78165ac
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b51a6e9c9cf9516ed86066f712a17fea69c3cb50
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112239"
---
# <a name="command-handlers-for-record-scrolling--mfc-data-access"></a>Gestione dei comandi per lo scorrimento dei record (accesso ai dati MFC)

Il [CRecordView](../mfc/reference/crecordview-class.md) classe fornisce predefinito gestione dei comandi per i seguenti comandi standard:  
  
- ID_RECORD_MOVE_FIRST  
  
- ID_RECORD_MOVE_LAST  
  
- ID_RECORD_MOVE_NEXT  
  
- ID_RECORD_MOVE_PREV  
  
Il `OnMove` funzione membro garantisce predefinito gestione dei comandi per tutti i quattro comandi, che consentono lo spostamento da un record a altro. Quando vengono eseguiti tali comandi, RFX (o DFX) carica il nuovo record nei campi del recordset e DDX sposta i valori nei controlli del form del record. Per informazioni su RFX, vedere [campi di Record (RFX)](../data/odbc/record-field-exchange-rfx.md).  
  
> [!NOTE]
>  Usare sempre questi ID di comando standard per qualsiasi oggetto di interfaccia utente associato ai comandi standard di navigazione tra i record.  
  
## <a name="see-also"></a>Vedere anche  

[Supporto della navigazione in una visualizzazione di Record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)