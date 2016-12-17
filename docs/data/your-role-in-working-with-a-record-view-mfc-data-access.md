---
title: "Ruolo del programmatore nell&#39;uso di una visualizzazione di record (accesso ai dati MFC) | Microsoft Docs"
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
  - "MFC, visualizzazioni di record"
  - "visualizzazioni di record, personalizzazione di codice predefinito"
ms.assetid: 691e89a5-ff21-4ca3-9278-69d4678288bb
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Ruolo del programmatore nell&#39;uso di una visualizzazione di record (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La tabella seguente illustra le operazioni più comuni che vengono eseguite dal programmatore per lavorare con una visualizzazione di record e le operazioni che vengono eseguite dal framework.  
  
### Uso di una visualizzazione di record: programmatore e framework  
  
|Programmatore|Framework|  
|-------------------|---------------|  
|Uso dell'editor di finestre di Visual C\+\+ per progettare il form.|Creazione di una risorsa modello di finestra di dialogo con controlli.|  
|Uso della [Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) per creare classi derivate da [CRecordView](../mfc/reference/crecordview-class.md) e [CRecordset](../mfc/reference/crecordset-class.md) o da [CDaoRecordView](../mfc/reference/cdaorecordview-class.md) e [CDaoRecordset](../mfc/reference/cdaorecordset-class.md).|Creazione automatica delle classi.|  
|Mapping dei controlli della visualizzazione di record ai membri dati di campo del recordset.|Disponibilità del meccanismo DDX tra i controlli e i campi del recordset.|  
||Disponibilità dei gestori di comando predefiniti per i comandi **Move First**, **Move Last**, **Move Next** e **Move Previous** accessibili da menu o mediante pulsanti di barre degli strumenti.|  
||Aggiornamento delle modifiche nell'origine dati.|  
|\[Facoltativo\] Scrittura di codice per inserire i dati provenienti da un secondo recordset in caselle di riepilogo, caselle combinate o altri controlli.||  
|\[Facoltativo\] Scrittura di codice per eventuali convalide particolari.||  
|\[Facoltativo\] Scrittura di codice per aggiungere o eliminare record.||  
  
 La programmazione basata su form è solo una delle modalità di uso dei database.  Per informazioni sulle applicazioni che usano altre interfacce utente o che non ne usano alcuna, vedere [MFC: uso di classi di database con documenti e visualizzazioni](../data/mfc-using-database-classes-with-documents-and-views.md) e [MFC: uso di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).  Per informazioni su come visualizzare i record di database in altri modi, vedere le classi [CListView](../mfc/reference/clistview-class.md) e [CTreeView](../mfc/reference/ctreeview-class.md).  
  
## Vedere anche  
 [Visualizzazioni di record \(accesso ai dati MFC\)](../data/record-views-mfc-data-access.md)   
 [Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)