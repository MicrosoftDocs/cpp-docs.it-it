---
title: Classe CArchive | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ed01b2500beeccd5ffdd351b569864e79ad370c7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46433557"
---
# <a name="carchive-class"></a>Classe CArchive

Consente di salvare una rete complessa di oggetti in una forma binaria permanente (in genere archiviazione su disco) che persiste dopo l'eliminazione di tali oggetti.

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
|[CArchive::Close](#close)|Svuota i dati non scritte e si disconnette dal `CFile`.|
|[CArchive::Flush](#flush)|Scarica i dati non scritte dal buffer di archiviazione.|
|[CArchive::GetFile](#getfile)|Ottiene il `CFile` puntatore all'oggetto per questo archivio.|
|[CArchive::GetObjectSchema](#getobjectschema)|Chiamato dal `Serialize` funzione per determinare la versione dell'oggetto da deserializzare.|
|[CArchive::IsBufferEmpty](#isbufferempty)|Determina se il buffer è stato svuotato un socket di Windows durante il processo di ricezione.|
|[CArchive::IsLoading](#isloading)|Determina se l'archivio sta caricando.|
|[CArchive::IsStoring](#isstoring)|Determina se l'archivio è l'archiviazione.|
|[CArchive::MapObject](#mapobject)|Inserisce gli oggetti della mappa che non vengono serializzate per il file, ma che sono disponibili per i sottoggetti a cui fare riferimento.|
|[CArchive::Read](#read)|Legge i byte non elaborati.|
|[CArchive::ReadClass](#readclass)|Un riferimento alla classe archiviato in precedenza con le letture `WriteClass`.|
|[CArchive::ReadObject](#readobject)|Chiama un oggetto `Serialize` funzione per il caricamento.|
|[CArchive::ReadString](#readstring)|Legge una singola riga di testo.|
|[CArchive::SerializeClass](#serializeclass)|Legge o scrive il riferimento alla classe per il `CArchive` a seconda della direzione dell'oggetto di `CArchive`.|
|[CArchive::SetLoadParams](#setloadparams)|Imposta la dimensione alla quale si espande la matrice di carico. Deve essere chiamato prima di qualsiasi oggetto caricato o prima `MapObject` o `ReadObject` viene chiamato.|
|[CArchive::SetObjectSchema](#setobjectschema)|Imposta lo schema dell'oggetto archiviato nell'oggetto archivio.|
|[CArchive::SetStoreParams](#setstoreparams)|Imposta le dimensioni della tabella hash e la dimensione del blocco di mappa utilizzata per identificare oggetti univoci durante il processo di serializzazione.|
|[CArchive::Write](#write)|Scrive i byte non elaborati.|
|[CArchive::WriteClass](#writeclass)|Scrive un riferimento per la `CRuntimeClass` per il `CArchive`.|
|[CArchive::WriteObject](#writeobject)|Chiama un oggetto `Serialize` funzione per l'archiviazione.|
|[CArchive::WriteString](#writestring)|Scrive una singola riga di testo.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArchive::operator &lt;&lt;](#operator_lt_lt)|Archivia gli oggetti e tipi primitivi all'archivio.|
|[CArchive::operator &gt;&gt;](#operator_gt_gt)|Carica gli oggetti e tipi primitivi dall'archivio.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArchive::m_pDocument](#m_pdocument)||

## <a name="remarks"></a>Note

`CArchive` non è una classe di base.

In un secondo momento è possibile caricare gli oggetti da un archivio permanente, li ricostituzione in memoria. Questo processo di rendere persistenti i dati è denominato "serializzazione".

È possibile considerare un oggetto di archiviazione come un tipo di flusso di dati binari. Ad esempio un flusso di input/output, un archivio è associato un file e consente la scrittura memorizzato nel buffer e lettura dei dati da e verso archiviazione. Un flusso di input/output elabora le sequenze di caratteri ASCII, ma un archivio elabora dati di oggetti binari in un formato nonredundant ed efficiente.

È necessario creare un [CFile](../../mfc/reference/cfile-class.md) dell'oggetto prima di poter creare un `CArchive` oggetto. Inoltre, è necessario assicurarsi che lo stato di caricamento/archiviazione dell'archivio è compatibile con la modalità di apertura. Si è limitati a un archivio attivo per ogni file.

Quando si costruisce una `CArchive` dell'oggetto, collegarlo a un oggetto della classe `CFile` (o una classe derivata) che rappresenta un file aperto. È inoltre possibile specificare se l'archivio verrà utilizzato per il caricamento o l'archiviazione. Oggetto `CArchive` oggetto può elaborare non solo i tipi primitivi, ma anche gli oggetti di [CObject](../../mfc/reference/cobject-class.md)-progettate per la serializzazione di classi derivate. Una classe serializzabile ha in genere un `Serialize` funzione membro e Usa in genere il [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) macro, come descritto nella classe `CObject`.

L'estrazione di overload ( **>>**) e l'inserimento ( **<<**) gli operatori sono interfacce di programmazione archivio pratico che supportano entrambi i tipi primitivi e `CObject` -le classi derivate.

`CArchive` supporta anche la programmazione con le classi MFC Windows Sockets [CSocket](../../mfc/reference/csocket-class.md) e [CSocketFile](../../mfc/reference/csocketfile-class.md). Il [IsBufferEmpty](#isbufferempty) supporta la funzione membro che l'utilizzo.

Per ulteriori informazioni sul `CArchive`, vedere gli articoli [serializzazione](../../mfc/serialization-in-mfc.md) e [Windows Sockets: uso di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CArchive`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="abort"></a>  CArchive::Abort

Chiamare questa funzione per chiudere l'archivio senza generare un'eccezione.

```
void Abort ();
```

### <a name="remarks"></a>Note

Il `CArchive` distruttore normalmente chiamerà `Close`, che scarica tutti i dati che non sono stati salvati l'oggetto associato `CFile` oggetto. Ciò può causare eccezioni.

Quando l'intercettazione di queste eccezioni, è consigliabile usare `Abort`, in modo che distruzione di `CArchive` oggetto non causa ulteriori eccezioni. Quando la gestione delle eccezioni, `CArchive::Abort` non viene generata un'eccezione in caso di errori perché, a differenza [CArchive::Close](#close), `Abort` ignora gli errori.

Se è stata usata **nuove** allocare il `CArchive` oggetto sull'heap, è necessario eliminarlo dopo la chiusura del file.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CArchive::WriteClass](#writeclass).

##  <a name="carchive"></a>  CArchive::CArchive

Costruisce un `CArchive` dell'oggetto e specifica se deve essere utilizzato per il caricamento o l'archiviazione di oggetti.

```
CArchive(
    CFile* pFile,
    UINT nMode,
    int nBufSize = 4096,
    void* lpBuf = NULL);
```

### <a name="parameters"></a>Parametri

*pFile*<br/>
Un puntatore al `CFile` oggetto, ovvero l'origine ultimate o la destinazione dei dati persistenti.

*nMode*<br/>
Un flag che specifica se gli oggetti verranno caricati da o archiviati nell'archivio. Il *nMode* parametro deve avere uno dei valori seguenti:

- `CArchive::load` Carica i dati dall'archivio. Richiede solo `CFile` l'autorizzazione di lettura.

- `CArchive::store` Salva i dati dell'archivio. Richiede `CFile` l'autorizzazione di scrittura.

- `CArchive::bNoFlushOnDelete` Impedisce che la chiamata automatica dell'archivio `Flush` quando viene chiamato il distruttore di archivio. Se si imposta questo flag, l'utente è responsabile per chiamare in modo esplicito `Close` prima che venga chiamato il distruttore. In caso contrario, i dati verranno danneggiati.

*nBufSize*<br/>
Valore intero che specifica la dimensione del buffer di file interno, in byte. Si noti che le dimensioni predefinite del buffer sono di 4.096 byte. Se si archiviano regolarmente oggetti di grandi dimensioni, si migliorerà le prestazioni se si usano dimensioni maggiori del buffer che è un multiplo delle dimensioni del buffer di file.

*lpBuf*<br/>
Un puntatore a un buffer di dimensione fornito dall'utente facoltativo *nBufSize*. Se non si specifica questo parametro, l'archivio alloca un buffer dall'heap locale e quindi resta libero quando l'oggetto viene eliminato. L'archivio non libera un buffer fornito dall'utente.

### <a name="remarks"></a>Note

Dopo aver creato l'archivio, è possibile modificare questa specifica.

Non è possibile usare `CFile` operazioni per modificare lo stato del file fino a quando non è stato chiuso l'archivio. Qualsiasi operazione di questo tipo verrà danneggiato l'integrità dell'archivio. Si può accedere alla posizione del puntatore del file in qualsiasi momento durante la serializzazione ottenendo l'oggetto di file dell'archivio dal [GetFile](#getfile) funzione membro e quindi usando la [CFile::GetPosition](../../mfc/reference/cfile-class.md#getposition) (funzione) . È necessario chiamare [CArchive::Flush](#flush) prima di ottenere la posizione del puntatore del file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#12](../../mfc/codesnippet/cpp/carchive-class_1.cpp)]

##  <a name="close"></a>  CArchive::Close

Scarica i dati rimanenti nel buffer, chiude l'archivio e disconnette l'archivio dal file.

```
void Close();
```

### <a name="remarks"></a>Note

Non altre operazioni su archivio sono consentite. Dopo la chiusura di un archivio, è possibile creare un altro archivio per lo stesso file o è possibile chiudere il file.

La funzione membro `Close` assicura che tutti i dati vengono trasferiti dall'archivio al file e lo rende non disponibile nell'archivio. Per completare il trasferimento dal file di supporto di archiviazione, è innanzitutto necessario utilizzare [CFile::Close](../../mfc/reference/cfile-class.md#close) e quindi eliminare il `CFile` oggetto.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CArchive::WriteString](#writestring).

##  <a name="flush"></a>  CArchive::Flush

Forza i dati rimanenti nel buffer di archiviazione in cui scrivere il file.

```
void Flush();
```

### <a name="remarks"></a>Note

La funzione membro `Flush` assicura che tutti i dati vengono trasferiti dall'archivio al file. È necessario chiamare [CFile::Close](../../mfc/reference/cfile-class.md#close) per completare il trasferimento del file per il supporto di archiviazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#13](../../mfc/codesnippet/cpp/carchive-class_2.cpp)]

##  <a name="getfile"></a>  CArchive::GetFile

Ottiene il `CFile` puntatore all'oggetto per questo archivio.

```
CFile* GetFile() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore costante al `CFile` oggetto in uso.

### <a name="remarks"></a>Note

È necessario scaricare l'archivio prima di usare `GetFile`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#14](../../mfc/codesnippet/cpp/carchive-class_3.cpp)]

##  <a name="getobjectschema"></a>  CArchive::GetObjectSchema

Chiamare questa funzione dal `Serialize` funzione per determinare la versione dell'oggetto che è attualmente in corso la deserializzazione.

```
UINT GetObjectSchema();
```

### <a name="return-value"></a>Valore restituito

Durante la deserializzazione, la versione dell'oggetto da leggere.

### <a name="remarks"></a>Note

Chiamare questa funzione è valida solo quando la `CArchive` viene caricato oggetto ( [CArchive::IsLoading](#isloading) restituisce diverso da zero). Deve essere la prima chiamata nel `Serialize` (funzione) e chiamato una sola volta. Un valore restituito (UINT) -1 indica che il numero di versione è sconosciuto.

Oggetto `CObject`-classe derivata può usare VERSIONABLE_SCHEMA combinati (con OR bit per bit **oppure**) con la versione dello schema (in IMPLEMENT_SERIAL (macro)) per creare un "autodescrittivo object", vale a dire, un oggetto il cui `Serialize` funzione membro può leggere più versioni. Funzionalità del framework predefinito (senza VERSIONABLE_SCHEMA) consiste nel generare un'eccezione quando la versione corrispondente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#15](../../mfc/codesnippet/cpp/carchive-class_4.cpp)]

##  <a name="isbufferempty"></a>  CArchive::IsBufferEmpty

Chiamare questa funzione membro per determinare se buffer interno dell'oggetto archivio è vuoto.

```
BOOL IsBufferEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il buffer dell'archivio è vuoto. in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione viene fornita per supportare la programmazione con la classe MFC Windows Sockets `CSocketFile`. Non è necessario usarlo per un archivio associato un `CFile` oggetto.

Il motivo per usare `IsBufferEmpty` con un archivio associato un `CSocketFile` oggetto è che i buffer dell'archivio può contenere più di un messaggio o i record. Dopo aver ricevuto un messaggio, è consigliabile usare `IsBufferEmpty` per controllare un ciclo che continua a ricevere i dati fino a quando il buffer è vuoto. Per altre informazioni, vedere la [Receive](../../mfc/reference/casyncsocket-class.md#receive) la funzione membro della classe `CAsyncSocket`, che mostra come usare `IsBufferEmpty`.

Per altre informazioni, vedere [Windows Sockets: uso di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="isloading"></a>  CArchive::IsLoading

Determina se l'archivio sta caricando dati.

```
BOOL IsLoading() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'archivio è attualmente in uso per il caricamento; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal `Serialize` funzioni delle classi archiviate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#16](../../mfc/codesnippet/cpp/carchive-class_5.cpp)]

##  <a name="isstoring"></a>  CArchive::IsStoring

Determina se l'archivio è l'archiviazione dei dati.

```
BOOL IsStoring() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'archivio è attualmente in uso per l'archiviazione; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal `Serialize` funzioni delle classi archiviate.

Se il `IsStoring` lo stato di un archivio è diverso da zero, quindi relativo `IsLoading` status = 0 e viceversa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#17](../../mfc/codesnippet/cpp/carchive-class_6.cpp)]

##  <a name="mapobject"></a>  CArchive::MapObject

Chiamare questa funzione membro per posizionare gli oggetti della mappa che non sono effettivamente serializzati per il file, ma che sono disponibili per i sottoggetti a cui fare riferimento.

```
void MapObject(const CObject* pOb);
```

### <a name="parameters"></a>Parametri

*casella postale*<br/>
Un puntatore costante per l'oggetto archiviato.

### <a name="remarks"></a>Note

Ad esempio, non è possibile serializzare un documento, ma è necessario serializzare gli elementi che fanno parte del documento. Chiamando `MapObject`, si consente a tali elementi, o oggetti secondari, per fare riferimento al documento. Inoltre, è possono serializzare gli elementi secondari serializzati loro *m_pDocument* puntatore all'indietro.

È possibile chiamare `MapObject` quando si archivia e caricare dal `CArchive` oggetto. `MapObject` Aggiunge l'oggetto specificato per le strutture dati interne cura il `CArchive` oggetto durante la serializzazione e deserializzazione, ma a differenza [ReadObject](#readobject) e [WriteObject](#writeobject), non effettua una chiamata serializzazione dell'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#18](../../mfc/codesnippet/cpp/carchive-class_7.h)]

[!code-cpp[NVC_MFCSerialization#19](../../mfc/codesnippet/cpp/carchive-class_8.cpp)]

[!code-cpp[NVC_MFCSerialization#20](../../mfc/codesnippet/cpp/carchive-class_9.h)]

[!code-cpp[NVC_MFCSerialization#21](../../mfc/codesnippet/cpp/carchive-class_10.cpp)]

##  <a name="m_pdocument"></a>  CArchive::m_pDocument

Impostare su NULL per impostazione predefinita, questo puntatore a un `CDocument` può essere impostato su qualsiasi elemento all'utente del `CArchive` esperto di istanza.

```
CDocument* m_pDocument;
```

### <a name="remarks"></a>Note

Un utilizzo comune di questo puntatore è possibile fornire informazioni aggiuntive sul processo di serializzazione per tutti gli oggetti da serializzare. A questo scopo, inizializza il puntatore a una con il documento (un `CDocument`-classe derivata) che viene serializzata, in modo tale che gli oggetti all'interno del documento possono accedere al documento se necessario. Puntatore ' this ' viene usata anche dal `COleClientItem` oggetti durante la serializzazione.

I set di framework *m_pDocument* al documento serializzato quando un utente rilascia un File di aprire o salvare i comandi. Se si serializza un documento contenitore Object Linking and Embedding (OLE) per motivi diversi da File aperti o salvataggio, è necessario impostare esplicitamente *m_pDocument*. Ad esempio, si potrebbe eseguire questa operazione durante la serializzazione di un documento contenitore negli Appunti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#35](../../mfc/codesnippet/cpp/carchive-class_11.cpp)]

##  <a name="operator_lt_lt"></a>  CArchive::operator &lt;&lt;

Archivia l'oggetto indicato o tipo primitivo dell'archivio.

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

Oggetto `CArchive` riferimento che consente più agli operatori di inserimento in una singola riga.

### <a name="remarks"></a>Note

Le ultime due versioni precedenti sono riservati per l'archiviazione dei numeri interi a 64 bit.

Se usato nell'implementazione classe IMPLEMENT_SERIAL (macro), quindi sottoposto a overload l'operatore di inserimento per `CObject` chiama il metodo protetto `WriteObject`. Questa funzione, a sua volta, chiama il `Serialize` funzione della classe.

Il [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) operatore di inserimento (<<) supporta il dump di diagnostica e l'archiviazione in un archivio.

### <a name="example"></a>Esempio

In questo esempio viene illustrato l'utilizzo dei `CArchive` operatore di inserimento << con il **int** e **long** tipi.

[!code-cpp[NVC_MFCSerialization#31](../../mfc/codesnippet/cpp/carchive-class_12.cpp)]

### <a name="example"></a>Esempio

2 in questo esempio viene illustrato l'utilizzo dei `CArchive` operatore di inserimento << con il `CStringT` tipo.

[!code-cpp[NVC_MFCSerialization#32](../../mfc/codesnippet/cpp/carchive-class_13.cpp)]

##  <a name="operator_gt_gt"></a>  CArchive::operator &gt;&gt;

Carica l'oggetto specificato o tipo primitivo dall'archivio.

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

Oggetto `CArchive` riferimento che consente più agli operatori di estrazione in un'unica riga.

### <a name="remarks"></a>Note

Le ultime due versioni precedenti sono riservati per il caricamento di interi a 64 bit.

Se usato nell'implementazione classe IMPLEMENT_SERIAL (macro), quindi sottoposto a overload gli operatori di estrazione per `CObject` chiamare il metodo protetto `ReadObject` (funzione) (con un puntatore a una classe in fase di esecuzione diverso da zero). Questa funzione, a sua volta, chiama il `Serialize` funzione della classe.

Il [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) operatore di estrazione (>>) supporta il caricamento da un archivio.

### <a name="example"></a>Esempio

In questo esempio viene illustrato l'utilizzo dei `CArchive` operatore di estrazione >> con il **int** tipo.

[!code-cpp[NVC_MFCSerialization#33](../../mfc/codesnippet/cpp/carchive-class_14.cpp)]

### <a name="example"></a>Esempio

In questo esempio viene illustrato l'utilizzo dei `CArchive` gli operatori di inserimento ed estrazione <\< e >> con il `CStringT` tipo.

[!code-cpp[NVC_MFCSerialization#34](../../mfc/codesnippet/cpp/carchive-class_15.cpp)]

##  <a name="read"></a>  CArchive::Read

Legge un numero di byte specificato dall'archivio.

```
UINT Read(void* lpBuf, UINT nMax);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Un puntatore a un buffer fornito dall'utente che sta per ricevere i dati letti dall'archivio.

*nMax*<br/>
Intero senza segno che specifica il numero di byte da leggere dall'archivio.

### <a name="return-value"></a>Valore restituito

Intero senza segno contenente il numero di byte effettivamente letti. Se il valore restituito è minore del numero di richieste, la fine del file è stato raggiunto. Nella condizione di fine del file, viene generata alcuna eccezione.

### <a name="remarks"></a>Note

L'archivio non interpreta i byte.

È possibile usare la `Read` funzione di membro all'interno di `Serialize` funzione per la lettura delle strutture comuni che sono contenute negli oggetti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#24](../../mfc/codesnippet/cpp/carchive-class_16.cpp)]

##  <a name="readclass"></a>  CArchive::ReadClass

Chiamare questa funzione membro per leggere un riferimento a una classe in precedenza archiviato con [WriteClass](#writeclass).

```
CRuntimeClass* ReadClass(
    const CRuntimeClass* pClassRefRequested = NULL,
    UINT* pSchema = NULL,
    DWORD* pObTag = NULL);
```

### <a name="parameters"></a>Parametri

*pClassRefRequested*<br/>
Un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura corrispondente per il riferimento alla classe richiesta. Può essere NULL.

*pSchema*<br/>
Un puntatore a uno schema della classe in fase di esecuzione memorizzato in precedenza.

*pObTag*<br/>
Numero che fa riferimento a tag univoco dell'oggetto. Utilizzato internamente dall'implementazione di [ReadObject](#readobject). Esposto per la programmazione avanzata di sola lettura. *pObTag* in genere deve essere NULL.

### <a name="return-value"></a>Valore restituito

Un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura.

### <a name="remarks"></a>Note

Se *pClassRefRequested* non è NULL, `ReadClass` verifica che le informazioni sulla classe archiviati sia compatibile con la classe di runtime. Se non è compatibile, `ReadClass` genererà un [CArchiveException](../../mfc/reference/carchiveexception-class.md).

È necessario usare la classe di runtime [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in caso contrario, `ReadClass` genererà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Se *pSchema* è NULL, lo schema della classe archiviato può essere recuperato chiamando [CArchive::GetObjectSchema](#getobjectschema); in caso contrario, <strong>\*</strong>  *pSchema* conterrà lo schema della classe in fase di esecuzione che è stato archiviato in precedenza.

È possibile usare [SerializeClass](#serializeclass) invece di `ReadClass`, che gestisce la lettura e scrittura del riferimento alla classe.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CArchive::WriteClass](#writeclass).

##  <a name="readobject"></a>  CArchive::ReadObject

Legge i dati oggetto dall'archivio e costruisce un oggetto del tipo appropriato.

```
CObject* ReadObject(const CRuntimeClass* pClass);
```

### <a name="parameters"></a>Parametri

*pClass*<br/>
Un puntatore costante al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura che corrisponde all'oggetto prevista la lettura.

### <a name="return-value"></a>Valore restituito

Oggetto [CObject](../../mfc/reference/cobject-class.md) puntatore che deve essere eseguito il cast per i valori corretti di classe derivata utilizzando [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof).

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata dal `CArchive` estrazione ( **>>**) per l'overload dell'operatore una [CObject](../../mfc/reference/cobject-class.md) puntatore. `ReadObject`, a sua volta, chiama il `Serialize` funzione della classe archiviata.

Se si fornisce un diverso da zero *pClass* parametro, ottenuta tramite il [RUNTIME_CLASS](../../mfc/reference/run-time-object-model-services.md#runtime_class) (macro), quindi la funzione verifica la classe di runtime dell'oggetto archiviato. Ciò presuppone che sia stato usato l'IMPLEMENT_SERIAL (macro) nell'implementazione della classe.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CArchive::WriteObject](#writeobject).

##  <a name="readstring"></a>  CArchive::ReadString

Chiamare questa funzione membro per leggere i dati di testo in un buffer dal file di cui è associato il `CArchive` oggetto.

```
BOOL ReadString(CString& rString);
LPTSTR ReadString(LPTSTR lpsz, UINT nMax);
```

### <a name="parameters"></a>Parametri

*rString*<br/>
Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) che conterrà la stringa risultante dopo la lettura dal file associato all'oggetto CArchive.

*lpsz*<br/>
Specifica un puntatore a un buffer fornito dall'utente che riceverà una stringa di testo con terminazione null.

*nMax*<br/>
Specifica il numero massimo di caratteri da leggere. Deve essere una minore delle dimensioni dei *lpsz* buffer.

### <a name="return-value"></a>Valore restituito

Nella versione che restituisce TRUE se ha esito positivo; BOOL, FALSE in caso contrario.

Nella versione che restituisce un `LPTSTR`, un puntatore al buffer che contiene i dati di testo; NULL se è stata raggiunta la fine del file.

### <a name="remarks"></a>Note

Nella versione della funzione membro con il *nMax* parametro, verranno memorizzate nel buffer un limite di *nMax* - 1 caratteri. Viene arrestata la lettura da una coppia di ritorno a capo con avanzamento di riga. I caratteri di nuova riga finali vengono sempre rimossi. In entrambi i casi viene aggiunto un carattere null ('\0').

[CArchive::Read](#read) è disponibile anche per l'input in modalità testo, ma non termina con una coppia di ritorno a capo con avanzamento di riga.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CArchive::WriteString](#writestring).

##  <a name="serializeclass"></a>  CArchive::SerializeClass

Chiamare questa funzione membro quando si desidera archiviare e caricare le informazioni sulla versione di una classe base.

```
void SerializeClass(const CRuntimeClass* pClassRef);
```

### <a name="parameters"></a>Parametri

*pClassRef*<br/>
Un puntatore a un oggetto classe di runtime per la classe di base.

### <a name="remarks"></a>Note

`SerializeClass` legge o scrive il riferimento a una classe per il `CArchive` oggetti, a seconda della direzione del `CArchive`. Uso `SerializeClass` al posto di [ReadClass](#readclass) e [WriteClass](#writeclass) come un modo pratico per serializzare gli oggetti della classe di base; `SerializeClass` richiede meno codice e meno parametri.

Ad esempio `ReadClass`, `SerializeClass` verifica che le informazioni sulla classe archiviati sia compatibile con la classe di runtime. Se non è compatibile, `SerializeClass` genererà un [CArchiveException](../../mfc/reference/carchiveexception-class.md).

È necessario usare la classe di runtime [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in caso contrario, `SerializeClass` genererà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Usare la [RUNTIME_CLASS](../../mfc/reference/run-time-object-model-services.md#runtime_class) macro da recuperare il valore per il *pRuntimeClass* parametro. La classe di base deve essere utilizzato il [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) macro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#25](../../mfc/codesnippet/cpp/carchive-class_17.h)]

##  <a name="setloadparams"></a>  CArchive::SetLoadParams

Chiamare `SetLoadParams` quando si desidera leggere un numero elevato di `CObject`-oggetti derivati da un archivio.

```
void SetLoadParams(UINT nGrowBy = 1024);
```

### <a name="parameters"></a>Parametri

*nGrowBy*<br/>
Il numero minimo di slot di elemento per allocare se è necessario un aumento delle dimensioni.

### <a name="remarks"></a>Note

`CArchive` Usa una matrice di carico per risolvere i riferimenti agli oggetti archiviati nell'archivio. `SetLoadParams` Consente di impostare la dimensione alla quale si espande la matrice di carico.

Non è necessario chiamare `SetLoadParams` dopo il caricamento di qualsiasi oggetto, o dopo [MapObject](#mapobject) oppure [ReadObject](#readobject) viene chiamato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#26](../../mfc/codesnippet/cpp/carchive-class_18.h)]

##  <a name="setobjectschema"></a>  CArchive::SetObjectSchema

Chiamare questa funzione membro per impostare lo schema dell'oggetto archiviato nell'oggetto archivio al *nSchema*.

```
void SetObjectSchema(UINT nSchema);
```

### <a name="parameters"></a>Parametri

*nSchema*<br/>
Specifica lo schema dell'oggetto.

### <a name="remarks"></a>Note

La chiamata successiva a [GetObjectSchema](#getobjectschema) restituirà il valore archiviato in *nSchema*.

Uso `SetObjectSchema` per il controllo delle versioni avanzata, ad esempio, quando si desidera imporre una determinata versione da leggere in un `Serialize` funzione di una classe derivata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#27](../../mfc/codesnippet/cpp/carchive-class_19.cpp)]

##  <a name="setstoreparams"></a>  CArchive::SetStoreParams

Uso `SetStoreParams` durante l'archiviazione di un numero elevato di `CObject`-oggetti in un archivio derivati.

```
void SetStoreParams(UINT nHashSize = 2053, UINT nBlockSize = 128);
```

### <a name="parameters"></a>Parametri

*nHashSize*<br/>
Le dimensioni della tabella hash di puntatore a interfaccia viene eseguito il mapping. Deve essere un numero primo.

*nBlockSize*<br/>
Specifica la granularità di allocazione della memoria per i parametri di estensione. Deve essere una potenza di 2 per ottenere prestazioni ottimali.

### <a name="remarks"></a>Note

`SetStoreParams` Consente di impostare le dimensioni della tabella hash e la dimensione del blocco di mappa utilizzata per identificare oggetti univoci durante il processo di serializzazione.

Non è necessario chiamare `SetStoreParams` dopo che tutti gli oggetti vengono archiviati, o dopo [MapObject](#mapobject) oppure [WriteObject](#writeobject) viene chiamato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#26](../../mfc/codesnippet/cpp/carchive-class_18.h)]

##  <a name="write"></a>  CArchive::Write

Scrive un numero specificato di byte all'archivio.

```
void Write(const void* lpBuf, INT nMax);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Un puntatore a un buffer fornito dall'utente che contiene i dati da scrivere nell'archivio.

*nMax*<br/>
Valore intero che specifica il numero di byte da scrivere nell'archivio.

### <a name="remarks"></a>Note

L'archivio non formatta i byte.

È possibile usare il `Write` funzione di membro all'interno di `Serialize` funzione per scrivere ordinario strutture che sono contenute negli oggetti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#23](../../mfc/codesnippet/cpp/carchive-class_20.cpp)]

##  <a name="writeclass"></a>  CArchive::WriteClass

Usare `WriteClass` per archiviare le informazioni di versione e la classe di una classe base durante la serializzazione della classe derivata.

```
void WriteClass(const CRuntimeClass* pClassRef);
```

### <a name="parameters"></a>Parametri

*pClassRef*<br/>
Un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura corrispondente per il riferimento alla classe richiesta.

### <a name="remarks"></a>Note

`WriteClass` Scrive un riferimento per la [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) per la classe base per il `CArchive`. Uso [CArchive::ReadClass](#readclass) per recuperare il riferimento.

`WriteClass` verifica che le informazioni sulla classe archiviati sia compatibile con la classe di runtime. Se non è compatibile, `WriteClass` genererà un [CArchiveException](../../mfc/reference/carchiveexception-class.md).

È necessario usare la classe di runtime [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in caso contrario, `WriteClass` genererà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

È possibile usare [SerializeClass](#serializeclass) invece di `WriteClass`, che gestisce la lettura e scrittura del riferimento alla classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#28](../../mfc/codesnippet/cpp/carchive-class_21.cpp)]

##  <a name="writeobject"></a>  CArchive::WriteObject

Archivia l'oggetto specificato `CObject` all'archivio.

```
void WriteObject(const CObject* pOb);
```

### <a name="parameters"></a>Parametri

*casella postale*<br/>
Un puntatore costante per l'oggetto archiviato.

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata dal `CArchive` inserimento ( **<<**) per l'overload dell'operatore `CObject`. `WriteObject`, a sua volta, chiama il `Serialize` funzione della classe archiviata.

Per abilitare l'archiviazione, è necessario utilizzare IMPLEMENT_SERIAL (macro). `WriteObject` Scrive il nome della classe ASCII all'archivio. Il nome della classe viene convalidato in un secondo momento durante il processo di caricamento. Uno schema di codifica speciale impedisce un'inutile duplicazione del nome della classe per più oggetti della classe. Questo schema impedisce inoltre l'archiviazione con ridondanza di oggetti che rappresentano destinazioni di più di un indicatore di misura.

L'esatto oggetto codifica metodo (inclusa la presenza del nome della classe ASCII) è un dettaglio di implementazione e potrebbe cambiare nelle future versioni della libreria.

> [!NOTE]
>  Completare la creazione, eliminazione e aggiornamento di tutti gli oggetti prima di iniziare a archiviarli. L'archivio risulterà danneggiato se si combinano l'archiviazione con modifica dell'oggetto.

### <a name="example"></a>Esempio

Per una definizione della classe `CAge`, vedere l'esempio relativo [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist).

[!code-cpp[NVC_MFCSerialization#29](../../mfc/codesnippet/cpp/carchive-class_22.cpp)]

##  <a name="writestring"></a>  CArchive::WriteString

Usare questa funzione membro per scrivere dati da un buffer per il file associato il `CArchive` oggetto.

```
void WriteString(LPCTSTR lpsz);
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
Specifica un puntatore a un buffer contenente una stringa di testo con terminazione null.

### <a name="remarks"></a>Note

Il carattere di terminazione null ('\0') non viene scritto il file. né un carattere di nuova riga vengono scritti automaticamente.

`WriteString` genera un'eccezione in risposta a diverse condizioni, tra cui la condizione di disco pieno.

`Write` è anche disponibile, ma anziché terminare il programma in un carattere null, scrive il numero di byte richiesto per il file.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSerialization#30](../../mfc/codesnippet/cpp/carchive-class_23.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Classe CSocket](../../mfc/reference/csocket-class.md)<br/>
[Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
