---
title: "Classi DAO | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
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
  - "DAO [C++], classi"
  - "classi di database [C++], DAO"
ms.assetid: b15d0cd6-328b-4288-9c19-d037a795db57
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi DAO
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzionamento di queste classi con le altre classi del framework applicazione per fornire i database semplice di \(DAO\) dell'oggetto Access di accesso ai dati, che utilizzano lo stesso motore di database di Microsoft Visual Basic e Microsoft Access.  Le classi DAO è possibile accedere a un'ampia varietà di database per il quale i driver ODBC \(open database connectivity\) disponibili.  
  
 I programmi che utilizzano i database DAO presentano almeno un oggetto di `CDaoDatabase` e un oggetto di `CDaoRecordset`.  
  
> [!NOTE]
>  A partire da Visual C\+\+ .NET, l'ambiente e le procedure guidate di Visual C\+\+ non supportano più DAO, anche se le classi DAO sono incluse e possono essere comunque utilizzate.  Si consiglia di utilizzare ODBC per i nuovi progetti MFC.  di utilizzare DAO solo per la gestione delle applicazioni già esistenti.  
  
 [CDaoWorkspace](../mfc/reference/cdaoworkspace-class.md)  
 Gestisce una sessione denominata e password protetta del database dall'accesso per disconnettersi.  La maggior parte dei programmi utilizzano l'area di lavoro predefinita.  
  
 [CDaoDatabase](../mfc/reference/cdaodatabase-class.md)  
 Una connessione a un database tramite cui è possibile eseguire operazioni sui dati.  
  
 [CDaoRecordset](../mfc/reference/cdaorecordset-class.md)  
 Rappresenta un set di record selezionati da un'origine dati.  
  
 [CDaoRecordView](../mfc/reference/cdaorecordview-class.md)  
 Visualizzazione che mostra i record del database nei controlli.  
  
 [CDaoQueryDef](../mfc/reference/cdaoquerydef-class.md)  
 Rappresenta una definizione della query, in genere una salvata in un database.  
  
 [CDaoTableDef](../mfc/reference/cdaotabledef-class.md)  
 Rappresenta la definizione archiviata di una tabella di base o di una tabella collegata.  
  
 [CDaoException](../mfc/reference/cdaoexception-class.md)  
 Rappresenta uno stato di eccezione in seguito alle classi DAO.  
  
 [CDaoFieldExchange](../mfc/reference/cdaofieldexchange-class.md)  
 Supporta le routine DFX DAO \(record field exchange\) utilizzate dalle classi di database DAO.  Generalmente direttamente non sarà possibile utilizzare questa classe.  
  
## Classi correlate  
 [CLongBinary](../mfc/reference/clongbinary-class.md)  
 Incapsula un handle per l'archiviazione di un oggetto binario di grandi dimensioni \(BLOB\), ad esempio una bitmap.  gli oggetti di`CLongBinary` vengono utilizzati per gestire gli oggetti grandi dati archiviati in tabelle di database.  
  
 [COleCurrency](../mfc/reference/colecurrency-class.md)  
 Wrapper per il tipo **VALUTA**, un tipo aritmetico a virgola fissa di automazione OLE, con 15 cifre prima del separatore decimale e 4 cifre in avanti.  
  
 [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)  
 Wrapper per il tipo **DATA**di automazione OLE.  Rappresenta i valori di data e ora.  
  
 [COleVariant](../mfc/reference/colevariant-class.md)  
 Wrapper per il tipo **VARIANT**di automazione OLE.  I dati in **VARIANT**s possono essere archiviati in numerosi formati.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)