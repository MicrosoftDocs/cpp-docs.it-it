---
title: Funzioni globali di marshalling | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 877100b5-6ad9-44c5-a2e0-09414f1720d0
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: dd4b8d50ec69974b7b2af29438b1657e1ce592b4
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="marshaling-global-functions"></a>Funzioni globali di marshalling
Queste funzioni forniscono il supporto per il marshalling e conversione dei dati di marshalling in puntatori a interfaccia.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlFreeMarshalStream](#atlfreemarshalstream)|Rilascia i dati del marshalling e il `IStream` puntatore.|  
|[AtlMarshalPtrInProc](#atlmarshalptrinproc)|Crea un nuovo oggetto flusso ed effettua il marshalling del puntatore a interfaccia specificato.|  
|[AtlUnmarshalPtr](#atlunmarshalptr)|Converte i dati di marshalling del flusso in un puntatore a interfaccia.|  
  
##  <a name="atlfreemarshalstream"></a>AtlFreeMarshalStream  
 Rilascia i dati del marshalling nel flusso, quindi rilascia il puntatore di flusso.  

```
HRESULT AtlFreeMarshalStream(IStream* pStream);
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 [in] Un puntatore per il `IStream` interfaccia sul flusso utilizzato per effettuare il marshalling.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [AtlMarshalPtrInProc](#atlmarshalptrinproc).  
  
##  <a name="atlmarshalptrinproc"></a>AtlMarshalPtrInProc  
 Crea un nuovo oggetto flusso, scrivere il CLSID del proxy nel flusso ed effettua il marshalling del puntatore a interfaccia specificato scrivendo i dati necessari a inizializzare il proxy nel flusso.  
  
```
HRESULT AtlMarshalPtrInProc(
    IUnknown* pUnk,
    const IID& iid,
    IStream** ppStream);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Puntatore all'interfaccia per effettuare il marshalling.  
  
 `iid`  
 [in] Il GUID dell'interfaccia di cui effettuare il marshalling.  
  
 `ppStream`  
 [out] Un puntatore per il `IStream` interfaccia per il nuovo oggetto flusso utilizzato per effettuare il marshalling.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Il **MSHLFLAGS_TABLESTRONG** flag è impostato in modo il puntatore può essere sottoposto a marshalling in più flussi. Il puntatore può inoltre essere eseguito l'unmarshalling più volte.  
  
 Se il marshalling ha esito negativo, viene rilasciato il puntatore di flusso.  
  
 `AtlMarshalPtrInProc`può essere utilizzato solo su un puntatore a un oggetto in-process.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM &#50;](../../atl/codesnippet/cpp/marshaling-global-functions_1.cpp)]  
  
##  <a name="atlunmarshalptr"></a>AtlUnmarshalPtr  
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
 [out] Puntatore all'interfaccia unmarshalling.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [AtlMarshalPtrInProc](#atlmarshalptrinproc).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)

