---
title: Classe CAtlDllModuleT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlDllModuleT
- ATLBASE/ATL::CAtlDllModuleT
- ATLBASE/ATL::CAtlDllModuleT::CAtlDllModuleT
- ATLBASE/ATL::CAtlDllModuleT::DllCanUnloadNow
- ATLBASE/ATL::CAtlDllModuleT::DllGetClassObject
- ATLBASE/ATL::CAtlDllModuleT::DllMain
- ATLBASE/ATL::CAtlDllModuleT::DllRegisterServer
- ATLBASE/ATL::CAtlDllModuleT::DllUnregisterServer
- ATLBASE/ATL::CAtlDllModuleT::GetClassObject
dev_langs:
- C++
helpviewer_keywords:
- CAtlDllModuleT class
ms.assetid: 351d5767-8257-4878-94be-45a85e31a72d
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 13cd0adb860660e06c92e8f02c07721ede391fb7
ms.lasthandoff: 02/24/2017

---
# <a name="catldllmodulet-class"></a>Classe CAtlDllModuleT
Questa classe rappresenta il modulo per una DLL.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE CAtlDllModuleT : public CAtlModuleT<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `CAtlDllModuleT`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlDllModuleT::CAtlDllModuleT](#catldllmodulet)|Costruttore.|  
|[CAtlDllModuleT:: ~ CAtlDllModuleT](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlDllModuleT::DllCanUnloadNow](#dllcanunloadnow)|Verifica se la DLL può essere scaricata.|  
|[CAtlDllModuleT::DllGetClassObject](#dllgetclassobject)|Restituisce una class factory.|  
|[CAtlDllModuleT::DllMain](#dllmain)|Il punto di ingresso facoltativo in una libreria di collegamento dinamico (DLL).|  
|[CAtlDllModuleT::DllRegisterServer](#dllregisterserver)|Aggiunge voci al Registro di sistema per gli oggetti nella DLL.|  
|[CAtlDllModuleT::DllUnregisterServer](#dllunregisterserver)|Rimuove le voci nel Registro di sistema per gli oggetti nella DLL.|  
|[CAtlDllModuleT::GetClassObject](#getclassobject)|Restituisce una class factory. Richiamato da [DllGetClassObject](#dllgetclassobject).|  
  
## <a name="remarks"></a>Note  
 `CAtlDllModuleT`rappresenta il modulo per una libreria di collegamento dinamico (DLL) e fornisce funzioni utilizzate da tutti i progetti DLL. La specializzazione di [CAtlModuleT](../../atl/reference/catlmodulet-class.md) classe include il supporto per la registrazione.  
  
 Per ulteriori informazioni sui moduli in ATL, vedere [classi di modulo ATL](../../atl/atl-module-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 `CAtlDllModuleT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="catldllmodulet"></a>CAtlDllModuleT::CAtlDllModuleT  
 Costruttore.  
  
```
CAtlDllModuleT() throw();
```  
  
##  <a name="dtor"></a>CAtlDllModuleT:: ~ CAtlDllModuleT  
 Distruttore.  
  
```
~CAtlDllModuleT() throw();
```  
  
##  <a name="dllcanunloadnow"></a>CAtlDllModuleT::DllCanUnloadNow  
 Verifica se la DLL può essere scaricata.  
  
```
HRESULT DllCanUnloadNow() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se la DLL può essere scaricata o S_FALSE se non è possibile.  
  
##  <a name="dllgetclassobject"></a>CAtlDllModuleT::DllGetClassObject  
 Restituisce la class factory.  
  
```
HRESULT DllGetClassObject(
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rclsid`  
 Il CLSID dell'oggetto da creare.  
  
 `riid`  
 L'IID dell'interfaccia richiesta.  
  
 `ppv`  
 Un puntatore al puntatore a interfaccia identificato da `riid`. Se l'oggetto non supporta questa interfaccia, `ppv` è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="dllmain"></a>CAtlDllModuleT::DllMain  
 Il punto di ingresso facoltativo in una libreria di collegamento dinamico (DLL).  
  
```
BOOL WINAPI DllMain(DWORD dwReason, LPVOID /* lpReserved*/) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwReason`  
 Se impostato su DLL_PROCESS_ATTACH, DLL_THREAD_ATTACH e DLL_THREAD_DETACH chiamate di notifica è disabilitato.  
  
 *lpReserved*  
 Riservato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre TRUE.  
  
### <a name="remarks"></a>Note  
 La disattivazione DLL_THREAD_ATTACH e DLL_THREAD_DETACH chiamate di notifica può essere un'ottimizzazione utile per applicazioni multithreading con molte DLL, che spesso creazione ed eliminazione di thread e DLL di cui non è necessario queste notifiche a livello di thread di allegati o la disconnessione.  
  
##  <a name="dllregisterserver"></a>CAtlDllModuleT::DllRegisterServer  
 Aggiunge voci al Registro di sistema per gli oggetti nella DLL.  
  
```
HRESULT DllRegisterServer(BOOL bRegTypeLib = TRUE) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bRegTypeLib`  
 TRUE se la libreria dei tipi deve essere registrato. Il valore predefinito è TRUE.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="dllunregisterserver"></a>CAtlDllModuleT::DllUnregisterServer  
 Rimuove le voci nel Registro di sistema per gli oggetti nella DLL.  
  
```
HRESULT DllUnregisterServer(BOOL bUnRegTypeLib = TRUE) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bUnRegTypeLib`  
 TRUE se la libreria dei tipi da rimuovere dal Registro di sistema. Il valore predefinito è TRUE.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="getclassobject"></a>CAtlDllModuleT::GetClassObject  
 Crea un oggetto del CLSID specificato.  
  
```
HRESULT GetClassObject(
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rclsid`  
 Il CLSID dell'oggetto da creare.  
  
 `riid`  
 L'IID dell'interfaccia richiesta.  
  
 `ppv`  
 Un puntatore al puntatore a interfaccia identificato da `riid`. Se l'oggetto non supporta questa interfaccia, `ppv` è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da [CAtlDllModuleT::DllGetClassObject](#dllgetclassobject) e viene inclusa per compatibilità con le versioni precedenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlModuleT](../../atl/reference/catlmodulet-class.md)   
 [Classe CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)

