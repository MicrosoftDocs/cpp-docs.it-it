---
title: 'Recordset: recupero di somme e altri risultati aggregati (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- SQL, retrieving aggregate values from recordsets
- recordsets, retrieving SQL aggregate values
- retrieving SQL aggregate values from recordsets
- ODBC recordsets, retrieving SQL aggregate values
- SQL aggregate values
- SQL Server projects, retrieving aggregate values from recordsets
- SQL aggregate values, retrieving from recordsets
ms.assetid: 94500662-22a4-443e-82d7-acbe6eca447b
ms.openlocfilehash: b9e70716ad90a14bbed552d47f48d5a3317e5a62
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225709"
---
# <a name="recordset-obtaining-sums-and-other-aggregate-results-odbc"></a>Recordset: recupero di somme e altri risultati aggregati (ODBC)

> [!NOTE]
> La Creazione guidata consumer ODBC MFC non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile creare manualmente un consumer.

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento viene illustrato come ottenere risultati aggregati con le parole chiave [SQL](../../data/odbc/sql.md) seguenti:

- **SUM** Calcola il totale dei valori in una colonna con tipo di dati numerico.

- **MIN** Estrae il valore più piccolo in una colonna con tipo di dati numerico.

- **MAX** Estrae il valore più grande in una colonna con tipo di dati numerico.

- **AVG** Calcola la media di tutti i valori in una colonna con tipo di dati numerico.

- **COUNT** Esegue il conteggio del numero di record in una colonna con qualsiasi tipo di dati.

Usare queste funzioni SQL per ottenere informazioni statistiche sui record in un'origine dati, anziché per estrarre i record dall'origine dati. Il recordset che viene creato in genere è costituito da un singolo record (se tutte le colonne sono aggregazioni) che contiene un valore. Se è stata utilizzata una clausola **Group by** , potrebbe essere presente più di un record. Questo valore è il risultato del calcolo o dell'estrazione eseguito dalla funzione SQL.

> [!TIP]
> Per aggiungere una clausola SQL **GROUP BY** (ed eventualmente una clausola **HAVING**) all'istruzione SQL, aggiungerla alla fine di `m_strFilter`. Ad esempio:

```
m_strFilter = "sales > 10 GROUP BY SALESPERSON_ID";
```

È possibile limitare il numero di record usati per ottenere risultati aggregati filtrando e ordinando le colonne.

> [!CAUTION]
> Alcuni operatori di aggregazione restituiscono un tipo di dati diverso da quello delle colonne su cui eseguono l'aggregazione.

- **Sum** e **AVG** potrebbero restituire il tipo di dati più grande successivo (ad esempio, la chiamata a con **`int`** restituisce **Long** o **`double`** ).

- **COUNT** in genere restituisce **LONG** indipendentemente dal tipo di colonna di destinazione.

- **MAX** e **MIN** restituiscono lo stesso tipo di dati delle colonne su cui eseguono il calcolo.

     Ad esempio, la procedura guidata **Aggiungi classe** crea **`long`** `m_lSales` per contenere una colonna Sales, ma è necessario sostituirla con un `double m_dblSumSales` membro dati per contenere il risultato dell'aggregazione. Vedere l'esempio seguente.

#### <a name="to-obtain-an-aggregate-result-for-a-recordset"></a>Per ottenere un risultato aggregato per un recordset

1. Creare un recordset, come descritto in [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md), contenente le colonne da cui si vogliono ottenere i risultati aggregati.

1. Modificare la funzione [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) per il recordset. Sostituire la stringa che rappresenta il nome della colonna (il secondo argomento delle chiamate di funzione [RFX](../../data/odbc/record-field-exchange-using-rfx.md)) con una stringa che rappresenta la funzione di aggregazione nella colonna. Ad esempio, sostituire:

    ```
    RFX_Long(pFX, "Sales", m_lSales);
    ```

     con:

    ```
    RFX_Double(pFX, "Sum(Sales)", m_dblSumSales)
    ```

1. Aprire il recordset. Il risultato dell'operazione di aggregazione viene lasciato in `m_dblSumSales`.

> [!NOTE]
> La procedura guidata assegna i nomi dei membri dati senza i prefissi della notazione ungherese. Ad esempio, la procedura guidata produrrebbe `m_Sales` per una colonna Sales, anziché il nome `m_lSales` usato in precedenza a scopo illustrativo.

Se si usa una classe [CRecordView](../../mfc/reference/crecordview-class.md) per visualizzare i dati, è necessario modificare la chiamata di funzione DDX per visualizzare il valore del nuovo membro dati. In questo caso, deve essere modificata da:

```
DDX_FieldText(pDX, IDC_SUMSALES, m_pSet->m_lSales, m_pSet);
```

Con:

```
DDX_FieldText(pDX, IDC_SUMSALES, m_pSet->m_dblSumSales, m_pSet);
```

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: selezione di record in recordset (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)
