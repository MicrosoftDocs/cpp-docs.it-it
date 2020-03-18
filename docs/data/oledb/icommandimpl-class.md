---
title: Classe ICommandImpl
ms.date: 11/04/2016
f1_keywords:
- ICommandImpl
- ICommandImpl::Cancel
- Cancel
- ICommandImpl.Cancel
- ICommandImpl::CancelExecution
- ATL::ICommandImpl::CancelExecution
- ATL.ICommandImpl.CancelExecution
- CancelExecution
- ICommandImpl.CancelExecution
- ICommandImpl::CreateRowset
- ICommandImpl.CreateRowset
- CreateRowset
- ICommandImpl::Execute
- ICommandImpl.Execute
- ICommandImpl::GetDBSession
- GetDBSession
- ICommandImpl.GetDBSession
- ATL.ICommandImpl.ICommandImpl
- ATL::ICommandImpl::ICommandImpl
- ICommandImpl::ICommandImpl
- ICommandImpl.ICommandImpl
- ICommandImpl::m_bCancel
- ICommandImpl.m_bCancel
- m_bCancel
- ATL::ICommandImpl::m_bCancel
- ATL.ICommandImpl.m_bCancel
- ICommandImpl::m_bCancelWhenExecuting
- ICommandImpl.m_bCancelWhenExecuting
- ATL::ICommandImpl::m_bCancelWhenExecuting
- m_bCancelWhenExecuting
- ATL.ICommandImpl.m_bCancelWhenExecuting
- ICommandImpl.m_bIsExecuting
- ATL::ICommandImpl::m_bIsExecuting
- m_bIsExecuting
- ATL.ICommandImpl.m_bIsExecuting
- ICommandImpl::m_bIsExecuting
helpviewer_keywords:
- ICommandImpl class
- Cancel method
- CancelExecution method
- CreateRowset method
- Execute method
- GetDBSession method
- ICommandImpl constructor
- ICommandImpl class, constructor
- m_bCancel
- m_bCancelWhenExecuting
- m_bIsExecuting
ms.assetid: ef285fef-0d66-45e6-a762-b03357098e3b
ms.openlocfilehash: 6e095e01d3131f98b44935705b2564291fb13844
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447056"
---
# <a name="icommandimpl-class"></a>Classe ICommandImpl

