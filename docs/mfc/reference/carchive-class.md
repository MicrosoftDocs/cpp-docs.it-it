---
title: Classe CArchive
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
ms.openlocfilehash: ef8b6ec9060e8c15dd45f8203dadd2a2aca9e168
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753114"
---
# <a name="carchive-class"></a>Classe CArchive

Consente di salvare una rete complessa di oggetti in forma binaria permanente (in genere archiviazione su disco) che persiste dopo l'eliminazione di tali oggetti.

## <a name="syntax"></a>Sintassi

```
class CArchive
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArchive::CArchive](#carchive)|Crea un oggetto `CArchive`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArchive::Abort](#abort)|Chiude un archivio senza generare un'eccezione.|
|[CArchive::Chiudi](#close)|Scarica i dati non scritti e `CFile`si disconnette dal file .|
|[CArchive::Flush](#flush)|Scarica i dati non scritti dal buffer di archivio.|
|[CArchive::GetFile](#getfile)|Ottiene `CFile` il puntatore dell'oggetto per questo archivio.|
|[CArchive::GetObjectSchema](#getobjectschema)|Chiamato dalla `Serialize` funzione per determinare la versione dell'oggetto da deserializzare.|
|[CArchive::IsBufferEmpty](#isbufferempty)|Determina se il buffer è stato svuotato durante un processo di ricezione di Windows Sockets.|
|[CArchive::IsLoading](#isloading)|Determina se l'archivio è in corso di caricamento.|
|[CArchive::IsStoring](#isstoring)|Determina se l'archivio è in uso.|
|[CArchive::MapObject](#mapobject)|Inserisce nella mappa gli oggetti che non vengono serializzati nel file, ma che sono disponibili per gli oggetti secondari a fare riferimento.|
|[CArchive::Lettura](#read)|Legge i byte non elaborati.|
|[CArchive::ReadClass](#readclass)|Legge un riferimento alla `WriteClass`classe archiviato in precedenza con .|
|[CArchive::ReadObject](#readobject)|Chiama la funzione `Serialize` di un oggetto per il caricamento.|
|[CArchive::ReadString](#readstring)|Legge una singola riga di testo.|
|[CArchive::SerializeClass](#serializeclass)|Legge o scrive il riferimento `CArchive` alla classe all'oggetto in base alla direzione dell'oggetto `CArchive`.|
|[CArchive::SetLoadParams](#setloadparams)|Imposta le dimensioni a cui aumenta la matrice di carico. Deve essere chiamato prima del `MapObject` caricamento `ReadObject` di qualsiasi oggetto o prima o di un chiamato.|
|[CArchive::SetObjectSchema](#setobjectschema)|Imposta lo schema dell'oggetto archiviato nell'oggetto archivio.|
|[CArchive::SetStoreParams](#setstoreparams)|Imposta le dimensioni della tabella hash e le dimensioni del blocco della mappa utilizzata per identificare oggetti univoci durante il processo di serializzazione.|
|[CArchive::Scrittura](#write)|Scrive byte non elaborati.|
|[CArchive::WriteClass](#writeclass)|Scrive un riferimento `CRuntimeClass` all'oggetto to the `CArchive`.|
|[Archivio::WriteObject](#writeobject)|Chiama la funzione `Serialize` di un oggetto per l'archiviazione.|
|[CArchive::WriteString](#writestring)|Scrive una singola riga di testo.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArchive::operatore&lt;&lt;](#operator_lt_lt)|Archivia gli oggetti e i tipi primitivi nell'archivio.|
|[CArchive::operatore&gt;&gt;](#operator_gt_gt)|Carica oggetti e tipi primitivi dall'archivio.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArchive::m_pDocument](#m_pdocument)||

## <a name="remarks"></a>Osservazioni

`CArchive`non dispone di una classe base.

Successivamente è possibile caricare gli oggetti da un archivio permanente, ricondizionandoli in memoria. Questo processo di rendere persistenti i dati è denominato "serializzazione".

È possibile pensare a un oggetto archivio come a un tipo di flusso binario. Come un flusso di input/output, un archivio è associato a un file e consente la scrittura e la lettura di dati memorizzati nel buffer da e verso l'archiviazione. Un flusso di input/output elabora sequenze di caratteri ASCII, ma un archivio elabora i dati oggetto binario in un formato efficiente e non ridondante.

È necessario creare un [CFile](../../mfc/reference/cfile-class.md) oggetto `CArchive` prima di poter creare un oggetto. Inoltre, è necessario assicurarsi che lo stato di caricamento/archiviazione dell'archivio sia compatibile con la modalità di apertura del file. È consentito un solo archivio attivo per file.

Quando si `CArchive` costruisce un oggetto, lo si `CFile` associa a un oggetto della classe (o una classe derivata) che rappresenta un file aperto. È inoltre possibile specificare se l'archivio verrà utilizzato per il caricamento o l'archiviazione. Un `CArchive` oggetto può elaborare non solo i tipi primitivi, ma anche gli oggetti di [CObject-classi](../../mfc/reference/cobject-class.md)derivate progettate per la serializzazione. Una classe serializzabile ha `Serialize` in genere una funzione membro e in genere utilizza `CObject`le macro [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL,](../../mfc/reference/run-time-object-model-services.md#implement_serial) come descritto nella classe .

Gli operatori di **>>** overload extraction **<<**( ) e insertion ( ) sono `CObject`utili interfacce di programmazione dell'archivio che supportano sia i tipi primitivi che le classi derivate.

`CArchive`supporta inoltre la programmazione con le classi MFC Windows Sockets [CSocket](../../mfc/reference/csocket-class.md) e [CSocketFile](../../mfc/reference/csocketfile-class.md). Il [IsBufferEmpty](#isbufferempty) funzione membro supporta tale utilizzo.

Per ulteriori `CArchive`informazioni su , vedere gli articoli [Serializzazione](../../mfc/serialization-in-mfc.md) e [Windows Sockets: utilizzo](../../mfc/windows-sockets-using-sockets-with-archives.md)di socket con archivi .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CArchive`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="carchiveabort"></a><a name="abort"></a>CArchive::Abort

