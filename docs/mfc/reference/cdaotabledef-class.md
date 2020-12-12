---
description: 'Altre informazioni su: classe CDaoTableDef'
title: Classe CDaoTableDef
ms.date: 11/04/2016
f1_keywords:
- CDaoTableDef
- AFXDAO/CDaoTableDef
- AFXDAO/CDaoTableDef::CDaoTableDef
- AFXDAO/CDaoTableDef::Append
- AFXDAO/CDaoTableDef::CanUpdate
- AFXDAO/CDaoTableDef::Close
- AFXDAO/CDaoTableDef::Create
- AFXDAO/CDaoTableDef::CreateField
- AFXDAO/CDaoTableDef::CreateIndex
- AFXDAO/CDaoTableDef::DeleteField
- AFXDAO/CDaoTableDef::DeleteIndex
- AFXDAO/CDaoTableDef::GetAttributes
- AFXDAO/CDaoTableDef::GetConnect
- AFXDAO/CDaoTableDef::GetDateCreated
- AFXDAO/CDaoTableDef::GetDateLastUpdated
- AFXDAO/CDaoTableDef::GetFieldCount
- AFXDAO/CDaoTableDef::GetFieldInfo
- AFXDAO/CDaoTableDef::GetIndexCount
- AFXDAO/CDaoTableDef::GetIndexInfo
- AFXDAO/CDaoTableDef::GetName
- AFXDAO/CDaoTableDef::GetRecordCount
- AFXDAO/CDaoTableDef::GetSourceTableName
- AFXDAO/CDaoTableDef::GetValidationRule
- AFXDAO/CDaoTableDef::GetValidationText
- AFXDAO/CDaoTableDef::IsOpen
- AFXDAO/CDaoTableDef::Open
- AFXDAO/CDaoTableDef::RefreshLink
- AFXDAO/CDaoTableDef::SetAttributes
- AFXDAO/CDaoTableDef::SetConnect
- AFXDAO/CDaoTableDef::SetName
- AFXDAO/CDaoTableDef::SetSourceTableName
- AFXDAO/CDaoTableDef::SetValidationRule
- AFXDAO/CDaoTableDef::SetValidationText
- AFXDAO/CDaoTableDef::m_pDAOTableDef
- AFXDAO/CDaoTableDef::m_pDatabase
helpviewer_keywords:
- CDaoTableDef [MFC], CDaoTableDef
- CDaoTableDef [MFC], Append
- CDaoTableDef [MFC], CanUpdate
- CDaoTableDef [MFC], Close
- CDaoTableDef [MFC], Create
- CDaoTableDef [MFC], CreateField
- CDaoTableDef [MFC], CreateIndex
- CDaoTableDef [MFC], DeleteField
- CDaoTableDef [MFC], DeleteIndex
- CDaoTableDef [MFC], GetAttributes
- CDaoTableDef [MFC], GetConnect
- CDaoTableDef [MFC], GetDateCreated
- CDaoTableDef [MFC], GetDateLastUpdated
- CDaoTableDef [MFC], GetFieldCount
- CDaoTableDef [MFC], GetFieldInfo
- CDaoTableDef [MFC], GetIndexCount
- CDaoTableDef [MFC], GetIndexInfo
- CDaoTableDef [MFC], GetName
- CDaoTableDef [MFC], GetRecordCount
- CDaoTableDef [MFC], GetSourceTableName
- CDaoTableDef [MFC], GetValidationRule
- CDaoTableDef [MFC], GetValidationText
- CDaoTableDef [MFC], IsOpen
- CDaoTableDef [MFC], Open
- CDaoTableDef [MFC], RefreshLink
- CDaoTableDef [MFC], SetAttributes
- CDaoTableDef [MFC], SetConnect
- CDaoTableDef [MFC], SetName
- CDaoTableDef [MFC], SetSourceTableName
- CDaoTableDef [MFC], SetValidationRule
- CDaoTableDef [MFC], SetValidationText
- CDaoTableDef [MFC], m_pDAOTableDef
- CDaoTableDef [MFC], m_pDatabase
ms.assetid: 7c5d2254-8475-43c4-8a6c-2d32ead194c9
ms.openlocfilehash: ead41d1dae2d248324809690e778e8f623a73caf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248021"
---
# <a name="cdaotabledef-class"></a>Classe CDaoTableDef

Rappresenta la definizione archiviata di una tabella di base o di una tabella collegata.

## <a name="syntax"></a>Sintassi

