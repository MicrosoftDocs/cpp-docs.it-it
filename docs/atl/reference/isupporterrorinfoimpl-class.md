---
title: Classe ISupportErrorInfoImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
caps.latest.revision: 23
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
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 320cb27d1d22a5e4240861c934e9bcfabd731bad
ms.lasthandoff: 02/24/2017

---
# <a name="isupporterrorinfoimpl-class"></a>ISupportErrorInfoImpl (classe)
Questa classe fornisce un'implementazione predefinita di [interfaccia ISupportErrorInfo](http://msdn.microsoft.com/en-us/42d33066-36b4-4a5b-aa5d-46682e560f32) e può essere utilizzata quando un'unica interfaccia genera errori in un oggetto.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<const IID* piid>  
class ATL_NO_VTABLE ISupportErrorInfoImpl 
   : public ISupportErrorInfo
```  
  
#### <a name="parameters"></a>Parametri  
 `piid`  
 Un puntatore all'IID di interfaccia che supporta [IErrorInfo](http://msdn.microsoft.com/en-us/4dda6909-2d9a-4727-ae0c-b5f90dcfa447).  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ISupportErrorInfoImpl::InterfaceSupportsErrorInfo](#interfacesupportserrorinfo)|Indica se l'interfaccia identificato dal `riid` supporta il [IErrorInfo](http://msdn.microsoft.com/en-us/4dda6909-2d9a-4727-ae0c-b5f90dcfa447) interfaccia.|  
  
## <a name="remarks"></a>Note  
 Il [interfaccia ISupportErrorInfo](http://msdn.microsoft.com/en-us/42d33066-36b4-4a5b-aa5d-46682e560f32) assicura che le informazioni di errore possono essere restituite al client. Gli oggetti che utilizzano **IErrorInfo** deve implementare **ISupportErrorInfo**.  
  
 Classe `ISupportErrorInfoImpl` fornisce un'implementazione predefinita di **ISupportErrorInfo** e può essere utilizzata quando un'unica interfaccia genera errori in un oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM N.&48;](../../atl/codesnippet/cpp/isupporterrorinfoimpl-class_1.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ISupportErrorInfo`  
  
 `ISupportErrorInfoImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="interfacesupportserrorinfo"></a>ISupportErrorInfoImpl::InterfaceSupportsErrorInfo  
 Indica se l'interfaccia identificato dal `riid` supporta il [IErrorInfo](http://msdn.microsoft.com/en-us/4dda6909-2d9a-4727-ae0c-b5f90dcfa447) interfaccia.  
  
```
STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
```  
  
### <a name="remarks"></a>Note  
 Vedere [ISupportErrorInfo::InterfaceSupportsErrorInfo](http://msdn.microsoft.com/en-us/a54ef18d-ee3f-4483-ac4a-99d758f0960a) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getsize"></a>IThreadPoolConfig::GetSize  
 Chiamare questo metodo per ottenere il numero di thread nel pool.  
  
```
STDMETHOD(GetSize)(int* pnNumThreads);
```  
  
### <a name="parameters"></a>Parametri  
 `pnNumThreads`  
 [out] Indirizzo della variabile che, in caso di riuscita, riceve il numero di thread nel pool.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#134; NVC_ATL_Utilities](../../atl/codesnippet/cpp/isupporterrorinfoimpl-class_2.cpp)]  
  
##  <a name="gettimeout"></a>IThreadPoolConfig::GetTimeout  
 Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
```
STDMETHOD(GetTimeout)(DWORD* pdwMaxWait);
```  
  
### <a name="parameters"></a>Parametri  
 `pdwMaxWait`  
 [out] Indirizzo della variabile che, in caso di riuscita, riceve il tempo massimo in millisecondi che il pool di thread attenderà per un thread chiuso.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="example"></a>Esempio  
 Vedere [IThreadPoolConfig::GetSize](#getsize).  
  
##  <a name="setsize"></a>IThreadPoolConfig::SetSize  
 Chiamare questo metodo per impostare il numero di thread nel pool.  
  
```
STDMETHOD(SetSize)int nNumThreads);
```  
  
### <a name="parameters"></a>Parametri  
 `nNumThreads`  
 Il numero richiesto di thread nel pool.  
  
 Se `nNumThreads` è negativo, il valore assoluto corrispondente verrà moltiplicato per il numero di processori del computer per ottenere il numero totale di thread.  
  
 Se `nNumThreads` è zero, [ATLS_DEFAULT_THREADSPERPROC](http://msdn.microsoft.com/library/e0dcf107-72a9-4122-abb4-83c63aa7d571) verrà moltiplicata per il numero di processori del computer per ottenere il numero totale di thread.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="example"></a>Esempio  
 Vedere [IThreadPoolConfig::GetSize](#getsize).  
  
##  <a name="settimeout"></a>IThreadPoolConfig::SetTimeout  
 Chiamare questo metodo per impostare il tempo massimo in millisecondi che il pool di thread attenderà per un thread chiuso.  
  
```
STDMETHOD(SetTimeout)(DWORD dwMaxWait);
```  
  
### <a name="parameters"></a>Parametri  
 `dwMaxWait`  
 Il tempo massimo richiesto in millisecondi che il pool di thread attenderà per un thread chiuso.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="example"></a>Esempio  
 Vedere [IThreadPoolConfig::GetSize](#getsize).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

