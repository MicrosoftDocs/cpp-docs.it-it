---
title: "Recupero dei dati | Microsoft Docs"
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
  - "dati [C++], recupero"
  - "recupero"
  - "modelli consumer OLE DB [C++], recupero dati"
  - "rowset [C++], recupero"
ms.assetid: b07f747f-9855-4f27-a03d-b1d5b10fa284
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recupero dei dati
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Dopo avere aperto gli oggetti origine dati, sessione e rowset, è possibile recuperare i dati.  A seconda del tipo di funzione di accesso in uso, potrebbe essere necessario associare le colonne.  
  
### Per recuperare i dati  
  
1.  Aprire il rowset utilizzando il comando **Open** appropriato.  
  
2.  Se si utilizza `CManualAccessor`, associare le colonne di output, se necessario.  Per eseguire questa operazione, chiamare `GetColumnInfo` e quindi creare una funzione di accesso con le associazioni, come illustrato nel seguente esempio:  
  
    ```  
    // From the DBViewer Sample CDBTreeView::OnQueryEdit  
    // Get the column information  
    ULONG ulColumns       = 0;  
    DBCOLUMNINFO* pColumnInfo  = NULL;  
    LPOLESTR pStrings      = NULL;  
    if (rs.GetColumnInfo(&ulColumns, &pColumnInfo, &pStrings) != S_OK)  
        ThrowMyOLEDBException(rs.m_pRowset, IID_IColumnsInfo);  
    struct MYBIND* pBind = new MYBIND[ulColumns];  
    rs.CreateAccessor(ulColumns, &pBind[0], sizeof(MYBIND)*ulColumns);  
    for (ULONG l=0; l<ulColumns; l++)  
    rs.AddBindEntry(l+1, DBTYPE_STR, sizeof(TCHAR)*40, &pBind[l].szValue, NULL, &pBind[l].dwStatus);  
    rs.Bind();  
    ```  
  
3.  Scrivere un ciclo `while` per recuperare i dati.  Nel ciclo chiamare `MoveNext` per spostare il cursore e verificare il valore restituito confrontandolo con S\_OK, come illustrato nel seguente esempio:  
  
    ```  
    while (rs.MoveNext() == S_OK)  
    {  
        // Add code to fetch data here  
        // If you are not using an auto accessor, call rs.GetData()  
    }  
    ```  
  
4.  All'interno del ciclo `while` è possibile recuperare i dati in base al tipo di funzione di accesso utilizzato.  
  
    -   Se si utilizza la classe [CAccessor](../../data/oledb/caccessor-class.md), è necessario disporre di un record utente contenente i membri dati.  Per accedere ai dati, è possibile utilizzare tali membri dati come illustrato nel seguente esempio:  
  
        ```  
        while (rs.MoveNext() == S_OK)  
        {  
            // Use the data members directly. In this case, m_nFooID  
            // is declared in a user record that derives from  
            // CAccessor  
            wsprintf_s("%d", rs.m_nFooID);   
        }  
        ```  
  
    -   Se si utilizza la classe `CDynamicAccessor` o `CDynamicParameterAccessor`, è possibile recuperare i dati tramite le funzioni di accesso `GetValue` e `GetColumn`, come illustrato nell'esempio seguente.  Se si desidera determinare il tipo di dati in uso, servirsi di `GetType`.  
  
        ```  
        while (rs.MoveNext() == S_OK)  
        {  
            // Use the dynamic accessor functions to retrieve your data.  
  
            ULONG ulColumns = rs.GetColumnCount();  
            for (ULONG i=0; i<ulColumns; i++)  
            {  
                rs.GetValue(i);  
            }  
        }  
        ```  
  
    -   Se si utilizza `CManualAccessor`, è necessario specificare dei membri dati personalizzati, associarli manualmente e accedervi direttamente, come illustrato nell'esempio seguente:  
  
        ```  
        while (rs.MoveNext() == S_OK)  
        {  
            // Use the data members you specified in the calls to  
            // AddBindEntry.  
  
            wsprintf_s("%s", szFoo);  
        }  
        ```  
  
## Vedere anche  
 [Utilizzo dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)