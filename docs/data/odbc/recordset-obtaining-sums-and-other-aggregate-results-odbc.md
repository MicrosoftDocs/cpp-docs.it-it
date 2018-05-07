---
title: 'Recordset: Recupero di somme e altri risultati aggregati (ODBC) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- SQL, retrieving aggregate values from recordsets
- recordsets, retrieving SQL aggregate values
- retrieving SQL aggregate values from recordsets
- ODBC recordsets, retrieving SQL aggregate values
- SQL aggregate values
- SQL Server projects, retrieving aggregate values from recordsets
- SQL aggregate values, retrieving from recordsets
ms.assetid: 94500662-22a4-443e-82d7-acbe6eca447b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4aa6de58e7e2c530a7a353281ba5af747f48cd4e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="recordset-obtaining-sums-and-other-aggregate-results-odbc"></a>Recordset: recupero di somme e altri risultati aggregati (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 In questo argomento viene illustrato come ottenere i risultati aggregati con i seguenti [SQL](../../data/odbc/sql.md) parole chiave:  
  
-   **SOMMA** calcola il totale dei valori in una colonna con tipo di dati numerico.  
  
-   **MIN** estrae il valore più piccolo in una colonna con tipo di dati numerico.  
  
-   **MAX** estrae il valore più grande in una colonna con tipo di dati numerico.  
  
-   **AVG** calcola la media di tutti i valori in una colonna con tipo di dati numerico.  
  
-   **CONTEGGIO** conta il numero di record in una colonna di qualsiasi tipo di dati.  
  
 Utilizzare queste funzioni SQL per ottenere informazioni statistiche sui record di un'origine dati anziché estrarre i record dall'origine dati. Il recordset che viene creato in genere è costituito da un singolo record (se tutte le colonne sono aggregazioni) che contiene un valore. (Potrebbe essere più di un record se è stato usato un **GROUP BY** clausola.) Questo valore è il risultato del calcolo o estrazione eseguita dalla funzione SQL.  
  
> [!TIP]
>  Per aggiungere un database SQL **GROUP BY** clausola (ed eventualmente un **HAVING** clausola) all'istruzione SQL, li aggiunge alla fine di **m_strFilter**. Ad esempio:  
  
```  
m_strFilter = "sales > 10 GROUP BY SALESPERSON_ID";  
```  
  
 È possibile limitare il numero di record che consentono di ottenere risultati aggregati, filtrare e ordinare le colonne.  
  
> [!CAUTION]
>  Alcuni operatori di aggregazione restituiscono un tipo di dati diversi dalle colonne su cui si sta eseguendo l'aggregazione.  
  
-   **SOMMA** e **AVG** potrebbe restituire il tipo di dati più grande successivo (ad esempio, la chiamata con `int` restituisce **lungo** oppure **doppie**).  
  
-   **CONTEGGIO** restituisce in genere **lungo** indipendentemente dal tipo di colonna di destinazione.  
  
-   **MAX** e **MIN** restituire lo stesso tipo di dati come le colonne calcolate.  
  
     Ad esempio, il **Aggiungi classe** procedura guidata crea `long` `m_lSales` per contenere una colonna Sales, ma è necessario sostituirlo con un `double m_dblSumSales` membro dati per contenere il risultato aggregato. Vedere l'esempio seguente.  
  
#### <a name="to-obtain-an-aggregate-result-for-a-recordset"></a>Per ottenere il risultato di un'aggregazione per un oggetto recordset  
  
1.  Creare un oggetto recordset, come descritto in [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) contenente le colonne da cui si desidera ottenere risultati aggregati.  
  
2.  Modificare il [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) funzione per il recordset. Sostituire la stringa che rappresenta il nome di colonna (il secondo argomento del [RFX](../../data/odbc/record-field-exchange-using-rfx.md) chiamate di funzione) con una stringa che rappresenta la funzione di aggregazione nella colonna. Ad esempio, sostituire:  
  
    ```  
    RFX_Long(pFX, "Sales", m_lSales);  
    ```  
  
     con:  
  
    ```  
    RFX_Double(pFX, "Sum(Sales)", m_dblSumSales)  
    ```  
  
3.  Apre il recordset. Il risultato dell'operazione di aggregazione viene lasciato in `m_dblSumSales`.  
  
> [!NOTE]
>  La procedura guidata assegna i nomi dei membri di dati senza prefissi ungheresi. Ad esempio, la procedura guidata crea `m_Sales` per una colonna Sales, anziché `m_lSales` nome utilizzato a scopo illustrativo.  
  
 Se si utilizza un [CRecordView](../../mfc/reference/crecordview-class.md) classe per visualizzare i dati, è necessario modificare la chiamata di funzione DDX per visualizzare il nuovo valore del membro dati; in questo caso, può essere modificato da:  
  
```  
DDX_FieldText(pDX, IDC_SUMSALES, m_pSet->m_lSales, m_pSet);  
```  
  
 A:  
  
```  
DDX_FieldText(pDX, IDC_SUMSALES, m_pSet->m_dblSumSales, m_pSet);  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)