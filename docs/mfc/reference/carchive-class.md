---
title: CArchive (classe)
ms.date: 11/04/2016
f1_keywords:
- CArchive
- AFX/CArchive
- AFX/CArchive::CArchive
- AFX/CArchive::Abort
- AFX/CArchive::Close
- AFX/CArchive::Flush
- AFX/CArchive::GetFile
- AFX/CArchive::GetObjectSchema
- AFX/CArchive::IsBufferEmpty
- AFX/CArchive::IsLoading
- AFX/CArchive::IsStoring
- AFX/CArchive::MapObject
- AFX/CArchive::Read
- AFX/CArchive::ReadClass
- AFX/CArchive::ReadObject
- AFX/CArchive::ReadString
- AFX/CArchive::SerializeClass
- AFX/CArchive::SetLoadParams
- AFX/CArchive::SetObjectSchema
- AFX/CArchive::SetStoreParams
- AFX/CArchive::Write
- AFX/CArchive::WriteClass
- AFX/CArchive::WriteObject
- AFX/CArchive::WriteString
- AFX/CArchive::m_pDocument
helpviewer_keywords:
- CArchive [MFC], CArchive
- CArchive [MFC], Abort
- CArchive [MFC], Close
- CArchive [MFC], Flush
- CArchive [MFC], GetFile
- CArchive [MFC], GetObjectSchema
- CArchive [MFC], IsBufferEmpty
- CArchive [MFC], IsLoading
- CArchive [MFC], IsStoring
- CArchive [MFC], MapObject
- CArchive [MFC], Read
- CArchive [MFC], ReadClass
- CArchive [MFC], ReadObject
- CArchive [MFC], ReadString
- CArchive [MFC], SerializeClass
- CArchive [MFC], SetLoadParams
- CArchive [MFC], SetObjectSchema
- CArchive [MFC], SetStoreParams
- CArchive [MFC], Write
- CArchive [MFC], WriteClass
- CArchive [MFC], WriteObject
- CArchive [MFC], WriteString
- CArchive [MFC], m_pDocument
ms.assetid: 9e950d23-b874-456e-ae4b-fe00781a7699
ms.openlocfilehash: 3cf5c3b7a79e846928b5a7ee0af12a3324e141a3
ms.sourcegitcommit: 878a164fe6d550ca81ab87d8425c8d3cd52fe384
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/22/2019
ms.locfileid: "68376363"
---
# <a name="carchive-class"></a>CArchive (classe)

Consente di salvare una rete complessa di oggetti in un formato binario permanente (in genere archiviazione su disco) che viene mantenuto dopo l'eliminazione di tali oggetti.

## <a name="syntax"></a>Sintassi

