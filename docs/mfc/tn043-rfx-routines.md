---
description: 'Altre informazioni su: TN043: routine RFX'
title: 'TN043: routine RFX'
ms.date: 06/28/2018
f1_keywords:
- RFX
helpviewer_keywords:
- RFX (record field exchange), architecture
- TN043
- RFX (record field exchange)
ms.assetid: f552d0c1-2c83-4389-b472-42c9940aa713
ms.openlocfilehash: 6e5ac8271739e5cab80b79cb915b07e7d25622cf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215222"
---
# <a name="tn043-rfx-routines"></a>TN043: routine RFX

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive l'architettura di trasferimento di campi di record (RFX). Viene inoltre descritto come scrivere una procedura **RFX_** .

## <a name="overview-of-record-field-exchange"></a>Panoramica dello scambio di campi di record

Tutte le funzioni di campo del recordset vengono eseguite con il codice C++. Non sono disponibili risorse speciali o macro magiche. Il fulcro del meccanismo è una funzione virtuale che deve essere sottoposta a override in ogni classe recordset derivata. Si trova sempre nel formato seguente:

```cpp
void CMySet::DoFieldExchange(CFieldExchange* pFX)
{
    //{{AFX_FIELD_MAP(CMySet)
        <recordset exchange field type call>
        <recordset exchange function call>
    //}}AFX_FIELD_MAP
}
```

I commenti AFX in formato speciale consentono a ClassWizard di individuare e modificare il codice all'interno di questa funzione. Il codice non compatibile con ClassWizard deve essere inserito all'esterno dei commenti in formato speciale.

Nell'esempio precedente il \<recordset_exchange_field_type_call> formato è:

```cpp
pFX->SetFieldType(CFieldExchange::outputColumn);
```

e \<recordset_exchange_function_call> è nel formato:

```cpp
RFX_Custom(pFX, "Col2", m_Col2);
```

La maggior parte delle funzioni **RFX_** dispone di tre argomenti, come illustrato in precedenza, ma alcuni (ad esempio `RFX_Text` e `RFX_Binary` ) dispongono di argomenti facoltativi aggiuntivi.

In ogni funzione è possibile includere più di un **RFX_** `DoDataExchange` .

Vedere ' AFXDB. h ' per un elenco di tutte le routine di scambio dei campi del recordset fornite con MFC.

Le chiamate ai campi del recordset sono un modo per registrare le posizioni di memoria (in genere membri dati) per archiviare i dati dei campi per una `CMySet` classe.

## <a name="notes"></a>Note

Le funzioni di campo del recordset sono progettate per funzionare solo con le `CRecordset` classi. Non sono generalmente utilizzabili da altre classi MFC.

I valori iniziali dei dati vengono impostati nel costruttore C++ standard, in genere in un blocco con i `//{{AFX_FIELD_INIT(CMylSet)` `//}}AFX_FIELD_INIT` commenti e.

Ogni funzione **RFX_** deve supportare varie operazioni, a partire dalla restituzione dello stato dirty del campo per archiviare il campo in preparazione per la modifica del campo.

Ogni funzione che chiama, `DoFieldExchange` ad esempio `SetFieldNull` , `IsFieldDirty` esegue una propria inizializzazione sulla chiamata a `DoFieldExchange` .

## <a name="how-does-it-work"></a>Funzionamento

Non è necessario comprendere quanto segue per poter usare lo scambio di campi di record. Tuttavia, per comprendere il funzionamento di questo scenario, è possibile scrivere una procedura di scambio personalizzata.

La `DoFieldExchange` funzione membro è molto simile alla `Serialize` funzione membro: è responsabile di ottenere o impostare dati da e verso un form esterno (in questo caso colonne dal risultato di una query ODBC) da/verso i dati dei membri della classe. Il parametro *PFX* è il contesto per lo scambio di dati ed è simile al parametro *CArchive* a `CObject::Serialize` . Il file *PFX* ( `CFieldExchange` oggetto) ha un indicatore di operazione, che è simile a, ma una generalizzazione del flag di direzione *CArchive* . Una funzione RFX può dover supportare le operazioni seguenti:

- `BindParam` : Indica la posizione in cui ODBC deve recuperare i dati dei parametri

- `BindFieldToColumn` : Indica la posizione in cui ODBC deve recuperare/depositare i dati di outputColumn

- `Fixup` -Imposta `CString/CByteArray` lunghezze, imposta bit stato null

- `MarkForAddNew` -Contrassegnare Dirty se il valore è stato modificato dopo la chiamata a AddNew

- `MarkForUpdate` -Contrassegnare Dirty se il valore è stato modificato dopo la chiamata di modifica

- `Name` : Aggiunge i nomi di campo per i campi contrassegnati come Dirty

- `NameValue` -Accoda " \<column name> =" per i campi contrassegnati come Dirty

- `Value` -Accodare "" seguito dal separatore, ad esempio ',' o ''

- `SetFieldDirty` : Impostare il campo stato dirty bit (ad esempio, changed)

- `SetFieldNull` : Imposta il bit di stato che indica il valore null per il campo

