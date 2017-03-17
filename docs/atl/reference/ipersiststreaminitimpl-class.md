---
title: Classe IPersistStreamInitImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IPersistStreamInitImpl
- ATLCOM/ATL::IPersistStreamInitImpl
- ATLCOM/ATL::IPersistStreamInitImpl::GetClassID
- ATLCOM/ATL::IPersistStreamInitImpl::GetSizeMax
- ATLCOM/ATL::IPersistStreamInitImpl::InitNew
- ATLCOM/ATL::IPersistStreamInitImpl::IsDirty
- ATLCOM/ATL::IPersistStreamInitImpl::Load
- ATLCOM/ATL::IPersistStreamInitImpl::Save
dev_langs:
- C++
helpviewer_keywords:
- IPersistStreamInit ATL implementation
- IPersistStreamInitImpl class
- streams, ATL
ms.assetid: ef217c3c-020f-4cf8-871e-ef68e57865b8
caps.latest.revision: 20
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
ms.openlocfilehash: aa8427a891ac8d8e18ec7794a12e838a55bc23c8
ms.lasthandoff: 02/24/2017

---
# <a name="ipersiststreaminitimpl-class"></a>Classe IPersistStreamInitImpl
Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita di [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class ATL_NO_VTABLE IPersistStreamInitImpl 
   : public IPersistStreamInit
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IPersistStreamInitImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPersistStreamInitImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|  
|[IPersistStreamInitImpl::GetSizeMax](#getsizemax)|Recupera le dimensioni del flusso necessario per salvare i dati dell'oggetto. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IPersistStreamInitImpl::InitNew](#initnew)|Inizializza un oggetto appena creato.|  
|[IPersistStreamInitImpl::IsDirty](#isdirty)|Controlla se i dati dell'oggetto è sono modificato dopo l'ultimo salvataggio.|  
|[IPersistStreamInitImpl::Load](#load)|Carica le proprietà dell'oggetto dal flusso specificato.|  
|[IPersistStreamInitImpl::Save](#save)|Salva le proprietà dell'oggetto nel flusso specificato.|  
  
## <a name="remarks"></a>Note  
 Il [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia consente a un client di richiedere che l'oggetto carica e Salva i dati persistenti in un singolo flusso. Classe `IPersistStreamInitImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPersistStreamInit`  
  
 `IPersistStreamInitImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="getclassid"></a>IPersistStreamInitImpl::GetClassID  
 Recupera il CLSID dell'oggetto.  
  
```
STDMETHOD(GetClassID)(CLSID* pClassID);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPersist:: GetClassID](http://msdn.microsoft.com/library/windows/desktop/ms688664) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getsizemax"></a>IPersistStreamInitImpl::GetSizeMax  
 Recupera le dimensioni del flusso necessario per salvare i dati dell'oggetto.  
  
```
STDMETHOD(GetSizeMax)(ULARGE_INTEGER FAR* pcbSize);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IPersistStreamInit::GetSizeMax](http://msdn.microsoft.com/library/windows/desktop/ms687287) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="initnew"></a>IPersistStreamInitImpl::InitNew  
 Inizializza un oggetto appena creato.  
  
```
STDMETHOD(InitNew)();
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPersistStreamInit::InitNew](http://msdn.microsoft.com/library/windows/desktop/ms690234) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="isdirty"></a>IPersistStreamInitImpl::IsDirty  
 Controlla se i dati dell'oggetto è sono modificato dopo l'ultimo salvataggio.  
  
```
STDMETHOD(IsDirty)();
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPersistStreamInit::IsDirty](http://msdn.microsoft.com/library/windows/desktop/ms680092) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="load"></a>IPersistStreamInitImpl::Load  
 Carica le proprietà dell'oggetto dal flusso specificato.  
  
```
STDMETHOD(Load)(LPSTREAM pStm);
```  
  
### <a name="remarks"></a>Note  
 ATL utilizza il mapping di proprietà dell'oggetto per recuperare queste informazioni.  
  
 Vedere [IPersistStreamInit::Load](http://msdn.microsoft.com/library/windows/desktop/ms680730) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="save"></a>IPersistStreamInitImpl::Save  
 Salva le proprietà dell'oggetto nel flusso specificato.  
  
```
STDMETHOD(Save)(LPSTREAM pStm, BOOL fClearDirty);
```  
  
### <a name="remarks"></a>Note  
 ATL utilizza il mapping di proprietà dell'oggetto per archiviare queste informazioni.  
  
 Vedere [IPersistStreamInit::Save](http://msdn.microsoft.com/library/windows/desktop/ms694439) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Flussi e archivi](http://msdn.microsoft.com/library/windows/desktop/aa380352)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

