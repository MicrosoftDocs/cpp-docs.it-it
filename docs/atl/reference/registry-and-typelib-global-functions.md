---
title: Funzioni globali Registry e TypeLib | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- RegistryDataExchange function, global functions
ms.assetid: d58b8a4e-975c-4417-8b34-d3c847f679b3
caps.latest.revision: 22
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
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 9f05db468d5d7fffce149d7a92ba29615c3ae7c1
ms.lasthandoff: 03/31/2017

---
# <a name="registry-and-typelib-global-functions"></a>Funzioni globali Registry e TypeLib
Queste funzioni forniscono il supporto per il caricamento e la registrazione di una libreria dei tipi.  
  
> [!IMPORTANT]
>  Le funzioni elencate nelle tabelle seguenti non possono essere utilizzate nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AfxRegCreateKey](#afxrefcreatekey)|Crea la chiave del Registro di sistema.|
|[AfxRegDeleteKey](#afxrefdeletekey)|Elimina la chiave del Registro di sistema.|
|[AfxRegisterPreviewHandler](#afxregisterpreviewhandler)|Supporto per registrare un gestore di anteprima.|
|[AfxUnregisterPreviewHandler](#afxunregisterpreviewhandler)| Supporto per annullare la registrazione di un gestore di anteprima. |
|[AtlRegisterTypeLib](#atlregistertypelib)|Questa funzione viene chiamata per registrare una libreria dei tipi.|  
|[AtlUnRegisterTypeLib](#atlunregistertypelib)|Questa funzione viene chiamata per annullare la registrazione di una libreria dei tipi|  
|[AfxRegOpenKey](#afxregopenkey)|Apre la chiave del Registro di sistema.|
|[AfxRegOpenKeyEx](#afxregopenkeyex)|Apre la chiave del Registro di sistema.|
|[AtlLoadTypeLib](#atlloadtypelib)|Questa funzione viene chiamata per caricare una libreria dei tipi.|  
|[AtlUpdateRegistryFromResourceD](#atlupdateregistryfromresourced)|Questa funzione viene chiamata per aggiornare il Registro di sistema dalla risorsa specificata.|  
|[RegistryDataExchange](#registrydataexchange)|Questa funzione viene chiamata per leggere o scrivere nel Registro di sistema. Chiamato dal [macro di scambio di dati del Registro di sistema](../../atl/reference/registry-data-exchange-macros.md).|  
  
 Queste funzioni di controllo quale nodo utilizzati per archiviare le informazioni del Registro di sistema.  
  
|||  
|-|-|  
|[AtlGetPerUserRegistration](#atlgetperuserregistration)|Specifica se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.|  
|[AtlSetPerUserRegistration](#atlsetperuserregistration)|Imposta se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.|  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h

## <a name="atlgetperuserregistration"></a>AtlGetPerUserRegistration
Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** (**HKCU**) nodo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ATLINLINE ATLAPI AtlGetPerUserRegistration(bool* pEnabled);  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `pEnabled`  
 `TRUE`indica che le informazioni del Registro di sistema viene indirizzate al **HKCU** nodo; `FALSE` indica che l'applicazione scrive le informazioni del Registro di sistema per il nodo predefinito. Il nodo di valore predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se il metodo ha esito positivo, in caso contrario il `HRESULT` codice di errore se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Reindirizzamento del Registro di sistema non è abilitato per impostazione predefinita. Se si abilita questa opzione, l'accesso al registro viene reindirizzato a **HKEY_CURRENT_USER\Software\Classes**.  
  
 Il reindirizzamento non è globale. Solo i framework MFC e ATL sono interessati da questo reindirizzamento del Registro di sistema.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  

 ## <a name="afxregcreatekey"></a>AfxRegCreateKey
 Crea la chiave del Registro di sistema.  
  
### <a name="syntax"></a>Sintassi  
  
```  
LONG AFXAPI AfxRegCreateKey(HKEY hKey, LPCTSTR lpSubKey, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 `hKey`  
 Un handle a una chiave del Registro di sistema aprire.  
  
 `lpSubKey`  
 Il nome di questa funzione apre o crea una chiave.  
  
 `phkResult`  
 Puntatore a una variabile che riceve un handle per la chiave creata o aperta.  
  
 `pTM`  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpriv.h  

## <a name="afxregdeletekey"></a>AfxRegDeleteKey
Elimina la chiave del Registro di sistema.  
  
### <a name="syntax"></a>Sintassi  
  
```  
LONG AFXAPI AfxRegDeleteKey(HKEY hKey, LPCTSTR lpSubKey, CAtlTransactionManager* pTM = NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 `hKey`  
 Un handle a una chiave del Registro di sistema aprire.  
  
 `lpSubKey`  
 Il nome della chiave da eliminare.  
  
 `pTM`  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpriv.h  

## <a name="afxregisterpreviewhandler"></a>
Supporto per registrare un gestore di anteprima.  
  
### <a name="syntax"></a>Sintassi  
  
```  
BOOL AFXAPI AfxRegisterPreviewHandler(LPCTSTR lpszCLSID, LPCTSTR lpszShortTypeName, LPCTSTR lpszFilterExt);  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszCLSID`  
 Specifica il CLSID del gestore.  
  
 `lpszShortTypeName`  
 Specifica il ProgID del gestore.  
  
 `lpszFilterExt`  
 Specifica l'estensione di file registrato con questo gestore.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h   

##  <a name="atlregistertypelib"></a>AtlRegisterTypeLib  
 Questa funzione viene chiamata per registrare una libreria dei tipi.  
  
  
```
ATLAPI AtlRegisterTypeLib(HINSTANCE hInstTypeLib, LPCOLESTR lpszIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `hInstTypeLib`  
 Handle di istanza del modulo.  
  
 `lpszIndex`  
 Stringa nel formato "\\\N", dove N è l'indice integer della risorsa libreria dei tipi. Può essere NULL se è richiesto alcun indice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione di supporto usata da [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver) e [CAtlComModule::RegisterTypeLib](../../atl/reference/catlcommodule-class.md#registertypelib).  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h

 ## <a name="afxregopenkey"></a>AfxRegOpenKey
 Apre la chiave del Registro di sistema.  
  
### <a name="syntax"></a>Sintassi  
  
```  
LONG AFXAPI AfxRegOpenKey(HKEY hKey, LPCTSTR lpSubKey, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 `hKey`  
 Un handle a una chiave del Registro di sistema aprire.  
  
 `lpSubKey`  
 Il nome di questa funzione apre o crea una chiave.  
  
 `phkResult`  
 Puntatore a una variabile che riceve un handle per la chiave creata.  
  
 `pTM`  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpriv.h  

## <a name="afxregopenkeyex"></a>AfxRegOpenKeyEx
Apre la chiave del Registro di sistema. 

### <a name="syntax"></a>Sintassi  
  
```  
LONG AFXAPI AfxRegOpenKeyEx(HKEY hKey, LPCTSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 `hKey`  
 Un handle a una chiave del Registro di sistema aprire.  
  
 `lpSubKey`  
 Il nome di questa funzione apre o crea una chiave.  
  
 `ulOptions`  
 Questo parametro è riservato e deve essere zero.  
  
 `samDesired`  
 Maschera che specifica i diritti di accesso desiderato alla chiave.  
  
 `phkResult`  
 Puntatore a una variabile che riceve un handle per la chiave aperta.  
  
 `pTM`  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpriv.h  

 ## <a name="afxunregisterpreviewhandler"></a>AfxUnregisterPreviewHandler
 Supporto per annullare la registrazione di un gestore di anteprima.  
  
### <a name="syntax"></a>Sintassi  
  
```  
BOOL AFXAPI AfxUnRegisterPreviewHandler(LPCTSTR lpszCLSID);  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszCLSID`  
 Specifica il CLSID del gestore di cui annullare la registrazione.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  

## <a name="atlsetperuserregistration"></a>AtlSetPerUserRegistration
Imposta se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** (**HKCU**) nodo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ATLINLINE ATLAPI AtlSetPerUserRegistration(bool bEnable);  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`indica che le informazioni del Registro di sistema viene indirizzate al **HKCU** nodo; `FALSE` indica che l'applicazione scrive le informazioni del Registro di sistema per il nodo predefinito. Il nodo di valore predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se il metodo ha esito positivo, in caso contrario il `HRESULT` codice di errore se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Reindirizzamento del Registro di sistema non è abilitato per impostazione predefinita. Se si abilita questa opzione, l'accesso al registro viene reindirizzato a **HKEY_CURRENT_USER\Software\Classes**.  
  
 Il reindirizzamento non è globale. Solo i framework MFC e ATL sono interessati da questo reindirizzamento del Registro di sistema.  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  

##  <a name="atlunregistertypelib"></a>AtlUnRegisterTypeLib  
 Questa funzione viene chiamata per annullare la registrazione di una libreria dei tipi.  
  
### <a name="syntax"></a>Sintassi  
```
ATLAPI AtlUnRegisterTypeLib(
    HINSTANCE hInstTypeLib, 
    LPCOLESTR lpszIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `hInstTypeLib`  
 Handle di istanza del modulo.  
  
 `lpszIndex`  
 Stringa nel formato "\\\N", dove N è l'indice integer della risorsa libreria dei tipi. Può essere NULL se è richiesto alcun indice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione di supporto usata da [CAtlComModule::UnRegisterTypeLib](../../atl/reference/catlcommodule-class.md#unregistertypelib) e [AtlComModuleUnregisterServer](#atlcommoduleunregisterserver).  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h

##  <a name="atlloadtypelib"></a>AtlLoadTypeLib  
 Questa funzione viene chiamata per caricare una libreria dei tipi.  
  
### <a name="syntax"></a>Sintassi  
```
ATLINLINE ATLAPI AtlLoadTypeLib(
    HINSTANCE hInstTypeLib,
    LPCOLESTR lpszIndex,
    BSTR* pbstrPath,
    ITypeLib** ppTypeLib);
```  
  
### <a name="parameters"></a>Parametri  
 `hInstTypeLib`  
 Handle per il modulo associato a una libreria dei tipi.  
  
 `lpszIndex`  
 Stringa nel formato "\\\N", dove N è l'indice integer della risorsa libreria dei tipi. Può essere NULL se è richiesto alcun indice.  
  
 *pbstrPath*  
 Il risultato restituito, contiene il percorso completo del modulo associato a una libreria dei tipi.  
  
 `ppTypeLib`  
 Il risultato restituito, contiene un puntatore a un puntatore alla libreria dei tipi caricati.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione di supporto usata da [AtlRegisterTypeLib](#atlregistertypelib) e [AtlUnRegisterTypeLib](#atlunregistertypelib).  
  
##  <a name="atlupdateregistryfromresourced"></a>AtlUpdateRegistryFromResourceD  
 Questa funzione è stata deprecata in Visual Studio 2013 ed è stata rimossa in Visual Studio 2015.  
  
```
<removed>
```  
  

  
##  <a name="registrydataexchange"></a>RegistryDataExchange  
 Questa funzione viene chiamata per leggere o scrivere nel Registro di sistema.  

### <a name="syntax"></a>Sintassi  
```
HRESULT RegistryDataExchange(
    T* pT,
    enum RDXOperations rdxOp,
    void* pItem = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pT*  
 Un puntatore all'oggetto corrente.  
  
 *rdxOp*  
 Un valore di enumerazione che indica che l'operazione è consigliabile eseguire la funzione. Vedere la tabella nella sezione Osservazioni per i valori consentiti.  
  
 `pItem`  
 Puntatore ai dati che deve essere letto o scritto nel Registro di. I dati possono anche rappresentare una chiave da eliminare dal Registro di sistema. Il valore predefinito è NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Le macro [BEGIN_RDX_MAP](registry-data-exchange-macros.md#begin_rdx_map) e [END_RDX_MAP](registry-data-exchange-macros.md#end_rdx_map) espandere a una funzione che chiama `RegistryDataExchange`.  
  
 Nella tabella seguente sono riportati i valori di enumerazione possibili che indicano che deve eseguire l'operazione, la funzione  
  
|Valore enum|Operazione|  
|----------------|---------------|  
|eReadFromReg|Dati letti dal Registro di sistema.|  
|eWriteToReg|Scrivere dati nel Registro di sistema.|  
|eDeleteFromReg|Eliminare la chiave dal Registro di sistema.|  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche  
 [Funzioni](atl-functions.md)
 [macro di scambio di dati del Registro di sistema](registry-data-exchange-macros.md)