Chiamare questa funzione per chiudere l'archivio senza generare un'eccezione.

```cpp
void Abort ();
```

### <a name="remarks"></a>Osservazioni

Il `CArchive` distruttore chiamerà `Close`in genere , che scaricherà `CFile` tutti i dati che non sono stati salvati nell'oggetto associato. Ciò può causare eccezioni.

Quando si intercettano queste eccezioni, `Abort`è consigliabile utilizzare `CArchive` , in modo che la distruzione dell'oggetto non causi ulteriori eccezioni. Quando si gestiscono `CArchive::Abort` le eccezioni, non genererà un'eccezione `Abort` in caso di errori perché, a differenza di [CArchive::Close](#close), ignora gli errori.

Se è **new** stato utilizzato `CArchive` new per allocare l'oggetto nell'heap, è necessario eliminarlo dopo la chiusura del file.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CArchive::WriteClass](#writeclass).

## <a name="carchivecarchive"></a><a name="carchive"></a>CArchive::CArchive

Costruisce un `CArchive` oggetto e specifica se verrà utilizzato per il caricamento o l'archiviazione di oggetti.

```
CArchive(
    CFile* pFile,
    UINT nMode,
    int nBufSize = 4096,
    void* lpBuf = NULL);
```

### <a name="parameters"></a>Parametri

*pFile (File)*<br/>
Puntatore all'oggetto `CFile` che è l'origine o la destinazione finale dei dati persistenti.

*nModalità*<br/>
Flag che specifica se gli oggetti verranno caricati o archiviati nell'archivio. Il parametro *nMode* deve avere uno dei seguenti valori:

- `CArchive::load`Carica i dati dall'archivio. Richiede `CFile` solo l'autorizzazione di lettura.

- `CArchive::store`Salva i dati nell'archivio. Richiede `CFile` l'autorizzazione di scrittura.

- `CArchive::bNoFlushOnDelete`Impedisce all'archivio di chiamare `Flush` automaticamente quando viene chiamato il distruttore di archivio. Se si imposta questo flag, si `Close` è responsabili di chiamare in modo esplicito prima che venga chiamato il distruttore. In caso contrario, i dati saranno danneggiati.

*nBufSize (informazioni in base al nome)*<br/>
Un numero intero che specifica la dimensione del buffer di file interno, in byte. Si noti che la dimensione predefinita del buffer è 4.096 byte. Se si archiviano regolarmente oggetti di grandi dimensioni, le prestazioni verranno migliorate se si utilizza una dimensione del buffer maggiore che è un multiplo della dimensione del buffer di file.

*lpBuf*<br/>
Puntatore facoltativo a un buffer fornito dall'utente di dimensioni *nBufSize*. Se non si specifica questo parametro, l'archivio alloca un buffer dall'heap locale e lo libera quando l'oggetto viene eliminato. L'archivio non libera un buffer fornito dall'utente.

### <a name="remarks"></a>Osservazioni

Non è possibile modificare questa specifica dopo aver creato l'archivio.

Non è `CFile` possibile utilizzare le operazioni per modificare lo stato del file fino a quando non si chiude l'archivio. Qualsiasi operazione di questo tipo danneggerà l'integrità dell'archivio. È possibile accedere alla posizione del puntatore del file in qualsiasi momento durante la serializzazione ottenendo l'oggetto file dell'archivio dalla funzione membro [GetFile](#getfile) e quindi utilizzando la funzione [CFile::GetPosition](../../mfc/reference/cfile-class.md#getposition) . È necessario chiamare [CArchive::Flush](#flush) prima di ottenere la posizione del puntatore del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#12](../../mfc/codesnippet/cpp/carchive-class_1.cpp)]

## <a name="carchiveclose"></a><a name="close"></a>CArchive::Chiudi

Scarica tutti i dati rimanenti nel buffer, chiude l'archivio e disconnette l'archivio dal file.

```cpp
void Close();
```

### <a name="remarks"></a>Osservazioni

Non sono consentite ulteriori operazioni sull'archivio. Dopo aver chiuso un archivio, è possibile creare un altro archivio per lo stesso file oppure chiudere il file.

La funzione `Close` membro assicura che tutti i dati vengano trasferiti dall'archivio al file e rende l'archivio non disponibile. Per completare il trasferimento dal file al supporto di archiviazione, è innanzitutto necessario utilizzare [CFile::Close](../../mfc/reference/cfile-class.md#close) e quindi eliminare l'oggetto. `CFile`

### <a name="example"></a>Esempio

  Vedere l'esempio per [CArchive::WriteString](#writestring).

## <a name="carchiveflush"></a><a name="flush"></a>CArchive::Flush

Forza la scrittura nel file dei dati rimanenti nel buffer di archiviazione.

```cpp
void Flush();
```

### <a name="remarks"></a>Osservazioni

La funzione `Flush` membro assicura che tutti i dati vengano trasferiti dall'archivio al file. È necessario chiamare [CFile::Close](../../mfc/reference/cfile-class.md#close) per completare il trasferimento dal file al supporto di archiviazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#13](../../mfc/codesnippet/cpp/carchive-class_2.cpp)]

## <a name="carchivegetfile"></a><a name="getfile"></a>CArchive::GetFile

Ottiene `CFile` il puntatore dell'oggetto per questo archivio.

```
CFile* GetFile() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore costante `CFile` all'oggetto in uso.

### <a name="remarks"></a>Osservazioni

È necessario svuotare `GetFile`l'archivio prima di utilizzare .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#14](../../mfc/codesnippet/cpp/carchive-class_3.cpp)]

## <a name="carchivegetobjectschema"></a><a name="getobjectschema"></a>CArchive::GetObjectSchema

Chiamare questa funzione `Serialize` dalla funzione per determinare la versione dell'oggetto attualmente deserializzato.

```
UINT GetObjectSchema();
```

### <a name="return-value"></a>Valore restituito

Durante la deserializzazione, la versione dell'oggetto da leggere.

### <a name="remarks"></a>Osservazioni

La chiamata a questa `CArchive` funzione è valida solo quando l'oggetto viene caricato ( [CArchive::IsLoading](#isloading) restituisce diverso da zero). Dovrebbe essere la prima `Serialize` chiamata nella funzione e chiamata una sola volta. Un valore restituito di ( UINT)-1 indica che il numero di versione è sconosciuto.

Una `CObject`classe derivata può utilizzare VERSIONABLE_SCHEMA combinati (utilizzando **OR**bit per bit ) con la versione dello schema stesso `Serialize` (nella macro IMPLEMENT_SERIAL) per creare un "oggetto versionable", ovvero un oggetto la cui funzione membro può leggere più versioni. La funzionalità del framework predefinito (senza VERSIONABLE_SCHEMA) consiste nel generare un'eccezione quando la versione non corrisponde.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#15](../../mfc/codesnippet/cpp/carchive-class_4.cpp)]

## <a name="carchiveisbufferempty"></a><a name="isbufferempty"></a>CArchive::IsBufferEmpty

Chiamare questa funzione membro per determinare se il buffer interno dell'oggetto archivio è vuoto.

```
BOOL IsBufferEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il buffer dell'archivio è vuoto; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione viene fornita per supportare la `CSocketFile`programmazione con la classe MFC Windows Sockets . Non è necessario utilizzarlo per un `CFile` archivio associato a un oggetto.

Il motivo `IsBufferEmpty` per l'utilizzo `CSocketFile` con un archivio associato a un oggetto è che il buffer dell'archivio potrebbe contenere più di un messaggio o record. Dopo aver ricevuto un `IsBufferEmpty` messaggio, è necessario utilizzare per controllare un ciclo che continua a ricevere dati fino a quando il buffer è vuoto. Per ulteriori informazioni, [Receive](../../mfc/reference/casyncsocket-class.md#receive) vedere la `CAsyncSocket`funzione membro Receive `IsBufferEmpty`della classe , in cui viene illustrato come utilizzare .

Per ulteriori informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="carchiveisloading"></a><a name="isloading"></a>CArchive::IsLoading

Determina se l'archivio sta caricando i dati.

```
BOOL IsLoading() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'archivio è attualmente in uso per il caricamento; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene `Serialize` chiamata dalle funzioni delle classi archiviate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#16](../../mfc/codesnippet/cpp/carchive-class_5.cpp)]

## <a name="carchiveisstoring"></a><a name="isstoring"></a>CArchive::IsStoring

Determina se l'archivio sta archiviando i dati.

```
BOOL IsStoring() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'archivio è attualmente utilizzato per l'archiviazione; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene `Serialize` chiamata dalle funzioni delle classi archiviate.

Se `IsStoring` lo stato di un archivio `IsLoading` è diverso da zero, lo stato è 0 e viceversa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#17](../../mfc/codesnippet/cpp/carchive-class_6.cpp)]

## <a name="carchivemapobject"></a><a name="mapobject"></a>CArchive::MapObject

Chiamare questa funzione membro per inserire nella mappa gli oggetti che non sono realmente serializzati nel file, ma che sono disponibili per i sottooggetti a fare riferimento.

```cpp
void MapObject(const CObject* pOb);
```

### <a name="parameters"></a>Parametri

*Pob*<br/>
Puntatore costante all'oggetto archiviato.

### <a name="remarks"></a>Osservazioni

Ad esempio, è possibile che non si serializzi un documento, ma che si serializzino gli articoli che fanno parte del documento. Chiamando `MapObject`, è possibile consentire a tali elementi, o suboggetti, di fare riferimento al documento. Inoltre, gli elementi secondari serializzati possono serializzare il puntatore *all'm_pDocument* indietro.

È possibile `MapObject` chiamare quando si archivia e si carica dall'oggetto. `CArchive` `MapObject`aggiunge l'oggetto specificato alle strutture `CArchive` di dati interne gestite dall'oggetto durante la serializzazione e deserializzazione, ma a differenza di [ReadObject](#readobject) e [WriteObject](#writeobject), non chiama serialize sull'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#18](../../mfc/codesnippet/cpp/carchive-class_7.h)]

[!code-cpp[NVC_MFCSerialization#19](../../mfc/codesnippet/cpp/carchive-class_8.cpp)]

[!code-cpp[NVC_MFCSerialization#20](../../mfc/codesnippet/cpp/carchive-class_9.h)]

[!code-cpp[NVC_MFCSerialization#21](../../mfc/codesnippet/cpp/carchive-class_10.cpp)]

## <a name="carchivem_pdocument"></a><a name="m_pdocument"></a>CArchive::m_pDocument

Impostare su NULL per impostazione predefinita, questo puntatore a un `CDocument` può essere impostato su qualsiasi elemento dell'utente dell'istanza `CArchive` desidera.

```
CDocument* m_pDocument;
```

### <a name="remarks"></a>Osservazioni

Un utilizzo comune di questo puntatore consiste nel fornire informazioni aggiuntive sul processo di serializzazione a tutti gli oggetti in fase di serializzazione. Ciò si ottiene inizializzando il puntatore con il documento (una `CDocument`classe derivata) che viene serializzato, in modo che gli oggetti all'interno del documento possono accedere al documento, se necessario. Questo puntatore viene `COleClientItem` utilizzato anche dagli oggetti durante la serializzazione.

Il framework imposta *m_pDocument* al documento da serializzare quando un utente invia un comando Apri file o Salva. Se si serializza un documento contenitore OLE (Object Linking and Embedding) per motivi diversi da Apri o Salva file, è necessario impostare in modo esplicito *m_pDocument*. Ad esempio, è necessario eseguire questa operazione durante la serializzazione di un documento contenitore negli Appunti.For example, you would do this when serializing a container document to the Clipboard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#35](../../mfc/codesnippet/cpp/carchive-class_11.cpp)]

## <a name="carchiveoperator-ltlt"></a><a name="operator_lt_lt"></a>CArchive::operatore&lt;&lt;

Archivia l'oggetto o il tipo primitivo indicato nell'archivio.

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

Un `CArchive` riferimento che consente più operatori di inserimento su una singola riga.

### <a name="remarks"></a>Osservazioni

Le ultime due versioni precedenti sono specifiche per l'archiviazione di numeri interi a 64 bit.

Se è stata utilizzata la macro IMPLEMENT_SERIAL nell'implementazione `CObject` della `WriteObject`classe, l'operatore di inserimento di overload per chiama protected . Questa funzione, a sua `Serialize` volta, chiama la funzione della classe.

L'operatore di inserimento [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) (<<) supporta il dump diagnostico e l'archiviazione in un archivio.

### <a name="example"></a>Esempio

In questo esempio viene `CArchive` illustrato l'utilizzo dell'operatore di inserimento << con i tipi **int** e **long.**

[!code-cpp[NVC_MFCSerialization#31](../../mfc/codesnippet/cpp/carchive-class_12.cpp)]

### <a name="example"></a>Esempio

In questo esempio 2 `CArchive` viene illustrato l'utilizzo dell'operatore di inserimento << con il `CStringT` tipo.

[!code-cpp[NVC_MFCSerialization#32](../../mfc/codesnippet/cpp/carchive-class_13.cpp)]

## <a name="carchiveoperator-gtgt"></a><a name="operator_gt_gt"></a>CArchive::operatore&gt;&gt;

Carica l'oggetto indicato o il tipo primitivo dall'archivio.

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

Un `CArchive` riferimento che abilita più operatori di estrazione su una singola riga.

### <a name="remarks"></a>Osservazioni

Le ultime due versioni precedenti sono specifiche per il caricamento di numeri interi a 64 bit.

Se è stata utilizzata la IMPLEMENT_SERIAL macro nell'implementazione `CObject` della `ReadObject` classe, gli operatori di estrazione in overload per chiamare la funzione protetta (con un puntatore di classe di runtime diverso da zero). Questa funzione, a sua `Serialize` volta, chiama la funzione della classe.

L'operatore di estrazione [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) (>>) supporta il caricamento da un archivio.

### <a name="example"></a>Esempio

In questo esempio viene `CArchive` illustrato l'utilizzo dell'operatore di estrazione >> con il tipo **int.**

[!code-cpp[NVC_MFCSerialization#33](../../mfc/codesnippet/cpp/carchive-class_14.cpp)]

### <a name="example"></a>Esempio

In questo esempio viene `CArchive` illustrato l'utilizzo degli operatori di inserimento ed estrazione <\< e >> con il `CStringT` tipo.

[!code-cpp[NVC_MFCSerialization#34](../../mfc/codesnippet/cpp/carchive-class_15.cpp)]

## <a name="carchiveread"></a><a name="read"></a>CArchive::Lettura

Legge un numero specificato di byte dall'archivio.

```
UINT Read(void* lpBuf, UINT nMax);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore a un buffer fornito dall'utente che deve ricevere i dati letti dall'archivio.

*Nmax*<br/>
Un numero intero senza segno che specifica il numero di byte da leggere dall'archivio.

### <a name="return-value"></a>Valore restituito

Un intero senza segno contenente il numero di byte effettivamente letti. Se il valore restituito è inferiore al numero richiesto, è stata raggiunta la fine del file. Non viene generata alcuna eccezione nella condizione di fine file.

### <a name="remarks"></a>Osservazioni

L'archivio non interpreta i byte.

È possibile `Read` utilizzare la `Serialize` funzione membro all'interno della funzione per la lettura di strutture ordinarie contenute negli oggetti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#24](../../mfc/codesnippet/cpp/carchive-class_16.cpp)]

## <a name="carchivereadclass"></a><a name="readclass"></a>CArchive::ReadClass

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
Puntatore a uno schema della classe di runtime archiviata in precedenza.

*pObTag (tag)*<br/>
Numero che fa riferimento al tag univoco di un oggetto. Utilizzato internamente dall'implementazione di [ReadObject](#readobject). Esposto solo per la programmazione avanzata; *pObTag* normalmente dovrebbe essere NULL.

### <a name="return-value"></a>Valore restituito

Puntatore alla struttura [CRuntimeClass.](../../mfc/reference/cruntimeclass-structure.md)

### <a name="remarks"></a>Osservazioni

Se *pClassRefRequested* non `ReadClass` è NULL, verifica che le informazioni sulla classe archiviate siano compatibili con la classe di runtime. Se non è compatibile, `ReadClass` genererà un [CArchiveException](../../mfc/reference/carchiveexception-class.md).

La classe di runtime deve utilizzare [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in `ReadClass` caso contrario, genererà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Se *pSchema* è NULL, lo schema della classe archiviata può essere recuperato chiamando [CArchive::GetObjectSchema](#getobjectschema); in <strong>\*</strong>caso contrario, *pSchema* conterrà lo schema della classe di runtime che è stato archiviato in precedenza.

È possibile utilizzare [SerializeClass](#serializeclass) anziché `ReadClass`, che gestisce sia la lettura che la scrittura del riferimento alla classe.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CArchive::WriteClass](#writeclass).

## <a name="carchivereadobject"></a><a name="readobject"></a>CArchive::ReadObject

Legge i dati oggetto dall'archivio e costruisce un oggetto del tipo appropriato.

```
CObject* ReadObject(const CRuntimeClass* pClass);
```

### <a name="parameters"></a>Parametri

*pClasse*<br/>
Puntatore costante alla struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) che corrisponde all'oggetto che si prevede di leggere.

### <a name="return-value"></a>Valore restituito

Un puntatore [CObject](../../mfc/reference/cobject-class.md) di cui deve essere eseguito il cast in modo sicuro nella classe derivata corretta utilizzando [CObject::IsKindOf](../../mfc/reference/cobject-class.md#iskindof).

### <a name="remarks"></a>Osservazioni

Questa funzione viene in `CArchive` genere **>>** chiamata dall'operatore di estrazione ( ) in overload per un [cObject](../../mfc/reference/cobject-class.md) puntatore. `ReadObject`, a sua `Serialize` volta, chiama la funzione della classe archiviata.

Se si specifica un parametro *pClass* diverso da zero, ottenuto dalla macro [RUNTIME_CLASS,](../../mfc/reference/run-time-object-model-services.md#runtime_class) la funzione verifica la classe in fase di esecuzione dell'oggetto archiviato. Si presuppone che sia stata utilizzata la macro IMPLEMENT_SERIAL nell'implementazione della classe.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CArchive::WriteObject](#writeobject).

## <a name="carchivereadstring"></a><a name="readstring"></a>CArchive::ReadString

Chiamare questa funzione membro per leggere i dati di `CArchive` testo in un buffer dal file associato all'oggetto.

```
BOOL ReadString(CString& rString);
LPTSTR ReadString(LPTSTR lpsz, UINT nMax);
```

### <a name="parameters"></a>Parametri

*rStringa*<br/>
Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) che conterrà la stringa risultante dopo la lettura dal file associato il CArchive oggetto.

*lpsz*<br/>
Specifica un puntatore a un buffer fornito dall'utente che riceverà una stringa di testo con terminazione null.

*Nmax*<br/>
Specifica il numero massimo di caratteri da leggere. Deve essere inferiore di uno rispetto alla dimensione del buffer *lpsz.*

### <a name="return-value"></a>Valore restituito

Nella versione che restituisce BOOL, TRUE se ha esito positivo; FALSE in caso contrario.

Nella versione che `LPTSTR`restituisce un oggetto , un puntatore al buffer contenente i dati di testo; NULL se è stata raggiunta la fine del file.

### <a name="remarks"></a>Osservazioni

Nella versione della funzione membro con il parametro *nMax,* il buffer limiterà fino a un limite di *nMax* - 1 caratteri. La lettura viene interrotta da una coppia di avanzamento riga ritorno a capo. I caratteri di nuova riga finali vengono sempre rimossi. In entrambi i casi viene aggiunto un carattere null (''0').

[CArchive::Read](#read) è disponibile anche per l'input in modalità testo, ma non termina in una coppia di avanzamento riga ritorno a capo.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CArchive::WriteString](#writestring).

## <a name="carchiveserializeclass"></a><a name="serializeclass"></a>CArchive::SerializeClass

Chiamare questa funzione membro quando si desidera archiviare e caricare le informazioni sulla versione di una classe base.

```cpp
void SerializeClass(const CRuntimeClass* pClassRef);
```

### <a name="parameters"></a>Parametri

*pClassRef (informazioni in base ai pClass*<br/>
Puntatore a un oggetto di classe di runtime per la classe base.

### <a name="remarks"></a>Osservazioni

`SerializeClass`legge o scrive il riferimento a `CArchive` una classe nell'oggetto, a seconda della direzione dell'oggetto `CArchive`. Utilizzare `SerializeClass` al posto di [ReadClass](#readclass) e [WriteClass](#writeclass) come un modo pratico per serializzare gli oggetti della classe base; `SerializeClass` richiede meno codice e meno parametri.

Analogamente, `ReadClass` `SerializeClass` verifica che le informazioni sulla classe archiviate siano compatibili con la classe di runtime. Se non è compatibile, `SerializeClass` genererà un [CArchiveException](../../mfc/reference/carchiveexception-class.md).

La classe di runtime deve utilizzare [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in `SerializeClass` caso contrario, genererà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Utilizzare la macro [di RUNTIME_CLASS](../../mfc/reference/run-time-object-model-services.md#runtime_class) per recuperare il valore del parametro *pRuntimeClass.* La classe base deve aver utilizzato la macro [IMPLEMENT_SERIAL.](../../mfc/reference/run-time-object-model-services.md#implement_serial)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#25](../../mfc/codesnippet/cpp/carchive-class_17.h)]

## <a name="carchivesetloadparams"></a><a name="setloadparams"></a>CArchive::SetLoadParams

Chiamare `SetLoadParams` quando si sta per leggere `CObject`un numero elevato di oggetti derivati da un archivio.

```cpp
void SetLoadParams(UINT nGrowBy = 1024);
```

### <a name="parameters"></a>Parametri

*nAcia di GrowBy*<br/>
Numero minimo di slot elemento da allocare se è necessario un aumento delle dimensioni.

### <a name="remarks"></a>Osservazioni

`CArchive`utilizza una matrice di carico per risolvere i riferimenti agli oggetti archiviati nell'archivio. `SetLoadParams`consente di impostare le dimensioni a cui cresce l'array di carico.

Non è `SetLoadParams` necessario chiamare dopo il caricamento di qualsiasi oggetto o dopo [mapObject](#mapobject) o [ReadObject](#readobject) viene chiamato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#26](../../mfc/codesnippet/cpp/carchive-class_18.h)]

## <a name="carchivesetobjectschema"></a><a name="setobjectschema"></a>CArchive::SetObjectSchema

Chiamare questa funzione membro per impostare lo schema dell'oggetto archiviato nell'oggetto archive su *nSchema*.

```cpp
void SetObjectSchema(UINT nSchema);
```

### <a name="parameters"></a>Parametri

*nSchema*<br/>
Specifica lo schema dell'oggetto.

### <a name="remarks"></a>Osservazioni

La chiamata successiva a [GetObjectSchema](#getobjectschema) restituirà il valore archiviato in *nSchema*.

Utilizzare `SetObjectSchema` per il controllo avanzato delle versioni; ad esempio, quando si desidera forzare una `Serialize` particolare versione da leggere in una funzione di una classe derivata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#27](../../mfc/codesnippet/cpp/carchive-class_19.cpp)]

## <a name="carchivesetstoreparams"></a><a name="setstoreparams"></a>CArchive::SetStoreParams

Utilizzare `SetStoreParams` quando si archivia un numero elevato di `CObject`oggetti derivati in un archivio.

```cpp
void SetStoreParams(UINT nHashSize = 2053, UINT nBlockSize = 128);
```

### <a name="parameters"></a>Parametri

*nHashSize (Dimensioni Hash)*<br/>
Dimensione della tabella hash per le mappe del puntatore a interfaccia. Dovrebbe essere un numero primo.

*nBlockSize (dimensioni di blocco)*<br/>
Specifica la granularità di allocazione della memoria per l'estensione dei parametri. Dovrebbe essere una potenza di 2 per le migliori prestazioni.

### <a name="remarks"></a>Osservazioni

`SetStoreParams`consente di impostare le dimensioni della tabella hash e il blocco della mappa utilizzato per identificare oggetti univoci durante il processo di serializzazione.

Non è `SetStoreParams` necessario chiamare dopo l'archiviazione di oggetti o dopo la chiamata a [MapObject](#mapobject) o [WriteObject.](#writeobject)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#26](../../mfc/codesnippet/cpp/carchive-class_18.h)]

## <a name="carchivewrite"></a><a name="write"></a>CArchive::Scrittura

Scrive un numero specificato di byte nell'archivio.

```cpp
void Write(const void* lpBuf, INT nMax);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Puntatore a un buffer fornito dall'utente che contiene i dati da scrivere nell'archivio.

*Nmax*<br/>
Un numero intero che specifica il numero di byte da scrivere nell'archivio.

### <a name="remarks"></a>Osservazioni

L'archivio non formatta i byte.

È possibile `Write` utilizzare la `Serialize` funzione membro all'interno della funzione per scrivere strutture ordinarie contenute negli oggetti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#23](../../mfc/codesnippet/cpp/carchive-class_20.cpp)]

## <a name="carchivewriteclass"></a><a name="writeclass"></a>CArchive::WriteClass

Utilizzare `WriteClass` per archiviare le informazioni sulla versione e sulla classe di una classe base durante la serializzazione della classe derivata.

```cpp
void WriteClass(const CRuntimeClass* pClassRef);
```

### <a name="parameters"></a>Parametri

*pClassRef (informazioni in base ai pClass*<br/>
Puntatore alla struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) che corrisponde al riferimento alla classe richiesto.

### <a name="remarks"></a>Osservazioni

`WriteClass`scrive un riferimento a [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) per `CArchive`la classe base all'oggetto . Utilizzare [CArchive::ReadClass](#readclass) per recuperare il riferimento.

`WriteClass`verifica che le informazioni sulla classe archiviate siano compatibili con la classe di runtime. Se non è compatibile, `WriteClass` genererà un [CArchiveException](../../mfc/reference/carchiveexception-class.md).

La classe di runtime deve utilizzare [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in `WriteClass` caso contrario, genererà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

È possibile utilizzare [SerializeClass](#serializeclass) anziché `WriteClass`, che gestisce sia la lettura che la scrittura del riferimento alla classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#28](../../mfc/codesnippet/cpp/carchive-class_21.cpp)]

## <a name="carchivewriteobject"></a><a name="writeobject"></a>Archivio::WriteObject

Archivia `CObject` l'oggetto specificato nell'archivio.

```cpp
void WriteObject(const CObject* pOb);
```

### <a name="parameters"></a>Parametri

*Pob*<br/>
Puntatore costante all'oggetto archiviato.

### <a name="remarks"></a>Osservazioni

Questa funzione viene in `CArchive` genere **<<** chiamata dall'operatore di inserimento ( ) di overload per `CObject`. `WriteObject`, a sua `Serialize` volta, chiama la funzione della classe archiviata.

È necessario utilizzare la macro IMPLEMENT_SERIAL per abilitare l'archiviazione. `WriteObject`scrive il nome della classe ASCII nell'archivio. Questo nome di classe viene convalidato in un secondo momento durante il processo di caricamento. Uno schema di codifica speciale impedisce la duplicazione non necessaria del nome della classe per più oggetti della classe. Questo schema impedisce inoltre l'archiviazione ridondante di oggetti che sono destinazioni di più di un puntatore.

L'esatto metodo di codifica degli oggetti (inclusa la presenza del nome della classe ASCII) è un dettaglio di implementazione e potrebbe cambiare nelle versioni future della libreria.

> [!NOTE]
> Completare la creazione, l'eliminazione e l'aggiornamento di tutti gli oggetti prima di iniziare ad archiviarli. L'archivio verrà danneggiato se si combina l'archiviazione con la modifica dell'oggetto.

### <a name="example"></a>Esempio

Per una definizione `CAge`della classe , vedere l'esempio per [CObList::CObList](../../mfc/reference/coblist-class.md#coblist).

[!code-cpp[NVC_MFCSerialization#29](../../mfc/codesnippet/cpp/carchive-class_22.cpp)]

## <a name="carchivewritestring"></a><a name="writestring"></a>CArchive::WriteString

Utilizzare questa funzione membro per scrivere dati da `CArchive` un buffer nel file associato all'oggetto.

```cpp
void WriteString(LPCTSTR lpsz);
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
Specifica un puntatore a un buffer contenente una stringa di testo con terminazione null.

### <a name="remarks"></a>Osservazioni

Il carattere di terminazione null (''0') non viene scritto nel file; né viene scritta automaticamente una nuova riga.

`WriteString`genera un'eccezione in risposta a diverse condizioni, inclusa la condizione del disco-pieno.

`Write`è anche disponibile, ma anziché terminare con un carattere null, scrive il numero di byte richiesto nel file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#30](../../mfc/codesnippet/cpp/carchive-class_23.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Classe CSocket](../../mfc/reference/csocket-class.md)<br/>
[Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
