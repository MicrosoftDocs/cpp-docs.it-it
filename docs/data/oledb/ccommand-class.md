---
title: Classe CCommand
ms.date: 11/04/2016
f1_keywords:
- ATL::CCommand
- CCommand
- ATL.CCommand
- CCommand.Close
- CCommand::Close
- CCommand.Create
- CCommand::Create
- CCommand.CreateCommand
- CreateCommand
- CCommand::CreateCommand
- ATL::CCommand::GetNextResult
- CCommand::GetNextResult
- GetNextResult
- CCommand.GetNextResult
- ATL.CCommand.GetNextResult
- GetParameterInfo
- CCommand.GetParameterInfo
- CCommand::GetParameterInfo
- ATL.CCommand.Open
- ATL::CCommand::Open
- CCommand.Open
- CCommand::Open
- CCommand.Prepare
- CCommand::Prepare
- Prepare
- CCommand.ReleaseCommand
- ReleaseCommand
- CCommand::ReleaseCommand
- SetParameterInfo
- CCommand.SetParameterInfo
- CCommand::SetParameterInfo
- Unprepare
- CCommand.Unprepare
- CCommand::Unprepare
helpviewer_keywords:
- CCommand class
- Close method
- Create method [C++]
- CreateCommand method
- GetNextResult method
- GetParameterInfo method
- Open method
- Prepare method
- ReleaseCommand method
- SetParameterInfo method
- Unprepare method
ms.assetid: 0760bfc5-b9ee-4aee-8e54-31bd78714d3a
ms.openlocfilehash: 406a78ff1958d565fcc74781f6a63d4784f48bfc
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59039728"
---
# <a name="ccommand-class"></a>Classe CCommand

Fornisce i metodi per impostare ed eseguire un comando.

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CNoAccessor,
   template <typename T> class TRowset = CRowset,
   class TMultiple = CNoMultipleResults>
class CCommand :
   public CAccessorRowset <TAccessor, TRowset>,
   public CCommandBase,
   public TMultiple
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Tipo di classe di funzioni di accesso (ad esempio `CDynamicParameterAccessor`, `CDynamicStringAccessor` o `CEnumeratorAccessor`) che si desidera venga utilizzata dal comando. L'impostazione predefinita è `CNoAccessor`, che specifica che la classe non supporta parametri o colonne di output.

*TRowset*<br/>
Tipo di classe rowset (ad esempio `CArrayRowset` o `CNoRowset`) che si desidera venga utilizzata dal comando. Il valore predefinito è `CRowset`.

