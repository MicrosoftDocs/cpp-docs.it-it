---
description: 'Altre informazioni su: gestori di comandi per lo scorrimento dei record (accesso ai dati MFC)'
title: Gestione dei comandi per lo scorrimento dei record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views [C++], scrolling
- record scrolling [C++]
- scrolling records
ms.assetid: f8b13477-2a37-459e-a30c-806fb78165ac
ms.openlocfilehash: 03fce51e7b045df0ae5ad1ceb0fa99eb98d0b7c4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97181384"
---
# <a name="command-handlers-for-record-scrolling--mfc-data-access"></a>Gestione dei comandi per lo scorrimento dei record (accesso ai dati MFC)

La classe [CRecordView](../mfc/reference/crecordview-class.md) fornisce la gestione dei comandi predefinita per i comandi standard seguenti:

- ID_RECORD_MOVE_FIRST

- ID_RECORD_MOVE_LAST

- ID_RECORD_MOVE_NEXT

- ID_RECORD_MOVE_PREV

La `OnMove` funzione membro fornisce la gestione dei comandi predefinita per tutti e quattro i comandi, che passano da record a record. Quando vengono eseguiti tali comandi, RFX (o DFX) carica il nuovo record nei campi del recordset e DDX sposta i valori nei controlli del form del record. Per informazioni su RFX, vedere [trasferimento di campi di record (RFX)](../data/odbc/record-field-exchange-rfx.md).

> [!NOTE]
> Usare sempre questi ID di comando standard per qualsiasi oggetto di interfaccia utente associato ai comandi standard di navigazione tra i record.

## <a name="see-also"></a>Vedi anche

[Supporto della navigazione in una visualizzazione di record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)
