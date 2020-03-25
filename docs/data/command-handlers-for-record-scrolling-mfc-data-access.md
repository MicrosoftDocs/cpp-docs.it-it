---
title: Gestione dei comandi per lo scorrimento dei record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views [C++], scrolling
- record scrolling [C++]
- scrolling records
ms.assetid: f8b13477-2a37-459e-a30c-806fb78165ac
ms.openlocfilehash: 8bbacd6625e846381d2bafc8133e8b36efe51b1a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213447"
---
# <a name="command-handlers-for-record-scrolling--mfc-data-access"></a>Gestione dei comandi per lo scorrimento dei record (accesso ai dati MFC)

La classe [CRecordView](../mfc/reference/crecordview-class.md) fornisce la gestione dei comandi predefinita per i comandi standard seguenti:

- ID_RECORD_MOVE_FIRST

- ID_RECORD_MOVE_LAST

- ID_RECORD_MOVE_NEXT

- ID_RECORD_MOVE_PREV

La funzione membro `OnMove` fornisce la gestione dei comandi predefinita per tutti e quattro i comandi, che passano da record a record. Quando vengono eseguiti tali comandi, RFX (o DFX) carica il nuovo record nei campi del recordset e DDX sposta i valori nei controlli del form del record. Per informazioni su RFX, vedere [trasferimento di campi di record (RFX)](../data/odbc/record-field-exchange-rfx.md).

> [!NOTE]
>  Usare sempre questi ID di comando standard per qualsiasi oggetto di interfaccia utente associato ai comandi standard di navigazione tra i record.

## <a name="see-also"></a>Vedere anche

[Supporto della navigazione in una visualizzazione di record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)
