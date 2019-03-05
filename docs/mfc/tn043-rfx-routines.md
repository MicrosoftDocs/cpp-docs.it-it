---
title: 'TN043: Routine RFX'
ms.date: 06/28/2018
f1_keywords:
- RFX
helpviewer_keywords:
- RFX (record field exchange), architecture
- TN043
- RFX (record field exchange)
ms.assetid: f552d0c1-2c83-4389-b472-42c9940aa713
ms.openlocfilehash: 18820c7d17ddea355490ee32679d5d690ec3533e
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57294486"
---
# <a name="tn043-rfx-routines"></a>TN043: Routine RFX

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota descrive l'architettura di campi di record (RFX) di exchange. Viene inoltre descritto come si scrive un' **RFX_** procedure.

## <a name="overview-of-record-field-exchange"></a>Panoramica dei campi di record

Tutte le funzioni di campo recordset vengono eseguite con il codice C++. Non esistono risorse speciali o macro magiche. Il cuore del meccanismo è una funzione virtuale che deve essere sottoposto a override in ogni classe derivata recordset. Si è sempre presente in questo formato:

```cpp
void CMySet::DoFieldExchange(CFieldExchange* pFX)
{
    //{{AFX_FIELD_MAP(CMySet)
        <recordset exchange field type call>
        <recordset exchange function call>
    //}}AFX_FIELD_MAP
}
```

I commenti AFX formato speciale consentono ClassWizard individuare e modificare il codice all'interno di questa funzione. Il codice che non è compatibile con la creazione guidata classe debba essere posizionato all'esterno i commenti di formato speciale.

Nell'esempio precedente, \<recordset_exchange_field_type_call > è nel formato:

```cpp
pFX->SetFieldType(CFieldExchange::outputColumn);
```

e \<recordset_exchange_function_call > è nel formato:

```cpp
RFX_Custom(pFX, "Col2", m_Col2);
```

La maggior parte degli **RFX_** funzioni hanno tre argomenti, come illustrato in precedenza, ma alcuni (ad esempio `RFX_Text` e `RFX_Binary`) dispongono di argomenti aggiuntivi facoltativi.

Più di un **RFX_** potrebbero essere inclusi in ogni `DoDataExchange` (funzione).

Vedere 'AFXDB. h' per un elenco di tutte le routine di exchange campo recordset disponibili in MFC.

Le chiamate di campo recordset sono un modo di registrazione di posizioni di memoria (in genere membri di dati) per archiviare i dati di campo per un `CMySet` classe.

## <a name="notes"></a>Note

Funzioni di campi di recordset sono progettate per funzionare solo con il `CRecordset` classi. Non sono in genere utilizzabile da un'altra classe MFC.

I valori iniziali dei dati sono impostati nel costruttore C++ standard, in genere in un blocco con `//{{AFX_FIELD_INIT(CMylSet)` e `//}}AFX_FIELD_INIT` commenti.

Ciascuna **RFX_** funzione deve supportare varie operazioni, che vanno da restituendo lo stato di modificato del campo per campo in preparazione per la modifica del campo di archiviazione.

Ogni funzione che chiama `DoFieldExchange` (ad esempio `SetFieldNull`, `IsFieldDirty`), esegue la propria inizializzazione nella chiamata alla `DoFieldExchange`.

## <a name="how-does-it-work"></a>Come funziona

Non devi comprendere quanto segue per poter usare i campi di record. Tuttavia, comprendere a fondo il funzionamento dietro le quinte verrà è scrivere proprie routine di exchange.

Il `DoFieldExchange` funzione membro è analogo a quello di `Serialize` funzione membro, ovvero è responsabile di ottenere o impostare i dati da e verso un modulo esterno (in questo caso colonne dal risultato di una query ODBC) da/verso i dati dei membri della classe. Il *pFX* parametro è il contesto per eseguire lo scambio di dati ed è simile al *CArchive* parametro `CObject::Serialize`. Il *pFX* (un `CFieldExchange` oggetto) dispone di un indicatore di operazione, che è simile, ma una generalizzazione delle *CArchive* flag di direzione. Una funzione RFX potrebbe avere supportare le operazioni seguenti:

- `BindParam` : Indica dove ODBC deve recuperare i dati dei parametri

- `BindFieldToColumn` : Indica dove ODBC deve recuperare/deposito outputColumn dati

- `Fixup` -Imposta `CString/CByteArray` lunghezze, impostare lo stato NULL di tipo bit

- `MarkForAddNew` Ovvero contrassegnare dirty valore è stato modificato dopo la chiamata dei metodi AddNew

- `MarkForUpdate` Ovvero contrassegnare dirty valore è stato modificato dopo chiamare modifica

- `Name` : Aggiungere i nomi dei campi per i campi contrassegnati come dirty

- `NameValue` : Aggiungere "\<nome colonna > =" per i campi contrassegnati come dirty

- `Value` : Aggiungere "" seguito dal separatore, ad esempio ',' o ' '

- `SetFieldDirty` -Consente di impostare lo stato bit (vale a dire modificati) dei campi modificati

