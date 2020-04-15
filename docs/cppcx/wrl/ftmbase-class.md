---
title: FtmBase (classe)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase
- ftm/Microsoft::WRL::FtmBaseCreateGlobalInterfaceTable
- ftm/Microsoft::WRL::FtmBase::DisconnectObject
- ftm/Microsoft::WRL::FtmBase::FtmBase
- ftm/Microsoft::WRL::FtmBase::GetMarshalSizeMax
- ftm/Microsoft::WRL::FtmBase::GetUnmarshalClass
- ftm/Microsoft::WRL::FtmBase::MarshalInterface
- ftm/Microsoft::WRL::FtmBase::marshaller_
- ftm/Microsoft::WRL::FtmBase::ReleaseMarshalData
- ftm/Microsoft::WRL::FtmBase::UnmarshalInterface
helpviewer_keywords:
- Microsoft::WRL::FtmBase class
- Microsoft::WRL::FtmBase::CreateGlobalInterfaceTable method
- Microsoft::WRL::FtmBase::DisconnectObject method
- Microsoft::WRL::FtmBase::FtmBase, constructor
- Microsoft::WRL::FtmBase::GetMarshalSizeMax method
- Microsoft::WRL::FtmBase::GetUnmarshalClass method
- Microsoft::WRL::FtmBase::MarshalInterface method
- Microsoft::WRL::FtmBase::marshaller_ data member
- Microsoft::WRL::FtmBase::ReleaseMarshalData method
- Microsoft::WRL::FtmBase::UnmarshalInterface method
ms.assetid: 275f3b71-2975-4f92-89e7-d351e96496df
ms.openlocfilehash: d37cdddda8cf8894016ed80b9055fe106b1600f7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371509"
---
# <a name="ftmbase-class"></a>FtmBase (classe)

Rappresenta un oggetto gestore del marshalling a thread libero.

## <a name="syntax"></a>Sintassi