```
class CDaoTableDef : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDaoTableDef:: CDaoTableDef](#cdaotabledef)|Costruisce un oggetto `CDaoTableDef`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDaoTableDef:: Append](#append)|Aggiunge una nuova tabella al database.|
|[CDaoTableDef:: CanUpdate](#canupdate)|Restituisce un valore diverso da zero se la tabella può essere aggiornata (è possibile modificare la definizione dei campi o delle proprietà della tabella).|
|[CDaoTableDef:: Close](#close)|Chiude un oggetto TableDef aperto.|
|[CDaoTableDef:: create](#create)|Crea una tabella che può essere aggiunta al database usando [Append](#append).|
|[CDaoTableDef:: CreateField](#createfield)|Chiamato per creare un campo per una tabella.|
|[CDaoTableDef:: CreateIndex](#createindex)|Chiamato per creare un indice per una tabella.|
|[CDaoTableDef::D eleteField](#deletefield)|Chiamato per eliminare un campo da una tabella.|
|[CDaoTableDef::D eleteIndex](#deleteindex)|Chiamato per eliminare un indice da una tabella.|
|[CDaoTableDef:: GetAttributes](#getattributes)|Restituisce un valore che indica una o più caratteristiche di un `CDaoTableDef` oggetto.|
|[CDaoTableDef:: GetConnect](#getconnect)|Restituisce un valore che fornisce informazioni sull'origine di una tabella.|
|[CDaoTableDef:: GetDateCreated](#getdatecreated)|Restituisce la data e l'ora di creazione della tabella di base sottostante a un `CDaoTableDef` oggetto.|
|[CDaoTableDef:: GetDateLastUpdated](#getdatelastupdated)|Restituisce la data e l'ora dell'Ultima modifica apportata alla progettazione della tabella di base.|
|[CDaoTableDef:: GetFieldCount](#getfieldcount)|Restituisce un valore che rappresenta il numero di campi nella tabella.|
|[CDaoTableDef:: GetFieldInfo](#getfieldinfo)|Restituisce tipi specifici di informazioni sui campi nella tabella.|
|[CDaoTableDef:: GetIndexCount](#getindexcount)|Restituisce il numero di indici per la tabella.|
|[CDaoTableDef:: GetIndexInfo](#getindexinfo)|Restituisce tipi specifici di informazioni sugli indici per la tabella.|
|[CDaoTableDef:: GetName](#getname)|Restituisce il nome definito dall'utente della tabella.|
|[CDaoTableDef:: GetRecordCount](#getrecordcount)|Restituisce il numero di record nella tabella.|
|[CDaoTableDef:: GetSourceTableName](#getsourcetablename)|Restituisce un valore che specifica il nome della tabella collegata nel database di origine.|
|[CDaoTableDef:: GetValidationRule](#getvalidationrule)|Restituisce un valore che convalida i dati di un campo quando vengono modificati o aggiunti a una tabella.|
|[CDaoTableDef:: GetValidationText](#getvalidationtext)|Restituisce un valore che specifica il testo del messaggio visualizzato dall'applicazione se il valore di un oggetto campo non soddisfa la regola di convalida specificata.|
|[CDaoTableDef:: Open](#isopen)|Restituisce un valore diverso da zero se la tabella è aperta.|
|[CDaoTableDef:: Open](#open)|Apre un oggetto TableDef esistente archiviato nella raccolta TableDef's del database.|
|[CDaoTableDef:: RefreshLink](#refreshlink)|Aggiorna le informazioni di connessione per una tabella collegata.|
|[CDaoTableDef:: SetAttributes](#setattributes)|Imposta un valore che indica una o più caratteristiche di un `CDaoTableDef` oggetto.|
|[CDaoTableDef:: seconnect](#setconnect)|Imposta un valore che fornisce informazioni sull'origine di una tabella.|
|[CDaoTableDef:: nome](#setname)|Imposta il nome della tabella.|
|[CDaoTableDef:: SetSourceTableName](#setsourcetablename)|Imposta un valore che specifica il nome di una tabella collegata nel database di origine.|
|[CDaoTableDef:: SetValidationRule](#setvalidationrule)|Imposta un valore che convalida i dati di un campo quando vengono modificati o aggiunti a una tabella.|
|[CDaoTableDef:: SetValidationText](#setvalidationtext)|Imposta un valore che specifica il testo del messaggio visualizzato dall'applicazione se il valore di un oggetto campo non soddisfa la regola di convalida specificata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CDaoTableDef:: m_pDAOTableDef](#m_pdaotabledef)|Puntatore all'interfaccia DAO sottostante all'oggetto TableDef.|
|[CDaoTableDef:: m_pDatabase](#m_pdatabase)|Database di origine per la tabella.|

## <a name="remarks"></a>Commenti

Ogni oggetto di database DAO gestisce una raccolta, denominata TableDef, che contiene tutti gli oggetti TableDef DAO salvati.

È possibile modificare una definizione di tabella utilizzando un `CDaoTableDef` oggetto. Ad esempio, è possibile:

- Esaminare la struttura dei campi e degli indici di qualsiasi tabella locale, collegata o esterna di un database.

- Chiamare le `SetConnect` `SetSourceTableName` funzioni membro e per le tabelle collegate e utilizzare la `RefreshLink` funzione membro per aggiornare le connessioni alle tabelle associate.

- Chiamare la `CanUpdate` funzione membro per determinare se è possibile modificare le definizioni dei campi nella tabella.

- Ottiene o imposta le condizioni di convalida usando `GetValidationRule` e e `SetValidationRule` le `GetValidationText` `SetValidationText` funzioni membro e.

- Utilizzare la `Open` funzione membro per creare un oggetto di tipo tabella, dynaset o snapshot `CDaoRecordset` .

    > [!NOTE]
    >  Le classi di database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. le classi DAO offrono in genere funzionalità superiori perché sono specifiche del motore di database di Microsoft Jet.

### <a name="to-use-tabledef-objects-either-to-work-with-an-existing-table-or-to-create-a-new-table"></a>Per usare oggetti TableDef per lavorare con una tabella esistente o per creare una nuova tabella

1. In tutti i casi, innanzitutto costruire un `CDaoTableDef` oggetto, fornendo un puntatore a un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) a cui appartiene la tabella.

1. Eseguire quindi le operazioni seguenti, a seconda di ciò che si desidera:

   - Per usare una tabella salvata esistente, chiamare la funzione membro [Open](#open) dell'oggetto TableDef, specificando il nome della tabella salvata.

   - Per creare una nuova tabella, chiamare la funzione membro [create](#create) dell'oggetto TableDef, specificando il nome della tabella. Chiamare [CreateField](#createfield) e [CreateIndex](#createindex) per aggiungere campi e indici alla tabella.

   - Chiamare [Append](#append) per salvare la tabella aggiungendola alla raccolta di oggetti TableDef del database. `Create` inserisce il TableDef in uno stato aperto, quindi, dopo aver chiamato, non `Create` chiamare `Open` .

        > [!TIP]
        >  Il modo più semplice per creare tabelle salvate consiste nel crearle e archiviarle nel database tramite Microsoft Access. Quindi, è possibile aprirli e usarli nel codice MFC.

Per usare l'oggetto TableDef aperto o creato, creare e aprire un `CDaoRecordset` oggetto, specificando il nome del TableDef con un `dbOpenTable` valore nel parametro *nOpenType* .

Per usare un oggetto TableDef per creare un `CDaoRecordset` oggetto, in genere si crea o si apre un oggetto TableDef come descritto in precedenza, quindi si costruisce un oggetto recordset, passando un puntatore all'oggetto TableDef quando si chiama [CDaoRecordset:: Open](../../mfc/reference/cdaorecordset-class.md#open). Il TableDef passato deve essere in uno stato aperto. Per ulteriori informazioni, vedere la classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

Al termine dell'uso di un oggetto TableDef, chiamare la funzione membro [Close](../../mfc/reference/cdaorecordset-class.md#close) ; eliminare quindi l'oggetto TableDef.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoTableDef`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="cdaotabledefappend"></a><a name="append"></a> CDaoTableDef:: Append

