---
title: Gestione dei comandi per lo scorrimento dei record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views [C++], scrolling
- record scrolling [C++]
- scrolling records
ms.assetid: f8b13477-2a37-459e-a30c-806fb78165ac
ms.openlocfilehash: 0e35baf561693b90b661ac1fe73844961570b29e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50460775"
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