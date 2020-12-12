---
description: 'Ulteriori informazioni su: sequenza di operazioni per la creazione di applicazioni di database'
title: Sequenza delle operazioni per la creazione di applicazioni database
ms.date: 11/04/2016
helpviewer_keywords:
- applications [MFC], database
- database applications [MFC]
- database applications [MFC], creating
- MFC, database applications
ms.assetid: 9371da59-8536-43cd-8314-706ad320e2ec
ms.openlocfilehash: 86f06ae5200fc8646ccb80bfec4e2814b94f9225
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217588"
---
# <a name="sequence-of-operations-for-creating-database-applications"></a>Sequenza delle operazioni per la creazione di applicazioni database

Nella tabella seguente vengono illustrati il ruolo e il ruolo del Framework per la scrittura di applicazioni di database.

> [!NOTE]
> L'ambiente Visual C++ e le procedure guidate non supportano DAO (sebbene le classi DAO siano incluse ed è comunque possibile usarle). Microsoft consiglia di utilizzare ODBC per i nuovi progetti MFC. È consigliabile utilizzare solo DAO per la gestione delle applicazioni esistenti.

### <a name="creating-database-applications"></a>Creazione di applicazioni di database

|Attività|Davvero|Il Framework esegue|
|----------|------------|------------------------|
|Decidere se utilizzare le classi ODBC MFC o DAO.|Utilizzare ODBC per i nuovi progetti MFC. Utilizzare solo DAO per mantenere le applicazioni esistenti. Per informazioni generali, vedere l'articolo [programmazione dell'accesso ai dati](../data/data-access-programming-mfc-atl.md).|Il Framework fornisce classi che supportano l'accesso al database.|
|Creare l'applicazione Skeleton con le opzioni di database.|Eseguire la creazione guidata applicazione MFC. Selezionare opzioni nella pagina supporto database. Se si sceglie un'opzione che consente di creare una visualizzazione di record, specificare anche:<br /><br />-Origine dati e nome tabella o nomi<br />: Nome o nomi della query.|La creazione guidata applicazione MFC crea file e specifica le inclusioni necessarie. A seconda delle opzioni specificate, i file possono includere una classe recordset.|
|Progettare il form o i form del database.|Utilizzare l'editor finestre di Visual C++ per inserire i controlli sulle risorse dei modelli di finestra di dialogo per le classi di visualizzazione dei record.|La creazione guidata applicazione MFC crea una risorsa modello di finestra di dialogo vuota che consente di compilare.|
|Creare altre classi recordset e visualizzazione di record in base alle esigenze.|Utilizzare Visualizzazione classi per creare le classi e l'editor finestre per progettare le visualizzazioni.|Visualizzazione classi crea file aggiuntivi per le nuove classi.|
|Creare oggetti recordset in base alle esigenze nel codice. USA ogni recordset per modificare i record...|I recordset sono basati sulle classi derivate da [CRecordset](../mfc/reference/crecordset-class.md) con le procedure guidate.|ODBC utilizza lo scambio di campi di record (RFX) per scambiare dati tra il database e i membri dati di campo del recordset. Se si utilizza una visualizzazione di record, DDX (Dialog Data Exchange) scambia i dati tra il recordset e i controlli della visualizzazione di record.|
|... in alternativa, creare un oggetto [CDatabase](../mfc/reference/cdatabase-class.md) esplicito nel codice per ogni database che si desidera aprire.|Basare gli oggetti recordset sugli oggetti di database.|L'oggetto di database fornisce un'interfaccia per l'origine dati.|
|Associare le colonne di dati al recordset in modo dinamico.|In ODBC aggiungere il codice alla classe recordset derivata per gestire l'associazione. Vedere l'articolo [Recordset: associazione dinamica di colonne di dati (ODBC)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||

## <a name="see-also"></a>Vedi anche

[Compilazione nel Framework](../mfc/building-on-the-framework.md)<br/>
[Sequenza di operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)<br/>
[Sequenza di operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)<br/>
[Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)
