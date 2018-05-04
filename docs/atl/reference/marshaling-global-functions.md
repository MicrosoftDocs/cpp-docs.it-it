---
title: Funzioni globali di marshalling | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlbase/ATL::AtlFreeMarshalStream
- atlbase/ATL::AtlMarshalPtrInProc
- atlbase/ATL::AtlUnmarshalPtr
dev_langs:
- C++
ms.assetid: 877100b5-6ad9-44c5-a2e0-09414f1720d0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6d93839002ce5136d735e4740388109e855561fb
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="marshaling-global-functions"></a>Funzioni globali di marshalling
Queste funzioni forniscono il supporto per il marshalling e di conversione dei dati di marshalling in puntatori a interfaccia.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.  
  
|||  
|-|-|  
|[AtlFreeMarshalStream](#atlfreemarshalstream)|Rilascia i dati del marshalling e `IStream` puntatore.|  
|[AtlMarshalPtrInProc](#atlmarshalptrinproc)|Crea un nuovo oggetto flusso ed effettua il marshalling del puntatore a interfaccia specificato.|  
|[AtlUnmarshalPtr](#atlunmarshalptr)|Converte i dati del marshalling di un flusso in un puntatore a interfaccia.|  

## <a name="requirements"></a>Requisiti:
**Intestazione:** atlbase. h
  
##  <a name="atlfreemarshalstream"></a>  AtlFreeMarshalStream  
 Rilascia i dati del marshalling nel flusso, quindi rilascia il puntatore di flusso.  

```
HRESULT AtlFreeMarshalStream(IStream* pStream);
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 [in] Un puntatore al `IStream` interfaccia sul flusso utilizzato per effettuare il marshalling.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [AtlMarshalPtrInProc](#atlmarshalptrinproc).  
  
##  <a name="atlmarshalptrinproc"></a>  AtlMarshalPtrInProc  
 Crea un nuovo oggetto flusso, scrivere il CLSID del proxy nel flusso ed effettua il marshalling del puntatore a interfaccia specificato scrivendo i dati necessari a inizializzare il proxy nel flusso.  
  
```
HRESULT AtlMarshalPtrInProc(
    IUnknown* pUnk,
    const IID& iid,
    IStream** ppStream);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Un puntatore all'interfaccia di cui effettuare il marshalling.  
  
 `iid`  
 [in] Il GUID dell'interfaccia di cui effettuare il marshalling.  
  
 `ppStream`  
 [out] Un puntatore al `IStream` interfaccia per il nuovo oggetto flusso utilizzato per effettuare il marshalling.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Il **MSHLFLAGS_TABLESTRONG** flag è impostato in modo il puntatore può essere sottoposto a marshalling per più flussi. Il puntatore può inoltre essere unmarshalling più volte.  
  
 Se il marshalling ha esito negativo, viene rilasciato il puntatore di flusso.  
  
 `AtlMarshalPtrInProc` può essere utilizzato solo su un puntatore a un oggetto in-process.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#50](../../atl/codesnippet/cpp/marshaling-global-functions_1.cpp)]  
  
##  <a name="atlunmarshalptr"></a>  AtlUnmarshalPtr  
 Converte i dati del marshalling del flusso in un puntatore a interfaccia che può essere utilizzato dal client.  
   
```
HRESULT AtlUnmarshalPtr(
    IStream* pStream,
    const IID& iid,
    IUnknown** ppUnk);
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 [in] Un puntatore al flusso viene unmarshalling.  
  
 `iid`  
 [in] Il GUID dell'interfaccia da unmarshalling.  
  
 `ppUnk`  
 [out] Un puntatore all'interfaccia unmarshalling.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [AtlMarshalPtrInProc](#atlmarshalptrinproc).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)
