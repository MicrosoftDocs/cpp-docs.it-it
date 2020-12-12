---
description: 'Altre informazioni su: classe ICommandImpl'
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
ms.openlocfilehash: 62066d689e51a8ca8a71bb8120199c05ed2811d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287385"
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
Classe derivata da `ICommandImpl` .

*CommandBase*<br/>
Interfaccia di comando. Il valore predefinito è `ICommand`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[Annulla](#cancel)|Annulla l'esecuzione del comando corrente.|
|[CancelExecution](#cancelexecution)|Annulla l'esecuzione del comando corrente.|
|[CreateRowset](#createrowset)|Crea un oggetto set di righe.|
|[Eseguire](#execute)|Viene eseguito il comando.|
|[GetDBSession](#getdbsession)|Restituisce un puntatore a interfaccia per la sessione che ha creato il comando.|
|[ICommandImpl](#icommandimpl)|Costruttore.|

### <a name="data-members"></a>Membri dei dati

| Nome | Description |
|-|-|
|[m_bCancel](#bcancel)|Indica se il comando deve essere annullato.|
|[m_bCancelWhenExecuting](#bcancelwhenexecuting)|Indica se il comando deve essere annullato durante l'esecuzione.|
|[m_bIsExecuting](#bisexecuting)|Indica se il comando è attualmente in esecuzione.|

## <a name="remarks"></a>Commenti

Interfaccia obbligatoria sull'oggetto Command.

## <a name="icommandimplcancel"></a><a name="cancel"></a> ICommandImpl:: Cancel

Annulla l'esecuzione del comando corrente.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(Cancel)();
```

### <a name="remarks"></a>Osservazioni

Vedere [ICommand:: Cancel](/previous-versions/windows/desktop/ms714402(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="icommandimplcancelexecution"></a><a name="cancelexecution"></a> ICommandImpl:: CancelExecution

Annulla l'esecuzione del comando corrente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CancelExecution();
```

## <a name="icommandimplcreaterowset"></a><a name="createrowset"></a> ICommandImpl:: CreateRowset

Chiamato da [Execute](#execute) per creare un singolo set di righe.

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
in Puntatore all'interfaccia di controllo `IUnknown` se il set di righe viene creato come parte di un'aggregazione; in caso contrario, è null.

*riid*<br/>
in Corrisponde a *riid* in `ICommand::Execute` .

*pParams*<br/>
[in/out] Corrisponde a *pParams* in `ICommand::Execute` .

*pcRowsAffected*<br/>
Corrisponde a *pcRowsAffected* in `ICommand::Execute` .

*ppRowset*<br/>
[in/out] Corrisponde a *ppRowset* in `ICommand::Execute` .

*pRowsetObj*<br/>
out Puntatore a un oggetto set di righe. In genere, questo parametro non viene utilizzato, ma può essere utilizzato se è necessario eseguire più operazioni sul set di righe prima di passarlo a un oggetto COM. Il ciclo di vita di *pRowsetObj* è associato a *ppRowset*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. `ICommand::Execute`Per un elenco di valori tipici, vedere.

### <a name="remarks"></a>Commenti

Per creare più di un set di righe o per fornire condizioni personalizzate per la creazione di set di righe diversi, effettuare chiamate diverse a `CreateRowset` dall'interno di `Execute` .

Vedere [ICommand:: Execute](/previous-versions/windows/desktop/ms718095(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB.*

## <a name="icommandimplexecute"></a><a name="execute"></a> ICommandImpl:: Execute

Viene eseguito il comando.

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

### <a name="remarks"></a>Commenti

L'interfaccia in uscita richiesta sarà un'interfaccia acquisita dall'oggetto set di righe creato da questa funzione.

`Execute` chiama [CreateRowset](#createrowset). Eseguire l'override dell'implementazione predefinita per creare più di un set di righe o fornire condizioni personalizzate per la creazione di set di righe diversi.

## <a name="icommandimplgetdbsession"></a><a name="getdbsession"></a> ICommandImpl:: GetDBSession

Restituisce un puntatore a interfaccia per la sessione che ha creato il comando.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetDBSession) (REFIID riid,
   IUnknown** ppSession);
```

#### <a name="parameters"></a>Parametri

Vedere [ICommand:: GetDBSession](/previous-versions/windows/desktop/ms719622(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Commenti

Utile per recuperare le proprietà dalla sessione.

## <a name="icommandimplicommandimpl"></a><a name="icommandimpl"></a> ICommandImpl:: ICommandImpl

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
ICommandImpl();
```

## <a name="icommandimplm_bcancel"></a><a name="bcancel"></a> ICommandImpl:: m_bCancel

Indica se il comando è stato annullato.

### <a name="syntax"></a>Sintassi

```cpp
unsigned m_bCancel:1;
```

### <a name="remarks"></a>Osservazioni

È possibile recuperare questa variabile nel `Execute` metodo della classe Command e annullarla in base alle esigenze.

## <a name="icommandimplm_bcancelwhenexecuting"></a><a name="bcancelwhenexecuting"></a> ICommandImpl:: m_bCancelWhenExecuting

Indica se il comando può essere annullato durante l'esecuzione.

### <a name="syntax"></a>Sintassi

```cpp
unsigned m_bCancelWhenExecuting:1;
```

### <a name="remarks"></a>Osservazioni

Il valore predefinito **`true`** è (può essere annullato).

## <a name="icommandimplm_bisexecuting"></a><a name="bisexecuting"></a> ICommandImpl:: m_bIsExecuting

Indica se il comando è attualmente in esecuzione.

### <a name="syntax"></a>Sintassi

```cpp
unsigned m_bIsExecuting:1;
```

### <a name="remarks"></a>Osservazioni

Il `Execute` metodo della classe Command può impostare questa variabile su **`true`** .

## <a name="see-also"></a>Vedi anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