- `IsFieldDirty` -Valore restituito del bit di stato dirty

- `IsFieldNull` : Valore restituito del bit di stato null

- `IsFieldNullable` : Restituisce TRUE se il campo può conservare valori NULL

- `StoreField` -Valore campo Archivio

- `LoadField` -Ricarica valore campo archiviato

- `GetFieldInfoValue` : Restituisce le informazioni generali su un campo

- `GetFieldInfoOrdinal` : Restituisce le informazioni generali su un campo

## <a name="user-extensions"></a>Estensioni utente

Esistono diversi modi per estendere il meccanismo RFX predefinito. È possibile

- Aggiungere nuovi tipi di dati. Ad esempio:

    ```cpp
    CBookmark
    ```

- Aggiungere nuove procedure di Exchange (RFX_).

    ```cpp
    void AFXAPI RFX_Bigint(CFieldExchange* pFX,
        const char *szName,
        BIGINT& value);
    ```

- Fare in modo che la `DoFieldExchange` funzione membro includa in modo condizionale chiamate RFX aggiuntive o altre istruzioni C++ valide.

    ```cpp
    while (posExtraFields != NULL)
    {
        RFX_Text(pFX,
        m_listName.GetNext(posExtraFields),
        m_listValue.GetNext(posExtraValues));
    }
    ```

> [!NOTE]
> Tale codice non può essere modificato da ClassWizard e deve essere utilizzato solo all'esterno dei commenti in formato speciale.

## <a name="writing-a-custom-rfx"></a>Scrittura di un RFX personalizzato

Per scrivere una funzione RFX personalizzata, si consiglia di copiare una funzione RFX esistente e di modificarla nel modo desiderato. La selezione del RFX corretto da copiare può semplificare notevolmente il processo. Alcune funzioni RFX hanno alcune proprietà univoche che è opportuno tenere in considerazione quando si decide quale copiare.

`RFX_Long` e `RFX_Int` : queste sono le funzioni RFX più semplici. Il valore dei dati non necessita di alcuna interpretazione speciale e le dimensioni dei dati sono fisse.

`RFX_Single` e `RFX_Double` : come RFX_Long e RFX_Int precedenti, queste funzioni sono semplici e possono usare ampiamente l'implementazione predefinita. Tuttavia, vengono archiviati in dbflt. cpp invece che in DBRFX. cpp, per consentire il caricamento della libreria a virgola mobile di runtime solo quando sono riferimenti espliciti.

`RFX_Text` e `RFX_Binary` : queste due funzioni preallocano un buffer statico per memorizzare le informazioni stringa/binarie e devono registrare questi buffer con ODBC SQLBindCol invece di registrare &valore. Per questo motivo, queste due funzioni includono un numero elevato di codice del case speciale.

`RFX_Date`: ODBC restituisce le informazioni sulla data e l'ora nella struttura dei dati TIMESTAMP_STRUCT. Questa funzione alloca dinamicamente un TIMESTAMP_STRUCT come "proxy" per l'invio e la ricezione di dati relativi alla data e ora. Diverse operazioni devono trasferire le informazioni sulla data e l'ora tra l' `CTime` oggetto C++ e il proxy TIMESTAMP_STRUCT. Questa funzione è notevolmente complicata, ma è un valido esempio di come usare un proxy per il trasferimento dei dati.

`RFX_LongBinary`: Questa è l'unica funzione RFX della libreria di classi che non usa l'associazione di colonna per ricevere e inviare dati. Questa funzione ignora l'operazione BindFieldToColumn e, al contrario, durante l'operazione di correzione alloca lo spazio di archiviazione in modo che contenga i dati SQL_LONGVARCHAR o SQL_LONGVARBINARY in ingresso, quindi esegue una chiamata SQLGetData per recuperare il valore nell'archiviazione allocata. Quando si prepara a inviare nuovamente i valori di dati all'origine dati, ad esempio le operazioni NameValue e value, questa funzione utilizza la funzionalità DATA_AT_EXEC di ODBC. Per ulteriori informazioni sull'utilizzo di SQL_LONGVARBINARY e SQL_LONGVARCHARs, vedere la [Nota tecnica 45](../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md) .

Quando si scrive una funzione **RFX_** personalizzata, sarà spesso possibile usare `CFieldExchange::Default` per implementare una determinata operazione. Esaminare l'implementazione di default per l'operazione in questione. Se esegue l'operazione da scrivere nella funzione di **RFX_** , è possibile delegare a `CFieldExchange::Default` . È possibile vedere esempi di chiamata `CFieldExchange::Default` a in DBRFX. cpp

È importante chiamare `IsFieldType` all'inizio della funzione RFX e restituire immediatamente se restituisce false. Questo meccanismo impedisce l'esecuzione delle operazioni sui parametri in *outputColumns* e viceversa (ad esempio, chiamando `BindParam` in un *outputColumn*). Inoltre, `IsFieldType` tiene automaticamente traccia del conteggio di *outputColumns* (*m_nFields*) e params (*m_nParams*).

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