```
class CArchive
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CArchive:: CArchive](#carchive)|Crea un oggetto `CArchive`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CArchive:: Abort](#abort)|Chiude un archivio senza generare un'eccezione.|
|[CArchive:: Close](#close)|Scarica i dati non scritti e si disconnette da `CFile`.|
|[CArchive:: Flush](#flush)|Scarica i dati non scritti dal buffer di archiviazione.|
|[CArchive:: GetFile](#getfile)|Ottiene il `CFile` puntatore all'oggetto per questo archivio.|
|[CArchive:: GetObjectSchema](#getobjectschema)|Chiamato dalla `Serialize` funzione per determinare la versione dell'oggetto da deserializzare.|
|[CArchive:: IsBufferEmpty](#isbufferempty)|Determina se il buffer è stato svuotato durante un processo di ricezione di Windows Sockets.|
|[CArchive:: autoloading](#isloading)|Determina se è in corso il caricamento dell'archivio.|
|[CArchive:: l'archiviazione](#isstoring)|Determina se l'archivio è in corso di archiviazione.|
|[CArchive:: MapObject](#mapobject)|Inserisce gli oggetti della mappa che non sono serializzati nel file, ma che sono disponibili per fare riferimento ai sottooggetti.|
|[CArchive:: Read](#read)|Legge byte non elaborati.|
|[CArchive:: ReadClass](#readclass)|Legge un riferimento a una classe precedentemente `WriteClass`archiviato con.|
|[CArchive:: ReadObject](#readobject)|Chiama la funzione di `Serialize` un oggetto per il caricamento.|
|[CArchive::ReadString](#readstring)|Legge una singola riga di testo.|
|[CArchive:: SerializeClass](#serializeclass)|Legge o scrive il riferimento alla `CArchive` classe nell'oggetto a seconda della direzione `CArchive`dell'oggetto.|
|[CArchive:: SetLoadParams](#setloadparams)|Imposta la dimensione in base alla quale cresce la matrice di caricamento. Deve essere chiamato prima del caricamento di un oggetto o `MapObject` prima `ReadObject` della chiamata a o.|
|[CArchive:: SetObjectSchema](#setobjectschema)|Imposta lo schema dell'oggetto archiviato nell'oggetto Archive.|
|[CArchive:: SetStoreParams](#setstoreparams)|Imposta le dimensioni della tabella hash e la dimensione del blocco della mappa utilizzata per identificare gli oggetti univoci durante il processo di serializzazione.|
|[CArchive:: Write](#write)|Scrive byte non elaborati.|
|[CArchive:: WriteClass](#writeclass)|Scrive un riferimento a `CRuntimeClass` `CArchive`in.|
|[CArchive:: WriteObject](#writeobject)|Chiama la `Serialize` funzione di un oggetto per l'archiviazione.|
|[CArchive:: WriteString](#writestring)|Scrive una singola riga di testo.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore CArchive::&lt;&lt;](#operator_lt_lt)|Archivia gli oggetti e i tipi primitivi nell'archivio.|
|[Operatore CArchive::&gt;&gt;](#operator_gt_gt)|Carica gli oggetti e i tipi primitivi dall'archivio.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CArchive:: m_pDocument](#m_pdocument)||

## <a name="remarks"></a>Note

`CArchive`non dispone di una classe base.

In seguito è possibile caricare gli oggetti da un archivio permanente, ricostiturli in memoria. Questo processo di creazione dei dati persistente è denominato "serializzazione".

È possibile considerare un oggetto archivio come un tipo di flusso binario. Come un flusso di input/output, un archivio è associato a un file e consente la scrittura e la lettura dei dati memorizzati nel buffer da e verso l'archiviazione. Un flusso di input/output elabora sequenze di caratteri ASCII, ma un archivio elabora i dati di oggetti binari in un formato efficiente e non ridondante.

Prima di poter creare [](../../mfc/reference/cfile-class.md) un `CArchive` oggetto, è necessario creare un oggetto CFile. Inoltre, è necessario assicurarsi che lo stato di caricamento/archiviazione dell'archivio sia compatibile con la modalità di apertura del file. Si è limitati a un archivio attivo per ogni file.

Quando si costruisce `CArchive` un oggetto, lo si collega a un oggetto della `CFile` classe (o a una classe derivata) che rappresenta un file aperto. Viene inoltre specificato se l'archivio verrà utilizzato per il caricamento o l'archiviazione. Un `CArchive` oggetto può elaborare non solo i tipi primitivi, ma anche gli oggetti delle classi derivate da [CObject](../../mfc/reference/cobject-class.md)progettate per la serializzazione. Una classe serializzabile ha in `Serialize` genere una funzione membro e USA in genere le macro [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) , come descritto in `CObject`classe.

Gli operatori di estrazione ( **>>** ) e di inserimento ( **<<** ) in overload sono semplici interfacce di programmazione di archiviazione che `CObject`supportano sia i tipi primitivi che le classi derivate da.

`CArchive`supporta inoltre la programmazione con le classi Windows Sockets MFC [CSocket](../../mfc/reference/csocket-class.md) e [CSocketFile](../../mfc/reference/csocketfile-class.md). La funzione membro [IsBufferEmpty](#isbufferempty) supporta tale utilizzo.

Per ulteriori informazioni su `CArchive`, vedere gli articoli [serializzazione](../../mfc/serialization-in-mfc.md) e [Windows Sockets: Uso di socket con](../../mfc/windows-sockets-using-sockets-with-archives.md)archivi.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CArchive`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="abort"></a>CArchive:: Abort

Chiamare questa funzione per chiudere l'archivio senza generare un'eccezione.

```
void Abort ();
```

### <a name="remarks"></a>Note

Il `CArchive` distruttore chiamerà `Close`normalmente, che eliminerà tutti i dati che non sono stati salvati nell'oggetto associato `CFile` . Ciò può causare eccezioni.