Chiamare questa funzione membro dopo aver chiamato [create](#create) per creare un nuovo oggetto TableDef per salvare il TableDef nel database.

```
virtual void Append();
```

### <a name="remarks"></a>Commenti

La funzione aggiunge l'oggetto alla raccolta di oggetti TableDef del database. È possibile utilizzare il TableDef come oggetto temporaneo durante la definizione senza accodarlo, ma se si desidera salvarlo e utilizzarlo, è necessario chiamare `Append` .

> [!NOTE]
> Se si tenta di aggiungere un oggetto TableDef senza nome (contenente una stringa null o vuota), MFC genera un'eccezione.

Per informazioni correlate, vedere l'argomento "metodo Append" nella Guida di DAO.

## <a name="cdaotabledefcanupdate"></a><a name="canupdate"></a> CDaoTableDef:: CanUpdate

Chiamare questa funzione membro per determinare se la definizione della tabella sottostante un `CDaoTableDef` oggetto può essere modificata.

```
BOOL CanUpdate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la struttura della tabella (schema) può essere modificata (aggiungere o eliminare campi e indici); in caso contrario, 0.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, una tabella appena creata sottostante a un `CDaoTableDef` oggetto può essere aggiornata e una tabella collegata sottostante a un `CDaoTableDef` oggetto non può essere aggiornata. Un `CDaoTableDef` oggetto può essere aggiornabile, anche se il recordset risultante non è aggiornabile.

Per informazioni correlate, vedere l'argomento "proprietà aggiornabile" nella Guida di DAO.

## <a name="cdaotabledefcdaotabledef"></a><a name="cdaotabledef"></a> CDaoTableDef:: CDaoTableDef

Costruisce un oggetto `CDaoTableDef`.

```
CDaoTableDef(CDaoDatabase* pDatabase);
```

### <a name="parameters"></a>Parametri

*pDatabase*<br/>
Puntatore a un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) .

### <a name="remarks"></a>Commenti

Dopo la costruzione dell'oggetto, è necessario chiamare la funzione membro [create](#create) o [Open](#open) . Al termine dell'oggetto, è necessario chiamare la relativa funzione membro [Close](#close) ed eliminare l' `CDaoTableDef` oggetto.

## <a name="cdaotabledefclose"></a><a name="close"></a> CDaoTableDef:: Close

Chiamare questa funzione membro per chiudere e rilasciare l'oggetto TableDef.

```
virtual void Close();
```

### <a name="remarks"></a>Commenti

In genere, dopo aver chiamato `Close` , l'oggetto TableDef viene eliminato se è stato allocato con **`new`** .

È possibile chiamare di nuovo [Open](#open) dopo la chiamata a `Close` . Ciò consente di riutilizzare l'oggetto TableDef.

Per informazioni correlate, vedere l'argomento relativo al metodo Close nella Guida di DAO.

## <a name="cdaotabledefcreate"></a><a name="create"></a> CDaoTableDef:: create

Chiamare questa funzione membro per creare una nuova tabella salvata.

```
virtual void Create(
    LPCTSTR lpszName,
    long lAttributes = 0,
    LPCTSTR lpszSrcTable = NULL,
    LPCTSTR lpszConnect = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa che contiene il nome della tabella.

*lAttributes*<br/>
Valore corrispondente alle caratteristiche della tabella rappresentata dall'oggetto TableDef. È possibile utilizzare l'operatore OR bit per bit per combinare una delle costanti seguenti:

|Costante|Descrizione|
|--------------|-----------------|
|`dbAttachExclusive`|Per i database che usano il motore di database di Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'uso esclusivo.|
|`dbAttachSavePWD`|Per i database che utilizzano il motore di database di Microsoft Jet, indica che l'ID utente e la password per la tabella collegata vengono salvati con le informazioni di connessione.|
|`dbSystemObject`|Indica che la tabella è una tabella di sistema fornita dal motore di database di Microsoft Jet.|
|`dbHiddenObject`|Indica che la tabella è una tabella nascosta fornita dal motore di database di Microsoft Jet.|

*lpszSrcTable*<br/>
Puntatore a una stringa che contiene il nome della tabella di origine. Per impostazione predefinita, questo valore viene inizializzato come NULL.

*lpszConnect*<br/>
Puntatore a una stringa che contiene la stringa di connessione predefinita. Per impostazione predefinita, questo valore viene inizializzato come NULL.

### <a name="remarks"></a>Commenti

Dopo aver denominato il TableDef, è possibile chiamare il metodo [Append](#append) per salvare il TableDef nell'insieme di oggetti TableDef del database. Dopo aver chiamato `Append` , il TableDef si trova in uno stato aperto ed è possibile usarlo per creare un oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) .

Per informazioni correlate, vedere l'argomento "metodo CreateTableDef" nella Guida di DAO.

## <a name="cdaotabledefcreatefield"></a><a name="createfield"></a> CDaoTableDef:: CreateField

Chiamare questa funzione membro per aggiungere un campo alla tabella.

```cpp
void CreateField(
    LPCTSTR lpszName,
    short nType,
    long lSize,
    long lAttributes = 0);

void CreateField(CDaoFieldInfo& fieldinfo);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a un'espressione stringa che specifica il nome di questo campo.

*nType*<br/>
Valore che indica il tipo di dati del campo. L'impostazione può essere uno dei valori seguenti:

|Tipo|Dimensioni (byte)|Description|
|----------|--------------------|-----------------|
|`dbBoolean`|1 byte|BOOL|
|`dbByte`|BYTE|
|`dbInteger`|2|INT|
|`dbLong`|4|long|
|`dbCurrency`|8|Valuta ( [COleCurrency](../../mfc/reference/colecurrency-class.md))|
|`dbSingle`|4|float|
|`dbDouble`|8|double|
|`dbDate`|8|Data/ora ( [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md))|
|`dbText`|1 - 255|Testo ( [CString](../../atl-mfc-shared/reference/cstringt-class.md))|
|`dbLongBinary`|0|Long Binary (oggetto OLE), [CLongBinary](../../mfc/reference/clongbinary-class.md) o [CByteArray](../../mfc/reference/cbytearray-class.md)|
|`dbMemo`|0|Memo ( [CString](../../atl-mfc-shared/reference/cstringt-class.md))|

*lSize*<br/>
Valore che indica la dimensione massima, in byte, di un campo contenente testo o la dimensione fissa di un campo contenente testo o valori numerici. Il parametro *lSize* viene ignorato per tutti i campi di testo tranne quelli di testo.

*lAttributes*<br/>
Valore che corrisponde alle caratteristiche del campo e che può essere combinato utilizzando un operatore OR bit per bit.

|Costante|Descrizione|
|--------------|-----------------|
|`dbFixedField`|Le dimensioni del campo sono fisse (impostazione predefinita per i campi numerici).|
|`dbVariableField`|Le dimensioni del campo sono variabili (solo campi di testo).|
|`dbAutoIncrField`|Il valore del campo per i nuovi record viene incrementato automaticamente a un intero lungo univoco che non può essere modificato. Supportato solo per le tabelle di database Microsoft Jet.|
|`dbUpdatableField`|Il valore del campo può essere modificato.|
|`dbDescending`|Il campo viene ordinato in ordine decrescente (Z-A o 100-0) (si applica solo a un oggetto campo in una raccolta Fields di un oggetto index). Se si omette questa costante, il campo viene ordinato in ordine crescente (A-Z o 0-100) (impostazione predefinita).|

*FieldInfo*<br/>
Riferimento a una struttura [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) .

### <a name="remarks"></a>Commenti

`DAOField`Viene creato un oggetto (OLE) che viene aggiunto alla raccolta Fields dell' `DAOTableDef` oggetto (OLE). Oltre all'utilizzo per l'analisi delle proprietà degli oggetti, è possibile utilizzare anche `CDaoFieldInfo` per costruire un parametro di input per la creazione di nuovi campi in un oggetto TableDef. La prima versione di `CreateField` è più semplice da utilizzare, ma se si desidera un controllo più preciso, è possibile utilizzare la seconda versione di `CreateField` , che accetta un `CDaoFieldInfo` parametro.

Se si utilizza la versione di `CreateField` che accetta un `CDaoFieldInfo` parametro, è necessario impostare con attenzione ognuno dei seguenti membri della `CDaoFieldInfo` struttura:

- `m_strName`

- `m_nType`

- `m_lSize`

- `m_lAttributes`

- `m_bAllowZeroLength`

I membri rimanenti di `CDaoFieldInfo` devono essere impostati su **0**, false o su una stringa vuota, a seconda del caso del membro, oppure è `CDaoException` possibile che si verifichi un errore.

Per informazioni correlate, vedere l'argomento "metodo CreateField" nella Guida di DAO.

## <a name="cdaotabledefcreateindex"></a><a name="createindex"></a> CDaoTableDef:: CreateIndex

Chiamare questa funzione per aggiungere un indice a una tabella.

```cpp
void CreateIndex(CDaoIndexInfo& indexinfo);
```

### <a name="parameters"></a>Parametri

*indexinfo*<br/>
Riferimento a una struttura [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) .

### <a name="remarks"></a>Commenti

Gli indici specificano l'ordine dei record a cui si accede dalle tabelle di database e se i record duplicati vengono accettati. Gli indici consentono inoltre di accedere in modo efficiente ai dati.

Non è necessario creare indici per le tabelle, ma in tabelle di grandi dimensioni non indicizzate, l'accesso a un record specifico o la creazione di un recordset può richiedere molto tempo. D'altra parte, la creazione di un numero eccessivo di indici rallenta le operazioni di aggiornamento, aggiunta ed eliminazione poiché tutti gli indici vengono aggiornati automaticamente. Considerare questi fattori quando si decidono gli indici da creare.

È necessario impostare i membri seguenti della `CDaoIndexInfo` struttura:

- `m_strName` È necessario specificare un nome.

- `m_pFieldInfos` Deve puntare a una matrice di `CDaoIndexFieldInfo` strutture.

- `m_nFields` È necessario specificare il numero di campi nella matrice di `CDaoFieldInfo` strutture.

Se impostato su FALSE, i membri rimanenti verranno ignorati. Inoltre, il `m_lDistinctCount` membro viene ignorato durante la creazione dell'indice.

## <a name="cdaotabledefdeletefield"></a><a name="deletefield"></a> CDaoTableDef::D eleteField

Chiamare questa funzione membro per rimuovere un campo e renderlo inaccessibile.

```cpp
void DeleteField(LPCTSTR lpszName);
void DeleteField(int nIndex);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a un'espressione stringa che rappresenta il nome di un campo esistente.

*nIndex*<br/>
Indice del campo nella raccolta di campi in base zero della tabella, per la ricerca in base all'indice.

### <a name="remarks"></a>Commenti

È possibile utilizzare questa funzione membro su un nuovo oggetto che non è stato aggiunto al database o quando [CanUpdate](#canupdate) restituisce un valore diverso da zero.

Per informazioni correlate, vedere l'argomento "Delete Method" nella Guida di DAO.

## <a name="cdaotabledefdeleteindex"></a><a name="deleteindex"></a> CDaoTableDef::D eleteIndex

Chiamare questa funzione membro per eliminare un indice in una tabella sottostante.

```cpp
void DeleteIndex(LPCTSTR lpszName);
void DeleteIndex(int nIndex);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a un'espressione stringa che rappresenta il nome di un indice esistente.

*nIndex*<br/>
Indice della matrice dell'oggetto index nell'insieme di TableDef in base zero del database per la ricerca in base all'indice.

### <a name="remarks"></a>Commenti

È possibile utilizzare questa funzione membro su un nuovo oggetto che non è stato aggiunto al database o quando [CanUpdate](#canupdate) restituisce un valore diverso da zero.

Per informazioni correlate, vedere l'argomento "Delete Method" nella Guida di DAO.

## <a name="cdaotabledefgetattributes"></a><a name="getattributes"></a> CDaoTableDef:: GetAttributes

Per un `CDaoTableDef` oggetto, il valore restituito specifica le caratteristiche della tabella rappresentata dall' `CDaoTableDef` oggetto e può essere una somma di queste costanti:

```
long GetAttributes();
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore che indica una o più caratteristiche di un `CDaoTableDef` oggetto.

### <a name="remarks"></a>Commenti

|Costante|Descrizione|
|--------------|-----------------|
|`dbAttachExclusive`|Per i database che usano il motore di database di Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'uso esclusivo.|
|`dbAttachSavePWD`|Per i database che utilizzano il motore di database di Microsoft Jet, indica che l'ID utente e la password per la tabella collegata vengono salvati con le informazioni di connessione.|
|`dbSystemObject`|Indica che la tabella è una tabella di sistema fornita dal motore di database di Microsoft Jet.|
|`dbHiddenObject`|Indica che la tabella è una tabella nascosta fornita dal motore di database di Microsoft Jet.|
|`dbAttachedTable`|Indica che la tabella è una tabella collegata da un database non ODBC, ad esempio un database Paradox.|
|`dbAttachedODBC`|Indica che la tabella è una tabella collegata da un database ODBC, ad esempio Microsoft SQL Server.|

Una tabella di sistema è una tabella creata dal motore di database di Microsoft Jet per contenere varie informazioni interne.

Una tabella nascosta è una tabella creata per l'uso temporaneo da parte del motore di database di Microsoft Jet.

Per informazioni correlate, vedere l'argomento "proprietà Attributes" nella Guida di DAO.

## <a name="cdaotabledefgetconnect"></a><a name="getconnect"></a> CDaoTableDef:: GetConnect

Chiamare questa funzione membro per ottenere la stringa di connessione per un'origine dati.

```
CString GetConnect();
```

### <a name="return-value"></a>Valore restituito

`CString`Oggetto contenente il percorso e il tipo di database per la tabella.

### <a name="remarks"></a>Commenti

Per un `CDaoTableDef` oggetto che rappresenta una tabella collegata, l' `CString` oggetto è costituito da una o due parti, ovvero un identificatore del tipo di database e un percorso al database.

Il percorso come illustrato nella tabella seguente è il percorso completo della directory contenente i file di database e deve essere preceduto dall'identificatore "DATABASE =". In alcuni casi, come con i database Microsoft Jet e Microsoft Excel, un nome di file specifico è incluso nell'argomento del percorso del database.

La tabella in [CDaoTableDef:: seconnect](#setconnect) Mostra i tipi di database possibili e i relativi identificatori e percorsi di database corrispondenti:

Per le tabelle di base del database Microsoft Jet, l'identificatore è una stringa vuota ("").

Se è richiesta una password ma non è specificata, il driver ODBC Visualizza una finestra di dialogo di accesso la prima volta che si accede a una tabella e di nuovo se la connessione viene chiusa e riaperta. Se una tabella collegata dispone dell' `dbAttachSavePWD` attributo, la richiesta di accesso non verrà visualizzata quando la tabella viene riaperta.

Per informazioni correlate, vedere l'argomento "Connect Property" nella Guida di DAO.

## <a name="cdaotabledefgetdatecreated"></a><a name="getdatecreated"></a> CDaoTableDef:: GetDateCreated

Chiamare questa funzione per determinare la data e l'ora di creazione della tabella sottostante l' `CDaoTableDef` oggetto.

```
COleDateTime GetDateCreated();
```

### <a name="return-value"></a>Valore restituito

Valore contenente la data e l'ora della creazione della tabella sottostante l' `CDaoTableDef` oggetto.

### <a name="remarks"></a>Commenti

Le impostazioni di data e ora derivano dal computer in cui è stata creata o aggiornata l'ultimo aggiornamento della tabella di base. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dalla file server per evitare discrepanze; ovvero, tutti i client devono utilizzare un'origine ora "standard", ad esempio da un server.

Per informazioni correlate, vedere l'argomento "DateCreated, proprietà LastUpdated" nella Guida di DAO.

## <a name="cdaotabledefgetdatelastupdated"></a><a name="getdatelastupdated"></a> CDaoTableDef:: GetDateLastUpdated

Chiamare questa funzione per determinare la data e l'ora dell'ultimo aggiornamento della tabella sottostante l' `CDaoTableDef` oggetto.

```
COleDateTime GetDateLastUpdated();
```

### <a name="return-value"></a>Valore restituito

Valore che contiene la data e l'ora dell'ultimo aggiornamento della tabella sottostante l' `CDaoTableDef` oggetto.

### <a name="remarks"></a>Commenti

Le impostazioni di data e ora derivano dal computer in cui è stata creata o aggiornata l'ultimo aggiornamento della tabella di base. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dalla file server per evitare discrepanze; ovvero, tutti i client devono utilizzare un'origine ora "standard", ad esempio da un server.

Per informazioni correlate, vedere l'argomento "DateCreated, proprietà LastUpdated" nella Guida di DAO.

## <a name="cdaotabledefgetfieldcount"></a><a name="getfieldcount"></a> CDaoTableDef:: GetFieldCount

Chiamare questa funzione membro per recuperare il numero di campi definiti nella tabella.

```
short GetFieldCount();
```

### <a name="return-value"></a>Valore restituito

Numero di campi nella tabella.

### <a name="remarks"></a>Commenti

Se il valore è 0, nella raccolta non sono presenti oggetti.

Per informazioni correlate, vedere l'argomento relativo alla proprietà Count nella Guida di DAO.

## <a name="cdaotabledefgetfieldinfo"></a><a name="getfieldinfo"></a> CDaoTableDef:: GetFieldInfo

Chiamare questa funzione membro per ottenere vari tipi di informazioni su un campo definito nel TableDef.

```cpp
void GetFieldInfo(
    int nIndex,
    CDaoFieldInfo& fieldinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetFieldInfo(
    LPCTSTR lpszName,
    CDaoFieldInfo& fieldinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'oggetto campo nella raccolta di campi in base zero della tabella, per la ricerca in base all'indice.

*FieldInfo*<br/>
Riferimento a una struttura [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) .

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul campo da recuperare. Le opzioni disponibili sono elencate qui insieme alla cosa che determina la restituzione della funzione:

- `AFX_DAO_PRIMARY_INFO` Predefinita Nome, tipo, dimensioni, attributi. Usare questa opzione per ottenere prestazioni più rapide.

- `AFX_DAO_SECONDARY_INFO` Informazioni primarie, più: posizione ordinale, obbligatoria, Consenti lunghezza zero, ordine di confronto, nome esterno, campo di origine, tabella di origine

- `AFX_DAO_ALL_INFO` Informazioni primarie e secondarie, più: regola di convalida, testo di convalida, valore predefinito

*lpszName*<br/>
Puntatore al nome dell'oggetto campo per la ricerca in base al nome. Il nome è una stringa con un massimo di 64 caratteri che denominano in modo univoco il campo.

### <a name="remarks"></a>Commenti

Una versione della funzione consente di cercare un campo in base all'indice. L'altra versione consente di cercare un campo in base al nome.

Per una descrizione delle informazioni restituite, vedere la struttura [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi delle informazioni sopra elencate nella descrizione di *dwInfoOptions*. Quando si richiedono informazioni a un livello, si ottengono anche informazioni per i livelli precedenti.

Per informazioni correlate, vedere l'argomento "proprietà Attributes" nella Guida di DAO.

## <a name="cdaotabledefgetindexcount"></a><a name="getindexcount"></a> CDaoTableDef:: GetIndexCount

Chiamare questa funzione membro per ottenere il numero di indici per una tabella.

```
short GetIndexCount();
```

### <a name="return-value"></a>Valore restituito

Numero di indici per la tabella.

### <a name="remarks"></a>Commenti

Se il valore è 0, non sono presenti indici nella raccolta.

Per informazioni correlate, vedere l'argomento relativo alla proprietà Count nella Guida di DAO.

## <a name="cdaotabledefgetindexinfo"></a><a name="getindexinfo"></a> CDaoTableDef:: GetIndexInfo

Chiamare questa funzione membro per ottenere vari tipi di informazioni su un indice definito nel TableDef.

```cpp
void GetIndexInfo(
    int nIndex,
    CDaoIndexInfo& indexinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetIndexInfo(
    LPCTSTR lpszName,
    CDaoIndexInfo& indexinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice numerico dell'oggetto index nella raccolta di indici in base zero della tabella, per la ricerca in base alla relativa posizione nella raccolta.

*indexinfo*<br/>
Riferimento a una struttura [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) .

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni relative all'indice da recuperare. Le opzioni disponibili sono elencate qui insieme alla cosa che determina la restituzione della funzione:

- `AFX_DAO_PRIMARY_INFO` Nome, informazioni campo, campi. Usare questa opzione per ottenere prestazioni più rapide.

- `AFX_DAO_SECONDARY_INFO` Informazioni primarie, più: primario, univoco, cluster, Ignora valori null, obbligatorio, esterno

- `AFX_DAO_ALL_INFO` Informazioni primarie e secondarie, più: Distinct Count

*lpszName*<br/>
Puntatore al nome dell'oggetto indice per la ricerca in base al nome.

### <a name="remarks"></a>Commenti

Una versione della funzione consente di cercare un indice in base alla relativa posizione nella raccolta. L'altra versione consente di cercare un indice in base al nome.

Per una descrizione delle informazioni restituite, vedere la struttura [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi delle informazioni sopra elencate nella descrizione di *dwInfoOptions*. Quando si richiedono informazioni a un livello, si ottengono anche informazioni per i livelli precedenti.

Per informazioni correlate, vedere l'argomento "proprietà Attributes" nella Guida di DAO.

## <a name="cdaotabledefgetname"></a><a name="getname"></a> CDaoTableDef:: GetName

Chiamare questa funzione membro per ottenere il nome definito dall'utente della tabella sottostante.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

Nome definito dall'utente per una tabella.

### <a name="remarks"></a>Commenti

Questo nome inizia con una lettera e può contenere un massimo di 64 caratteri. Può includere numeri e caratteri di sottolineatura, ma non può includere segni di punteggiatura o spazi.

Per informazioni correlate, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

## <a name="cdaotabledefgetrecordcount"></a><a name="getrecordcount"></a> CDaoTableDef:: GetRecordCount

Chiamare questa funzione membro per individuare il numero di record contenuti in un `CDaoTableDef` oggetto.

```
long GetRecordCount();
```

### <a name="return-value"></a>Valore restituito

Numero di record a cui si accede in un oggetto TableDef.

### <a name="remarks"></a>Commenti

La chiamata a `GetRecordCount` per un oggetto tipo di tabella `CDaoTableDef` riflette il numero approssimativo di record nella tabella e viene influenzato immediatamente quando i record di tabella vengono aggiunti ed eliminati. Le transazioni di cui è stato eseguito il rollback verranno visualizzate come parte del conteggio dei record fino a quando non viene chiamato [CDaoWorkspace:: CompactDatabase](../../mfc/reference/cdaoworkspace-class.md#compactdatabase). Un `CDaoTableDef` oggetto senza record ha un'impostazione della proprietà Conteggio record pari a 0. Quando si utilizzano tabelle collegate o database ODBC, `GetRecordCount` restituisce sempre-1.

Per informazioni correlate, vedere l'argomento "proprietà RecordCount" nella Guida di DAO.

## <a name="cdaotabledefgetsourcetablename"></a><a name="getsourcetablename"></a> CDaoTableDef:: GetSourceTableName

Chiamare questa funzione membro per recuperare il nome di una tabella collegata in un database di origine.

```
CString GetSourceTableName();
```

### <a name="return-value"></a>Valore restituito

`CString`Oggetto che specifica il nome di origine di una tabella collegata o una stringa vuota se una tabella dati nativa.

### <a name="remarks"></a>Commenti

Una tabella collegata è una tabella di un altro database collegato a un database Microsoft Jet. I dati per le tabelle collegate rimangono nel database esterno, dove possono essere modificati da altre applicazioni.

Per informazioni correlate, vedere l'argomento "proprietà SourceTableName" nella Guida di DAO.

## <a name="cdaotabledefgetvalidationrule"></a><a name="getvalidationrule"></a> CDaoTableDef:: GetValidationRule

Chiamare questa funzione membro per recuperare la regola di convalida per un oggetto TableDef.

```
CString GetValidationRule();
```

### <a name="return-value"></a>Valore restituito

`CString`Oggetto che convalida i dati di un campo quando vengono modificati o aggiunti a una tabella.

### <a name="remarks"></a>Commenti

Le regole di convalida vengono utilizzate nella connessione con le operazioni di aggiornamento. Se un TableDef contiene una regola di convalida, gli aggiornamenti a tale TableDef devono corrispondere ai criteri predeterminati prima che i dati vengano modificati. Se la modifica non corrisponde ai criteri, viene generata un'eccezione che contiene il valore di [GetValidationText](#getvalidationtext) . Per un `CDaoTableDef` oggetto, questo valore `CString` è di sola lettura per una tabella collegata e in lettura/scrittura per una tabella di base.

Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.

## <a name="cdaotabledefgetvalidationtext"></a><a name="getvalidationtext"></a> CDaoTableDef:: GetValidationText

Chiamare questa funzione per recuperare la stringa da visualizzare quando un utente immette dati che non corrispondono alla regola di convalida.

```
CString GetValidationText();
```

### <a name="return-value"></a>Valore restituito

`CString`Oggetto che specifica il testo visualizzato se l'utente immette dati che non corrispondono alla regola di convalida.

### <a name="remarks"></a>Commenti

Per un `CDaoTableDef` oggetto, questo valore `CString` è di sola lettura per una tabella collegata e in lettura/scrittura per una tabella di base.

Per informazioni correlate, vedere l'argomento "proprietà ValidationText" nella Guida di DAO.

## <a name="cdaotabledefisopen"></a><a name="isopen"></a> CDaoTableDef:: Open

Chiamare questa funzione membro per determinare se l' `CDaoTableDef` oggetto è attualmente aperto.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l' `CDaoTableDef` oggetto è aperto; in caso contrario, 0.

### <a name="remarks"></a>Commenti

## <a name="cdaotabledefm_pdatabase"></a><a name="m_pdatabase"></a> CDaoTableDef:: m_pDatabase

Contiene un puntatore all'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) per questa tabella.

### <a name="remarks"></a>Commenti

## <a name="cdaotabledefm_pdaotabledef"></a><a name="m_pdaotabledef"></a> CDaoTableDef:: m_pDAOTableDef

Contiene un puntatore all'interfaccia OLE per l'oggetto TableDef DAO sottostante l' `CDaoTableDef` oggetto.

### <a name="remarks"></a>Commenti

Utilizzare questo puntatore se è necessario accedere direttamente all'interfaccia DAO.

## <a name="cdaotabledefopen"></a><a name="open"></a> CDaoTableDef:: Open

Chiamare questa funzione membro per aprire un oggetto TableDef precedentemente salvato nella raccolta TableDef's del database.

```
virtual void Open(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa che specifica un nome di tabella.

### <a name="remarks"></a>Commenti

## <a name="cdaotabledefrefreshlink"></a><a name="refreshlink"></a> CDaoTableDef:: RefreshLink

Chiamare questa funzione membro per aggiornare le informazioni di connessione per una tabella collegata.

```cpp
void RefreshLink();
```

### <a name="remarks"></a>Commenti

Per modificare le informazioni di connessione per una tabella collegata, chiamare la funzione di [disconnessione](#setconnect) nell' `CDaoTableDef` oggetto corrispondente e quindi utilizzare la `RefreshLink` funzione membro per aggiornare le informazioni. Quando si chiama `RefreshLink` , le proprietà della tabella collegata non vengono modificate.

Per rendere effettive le informazioni di connessione modificate, è necessario chiudere tutti gli oggetti [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) aperti basati sul TableDef.

Per informazioni correlate, vedere l'argomento "metodo RefreshLink" nella Guida di DAO.

## <a name="cdaotabledefsetattributes"></a><a name="setattributes"></a> CDaoTableDef:: SetAttributes

Imposta un valore che indica una o più caratteristiche di un `CDaoTableDef` oggetto.

```cpp
void SetAttributes(long lAttributes);
```

### <a name="parameters"></a>Parametri

*lAttributes*<br/>
Caratteristiche della tabella rappresentata dall' `CDaoTableDef` oggetto e possono essere una somma di queste costanti:

|Costante|Descrizione|
|--------------|-----------------|
|`dbAttachExclusive`|Per i database che usano il motore di database di Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'uso esclusivo.|
|`dbAttachSavePWD`|Per i database che utilizzano il motore di database di Microsoft Jet, indica che l'ID utente e la password per la tabella collegata vengono salvati con le informazioni di connessione.|
|`dbSystemObject`|Indica che la tabella è una tabella di sistema fornita dal motore di database di Microsoft Jet.|
|`dbHiddenObject`|Indica che la tabella è una tabella nascosta fornita dal motore di database di Microsoft Jet.|

### <a name="remarks"></a>Commenti

Quando si impostano più attributi, è possibile combinarli sommando le costanti appropriate utilizzando l'operatore OR bit per bit. `dbAttachExclusive`L'impostazione di su una tabella non collegata produce un'eccezione. La combinazione dei valori seguenti genera anche un'eccezione:

- **dbAttachExclusive &#124; dbAttachedODBC**

- **dbAttachSavePWD &#124; dbAttachedTable**

Per informazioni correlate, vedere l'argomento "proprietà Attributes" nella Guida di DAO.

## <a name="cdaotabledefsetconnect"></a><a name="setconnect"></a> CDaoTableDef:: seconnect

Per un `CDaoTableDef` oggetto che rappresenta una tabella collegata, l'oggetto stringa è costituito da una o due parti, ovvero un identificatore del tipo di database e un percorso al database.

```cpp
void SetConnect(LPCTSTR lpszConnect);
```

### <a name="parameters"></a>Parametri

*lpszConnect*<br/>
Puntatore a un'espressione stringa che specifica parametri aggiuntivi da passare ai driver ODBC o ISAM installabili.

### <a name="remarks"></a>Commenti

Il percorso come illustrato nella tabella seguente è il percorso completo della directory contenente i file di database e deve essere preceduto dall'identificatore "DATABASE =". In alcuni casi, come con i database Microsoft Jet e Microsoft Excel, un nome di file specifico è incluso nell'argomento del percorso del database.

> [!NOTE]
> Non includere spazi vuoti intorno alle istruzioni del percorso di accesso uguale nel formato "DATABASE = unità: \\ \percorso". Questa operazione comporterà la generazione di un'eccezione e la connessione non riuscita.

La tabella seguente illustra i tipi di database possibili e i percorsi e gli identificatori di database corrispondenti:

|Tipo di database|Identificatore|Percorso|
|-------------------|---------------|----------|
|Database che usa il motore di database Jet|"[ `database`];"|" `drive` : \\ \  *percorso* \\ \  *nomefile*. MDB|
|dBASE III|"dBASE III;"|" `drive` : \\ \  *percorso*"|
|dBASE IV|"dBASE IV;"|" `drive` : \\ \  *percorso*"|
|dBASE 5|"dBASE 5,0;"|" `drive` : \\ \  *percorso*"|
|Paradox 3. x|"Paradox 3. x;"|" `drive` : \\ \  *percorso*"|
|Paradox 4. x|"Paradox 4. x;"|" `drive` : \\ \  *percorso*"|
|Paradox 5. x|"Paradox 5. x;"|" `drive` : \\ \  *percorso*"|
|Excel 3,0|"Excel 3,0;"|" `drive` : \\ \  *percorso* \\ \  *nomefile*. XLS|
|Excel 4,0|"Excel 4,0;"|" `drive` : \\ \  *percorso* \\ \  *nomefile*. XLS|
|Excel 5,0 o Excel 95|"Excel 5,0;"|" `drive` : \\ \  *percorso* \\ \  *nomefile*. XLS|
|Excel 97|"Excel 8,0;"|" `drive` : \\ \  *percorso* \  *nomefile*. XLS|
|Importazione HTML|"Importazione HTML;"|" `drive` : \\ \  *percorso* \  *filename*"|
|Esportazione HTML|"Esportazione HTML;"|" `drive` : \\ \  *percorso*"|
|Testo|"Testo;"|"unità: \\ \percorso"|
|ODBC|ODBC DATABASE = `database` ; UID = *utente*; PWD = *password*; DSN = *DataSourceName;* LOGINTIMEOUT = *secondi;*" (Potrebbe non essere una stringa di connessione completa per tutti i server, ma è solo un esempio. È molto importante non includere spazi tra i parametri.|Nessuno|
|Exchange|Exchange<br /><br /> MAPILEVEL = *folderPath*;<br /><br /> [TABLETYPE = {0 &#124; 1};]<br /><br /> [Profilo = *profilo*;]<br /><br /> [PWD = *password*;]<br /><br /> [DATABASE = `database` ;] "|*"unità*: \\ \  *percorso* \\ \  *nomefile*. MDB|

> [!NOTE]
> Btrieve non è più supportato a partire da DAO 3,5.

È necessario utilizzare una doppia barra rovesciata ( \\ \\ ) nelle stringhe di connessione. Se sono state modificate le proprietà di una connessione esistente mediante `SetConnect` , è necessario chiamare in seguito [RefreshLink](#refreshlink). Se si stanno inizializzando le proprietà di connessione usando `SetConnect` , non è necessario chiamare `RefreshLink` , ma è necessario scegliere di eseguire questa operazione prima di aggiungere il TableDef.

Se è richiesta una password ma non è specificata, il driver ODBC Visualizza una finestra di dialogo di accesso la prima volta che si accede a una tabella e di nuovo se la connessione viene chiusa e riaperta.

È possibile impostare la stringa di connessione per un `CDaoTableDef` oggetto fornendo un argomento di origine per la `Create` funzione membro. È possibile controllare l'impostazione per determinare il tipo, il percorso, l'ID utente, la password o l'origine dati ODBC del database. Per ulteriori informazioni, vedere la documentazione relativa al driver specifico.

Per informazioni correlate, vedere l'argomento "Connect Property" nella Guida di DAO.

## <a name="cdaotabledefsetname"></a><a name="setname"></a> CDaoTableDef:: nome

Chiamare questa funzione membro per impostare un nome definito dall'utente per una tabella.

```cpp
void SetName(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a un'espressione stringa che specifica un nome per una tabella.

### <a name="remarks"></a>Commenti

Il nome deve iniziare con una lettera e può contenere un massimo di 64 caratteri. Può includere numeri e caratteri di sottolineatura, ma non può includere segni di punteggiatura o spazi.

Per informazioni correlate, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

## <a name="cdaotabledefsetsourcetablename"></a><a name="setsourcetablename"></a> CDaoTableDef:: SetSourceTableName

Chiamare questa funzione membro per specificare il nome di una tabella collegata o il nome della tabella di base su cui `CDaoTableDef` si basa l'oggetto, così come esiste nell'origine dei dati originale.

```cpp
void SetSourceTableName(LPCTSTR lpszSrcTableName);
```

### <a name="parameters"></a>Parametri

*lpszSrcTableName*<br/>
Puntatore a un'espressione stringa che specifica un nome di tabella nel database esterno. Per una tabella di base, l'impostazione è una stringa vuota ("").

### <a name="remarks"></a>Commenti

È quindi necessario chiamare [RefreshLink](#refreshlink). Questa impostazione di proprietà è vuota per una tabella di base e in lettura/scrittura per una tabella collegata o un oggetto non aggiunto a una raccolta.

Per informazioni correlate, vedere l'argomento "proprietà SourceTableName" nella Guida di DAO.

## <a name="cdaotabledefsetvalidationrule"></a><a name="setvalidationrule"></a> CDaoTableDef:: SetValidationRule

Chiamare questa funzione membro per impostare una regola di convalida per un oggetto TableDef.

```cpp
void SetValidationRule(LPCTSTR lpszValidationRule);
```

### <a name="parameters"></a>Parametri

*lpszValidationRule*<br/>
Puntatore a un'espressione stringa che convalida un'operazione.

### <a name="remarks"></a>Commenti

Le regole di convalida vengono utilizzate nella connessione con le operazioni di aggiornamento. Se un TableDef contiene una regola di convalida, gli aggiornamenti a tale TableDef devono corrispondere ai criteri predeterminati prima che i dati vengano modificati. Se la modifica non corrisponde ai criteri, viene visualizzata un'eccezione contenente il testo di [GetValidationText](#getvalidationtext) .

La convalida è supportata solo per i database che utilizzano il motore di database di Microsoft Jet. L'espressione non può fare riferimento a funzioni definite dall'utente, funzioni di aggregazione del dominio, funzioni di aggregazione SQL o query. Una regola di convalida per un `CDaoTableDef` oggetto può fare riferimento a più campi nell'oggetto.

Ad esempio, per i campi denominati *hire_date* e *termination_date*, una regola di convalida potrebbe essere:

[!code-cpp[NVC_MFCDatabase#34](../../mfc/codesnippet/cpp/cdaotabledef-class_1.cpp)]

Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.

## <a name="cdaotabledefsetvalidationtext"></a><a name="setvalidationtext"></a> CDaoTableDef:: SetValidationText

Chiamare questa funzione membro per impostare il testo dell'eccezione di una regola di convalida per un `CDaoTableDef` oggetto con una tabella di base sottostante supportata dal motore di database di Microsoft Jet.

```cpp
void SetValidationText(LPCTSTR lpszValidationText);
```

### <a name="parameters"></a>Parametri

*lpszValidationText*<br/>
Puntatore a un'espressione stringa che specifica il testo visualizzato se i dati immessi non sono validi.

### <a name="remarks"></a>Commenti

Non è possibile impostare il testo di convalida di una tabella collegata.

Per informazioni correlate, vedere l'argomento "proprietà ValidationText" nella Guida di DAO.

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)<br/>
[Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)
