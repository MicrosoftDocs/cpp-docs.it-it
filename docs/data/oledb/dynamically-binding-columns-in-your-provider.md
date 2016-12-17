---
title: "Associazione dinamica di colonne nel provider | Microsoft Docs"
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
  - "colonne [C++], associazione dinamica di colonne"
  - "associazione dinamica di colonne"
  - "provider [C++], associazione dinamica di colonne"
ms.assetid: 45e811e3-f5a7-4627-98cc-bf817c4e556e
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Associazione dinamica di colonne nel provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Accertarsi che l'associazione dinamica delle colonne sia effettivamente indispensabile.  Può essere necessaria per varie ragioni:  
  
-   Le colonne del rowset non sono definite in fase di compilazione.  
  
-   Sono supportati elementi, ad esempio i bookmark, che aggiungono colonne.  
  
### Per implementare l'associazione dinamica delle colonne  
  
1.  Rimuovere eventuali voci **PROVIDER\_COLUMN\_MAP** dal codice.  
  
2.  Aggiungere la seguente dichiarazione al record utente, ovvero la struttura:  
  
    ```  
    static ATLCOLUMNINFO* GetColumnInfo(void* pThis, ULONG* pcCols);  
    ```  
  
3.  Implementare la funzione `GetColumnInfo`.  Questa funzione definisce la modalità di memorizzazione delle informazioni.  Può essere necessario ottenere proprietà o altre informazioni per questa funzione.  È possibile creare una macro, analoga alla macro [COLUMN\_ENTRY](../../data/oledb/column-entry.md), per aggiungere informazioni personalizzate.  
  
     Nell'esempio riportato di seguito viene illustrata una funzione `GetColumnInfo`.  
  
    ```  
    // Check the property flag for bookmarks, if it is set, set the zero  
    // ordinal entry in the column map with the bookmark information.  
    CAgentRowset* pRowset = (CAgentRowset*) pThis;  
    CComQIPtr<IRowsetInfo, &IID_IRowsetInfo> spRowsetProps = pRowset;  
  
    CDBPropIDSet set(DBPROPSET_ROWSET);  
    set.AddPropertyID(DBPROP_BOOKMARKS);  
    DBPROPSET* pPropSet = NULL;  
    ULONG ulPropSet = 0;  
    HRESULT hr;  
  
    if (spRowsetProps)  
       hr = spRowsetProps->GetProperties(1, &set, &ulPropSet, &pPropSet);  
  
    if (pPropSet)  
    {  
       CComVariant var = pPropSet->rgProperties[0].vValue;  
       CoTaskMemFree(pPropSet->rgProperties);  
       CoTaskMemFree(pPropSet);  
  
       if (SUCCEEDED(hr) && (var.boolVal == VARIANT_TRUE))  
       {  
          ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0, sizeof(DWORD), DBTYPE_BYTES,   
             0, 0, GUID_NULL, CAgentMan, dwBookmark, DBCOLUMNFLAGS_ISBOOKMARK)  
          ulCols++;  
       }  
    }  
  
    // Next, set up the other columns.  
    ADD_COLUMN_ENTRY(ulCols, OLESTR("Command"), 1, 256, DBTYPE_STR, 0xFF, 0xFF,   
       GUID_NULL, CAgentMan, szCommand)  
    ulCols++;  
    ADD_COLUMN_ENTRY(ulCols, OLESTR("Text"), 2, 256, DBTYPE_STR, 0xFF, 0xFF,   
       GUID_NULL, CAgentMan, szText)  
    ulCols++;  
  
    ADD_COLUMN_ENTRY(ulCols, OLESTR("Command2"), 3, 256, DBTYPE_STR, 0xFF, 0xFF,   
       GUID_NULL, CAgentMan, szCommand2)  
    ulCols++;  
    ADD_COLUMN_ENTRY(ulCols, OLESTR("Text2"), 4, 256, DBTYPE_STR, 0xFF, 0xFF,   
       GUID_NULL, CAgentMan, szText2)  
    ulCols++;  
  
    if (pcCols != NULL)  
       *pcCols = ulCols;  
  
    return _rgColumns;  
    }  
    ```  
  
## Vedere anche  
 [Utilizzo dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)