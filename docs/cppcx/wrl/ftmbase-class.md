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
ms.openlocfilehash: f28a850c365bc9a75d8e5b100e5e5cc0a1c5dc10
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86404564"
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

Per ulteriori informazioni, vedere la [classe RuntimeClass](runtimeclass-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

| Nome                         | Descrizione                                        |
| ---------------------------- | -------------------------------------------------- |
| [FtmBase:: FtmBase](#ftmbase) | Inizializza una nuova istanza della classe `FtmBase`. |

### <a name="public-methods"></a>Metodi pubblici

| Nome                                                               | Descrizione                                                                                                                                                          |
| ------------------------------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [FtmBase:: CreateGlobalInterfaceTable](#createglobalinterfacetable) | Crea una tabella di interfaccia globale (GIT).                                                                                                                              |
| [FtmBase::D isconnectObject](#disconnectobject)                     | Rilascia forzatamente tutte le connessioni esterne a un oggetto. Il server dell'oggetto chiama l'implementazione dell'oggetto di questo metodo prima di arrestarsi.                |
| [FtmBase:: GetMarshalSizeMax](#getmarshalsizemax)                   | Ottenere il limite superiore per il numero di byte necessari per effettuare il marshalling del puntatore a interfaccia specificato nell'oggetto specificato.                                                |
| [FtmBase:: GetUnmarshalClass](#getunmarshalclass)                   | Ottiene il CLSID utilizzato da COM per individuare la DLL che contiene il codice per il proxy corrispondente. COM carica questa DLL per creare un'istanza non inizializzata del proxy. |
| [FtmBase:: MarshalInterface](#marshalinterface)                     | Scrive in un flusso i dati necessari per inizializzare un oggetto proxy in un processo client.                                                                          |
| [FtmBase:: ReleaseMarshalData](#releasemarshaldata)                 | Elimina un pacchetto di dati di cui è stato effettuato il marshalling.                                                                                                                                    |
| [FtmBase:: UnmarshalInterface](#unmarshalinterface)                 | Inizializza un proxy appena creato e restituisce un puntatore a interfaccia a tale proxy.                                                                                    |

### <a name="public-data-members"></a>Membri dati pubblici

| Nome                                | Descrizione                                       |
| ----------------------------------- | ------------------------------------------------- |
| [FtmBase:: marshaller_](#marshaller) | Include un riferimento al gestore di marshalling a thread libero. |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`FtmBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="ftmbasecreateglobalinterfacetable"></a><a name="createglobalinterfacetable"></a>FtmBase:: CreateGlobalInterfaceTable

Crea una tabella di interfaccia globale (GIT).

```cpp
static HRESULT CreateGlobalInterfaceTable(
   __out IGlobalInterfaceTable **git
);
```

### <a name="parameters"></a>Parametri

*git*<br/>
Al termine di questa operazione, un puntatore a una tabella di interfaccia globale.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [`IGlobalInterfaceTable`](https://docs.microsoft.com/windows/win32/api/objidl/nn-objidl-iglobalinterfacetable).

## <a name="ftmbasedisconnectobject"></a><a name="disconnectobject"></a>FtmBase::D isconnectObject

Rilascia forzatamente tutte le connessioni esterne a un oggetto. Il server dell'oggetto chiama l'implementazione dell'oggetto di questo metodo prima di arrestarsi.

```cpp
STDMETHODIMP DisconnectObject(
   __in DWORD dwReserved
) override;
```

### <a name="parameters"></a>Parametri

*dwReserved*<br/>
Riservato per utilizzi futuri; deve essere zero.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="ftmbaseftmbase"></a><a name="ftmbase"></a>FtmBase:: FtmBase

Inizializza una nuova istanza della classe `FtmBase`.

```cpp
FtmBase();
```

## <a name="ftmbasegetmarshalsizemax"></a><a name="getmarshalsizemax"></a>FtmBase:: GetMarshalSizeMax

Ottenere il limite superiore per il numero di byte necessari per effettuare il marshalling del puntatore a interfaccia specificato nell'oggetto specificato.

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

*riid*<br/>
Riferimento all'identificatore dell'interfaccia da sottoporre a marshalling.

*PV*<br/>
Puntatore a interfaccia di cui effettuare il marshalling; può essere NULL.

*dwDestContext*<br/>
Contesto di destinazione in cui viene eseguito l'unmarshalling dell'interfaccia specificata.

Specificare uno o più valori di Enumerazione MSHCTX.

Attualmente, l'unmarshalling può verificarsi in un altro Apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer del processo corrente (MSHCTX_LOCAL).

*pvDestContext*<br/>
Riservato per un utilizzo futuro; deve essere NULL.

*mshlflags*<br/>
Flag che indica se i dati di cui effettuare il marshalling devono essere trasmessi di nuovo al processo client, ovvero il caso tipico, o scritti in una tabella globale, dove possono essere recuperati da più client. Specificare uno o più valori di Enumerazione MSHLFLAGS.

*pSize*<br/>
Al termine di questa operazione, puntatore al limite superiore sulla quantità di dati da scrivere nel flusso di marshalling.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, E_FAIL o E_NOINTERFACE.

## <a name="ftmbasegetunmarshalclass"></a><a name="getunmarshalclass"></a>FtmBase:: GetUnmarshalClass

Ottiene il CLSID utilizzato da COM per individuare la DLL che contiene il codice per il proxy corrispondente. COM carica questa DLL per creare un'istanza non inizializzata del proxy.

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

*riid*<br/>
Riferimento all'identificatore dell'interfaccia da sottoporre a marshalling.

*PV*<br/>
Puntatore all'interfaccia di cui effettuare il marshalling; può essere NULL se il chiamante non dispone di un puntatore all'interfaccia desiderata.

*dwDestContext*<br/>
Contesto di destinazione in cui viene eseguito l'unmarshalling dell'interfaccia specificata.

Specificare uno o più valori di Enumerazione MSHCTX.

L'unmarshalling può verificarsi in un altro Apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer del processo corrente (MSHCTX_LOCAL).

*pvDestContext*<br/>
Riservato per un utilizzo futuro; deve essere NULL.

*mshlflags*<br/>
Al termine di questa operazione, puntatore al CLSID da utilizzare per creare un proxy nel processo client.

*pCid*

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, S_FALSE.

## <a name="ftmbasemarshalinterface"></a><a name="marshalinterface"></a>FtmBase:: MarshalInterface

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

*pStm*<br/>
Puntatore al flusso da utilizzare durante il marshalling.

*riid*<br/>
Riferimento all'identificatore dell'interfaccia da sottoporre a marshalling. Tale interfaccia deve derivare dall'interfaccia `IUnknown` .

*PV*<br/>
Puntatore al puntatore a interfaccia di cui effettuare il marshalling; può essere NULL se il chiamante non dispone di un puntatore all'interfaccia desiderata.

*dwDestContext*<br/>
Contesto di destinazione in cui viene eseguito l'unmarshalling dell'interfaccia specificata.

Specificare uno o più valori di Enumerazione MSHCTX.

L'unmarshalling può verificarsi in un altro Apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer del processo corrente (MSHCTX_LOCAL).

*pvDestContext*<br/>
Riservato per utilizzi futuri; deve essere zero.

*mshlflags*<br/>
Specifica se il marshalling dei dati deve essere trasmesso di nuovo al processo client, ovvero il caso tipico, o scritto in una tabella globale, in cui può essere recuperato da più client.

### <a name="return-value"></a>Valore restituito

S_OK il marshalling del puntatore a interfaccia riuscito.

E_NOINTERFACE l'interfaccia specificata non è supportata.

STG_E_MEDIUMFULL il flusso è pieno.

E_FAIL l'operazione non è riuscita.

## <a name="ftmbasemarshaller_"></a><a name="marshaller"></a>FtmBase:: marshaller_

Include un riferimento al gestore di marshalling a thread libero.

```cpp
Microsoft::WRL::ComPtr<IMarshal> marshaller_; ;
```

## <a name="ftmbasereleasemarshaldata"></a><a name="releasemarshaldata"></a>FtmBase:: ReleaseMarshalData

Elimina un pacchetto di dati di cui è stato effettuato il marshalling.

```cpp
STDMETHODIMP ReleaseMarshalData(
   __in IStream *pStm
) override;
```

### <a name="parameters"></a>Parametri

*pStm*<br/>
Puntatore a un flusso che contiene il pacchetto di dati da eliminare definitivamente.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="ftmbaseunmarshalinterface"></a><a name="unmarshalinterface"></a>FtmBase:: UnmarshalInterface

Inizializza un proxy appena creato e restituisce un puntatore a interfaccia a tale proxy.

```cpp
STDMETHODIMP UnmarshalInterface(
   __in IStream *pStm,
   __in REFIID riid,
   __deref_out void **ppv
) override;
```

### <a name="parameters"></a>Parametri

*pStm*<br/>
Puntatore al flusso da cui viene eseguito l'unmarshalling del puntatore a interfaccia.

*riid*<br/>
Riferimento all'identificatore dell'interfaccia di cui eseguire l'unmarshalling.

*PPV*<br/>
Al termine di questa operazione, l'indirizzo di una variabile puntatore che riceve il puntatore a interfaccia richiesto in *riid*. Se l'operazione ha esito positivo, **PPV* contiene il puntatore di interfaccia richiesto dell'interfaccia di cui eseguire l'unmarshalling.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, E_NOINTERFACE o E_FAIL.