*TMultiple*<br/>
Per usare un comando OLE DB che può restituire più risultati, specificare [CMultipleResults](../../data/oledb/cmultipleresults-class.md). In caso contrario, utilizzare [CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md). Per informazioni dettagliate, vedere [IMultipleResults](/previous-versions/windows/desktop/ms721289(v=vs.85)).

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Chiudi](#close)|Chiude il comando corrente.|
|[GetNextResult](#getnextresult)|Recupera il risultato successivo durante l'utilizzo di più set di risultati.|
|[Apri](#open)|Esegue ed eventualmente associa il comando.|

### <a name="inherited-methods"></a>Metodi ereditati

|||
|-|-|
|[creare](#create)|Crea un nuovo comando per la sessione specificata, quindi imposta il testo del comando.|
|[CreateCommand](#createcommand)|Crea un nuovo comando.|
|[GetParameterInfo](#getparameterinfo)|Ottiene un elenco di parametri, i relativi nomi e tipi del comando.|
|[Preparare](#prepare)|Convalida e ottimizza il comando corrente.|
|[ReleaseCommand](#releasecommand)|Rilascia la funzione di accesso parametro se necessario, quindi rilascia il comando.|
|[SetParameterInfo](#setparameterinfo)|Specifica il tipo nativo di ogni parametro di comando.|
|[Unprepare](#unprepare)|Rimuove il piano di esecuzione corrente dei comandi.|

## <a name="remarks"></a>Note

Utilizzare questa classe quando è necessario eseguire un'operazione basata su parametri o eseguire un comando. Se devi semplicemente aprire un rowset semplice, usare [CTable](../../data/oledb/ctable-class.md) invece.

La classe di funzioni di accesso che si sta utilizzando determina il metodo di associazione dei parametri e dei dati.

Notare che non è possibile utilizzare le stored procedure con il provider OLE BD per Jet, in quanto da questo non supportate. Nelle stringhe delle query sono infatti ammesse solo costanti.

## <a name="close"></a> CCommand:: Close

Rilascia il set di righe della funzione di accesso associato al comando.

### <a name="syntax"></a>Sintassi

```cpp
void Close();
```

### <a name="remarks"></a>Note

Un comando Usa un set di righe della funzione di accesso set di risultati e (facoltativamente) una funzione di accesso parametro (a differenza delle tabelle, che non supportano parametri e non è necessario un accesso al parametro).

Quando si esegue un comando, è necessario chiamare entrambe `Close` e [ReleaseCommand](../../data/oledb/ccommand-releasecommand.md) dopo il comando.

Quando si desidera eseguire ripetutamente lo stesso comando, si deve rilasciare ogni funzione di accesso set di risultati chiamando `Close` prima di chiamare `Execute`. Alla fine della serie, è necessario rilasciarne la funzione di accesso parametro chiamando `ReleaseCommand`. Un altro scenario comune viene chiamata una stored procedure con parametri di output. In molti provider di servizi (ad esempio, il provider OLE DB per SQL Server) i valori dei parametri di output non sarà accessibile fino a quando non si chiude la funzione di accesso set di risultati. Chiamare `Close` per chiudere il set di righe restituito e funzione di accesso set di risultati, ma non il parametro della funzione di accesso, consentendo in tal modo è possibile recuperare i valori dei parametri di output.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come è possibile richiamare `Close` e `ReleaseCommand` quando si esegue più volte lo stesso comando.

[!code-cpp[NVC_OLEDB_Consumer#2](../../data/oledb/codesnippet/cpp/ccommand-close_1.cpp)]

## <a name="getnextresult"></a> CCommand::GetNextResult

Recupera il successivo set di risultati se ne è disponibile.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetNextResult(DBROWCOUNT* pulRowsAffected,
   bool bBind = true) throw();
```

#### <a name="parameters"></a>Parametri

*pulRowsAffected*<br/>
[in/out] Puntatore alla memoria in cui viene restituito il conteggio delle righe interessate da un comando.

*bBind*<br/>
[in] Specifica se associare automaticamente il comando dopo l'esecuzione. Il valore predefinito è **true**, in modo che il comando deve essere associato automaticamente. L'impostazione *bBind* al **false** impedisce l'associazione automatica del comando in modo che è possibile associare manualmente. (Associazione manuale è di particolare interesse per gli utenti OLAP).

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Se un set di risultati è stato recuperato in precedenza, questa funzione rilascia il set di risultati precedente e separa le colonne. Se *bBind* viene **true**, associa le nuove colonne.

È necessario chiamare questa funzione solo se si hanno più risultati impostando il `CCommand` parametro di modello *TMultiple*=`CMultipleResults`.

## <a name="open"></a> CCommand::

Esegue ed eventualmente associa il comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Open(const CSession& session,
   LPCWSTR wszCommand,
   DBPROPSET *pPropSet = NULL,
   DBROWCOUNT* pRowsAffected = NULL,
   REFGUID guidCommand = DBGUID_DEFAULT,
   bool bBind = true,
   ULONG ulPropSets = 0) throw();

HRESULT Open(const CSession& session,
   LPCSTR szCommand,
   DBPROPSET *pPropSet = NULL,
   DBROWCOUNT* pRowsAffected = NULL,
   REFGUID guidCommand = DBGUID_DEFAULT,
   bool bBind = true,
   ULONG ulPropSets = 0) throw();

HRESULT Open(const CSession& session,
   INT szCommand = NULL,
   DBPROPSET *pPropSet = NULL,
   DBROWCOUNT* pRowsAffected = NULL,
   REFGUID guidCommand = DBGUID_DEFAULT,
   bool bBind = true,
   ULONG ulPropSets = 0) throw();

HRESULT Open(DBPROPSET *pPropSet = NULL,
   DBROWCOUNT* pRowsAffected = NULL,
   bool bBind = true,
   ULONG ulPropSets = 0) throw();
```

#### <a name="parameters"></a>Parametri

*session*<br/>
[in] La sessione in cui eseguire il comando.

*wszCommand*<br/>
[in] Il comando da eseguire, passato come stringa Unicode. Può essere NULL quando si usa `CAccessor`, nel qual caso il comando verrà recuperato dal valore passato per il [DEFINE_COMMAND](../../data/oledb/define-command.md) macro. Visualizzare [ICommand:: Execute](/previous-versions/windows/desktop/ms718095(v=vs.85)) nel *riferimento per programmatori OLE DB* per informazioni dettagliate.

*szCommand*<br/>
[in] Uguale allo *wszCommand* ad eccezione del fatto che questo parametro accetta una stringa di comandi ANSI. Il quarto form di questo metodo può accettare un valore NULL. Vedere "la sezione Osservazioni" più avanti in questo argomento per informazioni dettagliate.

*pPropSet*<br/>
[in] Un puntatore a una matrice di [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) strutture contenenti le proprietà e valori da impostare. Visualizzare [set di proprietà e i gruppi di proprietà](/previous-versions/windows/desktop/ms713696(v=vs.85)) nel *riferimento per programmatori OLE DB* in Windows SDK.

*pRowsAffected*<br/>
[in/out] Puntatore alla memoria in cui viene restituito il conteggio delle righe interessate da un comando. Se  *\*pRowsAffected* è NULL, viene restituito alcun conteggio righe. In caso contrario, `Open` imposta  *\*pRowsAffected* in base alle condizioni seguenti:

|Se|Quindi|
|--------|----------|
|Il `cParamSets` elemento di `pParams` è maggiore di 1|*\*pRowsAffected* rappresenta il numero totale di righe interessate da tutti i set di parametri specificati nell'esecuzione.|
|Il numero di righe interessate non disponibile|*\*pRowsAffected* è impostato su -1.|
|Il comando non vengono aggiornate, eliminare o inserire righe|*\*pRowsAffected* è definito.|

*guidCommand*<br/>
[in] GUID che specifica la sintassi e le regole generali per il provider da utilizzare durante l'analisi del testo del comando. Visualizzare [ICommandText::GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) e [ICommandText:: SetCommandText](/previous-versions/windows/desktop/ms709757(v=vs.85)) nel *riferimento per programmatori OLE DB* per informazioni dettagliate.

*bBind*<br/>
[in] Specifica se associare automaticamente il comando dopo l'esecuzione. Il valore predefinito è **true**, in modo che il comando deve essere associato automaticamente. L'impostazione *bBind* al **false** impedisce l'associazione automatica del comando in modo che è possibile associare manualmente. (Associazione manuale è di particolare interesse per gli utenti OLAP).

*ulPropSets*<br/>
[in] Il numero di [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) strutture passato il *pPropSet* argomento.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Le prime tre forme di `Open` richiedere una sessione, creare un comando ed eseguire il comando, tutti i parametri di associazione in base alle esigenze.

La prima forma del `Open` accetta una stringa di comando di Unicode e non dispone di alcun valore predefinito.

La seconda forma di `Open` accetta una stringa di comandi ANSI e alcun valore predefinito (fornito per garantire la compatibilità con le applicazioni esistenti ANSI).

La terza forma `Open` consente alla stringa di comando deve essere NULL, a causa di tipo **int** con un valore predefinito NULL. Viene fornito per la chiamata `Open(session, NULL);` oppure `Open(session);` perché è di tipo NULL **int**. Questa versione è necessario e asserisce che il **int** parametro essere NULL.

Utilizzare la forma del quarta `Open` quando è già stato creato un comando e si desidera eseguire una singola [Prepare](../../data/oledb/ccommand-prepare.md) e più esecuzioni.

> [!NOTE]
>  `Open` le chiamate `Execute`, che a sua volta chiama `GetNextResult`.

## <a name="create"></a> CCommand:: Create

Le chiamate [CCommand:: CreateCommand](../../data/oledb/ccommand-createcommand.md) per creare un comando per la sessione specificata, quindi chiama [ICommandText:: SetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) per specificare il testo del comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::Create(const CSession& session,
   LPCWSTR wszCommand,
   REFGUID guidCommand = DBGUID_DEFAULT) throw ();

HRESULT CCommandBase::Create(const CSession& session,
   LPCSTR szCommand,
   REFGUID guidCommand = DBGUID_DEFAULT) throw ();
```

#### <a name="parameters"></a>Parametri

*session*<br/>
[in] Una sessione in cui creare il comando.

*wszCommand*<br/>
[in] Puntatore al testo Unicode della stringa di comando.

*szCommand*<br/>
[in] Puntatore al testo ANSI della stringa di comando.

*guidCommand*<br/>
[in] GUID che specifica la sintassi e le regole generali per il provider da utilizzare durante l'analisi del testo del comando. Per una descrizione di dialetti, vedere [ICommandText::GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) nel *riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

La prima forma del `Create` accetta una stringa di comando di Unicode. La seconda forma di `Create` accetta una stringa di comandi ANSI (fornita per garantire la compatibilità con le applicazioni esistenti ANSI).

## <a name="createcommand"></a> CCommand::CreateCommand

Crea un nuovo comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::CreateCommand(const CSession& session) throw ();
```

#### <a name="parameters"></a>Parametri

*session*<br/>
[in] Oggetto `CSession` oggetto da associare il nuovo comando.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questo metodo crea un comando usando l'oggetto di sessione specificato.

## <a name="getparameterinfo"></a> CCommand:: GetParameterInfo

Ottiene un elenco di parametri, i relativi nomi e tipi del comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::GetParameterInfo(DB_UPARAMS* pParams,
   DBPARAMINFO** ppParamInfo,
   OLECHAR** ppNamesBuffer) throw ();
```

#### <a name="parameters"></a>Parametri

Visualizzare [ICommandWithParameters:: GetParameterInfo](/previous-versions/windows/desktop/ms714917(v=vs.85)) nel *riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

## <a name="prepare"></a> CCommand:: Prepare

Convalida e ottimizza il comando corrente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::Prepare(ULONG cExpectedRuns = 0) throw();
```

#### <a name="parameters"></a>Parametri

*cExpectedRuns*<br/>
[in] Il numero di volte in cui che si prevede di eseguire il comando.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questo metodo il wrapping del metodo OLE DB [ICommandPrepare:: Prepare](/previous-versions/windows/desktop/ms718370(v=vs.85)).

## <a name="releasecommand"></a> CCommand:: ReleaseCommand

Rilascia la funzione di accesso di parametro, quindi rilascia il comando stesso.

### <a name="syntax"></a>Sintassi

```cpp
void CCommandBase::ReleaseCommand() throw();
```

### <a name="remarks"></a>Note

`ReleaseCommand` viene usato in combinazione con `Close`. Visualizzare [Chiudi](../../data/oledb/ccommand-close.md) per i dettagli di utilizzo.

## <a name="setparameterinfo"></a> CCommand:: SetParameterInfo

Specifica il tipo nativo di ogni parametro di comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::SetParameterInfo(DB_UPARAMS ulParams,
   const DBORDINAL* pOrdinals,
   const DBPARAMBINDINFO* pParamInfo) throw();
```

#### <a name="parameters"></a>Parametri

Visualizzare [ICommandWithParameters:: SetParameterInfo](/previous-versions/windows/desktop/ms725393(v=vs.85)) nel *riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

## <a name="unprepare"></a> CCommand:: Unprepare

Rimuove il piano di esecuzione corrente dei comandi.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::Unprepare() throw();
```

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questo metodo il wrapping del metodo OLE DB [ICommandPrepare::](/previous-versions/windows/desktop/ms719635(v=vs.85)).

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)