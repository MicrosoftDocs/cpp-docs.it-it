---
title: Recupero di dati
ms.date: 10/19/2018
helpviewer_keywords:
- data [C++], fetching
- rowsets [C++], fetching
- fetching
- OLE DB consumer templates [C++], fetching data
ms.assetid: b07f747f-9855-4f27-a03d-b1d5b10fa284
ms.openlocfilehash: 919eb059f5d3f29d491bf7a6598b0c77163bd783
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87184644"
---
# <a name="fetching-data"></a>Recupero di dati

Dopo aver aperto gli oggetti origine dati, sessione e set di righe, è possibile recuperare i dati. A seconda del tipo di funzione di accesso in uso, potrebbe essere necessario associare le colonne.

## <a name="to-fetch-data"></a>Per recuperare i dati

1. Aprire il set di righe utilizzando il comando **Apri** appropriato.

1. Se si usa `CManualAccessor` , associare le colonne di output, se non è già stato fatto. L'esempio seguente è tratto dall'esempio [DBVIEWER](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/dbviewer) . Per associare le colonne, chiamare `GetColumnInfo` e quindi creare una funzione di accesso con le associazioni, come illustrato nell'esempio seguente:

    ```cpp
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

1. Scrivere un **`while`** ciclo per recuperare i dati. Nel ciclo chiamare per far `MoveNext` avanzare il cursore e testare il valore restituito rispetto a S_OK, come illustrato nell'esempio seguente:

    ```cpp
    while (rs.MoveNext() == S_OK)
    {
        // Add code to fetch data here
        // If you are not using an auto accessor, call rs.GetData()
    }
    ```

1. All'interno del **`while`** ciclo è possibile recuperare i dati in base al tipo di funzione di accesso.

   - Se si utilizza la classe [CAccessor](../../data/oledb/caccessor-class.md) , è necessario disporre di un record utente contenente i membri dati. È possibile accedere ai dati usando i membri dati, come illustrato nell'esempio seguente:

        ```cpp
        while (rs.MoveNext() == S_OK)
        {
            // Use the data members directly. In this case, m_nFooID
            // is declared in a user record that derives from
            // CAccessor
            wsprintf_s("%d", rs.m_nFooID);
        }
        ```

   - Se si utilizza la `CDynamicAccessor` `CDynamicParameterAccessor` classe o, è possibile recuperare i dati utilizzando le funzioni di accesso `GetValue` e `GetColumn` , come illustrato nell'esempio seguente. Se si desidera determinare il tipo di dati in uso, utilizzare `GetType` .

        ```cpp
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

   - Se si usa `CManualAccessor` , è necessario specificare i propri membri dati, associarli manualmente e accedervi direttamente, come illustrato nell'esempio seguente:

        ```cpp
        while (rs.MoveNext() == S_OK)
        {
            // Use the data members you specified in the calls to
            // AddBindEntry.

            wsprintf_s("%s", szFoo);
        }
        ```

## <a name="see-also"></a>Vedere anche

[Uso dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)
