---
title: Interfaccia IRegistrar | Documenti di Microsoft
ms.custom: 
ms.date: 2/1/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::IRegistrar
- IRegistrar
dev_langs:
- C++
helpviewer_keywords:
- Iregistrar Interface
ms.assetid: e88c04b7-0c93-4ae8-aeb9-ecd78f87421e
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
ms.sourcegitcommit: 199cdfd91a7d1b9882b57118c852352f6fdda43e
ms.openlocfilehash: e73e095d253d5ec5ca53e4e446019b2da79e5d39
ms.lasthandoff: 02/24/2017

---
# <a name="iregistrar-interface"></a>Interfaccia IRegistrar
Questa interfaccia è definita in atliface.h e viene utilizzata internamente dalle funzioni membro da CAtlModule come [UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced).   
  
## <a name="syntax"></a>Sintassi  
  
```
typedef interface IRegistrar IRegistrar;
```  
## <a name="remarks"></a>Note
Vedere l'argomento [utilizzando parametri sostituibili (preprocessore del Registrar di)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) per ulteriori dettagli.  

## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IRegistrar::ResourceRegisterSz](#resourceregistersz)|Registra la risorsa. |  
|[IRegistrar::ResourceUnregisterSz](#resourceunregistersz)| Annulla la registrazione della risorsa.|  
|[IRegistrar::FileRegister](#fileregister)|Registra il file.|  
|[IRegistrar::FileUnregister](#fileunregister)|Annulla la registrazione del file.|  
|[IRegistrar::StringRegister](#stringregister)|Registra la stringa.|  
|[IRegistrar::StringUnregister](#stringunregister)|Annulla la registrazione della stringa|  
|[IRegistrar::ResourceRegister](#resourceregister)|Registra la risorsa.|  
|[IRegistrar::ResourceUnregister](#resourceunregister)|Annulla la registrazione della risorsa.| 
  

 
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlifase.h  
  
##  <a name="a-nameresourceregistersza--iregistrarresourceregistersz"></a><a name="resourceregistersz"></a>IRegistrar::ResourceRegisterSz 
 Registra la risorsa.  
  
```
virtual HRESULT STDMETHODCALLTYPE ResourceRegisterSz( 
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_z_ LPCOLESTR szID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```  
  
 
  
##  <a name="a-nameresourceunregistersza--iregistrarresourceunregistersz"></a><a name="resourceunregistersz"></a>IRegistrar::ResourceUnregisterSz  
 Annulla la registrazione della risorsa.
  
```
virtual HRESULT STDMETHODCALLTYPE ResourceUnregisterSz( 
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_z_ LPCOLESTR szID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```  
  
  
##  <a name="a-namefileregistera--iregistrarfileregister"></a><a name="fileregister"></a>IRegistrar::FileRegister  
Registra il file.
  
```
virtual HRESULT STDMETHODCALLTYPE FileRegister( 
    /* [in] */ _In_z_ LPCOLESTR fileName) = 0;
```  
  
  
##  <a name="a-namefileunregistera--iregistrarfileunregister"></a><a name="fileunregister"></a>IRegistrar::FileUnregister  
Annulla la registrazione del file.

```
virtual HRESULT STDMETHODCALLTYPE FileUnregister( 
    */ _In_z_ LPCOLESTR fileName) = 0;
```  
  
 
##  <a name="a-namestringregistera--iregistrarstringregister"></a><a name="stringregister"></a>IRegistrar::StringRegister  
  Registra i dati di stringa specificata.
```
virtual HRESULT STDMETHODCALLTYPE StringRegister( 
    /* [in] */ _In_z_ LPCOLESTR data) = 0;
```  
  
##  <a name="a-namestringunregistera--iregistrarstringunregister"></a><a name="stringunregister"></a>IRegistrar::StringUnregister
 Annulla la registrazione dei dati di tipo stringa specificata.  
  
```
virtualHRESULT STDMETHODCALLTYPE StringUnregister( 
    /* [in] */ _In_z_ LPCOLESTR data) = 0;
```  

  
##  <a name="a-nameresourceregistera--iregistrarresourceregister"></a><a name="resourceregister"></a>IRegistrar::ResourceRegister  
 Registra la risorsa.  
  
```
virtual HRESULT STDMETHODCALLTYPE ResourceRegister( 
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_ UINT nID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```  
   
  
##  <a name="a-nameresourceunregistera--iregistrarresourceunregister"></a><a name="resourceunregister"></a>IRegistrar::ResourceUnregister  
 Annulla la registrazione della risorsa.  
  
```
virtualHRESULT STDMETHODCALLTYPE ResourceUnregister( 
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_ UINT nID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0; 
```  
 
## <a name="see-also"></a>Vedere anche  
 [Utilizzo dei parametri sostituibili (preprocessore del Registrar)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)   
 [Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md)  

