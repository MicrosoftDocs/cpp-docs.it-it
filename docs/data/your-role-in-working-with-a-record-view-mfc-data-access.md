---
title: Ruolo del programmatore nell'uso di una visualizzazione di record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views, customizing default code
- MFC, record views
ms.assetid: 691e89a5-ff21-4ca3-9278-69d4678288bb
ms.openlocfilehash: 1f1361baafa5bb3dc884adcc464a3571aee04dd3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50478637"
---
# <a name="your-role-in-working-with-a-record-view--mfc-data-access"></a>Ruolo del programmatore nell'uso di una visualizzazione di record (accesso ai dati MFC)

La tabella seguente illustra le operazioni più comuni che vengono eseguite dal programmatore per lavorare con una visualizzazione di record e le operazioni che vengono eseguite dal framework.

### <a name="working-with-a-record-view-you-and-the-framework"></a>Uso di una visualizzazione di record: programmatore e framework

|Programmatore|Framework|
|---------|-------------------|
|Uso dell'editor di finestre di Visual C++ per progettare il form.|Creazione di una risorsa modello di finestra di dialogo con controlli.|
|Usare la [Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) per creare le classi derivate da [CRecordView](../mfc/reference/crecordview-class.md) e [CRecordset](../mfc/reference/crecordset-class.md).|Creazione automatica delle classi.|
|Mapping dei controlli della visualizzazione di record ai membri dati di campo del recordset.|Disponibilità del meccanismo DDX tra i controlli e i campi del recordset.|
||Fornisce i gestori di comando per impostazione predefinita **Move First**, **Move Last**, **Sposta successivo**, e **Move Previous** i comandi di menu o sulla barra degli strumenti pulsanti.|
||Aggiornamento delle modifiche nell'origine dati.|
|[Facoltativo] Scrittura di codice per inserire i dati provenienti da un secondo recordset in caselle di riepilogo, caselle combinate o altri controlli.||
|[Facoltativo] Scrittura di codice per eventuali convalide particolari.||
|[Facoltativo] Scrittura di codice per aggiungere o eliminare record.||

La programmazione basata su form è solo una delle modalità di uso dei database. Per informazioni sulle applicazioni tramite altre interfacce utente, o alcuna interfaccia utente, vedere [MFC: utilizzo di classi di Database con documenti e visualizzazioni](../data/mfc-using-database-classes-with-documents-and-views.md) e [MFC: utilizzo di classi di Database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md). Per approcci alternativi per visualizzare i record di database, vedere le classi [CListView](../mfc/reference/clistview-class.md) e [CTreeView](../mfc/reference/ctreeview-class.md).

## <a name="see-also"></a>Vedere anche

[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)