Fornisce l'implementazione per l'interfaccia [ICommand](/previous-versions/windows/desktop/ms709737(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class CommandBase = ICommand>
class ATL_NO_VTABLE ICommandImpl : public CommandBase
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `ICommandImpl`.

*CommandBase*<br/>
Interfaccia di comando. Il valore predefinito è `ICommand`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[Annulla](#cancel)|Annulla l'esecuzione del comando corrente.|
|[CancelExecution](#cancelexecution)|Annulla l'esecuzione del comando corrente.|
|[CreateRowset](#createrowset)|Crea un oggetto set di righe.|
|[Eseguire](#execute)|Esegue il comando.|
|[GetDBSession](#getdbsession)|Restituisce un puntatore a interfaccia per la sessione che ha creato il comando.|
|[ICommandImpl](#icommandimpl)|Costruttore.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[m_bCancel](#bcancel)|Indica se il comando deve essere annullato.|
|[m_bCancelWhenExecuting](#bcancelwhenexecuting)|Indica se il comando deve essere annullato durante l'esecuzione.|
|[m_bIsExecuting](#bisexecuting)|Indica se il comando è attualmente in esecuzione.|

## <a name="remarks"></a>Osservazioni

Interfaccia obbligatoria sull'oggetto Command.

## <a name="cancel"></a>ICommandImpl:: Cancel

Annulla l'esecuzione del comando corrente.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(Cancel)();
```

### <a name="remarks"></a>Osservazioni

Vedere [ICommand:: Cancel](/previous-versions/windows/desktop/ms714402(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="cancelexecution"></a>ICommandImpl:: CancelExecution

Annulla l'esecuzione del comando corrente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CancelExecution();
```

## <a name="createrowset"></a>ICommandImpl:: CreateRowset

Chiamato da [Execute](../../data/oledb/icommandimpl-execute.md) per creare un singolo set di righe.

### <a name="syntax"></a>Sintassi

```cpp
template template <class RowsetClass>
HRESULT CreateRowset(IUnknown* pUnkOuter,
   REFIID riid,
   DBPARAMS* pParams,
   DBROWCOUNT* pcRowsAffected,
   IUnknown** ppRowset,
   RowsetClass*& pRowsetObj);
```

#### <a name="parameters"></a>Parametri

*RowsetClass*<br/>
Membro della classe modello che rappresenta la classe del set di righe dell'utente. Generalmente generato dalla procedura guidata.

*pUnkOuter*<br/>
in Puntatore all'interfaccia di controllo `IUnknown` se il set di righe viene creato come parte di un'aggregazione. in caso contrario, è null.

*riid*<br/>
in Corrisponde a *riid* in `ICommand::Execute`.

*pParams*<br/>
[in/out] Corrisponde a *pParams* in `ICommand::Execute`.

*pcRowsAffected*<br/>
Corrisponde a *pcRowsAffected* in `ICommand::Execute`.

*ppRowset*<br/>
[in/out] Corrisponde a *ppRowset* in `ICommand::Execute`.

*pRowsetObj*<br/>
out Puntatore a un oggetto set di righe. In genere, questo parametro non viene utilizzato, ma può essere utilizzato se è necessario eseguire più operazioni sul set di righe prima di passarlo a un oggetto COM. Il ciclo di vita di *pRowsetObj* è associato a *ppRowset*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. Per un elenco di valori tipici, vedere `ICommand::Execute`.

### <a name="remarks"></a>Osservazioni

Per creare più di un set di righe o per fornire condizioni personalizzate per la creazione di set di righe diversi, effettuare chiamate diverse a `CreateRowset` dall'interno `Execute`.

Vedere [ICommand:: Execute](/previous-versions/windows/desktop/ms718095(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB.*

## <a name="execute"></a>ICommandImpl:: Execute

Esegue il comando.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Execute(IUnknown* pUnkOuter,
   REFIID riid,
   DBPARAMS* pParams,
   DBROWCOUNT* pcRowsAffected,
   IUnknown** ppRowset);
```

#### <a name="parameters"></a>Parametri

Vedere [ICommand:: Execute](/previous-versions/windows/desktop/ms718095(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Osservazioni

L'interfaccia in uscita richiesta sarà un'interfaccia acquisita dall'oggetto set di righe creato da questa funzione.

`Execute` chiama [CreateRowset](../../data/oledb/icommandimpl-createrowset.md). Eseguire l'override dell'implementazione predefinita per creare più di un set di righe o fornire condizioni personalizzate per la creazione di set di righe diversi.

## <a name="getdbsession"></a>ICommandImpl:: GetDBSession

Restituisce un puntatore a interfaccia per la sessione che ha creato il comando.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetDBSession) (REFIID riid,
   IUnknown** ppSession);
```

#### <a name="parameters"></a>Parametri

Vedere [ICommand:: GetDBSession](/previous-versions/windows/desktop/ms719622(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Osservazioni

Utile per recuperare le proprietà dalla sessione.

## <a name="icommandimpl"></a>ICommandImpl:: ICommandImpl

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
ICommandImpl();
```

## <a name="bcancel"></a>ICommandImpl:: m_bCancel

Indica se il comando è stato annullato.

### <a name="syntax"></a>Sintassi

```cpp
unsigned m_bCancel:1;
```

### <a name="remarks"></a>Osservazioni

È possibile recuperare questa variabile nel metodo `Execute` della classe Command e annullarla in base alle esigenze.

## <a name="bcancelwhenexecuting"></a>ICommandImpl:: m_bCancelWhenExecuting

Indica se il comando può essere annullato durante l'esecuzione.

### <a name="syntax"></a>Sintassi

```cpp
unsigned m_bCancelWhenExecuting:1;
```

### <a name="remarks"></a>Osservazioni

Il valore predefinito è **true** (può essere annullato).

## <a name="bisexecuting"></a>ICommandImpl:: m_bIsExecuting

Indica se il comando è attualmente in esecuzione.

### <a name="syntax"></a>Sintassi

```cpp
unsigned m_bIsExecuting:1;
```

### <a name="remarks"></a>Osservazioni

Il metodo `Execute` della classe Command può impostare questa variabile su **true**.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)