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
ms.openlocfilehash: 5da843405cfec4d1d571a3140f132513d8b068ae
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212082"
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
Per usare un OLE DB comando che può restituire più risultati, specificare [CMultipleResults](../../data/oledb/cmultipleresults-class.md). In caso contrario, usare [CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md). Per informazioni dettagliate, vedere [IMultipleResults](/previous-versions/windows/desktop/ms721289(v=vs.85)).

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[Close](#close)|Chiude il comando corrente.|
|[GetNextResult](#getnextresult)|Recupera il risultato successivo durante l'utilizzo di più set di risultati.|
|[Apri](#open)|Esegue ed eventualmente associa il comando.|

### <a name="inherited-methods"></a>Metodi ereditati

|||
|-|-|
|[Creare](#create)|Crea un nuovo comando per la sessione specificata, quindi imposta il testo del comando.|
|[CreateCommand](#createcommand)|Crea un nuovo comando.|
|[GetParameterInfo](#getparameterinfo)|Ottiene un elenco di parametri, i relativi nomi e tipi del comando.|
|[Preparare](#prepare)|Convalida e ottimizza il comando corrente.|
|[ReleaseCommand](#releasecommand)|Rilascia la funzione di accesso parametro se necessario, quindi rilascia il comando.|
|[SetParameterInfo](#setparameterinfo)|Specifica il tipo nativo di ogni parametro di comando.|
|[Unprepare](#unprepare)|Rimuove il piano di esecuzione corrente dei comandi.|

## <a name="remarks"></a>Osservazioni

Usare questa classe quando è necessario eseguire un'operazione basata su parametri o eseguire un comando. Se è sufficiente aprire un set di righe semplice, usare invece [CTable](../../data/oledb/ctable-class.md) .

La classe di funzioni di accesso che si sta utilizzando determina il metodo di associazione dei parametri e dei dati.

Notare che non è possibile utilizzare le stored procedure con il provider OLE BD per Jet, in quanto da questo non supportate. Nelle stringhe delle query sono infatti ammesse solo costanti.

## <a name="ccommandclose"></a><a name="close"></a>CCommand:: Close

Rilascia il set di righe della funzione di accesso associato al comando.

### <a name="syntax"></a>Sintassi

```cpp
void Close();
```

### <a name="remarks"></a>Osservazioni

Un comando usa un set di righe, una funzione di accesso del set di risultati e (facoltativamente) una funzione di accesso ai parametri (a differenza delle tabelle che non supportano i parametri e non necessitano di una funzione di accesso ai parametri).

Quando si esegue un comando, è necessario chiamare sia `Close` che [ReleaseCommand](../../data/oledb/ccommand-releasecommand.md) dopo il comando.

Quando si desidera eseguire ripetutamente lo stesso comando, è necessario rilasciare ogni funzione di accesso del set di risultati chiamando `Close` prima di chiamare `Execute`. Alla fine della serie è necessario rilasciare la funzione di accesso del parametro chiamando `ReleaseCommand`. Un altro scenario comune è la chiamata di un stored procedure con parametri di output. In molti provider, ad esempio il provider di OLE DB per SQL Server, i valori dei parametri di output non saranno accessibili fino a quando non si chiude la funzione di accesso del set di risultati. Chiamare `Close` per chiudere il set di righe restituito e la funzione di accesso del set di risultati, ma non la funzione di accesso del parametro, consentendo così di recuperare i valori dei parametri di output.

### <a name="example"></a>Esempio

L'esempio seguente mostra come chiamare `Close` e `ReleaseCommand` quando si esegue più volte lo stesso comando.

[!code-cpp[NVC_OLEDB_Consumer#2](../../data/oledb/codesnippet/cpp/ccommand-close_1.cpp)]

## <a name="ccommandgetnextresult"></a><a name="getnextresult"></a>CCommand:: GetNextResult

Recupera il set di risultati successivo se ne è disponibile uno.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetNextResult(DBROWCOUNT* pulRowsAffected,
   bool bBind = true) throw();
```

#### <a name="parameters"></a>Parametri

*pulRowsAffected*<br/>
[in/out] Puntatore alla memoria in cui viene restituito il numero di righe interessate da un comando.

*bBind*<br/>
in Specifica se associare il comando automaticamente dopo l'esecuzione. Il valore predefinito è **true**, che determina il binding automatico del comando. Se si imposta *bBind* su **false** , viene impedita l'associazione automatica del comando in modo che sia possibile eseguire il binding manualmente. (L'associazione manuale è di particolare interesse per gli utenti OLAP).

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se un set di risultati è stato recuperato in precedenza, questa funzione rilascia il set di risultati precedente e Annulla l'associazione delle colonne. Se *bBind* è **true**, associa le nuove colonne.

È consigliabile chiamare questa funzione solo se sono stati specificati più risultati impostando il parametro di modello `CCommand` *TMultiple*=`CMultipleResults`.

## <a name="ccommandopen"></a><a name="open"></a>CCommand:: Open

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

*sessione*<br/>
in Sessione in cui eseguire il comando.

*wszCommand*<br/>
in Comando da eseguire, passato come stringa Unicode. Può essere NULL quando si usa `CAccessor`, nel qual caso il comando verrà recuperato dal valore passato alla macro [DEFINE_COMMAND](../../data/oledb/define-command.md) . Per informazioni dettagliate, vedere [ICommand:: Execute](/previous-versions/windows/desktop/ms718095(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

*szCommand*<br/>
in Uguale a *wszCommand* , con la differenza che questo parametro accetta una stringa di comando ANSI. Il quarto form di questo metodo può assumere un valore NULL. Per informazioni dettagliate, vedere la sezione "osservazioni" più avanti in questo argomento.

*pPropSet*<br/>
in Puntatore a una matrice di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) che contiene le proprietà e i valori da impostare. Vedere [set di proprietà e gruppi di proprietà](/previous-versions/windows/desktop/ms713696(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* nel Windows SDK.

*pRowsAffected*<br/>
[in/out] Puntatore alla memoria in cui viene restituito il numero di righe interessate da un comando. Se *\*pRowsAffected* è null, non viene restituito alcun conteggio delle righe. In caso contrario, `Open` imposta *\*pRowsAffected* in base alle condizioni seguenti:

|Se|Risultato|
|--------|----------|
|L'elemento `cParamSets` di `pParams` è maggiore di 1|*\*pRowsAffected* rappresenta il numero totale di righe interessate da tutti i set di parametri specificati nell'esecuzione.|
|Il numero di righe interessate non è disponibile|*\*pRowsAffected* è impostato su-1.|
|Il comando non aggiorna, Elimina o inserisce righe|*\*pRowsAffected* non è definito.|

*guidCommand*<br/>
in GUID che specifica la sintassi e le regole generali del provider da utilizzare per l'analisi del testo del comando. Per informazioni dettagliate, vedere [ICommandText:: GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) e [ICommandText:: CommandText](/previous-versions/windows/desktop/ms709757(v=vs.85)) in *OLE DB Programmer ' s Reference* .

*bBind*<br/>
in Specifica se associare il comando automaticamente dopo l'esecuzione. Il valore predefinito è **true**, che determina il binding automatico del comando. Se si imposta *bBind* su **false** , viene impedita l'associazione automatica del comando in modo che sia possibile eseguire il binding manualmente. (L'associazione manuale è di particolare interesse per gli utenti OLAP).

*ulPropSets*<br/>
in Numero di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) passate nell'argomento *pPropSet* .

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Le prime tre forme di `Open` accettano una sessione, creano un comando ed eseguono il comando, associando tutti i parametri in modo necessario.

La prima forma di `Open` accetta una stringa di comando Unicode e non ha alcun valore predefinito.

Il secondo formato di `Open` accetta una stringa di comando ANSI e nessun valore predefinito (fornito per la compatibilità con le versioni precedenti delle applicazioni ANSI esistenti).

La terza forma di `Open` consente la stringa di comando come NULL, a causa del tipo **int** e il valore predefinito è null. Viene fornito per chiamare `Open(session, NULL);` o `Open(session);` perché NULL è di tipo **int**. Questa versione richiede e dichiara che il parametro **int** è null.

Utilizzare la quarta forma di `Open` quando è già stato creato un comando e si desidera eseguire una singola [preparazione](../../data/oledb/ccommand-prepare.md) e più esecuzioni.

> [!NOTE]
>  `Open` chiama `Execute`, che a sua volta chiama `GetNextResult`.

## <a name="ccommandcreate"></a><a name="create"></a>CCommand:: create

Chiama [CCommand:: CreateCommand](../../data/oledb/ccommand-createcommand.md) per creare un comando per la sessione specificata, quindi chiama [ICommandText:: secommandtext](/previous-versions/windows/desktop/ms709825(v=vs.85)) per specificare il testo del comando.

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

*sessione*<br/>
in Sessione in cui creare il comando.

*wszCommand*<br/>
in Puntatore al testo Unicode della stringa di comando.

*szCommand*<br/>
in Puntatore al testo ANSI della stringa di comando.

*guidCommand*<br/>
in GUID che specifica la sintassi e le regole generali del provider da utilizzare per l'analisi del testo del comando. Per una descrizione dei dialetti, vedere [ICommandText:: GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

La prima forma di `Create` accetta una stringa di comando Unicode. La seconda forma di `Create` accetta una stringa di comando ANSI, fornita per compatibilità con le versioni precedenti delle applicazioni ANSI esistenti.

## <a name="ccommandcreatecommand"></a><a name="createcommand"></a>CCommand:: CreateCommand

Crea un nuovo comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::CreateCommand(const CSession& session) throw ();
```

#### <a name="parameters"></a>Parametri

*sessione*<br/>
in Oggetto `CSession` da associare al nuovo comando.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo crea un comando utilizzando l'oggetto sessione specificato.

## <a name="ccommandgetparameterinfo"></a><a name="getparameterinfo"></a>CCommand:: GetParameterInfo

Ottiene un elenco di parametri, i relativi nomi e tipi del comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::GetParameterInfo(DB_UPARAMS* pParams,
   DBPARAMINFO** ppParamInfo,
   OLECHAR** ppNamesBuffer) throw ();
```

#### <a name="parameters"></a>Parametri

Vedere [ICommandWithParameters:: GetParameterInfo](/previous-versions/windows/desktop/ms714917(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccommandprepare"></a><a name="prepare"></a>CCommand::P ripare

Convalida e ottimizza il comando corrente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::Prepare(ULONG cExpectedRuns = 0) throw();
```

#### <a name="parameters"></a>Parametri

*cExpectedRuns*<br/>
in Il numero di volte in cui si prevede di eseguire il comando.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue il wrapping del metodo OLE DB [ICommandPrepare::P ripare](/previous-versions/windows/desktop/ms718370(v=vs.85)).

## <a name="ccommandreleasecommand"></a><a name="releasecommand"></a>CCommand:: ReleaseCommand

Rilascia la funzione di accesso del parametro, quindi rilascia il comando stesso.

### <a name="syntax"></a>Sintassi

```cpp
void CCommandBase::ReleaseCommand() throw();
```

### <a name="remarks"></a>Osservazioni

`ReleaseCommand` viene utilizzata insieme a `Close`. Vedere [Close](../../data/oledb/ccommand-close.md) per i dettagli di utilizzo.

## <a name="ccommandsetparameterinfo"></a><a name="setparameterinfo"></a>CCommand:: separameterinfo

Specifica il tipo nativo di ogni parametro di comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::SetParameterInfo(DB_UPARAMS ulParams,
   const DBORDINAL* pOrdinals,
   const DBPARAMBINDINFO* pParamInfo) throw();
```

#### <a name="parameters"></a>Parametri

Vedere [ICommandWithParameters:: separameterinfo](/previous-versions/windows/desktop/ms725393(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="ccommandunprepare"></a><a name="unprepare"></a>CCommand:: Unprepare

Rimuove il piano di esecuzione corrente dei comandi.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::Unprepare() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue il wrapping del metodo OLE DB [ICommandPrepare:: Unprep](/previous-versions/windows/desktop/ms719635(v=vs.85)).

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
