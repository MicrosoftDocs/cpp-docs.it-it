---
title: Classi ODBC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.data
dev_langs:
- C++
helpviewer_keywords:
- database classes [MFC], ODBC
- ODBC classes [MFC]
ms.assetid: 6c40fca8-3033-4873-9abe-7f51725de0e0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 97bbdb74d122e633574dcf76876f0907de8ef2c4
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46400581"
---
# <a name="odbc-classes"></a>Classi ODBC

Queste classi funzionano con le altre classi di framework applicazione per consentire un facile accesso a un'ampia gamma di database per cui sono disponibili driver Open Database Connectivity (ODBC).

I programmi che usano database ODBC avranno almeno un `CDatabase` oggetto e un `CRecordset` oggetto.

[CDatabase](../mfc/reference/cdatabase-class.md)<br/>
Incapsula una connessione a un'origine dati, attraverso la quale è possibile utilizzare nell'origine dati.

[CRecordset](../mfc/reference/crecordset-class.md)<br/>
Incapsula un set di record selezionati da un'origine dati. Recordset Abilita lo scorrimento di record a altro, aggiornando i record (aggiunta, modifica ed eliminazione di record), la selezione di qualificazione con un filtro, ordinamento la selezione e definizione di parametri per la selezione con le informazioni ottenute o calcolato in fase di esecuzione.

[CRecordView](../mfc/reference/crecordview-class.md)<br/>
Fornisce un modulo visualizzazione connessa direttamente a un oggetto recordset. Il dialog data exchange (DDX) meccanismo scambia dati tra i controlli di visualizzazione dei record e set di record. Come tutte le visualizzazioni di form, una visualizzazione di record è basata su una risorsa modello di finestra di dialogo. Visualizzazioni di record supportano anche lo spostamento di tutti i record del recordset, aggiornando i record e chiusura di recordset associato quando si chiude la visualizzazione di record.

[CDBException](../mfc/reference/cdbexception-class.md)<br/>
Eccezione generata da errori di accesso ai dati di elaborazione. Questa classe ha lo stesso scopo come altre classi di eccezioni nel meccanismo di gestione delle eccezioni della libreria di classi.

[CFieldExchange](../mfc/reference/cfieldexchange-class.md)<br/>
Fornisce informazioni di contesto per supportare il trasferimento di campi di record (RFX), che consente di scambiare dati tra i membri dati di campi e membri di dati di parametro di un oggetto recordset e le colonne della tabella corrispondente nell'origine dati. Analoga alla classe [CDataExchange](../mfc/reference/cdataexchange-class.md), che viene usato in modo analogo per lo scambio di dati di finestra di dialogo (DDX).

## <a name="related-classes"></a>Classi correlate

[CLongBinary](../mfc/reference/clongbinary-class.md)<br/>
Incapsula un handle per archiviazione per un oggetto binario di grandi dimensioni (BLOB), ad esempio una bitmap. `CLongBinary` gli oggetti vengono utilizzati per gestire gli oggetti di grandi quantità di dati archiviati nelle tabelle di database.

[CDBVariant](../mfc/reference/cdbvariant-class.md)<br/>
Consente di archiviare un valore senza doversi preoccupare il tipo del valore dei dati. `CDBVariant` Registra il tipo di dati del valore corrente, che viene archiviato in un'unione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

