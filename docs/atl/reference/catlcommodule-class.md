---
title: Classe CAtlComModule | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAtlComModule
- ATLBASE/ATL::CAtlComModule
- ATLBASE/ATL::CAtlComModule::CAtlComModule
- ATLBASE/ATL::CAtlComModule::RegisterServer
- ATLBASE/ATL::CAtlComModule::RegisterTypeLib
- ATLBASE/ATL::CAtlComModule::UnregisterServer
- ATLBASE/ATL::CAtlComModule::UnRegisterTypeLib
dev_langs:
- C++
helpviewer_keywords:
- CAtlComModule class
ms.assetid: af5dd71a-a0d1-4a2e-9a24-154a03381c75
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 47e85f3aab75f8fafb76977847ce36d37808af60
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="catlcommodule-class"></a>Classe CAtlComModule
Questa classe implementa un modulo di server COM.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAtlComModule : public _ATL_COM_MODULE
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlComModule::CAtlComModule](#catlcommodule)|Costruttore.|  
|[CAtlComModule:: ~ CAtlComModule](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlComModule::RegisterServer](#registerserver)|Chiamare questo metodo per aggiornare il Registro di sistema per ogni oggetto nella mappa oggetto.|  
|[CAtlComModule::RegisterTypeLib](#registertypelib)|Chiamare questo metodo per registrare una libreria dei tipi.|  
|[CAtlComModule::UnregisterServer](#unregisterserver)|Chiamare questo metodo per annullare la registrazione di ogni oggetto nella mappa oggetto.|  
|[CAtlComModule::UnRegisterTypeLib](#unregistertypelib)|Chiamare questo metodo per annullare la registrazione di una libreria dei tipi.|  
  
## <a name="remarks"></a>Note  
 `CAtlComModule` implementa un modulo di server COM, in modo che un client accedere ai componenti del modulo.  
  
 Questa classe sostituisce obsoleta [CComModule](../../atl/reference/ccommodule-class.md) classe utilizzata nelle versioni precedenti di ATL. Vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module)  
  
 `CAtlComModule`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="catlcommodule"></a>  CAtlComModule::CAtlComModule  
 Costruttore.  
  
```
CAtlComModule() throw();
```  
  
### <a name="remarks"></a>Note  
 Inizializza il modulo.  
  
##  <a name="dtor"></a>  CAtlComModule:: ~ CAtlComModule  
 Distruttore.  
  
```
~CAtlComModule();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le class factory.  
  
##  <a name="registerserver"></a>  CAtlComModule::RegisterServer  
 Chiamare questo metodo per aggiornare il Registro di sistema per ogni oggetto nella mappa oggetto.  
  
```
HRESULT RegisterServer(BOOL bRegTypeLib = FALSE, const CLSID* pCLSID = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `bRegTypeLib`  
 TRUE se la libreria dei tipi deve essere registrato. Il valore predefinito è FALSE.  
  
 `pCLSID`  
 Punta al CLSID dell'oggetto da registrare. Se NULL (valore predefinito), tutti gli oggetti nella mappa oggetto verrà registrato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiama la funzione globale [AtlComModuleRegisterServer](server-registration-global-functions.md#atlcommoduleregisterserver).  
  
##  <a name="registertypelib"></a>  CAtlComModule::RegisterTypeLib  
 Chiamare questo metodo per registrare una libreria dei tipi.  
  
```
HRESULT RegisterTypeLib(LPCTSTR lpszIndex);
HRESULT RegisterTypeLib();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszIndex`  
 Stringa nel formato "\\\N", dove N è l'indice integer della risorsa della libreria dei tipi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Aggiunge informazioni su una libreria dei tipi nel Registro di sistema. Se l'istanza del modulo contiene più librerie dei tipi, utilizzare la prima versione di questo metodo per specificare la libreria di tipo deve essere utilizzata.  
  
##  <a name="unregisterserver"></a>  CAtlComModule::UnregisterServer  
 Chiamare questo metodo per annullare la registrazione di ogni oggetto nella mappa oggetto.  
  
```
HRESULT UnregisterServer(
  BOOL bRegTypeLib = FALSE,  
  const CLSID* pCLSID = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `bRegTypeLib`  
 TRUE se è possibile annullare la registrazione della libreria dei tipi. Il valore predefinito è FALSE.  
  
 `pCLSID`  
 Punta al CLSID dell'oggetto da cui annullare la registrazione. Se NULL (valore predefinito), tutti gli oggetti nella mappa oggetto verrà annullata.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiama la funzione globale [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver).  
  
##  <a name="unregistertypelib"></a>  CAtlComModule::UnRegisterTypeLib  
 Chiamare questo metodo per annullare la registrazione di una libreria dei tipi.  
  
```
HRESULT UnRegisterTypeLib(LPCTSTR lpszIndex);
HRESULT UnRegisterTypeLib();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszIndex`  
 Stringa nel formato "\\\N", dove N è l'indice integer della risorsa della libreria dei tipi.  
  
### <a name="remarks"></a>Note  
 Rimuove una libreria dei tipi di informazioni dal Registro di sistema. Se l'istanza del modulo contiene più librerie dei tipi, utilizzare la prima versione di questo metodo per specificare la libreria di tipo deve essere utilizzata.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
## <a name="see-also"></a>Vedere anche  
 [_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
