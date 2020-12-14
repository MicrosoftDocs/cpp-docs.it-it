---
description: "Altre informazioni su: il ruolo dell'utente nell'uso di una visualizzazione di record (accesso ai dati MFC)"
title: Ruolo del programmatore nell'uso di una visualizzazione di record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views, customizing default code
- MFC, record views
ms.assetid: 691e89a5-ff21-4ca3-9278-69d4678288bb
ms.openlocfilehash: f1eff5db930859ca1956286a9364c72b02f2b473
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302608"
---
# <a name="your-role-in-working-with-a-record-view--mfc-data-access"></a>Ruolo del programmatore nell'uso di una visualizzazione di record (accesso ai dati MFC)

La tabella seguente illustra le operazioni più comuni che vengono eseguite dal programmatore per lavorare con una visualizzazione di record e le operazioni che vengono eseguite dal framework.

### <a name="working-with-a-record-view-you-and-the-framework"></a>Uso di una visualizzazione di record: programmatore e framework

|Tu|Framework|
|---------|-------------------|
|Uso dell'editor di finestre di Visual C++ per progettare il form.|Creazione di una risorsa modello di finestra di dialogo con controlli.|
|Utilizzare la [creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) per creare classi derivate da [CRecordView](../mfc/reference/crecordview-class.md) e [CRecordset](../mfc/reference/crecordset-class.md).|Creazione automatica delle classi.|
|Mapping dei controlli della visualizzazione di record ai membri dati di campo del recordset.|Disponibilità del meccanismo DDX tra i controlli e i campi del recordset.|
||Fornisce i gestori di comandi predefiniti per **Move First**, **Move Last**, **Move Next** e **Move Previous** Commands da menu o pulsanti della barra degli strumenti.|
||Aggiornamento delle modifiche nell'origine dati.|
|[Facoltativo] Scrittura di codice per inserire i dati provenienti da un secondo recordset in caselle di riepilogo, caselle combinate o altri controlli.||
|[Facoltativo] Scrittura di codice per eventuali convalide particolari.||
|[Facoltativo] Scrittura di codice per aggiungere o eliminare record.||

La programmazione basata su form è solo una delle modalità di uso dei database. Per informazioni sulle applicazioni che usano un'altra interfaccia utente o nessuna interfaccia utente, vedere [MFC: uso di classi di database con documenti e visualizzazioni](../data/mfc-using-database-classes-with-documents-and-views.md) e [MFC: uso di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md). Per approcci alternativi alla visualizzazione dei record di database, vedere le classi [CListView](../mfc/reference/clistview-class.md) e [CTreeView](../mfc/reference/ctreeview-class.md).

## <a name="see-also"></a>Vedi anche

[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Elenco di driver ODBC](../data/odbc/odbc-driver-list.md)
