---
title: "Impostazione di propriet&#224; nel provider | Microsoft Docs"
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
  - "provider OLE DB, proprietà"
  - "proprietà [C++], provider OLE DB"
ms.assetid: 26a8b493-7ec4-4686-96d0-9ad5d2bca5ac
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Impostazione di propriet&#224; nel provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cercare il gruppo e l'ID della proprietà desiderata.  Per ulteriori informazioni, vedere [Proprietà OLE DB](https://msdn.microsoft.com/en-us/library/ms722734.aspx) in *OLE DB Programmer's Reference* \(informazioni in lingua inglese\).  
  
 Nel codice del provider generato tramite la procedura guidata cercare la mappa delle proprietà corrispondente al gruppo della proprietà.  Il nome del gruppo della proprietà corrisponde in genere al nome dell'oggetto.  Le proprietà del comando e del rowset si trovano nell'oggetto Command o Rowset, le proprietà dell'origine dati e di inizializzazione si trovano nell'oggetto DataSource.  
  
 Aggiungere alla mappa delle proprietà una macro [PROPERTY\_INFO\_ENTRY\_EX](../../data/oledb/property-info-entry-ex.md).  PROPERTY\_INFO\_ENTRY\_EX accetta quattro parametri:  
  
-   L'ID della proprietà in questione.  Rimuovere i primi sette caratteri \("DBPROP\_"\) dal nome della proprietà.  Se ad esempio si desidera aggiungere **DBPROP\_MAXROWS**, passare `MAXROWS` come primo elemento.  Se si tratta di una proprietà personalizzata, passare il nome GUID completo, ad esempio `DBMYPROP_MYPROPERTY`.  
  
-   Il tipo Variant della proprietà. Vedere [OLE DB Properties](https://msdn.microsoft.com/en-us/library/ms722734.aspx) in *OLE DB Programmer's Reference* \(informazioni in lingua inglese\).  Immettere il tipo **VT\_**, ad esempio `VT_BOOL` o `VT_I2`, corrispondente al tipo di dati.  
  
-   I flag che indicano se la proprietà è di lettura e scrittura e il gruppo a cui essa appartiene.  Nel codice che segue, ad esempio, è riportata una proprietà di lettura\/scrittura appartenente al gruppo Rowset:  
  
    ```  
    DBPROPFLAGS_ROWSET | DBPROPFLAGS_READ | DBPROPFLAGS_WRITE  
    ```  
  
-   Il valore base della proprietà.  Può essere, ad esempio, **VARIANT\_FALSE** per un tipo Boolean oppure zero per un tipo Integer.  La proprietà presenterà questo valore, a meno questo non sia stato modificato.  
  
    > [!NOTE]
    >  Alcune proprietà sono connesse o concatenate ad altre proprietà, ad esempio quelle relative ai bookmark o all'aggiornamento.  Quando un consumer imposta una proprietà su true, è possibile che venga impostata automaticamente anche un'altra proprietà.  I modelli provider OLE DB supportano questo meccanismo tramite il metodo [CUtlProps::OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md).  
  
## Proprietà ignorate dai provider OLE DB Microsoft  
 Le seguenti proprietà di OLE DB vengono ignorate dai provider OLE DB Microsoft:  
  
-   **DBPROP\_MAXROWS** può essere utilizzata solo per i provider in sola lettura, ovvero i provider in cui DBPROP\_IRowsetChange e DBPROP\_IRowsetUpdate sono false. In caso contrario la proprietà non è supportata.  
  
-   **DBPROP\_MAXPENDINGROWS** viene ignorata. Il limite viene specificato dallo stesso provider.  
  
-   **DBPROP\_MAXOPENROWS** viene ignorata. Il limite viene specificato dallo stesso provider.  
  
-   **DBPROP\_CANHOLDROWS** viene ignorata. Il limite viene specificato dallo stesso provider.  
  
## Vedere anche  
 [Utilizzo dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)