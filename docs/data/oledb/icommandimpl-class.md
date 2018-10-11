---
title: Classe ICommandImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
- ICommandImpl
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5f04104aadc2897118a402a06d93db27a5a16079
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49082813"
---
# <a name="icommandimpl-class"></a>Classe ICommandImpl

Fornisce l'implementazione per il [ICommand](/previous-versions/windows/desktop/ms709737) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class CommandBase = ICommand>   
class ATL_NO_VTABLE ICommandImpl : public CommandBase  
```  
  
### <a name="parameters"></a>Parametri  

*T*<br/>
La classe, derivata da `ICommandImpl`.  
  
*CommandBase*<br/>
Un'interfaccia di comando. Il valore predefinito è `ICommand`.  

## <a name="requirements"></a>Requisiti  

**Intestazione:** atldb.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Annulla](#cancel)|Annulla l'esecuzione del comando corrente.|  
|[CancelExecution](#cancelexecution)|Annulla l'esecuzione del comando corrente.|  
|[CreateRowset](#createrowset)|Crea un oggetto set di righe.|  
|[Execute](#execute)|Esegue il comando.|  
|[GetDBSession](#getdbsession)|Restituisce un puntatore a interfaccia per la sessione che ha creato il comando.|  
|[ICommandImpl](#icommandimpl)|Costruttore.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_bCancel](#bcancel)|Indica se il comando deve essere annullata.|  
|[m_bCancelWhenExecuting](#bcancelwhenexecuting)|Indica se il comando deve essere annullato durante l'esecuzione.|  
|[m_bIsExecuting](#bisexecuting)|Indica se il comando attualmente in esecuzione.|  
  
## <a name="remarks"></a>Note  

Un'interfaccia obbligatoria per l'oggetto comando.  
  
## <a name="cancel"></a> ICommandImpl:: Cancel

Annulla l'esecuzione del comando corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(Cancel)();  
```  
  
### <a name="remarks"></a>Note  

Visualizzare [ICommand::Cancel](/previous-versions/windows/desktop/ms714402) nel *riferimento per programmatori OLE DB*.  

## <a name="cancelexecution"></a> ICommandImpl:: Cancelexecution

Annulla l'esecuzione del comando corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT CancelExecution();  
```  

## <a name="createrowset"></a> ICommandImpl:: CreateRowset

Chiamata eseguita dal [Execute](../../data/oledb/icommandimpl-execute.md) per creare un singolo set di righe.  
  
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
Un membro della classe modello che rappresenta la classe dell'utente del set di righe. In genere generato dalla procedura guidata.  
  
*pUnkOuter*<br/>
[in] Un puntatore all'interfaccia di controllo `IUnknown` interfaccia se il set di righe viene creato come parte di una funzione di aggregazione; in caso contrario, il valore è null.  
  
*riid*<br/>
[in] Corrisponde a *riid* in `ICommand::Execute`.  
  
*pParams*<br/>
[in/out] Corrisponde a *pParams* in `ICommand::Execute`.  
  
*pcRowsAffected*<br/>
Corrisponde a *pcRowsAffected* in `ICommand::Execute`.  
  
*ppRowset*<br/>
[in/out] Corrisponde a *ppRowset* in `ICommand::Execute`.  
  
*pRowsetObj*<br/>
[out] Un puntatore a un oggetto set di righe. In genere non viene usato questo parametro, ma può essere utilizzato se è necessario eseguire altre operazioni sul set di righe prima di passarlo a un oggetto COM. La durata del *pRowsetObj* associato da *ppRowset*.  
  
### <a name="return-value"></a>Valore restituito  

Un valore HRESULT standard. Vedere `ICommand::Execute` per un elenco di valori tipici.  
  
### <a name="remarks"></a>Note  

Per creare più di un set di righe o per fornire il proprio le condizioni per la creazione di diversi set di righe, inserire chiamate diverse al `CreateRowset` dall'interno `Execute`.  
  
Visualizzare [ICommand:: Execute](/previous-versions/windows/desktop/ms718095) nel *riferimento per programmatori OLE DB.*  

## <a name="execute"></a> ICommandImpl:: Execute

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

Visualizzare [ICommand:: Execute](/previous-versions/windows/desktop/ms718095) nel *riferimento per programmatori OLE DB*.  
  
### <a name="remarks"></a>Note  

L'interfaccia in uscita richiesta sarà un'interfaccia acquisita dall'oggetto set di righe che consente di creare questa funzione.  
  
`Execute` le chiamate [CreateRowset](../../data/oledb/icommandimpl-createrowset.md). Override dell'implementazione predefinita per creare più di un set di righe o per fornire il proprio le condizioni per la creazione di diversi set di righe.  

## <a name="getdbsession"></a> ICommandImpl:: Getdbsession

Restituisce un puntatore a interfaccia per la sessione che ha creato il comando.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD (GetDBSession) (REFIID riid,  
   IUnknown** ppSession);  
```  
  
#### <a name="parameters"></a>Parametri  

Visualizzare [ICommand::GetDBSession](/previous-versions/windows/desktop/ms719622) nel *riferimento per programmatori OLE DB*.  
  
### <a name="remarks"></a>Note  

È utile per il recupero delle proprietà dalla sessione.  

## <a name="icommandimpl"></a> ICommandImpl:: ICommandImpl

Costruttore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
ICommandImpl();  
```  

## <a name="bcancel"></a> ICommandImpl:: M_bcancel

Indica se il comando viene annullato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
unsigned m_bCancel:1;  
```  
  
### <a name="remarks"></a>Note  

È possibile recuperare in questa variabile il `Execute` metodo per la classe di comando e Annulla come appropriato. 

## <a name="bcancelwhenexecuting"></a> ICommandImpl:: M_bcancelwhenexecuting

Indica se il comando può essere annullato durante l'esecuzione.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
unsigned m_bCancelWhenExecuting:1;  
```  
  
### <a name="remarks"></a>Note  

Per impostazione predefinita **true** (possono essere annullate).  

## <a name="bisexecuting"></a> ICommandImpl:: M_bisexecuting

Indica se il comando attualmente in esecuzione.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
unsigned m_bIsExecuting:1;  
```  
  
### <a name="remarks"></a>Note  

Il `Execute` metodo della classe del comando può impostare questa variabile su **true**. 
  
## <a name="see-also"></a>Vedere anche  

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)