---
title: Recupero dei dati | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- data [C++], fetching
- rowsets [C++], fetching
- fetching
- OLE DB consumer templates [C++], fetching data
ms.assetid: b07f747f-9855-4f27-a03d-b1d5b10fa284
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ab03da7c303552a715c6766af7829e74025866ed
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fetching-data"></a>Recupero dei dati
Dopo aver aperto l'origine dati, sessione e oggetti set di righe, è possibile recuperare i dati. A seconda del tipo di funzione di accesso in uso, potrebbe essere necessario associare le colonne.  
  
### <a name="to-fetch-data"></a>Per recuperare i dati  
  
1.  Aprire il set di righe utilizzando il metodo appropriato **aprire** comando.  
  
2.  Se si utilizza `CManualAccessor`, associare le colonne di output, se non è già stato fatto. Per associare le colonne, chiamare `GetColumnInfo`e quindi creare una funzione di accesso con le associazioni, come illustrato nell'esempio seguente:  
  
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
  
3.  Scrivere un `while` ciclo per recuperare i dati. Nel ciclo, chiamare `MoveNext` per far avanzare il cursore e verificare il valore restituito con S_OK, come illustrato nell'esempio seguente:  
  
    ```  
    while (rs.MoveNext() == S_OK)  
    {  
        // Add code to fetch data here  
        // If you are not using an auto accessor, call rs.GetData()  
    }  
    ```  
  
4.  All'interno di `while` ciclo, è possibile recuperare i dati in base al tipo di funzione di accesso.  
  
    -   Se si utilizza il [CAccessor](../../data/oledb/caccessor-class.md) (classe), è necessario un record dell'utente che contiene i membri di dati. È possibile accedere ai dati utilizzando i membri di dati, come illustrato nell'esempio seguente:  
  
        ```  
        while (rs.MoveNext() == S_OK)  
        {  
            // Use the data members directly. In this case, m_nFooID  
            // is declared in a user record that derives from  
            // CAccessor  
            wsprintf_s("%d", rs.m_nFooID);   
        }  
        ```  
  
    -   Se si utilizza il `CDynamicAccessor` o `CDynamicParameterAccessor` (classe), è possibile recuperare i dati utilizzando le funzioni di accesso `GetValue` e `GetColumn`, come illustrato nell'esempio seguente. Se si desidera determinare il tipo di dati in uso, utilizzare `GetType`.  
  
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
  
    -   Se si utilizza `CManualAccessor`, è necessario specificare i membri dati personalizzati, associarli manualmente e accedervi direttamente, come illustrato nell'esempio seguente:  
  
        ```  
        while (rs.MoveNext() == S_OK)  
        {  
            // Use the data members you specified in the calls to  
            // AddBindEntry.  
  
            wsprintf_s("%s", szFoo);  
        }  
        ```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)