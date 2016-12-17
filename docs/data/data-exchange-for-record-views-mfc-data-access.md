---
title: "Scambio di dati per le visualizzazioni di record (accesso ai dati MFC) | Microsoft Docs"
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
  - "DDX (Dialog Data Exchange), visualizzazioni di record"
  - "DFX (trasferimento di campi di record DAO)"
  - "DFX (trasferimento di campi di record DAO), meccanismo di scambio di dati"
  - "DFX (trasferimento di campi di record DAO), visualizzazioni di record"
  - "visualizzazioni di record, scambio di dati"
  - "RFX (Trasferimento di campi di record)"
  - "RFX (Trasferimento di campi di record), meccanismo di scambio di dati"
  - "RFX (Trasferimento di campi di record), visualizzazioni di record"
ms.assetid: abc52ca7-6997-47a7-98f3-f347f52b1f72
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Scambio di dati per le visualizzazioni di record (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si usa l'opzione [Aggiungi classe](../mfc/reference/adding-an-mfc-odbc-consumer.md) per mappare i controlli in una risorsa modello di finestra di dialogo di una visualizzazione di record ai campi di un recordset, il framework gestisce lo scambio di dati in entrambe le direzioni, ovvero dal recordset ai controlli e dai controlli al recordset.  Il meccanismo DDX elimina la necessità di scrivere manualmente il codice per il trasferimento dei dati nelle due direzioni.  
  
 DDX per le visualizzazioni di record viene usato unitamente a:  
  
-   [RFX](../data/odbc/record-field-exchange-rfx.md) per i recordset della classe `CRecordset` \(ODBC\).  
  
-   DFX per i recordset della classe `CDaoRecordset` \(DAO\).  
  
 Sebbene diversi in termini di implementazione, RFX e DFX rappresentano meccanismi di scambio di dati molto simili a livello di interfaccia.  La versione DAO, DFX, è stata progettata in modo molto simile alla precedente versione ODBC, RFX.  Se si è in grado di usare RFX, si saprà usare anche DFX.  
  
 RFX e DFX spostano i dati tra il record corrente dell'origine dati e i membri dati di campi di un oggetto recordset.  DDX sposta i dati dai membri dati di campi ai controlli nel form.  Questa combinazione fornisce i dati per i controlli del form sia inizialmente sia quando l'utente si sposta da un record all'altro.  Inoltre è in grado di spostare nuovamente nel recordset e quindi nell'origine dati i dati aggiornati.  
  
 La figura seguente mostra la relazione tra DDX e RFX \(o DFX\) per le visualizzazioni di record.  
  
 ![DDX &#40;Dialog Data Exchange&#41; e RFX &#40;Record Field Exchange&#41;](../data/media/vc37xt1.gif "vc37XT1")  
DDX \(Dialog Data Exchange\) e RFX \(Record Field Exchange\)  
  
 Per altre informazioni su DDX, vedere [Convalida e DDX \(Dialog Data Exchange\)](../mfc/dialog-data-exchange-and-validation.md).  Per altre informazioni su RFX, vedere [Trasferimento di campi di record \(RFX\)](../data/odbc/record-field-exchange-rfx.md).  
  
## Vedere anche  
 [Visualizzazioni di record \(accesso ai dati MFC\)](../data/record-views-mfc-data-access.md)   
 [Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)