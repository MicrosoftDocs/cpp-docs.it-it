---
title: Sequenza di operazioni per la creazione di applicazioni di Database | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- applications [MFC], database
- database applications [MFC]
- database applications [MFC], creating
- MFC, database applications
ms.assetid: 9371da59-8536-43cd-8314-706ad320e2ec
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f3403807e38f59abc68bf93f510476951c5ec8ce
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="sequence-of-operations-for-creating-database-applications"></a>Sequenza delle operazioni per la creazione di applicazioni database
Nella tabella seguente viene illustrato il ruolo e il ruolo del framework nella scrittura di applicazioni di database.  
  
> [!NOTE]
>  L'ambiente di Visual C++ e le procedure guidate non supportano DAO (anche se sono incluse le classi DAO ed è comunque possibile usarle). Microsoft consiglia di utilizzare ODBC per i nuovi progetti MFC. Utilizzare solo DAO di gestione delle applicazioni esistenti.  
  
### <a name="creating-database-applications"></a>Creazione di applicazioni Database  
  
|Attività|Davvero|Dal framework|  
|----------|------------|------------------------|  
|Decidere se usare le classi ODBC MFC e DAO.|Utilizzo di ODBC per i nuovi progetti MFC. Utilizzare DAO solo per le applicazioni esistenti. Per informazioni generali, vedere l'articolo [programmazione accesso dati](../data/data-access-programming-mfc-atl.md).|Il framework fornisce le classi che supportano l'accesso al database.|  
|Creare uno scheletro di applicazione con le opzioni di database.|Eseguire la creazione guidata applicazione MFC. Selezionare le opzioni nella pagina del supporto per Database. Se si sceglie un'opzione che crea una visualizzazione di record, specificare anche:<br /><br /> -Nome di origine e di tabella dati o i nomi<br />: Esegue una query o più nomi.|La creazione guidata applicazione MFC crea i file e specifica che includono necessari. A seconda delle opzioni specificate, i file possono includere una classe recordset.|  
|Progettare il form di database o il form.|Usare l'editor di finestre di Visual C++ per posizionare i controlli nelle risorse modello di finestra di dialogo per le classi di visualizzazione di record.|La creazione guidata applicazione MFC crea una risorsa modello di finestra vuota per poter compilare.|  
|Creazione di classi di visualizzazione e recordset record aggiuntive in base alle esigenze.|Utilizzare Visualizzazione classi per creare le classi e la finestra di dialogo editor per progettare le visualizzazioni.|Visualizzazione classi creati file aggiuntivi per le nuove classi.|  
|Creare oggetti recordset in base alle esigenze del codice. Per modificare i record, usare ogni oggetto recordset...|I recordset si basano le classi derivate da [CRecordset](../mfc/reference/crecordset-class.md) con le procedure guidate.|ODBC utilizza il trasferimento di campi di record (RFX) per lo scambio di dati tra il database e i membri dati di campo del recordset. Se si utilizza una visualizzazione di record, (DDX) dialog data exchange scambia dati tra il recordset e i controlli di visualizzazione dei record.|  
|... o creare esplicita [CDatabase](../mfc/reference/cdatabase-class.md) nel codice per ogni database che si desidera aprire.|Basare gli oggetti recordset sugli oggetti di database.|L'oggetto di database fornisce un'interfaccia per l'origine dati.|  
|Associazione dinamica di colonne di dati al recordset.|In ODBC, aggiungere codice alla classe recordset derivata per gestire l'associazione. Vedere l'articolo [Recordset: associazione dinamica di colonne di dati (ODBC)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione nel Framework](../mfc/building-on-the-framework.md)   
 [Sequenza di operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)   
 [Sequenza di operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)   
 [Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)
