---
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
ms.openlocfilehash: 063d0b795c7e4f6af901f52563295883ef81de7d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377134"
---
# <a name="cdaotabledef-class"></a>Classe CDaoTableDef

Rappresenta la definizione archiviata di una tabella di base o di una tabella collegata.

## <a name="syntax"></a>Sintassi

```
class CDaoTableDef : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoTableDef::CDaoTableDef](#cdaotabledef)|Costruisce un oggetto `CDaoTableDef`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoTableDef::Append](#append)|Aggiunge una nuova tabella al database.|
|[CDaoTableDef::CanUpdate](#canupdate)|Restituisce diverso da zero se la tabella può essere aggiornata (è possibile modificare la definizione dei campi o le proprietà della tabella).|
|[CDaoTableDef::Close](#close)|Chiude un tabledef aperto.|
|[CDaoTableDef::Create](#create)|Crea una tabella che può essere aggiunta al database utilizzando [Append](#append).|
|[CDaoTableDef::CreateField](#createfield)|Chiamato per creare un campo per una tabella.|
|[CDaoTableDef::CreateIndex](#createindex)|Chiamato per creare un indice per una tabella.|
|[CDaoTableDef::DeleteField](#deletefield)|Chiamato per eliminare un campo da una tabella.|
|[CDaoTableDef::DeleteIndex](#deleteindex)|Chiamato per eliminare un indice da una tabella.|
|[CDaoTableDef::GetAttributes](#getattributes)|Restituisce un valore che indica una `CDaoTableDef` o più caratteristiche di un oggetto.|
|[CDaoTableDef::GetConnect](#getconnect)|Restituisce un valore che fornisce informazioni sull'origine di una tabella.|
|[CDaoTableDef::GetDateCreated](#getdatecreated)|Restituisce la data e l'ora di creazione della tabella di base sottostante un `CDaoTableDef` oggetto.|
|[CDaoTableDef::GetDateLastUpdated](#getdatelastupdated)|Restituisce la data e l'ora della modifica più recente apportata alla struttura della tabella di base.|
|[CDaoTableDef::GetFieldCount](#getfieldcount)|Restituisce un valore che rappresenta il numero di campi nella tabella.|
|[CDaoTableDef::GetFieldInfo](#getfieldinfo)|Restituisce tipi specifici di informazioni sui campi della tabella.|
|[CDaoTableDef::GetIndexCount](#getindexcount)|Restituisce il numero di indici per la tabella.|
|[CDaoTableDef::GetIndexInfo](#getindexinfo)|Restituisce tipi specifici di informazioni sugli indici per la tabella.|
|[CDaoTableDef::GetName](#getname)|Restituisce il nome definito dall'utente della tabella.|
|[CDaoTableDef::GetRecordCount](#getrecordcount)|Restituisce il numero di record nella tabella.|
|[CDaoTableDef::GetSourceTableName](#getsourcetablename)|Restituisce un valore che specifica il nome della tabella collegata nel database di origine.|
|[CDaoTableDef::GetValidationRule](#getvalidationrule)|Restituisce un valore che convalida i dati in un campo quando viene modificato o aggiunto a una tabella.|
|[CDaoTableDef::GetValidationText](#getvalidationtext)|Restituisce un valore che specifica il testo del messaggio visualizzato dall'applicazione se il valore di un oggetto Field non soddisfa la regola di convalida specificata.|
|[CDaoTableDef::IsOpen](#isopen)|Restituisce diverso da zero se la tabella è aperta.|
|[CDaoTableDef::Open](#open)|Apre un tabledef esistente archiviato nell'insieme TableDef del database.|
|[CDaoTableDef::RefreshLink](#refreshlink)|Aggiorna le informazioni di connessione per una tabella collegata.|
|[CDaoTableDef::SetAttributes](#setattributes)|Imposta un valore che indica una `CDaoTableDef` o più caratteristiche di un oggetto.|
|[CDaoTableDef::SetConnect](#setconnect)|Imposta un valore che fornisce informazioni sull'origine di una tabella.|
|[CDaoTableDef::SetName](#setname)|Imposta il nome della tabella.|
|[CDaoTableDef::SetSourceTableName](#setsourcetablename)|Imposta un valore che specifica il nome di una tabella collegata nel database di origine.|
|[CDaoTableDef::SetValidationRuleC DaOTableDef::SetValidationRule](#setvalidationrule)|Imposta un valore che convalida i dati in un campo quando viene modificato o aggiunto a una tabella.|
|[CDaoTableDef::SetValidationText](#setvalidationtext)|Imposta un valore che specifica il testo del messaggio visualizzato dall'applicazione se il valore di un oggetto Field non soddisfa la regola di convalida specificata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoTableDef::m_pDAOTableDef](#m_pdaotabledef)|Puntatore all'interfaccia DAO sottostante l'oggetto tabledef.|
|[CDaoTableDef::m_pDatabase](#m_pdatabase)|Database di origine per questa tabella.|

## <a name="remarks"></a>Osservazioni

Ogni oggetto di database DAO gestisce una raccolta, denominata TableDefs, che contiene tutti gli oggetti tabledef DAO salvati.

Modificare una definizione `CDaoTableDef` di tabella utilizzando un oggetto. Ad esempio, è possibile:

- Esaminare il campo e la struttura dell'indice di qualsiasi tabella locale, collegata o esterna in un database.

- Chiamare `SetConnect` le `SetSourceTableName` funzioni membro e per le `RefreshLink` tabelle associate e utilizzare la funzione membro per aggiornare le connessioni alle tabelle associate.

- Chiamare `CanUpdate` la funzione membro per determinare se è possibile modificare le definizioni di campo nella tabella.

- Ottenere o impostare `GetValidationRule` condizioni di convalida utilizzando le funzioni membro e `SetValidationRule`, e `GetValidationText` . `SetValidationText`

- Utilizzare `Open` la funzione membro per creare un oggetto di tipo `CDaoRecordset` tabella, dynaset o snapshot.

    > [!NOTE]
    >  Le classi di database DAO sono distinte dalle classi di database MFC basate su ODBC (Open Database Connectivity). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO; le classi DAO offrono in genere funzionalità superiori perché sono specifiche del modulo di gestione di database Microsoft Jet.

### <a name="to-use-tabledef-objects-either-to-work-with-an-existing-table-or-to-create-a-new-table"></a>Per utilizzare gli oggetti tabledef per lavorare con una tabella esistente o per creare una nuova tabella

1. In tutti i casi, costruire innanzitutto un `CDaoTableDef` oggetto, fornendo un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto a cui appartiene la tabella.

1. Eseguire quindi le operazioni seguenti, a seconda di ciò che si desidera:

   - Per utilizzare una tabella salvata esistente, chiamare la funzione membro [Open](#open) dell'oggetto tabledef, specificando il nome della tabella salvata.

   - Per creare una nuova tabella, chiamare la funzione membro [Create](#create) dell'oggetto tabledef, specificando il nome della tabella. Chiamare [CreateField](#createfield) e [CreateIndex](#createindex) per aggiungere campi e indici alla tabella.

   - Chiamare [Append](#append) per salvare la tabella aggiungendola all'insieme TableDefs del database. `Create`mette il tabledef in uno stato `Create` aperto, `Open`quindi dopo aver chiamato non si chiama .

        > [!TIP]
        >  Il modo più semplice per creare tabelle salvate consiste nel crearle e memorizzarle nel database utilizzando Microsoft Access. È quindi possibile aprirli e utilizzarli nel codice MFC.

Per utilizzare l'oggetto tabledef aperto o creato, creare e aprire un `CDaoRecordset` oggetto, `dbOpenTable` specificando il nome del tabledef con un valore nel parametro *nOpenType.*

Per utilizzare un oggetto tabledef per creare un `CDaoRecordset` oggetto, in genere si crea o si apre un tabledef come descritto in precedenza, quindi si costruisce un oggetto recordset, passando un puntatore all'oggetto tabledef quando si chiama [CDaoRecordset::Open](../../mfc/reference/cdaorecordset-class.md#open). Il tabledef passato deve essere in uno stato aperto. Per ulteriori informazioni, vedere la classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

Al termine dell'utilizzo di un oggetto tabledef, chiamare la relativa funzione membro [Close;](../../mfc/reference/cdaorecordset-class.md#close) quindi distruggere l'oggetto tabledef.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoTableDef`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="cdaotabledefappend"></a><a name="append"></a>CDaoTableDef::Append

