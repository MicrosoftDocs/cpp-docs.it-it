---
title: "Selezione e modifica di record | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "recordset ODBC, selezione di record"
  - "selezione di record, classi ODBC MFC"
  - "record, selezione"
ms.assetid: 7f0b3a4a-9941-4475-a612-9ec8d15b7691
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Selezione e modifica di record
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In genere, quando si selezionano record da un'origine dati mediante un'istruzione SQL **SELECT**, si ottiene un gruppo di risultati, ovvero un insieme di record di una tabella o di una query.  Con le classi di database è possibile utilizzare un oggetto recordset per selezionare e accedere al gruppo di risultati.  Si tratta di un oggetto di una classe specifica dell'applicazione derivata dalla classe [CRecordset](../../mfc/reference/crecordset-class.md).  Quando si definisce una classe di recordset, è necessario specificare l'origine a cui associare la classe, la tabella da utilizzare e le relative colonne.  La Creazione guidata applicazioni MFC o il comando **Aggiungi classe**, come descritto in [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md), crea una classe con una connessione a un'origine dati specifica.  Le procedure guidate scrivono la funzione membro [GetDefaultSQL](../Topic/CRecordset::GetDefaultSQL.md) della classe `CRecordset` per restituire il nome della tabella.  Per ulteriori informazioni sull'utilizzo delle procedure guidate per la creazione di classi di recordset, vedere [Supporto di database e Creazione guidata applicazioni MFC](../../mfc/reference/database-support-mfc-application-wizard.md) e [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).  
  
 Se si utilizza un oggetto [CRecordset](../../mfc/reference/crecordset-class.md) in fase di esecuzione, è possibile effettuare le seguenti operazioni.  
  
-   Analizzare i campi di dati del record corrente.  
  
-   Filtrare o ordinare il recordset.  
  
-   Personalizzare l'istruzione SQL **SELECT** predefinita.  
  
-   Scorrere i record selezionati.  
  
-   Aggiungere, aggiornare o eliminare record, nel caso in cui sia l'origine dati che il recordset siano aggiornabili.  
  
-   Verificare se il recordset consente la ripetizione di una query e aggiornarne il contenuto.  
  
 Dopo avere utilizzato l'oggetto recordset, è necessario chiuderlo ed eliminarlo.  Per ulteriori informazioni sui recordset, vedere [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md).  
  
## Vedere anche  
 [ODBC e MFC](../../data/odbc/odbc-and-mfc.md)