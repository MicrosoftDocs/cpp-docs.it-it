---
title: Classe IObjectSafetyImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IObjectSafetyImpl
dev_langs:
- C++
helpviewer_keywords:
- controls [ATL], safe
- safe for scripting and initialization (controls)
- IObjectSafety, ATL implementation
- IObjectSafetyImpl class
ms.assetid: 64e32082-d910-4a8a-a5bf-ebed9145359d
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: cff5995555cd069855f9d7becb9eb8367e80c920
ms.lasthandoff: 02/24/2017

---
# <a name="iobjectsafetyimpl-class"></a>Classe IObjectSafetyImpl
Questa classe fornisce un'implementazione predefinita del `IObjectSafety` interfaccia per consentire a un client recuperare e impostare i livelli di protezione di un oggetto.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T,DWORD dwSupportedSafety>  
class IObjectSafetyImpl
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IObjectSafetyImpl`.  
  
 *dwSupportedSafety*  
 Specifica le opzioni di sicurezza supportate per il controllo. Il valore può essere uno dei seguenti:  
  
- **INTERFACESAFE_FOR_UNTRUSTED_CALLER** l'interfaccia identificato dal [SetInterfaceSafetyOptions](#setinterfacesafetyoptions) parametro `riid` prevedere sicuri per lo script.  
  
- **Si può trattare** l'interfaccia identificato dal `SetInterfaceSafetyOptions` parametro `riid` devono essere resi sicuri per dati non attendibili durante l'inizializzazione.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IObjectSafetyImpl::GetInterfaceSafetyOptions](#getinterfacesafetyoptions)|Recupera le opzioni di sicurezza supportate dall'oggetto, nonché le opzioni di protezione attualmente impostate per l'oggetto.|  
|[IObjectSafetyImpl::SetInterfaceSafetyOptions](#setinterfacesafetyoptions)|Rende l'oggetto sicuro per l'inizializzazione o di script.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IObjectSafetyImpl::m_dwCurrentSafety](#m_dwcurrentsafety)|Archivia il livello di sicurezza corrente dell'oggetto.|  
  
## <a name="remarks"></a>Note  
 Classe `IObjectSafetyImpl` fornisce un'implementazione predefinita di `IObjectSafety`. Il `IObjectSafety` interfaccia consente a un client recuperare e impostare i livelli di protezione di un oggetto. Ad esempio, è possibile chiamare un web browser **IObjectSafety::SetInterfaceSafetyOptions** per creare un controllo per l'inizializzazione o sicuri per lo script.  
  
 Si noti che l'utilizzo di [IMPLEMENTED_CATEGORY](http://msdn.microsoft.com/library/d898ef34-5684-4709-beb9-7114ddd96674) macro con la **CATID_SafeForScripting** e **CATID_SafeForInitializing** le categorie di componenti fornisce un modo alternativo per specificare che un componente sia sicuro.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IObjectSafety`  
  
 `IObjectSafetyImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="a-namegetinterfacesafetyoptionsa--iobjectsafetyimplgetinterfacesafetyoptions"></a><a name="getinterfacesafetyoptions"></a>IObjectSafetyImpl::GetInterfaceSafetyOptions  
 Recupera le opzioni di sicurezza supportate dall'oggetto, nonché le opzioni di protezione attualmente impostate per l'oggetto.  
  
```
HRESULT GetInterfaceSafetyOptions(  
    REFIID riid,
    DWORD* pdwSupportedOptions,
    DWORD* pdwEnabledOptions);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione restituisce i valori appropriati per qualsiasi interfaccia supportata dall'implementazione dell'oggetto **IUnknown:: QueryInterface**.  
  
> [!IMPORTANT]
>  Qualsiasi oggetto che supporta `IObjectSafety` è responsabile per la protezione e quello di qualsiasi oggetto delega. Il programmatore deve tener conto dei derivanti dall'esecuzione di codice nel contesto dell'utente, il cross-site scripting ed eseguire il controllo dell'area appropriato.  
  
 Vedere [IObjectSafety::GetInterfaceSafetyOptions](https://msdn.microsoft.com/library/aa768223.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namemdwcurrentsafetya--iobjectsafetyimplmdwcurrentsafety"></a><a name="m_dwcurrentsafety"></a>IObjectSafetyImpl::m_dwCurrentSafety  
 Archivia il livello di sicurezza corrente dell'oggetto.  
  
```
DWORD m_dwCurrentSafety;
```  
  
##  <a name="a-namesetinterfacesafetyoptionsa--iobjectsafetyimplsetinterfacesafetyoptions"></a><a name="setinterfacesafetyoptions"></a>IObjectSafetyImpl::SetInterfaceSafetyOptions  
 Rende l'oggetto sicuri per l'inizializzazione o l'esecuzione di script impostando il [m_dwCurrentSafety](#m_dwcurrentsafety) membro sul valore appropriato.  
  
```
HRESULT SetInterfaceSafetyOptions(  
    REFIID riid,
    DWORD dwOptionsSetMask,
    DWORD dwEnabledOptions);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione restituisce **E_NOINTERFACE** per qualsiasi interfaccia non supportata dall'implementazione dell'oggetto **IUnknown:: QueryInterface**.  
  
> [!IMPORTANT]
>  Qualsiasi oggetto che supporta `IObjectSafety` è responsabile per la protezione e quello di qualsiasi oggetto delega. Il programmatore deve tener conto dei derivanti dall'esecuzione di codice nel contesto dell'utente, il cross-site scripting ed eseguire il controllo dell'area appropriato.  
  
 Vedere [IObjectSafety::SetInterfaceSafetyOptions](https://msdn.microsoft.com/library/aa768225.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Interfaccia IObjectSafety](https://msdn.microsoft.com/library/aa768224.aspx)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