Quando si intercettano queste eccezioni, è consigliabile usare `Abort`, in modo che la distruzione dell' `CArchive` oggetto non causi ulteriori eccezioni. Quando si gestiscono `CArchive::Abort` le eccezioni, non genera un'eccezione per gli errori perché, a differenza di [CArchive:: Close](#close), `Abort` ignora gli errori.

Se è stato usato **New** per allocare l' `CArchive` oggetto nell'heap, è necessario eliminarlo dopo la chiusura del file.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [CArchive:: WriteClass](#writeclass).

##  <a name="carchive"></a>CArchive:: CArchive

Costruisce un `CArchive` oggetto e specifica se verrà utilizzato per il caricamento o l'archiviazione di oggetti.

```
CArchive(
    CFile* pFile,
    UINT nMode,
    int nBufSize = 4096,
    void* lpBuf = NULL);
```

### <a name="parameters"></a>Parametri

*pFile*<br/>
Puntatore all' `CFile` oggetto che rappresenta l'origine o la destinazione finale dei dati persistenti.

*nMode*<br/>
Flag che specifica se gli oggetti verranno caricati o archiviati nell'archivio. Il parametro *nMode* deve avere uno dei valori seguenti:

- `CArchive::load`Carica i dati dall'archivio. Richiede solo `CFile` l'autorizzazione di lettura.

- `CArchive::store`Salva i dati nell'archivio. Richiede `CFile` l'autorizzazione di scrittura.

- `CArchive::bNoFlushOnDelete`Impedisce che l'archivio chiami `Flush` automaticamente quando viene chiamato il distruttore dell'archivio. Se si imposta questo flag, si è responsabili della chiamata `Close` esplicita prima che venga chiamato il distruttore. In caso contrario, i dati saranno danneggiati.

*nBufSize*<br/>
Integer che specifica le dimensioni del buffer di file interno, in byte. Si noti che le dimensioni predefinite del buffer sono pari a 4.096 byte. Se si archiviano periodicamente oggetti di grandi dimensioni, è possibile migliorare le prestazioni se si utilizza una dimensione del buffer maggiore che rappresenta un multiplo della dimensione del buffer di file.

*lpBuf*<br/>
Puntatore facoltativo a un buffer fornito dall'utente di dimensioni *nBufSize*. Se non si specifica questo parametro, l'archivio alloca un buffer dall'heap locale e lo libera quando l'oggetto viene eliminato definitivamente. L'archivio non libera un buffer fornito dall'utente.

### <a name="remarks"></a>Note

Non è possibile modificare questa specifica dopo aver creato l'archivio.

Non è possibile utilizzare `CFile` le operazioni per modificare lo stato del file fino a quando non viene chiuso l'archivio. Qualsiasi operazione di questo tipo danneggerà l'integrità dell'archivio. È possibile accedere alla posizione del puntatore del file in qualsiasi momento durante la serializzazione ottenendo l'oggetto file dell'archivio dalla [](#getfile) funzione membro GetFile e quindi usando la funzione [CFile:: GetPosition](../../mfc/reference/cfile-class.md#getposition) . È necessario chiamare [CArchive:: Flush](#flush) prima di ottenere la posizione del puntatore del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#12](../../mfc/codesnippet/cpp/carchive-class_1.cpp)]

##  <a name="close"></a>CArchive:: Close

Scarica tutti i dati rimanenti nel buffer, chiude l'archivio e disconnette l'archivio dal file.

```
void Close();
```

### <a name="remarks"></a>Note

Non sono consentite altre operazioni sull'archivio. Dopo aver chiuso un archivio, è possibile creare un altro archivio per lo stesso file oppure è possibile chiudere il file.

La funzione `Close` membro garantisce che tutti i dati vengano trasferiti dall'archivio al file e rende l'archivio non disponibile. Per completare il trasferimento dal file al supporto di archiviazione, è necessario innanzitutto usare [CFile:: Close](../../mfc/reference/cfile-class.md#close) e quindi eliminare definitivamente l' `CFile` oggetto.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [CArchive:: WriteString](#writestring).

##  <a name="flush"></a>CArchive:: Flush

Impone la scrittura nel file di tutti i dati rimanenti nel buffer di archiviazione.

```
void Flush();
```

### <a name="remarks"></a>Note

La funzione `Flush` membro garantisce che tutti i dati vengano trasferiti dall'archivio al file. È necessario chiamare [CFile:: Close](../../mfc/reference/cfile-class.md#close) per completare il trasferimento dal file al supporto di archiviazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#13](../../mfc/codesnippet/cpp/carchive-class_2.cpp)]

##  <a name="getfile"></a>CArchive:: GetFile

Ottiene il `CFile` puntatore all'oggetto per questo archivio.

```
CFile* GetFile() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore costante all' `CFile` oggetto in uso.

### <a name="remarks"></a>Note

È necessario svuotare l'archivio prima `GetFile`di utilizzare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#14](../../mfc/codesnippet/cpp/carchive-class_3.cpp)]

##  <a name="getobjectschema"></a>CArchive:: GetObjectSchema

Chiamare questa funzione dalla `Serialize` funzione per determinare la versione dell'oggetto attualmente in fase di deserializzazione.

```
UINT GetObjectSchema();
```

### <a name="return-value"></a>Valore restituito

Durante la deserializzazione, la versione dell'oggetto da leggere.

### <a name="remarks"></a>Note

La chiamata a questa funzione è valida solo `CArchive` quando l'oggetto viene caricato ( [CArchive:: il caricamento](#isloading) restituisce un valore diverso da zero). Deve essere la prima chiamata `Serialize` alla funzione e viene chiamata una sola volta. Un valore restituito di (UINT)-1 indica che il numero di versione è sconosciuto.

Una `CObject`classe derivata da può usare VERSIONABLE_SCHEMA combinati (usando **or**bit per bit) con la versione dello schema stessa (nella macro IMPLEMENT_SERIAL) per creare un oggetto "versionable", ovvero un oggetto `Serialize` la cui funzione membro può leggere più versioni. La funzionalità predefinita del Framework (senza VERSIONABLE_SCHEMA) consiste nel generare un'eccezione quando la versione non corrisponde.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#15](../../mfc/codesnippet/cpp/carchive-class_4.cpp)]

##  <a name="isbufferempty"></a>CArchive:: IsBufferEmpty

Chiamare questa funzione membro per determinare se il buffer interno dell'oggetto archivio è vuoto.

```
BOOL IsBufferEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il buffer dell'archivio è vuoto; in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione viene fornita per supportare la programmazione con la classe `CSocketFile`Windows Sockets MFC. Non è necessario utilizzarlo per un archivio associato a un `CFile` oggetto.

Il motivo per l' `IsBufferEmpty` utilizzo di con un archivio associato `CSocketFile` a un oggetto è che il buffer dell'archivio potrebbe contenere più di un messaggio o un record. Dopo la ricezione di un messaggio, è `IsBufferEmpty` necessario utilizzare per controllare un ciclo che continua a ricevere dati fino a quando il buffer non è vuoto. Per ulteriori informazioni, vedere la funzione membro [Receive](../../mfc/reference/casyncsocket-class.md#receive) della classe `CAsyncSocket`, che Mostra come usare `IsBufferEmpty`.

Per ulteriori informazioni, vedere [Windows Sockets: Uso di socket con](../../mfc/windows-sockets-using-sockets-with-archives.md)archivi.

##  <a name="isloading"></a>CArchive:: autoloading

Determina se è in corso il caricamento dei dati da parte dell'archivio.

```
BOOL IsLoading() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'archivio è attualmente in uso per il caricamento. in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dalle `Serialize` funzioni delle classi archiviate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#16](../../mfc/codesnippet/cpp/carchive-class_5.cpp)]

##  <a name="isstoring"></a>CArchive:: l'archiviazione

Determina se l'archivio archivia i dati.

```
BOOL IsStoring() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'archivio è attualmente in uso per l'archiviazione. in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dalle `Serialize` funzioni delle classi archiviate.

Se lo `IsStoring` stato di un archivio è diverso da zero, il `IsLoading` suo stato è 0 e viceversa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#17](../../mfc/codesnippet/cpp/carchive-class_6.cpp)]

##  <a name="mapobject"></a>CArchive:: MapObject

Chiamare questa funzione membro per inserire gli oggetti della mappa che non sono realmente serializzati nel file, ma che sono disponibili per fare riferimento ai sottooggetti.

```
void MapObject(const CObject* pOb);
```

### <a name="parameters"></a>Parametri

*pOb*<br/>
Puntatore costante all'oggetto da archiviare.

### <a name="remarks"></a>Note

È possibile, ad esempio, non serializzare un documento, ma è possibile serializzare gli elementi che fanno parte del documento. Chiamando `MapObject`, si consente a tali elementi o sottooggetti di fare riferimento al documento. Inoltre, gli elementi secondari serializzati possono serializzare il puntatore *m_pDocument* back.

È possibile chiamare `MapObject` quando si archivia e si caricano `CArchive` dall'oggetto. `MapObject`aggiunge l'oggetto specificato alle strutture di dati interne gestite dall' `CArchive` oggetto durante la serializzazione e la deserializzazione, ma a differenza di [ReadObject](#readobject) e [WriteObject](#writeobject), non chiama Serialize sull'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#18](../../mfc/codesnippet/cpp/carchive-class_7.h)]

[!code-cpp[NVC_MFCSerialization#19](../../mfc/codesnippet/cpp/carchive-class_8.cpp)]

[!code-cpp[NVC_MFCSerialization#20](../../mfc/codesnippet/cpp/carchive-class_9.h)]

[!code-cpp[NVC_MFCSerialization#21](../../mfc/codesnippet/cpp/carchive-class_10.cpp)]

##  <a name="m_pdocument"></a>CArchive:: m_pDocument

Impostare su null per impostazione predefinita, questo puntatore a `CDocument` può essere impostato su qualsiasi elemento richiesto dall'utente `CArchive` dell'istanza.

```
CDocument* m_pDocument;
```

### <a name="remarks"></a>Note

Un utilizzo comune di questo puntatore consiste nel fornire informazioni aggiuntive sul processo di serializzazione a tutti gli oggetti da serializzare. Questa operazione viene eseguita inizializzando il puntatore con il documento ( `CDocument`classe derivata da) che viene serializzato, in modo che gli oggetti all'interno del documento possano accedere al documento, se necessario. Questo puntatore viene utilizzato anche dagli `COleClientItem` oggetti durante la serializzazione.

Il Framework imposta *m_pDocument* sul documento da serializzare quando un utente esegue un comando di apertura o salvataggio di un file. Se si serializza un documento contenitore di oggetti di collegamento e incorporamento (OLE) per motivi diversi dal file aperto o Salva, è necessario impostare in modo esplicito *m_pDocument*. Questa operazione può essere eseguita, ad esempio, durante la serializzazione di un documento contenitore negli Appunti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#35](../../mfc/codesnippet/cpp/carchive-class_11.cpp)]

##  <a name="operator_lt_lt"></a>Operatore CArchive::&lt;&lt;

Archivia l'oggetto indicato o il tipo primitivo nell'archivio.

```
friend CArchive& operator<<(
    CArchive& ar,
    const CObject* pOb);

throw(
    CArchiveException*,
    CFileException*);

CArchive& AFXAPI operator<<(
    CArchive& ar,
    const RECT& rect);

CArchive& AFXAPI operator<<(
    CArchive& ar,
    POINT point);

CArchive& AFXAPI operator<<(
    CArchive& ar,
    SIZE size);

template<typename BaseType,
    class StringTraits> CArchive& operator<<(
    const ATL::CStringT<BaseType,
    StringTraits>& str);

CArchive& operator<<(BYTE by);
CArchive& operator<<(WORD w);
CArchive& operator<<(LONG l);
CArchive& operator<<(DWORD dw);
CArchive& operator<<(float f);
CArchive& operator<<(double d);
CArchive& operator<<(int i);
CArchive& operator<<(short w);
CArchive& operator<<(char ch);
CArchive& operator<<(wchar_t ch);
CArchive& operator<<(unsigned u);
CArchive& operator<<(bool b);
CArchive& operator<<(ULONGLONG dwdw);
CArchive& operator<<(LONGLONG dwdw);
```

### <a name="return-value"></a>Valore restituito

Un `CArchive` riferimento che Abilita più operatori di inserimento su una sola riga.

### <a name="remarks"></a>Note

Le ultime due versioni precedenti sono specifiche per l'archiviazione di interi a 64 bit.

Se è stata usata la macro IMPLEMENT_SERIAL nell'implementazione della classe, l'operatore di inserimento in overload per `CObject` chiama l'oggetto `WriteObject`protetto. Questa funzione, a sua volta, chiama `Serialize` la funzione della classe.

L' [](../../atl-mfc-shared/reference/cstringt-class.md) operatore di inserimento CStringT (< <) supporta il dump di diagnostica e l'archiviazione in un archivio.

### <a name="example"></a>Esempio

Questo esempio illustra l'uso dell'operatore `CArchive` di inserimento < < con i tipi **int** e **Long** .

[!code-cpp[NVC_MFCSerialization#31](../../mfc/codesnippet/cpp/carchive-class_12.cpp)]

### <a name="example"></a>Esempio

Nell'esempio 2 viene illustrato l'uso dell' `CArchive` operatore di inserimento < < con `CStringT` il tipo.

[!code-cpp[NVC_MFCSerialization#32](../../mfc/codesnippet/cpp/carchive-class_13.cpp)]

##  <a name="operator_gt_gt"></a>Operatore CArchive::&gt;&gt;

Carica l'oggetto o il tipo primitivo indicato dall'archivio.

```
friend CArchive& operator>>(
    CArchive& ar,
    CObject *& pOb);

throw(
    CArchiveException*,
    CFileException*,
    CMemoryException*);

friend CArchive& operator>>(
    CArchive& ar,
    const CObject *& pOb);

throw(
    CArchiveException*,
    CFileException*,
    CMemoryException*);

CArchive& AFXAPI operator>>(
    CArchive& ar,
    const RECT& rect);

CArchive& AFXAPI operator>>(
    CArchive& ar,
    POINT point);

CArchive& AFXAPI operator>>(
    CArchive& ar,
    SIZE size);

template<typename BaseType,
    class StringTraits> CArchive& operator>>(
    ATL::CStringT<BaseType,
    StringTraits>& str);

CArchive& operator>>(BYTE& by);
CArchive& operator>>(WORD& w);
CArchive& operator>>(int& i);
CArchive& operator>>(LONG& l);
CArchive& operator>>(DWORD& dw);
CArchive& operator>>(float& f);
CArchive& operator>>(double& d);
CArchive& operator>>(short& w);
CArchive& operator>>(char& ch);
CArchive& operator>>(wchar_t& ch);
CArchive& operator>>(unsigned& u);
CArchive& operator>>(bool& b);
CArchive& operator>>(ULONGLONG& dwdw);
CArchive& operator>>(LONGLONG& dwdw);
```

### <a name="return-value"></a>Valore restituito

Un `CArchive` riferimento che Abilita più operatori di estrazione su una sola riga.

### <a name="remarks"></a>Note

Le ultime due versioni precedenti sono specifiche per il caricamento di interi a 64 bit.

Se è stata usata la macro IMPLEMENT_SERIAL nell'implementazione della classe, gli operatori di estrazione in overload per `CObject` chiamano la funzione `ReadObject` protetta (con un puntatore della classe di runtime diverso da zero). Questa funzione, a sua volta, chiama `Serialize` la funzione della classe.

L' [](../../atl-mfc-shared/reference/cstringt-class.md) operatore di estrazione CStringT (> >) supporta il caricamento da un archivio.

### <a name="example"></a>Esempio

In questo esempio viene illustrato l'uso `CArchive` dell'operatore di estrazione > > con il tipo **int** .

[!code-cpp[NVC_MFCSerialization#33](../../mfc/codesnippet/cpp/carchive-class_14.cpp)]

### <a name="example"></a>Esempio

In questo esempio viene illustrato l'utilizzo `CArchive` degli operatori di inserimento ed\< estrazione < e > > `CStringT` con il tipo.

[!code-cpp[NVC_MFCSerialization#34](../../mfc/codesnippet/cpp/carchive-class_15.cpp)]

##  <a name="read"></a>CArchive:: Read

Legge un numero specificato di byte dall'archivio.

```
UINT Read(void* lpBuf, UINT nMax);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore a un buffer fornito dall'utente che deve ricevere i dati letti dall'archivio.

*nMax*<br/>
Unsigned Integer che specifica il numero di byte da leggere dall'archivio.

### <a name="return-value"></a>Valore restituito

Unsigned Integer contenente il numero di byte effettivamente letti. Se il valore restituito è inferiore al numero richiesto, è stata raggiunta la fine del file. Non viene generata alcuna eccezione sulla condizione di fine del file.

### <a name="remarks"></a>Note

L'archivio non interpreta i byte.

È possibile utilizzare la `Read` funzione membro `Serialize` all'interno della funzione per la lettura di strutture ordinarie contenute negli oggetti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#24](../../mfc/codesnippet/cpp/carchive-class_16.cpp)]

##  <a name="readclass"></a>CArchive:: ReadClass

Chiamare questa funzione membro per leggere un riferimento a una classe archiviata in precedenza con [WriteClass](#writeclass).

```
CRuntimeClass* ReadClass(
    const CRuntimeClass* pClassRefRequested = NULL,
    UINT* pSchema = NULL,
    DWORD* pObTag = NULL);
```

### <a name="parameters"></a>Parametri

*pClassRefRequested*<br/>
Puntatore alla struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) che corrisponde al riferimento alla classe richiesto. Può essere NULL.

*pSchema*<br/>
Puntatore a uno schema della classe di runtime precedentemente archiviata.

*pObTag*<br/>
Numero che fa riferimento al tag univoco di un oggetto. Utilizzato internamente dall'implementazione di [ReadObject](#readobject). Esposto solo per la programmazione avanzata; *pObTag* normalmente deve essere null.

### <a name="return-value"></a>Valore restituito

Puntatore alla struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) .

### <a name="remarks"></a>Note

Se *pClassRefRequested* non è null, `ReadClass` verifica che le informazioni sulle classi archiviate siano compatibili con la classe di Runtime. Se non è compatibile, `ReadClass` genererà un' [CArchiveException](../../mfc/reference/carchiveexception-class.md).

La classe di runtime deve usare [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in caso `ReadClass` contrario, genererà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Se *pSchema* è null, lo schema della classe archiviata può essere recuperato chiamando [CArchive:: GetObjectSchema](#getobjectschema); in caso <strong>\*</strong>contrario, *pSchema* conterrà lo schema della classe di runtime precedentemente archiviata.

È possibile utilizzare [SerializeClass](#serializeclass) anziché `ReadClass`, che gestisce sia la lettura che la scrittura del riferimento alla classe.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [CArchive:: WriteClass](#writeclass).

##  <a name="readobject"></a>CArchive:: ReadObject

Legge i dati dell'oggetto dall'archivio e costruisce un oggetto del tipo appropriato.

```
CObject* ReadObject(const CRuntimeClass* pClass);
```

### <a name="parameters"></a>Parametri

*pClass*<br/>
Puntatore costante alla struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) che corrisponde all'oggetto che si prevede di leggere.

### <a name="return-value"></a>Valore restituito

Puntatore [CObject](../../mfc/reference/cobject-class.md) di cui è necessario eseguire il cast sicuro alla classe derivata corretta utilizzando [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof).

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata dall' `CArchive` operatore di **>>** estrazione () in overload per un puntatore [CObject](../../mfc/reference/cobject-class.md) . `ReadObject`, a sua volta, chiama `Serialize` la funzione della classe archiviata.

Se si specifica un parametro *pClass* diverso da zero, ottenuto dalla macro [RUNTIME_CLASS](../../mfc/reference/run-time-object-model-services.md#runtime_class) , la funzione verifica la classe di runtime dell'oggetto archiviato. Si presuppone che sia stata usata la macro IMPLEMENT_SERIAL nell'implementazione della classe.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [CArchive:: WriteObject](#writeobject).

##  <a name="readstring"></a>CArchive:: ReadString

Chiamare questa funzione membro per leggere i dati di testo in un buffer dal file associato `CArchive` all'oggetto.

```
BOOL ReadString(CString& rString);
LPTSTR ReadString(LPTSTR lpsz, UINT nMax);
```

### <a name="parameters"></a>Parametri

*rString*<br/>
Riferimento a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che conterrà la stringa risultante dopo che è stata letta dal file associato all'oggetto CArchive.

*lpsz*<br/>
Specifica un puntatore a un buffer fornito dall'utente che riceverà una stringa di testo con terminazione null.

*nMax*<br/>
Specifica il numero massimo di caratteri da leggere. Deve essere inferiore a una dimensione del buffer di *lpsz* .

### <a name="return-value"></a>Valore restituito

Nella versione che restituisce BOOL, TRUE in caso di esito positivo; In caso contrario, FALSE.

Nella versione che restituisce un `LPTSTR`oggetto, un puntatore al buffer che contiene i dati di testo; NULL se è stata raggiunta la fine del file.

### <a name="remarks"></a>Note

Nella versione della funzione membro con il parametro *nmax* , il buffer manterrà fino a un massimo di *nmax* caratteri. La lettura viene arrestata da una coppia ritorno a capo/avanzamento riga. I caratteri di nuova riga finali vengono sempre rimossi. In entrambi i casi viene aggiunto un carattere null (' \ 0').

[CArchive:: Read](#read) è disponibile anche per l'input in modalità testo, ma non termina in una coppia di feed di ritorno a capo/avanzamento riga.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [CArchive:: WriteString](#writestring).

##  <a name="serializeclass"></a>CArchive:: SerializeClass

Chiamare questa funzione membro quando si desidera archiviare e caricare le informazioni sulla versione di una classe di base.

```
void SerializeClass(const CRuntimeClass* pClassRef);
```

### <a name="parameters"></a>Parametri

*pClassRef*<br/>
Puntatore a un oggetto della classe di runtime per la classe base.

### <a name="remarks"></a>Note

`SerializeClass`legge o scrive il riferimento a una classe `CArchive` nell'oggetto, a seconda della direzione `CArchive`dell'oggetto. Usare `SerializeClass` al posto di [ReadClass](#readclass) e [WriteClass](#writeclass) come modo pratico per serializzare gli oggetti della classe di base; `SerializeClass` richiede meno codice e meno parametri.

Come `ReadClass` ,`SerializeClass` verifica che le informazioni sulle classi archiviate siano compatibili con la classe di Runtime. Se non è compatibile, `SerializeClass` genererà un' [CArchiveException](../../mfc/reference/carchiveexception-class.md).

La classe di runtime deve usare [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in caso `SerializeClass` contrario, genererà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Usare la macro [RUNTIME_CLASS](../../mfc/reference/run-time-object-model-services.md#runtime_class) per recuperare il valore per il parametro *pRuntimeClass* . La classe base deve avere utilizzato la macro [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#25](../../mfc/codesnippet/cpp/carchive-class_17.h)]

##  <a name="setloadparams"></a>CArchive:: SetLoadParams

Chiamare `SetLoadParams` quando si intende leggere un numero elevato di `CObject`oggetti derivati da da un archivio.

```
void SetLoadParams(UINT nGrowBy = 1024);
```

### <a name="parameters"></a>Parametri

*nGrowBy*<br/>
Numero minimo di slot di elementi da allocare se è necessario un aumento delle dimensioni.

### <a name="remarks"></a>Note

`CArchive`Usa una matrice di caricamento per risolvere i riferimenti agli oggetti archiviati nell'archivio. `SetLoadParams`consente di impostare la dimensione in base alla quale cresce la matrice di carico.

Non è necessario chiamare `SetLoadParams` dopo il caricamento di un oggetto o dopo la chiamata di [MapObject](#mapobject) o [ReadObject](#readobject) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#26](../../mfc/codesnippet/cpp/carchive-class_18.h)]

##  <a name="setobjectschema"></a>CArchive:: SetObjectSchema

Chiamare questa funzione membro per impostare lo schema dell'oggetto archiviato nell'oggetto Archive su *nSchema*.

```
void SetObjectSchema(UINT nSchema);
```

### <a name="parameters"></a>Parametri

*nSchema*<br/>
Specifica lo schema dell'oggetto.

### <a name="remarks"></a>Note

La chiamata successiva a [GetObjectSchema](#getobjectschema) restituirà il valore archiviato in *nSchema*.

Utilizzare `SetObjectSchema` per il controllo delle versioni avanzate, ad esempio quando si desidera forzare la lettura di una determinata versione in `Serialize` una funzione di una classe derivata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#27](../../mfc/codesnippet/cpp/carchive-class_19.cpp)]

##  <a name="setstoreparams"></a>CArchive:: SetStoreParams

Utilizzare `SetStoreParams` quando si archivia un numero elevato `CObject`di oggetti derivati da in un archivio.

```
void SetStoreParams(UINT nHashSize = 2053, UINT nBlockSize = 128);
```

### <a name="parameters"></a>Parametri

*nHashSize*<br/>
Dimensioni della tabella hash per le mappe del puntatore a interfaccia. Deve essere un numero primo.

*nBlockSize*<br/>
Specifica la granularità di allocazione della memoria per l'estensione dei parametri. Deve essere una potenza di 2 per ottenere prestazioni ottimali.

### <a name="remarks"></a>Note

`SetStoreParams`consente di impostare le dimensioni della tabella hash e la dimensione del blocco della mappa utilizzata per identificare gli oggetti univoci durante il processo di serializzazione.

Non è necessario chiamare `SetStoreParams` dopo l'archiviazione di oggetti o dopo la chiamata a [MapObject](#mapobject) o [WriteObject](#writeobject) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#26](../../mfc/codesnippet/cpp/carchive-class_18.h)]

##  <a name="write"></a>CArchive:: Write

Scrive un numero specificato di byte nell'archivio.

```
void Write(const void* lpBuf, INT nMax);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore a un buffer fornito dall'utente che contiene i dati da scrivere nell'archivio.

*nMax*<br/>
Integer che specifica il numero di byte da scrivere nell'archivio.

### <a name="remarks"></a>Note

L'archivio non formatta i byte.

È possibile usare la `Write` funzione membro `Serialize` all'interno della funzione per scrivere strutture ordinarie contenute negli oggetti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#23](../../mfc/codesnippet/cpp/carchive-class_20.cpp)]

##  <a name="writeclass"></a>CArchive:: WriteClass

Usare `WriteClass` per archiviare le informazioni sulla versione e sulla classe di una classe di base durante la serializzazione della classe derivata.

```
void WriteClass(const CRuntimeClass* pClassRef);
```

### <a name="parameters"></a>Parametri

*pClassRef*<br/>
Puntatore alla struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) che corrisponde al riferimento alla classe richiesto.

### <a name="remarks"></a>Note

`WriteClass`scrive un riferimento a [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) per la classe base in `CArchive`. Usare [CArchive:: ReadClass](#readclass) per recuperare il riferimento.

`WriteClass`Verifica che le informazioni sulle classi archiviate siano compatibili con la classe di Runtime. Se non è compatibile, `WriteClass` genererà un' [CArchiveException](../../mfc/reference/carchiveexception-class.md).

La classe di runtime deve usare [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in caso `WriteClass` contrario, genererà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

È possibile utilizzare [SerializeClass](#serializeclass) anziché `WriteClass`, che gestisce sia la lettura che la scrittura del riferimento alla classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#28](../../mfc/codesnippet/cpp/carchive-class_21.cpp)]

##  <a name="writeobject"></a>CArchive:: WriteObject

Archivia l'oggetto `CObject` specificato nell'archivio.

```
void WriteObject(const CObject* pOb);
```

### <a name="parameters"></a>Parametri

*pOb*<br/>
Puntatore costante all'oggetto da archiviare.

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata dall' `CArchive` operatore di **<<** inserimento () in overload per `CObject`. `WriteObject`, a sua volta, chiama `Serialize` la funzione della classe archiviata.

Per abilitare l'archiviazione è necessario usare la macro IMPLEMENT_SERIAL. `WriteObject`scrive il nome della classe ASCII nell'archivio. Il nome della classe viene convalidato in un secondo momento durante il processo di caricamento. Uno schema di codifica speciale impedisce la duplicazione superflua del nome della classe per più oggetti della classe. Questo schema impedisce anche l'archiviazione ridondante di oggetti che sono destinazioni di più di un puntatore.

Il metodo di codifica dell'oggetto esatto (inclusa la presenza del nome della classe ASCII) è un dettaglio di implementazione e potrebbe cambiare nelle versioni future della libreria.

> [!NOTE]
>  Completare la creazione, l'eliminazione e l'aggiornamento di tutti gli oggetti prima di iniziare ad archiviarli. L'archivio sarà danneggiato se si combinano le archiviazioni con la modifica dell'oggetto.

### <a name="example"></a>Esempio

Per una definizione della classe `CAge`, vedere l'esempio per [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist).

[!code-cpp[NVC_MFCSerialization#29](../../mfc/codesnippet/cpp/carchive-class_22.cpp)]

##  <a name="writestring"></a>CArchive:: WriteString

Utilizzare questa funzione membro per scrivere i dati da un buffer nel file associato `CArchive` all'oggetto.

```
void WriteString(LPCTSTR lpsz);
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
Specifica un puntatore a un buffer contenente una stringa di testo con terminazione null.

### <a name="remarks"></a>Note

Il carattere di terminazione null (' \ 0') non viene scritto nel file; né è una nuova riga scritta automaticamente.

`WriteString`genera un'eccezione in risposta a diverse condizioni, inclusa la condizione disco-completo.

`Write`è anche disponibile, ma anziché terminare con un carattere null, scrive il numero richiesto di byte nel file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#30](../../mfc/codesnippet/cpp/carchive-class_23.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Classe CSocket](../../mfc/reference/csocket-class.md)<br/>
[Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
