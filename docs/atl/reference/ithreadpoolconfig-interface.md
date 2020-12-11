---
description: 'Altre informazioni su: interfaccia IThreadPoolConfig'
title: Interfaccia IThreadPoolConfig
ms.date: 11/04/2016
f1_keywords:
- IThreadPoolConfig
- ATLUTIL/ATL::IThreadPoolConfig
- ATLUTIL/ATL::GetSize
- ATLUTIL/ATL::GetTimeout
- ATLUTIL/ATL::SetSize
- ATLUTIL/ATL::SetTimeout
helpviewer_keywords:
- IThreadPoolConfig interface
ms.assetid: 69e642bf-6925-46e6-9a37-cce52231b1cc
ms.openlocfilehash: 143b456b08f7c5a14f99739cfe6bf424a3ee4baf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158010"
---
# <a name="ithreadpoolconfig-interface"></a>Interfaccia IThreadPoolConfig

Questa interfaccia fornisce metodi per la configurazione di un pool di thread.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
__interface
    __declspec(uuid("B1F64757-6E88-4fa2-8886-7848B0D7E660")) IThreadPoolConfig : public IUnknown
```

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|Nome|Description|
|-|-|
|[GetSize](#getsize)|Chiamare questo metodo per ottenere il numero di thread nel pool.|
|[GetTimeout](#gettimeout)|Chiamare questo metodo per ottenere il tempo massimo, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread.|
|[SetSize](#setsize)|Chiamare questo metodo per impostare il numero di thread nel pool.|
|[SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo massimo, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread.|

## <a name="remarks"></a>Commenti

Questa interfaccia viene implementata da [CThreadPool](../../atl/reference/cthreadpool-class.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="ithreadpoolconfiggetsize"></a><a name="getsize"></a> IThreadPoolConfig:: GetSize

Chiamare questo metodo per ottenere il numero di thread nel pool.

```
STDMETHOD(GetSize)(int* pnNumThreads);
```

### <a name="parameters"></a>Parametri

*pnNumThreads*<br/>
out Indirizzo della variabile che, in esito positivo, riceve il numero di thread nel pool.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#134](../../atl/codesnippet/cpp/ithreadpoolconfig-interface_1.cpp)]

## <a name="ithreadpoolconfiggettimeout"></a><a name="gettimeout"></a> IThreadPoolConfig:: getTimeout

Chiamare questo metodo per ottenere il tempo massimo, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread.

```
STDMETHOD(GetTimeout)(DWORD* pdwMaxWait);
```

### <a name="parameters"></a>Parametri

*pdwMaxWait*<br/>
out Indirizzo della variabile che, in caso di esito positivo, riceve il tempo massimo in millisecondi durante il quale il pool di thread resterà in attesa dell'arresto di un thread.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="example"></a>Esempio

Vedere [IThreadPoolConfig:: GetSize](#getsize).

## <a name="ithreadpoolconfigsetsize"></a><a name="setsize"></a> IThreadPoolConfig:: sesize

Chiamare questo metodo per impostare il numero di thread nel pool.

```
STDMETHOD(SetSize)int nNumThreads);
```

### <a name="parameters"></a>Parametri

*nNumThreads*<br/>
Numero richiesto di thread nel pool.

Se *nNumThreads* è negativo, il relativo valore assoluto verrà moltiplicato per il numero di processori nel computer per ottenere il numero totale di thread.

Se *nNumThreads* è zero, ATLS_DEFAULT_THREADSPERPROC verrà moltiplicato per il numero di processori nel computer per ottenere il numero totale di thread.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="example"></a>Esempio

Vedere [IThreadPoolConfig:: GetSize](#getsize).

## <a name="ithreadpoolconfigsettimeout"></a><a name="settimeout"></a> IThreadPoolConfig:: timeout

Chiamare questo metodo per impostare il tempo massimo, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread.

```
STDMETHOD(SetTimeout)(DWORD dwMaxWait);
```

### <a name="parameters"></a>Parametri

*dwMaxWait*<br/>
Tempo massimo richiesto, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="example"></a>Esempio

Vedere [IThreadPoolConfig:: GetSize](#getsize).

## <a name="see-also"></a>Vedi anche

[Classi](../../atl/reference/atl-classes.md)<br/>
[Classe CThreadPool](../../atl/reference/cthreadpool-class.md)
