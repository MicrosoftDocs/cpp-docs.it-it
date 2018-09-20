---
title: Sequenza di operazioni per la creazione di applicazioni di Database | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- applications [MFC], database
- database applications [MFC]
- database applications [MFC], creating
- MFC, database applications
ms.assetid: 9371da59-8536-43cd-8314-706ad320e2ec
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ef9c66324f886da27431a94a464554e2a8ddb00a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46391580"
---
# <a name="sequence-of-operations-for-creating-database-applications"></a>Sequenza delle operazioni per la creazione di applicazioni database

Nella tabella seguente viene illustrato il ruolo e il ruolo del framework nella scrittura di applicazioni di database.

> [!NOTE]
>  L'ambiente di Visual C++ e le procedure guidate non supportano DAO (anche se sono incluse le classi DAO ed è comunque possibile usarli). Microsoft consiglia di utilizzare ODBC per i nuovi progetti MFC. È consigliabile utilizzare solo DAO nella gestione delle applicazioni esistenti.

### <a name="creating-database-applications"></a>Creazione di applicazioni di Database

|Attività|Davvero|Il framework esegue|
|----------|------------|------------------------|
|Decidere se usare le classi ODBC MFC e DAO.|Usa ODBC per i nuovi progetti MFC. Usare DAO solo per le applicazioni esistenti. Per informazioni generali, vedere l'articolo [programmazione accesso dati](../data/data-access-programming-mfc-atl.md).|Il framework fornisce le classi che supportano l'accesso al database.|
|Creare uno scheletro di applicazione con le opzioni di database.|Eseguire la creazione guidata applicazione MFC. Selezionare le opzioni nella pagina del supporto per Database. Se si sceglie un'opzione che consente di creare una visualizzazione di record, specificare inoltre:<br /><br /> -Nome di origine e la tabella di dati o nomi<br />-Eseguire una query o più nomi.|La creazione guidata applicazione MFC crea i file e specifica che includono i necessari. A seconda delle opzioni specificate, i file possono includere una classe recordset.|
|Progettare il form di database o il form.|Usare l'editor di finestre di Visual C++ per posizionare i controlli di risorse al modello di finestra di dialogo per le classi di visualizzazione di record.|La creazione guidata applicazione MFC crea una risorsa modello di finestra vuota per poter compilare.|
|Creare classi di visualizzazione e recordset record aggiuntive in base alle esigenze.|Utilizzare Visualizzazione classi per creare le classi e la finestra di dialogo editor per le visualizzazioni di progettazione.|Visualizzazione classi creati file aggiuntivi per le nuove classi.|
|Creare oggetti di recordset in base alle esigenze nel codice. Per modificare i record, usare ogni oggetto recordset...|I recordset sono basati sulle classi derivate da [CRecordset](../mfc/reference/crecordset-class.md) con le procedure guidate.|ODBC Usa il trasferimento di campi di record (RFX) per scambio di dati tra il database e i membri dati di campo del recordset. Se si usa una visualizzazione di record, DDX (DDX) consente di scambiare dati tra i controlli nella visualizzazione dei record e set di record.|
|.. o creare esplicita [CDatabase](../mfc/reference/cdatabase-class.md) nel codice per ogni database che si desidera aprire.|Gli oggetti recordset di base sugli oggetti di database.|L'oggetto di database fornisce un'interfaccia per l'origine dati.|
|Associazione dinamica di colonne di dati per il recordset.|In ODBC, aggiungere codice alla classe recordset derivata per gestire l'associazione. Vedere l'articolo [Recordset: associazione dinamica di colonne di dati (ODBC)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||

## <a name="see-also"></a>Vedere anche

[Compilazione nel framework](../mfc/building-on-the-framework.md)<br/>
[Sequenza delle operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)<br/>
[Sequenza delle operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)<br/>
[Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)
