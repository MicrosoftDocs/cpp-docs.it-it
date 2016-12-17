---
title: "Comandi e tabelle | Microsoft Docs"
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
  - "CAccessorRowset (classe), classi di comandi e di tabelle"
  - "CCommand (classe), OLE DB (modelli consumer)"
  - "comandi [C++], Modelli consumer OLE DB"
  - "CTable (classe)"
  - "OLE DB (modelli consumer), supporto comandi"
  - "OLE DB (modelli consumer), supporto tabelle"
  - "rowset, accesso"
  - "tabelle [C++], Modelli consumer OLE DB"
ms.assetid: 4bd3787b-6d26-40a9-be0c-083080537c12
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Comandi e tabelle
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I comandi e le tabelle consentono di accedere ai rowset, ovvero aprire i rowset, eseguire comandi e associare le colonne.  Le classi [CCommand](../../data/oledb/ccommand-class.md) e [CTable](../../data/oledb/ctable-class.md) generano, rispettivamente, un'istanza dell'oggetto comando e un'istanza dell'oggetto tabella.  Queste classi derivano da [CAccessorRowset](../../data/oledb/caccessorrowset-class.md), come illustrato nella figura riportata di seguito.  
  
 ![CCommand e CTable](../../data/oledb/media/vccommandstables.gif "vcCommandsTables")  
Classi dei comandi e delle tabelle  
  
 Nella tabella precedente `TAccessor` rappresenta uno qualsiasi dei tipi di funzione di accesso elencati in [Tipi di funzioni di accesso](../../data/oledb/accessors-and-rowsets.md).  *TRowset* rappresenta qualsiasi tipo di rowset elencato in [Tipi di rowset](../../data/oledb/accessors-and-rowsets.md).  *TMultiple* specifica il tipo di risultati, ovvero uno o più insiemi di risultati.  
  
 La [Creazione guidata consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md) consente di specificare se si desidera creare un oggetto comando o tabella.  
  
-   Per le origini dati senza comandi, è possibile utilizzare la classe `CTable`.  In genere, viene utilizzata per rowset semplici che non specificano parametri e non richiedono più insiemi di risultati.  Questa classe semplice apre una tabella di un'origine dati tramite un nome di tabella specificato dal programmatore.  
  
-   Per le origini dati che supportano i comandi è invece possibile utilizzare la classe `CCommand`.  Per eseguire un comando, chiamare [Open](../../data/oledb/ccommand-open.md) su questa classe.  In alternativa, è possibile chiamare `Prepare` per preparare un comando che si desidera eseguire più volte.  
  
     **CCommand** ha tre argomenti del modello: un tipo di funzione di accesso, un tipo di rowset e un tipo di risultati `CNoMultipleResults`, predefinito, oppure `CMultipleResults`.  Se si specifica `CMultipleResults`, la classe `CCommand` supporterà l'interfaccia **IMultipleResults** e gestirà più rowset.  Nell'esempio [DBVIEWER](http://msdn.microsoft.com/it-it/07620f99-c347-4d09-9ebc-2459e8049832) viene illustrato come gestire risultati multipli.  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)