---
title: "Classi ODBC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi di database [C++], ODBC"
  - "classi ODBC [C++]"
ms.assetid: 6c40fca8-3033-4873-9abe-7f51725de0e0
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi ODBC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzionamento di queste classi con le altre classi del framework applicazione per fornire l'accesso semplice per un'ampia varietà di driver di database per il quale ODBC \(open database connectivity\) è disponibile.  
  
 I programmi che utilizzano i database ODBC avranno almeno un oggetto di `CDatabase` e un oggetto di `CRecordset`.  
  
 [CDatabase](../mfc/reference/cdatabase-class.md)  
 Incapsula una connessione a un'origine dati, con cui è possibile operare nell'origine dati.  
  
 [CRecordset](../mfc/reference/crecordset-class.md)  
 Incapsula un insieme di record selezionati da un'origine dati.  I recordset consentono lo spostamento da un record al record, aggiornamento dei record \(aggiunta, modifica ed eliminazione di record\), qualificanti la selezione con un filtro, l'ordinamento la selezione e parametrizzanti la selezione con le informazioni ottenute o calcolate in fase di esecuzione.  
  
 [CRecordView](../mfc/reference/crecordview-class.md)  
 Fornisce una visualizzazione form connessa direttamente a un oggetto recordset.  Scambio dei dati di scambio di dati del meccanismo della finestra di dialogo \(DDX\) tra il recordset e i controlli della visualizzazione di record.  Come tutte le visualizzazioni maschere, una visualizzazione di record è basata su una risorsa modello di finestra di dialogo.  Le visualizzazioni di record supportano anche lo spostamento da un record al record del recordset, aggiornare i record e chiusura del recordset collegato alla visualizzazione di record viene chiusa.  
  
 [CDBException](../mfc/reference/cdbexception-class.md)  
 Un'eccezione derivando da errori nell'elaborazione di accesso ai dati.  Questa classe ha la stessa funzione da altre classi di eccezioni di meccanismo di gestione delle eccezioni della libreria di classi.  
  
 [CFieldExchange](../mfc/reference/cfieldexchange-class.md)  
 Vengono fornite informazioni sul contesto per supportare trasferimento di campi di Record, che scambio di dati tra i membri dati di campo e i membri dati di parametro di un oggetto recordset e le colonne della tabella corrispondenti nell'origine dati.  Valore predefinito [CDataExchange](../mfc/reference/cdataexchange-class.md), utilizzato in modo analogo per lo scambio di dati della finestra di dialogo \(DDX\).  
  
## Classi correlate  
 [CLongBinary](../mfc/reference/clongbinary-class.md)  
 Incapsula un handle per l'archiviazione di un oggetto binario di grandi dimensioni \(BLOB\), ad esempio una bitmap.  gli oggetti di`CLongBinary` vengono utilizzati per gestire gli oggetti grandi dati archiviati in tabelle di database.  
  
 [CDBVariant](../mfc/reference/cdbvariant-class.md)  
 Consente di inserire un valore senza preoccuparsi del tipo di dati del valore.  `CDBVariant` tenere traccia del tipo di dati del valore corrente, archiviato in un'unione.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)