- `SetFieldNull` -Imposta i bit di stato che indica un valore null per campo

- `IsFieldDirty` : Valore restituito di bit dirty dello stato

- `IsFieldNull` : Valore del bit di stato null restituito

- `IsFieldNullable` : Restituisce TRUE se il campo può contenere valori NULL

- `StoreField` Ovvero valore del campo archivio

- `LoadField` : Valore campo archiviati ricaricare

- `GetFieldInfoValue` : Restituisce le informazioni generali su un campo

- `GetFieldInfoOrdinal` : Restituisce le informazioni generali su un campo

## <a name="user-extensions"></a>Estensioni per utente

Esistono diversi modi per estendere il meccanismo RFX predefinito. È possibile

- Aggiungere nuovi tipi di dati. Ad esempio:

    ```cpp
    CBookmark
    ```

- Aggiungere le nuove procedure exchange (RFX_).

    ```cpp
    void AFXAPI RFX_Bigint(CFieldExchange* pFX,
        const char *szName,
        BIGINT& value);
    ```

- Dispone il `DoFieldExchange` funzione membro includono in modo condizionale le chiamate aggiuntive RFX o tutte le altre istruzioni di C++ validi.

    ```cpp
    while (posExtraFields != NULL)
    {
        RFX_Text(pFX,
        m_listName.GetNext(posExtraFields),
        m_listValue.GetNext(posExtraValues));
    }
    ```

> [!NOTE]
> Tale codice non può essere modificato da ClassWizard e deve essere utilizzato solo all'esterno di commenti formato speciale.

## <a name="writing-a-custom-rfx"></a>La scrittura di un RFX personalizzato

Per scrivere una funzione personalizzata RFX, si consiglia di copiare una funzione RFX esistente e modificarlo in base alle esigenze specifiche. Selezionando il RFX a destra per copiare può semplificare il processo. Alcune funzioni RFX hanno alcune proprietà univoco che è necessario tenere conto quando si decide quale copiare.

`RFX_Long` e `RFX_Int`: Si tratta delle funzioni RFX più semplice. Il valore dei dati non è necessario alcun interpretazione speciale e la dimensione dei dati è fissa.

`RFX_Single` e `RFX_Double`: Come RFX_Long e RFX_Int riportato sopra, queste funzioni sono semplici e possono rendere ampiamente Usa l'implementazione predefinita. Sono archiviati in dbflt.cpp anziché dbrfx.cpp, tuttavia, per abilitare il caricamento del runtime di libreria in virgola mobile solo quando sono esplicitamente riferimento.

`RFX_Text` e `RFX_Binary`: Queste due funzioni preallocare un buffer statico per contenere le informazioni di stringa/binario e devono registrare tali buffer con ODBC SQLBindCol anziché la registrazione di & valore. Per questo motivo, queste due funzioni hanno una grande quantità di codice speciale.

`RFX_Date`: ODBC restituisce informazioni su data e ora nella propria struttura di data TIMESTAMP_STRUCT. Questa funzione alloca dinamicamente un TIMESTAMP_STRUCT come un "proxy" per inviare e ricevere i dati di ora di inizio. Varie operazioni devono trasferire le informazioni di data e ora tra C++ `CTime` oggetto e il proxy TIMESTAMP_STRUCT. Ciò complica notevolmente questa funzione, ma è un buon esempio di come usare un proxy per il trasferimento dei dati.

`RFX_LongBinary`: Si tratta della libreria di classi solo alle funzioni RFX che non utilizzano l'associazione di colonna per ricevere e inviare i dati. Questa funzione ignora l'operazione BindFieldToColumn invece durante l'operazione di correzione, alloca memoria per contenere i dati in ingresso SQL_LONGVARCHAR o SQL_LONGVARBINARY, quindi esegue una chiamata di SQLGetData per recuperare il valore nella risorsa di archiviazione allocato. Quando si prepara a inviare nuovamente i valori dei dati all'origine dati (ad esempio, operazioni di nome e valore), questa funzione utilizza le funzionalità DATA_AT_EXEC di ODBC. Visualizzare [Nota tecnica 45](../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md) per altre informazioni sull'uso di SQL_LONGVARBINARY e SQL_LONGVARCHARs.

Quando si scrive il proprio **RFX_** funzione, spesso è possibile usare `CFieldExchange::Default` per implementare un'operazione specificata. Esaminare l'implementazione del valore predefinito per l'operazione in questione. Se esegue l'operazione sarebbe necessario scrivere **RFX_** è possibile delegare alla funzione il `CFieldExchange::Default`. È possibile visualizzare esempi della chiamata al metodo `CFieldExchange::Default` in dbrfx.cpp

È importante chiamare `IsFieldType` all'inizio della funzione RFX e restituire immediatamente se restituisce FALSE. Questo meccanismo mantiene le operazioni di parametro da in esecuzione nella *outputColumns*e viceversa (simile alla chiamata `BindParam` su un *outputColumn*). È inoltre `IsFieldType` automaticamente tiene traccia del numero di *outputColumns* (*m_nFields*) e params (*m_nParams*).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