```cpp
class FtmBase :
    public Microsoft::WRL::Implements<
        Microsoft::WRL::RuntimeClassFlags<WinRtClassicComMix>,
        Microsoft::WRL::CloakedIid<IMarshal>
    >;
```

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Classe RuntimeClass](runtimeclass-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

| Nome                         | Descrizione                                        |
| ---------------------------- | -------------------------------------------------- |
| [FtmBase::FtmBaseFtmBase::FtmBase](#ftmbase) | Inizializza una nuova istanza della classe `FtmBase`. |

### <a name="public-methods"></a>Metodi pubblici

| Nome                                                               | Descrizione                                                                                                                                                          |
| ------------------------------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [FtmBase::CreateGlobalInterfaceTable](#createglobalinterfacetable) | Crea una tabella di interfaccia globale (GIT).                                                                                                                              |
| [FtmBase::DisconnectOggetto](#disconnectobject)                     | Rilascia con la velocità tutte le connessioni esterne a un oggetto. Il server dell'oggetto chiama l'implementazione dell'oggetto di questo metodo prima dell'arresto.                |
| [FtmBase::GetMarshalSizeMaxFtmBase::GetMarshalSizeMax](#getmarshalsizemax)                   | Ottenere il limite superiore sul numero di byte necessari per eseguire il marshalling del puntatore a interfaccia specificato sull'oggetto specificato.                                                |
| [FtmBase::GetUnmarshalClassFtmBase::GetUnmarshalClass](#getunmarshalclass)                   | Ottiene il CLSID utilizzato da COM per individuare la DLL contenente il codice per il proxy corrispondente. COM carica questa DLL per creare un'istanza non inizializzata del proxy. |
| [FtmBase::MarshalInterfaceFtmBase::MarshalInterface](#marshalinterface)                     | Scrive in un flusso i dati necessari per inizializzare un oggetto proxy in un processo client.                                                                          |
| [FtmBase::ReleaseMarshalDataFtmBase::ReleaseMarshalData](#releasemarshaldata)                 | Elimina un pacchetto di dati di cui è stato eseguito il marshalling.                                                                                                                                    |
| [FtmBase::UnmarshalInterface](#unmarshalinterface)                 | Inizializza un proxy appena creato e restituisce un puntatore a interfaccia a tale proxy.                                                                                    |

### <a name="public-data-members"></a>Membri dati pubblici

| Nome                                | Descrizione                                       |
| ----------------------------------- | ------------------------------------------------- |
| [FtmBase::marshaller_](#marshaller) | Contiene un riferimento al gestore di marshalling a thread libero. |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`FtmBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** ftm.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="ftmbasecreateglobalinterfacetable"></a><a name="createglobalinterfacetable"></a>FtmBase::CreateGlobalInterfaceTable

Crea una tabella di interfaccia globale (GIT).

```cpp
static HRESULT CreateGlobalInterfaceTable(
   __out IGlobalInterfaceTable **git
);
```

### <a name="parameters"></a>Parametri

*Git*<br/>
Al termine di questa operazione, un puntatore a una tabella di interfaccia globale.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, `IGlobalInterfaceTable` vedere `COM Interfaces` l'argomento `COM Reference` nell'argomento secondario dell'argomento di MSDN Library.

## <a name="ftmbasedisconnectobject"></a><a name="disconnectobject"></a>FtmBase::DisconnectOggetto

Rilascia con la velocità tutte le connessioni esterne a un oggetto. Il server dell'oggetto chiama l'implementazione dell'oggetto di questo metodo prima dell'arresto.

```cpp
STDMETHODIMP DisconnectObject(
   __in DWORD dwReserved
) override;
```

### <a name="parameters"></a>Parametri

*dwRiservato*<br/>
Riservato per utilizzi futuri; deve essere zero.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="ftmbaseftmbase"></a><a name="ftmbase"></a>FtmBase::FtmBaseFtmBase::FtmBase

Inizializza una nuova istanza della classe `FtmBase`.

```cpp
FtmBase();
```

## <a name="ftmbasegetmarshalsizemax"></a><a name="getmarshalsizemax"></a>FtmBase::GetMarshalSizeMaxFtmBase::GetMarshalSizeMax

Ottenere il limite superiore sul numero di byte necessari per eseguire il marshalling del puntatore a interfaccia specificato sull'oggetto specificato.

```cpp
STDMETHODIMP GetMarshalSizeMax(
   __in REFIID riid,
   __in_opt void *pv,
   __in DWORD dwDestContext,
   __reserved void *pvDestContext,
   __in DWORD mshlflags,
   __out DWORD *pSize
) override;
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
Riferimento all'identificatore dell'interfaccia di cui eseguire il marshalling.

*Pv*<br/>
Puntatore a interfaccia di cui eseguire il marshalling; può essere NULL.

*dwDestContext*<br/>
Contesto di destinazione in cui deve essere eseguito l'unmarshalling dell'interfaccia specificata.

Specificare uno o più valori di enumerazione MSHCTX.

Attualmente, l'unmarshalling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer del processo corrente (MSHCTX_LOCAL).

*pvDestContext*<br/>
Riservato per uso futuro; deve essere NULL.

*mshlflags*<br/>
Flag che indica se i dati di cui eseguire il marshalling devono essere trasmessi al processo client, ovvero nel caso tipico, o scritti in una tabella globale, dove possono essere recuperati da più client. Specificare uno o più valori di enumerazione MSHLFLAGS.

*pDimensioni*<br/>
Al termine di questa operazione, puntatore al limite superiore sulla quantità di dati da scrivere nel flusso di marshalling.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, E_FAIL o E_NOINTERFACE.

## <a name="ftmbasegetunmarshalclass"></a><a name="getunmarshalclass"></a>FtmBase::GetUnmarshalClassFtmBase::GetUnmarshalClass

Ottiene il CLSID utilizzato da COM per individuare la DLL contenente il codice per il proxy corrispondente. COM carica questa DLL per creare un'istanza non inizializzata del proxy.

```cpp
STDMETHODIMP GetUnmarshalClass(
   __in REFIID riid,
   __in_opt void *pv,
   __in DWORD dwDestContext,
   __reserved void *pvDestContext,
   __in DWORD mshlflags,
   __out CLSID *pCid
) override;
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
Riferimento all'identificatore dell'interfaccia di cui eseguire il marshalling.

*Pv*<br/>
Puntatore all'interfaccia di cui eseguire il marshalling; può essere NULL se il chiamante non dispone di un puntatore all'interfaccia desiderata.

*dwDestContext*<br/>
Contesto di destinazione in cui deve essere eseguito l'unmarshalling dell'interfaccia specificata.

Specificare uno o più valori di enumerazione MSHCTX.

L'annullamento del marshalling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer del processo corrente (MSHCTX_LOCAL).

*pvDestContext*<br/>
Riservato per uso futuro; deve essere NULL.

*mshlflags*<br/>
Al termine dell'operazione, puntatore al CLSID da utilizzare per creare un proxy nel processo client.

*pCid*

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, S_FALSE.

## <a name="ftmbasemarshalinterface"></a><a name="marshalinterface"></a>FtmBase::MarshalInterfaceFtmBase::MarshalInterface

Scrive in un flusso i dati necessari per inizializzare un oggetto proxy in un processo client.

```cpp
STDMETHODIMP MarshalInterface(
   __in IStream *pStm,
   __in REFIID riid,
   __in_opt void *pv,
   __in DWORD dwDestContext,
   __reserved void *pvDestContext,
   __in DWORD mshlflags
) override;
```

### <a name="parameters"></a>Parametri

*pStm (in questo stato instato)*<br/>
Puntatore al flusso da utilizzare durante il marshalling.

*Riid*<br/>
Riferimento all'identificatore dell'interfaccia di cui eseguire il marshalling. Tale interfaccia deve derivare dall'interfaccia `IUnknown` .

*Pv*<br/>
Puntatore al puntatore a interfaccia di cui eseguire il marshalling; può essere NULL se il chiamante non dispone di un puntatore all'interfaccia desiderata.

*dwDestContext*<br/>
Contesto di destinazione in cui deve essere eseguito l'unmarshalling dell'interfaccia specificata.

Specificare uno o più valori di enumerazione MSHCTX.

L'annullamento del marshalling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer del processo corrente (MSHCTX_LOCAL).

*pvDestContext*<br/>
Riservato per utilizzi futuri; deve essere zero.

*mshlflags*<br/>
Specifica se i dati di cui eseguire il marshalling devono essere trasmessi al processo client, ovvero il caso tipico, o scritti in una tabella globale, dove possono essere recuperati da più client.

### <a name="return-value"></a>Valore restituito

S_OK È stato eseguito correttamente il marshalling del puntatore a interfaccia.

E_NOINTERFACE L'interfaccia specificata non è supportata.

STG_E_MEDIUMFULL Il flusso è pieno.

E_FAIL L'operazione non è riuscita.

## <a name="ftmbasemarshaller_"></a><a name="marshaller"></a>FtmBase::marshaller_

Contiene un riferimento al gestore di marshalling a thread libero.

```cpp
Microsoft::WRL::ComPtr<IMarshal> marshaller_; ;
```

## <a name="ftmbasereleasemarshaldata"></a><a name="releasemarshaldata"></a>FtmBase::ReleaseMarshalDataFtmBase::ReleaseMarshalData

Elimina un pacchetto di dati di cui è stato eseguito il marshalling.

```cpp
STDMETHODIMP ReleaseMarshalData(
   __in IStream *pStm
) override;
```

### <a name="parameters"></a>Parametri

*pStm (in questo stato instato)*<br/>
Puntatore a un flusso che contiene il pacchetto di dati da eliminare.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="ftmbaseunmarshalinterface"></a><a name="unmarshalinterface"></a>FtmBase::UnmarshalInterface

Inizializza un proxy appena creato e restituisce un puntatore a interfaccia a tale proxy.

```cpp
STDMETHODIMP UnmarshalInterface(
   __in IStream *pStm,
   __in REFIID riid,
   __deref_out void **ppv
) override;
```

### <a name="parameters"></a>Parametri

*pStm (in questo stato instato)*<br/>
Puntatore al flusso da cui deve essere eseguito l'unmarshalling del puntatore a interfaccia.

*Riid*<br/>
Riferimento all'identificatore dell'interfaccia di cui eseguire l'unmarshalling.

*Ppv*<br/>
Al termine di questa operazione, l'indirizzo di una variabile puntatore che riceve il puntatore a interfaccia richiesto in *riid*. Se l'operazione ha esito positivo,*ppv* contiene il puntatore a interfaccia richiesto dell'interfaccia di cui eseguire l'unmarshalling.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, E_NOINTERFACE o E_FAIL.
