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
ms.openlocfilehash: fb7f103d8ea647f554d9bbf26c2e218d34f6b1ff
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50431850"
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

## <a name="remarks"></a>Note

Per altre informazioni, vedere [classe di RuntimeClass](runtimeclass-class.md).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

| Nome                         | Descrizione                                        |
| ---------------------------- | -------------------------------------------------- |
| [Ftmbase:: Ftmbase](#ftmbase) | Inizializza una nuova istanza della classe `FtmBase`. |

### <a name="public-methods"></a>Metodi pubblici

| Nome                                                               | Descrizione                                                                                                                                                          |
| ------------------------------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [Ftmbase:: Createglobalinterfacetable](#createglobalinterfacetable) | Crea una tabella di interfaccia globale (GIT).                                                                                                                              |
| [Ftmbase:: DisconnectObject](#disconnectobject)                     | Rilascia forzatamente tutte le connessioni esterne a un oggetto. Server dell'oggetto chiama l'implementazione dell'oggetto di questo metodo prima dell'arresto.                |
| [Ftmbase:: GetMarshalSizeMax](#getmarshalsizemax)                   | Ottenere il limite superiore al numero di byte necessari per effettuare il marshalling il puntatore di interfaccia specificata sull'oggetto specificato.                                                |
| [Ftmbase:: GetUnmarshalClass](#getunmarshalclass)                   | Ottiene il CLSID utilizzato da COM per individuare la DLL contenente il codice per il proxy corrispondente. COM carica la DLL per creare un'istanza del proxy non inizializzata. |
| [Ftmbase:: MarshalInterface](#marshalinterface)                     | Scrive in un flusso di dati necessari per inizializzare un oggetto proxy in un processo client.                                                                          |
| [Ftmbase:: ReleaseMarshalData](#releasemarshaldata)                 | Elimina un pacchetto viene eseguito il marshalling dei dati.                                                                                                                                    |
| [Ftmbase:: UnmarshalInterface](#unmarshalinterface)                 | Inizializza un proxy appena creato e restituisce un puntatore a interfaccia a tale proxy.                                                                                    |

### <a name="public-data-members"></a>Membri dati pubblici

| Nome                                | Descrizione                                       |
| ----------------------------------- | ------------------------------------------------- |
| [FtmBase::marshaller_](#marshaller) | Contiene un riferimento al gestore del marshalling a thread libero. |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`FtmBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** ftm.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="createglobalinterfacetable"></a>Ftmbase:: Createglobalinterfacetable

Crea una tabella di interfaccia globale (GIT).

```cpp
static HRESULT CreateGlobalInterfaceTable(
   __out IGlobalInterfaceTable **git
);
```

### <a name="parameters"></a>Parametri

*GIT*<br/>
Quando questa operazione viene completata, un puntatore a una tabella di interfaccia globale.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Note

Per altre informazioni, vedere la `IGlobalInterfaceTable` argomento in di `COM Interfaces` nell'argomento del `COM Reference` argomento in MSDN Library.

## <a name="disconnectobject"></a>Ftmbase:: DisconnectObject

Rilascia forzatamente tutte le connessioni esterne a un oggetto. Server dell'oggetto chiama l'implementazione dell'oggetto di questo metodo prima dell'arresto.

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

## <a name="ftmbase"></a>Ftmbase:: Ftmbase

Inizializza una nuova istanza della classe `FtmBase`.

```cpp
FtmBase();
```

## <a name="getmarshalsizemax"></a>Ftmbase:: GetMarshalSizeMax

Ottenere il limite superiore al numero di byte necessari per effettuare il marshalling il puntatore di interfaccia specificata sull'oggetto specificato.

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
Puntatore a interfaccia da sottoporre a marshalling; può essere NULL.

*dwDestContext*<br/>
Contesto di destinazione in cui l'interfaccia specificata deve essere sottoposta a unmarshalling.

Specificare uno o più valori di enumerazione MSHCTX.

Attualmente, l'unmarshalling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer come processo corrente (MSHCTX_LOCAL).

*pvDestContext*<br/>
Riservato per utilizzi futuri; deve essere NULL.

*mshlflags*<br/>
Flag che indica se i dati da sottoporre a marshalling deve essere trasmesso al processo client, ovvero il caso tipico, o scritti in una tabella globale, in cui può essere recuperato da più client. Specificare uno o più valori di enumerazione MSHLFLAGS.

*pSize*<br/>
Quando questa operazione viene completata, puntatore al limite massimo sulla quantità di dati da scrivere nel flusso di marshalling.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_FAIL o E_NOINTERFACE.

## <a name="getunmarshalclass"></a>Ftmbase:: GetUnmarshalClass

Ottiene il CLSID utilizzato da COM per individuare la DLL contenente il codice per il proxy corrispondente. COM carica la DLL per creare un'istanza del proxy non inizializzata.

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
Puntatore all'interfaccia da sottoporre a marshalling; può essere NULL se il chiamante non ha un puntatore all'interfaccia desiderata.

*dwDestContext*<br/>
Contesto di destinazione in cui l'interfaccia specificata deve essere sottoposta a unmarshalling.

Specificare uno o più valori di enumerazione MSHCTX.

L'unmarshaling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer come processo corrente (MSHCTX_LOCAL).

*pvDestContext*<br/>
Riservato per utilizzi futuri; deve essere NULL.

*mshlflags*<br/>
Quando questa operazione viene completata, puntatore al CLSID da utilizzare per creare un proxy nel processo client.

*pCid*

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario S_FALSE.

## <a name="marshalinterface"></a>Ftmbase:: MarshalInterface

Scrive in un flusso di dati necessari per inizializzare un oggetto proxy in un processo client.

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
Riferimento all'identificatore dell'interfaccia da sottoporre a marshalling. Questa interfaccia deve derivare dal `IUnknown` interfaccia.

*PV*<br/>
Puntatore al puntatore all'interfaccia da sottoporre a marshalling; può essere NULL se il chiamante non ha un puntatore all'interfaccia desiderata.

*dwDestContext*<br/>
Contesto di destinazione in cui l'interfaccia specificata deve essere sottoposta a unmarshalling.

Specificare uno o più valori di enumerazione MSHCTX.

L'unmarshaling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer come processo corrente (MSHCTX_LOCAL).

*pvDestContext*<br/>
Riservato per utilizzi futuri; deve essere zero.

*mshlflags*<br/>
Specifica se i dati da sottoporre a marshalling deve essere trasmesso al processo client, ovvero il caso tipico, o scritti in una tabella globale, in cui può essere recuperato da più client.

### <a name="return-value"></a>Valore restituito

S_OK il puntatore di interfaccia è stato effettuato il marshalling correttamente.

E_NOINTERFACE interfaccia specificata non è supportato.

STG_E_MEDIUMFULL il flusso è pieno.

E_FAIL l'operazione non riuscita.

## <a name="marshaller"></a>FtmBase::marshaller_

Contiene un riferimento al gestore del marshalling a thread libero.

```cpp
Microsoft::WRL::ComPtr<IMarshal> marshaller_; ;
```

## <a name="releasemarshaldata"></a>Ftmbase:: ReleaseMarshalData

Elimina un pacchetto viene eseguito il marshalling dei dati.

```cpp
STDMETHODIMP ReleaseMarshalData(
   __in IStream *pStm
) override;
```

### <a name="parameters"></a>Parametri

*pStm*<br/>
Puntatore a un flusso che contiene il pacchetto di dati da distruggere.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="unmarshalinterface"></a>Ftmbase:: UnmarshalInterface

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
Puntatore al flusso da cui il puntatore di interfaccia deve essere sottoposta a unmarshalling.

*riid*<br/>
Riferimento all'identificatore dell'interfaccia di essere sottoposta a unmarshalling.

*ppv*<br/>
Al termine di questa operazione, l'indirizzo di una variabile puntatore che riceve il puntatore a interfaccia richiesto *riid*. Se questa operazione ha esito positivo, **ppv* contiene il puntatore all'interfaccia richiesta dell'interfaccia di essere sottoposta a unmarshalling.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_NOINTERFACE o E_FAIL.
