---
title: Classe ISupportErrorInfoImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- ISupportErrorInfoImpl
- ATLCOM/ATL::ISupportErrorInfoImpl
- ATLCOM/ATL::ISupportErrorInfoImpl::InterfaceSupportsErrorInfo
dev_langs:
- C++
helpviewer_keywords:
- ISupportErrorInfo ATL implementation
- ISupportErrorInfoImpl class
- error information, ATL
ms.assetid: e33a4b11-a123-41cf-bcea-7b19743902af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ed0e105443231853442296748f0e505f3df51b48
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43753708"
---
# <a name="isupporterrorinfoimpl-class"></a>Classe ISupportErrorInfoImpl

Questa classe fornisce un'implementazione predefinita del [ISupportErrorInfo interfaccia](/previous-versions/windows/desktop/api/oaidl/nn-oaidl-isupporterrorinfo) e può essere usato quando solo una singola interfaccia genera errori in un oggetto.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<const IID* piid>  
class ATL_NO_VTABLE ISupportErrorInfoImpl 
   : public ISupportErrorInfo
```

#### <a name="parameters"></a>Parametri

*piid*  
Un puntatore all'IID dell'interfaccia che supporta [IErrorInfo](/previous-versions/windows/desktop/api/oaidl/nn-oaidl-ierrorinfo).

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ISupportErrorInfoImpl::InterfaceSupportsErrorInfo](#interfacesupportserrorinfo)|Indica se l'interfaccia identificata dal `riid` supporta la [IErrorInfo](/previous-versions/windows/desktop/api/oaidl/nn-oaidl-ierrorinfo) interfaccia.|

## <a name="remarks"></a>Note

Il [ISupportErrorInfo interfaccia](/previous-versions/windows/desktop/api/oaidl/nn-oaidl-isupporterrorinfo) assicura che le informazioni sull'errore può essere restituiti al client. Agli oggetti che usano `IErrorInfo` deve implementare `ISupportErrorInfo`.

Classe `ISupportErrorInfoImpl` fornisce un'implementazione predefinita di `ISupportErrorInfo` e può essere usato quando solo una singola interfaccia genera errori in un oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#48](../../atl/codesnippet/cpp/isupporterrorinfoimpl-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISupportErrorInfo`

`ISupportErrorInfoImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="interfacesupportserrorinfo"></a>  ISupportErrorInfoImpl::InterfaceSupportsErrorInfo

Indica se l'interfaccia identificata dal `riid` supporta la [IErrorInfo](/previous-versions/windows/desktop/api/oaidl/nn-oaidl-ierrorinfo) interfaccia.

```
STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
```

### <a name="remarks"></a>Note

Visualizzare [ISupportErrorInfo::InterfaceSupportsErrorInfo](/previous-versions/windows/desktop/api/oaidl/nf-oaidl-isupporterrorinfo-interfacesupportserrorinfo) in Windows SDK.

##  <a name="getsize"></a>  IThreadPoolConfig::GetSize

Chiamare questo metodo per ottenere il numero di thread nel pool.

```
STDMETHOD(GetSize)(int* pnNumThreads);
```

### <a name="parameters"></a>Parametri

*pnNumThreads*  
[out] Indirizzo della variabile che, in caso di esito positivo riceve il numero di thread nel pool.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#134](../../atl/codesnippet/cpp/isupporterrorinfoimpl-class_2.cpp)]

##  <a name="gettimeout"></a>  IThreadPoolConfig::GetTimeout

Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.

```
STDMETHOD(GetTimeout)(DWORD* pdwMaxWait);
```

### <a name="parameters"></a>Parametri

*pdwMaxWait*  
[out] Indirizzo della variabile che, in caso di esito positivo riceve il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="example"></a>Esempio

Visualizzare [IThreadPoolConfig::GetSize](#getsize).

##  <a name="setsize"></a>  IThreadPoolConfig::SetSize

Chiamare questo metodo per impostare il numero di thread nel pool.

```
STDMETHOD(SetSize)int nNumThreads);
```

### <a name="parameters"></a>Parametri

*nNumThreads*  
Il numero richiesto di thread nel pool.

Se *nNumThreads* è negativo, il valore assoluto corrispondente verrà moltiplicato per il numero di processori del computer per ottenere il numero totale di thread.

Se *nNumThreads* è uguale a zero, ATLS_DEFAULT_THREADSPERPROC verrà moltiplicata per il numero di processori del computer per ottenere il numero totale di thread.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="example"></a>Esempio

Visualizzare [IThreadPoolConfig::GetSize](#getsize).

##  <a name="settimeout"></a>  IThreadPoolConfig::SetTimeout

Chiamare questo metodo per impostare il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.

```
STDMETHOD(SetTimeout)(DWORD dwMaxWait);
```

### <a name="parameters"></a>Parametri

*dwMaxWait*  
Il tempo massimo richiesto in millisecondi di attesa per un thread arrestare il pool di thread.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="example"></a>Esempio

Visualizzare [IThreadPoolConfig::GetSize](#getsize).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
