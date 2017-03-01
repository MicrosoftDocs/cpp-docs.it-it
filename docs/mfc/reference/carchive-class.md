---
title: CArchive (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CArchive
dev_langs:
- C++
helpviewer_keywords:
- I/O [MFC], archiving objects
- CArchive class
- serialization [C++], CArchive class
- storage [C++], CArchive class
- data storage [C++], CArchive class
ms.assetid: 9e950d23-b874-456e-ae4b-fe00781a7699
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 501b365678a45148aabe638ff341f3ae995e4ab5
ms.lasthandoff: 02/24/2017

---
# <a name="carchive-class"></a>CArchive (classe)
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
|[CArchive::Close](#close)|Scarica i dati e si disconnette dal `CFile`.|  
|[CArchive::Flush](#flush)|Scarica i dati dal buffer di archiviazione.|  
|[CArchive::GetFile](#getfile)|Ottiene il `CFile` puntatore a un oggetto per l'archiviazione.|  
|[CArchive::GetObjectSchema](#getobjectschema)|Chiamato dal `Serialize` funzione per determinare la versione dell'oggetto da deserializzare.|  
|[CArchive::IsBufferEmpty](#isbufferempty)|Determina se il buffer è stato svuotato un socket di Windows durante il processo di ricezione.|  
|[CArchive::IsLoading](#isloading)|Determina se l'archivio viene caricato.|  
|[CArchive::IsStoring](#isstoring)|Determina se l'archivio è l'archiviazione.|  
|[CArchive::MapObject](#mapobject)|Inserisce gli oggetti della mappa che non sono serializzati per il file, ma che sono disponibili per oggetti secondari fare riferimento.|  
|[CArchive::Read](#read)|Legge i byte non elaborati.|  
|[CArchive::ReadClass](#readclass)|Legge un riferimento alla classe archiviato in precedenza con `WriteClass`.|  
|[CArchive::ReadObject](#readobject)|Chiama un oggetto `Serialize` funzione per il caricamento.|  
|[CArchive::ReadString](#readstring)|Legge una singola riga di testo.|  
|[CArchive::SerializeClass](#serializeclass)|Legge o scrive il riferimento alla classe per il `CArchive` a seconda della direzione dell'oggetto di `CArchive`.|  
|[CArchive::SetLoadParams](#setloadparams)|Imposta la dimensione a cui si espande la matrice di carico. Deve essere chiamato prima di qualsiasi oggetto caricato o prima di `MapObject` o `ReadObject` viene chiamato.|  
|[CArchive::SetObjectSchema](#setobjectschema)|Imposta lo schema dell'oggetto archiviato nell'oggetto archivio.|  
|[CArchive::SetStoreParams](#setstoreparams)|Imposta le dimensioni della tabella hash e la dimensione del blocco della mappa utilizzata per identificare oggetti univoci durante il processo di serializzazione.|  
|[CArchive::Write](#write)|Scrive i byte non elaborati.|  
|[CArchive::WriteClass](#writeclass)|Scrive un riferimento di `CRuntimeClass` per il `CArchive`.|  
|[CArchive::WriteObject](#writeobject)|Chiama un oggetto `Serialize` funzione per l'archiviazione.|  
|[CArchive::WriteString](#writestring)|Scrive una singola riga di testo.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArchive::operator&lt;&lt;](#operator_lt_lt)|Archivia gli oggetti e tipi primitivi nell'archivio.|  
|[CArchive::operator&gt;&gt;](#operator_gt_gt)|Carica gli oggetti e tipi primitivi dall'archivio.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArchive::m_pDocument](#m_pdocument)||  
  
## <a name="remarks"></a>Note  
 `CArchive`non dispone di una classe di base.  
  
 In un secondo momento è possibile caricare gli oggetti dall'archivio permanente, ricostituzione in memoria. Questo processo di rendere persistenti i dati è denominato "serializzazione".  
  
 È possibile considerare un oggetto di archiviazione come un tipo di flusso binario. Ad esempio un flusso di input/output, un archivio è associato un file e consente la scrittura memorizzato nel buffer e la lettura dei dati verso e dall'archiviazione. Un flusso di input/output elabora le sequenze di caratteri ASCII, ma un archivio elabora i dati dell'oggetto binario in un formato efficiente, nonredundant.  
  
 È necessario creare un [CFile](../../mfc/reference/cfile-class.md) oggetto prima di poter creare un `CArchive` oggetto. Inoltre, è necessario assicurarsi che lo stato di caricamento/archiviazione dell'archivio sia compatibile con le modalità di apertura del file. Sono limitati a un archivio attivo per ogni file.  
  
 Quando si crea un `CArchive` dell'oggetto, viene collegato a un oggetto della classe `CFile` (o una classe derivata) che rappresenta un file aperto. È inoltre possibile specificare se l'archivio verrà usato per il caricamento o archiviazione. Oggetto `CArchive` oggetto può elaborare non solo tipi primitivi, ma anche gli oggetti di [CObject](../../mfc/reference/cobject-class.md)-progettate per la serializzazione di classi derivate. Una classe serializzabile ha in genere un `Serialize` funzione membro e in genere utilizza il [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) macro, come descritto nella classe `CObject`.  
  
 L'estrazione di overload ( ** >> **) e l'inserimento ( ** << **) gli operatori sono interfacce di programmazione archivio pratico che supportano entrambi i tipi primitivi e `CObject`-classi derivate.  
  
 `CArchive`supporta inoltre la programmazione con le classi Windows Sockets MFC [CSocket](../../mfc/reference/csocket-class.md) e [CSocketFile](../../mfc/reference/csocketfile-class.md). Il [IsBufferEmpty](#isbufferempty) supporta la funzione membro che l'utilizzo.  
  
 Per ulteriori informazioni su `CArchive`, vedere gli articoli [serializzazione](../../mfc/serialization-in-mfc.md) e [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CArchive`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="a-nameaborta--carchiveabort"></a><a name="abort"></a>CArchive::Abort  
 Chiamare questa funzione per chiudere l'archivio senza generare un'eccezione.  
  
```  
void Abort ();
```  
  
### <a name="remarks"></a>Note  
 Il **CArchive** distruttore chiamerà normalmente **Chiudi**, che invia i dati che non è stati salvati l'oggetto associato `CFile` oggetto. Ciò può causare eccezioni.  
  
 Quando l'intercettazione di queste eccezioni, è consigliabile utilizzare **Abort**, in modo che distruzione di `CArchive` oggetto non causa ulteriori eccezioni. Quando la gestione delle eccezioni, `CArchive::Abort` non genererà un'eccezione per gli errori dei perché, diversamente da [CArchive::Close](#close), **Abort** ignora gli errori.  
  
 Se è stato utilizzato **nuova** per allocare il `CArchive` oggetto sull'heap, è necessario eliminarlo dopo la chiusura del file.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CArchive::WriteClass](#writeclass).  
  
##  <a name="a-namecarchivea--carchivecarchive"></a><a name="carchive"></a>CArchive::CArchive  
 Costruisce un `CArchive` dell'oggetto e specifica se deve essere utilizzato per il caricamento o archiviazione di oggetti.  
  
```  
CArchive(
    CFile* pFile,  
    UINT nMode,  
    int nBufSize = 4096,  
    void* lpBuf = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pFile`  
 Un puntatore per il `CFile` oggetto che è l'origine o la destinazione dei dati persistenti.  
  
 `nMode`  
 Flag che specifica se gli oggetti verranno caricati da o archiviati nell'archivio. Il `nMode` parametro deve avere uno dei valori seguenti:  
  
- **CArchive::load** carica i dati dall'archivio. Richiede solo `CFile` l'autorizzazione di lettura.  
  
- **CArchive::store** Salva i dati nell'archivio. È necessario `CFile` l'autorizzazione di scrittura.  
  
- **CArchive::bNoFlushOnDelete** impedisce la chiamata automatica di archivio `Flush` quando viene chiamato il distruttore di archiviazione. Se si imposta questo flag, è necessario chiamare in modo esplicito **Chiudi** prima che venga chiamato il distruttore. In caso contrario, i dati verranno danneggiati.  
  
 `nBufSize`  
 Valore intero che specifica la dimensione del buffer di file interne, in byte. Si noti che le dimensioni del buffer predefinita sono 4.096 byte. Se si archiviano regolarmente oggetti di grandi dimensioni, si migliorerà le prestazioni se si utilizza una dimensione del buffer più grande che è un multiplo delle dimensioni del buffer di file.  
  
 `lpBuf`  
 Un puntatore a un buffer di dimensione fornito dall'utente facoltativo `nBufSize`. Se non si specifica questo parametro, l'archivio alloca un buffer dall'heap locale e la libera quando l'oggetto viene eliminato. L'archivio non viene liberata un buffer fornito dall'utente.  
  
### <a name="remarks"></a>Note  
 Dopo aver creato l'archivio, è possibile modificare questa specifica.  
  
 Non è possibile utilizzare `CFile` operazioni di modificare lo stato del file fino a quando non è stato chiuso l'archivio. Qualsiasi operazione di questo tipo verrà danneggiare l'integrità dell'archivio. La posizione del puntatore del file è possibile accedere in qualsiasi momento durante la serializzazione ottenendo l'oggetto file dell'archivio di [GetFile](#getfile) funzione membro e quindi utilizzando il [CFile::GetPosition](../../mfc/reference/cfile-class.md#getposition) (funzione). È necessario chiamare [CArchive::Flush](#flush) prima di ottenere la posizione del puntatore del file.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization&#12;](../../mfc/codesnippet/cpp/carchive-class_1.cpp)]  
  
##  <a name="a-nameclosea--carchiveclose"></a><a name="close"></a>CArchive::Close  
 Scarica tutti i dati rimanenti nel buffer, chiude l'archivio e disconnette l'archivio dal file.  
  
```  
void Close();
```  
  
### <a name="remarks"></a>Note  
 Non sono consentita più alcuna operazione in archivio. Dopo la chiusura di un archivio, è possibile creare un altro archivio per il file stesso oppure è possibile chiudere il file.  
  
 La funzione membro **Chiudi** garantisce che tutti i dati vengono trasferiti dall'archivio per il file e rende disponibile l'archivio. Per completare il trasferimento del file nel supporto di archiviazione, è necessario utilizzare [CFile::Close](../../mfc/reference/cfile-class.md#close) e infine l'eliminazione di `CFile` oggetto.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CArchive::WriteString](#writestring).  
  
##  <a name="a-nameflusha--carchiveflush"></a><a name="flush"></a>CArchive::Flush  
 Forza i dati rimanenti nel buffer di archiviazione in cui scrivere il file.  
  
```  
void Flush();
```  
  
### <a name="remarks"></a>Note  
 La funzione membro `Flush` assicura che i tutti i dati vengono trasferiti dall'archivio al file. È necessario chiamare [CFile::Close](../../mfc/reference/cfile-class.md#close) per completare il trasferimento del file nel supporto di archiviazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[13 NVC_MFCSerialization](../../mfc/codesnippet/cpp/carchive-class_2.cpp)]  
  
##  <a name="a-namegetfilea--carchivegetfile"></a><a name="getfile"></a>CArchive::GetFile  
 Ottiene il `CFile` puntatore a un oggetto per l'archiviazione.  
  
```  
CFile* GetFile() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore costante a di `CFile` oggetto in uso.  
  
### <a name="remarks"></a>Note  
 È necessario scaricare l'archivio prima di utilizzare `GetFile`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization&#14;](../../mfc/codesnippet/cpp/carchive-class_3.cpp)]  
  
##  <a name="a-namegetobjectschemaa--carchivegetobjectschema"></a><a name="getobjectschema"></a>CArchive::GetObjectSchema  
 Chiamare questa funzione il `Serialize` funzione per determinare la versione dell'oggetto che attualmente sta per essere deserializzato.  
  
```  
UINT GetObjectSchema();
```  
  
### <a name="return-value"></a>Valore restituito  
 Durante la deserializzazione, la versione dell'oggetto da leggere.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione è valida solo quando il `CArchive` oggetto caricato ( [CArchive::IsLoading](#isloading) restituisce diverso da zero). Deve essere la prima chiamata nel `Serialize` chiamato una sola volta e funzione. Il valore restituito ( **UINT**) –&1; indica che il numero di versione è sconosciuto.  
  
 Oggetto `CObject`-classe derivata può utilizzare **VERSIONABLE_SCHEMA** combinati (utilizzando bit per bit `OR`) con la versione dello schema stesso (nel `IMPLEMENT_SERIAL` (macro)) per creare un "autodescrittivo oggetto,", ovvero un oggetto il cui `Serialize` funzione membro può leggere più versioni. La funzionalità framework predefinito (senza **VERSIONABLE_SCHEMA**) consiste nel generare un'eccezione quando la versione corrispondente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization&#15;](../../mfc/codesnippet/cpp/carchive-class_4.cpp)]  
  
##  <a name="a-nameisbufferemptya--carchiveisbufferempty"></a><a name="isbufferempty"></a>CArchive::IsBufferEmpty  
 Chiamare questa funzione membro per determinare se buffer interno dell'oggetto archivio è vuoto.  
  
```  
BOOL IsBufferEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il buffer dell'archivio è vuoto. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene fornita per supportare la programmazione con la classe di Windows Sockets MFC `CSocketFile`. Non è necessario utilizzarla per un archivio associato a un `CFile` oggetto.  
  
 Il motivo per l'utilizzo di `IsBufferEmpty` con un archivio associato a un `CSocketFile` oggetto è che i buffer dell'archivio può contenere più di un messaggio o record. Dopo aver ricevuto un messaggio, è necessario utilizzare `IsBufferEmpty` per controllare un ciclo che continua a ricevere i dati fino a quando il buffer è vuoto. Per ulteriori informazioni, vedere il [ricezione](../../mfc/reference/casyncsocket-class.md#receive) funzione membro di classe `CAsyncSocket`, cui viene illustrato come utilizzare `IsBufferEmpty`.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="a-nameisloadinga--carchiveisloading"></a><a name="isloading"></a>CArchive::IsLoading  
 Determina se l'archivio è il caricamento dei dati.  
  
```  
BOOL IsLoading() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'archivio è in uso per il caricamento; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal `Serialize` funzioni delle classi archiviate.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization&#16;](../../mfc/codesnippet/cpp/carchive-class_5.cpp)]  
  
##  <a name="a-nameisstoringa--carchiveisstoring"></a><a name="isstoring"></a>CArchive::IsStoring  
 Determina se l'archivio dei dati.  
  
```  
BOOL IsStoring() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'archivio è in uso per l'archiviazione; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal `Serialize` funzioni delle classi archiviate.  
  
 Se il `IsStoring` lo stato di un archivio è diverso da zero, quindi il relativo `IsLoading` status = 0 e viceversa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization n.&17;](../../mfc/codesnippet/cpp/carchive-class_6.cpp)]  
  
##  <a name="a-namemapobjecta--carchivemapobject"></a><a name="mapobject"></a>CArchive::MapObject  
 Chiamare questa funzione membro per posizionare gli oggetti della mappa che non sono stati effettivamente serializzati per il file, ma che sono disponibili per oggetti secondari fare riferimento.  
  
```  
void MapObject(const CObject* pOb);
```  
  
### <a name="parameters"></a>Parametri  
 `pOb`  
 Un puntatore costante a oggetto che viene archiviato.  
  
### <a name="remarks"></a>Note  
 Ad esempio, non è possibile serializzare un documento, ma è necessario serializzare gli elementi che fanno parte del documento. Chiamando `MapObject`, si consente a tali elementi o oggetti secondari, per fare riferimento al documento. Inoltre, è possono serializzare serializzati secondari relativi `m_pDocument` puntatore all'indietro.  
  
 È possibile chiamare `MapObject` quando si archivia e caricare dal `CArchive` oggetto. `MapObject`Aggiunge l'oggetto specificato a strutture dati interne mediante il `CArchive` oggetto durante la serializzazione e deserializzazione, ma a differenza di [ReadObject](#readobject) e [WriteObject](#writeobject)**,** non chiama serializzare l'oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization&#18;](../../mfc/codesnippet/cpp/carchive-class_7.h)]  
  
 [!code-cpp[&#19; NVC_MFCSerialization](../../mfc/codesnippet/cpp/carchive-class_8.cpp)]  
  
 [!code-cpp[NVC_MFCSerialization&#20;](../../mfc/codesnippet/cpp/carchive-class_9.h)]  
  
 [!code-cpp[NVC_MFCSerialization numero&21;](../../mfc/codesnippet/cpp/carchive-class_10.cpp)]  
  
##  <a name="a-namempdocumenta--carchivempdocument"></a><a name="m_pdocument"></a>CArchive::m_pDocument  
 Impostato su **NULL** per impostazione predefinita, questo puntatore a un **CDocument** può essere impostato su qualsiasi utente del `CArchive` istanza stessa.  
  
```  
CDocument* m_pDocument;  
```  
  
### <a name="remarks"></a>Note  
 Un utilizzo comune di questo puntatore è possibile fornire informazioni aggiuntive sul processo di serializzazione per tutti gli oggetti da serializzare. A tale scopo, l'inizializzazione del puntatore con il documento (un **CDocument**-classe derivata) che deve essere serializzato, in modo che gli oggetti all'interno del documento possono accedere il documento, se necessario. Questo puntatore viene inoltre utilizzato da `COleClientItem` oggetti durante la serializzazione.  
  
 I set di framework `m_pDocument` per il documento serializzato quando un utente invia un File, aprire o salvare comando. Se si serializza un documento contenitore Object Linking and Embedding (OLE) per motivi diversi da File aperti o salvare, è necessario impostare esplicitamente `m_pDocument`. Ad esempio, è necessario farlo durante la serializzazione di un documento contenitore negli Appunti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization&#35;](../../mfc/codesnippet/cpp/carchive-class_11.cpp)]  
  
##  <a name="a-nameoperatorltlta--carchiveoperator-ltlt"></a><a name="operator_lt_lt"></a>CArchive::operator&lt;&lt;  
 Archivia l'oggetto specificato o un tipo primitivo dell'archivio.  
  
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
 Le ultime due versioni precedenti sono specificamente per l'archiviazione di valori integer a 64 bit.  
  
 Se è stata utilizzata la `IMPLEMENT_SERIAL` (macro), l'implementazione della classe, quindi l'operatore di inserimento di overload per `CObject` chiama il metodo protetto **WriteObject**. Questa funzione, a sua volta, chiama il `Serialize` funzione della classe.  
  
 Il [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) (operatore di inserimento<) supports diagnostic dumping and storing to an archive. supports="" diagnostic="" dumping="" and="" storing="" to="" an=""></) supports diagnostic dumping and storing to an archive.>  
  
### <a name="example"></a>Esempio  
 In questo esempio viene illustrato come utilizzare il `CArchive` operatore di inserimento < with="" the=""> `int` e `long` tipi.  
  
 [!code-cpp[NVC_MFCSerialization&#31;](../../mfc/codesnippet/cpp/carchive-class_12.cpp)]  
  
### <a name="example"></a>Esempio  
 In questo esempio 2 viene illustrato come utilizzare il `CArchive` operatore di inserimento < with="" the=""> `CStringT` tipo.  
  
 [!code-cpp[NVC_MFCSerialization n.&32;](../../mfc/codesnippet/cpp/carchive-class_13.cpp)]  
  
##  <a name="a-nameoperatorgtgta--carchiveoperator-gtgt"></a><a name="operator_gt_gt"></a>CArchive::operator&gt;&gt;  
 Carica l'oggetto specificato o un tipo primitivo dall'archivio.  
  
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
 Oggetto `CArchive` riferimento che consente più agli operatori di estrazione in una singola riga.  
  
### <a name="remarks"></a>Note  
 Le ultime due versioni precedenti sono specificamente per il caricamento di interi a 64 bit.  
  
 Se è stata utilizzata la `IMPLEMENT_SERIAL` (macro), l'implementazione della classe, quindi gli operatori di estrazione di overload per `CObject` chiamare il metodo protetto **ReadObject** funzione (con un puntatore a una classe in fase di esecuzione diverso da zero). Questa funzione, a sua volta, chiama il `Serialize` funzione della classe.  
  
 Il [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) operatore di estrazione (>) supporta il caricamento da un archivio.  
  
### <a name="example"></a>Esempio  
 In questo esempio viene illustrato come utilizzare il `CArchive` operatore di estrazione >> con il `int` tipo.  
  
 [!code-cpp[NVC_MFCSerialization n.&33;](../../mfc/codesnippet/cpp/carchive-class_14.cpp)]  
  
### <a name="example"></a>Esempio  
 In questo esempio viene illustrato come utilizzare il `CArchive` operatori di inserimento e l'estrazione \< e >> con il `CStringT` tipo.  
  
 [!code-cpp[NVC_MFCSerialization&#34;](../../mfc/codesnippet/cpp/carchive-class_15.cpp)]  
  
##  <a name="a-namereada--carchiveread"></a><a name="read"></a>CArchive::Read  
 Legge un numero specificato di byte dall'archivio.  
  
```  
UINT Read(void* lpBuf, UINT nMax);
```  
  
### <a name="parameters"></a>Parametri  
 `lpBuf`  
 Un puntatore a un buffer fornito dall'utente che riceverà i dati letti dall'archivio.  
  
 `nMax`  
 Intero senza segno che specifica il numero di byte da leggere dall'archivio.  
  
### <a name="return-value"></a>Valore restituito  
 Intero senza segno contenente il numero di byte effettivamente letti. Se il valore restituito è inferiore al numero richiesto, è stata raggiunta la fine del file. Viene generata alcuna eccezione della condizione di fine del file.  
  
### <a name="remarks"></a>Note  
 L'archivio non in grado di interpretare i byte.  
  
 È possibile utilizzare il **lettura** funzione membro all'interno di `Serialize` funzione per la lettura delle strutture ordinarie contenute negli oggetti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization&#24;](../../mfc/codesnippet/cpp/carchive-class_16.cpp)]  
  
##  <a name="a-namereadclassa--carchivereadclass"></a><a name="readclass"></a>CArchive::ReadClass  
 Chiamare questa funzione membro per leggere un riferimento a una classe memorizzata in precedenza con [WriteClass](#writeclass).  
  
```  
CRuntimeClass* ReadClass(
    const CRuntimeClass* pClassRefRequested = NULL,  
    UINT* pSchema = NULL,  
    DWORD* pObTag = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pClassRefRequested`  
 Un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura corrispondente per il riferimento alla classe richiesta. Può essere **NULL**.  
  
 `pSchema`  
 Un puntatore a uno schema della classe in fase di esecuzione memorizzato in precedenza.  
  
 `pObTag`  
 Numero che si riferisce al tag univoco di un oggetto. Utilizzata internamente dall'implementazione di [ReadObject](#readobject). Esposto per la programmazione avanzata di sola lettura. `pObTag` normalmente sarebbero **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura.  
  
### <a name="remarks"></a>Note  
 Se `pClassRefRequested` non **NULL**, `ReadClass` verifica che le informazioni sulla classe archiviati sia compatibile con la classe di runtime. Se non è compatibile, `ReadClass` genererà un [eccezione CArchiveException](../../mfc/reference/carchiveexception-class.md).  
  
 È necessario utilizzare la classe di runtime [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in caso contrario, `ReadClass` genererà un [eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 Se `pSchema` è **NULL**, lo schema della classe archiviato può essere recuperato chiamando [CArchive::GetObjectSchema](#getobjectschema); in caso contrario, ** \* ** `pSchema` conterrà lo schema della classe in fase di esecuzione memorizzato in precedenza.  
  
 È possibile utilizzare [SerializeClass](#serializeclass) anziché `ReadClass`, che gestisce la lettura e scrittura del riferimento della classe.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CArchive::WriteClass](#writeclass).  
  
##  <a name="a-namereadobjecta--carchivereadobject"></a><a name="readobject"></a>CArchive::ReadObject  
 Legge i dati dell'oggetto dall'archivio e costruisce un oggetto del tipo appropriato.  
  
```  
CObject* ReadObject(const CRuntimeClass* pClass);
```  
  
### <a name="parameters"></a>Parametri  
 `pClass`  
 Un puntatore costante al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura che corrisponde all'oggetto a cui si prevede di leggere.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CObject](../../mfc/reference/cobject-class.md) puntatore che deve essere eseguire il cast sicuro con la corretta classe derivata utilizzando [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof).  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere chiamata dal `CArchive` estrazione ( ** >> **) l'overload dell'operatore per un [CObject](../../mfc/reference/cobject-class.md) puntatore. **ReadObject**, a sua volta, chiama il `Serialize` funzione della classe archiviata.  
  
 Se si fornisce un diverso da zero `pClass` parametro, ottenuta tramite il [RUNTIME_CLASS](../../mfc/reference/run-time-object-model-services.md#runtime_class) (macro), quindi la funzione verifica la classe in fase di esecuzione dell'oggetto archiviato. Ciò presuppone di aver utilizzato la `IMPLEMENT_SERIAL` macro nell'implementazione della classe.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CArchive::WriteObject](#writeobject).  
  
##  <a name="a-namereadstringa--carchivereadstring"></a><a name="readstring"></a>CArchive::ReadString  
 Chiamare questa funzione membro per leggere i dati di testo in un buffer dal file di cui è associato il `CArchive` oggetto.  
  
```  
BOOL ReadString(CString& rString); 
LPTSTR ReadString(LPTSTR lpsz, UINT nMax);
```  
  
### <a name="parameters"></a>Parametri  
 `rString`  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) che conterrà la stringa risultante dopo la lettura dal file associato all'oggetto CArchive.  
  
 `lpsz`  
 Specifica un puntatore a un buffer fornito dall'utente che riceverà una stringa di testo con terminazione null.  
  
 `nMax`  
 Specifica il numero massimo di caratteri da leggere. Deve essere minore della dimensione di *lpsz* buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Nella versione che restituisce **BOOL**, **TRUE** se ha esito positivo. **FALSE** in caso contrario.  
  
 Nella versione che restituisce un `LPTSTR`, un puntatore al buffer contenente i dati di testo; **NULL** se è stata raggiunta la fine del file.  
  
### <a name="remarks"></a>Note  
 Nella versione della funzione membro con il `nMax` parametro, verranno memorizzate nel buffer un limite di `nMax` - 1 caratteri. La lettura viene interrotta da una coppia di ritorno a capo con avanzamento di riga. Caratteri di nuova riga finale vengono sempre rimossi. In entrambi i casi, viene aggiunto un carattere null ('\0').  
  
 [CArchive::Read](#read) è disponibile anche per l'input in modalità testo, ma non termina con una coppia di ritorno a capo con avanzamento di riga.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CArchive::WriteString](#writestring).  
  
##  <a name="a-nameserializeclassa--carchiveserializeclass"></a><a name="serializeclass"></a>CArchive::SerializeClass  
 Chiamare questa funzione membro quando si desidera archiviare e caricare le informazioni sulla versione di una classe base.  
  
```  
void SerializeClass(const CRuntimeClass* pClassRef);
```  
  
### <a name="parameters"></a>Parametri  
 `pClassRef`  
 Un puntatore a un oggetto di classe in fase di esecuzione per la classe base.  
  
### <a name="remarks"></a>Note  
 `SerializeClass`legge o scrive il riferimento a una classe per il `CArchive` oggetto, a seconda della direzione di `CArchive`. Utilizzare `SerializeClass` al posto di [ReadClass](#readclass) e [WriteClass](#writeclass) come un modo pratico per serializzare gli oggetti della classe base; `SerializeClass` richiede meno codice e meno parametri.  
  
 Ad esempio `ReadClass`, `SerializeClass` verifica che le informazioni sulla classe archiviati sia compatibile con la classe di runtime. Se non è compatibile, `SerializeClass` genererà un [eccezione CArchiveException](../../mfc/reference/carchiveexception-class.md).  
  
 È necessario utilizzare la classe di runtime [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in caso contrario, `SerializeClass` genererà un [eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 Utilizzare il [RUNTIME_CLASS](../../mfc/reference/run-time-object-model-services.md#runtime_class) (macro) per recuperare il valore per il `pRuntimeClass` parametro. La classe di base deve essere utilizzato il [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) (macro).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization&#25;](../../mfc/codesnippet/cpp/carchive-class_17.h)]  
  
##  <a name="a-namesetloadparamsa--carchivesetloadparams"></a><a name="setloadparams"></a>CArchive::SetLoadParams  
 Chiamare `SetLoadParams` quando si desidera leggere un numero elevato di `CObject`-oggetti derivati da un archivio.  
  
```  
void SetLoadParams(UINT nGrowBy = 1024);
```  
  
### <a name="parameters"></a>Parametri  
 `nGrowBy`  
 Il numero minimo di slot di elemento per allocare se è necessario un aumento delle dimensioni.  
  
### <a name="remarks"></a>Note  
 `CArchive`utilizza una matrice di carico per risolvere i riferimenti agli oggetti memorizzati nell'archivio. `SetLoadParams`Consente di impostare le dimensioni a cui si espande la matrice di carico.  
  
 Non è necessario chiamare `SetLoadParams` dopo il caricamento di qualsiasi oggetto, o dopo [MapObject](#mapobject) o [ReadObject](#readobject) viene chiamato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#26; NVC_MFCSerialization](../../mfc/codesnippet/cpp/carchive-class_18.h)]  
  
##  <a name="a-namesetobjectschemaa--carchivesetobjectschema"></a><a name="setobjectschema"></a>CArchive::SetObjectSchema  
 Chiamare questa funzione membro per impostare lo schema dell'oggetto archiviato nell'oggetto di archiviazione per `nSchema`.  
  
```  
void SetObjectSchema(UINT nSchema);
```  
  
### <a name="parameters"></a>Parametri  
 `nSchema`  
 Specifica lo schema dell'oggetto.  
  
### <a name="remarks"></a>Note  
 La chiamata successiva a [GetObjectSchema](#getobjectschema) restituirà il valore memorizzato in `nSchema`.  
  
 Utilizzare `SetObjectSchema` per il controllo delle versioni avanzata; ad esempio, quando si desidera forzare una particolare versione di essere letta in un `Serialize` funzione di una classe derivata.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization&#27;](../../mfc/codesnippet/cpp/carchive-class_19.cpp)]  
  
##  <a name="a-namesetstoreparamsa--carchivesetstoreparams"></a><a name="setstoreparams"></a>CArchive::SetStoreParams  
 Utilizzare `SetStoreParams` per l'archiviazione di un numero elevato di `CObject`-oggetti in un archivio derivati.  
  
```  
void SetStoreParams(UINT nHashSize = 2053, UINT nBlockSize = 128);
```  
  
### <a name="parameters"></a>Parametri  
 *nHashSize*  
 Le dimensioni della tabella hash di puntatore a interfaccia esegue il mapping. Deve essere un numero primo.  
  
 `nBlockSize`  
 Specifica la granularità di allocazione della memoria per i parametri di estensione. Deve essere una potenza di 2 per ottenere prestazioni ottimali.  
  
### <a name="remarks"></a>Note  
 `SetStoreParams`Consente di impostare le dimensioni della tabella hash e la dimensione del blocco della mappa utilizzata per identificare oggetti univoci durante il processo di serializzazione.  
  
 Non è necessario chiamare `SetStoreParams` dopo tutti gli oggetti vengono archiviati, o dopo [MapObject](#mapobject) o [WriteObject](#writeobject) viene chiamato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#26; NVC_MFCSerialization](../../mfc/codesnippet/cpp/carchive-class_18.h)]  
  
##  <a name="a-namewritea--carchivewrite"></a><a name="write"></a>CArchive::Write  
 Scrive un numero specificato di byte dell'archivio.  
  
```  
void Write(const void* lpBuf, INT nMax);
```  
  
### <a name="parameters"></a>Parametri  
 `lpBuf`  
 Un puntatore a un buffer fornito dall'utente che contiene i dati da scrivere nell'archivio.  
  
 `nMax`  
 Valore intero che specifica il numero di byte da scrivere nell'archivio.  
  
### <a name="remarks"></a>Note  
 L'archivio non formattare i byte.  
  
 È possibile utilizzare il **scrivere** funzione membro all'interno di `Serialize` funzione scrivere ordinario strutture che sono contenuti negli oggetti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSerialization&#23;](../../mfc/codesnippet/cpp/carchive-class_20.cpp)]  
  
##  <a name="a-namewriteclassa--carchivewriteclass"></a><a name="writeclass"></a>CArchive::WriteClass  
 Utilizzare `WriteClass` per archiviare le informazioni di versione e la classe di una classe base durante la serializzazione della classe derivata.  
  
```  
void WriteClass(const CRuntimeClass* pClassRef);
```  
  
### <a name="parameters"></a>Parametri  
 `pClassRef`  
 Un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura corrispondente per il riferimento alla classe richiesta.  
  
### <a name="remarks"></a>Note  
 `WriteClass`Scrive un riferimento di [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) per la classe base per il `CArchive`. Utilizzare [CArchive::ReadClass](#readclass) per recuperare il riferimento.  
  
 `WriteClass`verifica che le informazioni sulla classe archiviati sia compatibile con la classe di runtime. Se non è compatibile, `WriteClass` genererà un [eccezione CArchiveException](../../mfc/reference/carchiveexception-class.md).  
  
 È necessario utilizzare la classe di runtime [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); in caso contrario, `WriteClass` genererà un [eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 È possibile utilizzare [SerializeClass](#serializeclass) anziché `WriteClass`, che gestisce la lettura e scrittura del riferimento della classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[28 NVC_MFCSerialization](../../mfc/codesnippet/cpp/carchive-class_21.cpp)]  
  
##  <a name="a-namewriteobjecta--carchivewriteobject"></a><a name="writeobject"></a>CArchive::WriteObject  
 Archivia l'oggetto specificato `CObject` nell'archivio.  
  
```  
void WriteObject(const CObject* pOb);
```  
  
### <a name="parameters"></a>Parametri  
 `pOb`  
 Un puntatore costante a oggetto che viene archiviato.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere chiamata dal `CArchive` inserimento ( ** << **) per l'overload dell'operatore `CObject`. **WriteObject**, a sua volta, chiama il `Serialize` funzione della classe archiviata.  
  
 È necessario utilizzare il `IMPLEMENT_SERIAL` (macro) per abilitare l'archiviazione. **WriteObject** scrive il nome della classe ASCII nell'archivio. Il nome della classe viene convalidato in un secondo momento durante il processo di caricamento. Uno schema di codifica speciale impedisce un'inutile duplicazione del nome della classe per più oggetti della classe. Questo schema impedisce inoltre l'archiviazione con ridondanza di oggetti che rappresentano le destinazioni di più di un puntatore.  
  
 L'oggetto esatto codifica metodo (inclusa la presenza del nome della classe ASCII) è un dettaglio di implementazione e potrebbe cambiare nelle future versioni della libreria.  
  
> [!NOTE]
>  Completare la creazione, eliminazione e aggiornamento di tutti gli oggetti prima di archiviarli. L'archivio sarà danneggiato se si combinano con modifica dell'oggetto di archiviazione.  
  
### <a name="example"></a>Esempio  
 Per una definizione della classe `CAge`, vedere l'esempio per [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist).  
  
 [!code-cpp[NVC_MFCSerialization&#29;](../../mfc/codesnippet/cpp/carchive-class_22.cpp)]  
  
##  <a name="a-namewritestringa--carchivewritestring"></a><a name="writestring"></a>CArchive::WriteString  
 Utilizzare questa funzione membro per scrivere il file associato a dati da un buffer di `CArchive` oggetto.  
  
```  
void WriteString(LPCTSTR lpsz);
```  
  
### <a name="parameters"></a>Parametri  
 `lpsz`  
 Specifica un puntatore a un buffer contenente una stringa di testo con terminazione null.  
  
### <a name="remarks"></a>Note  
 Il carattere di terminazione null ('\0') non viene scritto il file. non è una nuova riga scritta automaticamente.  
  
 `WriteString`genera un'eccezione in risposta a diverse condizioni, tra cui la condizione di disco pieno.  
  
 **Scrivere** è disponibile, ma anziché interrotto in un carattere null, scrive il numero di byte richiesto per il file.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#30; NVC_MFCSerialization](../../mfc/codesnippet/cpp/carchive-class_23.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFile (classe)](../../mfc/reference/cfile-class.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [CSocket (classe)](../../mfc/reference/csocket-class.md)   
 [Classe CSocketFile](../../mfc/reference/csocketfile-class.md)

