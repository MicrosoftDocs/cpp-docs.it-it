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
ms.openlocfilehash: 52c7e2ce5acdd2df33e2a6422535a337f0a43aec
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368621"
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

*TAccesso*<br/>
Tipo di classe di funzioni di accesso (ad esempio `CDynamicParameterAccessor`, `CDynamicStringAccessor` o `CEnumeratorAccessor`) che si desidera venga utilizzata dal comando. L'impostazione predefinita è `CNoAccessor`, che specifica che la classe non supporta parametri o colonne di output.

*TRowset (Set di righe)*<br/>
Tipo di classe rowset (ad esempio `CArrayRowset` o `CNoRowset`) che si desidera venga utilizzata dal comando. Il valore predefinito è `CRowset`.

*Multiplo*<br/>
Per utilizzare un comando OLE DB che può restituire più risultati, specificare [CMultipleResults](../../data/oledb/cmultipleresults-class.md). In caso contrario, utilizzare [CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md). Per informazioni dettagliate, vedere [IMultipleResults](/previous-versions/windows/desktop/ms721289(v=vs.85)).

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
|[Crea](#create)|Crea un nuovo comando per la sessione specificata, quindi imposta il testo del comando.|
|[CreateCommand](#createcommand)|Crea un nuovo comando.|
|[GetParameterInfo](#getparameterinfo)|Ottiene un elenco di parametri, i relativi nomi e tipi del comando.|
|[Preparare](#prepare)|Convalida e ottimizza il comando corrente.|
|[ReleaseCommand](#releasecommand)|Rilascia la funzione di accesso parametro se necessario, quindi rilascia il comando.|
|[SetParameterInfo](#setparameterinfo)|Specifica il tipo nativo di ogni parametro di comando.|
|[Unprepare](#unprepare)|Rimuove il piano di esecuzione corrente dei comandi.|

## <a name="remarks"></a>Osservazioni

Utilizzare questa classe quando è necessario eseguire un'operazione basata su parametri o eseguire un comando. Se è sufficiente aprire un set di righe semplice, usare invece [CTable.If](../../data/oledb/ctable-class.md) you rely to open a simple rowset, use CTable instead.

La classe di funzioni di accesso che si sta utilizzando determina il metodo di associazione dei parametri e dei dati.

Notare che non è possibile utilizzare le stored procedure con il provider OLE BD per Jet, in quanto da questo non supportate. Nelle stringhe delle query sono infatti ammesse solo costanti.

## <a name="ccommandclose"></a><a name="close"></a>Comando::Chiudi

Rilascia il set di righe della funzione di accesso associato al comando.

### <a name="syntax"></a>Sintassi

```cpp
void Close();
```

### <a name="remarks"></a>Osservazioni

Un comando usa un set di righe, una funzione di accesso del set di risultati e (facoltativamente) una funzione di accesso ai parametri (a differenza delle tabelle, che non supportano i parametri e non richiedono una funzione di accesso ai parametri).

Quando si esegue un comando, `Close` è necessario chiamare entrambi e [ReleaseCommand](../../data/oledb/ccommand-releasecommand.md) dopo il comando.

Quando si desidera eseguire ripetutamente lo stesso comando, è necessario `Close` rilasciare `Execute`ogni funzione di accesso del set di risultati chiamando prima di chiamare . Alla fine della serie, è necessario rilasciare la `ReleaseCommand`funzione di accesso ai parametri chiamando . Un altro scenario comune è la chiamata di una stored procedure con parametri di output. In molti provider (ad esempio il provider OLE DB per SQL Server) i valori dei parametri di output non saranno accessibili fino a quando non si chiude la funzione di accesso del set di risultati. Chiamare `Close` per chiudere il set di righe restituito e la funzione di accesso del set di risultati, ma non la funzione di accesso ai parametri, consentendo in tal modo di recuperare i valori dei parametri di output.

### <a name="example"></a>Esempio

L'esempio seguente mostra come chiamare `Close` e `ReleaseCommand` quando si esegue più volte lo stesso comando.

[!code-cpp[NVC_OLEDB_Consumer#2](../../data/oledb/codesnippet/cpp/ccommand-close_1.cpp)]

## <a name="ccommandgetnextresult"></a><a name="getnextresult"></a>CCommand::GetNextResult

Recupera il set di risultati successivo, se disponibile.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetNextResult(DBROWCOUNT* pulRowsAffected,
   bool bBind = true) throw();
```

#### <a name="parameters"></a>Parametri

*pulRowsAffected*<br/>
[in/out] Puntatore alla memoria in cui viene restituito il numero di righe interessate da un comando.

*bAssociazione*<br/>
[in] Specifica se associare automaticamente il comando dopo l'esecuzione. Il valore predefinito è **true**, che determina l'associazione automatica del comando. L'impostazione di *bBind* **su false** impedisce l'associazione automatica del comando in modo che sia possibile eseguire l'associazione manualmente. (L'associazione manuale è di particolare interesse per gli utenti OLAP.

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se un set di risultati è stato recuperato in precedenza, questa funzione rilascia il set di risultati precedente e disassocia le colonne. Se *bBind* è **true**, associa le nuove colonne.

È necessario chiamare questa funzione solo se sono `CCommand` stati specificati più risultati impostando il parametro di modello *TMultiple*=`CMultipleResults`.

## <a name="ccommandopen"></a><a name="open"></a>Comando CComando::Aperto

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

*Sessione*<br/>
[in] Sessione in cui eseguire il comando.

*wszCommand (comando di wszCommand)*<br/>
[in] Comando da eseguire, passato come stringa Unicode. Può essere NULL `CAccessor`quando si utilizza , nel qual caso il comando verrà recuperato dal valore passato alla macro [DEFINE_COMMAND.](../../data/oledb/define-command.md) Per informazioni dettagliate, vedere [ICommand::Execute](/previous-versions/windows/desktop/ms718095(v=vs.85)) in *OLE DB Programmer's Reference* (informazioni in questo linguaggio Java).

*comando sz*<br/>
[in] Uguale a *wszCommand,* ad eccezione del fatto che questo parametro accetta una stringa di comando ANSI. La quarta forma di questo metodo può accettare un valore NULL. Per informazioni dettagliate, vedere "Osservazioni" più avanti in questo argomento.

*pPropSet*<br/>
[in] Puntatore a una matrice di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) contenente proprietà e valori da impostare. Vedere [Insiemi](/previous-versions/windows/desktop/ms713696(v=vs.85)) di proprietà e gruppi di proprietà in *OLE DB Programmer's Reference* in Windows SDK.

*pRowsAffected*<br/>
[in/out] Puntatore alla memoria in cui viene restituito il numero di righe interessate da un comando. Se * \*pRowsAffected* è NULL, non viene restituito alcun conteggio delle righe. In `Open` caso contrario, imposta * \*pRowsAffected* in base alle seguenti condizioni:

|Se|Risultato|
|--------|----------|
|`cParamSets` L'elemento `pParams` di è maggiore di 1|pRowsAffected rappresenta il numero totale di righe interessate da tutti i set di parametri specificati nell'esecuzione. * \**|
|Il numero di righe interessate non è disponibile|pRowsAffected è impostato su -1. * \**|
|Il comando non aggiorna, elimina o inserisce righe|pRowsAffected non è definito. * \**|

*guidCommand (comando)*<br/>
[in] GUID che specifica la sintassi e le regole generali per il provider da utilizzare nell'analisi del testo del comando. Vedere [ICommandText::GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) e [ICommandText::SetCommandText](/previous-versions/windows/desktop/ms709757(v=vs.85)) in *OLE DB Programmer's Reference* per i dettagli.

*bAssociazione*<br/>
[in] Specifica se associare automaticamente il comando dopo l'esecuzione. Il valore predefinito è **true**, che determina l'associazione automatica del comando. L'impostazione di *bBind* **su false** impedisce l'associazione automatica del comando in modo che sia possibile eseguire l'associazione manualmente. (L'associazione manuale è di particolare interesse per gli utenti OLAP.

*ulPropSets*<br/>
[in] Numero di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) passate nell'argomento *pPropSet.*

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

### <a name="remarks"></a>Osservazioni

Le prime tre `Open` forme di prendere una sessione, creare un comando ed eseguire il comando, associando tutti i parametri in base alle esigenze.

La prima `Open` forma di accetta una stringa di comando Unicode e non ha alcun valore predefinito.

La seconda `Open` forma di accetta una stringa di comando ANSI e nessun valore predefinito (fornito per la compatibilità con le applicazioni ANSI esistenti).

La terza `Open` forma di consente alla stringa di comando di essere NULL, a causa del tipo **int** con un valore predefinito NULL. Viene fornito per `Open(session, NULL);` `Open(session);` la chiamata o perché NULL è di tipo **int**. Questa versione richiede e asserisce che il **parametro int** sia NULL.

Utilizzare la quarta `Open` forma di quando è già stato creato un comando e si desidera eseguire una singola [preparazione](../../data/oledb/ccommand-prepare.md) e più esecuzioni.

> [!NOTE]
> `Open`chiamate `Execute`, che `GetNextResult`a loro volta chiama .

## <a name="ccommandcreate"></a><a name="create"></a>Comando::Creazione CCommand::Create

Chiama [CCommand::CreateCommand](../../data/oledb/ccommand-createcommand.md) per creare un comando per la sessione specificata, quindi chiama [ICommandText::SetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) per specificare il testo del comando.

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

*Sessione*<br/>
[in] Sessione in cui creare il comando.

*wszCommand (comando di wszCommand)*<br/>
[in] Puntatore al testo Unicode della stringa di comando.

*comando sz*<br/>
[in] Puntatore al testo ANSI della stringa di comando.

*guidCommand (comando)*<br/>
[in] GUID che specifica la sintassi e le regole generali per il provider da utilizzare nell'analisi del testo del comando. Per una descrizione dei dialetti, vedere [ICommandText::GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) in *OLE DB Programmer's Reference*.

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

### <a name="remarks"></a>Osservazioni

La prima `Create` forma di accetta una stringa di comando Unicode. La seconda `Create` forma di accetta una stringa di comando ANSI (fornita per la compatibilità con le applicazioni ANSI esistenti).

## <a name="ccommandcreatecommand"></a><a name="createcommand"></a>Comando::CreateCommandCCommand::CreateCommand

Crea un nuovo comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::CreateCommand(const CSession& session) throw ();
```

#### <a name="parameters"></a>Parametri

*Sessione*<br/>
[in] Oggetto `CSession` da associare al nuovo comando.

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo crea un comando utilizzando l'oggetto sessione specificato.

## <a name="ccommandgetparameterinfo"></a><a name="getparameterinfo"></a>Comando::GetParameterInfoCCommand::GetParameterInfo

Ottiene un elenco di parametri, i relativi nomi e tipi del comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::GetParameterInfo(DB_UPARAMS* pParams,
   DBPARAMINFO** ppParamInfo,
   OLECHAR** ppNamesBuffer) throw ();
```

#### <a name="parameters"></a>Parametri

Vedere [ICommandWithParameters::GetParameterInfo](/previous-versions/windows/desktop/ms714917(v=vs.85)) in *OLE DB Programmer's Reference*.

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

## <a name="ccommandprepare"></a><a name="prepare"></a>Comando CCommand::Prepare

Convalida e ottimizza il comando corrente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::Prepare(ULONG cExpectedRuns = 0) throw();
```

#### <a name="parameters"></a>Parametri

*cExpectedRuns*<br/>
[in] Il numero di volte in cui si prevede di eseguire il comando.

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue il wrapping del metodo OLE DB [ICommandPrepare::Prepare](/previous-versions/windows/desktop/ms718370(v=vs.85)).

## <a name="ccommandreleasecommand"></a><a name="releasecommand"></a>Comando::ReleaseCommandCCommand::ReleaseCommand

Rilascia la funzione di accesso ai parametri, quindi rilascia il comando stesso.

### <a name="syntax"></a>Sintassi

```cpp
void CCommandBase::ReleaseCommand() throw();
```

### <a name="remarks"></a>Osservazioni

`ReleaseCommand`viene utilizzato in `Close`combinazione con . Vedere [Chiudi](../../data/oledb/ccommand-close.md) per i dettagli sull'utilizzo.

## <a name="ccommandsetparameterinfo"></a><a name="setparameterinfo"></a>Comando::SetParameterInfoCCommand::SetParameterInfo

Specifica il tipo nativo di ogni parametro di comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::SetParameterInfo(DB_UPARAMS ulParams,
   const DBORDINAL* pOrdinals,
   const DBPARAMBINDINFO* pParamInfo) throw();
```

#### <a name="parameters"></a>Parametri

Vedere [ICommandWithParameters::SetParameterInfo](/previous-versions/windows/desktop/ms725393(v=vs.85)) in *OLE DB Programmer's Reference*.

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

## <a name="ccommandunprepare"></a><a name="unprepare"></a>CCommand::Unprepare

Rimuove il piano di esecuzione corrente dei comandi.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CCommandBase::Unprepare() throw();
```

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue il wrapping del metodo OLE DB [ICommandPrepare::Unprepare](/previous-versions/windows/desktop/ms719635(v=vs.85)).

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