Chiamare questa funzione membro dopo aver chiamato [Create](#create) per creare un nuovo oggetto tabledef per salvare il tabledef nel database.

```
virtual void Append();
```

### <a name="remarks"></a>Osservazioni

La funzione aggiunge l'oggetto all'insieme TableDefs del database. È possibile utilizzare tabledef come oggetto temporaneo durante la definizione non aggiungendolo, ma se `Append`si desidera salvarlo e utilizzarlo, è necessario chiamare .

> [!NOTE]
> Se si tenta di aggiungere un tabledef senza nome (contenente una stringa null o vuota), MFC genera un'eccezione.

Per informazioni correlate, vedere l'argomento "Metodo Append" nella Guida in linea di DAO.

## <a name="cdaotabledefcanupdate"></a><a name="canupdate"></a>CDaoTableDef::CanUpdate

Chiamare questa funzione membro per determinare se `CDaoTableDef` la definizione della tabella sottostante un oggetto può essere modificata.

```
BOOL CanUpdate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la struttura della tabella (schema) può essere modificata (aggiungere o eliminare campi e indici), in caso contrario 0.Diverso da zero if the table structure (schema) can be modified (add or delete fields and indexes), otherwise 0.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, una `CDaoTableDef` tabella appena creata all'base di `CDaoTableDef` un oggetto può essere aggiornata e non è possibile aggiornare una tabella associata all'altro di un oggetto. Un `CDaoTableDef` oggetto può essere aggiornabile, anche se il recordset risultante non è aggiornabile.

Per informazioni correlate, vedere l'argomento "Proprietà Aggiornabile" nella Guida in linea di DAO.

## <a name="cdaotabledefcdaotabledef"></a><a name="cdaotabledef"></a>CDaoTableDef::CDaoTableDef

Costruisce un oggetto `CDaoTableDef`.

```
CDaoTableDef(CDaoDatabase* pDatabase);
```

### <a name="parameters"></a>Parametri

*pDatabase*<br/>
Puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

Dopo aver creato l'oggetto, è necessario chiamare la funzione membro [Create](#create) o [Open.](#open) Al termine dell'oggetto, è [Close](#close) necessario chiamare la `CDaoTableDef` relativa funzione membro Close ed eliminare l'oggetto.

## <a name="cdaotabledefclose"></a><a name="close"></a>CDaoTableDef::Close

Chiamare questa funzione membro per chiudere e rilasciare l'oggetto tabledef.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

In genere, dopo aver chiamato `Close`, si elimina l'oggetto tabledef se è stato allocato con **new**.

È possibile chiamare nuovamente `Close` [Open](#open) dopo aver chiamato . In questo modo è possibile riutilizzare l'oggetto tabledef.

Per informazioni correlate, vedere l'argomento "Metodo Close" nella Guida in linea di DAO.

## <a name="cdaotabledefcreate"></a><a name="create"></a>CDaoTableDef::Create

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
Puntatore a una stringa contenente il nome della tabella.

*lAttributil*<br/>
Valore corrispondente alle caratteristiche della tabella rappresentata dall'oggetto tabledef. È possibile utilizzare l'OR bit per bit per combinare una delle seguenti costanti:

|Costante|Descrizione|
|--------------|-----------------|
|`dbAttachExclusive`|Per i database che utilizzano il modulo di gestione di database Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'utilizzo esclusivo.|
|`dbAttachSavePWD`|Per i database che utilizzano il modulo di gestione di database Microsoft Jet, indica che l'ID utente e la password per la tabella collegata vengono salvati con le informazioni di connessione.|
|`dbSystemObject`|Indica che la tabella è una tabella di sistema fornita dal modulo di gestione di database Microsoft Jet.|
|`dbHiddenObject`|Indica che la tabella è una tabella nascosta fornita dal modulo di gestione di database Microsoft Jet.|

*lpszSrcTabella*<br/>
Puntatore a una stringa contenente il nome della tabella di origine. Per impostazione predefinita, questo valore viene inizializzato come NULL.

*lpszConnect (connessione a questo stato)*<br/>
Puntatore a una stringa contenente la stringa di connessione predefinita. Per impostazione predefinita, questo valore viene inizializzato come NULL.

### <a name="remarks"></a>Osservazioni

Dopo aver denominato il tabledef, è possibile chiamare [Append](#append) per salvare il tabledef nell'insieme TableDefs del database. Dopo `Append`aver chiamato , il tabledef è in uno stato aperto ed è possibile utilizzarlo per creare un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto.

Per informazioni correlate, vedere l'argomento "Metodo CreateTableDef" nella Guida in linea di DAO.

## <a name="cdaotabledefcreatefield"></a><a name="createfield"></a>CDaoTableDef::CreateField

Chiamare questa funzione membro per aggiungere un campo alla tabella.

```
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
Valore che indica il tipo di dati del campo. L'impostazione può essere uno dei seguenti valori:

|Type|Dimensioni (byte)|Descrizione|
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
|`dbLongBinary`|0|Binary lungo (oggetto OLE), [CLongBinary](../../mfc/reference/clongbinary-class.md) o [CByteArray](../../mfc/reference/cbytearray-class.md)|
|`dbMemo`|0|Memo ( [CString](../../atl-mfc-shared/reference/cstringt-class.md))|

*lDimensione*<br/>
Valore che indica la dimensione massima, in byte, di un campo contenente testo o la dimensione fissa di un campo contenente testo o valori numerici. Il parametro *lSize* viene ignorato per tutti i campi di testo tranne.

*lAttributil*<br/>
Valore corrispondente alle caratteristiche del campo e che può essere combinato utilizzando un OPERATORe BIT per bit.

|Costante|Descrizione|
|--------------|-----------------|
|`dbFixedField`|La dimensione del campo è fissa (impostazione predefinita per i campi numerici).|
|`dbVariableField`|La dimensione del campo è variabile (solo campi di testo).|
|`dbAutoIncrField`|Il valore del campo per i nuovi record viene incrementato automaticamente in un valore long integer univoco che non può essere modificato. Supportato solo per le tabelle di database Microsoft Jet.|
|`dbUpdatableField`|Il valore del campo può essere modificato.|
|`dbDescending`|Il campo viene ordinato in ordine decrescente (Sezione - A o 100 - 0) (si applica solo a un oggetto Field in un insieme Fields di un oggetto Index). Se si oma questa costante, il campo viene ordinato in ordine crescente (A - o 0 - 100) (impostazione predefinita).|

*Fieldinfo*<br/>
Riferimento a una struttura [CDaoFieldInfo.](../../mfc/reference/cdaofieldinfo-structure.md)

### <a name="remarks"></a>Osservazioni

Oggetto `DAOField` (OLE) oggetto viene creato e aggiunto `DAOTableDef` all'insieme Fields dell'oggetto (OLE). Oltre all'utilizzo per l'esame `CDaoFieldInfo` delle proprietà dell'oggetto, è anche possibile utilizzare per costruire un parametro di input per la creazione di nuovi campi in un tabledef. La prima `CreateField` versione di è più semplice da usare, ma se si `CreateField`desidera un `CDaoFieldInfo` controllo più preciso, è possibile utilizzare la seconda versione di , che accetta un parametro.

Se si utilizza `CreateField` la versione `CDaoFieldInfo` di che accetta un parametro, `CDaoFieldInfo` è necessario impostare con attenzione ciascuno dei seguenti membri della struttura:

- `m_strName`

- `m_nType`

- `m_lSize`

- `m_lAttributes`

- `m_bAllowZeroLength`

I membri `CDaoFieldInfo` rimanenti di devono essere impostati su **0**, FALSE o `CDaoException` una stringa vuota, a seconda del membro, oppure può verificarsi un evento .

Per informazioni correlate, vedere l'argomento "Metodo CreateField" nella Guida in linea di DAO.

## <a name="cdaotabledefcreateindex"></a><a name="createindex"></a>CDaoTableDef::CreateIndex

Chiamare questa funzione per aggiungere un indice a una tabella.

```
void CreateIndex(CDaoIndexInfo& indexinfo);
```

### <a name="parameters"></a>Parametri

*indexinfo*<br/>
Riferimento a una struttura [CDaoIndexInfo.](../../mfc/reference/cdaoindexinfo-structure.md)

### <a name="remarks"></a>Osservazioni

Gli indici specificano l'ordine dei record a cui si accede dalle tabelle di database e se i record duplicati vengono accettati o meno. Gli indici forniscono inoltre un accesso efficiente ai dati.

Non è necessario creare indici per le tabelle, ma in tabelle di grandi dimensioni non indicizzate, l'accesso a un record specifico o la creazione di un recordset può richiedere molto tempo. D'altra parte, la creazione di un numero di indici troppi rallenta le operazioni di aggiornamento, aggiunta ed eliminazione poiché tutti gli indici vengono aggiornati automaticamente. Considerare questi fattori quando si decide quali indici creare.

È necessario impostare i seguenti membri della `CDaoIndexInfo` struttura:

- `m_strName`È necessario specificare un nome.

- `m_pFieldInfos`Deve puntare a `CDaoIndexFieldInfo` una matrice di strutture.

- `m_nFields`È necessario specificare il numero `CDaoFieldInfo` di campi nella matrice di strutture.

I membri rimanenti verranno ignorati se impostato su FALSE. Inoltre, il `m_lDistinctCount` membro viene ignorato durante la creazione dell'indice.

## <a name="cdaotabledefdeletefield"></a><a name="deletefield"></a>CDaoTableDef::DeleteField

Chiamare questa funzione membro per rimuovere un campo e renderlo inaccessibile.

```
void DeleteField(LPCTSTR lpszName);
void DeleteField(int nIndex);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a un'espressione stringa che è il nome di un campo esistente.

*nIndex*<br/>
Indice del campo nell'insieme Fields in base zero della tabella, per la ricerca in base all'indice.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare questa funzione membro su un nuovo oggetto che non è stato aggiunto al database o quando [CanUpdate](#canupdate) restituisce diverso da zero.

Per informazioni correlate, vedere l'argomento "Metodo Delete" nella Guida in linea di DAO.

## <a name="cdaotabledefdeleteindex"></a><a name="deleteindex"></a>CDaoTableDef::DeleteIndex

Chiamare questa funzione membro per eliminare un indice in una tabella sottostante.

```
void DeleteIndex(LPCTSTR lpszName);
void DeleteIndex(int nIndex);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a un'espressione stringa che è il nome di un indice esistente.

*nIndex*<br/>
Indice di matrice dell'oggetto indice nell'insieme TableDefs in base zero del database, per la ricerca in base all'indice.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare questa funzione membro su un nuovo oggetto che non è stato aggiunto al database o quando [CanUpdate](#canupdate) restituisce diverso da zero.

Per informazioni correlate, vedere l'argomento "Metodo Delete" nella Guida in linea di DAO.

## <a name="cdaotabledefgetattributes"></a><a name="getattributes"></a>CDaoTableDef::GetAttributes

Per `CDaoTableDef` un oggetto, il valore restituito specifica le `CDaoTableDef` caratteristiche della tabella rappresentata dall'oggetto e può essere una somma di queste costanti:

```
long GetAttributes();
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore che indica una `CDaoTableDef` o più caratteristiche di un oggetto.

### <a name="remarks"></a>Osservazioni

|Costante|Descrizione|
|--------------|-----------------|
|`dbAttachExclusive`|Per i database che utilizzano il modulo di gestione di database Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'utilizzo esclusivo.|
|`dbAttachSavePWD`|Per i database che utilizzano il modulo di gestione di database Microsoft Jet, indica che l'ID utente e la password per la tabella collegata vengono salvati con le informazioni di connessione.|
|`dbSystemObject`|Indica che la tabella è una tabella di sistema fornita dal modulo di gestione di database Microsoft Jet.|
|`dbHiddenObject`|Indica che la tabella è una tabella nascosta fornita dal modulo di gestione di database Microsoft Jet.|
|`dbAttachedTable`|Indica che la tabella è una tabella collegata da un database non ODBC, ad esempio un database Paradox.|
|`dbAttachedODBC`|Indica che la tabella è una tabella collegata da un database ODBC, ad esempio Microsoft SQL Server.|

Una tabella di sistema è una tabella creata dal modulo di gestione di database Microsoft Jet per contenere varie informazioni interne.

Una tabella nascosta è una tabella creata per l'utilizzo temporaneo dal modulo di gestione di database Microsoft Jet.

Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida in linea di DAO.

## <a name="cdaotabledefgetconnect"></a><a name="getconnect"></a>CDaoTableDef::GetConnect

Chiamare questa funzione membro per ottenere la stringa di connessione per un'origine dati.

```
CString GetConnect();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` contenente il percorso e il tipo di database per la tabella.

### <a name="remarks"></a>Osservazioni

Per `CDaoTableDef` un oggetto che rappresenta una `CString` tabella collegata, l'oggetto è costituito da una o due parti (un identificatore di tipo di database e un percorso al database).

Il percorso, come illustrato nella tabella seguente, è il percorso completo della directory contenente i file di database e deve essere preceduto dall'identificatore "DATABASE". In alcuni casi (come con i database Microsoft Jet e Microsoft Excel), un nome file specifico è incluso nell'argomento percorso del database.

La tabella in CDaoTableDef::SetConnect mostra i possibili tipi di database e gli identificatori e i percorsi di database corrispondenti:The table in [CDaoTableDef::SetConnect](#setconnect) shows possible database types and their corresponding database specifiers and paths:

Per le tabelle di base del database Microsoft Jet, l'identificatore è una stringa vuota ("").

Se una password è richiesta ma non fornita, il driver ODBC visualizza una finestra di dialogo di accesso la prima volta che si accede a una tabella e di nuovo se la connessione viene chiusa e riaperta. Se una tabella associata ha l'attributo, `dbAttachSavePWD` il prompt di accesso non verrà visualizzato quando la tabella viene riaperta.

Per informazioni correlate, vedere l'argomento "Proprietà Connect" nella Guida in linea di DAO.

## <a name="cdaotabledefgetdatecreated"></a><a name="getdatecreated"></a>CDaoTableDef::GetDateCreated

Chiamare questa funzione per determinare la data `CDaoTableDef` e l'ora di creazione della tabella sottostante l'oggetto.

```
COleDateTime GetDateCreated();
```

### <a name="return-value"></a>Valore restituito

Valore contenente la data e l'ora della `CDaoTableDef` creazione della tabella sottostante l'oggetto.

### <a name="remarks"></a>Osservazioni

Le impostazioni di data e ora derivano dal computer in cui è stata creata o aggiornata la tabella di base. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dal file server per evitare discrepanze; vale a dire, tutti i client devono utilizzare un'origine ora "standard", ad esempio da un server.

Per informazioni correlate, vedere l'argomento "Proprietà DateCreated, LastUpdated" nella Guida in linea di DAO.

## <a name="cdaotabledefgetdatelastupdated"></a><a name="getdatelastupdated"></a>CDaoTableDef::GetDateLastUpdated

Chiamare questa funzione per determinare la data `CDaoTableDef` e l'ora dell'ultimo aggiornamento della tabella sottostante all'oggetto.

```
COleDateTime GetDateLastUpdated();
```

### <a name="return-value"></a>Valore restituito

Valore che contiene la data e `CDaoTableDef` l'ora dell'ultimo aggiornamento della tabella sottostante.

### <a name="remarks"></a>Osservazioni

Le impostazioni di data e ora derivano dal computer in cui è stata creata o aggiornata la tabella di base. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dal file server per evitare discrepanze; vale a dire, tutti i client devono utilizzare un'origine ora "standard", ad esempio da un server.

Per informazioni correlate, vedere l'argomento "Proprietà DateCreated, LastUpdated" nella Guida in linea di DAO.

## <a name="cdaotabledefgetfieldcount"></a><a name="getfieldcount"></a>CDaoTableDef::GetFieldCount

Chiamare questa funzione membro per recuperare il numero di campi definiti nella tabella.

```
short GetFieldCount();
```

### <a name="return-value"></a>Valore restituito

Numero di campi nella tabella.

### <a name="remarks"></a>Osservazioni

Se il valore è 0, non sono presenti oggetti nella raccolta.

Per informazioni correlate, vedere l'argomento "Proprietà Count" nella Guida di DAO.

## <a name="cdaotabledefgetfieldinfo"></a><a name="getfieldinfo"></a>CDaoTableDef::GetFieldInfo

Chiamare questa funzione membro per ottenere vari tipi di informazioni su un campo definito nel tabledef.

```
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
Indice dell'oggetto campo nell'insieme Fields in base zero della tabella, per la ricerca in base all'indice.

*Fieldinfo*<br/>
Riferimento a una struttura [CDaoFieldInfo.](../../mfc/reference/cdaofieldinfo-structure.md)

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul campo da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che causano la restituzione della funzione:

- `AFX_DAO_PRIMARY_INFO`(Predefinito) Nome, Tipo, Dimensione, Attributi. Utilizzare questa opzione per ottenere prestazioni più veloci.

- `AFX_DAO_SECONDARY_INFO`Informazioni principali, più: Posizione ordinale, Obbligatorio, Consenti lunghezza zero, Ordine di confronto, Nome straniero, Campo di origine, Tabella di origine

- `AFX_DAO_ALL_INFO`Informazioni primarie e secondarie, oltre a: Regola di convalida, Testo di convalida, Valore predefinito

*lpszName*<br/>
Puntatore al nome dell'oggetto campo, per la ricerca in base al nome. Il nome è una stringa con un massimo di 64 caratteri che denomina in modo univoco il campo.

### <a name="remarks"></a>Osservazioni

Una versione della funzione consente di cercare un campo in base all'indice. L'altra versione consente di cercare un campo in base al nome.

Per una descrizione delle informazioni restituite, vedere il [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi di informazioni elencati in precedenza nella descrizione di *dwInfoOptions*. Quando richiedi informazioni a un livello, ottieni informazioni anche per tutti i livelli precedenti.

Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida in linea di DAO.

## <a name="cdaotabledefgetindexcount"></a><a name="getindexcount"></a>CDaoTableDef::GetIndexCount

Chiamare questa funzione membro per ottenere il numero di indici per una tabella.

```
short GetIndexCount();
```

### <a name="return-value"></a>Valore restituito

Numero di indici per la tabella.

### <a name="remarks"></a>Osservazioni

Se il valore è 0, non sono presenti indici nella raccolta.

Per informazioni correlate, vedere l'argomento "Proprietà Count" nella Guida di DAO.

## <a name="cdaotabledefgetindexinfo"></a><a name="getindexinfo"></a>CDaoTableDef::GetIndexInfo

Chiamare questa funzione membro per ottenere vari tipi di informazioni su un indice definito nel tabledef.

```
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
Indice numerico dell'oggetto Index nell'insieme Indexes in base zero della tabella, per la ricerca in base alla posizione nella raccolta.

*indexinfo*<br/>
Riferimento a una struttura [CDaoIndexInfo.](../../mfc/reference/cdaoindexinfo-structure.md)

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sull'indice da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che causano la restituzione della funzione:

- `AFX_DAO_PRIMARY_INFO`Nome, Informazioni campo, Campi. Utilizzare questa opzione per ottenere prestazioni più veloci.

- `AFX_DAO_SECONDARY_INFO`Informazioni primarie, oltre a: Principale, Univoco, Cluster, Ignora Valori Null, Obbligatorio, Esterno

- `AFX_DAO_ALL_INFO`Informazioni primarie e secondarie, più: Conteggio distinto

*lpszName*<br/>
Puntatore al nome dell'oggetto indice, per la ricerca in base al nome.

### <a name="remarks"></a>Osservazioni

Una versione della funzione consente di cercare un indice in base alla relativa posizione nella raccolta. L'altra versione consente di cercare un indice in base al nome.

Per una descrizione delle informazioni restituite, vedere il [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi di informazioni elencati in precedenza nella descrizione di *dwInfoOptions*. Quando richiedi informazioni a un livello, ottieni informazioni anche per tutti i livelli precedenti.

Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida in linea di DAO.

## <a name="cdaotabledefgetname"></a><a name="getname"></a>CDaoTableDef::GetName

Chiamare questa funzione membro per ottenere il nome definito dall'utente della tabella sottostante.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

Un nome definito dall'utente per una tabella.

### <a name="remarks"></a>Osservazioni

Questo nome inizia con una lettera e può contenere un massimo di 64 caratteri. Può includere numeri e caratteri di sottolineatura, ma non può includere punteggiatura o spazi.

Per informazioni correlate, vedere l'argomento "Proprietà Name" nella Guida in linea di DAO.

## <a name="cdaotabledefgetrecordcount"></a><a name="getrecordcount"></a>CDaoTableDef::GetRecordCount

Chiamare questa funzione membro per scoprire quanti `CDaoTableDef` record sono in un oggetto.

```
long GetRecordCount();
```

### <a name="return-value"></a>Valore restituito

Numero di record a cui si accede in un oggetto tabledef.

### <a name="remarks"></a>Osservazioni

La `GetRecordCount` chiamata di `CDaoTableDef` un oggetto di tipo tabella riflette il numero approssimativo di record nella tabella e viene influenzata immediatamente quando i record della tabella vengono aggiunti ed eliminati. Le transazioni di cui è stato eseguito il rollback verranno visualizzate come parte del numero di record fino a quando non si chiama [CDaoWorkSpace::CompactDatabase](../../mfc/reference/cdaoworkspace-class.md#compactdatabase). Un `CDaoTableDef` oggetto senza record ha un'impostazione della proprietà di conteggio dei record pari a 0.A object with no records has a record count property setting of 0. Quando si lavora con tabelle `GetRecordCount` collegate o database ODBC, restituisce sempre -1.

Per informazioni correlate, vedere l'argomento "Proprietà RecordCount" nella Guida di DAO.

## <a name="cdaotabledefgetsourcetablename"></a><a name="getsourcetablename"></a>CDaoTableDef::GetSourceTableName

Chiamare questa funzione membro per recuperare il nome di una tabella collegata in un database di origine.

```
CString GetSourceTableName();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che specifica il nome di origine di una tabella associata o una stringa vuota se una tabella dati nativa.

### <a name="remarks"></a>Osservazioni

Una tabella collegata è una tabella in un altro database collegato a un database Microsoft Jet. I dati per le tabelle collegate rimangono nel database esterno, dove possono essere manipolati da altre applicazioni.

Per informazioni correlate, vedere l'argomento "Proprietà SourceTableName" nella Guida in linea di DAO.

## <a name="cdaotabledefgetvalidationrule"></a><a name="getvalidationrule"></a>CDaoTableDef::GetValidationRule

Chiamare questa funzione membro per recuperare la regola di convalida per un tabledef.

```
CString GetValidationRule();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che convalida i dati in un campo quando viene modificato o aggiunto a una tabella.

### <a name="remarks"></a>Osservazioni

Le regole di convalida vengono utilizzate in relazione alle operazioni di aggiornamento. Se un tabledef contiene una regola di convalida, gli aggiornamenti a tale tabledef devono corrispondere a criteri predeterminati prima della modifica dei dati. Se la modifica non corrisponde ai criteri, viene generata un'eccezione contenente il valore di [GetValidationText.](#getvalidationtext) Per `CDaoTableDef` un oggetto, è `CString` di sola lettura per una tabella associata e di lettura/scrittura per una tabella di base.

Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida in linea di DAO.

## <a name="cdaotabledefgetvalidationtext"></a><a name="getvalidationtext"></a>CDaoTableDef::GetValidationText

Chiamare questa funzione per recuperare la stringa da visualizzare quando un utente immette dati che non corrispondono alla regola di convalida.

```
CString GetValidationText();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che specifica il testo visualizzato se l'utente immette dati che non corrispondono alla regola di convalida.

### <a name="remarks"></a>Osservazioni

Per `CDaoTableDef` un oggetto, è `CString` di sola lettura per una tabella associata e di lettura/scrittura per una tabella di base.

Per informazioni correlate, vedere l'argomento "Proprietà ValidationText" nella Guida in linea di DAO.

## <a name="cdaotabledefisopen"></a><a name="isopen"></a>CDaoTableDef::IsOpen

Chiamare questa funzione membro `CDaoTableDef` per determinare se l'oggetto è attualmente aperto.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da `CDaoTableDef` zero se l'oggetto è aperto; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

## <a name="cdaotabledefm_pdatabase"></a><a name="m_pdatabase"></a>CDaoTableDef::m_pDatabase

Contiene un puntatore all'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) per questa tabella.

### <a name="remarks"></a>Osservazioni

## <a name="cdaotabledefm_pdaotabledef"></a><a name="m_pdaotabledef"></a>CDaoTableDef::m_pDAOTableDef

Contiene un puntatore all'interfaccia OLE per l'oggetto DAO tabledef sottostante l'oggetto. `CDaoTableDef`

### <a name="remarks"></a>Osservazioni

Utilizzare questo puntatore se è necessario accedere direttamente all'interfaccia DAO.

## <a name="cdaotabledefopen"></a><a name="open"></a>CDaoTableDef::Open

Chiamare questa funzione membro per aprire un tabledef precedentemente salvato nell'insieme TableDef del database.

```
virtual void Open(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa che specifica un nome di tabella.

### <a name="remarks"></a>Osservazioni

## <a name="cdaotabledefrefreshlink"></a><a name="refreshlink"></a>CDaoTableDef::RefreshLink

Chiamare questa funzione membro per aggiornare le informazioni di connessione per una tabella collegata.

```
void RefreshLink();
```

### <a name="remarks"></a>Osservazioni

Modificare le informazioni di connessione per una tabella collegata chiamando [SetConnect](#setconnect) sull'oggetto corrispondente `CDaoTableDef` e quindi utilizzando la `RefreshLink` funzione membro per aggiornare le informazioni. Quando si `RefreshLink`chiama , le proprietà della tabella associata non vengono modificate.

Per fare in modo che le informazioni di connessione modificate abbiano effetto, tutti gli oggetti [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) aperti basati su questo tabledef devono essere chiusi.

Per informazioni correlate, vedere l'argomento "Metodo RefreshLink" nella Guida in linea di DAO.

## <a name="cdaotabledefsetattributes"></a><a name="setattributes"></a>CDaoTableDef::SetAttributes

Imposta un valore che indica una `CDaoTableDef` o più caratteristiche di un oggetto.

```
void SetAttributes(long lAttributes);
```

### <a name="parameters"></a>Parametri

*lAttributil*<br/>
Caratteristiche della tabella rappresentata dall'oggetto `CDaoTableDef` e possono essere una somma di queste costanti:

|Costante|Descrizione|
|--------------|-----------------|
|`dbAttachExclusive`|Per i database che utilizzano il modulo di gestione di database Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'utilizzo esclusivo.|
|`dbAttachSavePWD`|Per i database che utilizzano il modulo di gestione di database Microsoft Jet, indica che l'ID utente e la password per la tabella collegata vengono salvati con le informazioni di connessione.|
|`dbSystemObject`|Indica che la tabella è una tabella di sistema fornita dal modulo di gestione di database Microsoft Jet.|
|`dbHiddenObject`|Indica che la tabella è una tabella nascosta fornita dal modulo di gestione di database Microsoft Jet.|

### <a name="remarks"></a>Osservazioni

Quando si impostano più attributi, è possibile combinarli sommando le costanti appropriate utilizzando l'operatore OR bit per bit. L'impostazione `dbAttachExclusive` su una tabella non collegata genera un'eccezione. La combinazione dei valori seguenti genera anche un'eccezione:Combining the following values also produce an exception:

- **dbAttachExclusive &#124; dbAttachedODBC**

- **dbAttachSavePWD &#124; dbAttachedTable**

Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida in linea di DAO.

## <a name="cdaotabledefsetconnect"></a><a name="setconnect"></a>CDaoTableDef::SetConnect

Per `CDaoTableDef` un oggetto che rappresenta una tabella collegata, l'oggetto stringa è costituito da una o due parti (un identificatore di tipo di database e un percorso al database).

```
void SetConnect(LPCTSTR lpszConnect);
```

### <a name="parameters"></a>Parametri

*lpszConnect (connessione a questo stato)*<br/>
Puntatore a un'espressione stringa che specifica parametri aggiuntivi da passare a driver ISAM ODBC o installabili.

### <a name="remarks"></a>Osservazioni

Il percorso, come illustrato nella tabella seguente, è il percorso completo della directory contenente i file di database e deve essere preceduto dall'identificatore "DATABASE". In alcuni casi (come con i database Microsoft Jet e Microsoft Excel), un nome file specifico è incluso nell'argomento percorso del database.

> [!NOTE]
> Non includere spazi vuoti intorno alle istruzioni di percorso di segno\\di uguale nel formato "DATABASE: unità: "percorso". Ciò comporterà la thrown di un'eccezione e la connessione non riesce.

Nella tabella seguente vengono illustrati i possibili tipi di database e gli identificatori e i percorsi di database corrispondenti:

|Tipo di database|Identificatore|Path|
|-------------------|---------------|----------|
|Database con il motore di database Jet|"[ `database`];"|" `drive`\\\ :*percorso*\\\ *nomefile*. MDB"|
|dBASE III|"dBASE III;"|" `drive`\\\ :*percorso*"|
|dBASE IV|"dBASE IV;"|" `drive`\\\ :*percorso*"|
|dBASE 5|"dBASE 5.0;"|" `drive`\\\ :*percorso*"|
|Paradosso 3.x|"Paradox 3.x;"|" `drive`\\\ :*percorso*"|
|Paradosso 4.x|"Paradox 4.x;"|" `drive`\\\ :*percorso*"|
|Paradosso 5.x|"Paradox 5.x;"|" `drive`\\\ :*percorso*"|
|Excel 3.0|"Excel 3.0;"|" `drive`\\\ :*percorso*\\\ *nomefile*. XLS"|
|Excel 4.0|"Excel 4.0;"|" `drive`\\\ :*percorso*\\\ *nomefile*. XLS"|
|Excel 5.0 o Excel 95|"Excel 5.0;"|" `drive`\\\ :*percorso*\\\ *nomefile*. XLS"|
|Excel 97|"Excel 8.0;"|" `drive`\\\ :*percorso*\ *nomefile*. XLS"|
|Importazione HTML|"Importazione HTML;"|" `drive`\\\ :*nomefile*\ *percorso*"|
|Esportazione HTML|"Esportazione HTML;"|" `drive`\\\ :*percorso*"|
|Text|"Testo;"|"unità:\\percorso"|
|ODBC|"ODBC; DATABASE `database`: UID: *utente*; *La password*PWD è stata utilizzata ; Nomeorigine *dati* DSN; LOGINTIMEOUT: *secondi;*" (Questo potrebbe non essere una stringa di connessione completa per tutti i server; è solo un esempio. È molto importante non avere spazi tra i parametri.)|nessuno|
|Exchange|"Scambio;<br /><br /> MAPILEVEL : *percorsocartella*;<br /><br /> [TABLETYPE: 0 &#124; 1;]<br /><br /> [PROFILO *PROFILO*;]<br /><br /> *[Password*PWD ;]<br /><br /> [DATABASE:]" `database`|*"unità*\\\ :*percorso*\\\ *nomefile*. MDB"|

> [!NOTE]
> Btrieve non è più supportato a partire da DAO 3.5.

È necessario utilizzare una\\\\doppia barra rovesciata ( ) nelle stringhe di connessione. Se sono state modificate le proprietà `SetConnect`di una connessione esistente utilizzando , è necessario chiamare successivamente [RefreshLink](#refreshlink). Se si stanno inizializzando `SetConnect`le proprietà di `RefreshLink`connessione utilizzando , non è necessario chiamare , ma se si sceglie di farlo, aggiungere innanzitutto il tabledef .

Se una password è richiesta ma non fornita, il driver ODBC visualizza una finestra di dialogo di accesso la prima volta che si accede a una tabella e di nuovo se la connessione viene chiusa e riaperta.

È possibile impostare la `CDaoTableDef` stringa di connessione per `Create` un oggetto fornendo un argomento di origine alla funzione membro. È possibile controllare l'impostazione per determinare il tipo, il percorso, l'ID utente, la password o l'origine dati ODBC del database. Per ulteriori informazioni, vedere la documentazione del driver specifico.

Per informazioni correlate, vedere l'argomento "Proprietà Connect" nella Guida in linea di DAO.

## <a name="cdaotabledefsetname"></a><a name="setname"></a>CDaoTableDef::SetName

Chiamare questa funzione membro per impostare un nome definito dall'utente per una tabella.

```
void SetName(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a un'espressione stringa che specifica un nome per una tabella.

### <a name="remarks"></a>Osservazioni

Il nome deve iniziare con una lettera e può contenere un massimo di 64 caratteri. Può includere numeri e caratteri di sottolineatura, ma non può includere punteggiatura o spazi.

Per informazioni correlate, vedere l'argomento "Proprietà Name" nella Guida in linea di DAO.

## <a name="cdaotabledefsetsourcetablename"></a><a name="setsourcetablename"></a>CDaoTableDef::SetSourceTableName

Chiamare questa funzione membro per specificare il nome di una tabella `CDaoTableDef` associata o il nome della tabella di base su cui si basa l'oggetto, come esiste nell'origine originale dei dati.

```
void SetSourceTableName(LPCTSTR lpszSrcTableName);
```

### <a name="parameters"></a>Parametri

*NomeTabella lpszSrc*<br/>
Puntatore a un'espressione stringa che specifica un nome di tabella nel database esterno. Per una tabella di base, l'impostazione è una stringa vuota ("").

### <a name="remarks"></a>Osservazioni

È quindi necessario chiamare [RefreshLink](#refreshlink). Questa impostazione della proprietà è vuota per una tabella di base e di lettura/scrittura per una tabella associata o un oggetto non aggiunto a una raccolta.

Per informazioni correlate, vedere l'argomento "Proprietà SourceTableName" nella Guida in linea di DAO.

## <a name="cdaotabledefsetvalidationrule"></a><a name="setvalidationrule"></a>CDaoTableDef::SetValidationRuleC DaOTableDef::SetValidationRule

Chiamare questa funzione membro per impostare una regola di convalida per un tabledef.Call this member function to set a validation rule for a tabledef.

```
void SetValidationRule(LPCTSTR lpszValidationRule);
```

### <a name="parameters"></a>Parametri

*lpszValidationRule*<br/>
Puntatore a un'espressione stringa che convalida un'operazione.

### <a name="remarks"></a>Osservazioni

Le regole di convalida vengono utilizzate in relazione alle operazioni di aggiornamento. Se un tabledef contiene una regola di convalida, gli aggiornamenti a tale tabledef devono corrispondere a criteri predeterminati prima della modifica dei dati. Se la modifica non corrisponde ai criteri, viene visualizzata un'eccezione contenente il testo di [GetValidationText.](#getvalidationtext)

La convalida è supportata solo per i database che utilizzano il modulo di gestione di database Microsoft Jet. L'espressione non può fare riferimento a funzioni definite dall'utente, funzioni di aggregazione sui domini, funzioni di aggregazione SQL o query. Una regola di `CDaoTableDef` convalida per un oggetto può fare riferimento a più campi in tale oggetto.

Ad esempio, per i campi denominati *hire_date* e *termination_date*, una regola di convalida potrebbe essere:

[!code-cpp[NVC_MFCDatabase#34](../../mfc/codesnippet/cpp/cdaotabledef-class_1.cpp)]

Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida in linea di DAO.

## <a name="cdaotabledefsetvalidationtext"></a><a name="setvalidationtext"></a>CDaoTableDef::SetValidationText

Chiamare questa funzione membro per impostare il `CDaoTableDef` testo dell'eccezione di una regola di convalida per un oggetto con una tabella di base sottostante supportata dal modulo di gestione di database Microsoft Jet.Call this member function to set the exception text of a validation rule for a object with an underlying base table supported by the Microsoft Jet database engine.

```
void SetValidationText(LPCTSTR lpszValidationText);
```

### <a name="parameters"></a>Parametri

*lpszValidationText (testo della convalida)*<br/>
Puntatore a un'espressione stringa che specifica il testo visualizzato se i dati immessi non sono validi.

### <a name="remarks"></a>Osservazioni

Non è possibile impostare il testo di convalida di una tabella associata.

Per informazioni correlate, vedere l'argomento "Proprietà ValidationText" nella Guida in linea di DAO.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)<br/>
[CDaoRecordset (classe)](../../mfc/reference/cdaorecordset-class.md)
