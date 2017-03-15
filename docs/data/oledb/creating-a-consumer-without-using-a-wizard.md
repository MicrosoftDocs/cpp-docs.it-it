---
title: "Creazione di un consumer senza utilizzare una procedura guidata | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB (consumer), creazione"
ms.assetid: e8241cfe-5faf-48f8-9de3-241203de020b
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Creazione di un consumer senza utilizzare una procedura guidata
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nell'esempio riportato di seguito si presume che si stia aggiungendo il supporto per il consumer OLE DB a un progetto ATL esistente.  Se si desidera aggiungere il supporto per un consumer OLE DB a un'applicazione MFC, è necessario eseguire la Creazione guidata applicazione MFC, che consente di creare tutto il supporto necessario e richiama le routine MFC richieste per l'esecuzione dell'applicazione.  
  
 Per aggiungere il supporto del consumer OLE DB senza utilizzare la Creazione guidata consumer OLE DB ATL, eseguire le seguenti operazioni:  
  
-   Aggiungere nel file Stdafx.h file le seguenti istruzioni `#include`:  
  
    ```  
    #include <atlbase.h>  
    #include <atldbcli.h>  
    #include <atldbsch.h> // if you are using schema templates  
    ```  
  
 A livello di codice, un consumer esegue in genere questa sequenza di operazioni:  
  
-   Creazione di una classe di record utente che associa colonne a variabili locali.  In questo esempio la classe di record utente è `CMyTableNameAccessor`. Per ulteriori informazioni, vedere [Record utente](../../data/oledb/user-records.md).  La classe contiene la mappa delle colonne e la mappa dei parametri.  Dichiarazione di un membro dati nella classe di record utente per ogni campo specificato nella mappa delle colonne. Inoltre, per ognuno di questi membri dati, dichiarazione di un membro dati di stato e di un membro dati di lunghezza.  Per ulteriori informazioni, vedere [Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata](../../data/oledb/field-status-data-members-in-wizard-generated-accessors.md)  
  
    > [!NOTE]
    >  Se si crea un consumer personalizzato, le variabili dei dati devono essere specificate prima delle variabili di stato e di lunghezza.  
  
-   Creazione di un'istanza di un'origine dati e di una sessione.  Decisione del tipo di funzione di accesso e di rowset da utilizzare e quindi creazione di un'istanza di un rowset mediante [CCommand](../../data/oledb/ccommand-class.md) o [CTable](../../data/oledb/ctable-class.md):  
  
    ```  
    CDataSource ds;  
    CSession ss;  
    class CMyTableName : public CCommand<CAccessor<CMyTableNameAccessor> >  
    ```  
  
-   Chiamata a **CoInitialize** per inizializzare COM.  Viene solitamente effettuata nel codice principale.  Di seguito è riportato un esempio.  
  
    ```  
    HRESULT hr = CoInitialize(NULL);  
    ```  
  
-   Chiamata a [CDataSource::Open](../../data/oledb/cdatasource-open.md) o a una delle sue varianti.  
  
-   Apertura di una connessione all'origine dati, apertura di una sessione, apertura e inizializzazione, ed esecuzione nel caso di un comando, del rowset:  
  
    ```  
    hr = ds.Open();  
    hr = ss.Open(ds);  
    hr = rs.Open();            // (Open also executes the command)  
    ```  
  
-   Eventuale impostazione delle proprietà del rowset mediante `CDBPropSet::AddProperty` e loro passaggio come parametro a `rs.Open`.  Per una dimostrazione, vedere GetRowsetProperties in [Metodi generati mediante la Creazione guidata consumer](../../data/oledb/consumer-wizard-generated-methods.md).  
  
-   A questo punto è possibile utilizzare il rowset per recuperare o modificare i dati.  
  
-   Una volta realizzata l'applicazione, chiudere la connessione, la sessione e il rowset:  
  
    ```  
    rs.Close();  
    ss.Close();  
    ds.Close();  
    ```  
  
     Se si utilizza un comando, potrebbe essere necessario chiamare `ReleaseCommand` dopo **Close**.  Nell'esempio di codice utilizzato in [CCommand::Close](../../data/oledb/ccommand-close.md) viene mostrato come chiamare **Close** e `ReleaseCommand`.  
  
-   Chiamata a **CoUnInitialize** per annullare l'inizializzazione di COM.  Viene solitamente effettuata nel codice principale.  
  
    ```  
    CoUninitialize();  
    ```  
  
## Vedere anche  
 [Creazione di un consumer OLE DB](../../data/oledb/creating-an-ole-db-consumer.md)