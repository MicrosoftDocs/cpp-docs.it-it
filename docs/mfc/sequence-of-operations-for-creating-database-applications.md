---
title: Sequenza delle operazioni per la creazione di applicazioni database
ms.date: 11/04/2016
helpviewer_keywords:
- applications [MFC], database
- database applications [MFC]
- database applications [MFC], creating
- MFC, database applications
ms.assetid: 9371da59-8536-43cd-8314-706ad320e2ec
ms.openlocfilehash: c393269d6af108ee82786e9d59f81aad11428157
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372770"
---
# <a name="sequence-of-operations-for-creating-database-applications"></a>Sequenza delle operazioni per la creazione di applicazioni database

Nella tabella seguente vengono illustrati il ruolo e il ruolo del framework nella scrittura di applicazioni di database.

> [!NOTE]
> L'ambiente e le procedure guidate di Visual C, non supportano DAO (anche se le classi DAO sono incluse ed è comunque possibile utilizzarle). Microsoft consiglia di utilizzare ODBC per i nuovi progetti MFC. È consigliabile utilizzare DAO solo nella gestione delle applicazioni esistenti.

### <a name="creating-database-applications"></a>Creazione di applicazioni di databaseCreating Database Applications

|Attività|Davvero|Il quadro non|
|----------|------------|------------------------|
|Decidere se utilizzare le classi ODBC o DAO MFC.|Utilizzare ODBC per i nuovi progetti MFC. Utilizzare DAO solo per gestire le applicazioni esistenti. Per informazioni generali, vedere l'articolo [Programmazione dell'accesso](../data/data-access-programming-mfc-atl.md)ai dati .|Il framework fornisce classi che supportano l'accesso al database.|
|Creare l'applicazione di scheletro con le opzioni di database.|Eseguire la Creazione guidata applicazione MFC. Selezionare le opzioni nella pagina Supporto database. Se si sceglie un'opzione che crea una visualizzazione di record, specificare anche:<br /><br />- Origine dati e nome o nomi di tabella<br />- Nome o nome della query.|La Creazione guidata applicazione MFC crea file e specifica le inclusioni necessarie. A seconda delle opzioni specificate, i file possono includere una classe recordset.|
|Progettare il modulo o i moduli del database.|Utilizzare l'editor di finestre di dialogo di Visual C.|La Creazione guidata applicazione MFC crea una risorsa modello di finestra di dialogo vuota da compilare.|
|Creare ulteriori classi di visualizzazione record e recordset in base alle esigenze.|Utilizzare Visualizzazione classi per creare le classi e l'editor finestre per progettare le visualizzazioni.|Visualizzazione classi crea file aggiuntivi per le nuove classi.|
|Creare oggetti recordset in base alle esigenze nel codice. Utilizzare ogni recordset per modificare i record...|I recordset sono basati sulle classi derivate da [CRecordset](../mfc/reference/crecordset-class.md) con le procedure guidate.|ODBC utilizza lo scambio di campi di record (RFX) per scambiare dati tra il database e i membri dati di campo del recordset. Se si utilizza una visualizzazione di record, DDX (Dialog Data Exchange) scambia dati tra il recordset e i controlli nella visualizzazione di record.|
|... o creare un [CDatabase](../mfc/reference/cdatabase-class.md) esplicito nel codice per ogni database che si desidera aprire.|Basare gli oggetti recordset sugli oggetti di database.|L'oggetto di database fornisce un'interfaccia all'origine dati.|
|Associare le colonne di dati al recordset in modo dinamico.|In ODBC aggiungere codice alla classe recordset derivata per gestire l'associazione. Vedere l'articolo [Recordset: associazione dinamica di colonne di dati (ODBC)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||

## <a name="see-also"></a>Vedere anche

[Compilazione nel framework](../mfc/building-on-the-framework.md)<br/>
[Sequenza delle operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)<br/>
[Sequenza delle operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)<br/>
[Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)
