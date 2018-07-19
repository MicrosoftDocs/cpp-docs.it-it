---
title: Classe IObjectSafetyImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IObjectSafetyImpl
- ATLCTL/ATL::IObjectSafetyImpl
- ATLCTL/ATL::IObjectSafetyImpl::GetInterfaceSafetyOptions
- ATLCTL/ATL::IObjectSafetyImpl::SetInterfaceSafetyOptions
- ATLCTL/ATL::IObjectSafetyImpl::m_dwCurrentSafety
dev_langs:
- C++
helpviewer_keywords:
- controls [ATL], safe
- safe for scripting and initialization (controls)
- IObjectSafety, ATL implementation
- IObjectSafetyImpl class
ms.assetid: 64e32082-d910-4a8a-a5bf-ebed9145359d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3f474c73a63c7eaeb7452e88812180a24d1321df
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37881188"
---
# <a name="iobjectsafetyimpl-class"></a>Classe IObjectSafetyImpl
Questa classe fornisce un'implementazione predefinita del `IObjectSafety` interfaccia per consentire a un client recuperare e impostare i livelli di sicurezza di un oggetto.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T,DWORD dwSupportedSafety>  
class IObjectSafetyImpl
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `IObjectSafetyImpl`.  
  
 *dwSupportedSafety*  
 Specifica le opzioni di sicurezza supportate per il controllo. Il valore può essere uno dei seguenti:  
  
- INTERFACESAFE_FOR_UNTRUSTED_CALLER l'interfaccia identificata dal [SetInterfaceSafetyOptions](#setinterfacesafetyoptions) parametro `riid` devono essere resi sicuri per lo script.  
  
- Si può trattare l'interfaccia identificata dal `SetInterfaceSafetyOptions` parametro `riid` devono essere resi sicure per i dati non attendibili durante l'inizializzazione.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IObjectSafetyImpl::GetInterfaceSafetyOptions](#getinterfacesafetyoptions)|Recupera le opzioni di sicurezza supportate dall'oggetto, nonché le opzioni di protezione attualmente impostate per l'oggetto.|  
|[IObjectSafetyImpl::SetInterfaceSafetyOptions](#setinterfacesafetyoptions)|Rende l'oggetto sicure per l'inizializzazione o la creazione di script.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IObjectSafetyImpl::m_dwCurrentSafety](#m_dwcurrentsafety)|Archivia il livello di sicurezza corrente dell'oggetto.|  
  
## <a name="remarks"></a>Note  
 Classe `IObjectSafetyImpl` fornisce un'implementazione predefinita di `IObjectSafety`. Il `IObjectSafety` interfaccia consente a un client recuperare e impostare i livelli di sicurezza di un oggetto. Ad esempio, è possibile chiamare un web browser `IObjectSafety::SetInterfaceSafetyOptions` per rendere un controllo per l'inizializzazione o sicuri per lo script.  
  
 Si noti che l'utilizzo di [IMPLEMENTED_CATEGORY](category-macros.md#implemented_category) macro con le categorie di componenti CATID_SafeForScripting e CATID_SafeForInitializing offre un modo alternativo di specificare che un componente sia sicuro.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IObjectSafety`  
  
 `IObjectSafetyImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="getinterfacesafetyoptions"></a>  IObjectSafetyImpl::GetInterfaceSafetyOptions  
 Recupera le opzioni di sicurezza supportate dall'oggetto, nonché le opzioni di protezione attualmente impostate per l'oggetto.  
  
```
HRESULT GetInterfaceSafetyOptions(  
    REFIID riid,
    DWORD* pdwSupportedOptions,
    DWORD* pdwEnabledOptions);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione restituisce i valori appropriati per qualsiasi interfaccia supportata dall'implementazione dell'oggetto di `IUnknown::QueryInterface`.  
  
> [!IMPORTANT]
>  Qualsiasi oggetto che supporta `IObjectSafety` è responsabile per la propria sicurezza e quello di qualsiasi oggetto delega. Il programmatore deve tener conto dei derivanti dall'esecuzione del codice nel contesto dell'utente, il cross-site scripting ed eseguire il controllo dell'area appropriata.  
  
 Visualizzare [IObjectSafety::GetInterfaceSafetyOptions](https://msdn.microsoft.com/library/aa768223.aspx) in Windows SDK.  
  
##  <a name="m_dwcurrentsafety"></a>  IObjectSafetyImpl::m_dwCurrentSafety  
 Archivia il livello di sicurezza corrente dell'oggetto.  
  
```
DWORD m_dwCurrentSafety;
```  
  
##  <a name="setinterfacesafetyoptions"></a>  IObjectSafetyImpl::SetInterfaceSafetyOptions  
 Rende l'oggetto sicure per l'inizializzazione o l'esecuzione di script impostando il [m_dwCurrentSafety](#m_dwcurrentsafety) membro sul valore appropriato.  
  
```
HRESULT SetInterfaceSafetyOptions(  
    REFIID riid,
    DWORD dwOptionsSetMask,
    DWORD dwEnabledOptions);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione restituisce E_NOINTERFACE per qualsiasi interfaccia non supportata dall'implementazione dell'oggetto `IUnknown::QueryInterface`.  
  
> [!IMPORTANT]
>  Qualsiasi oggetto che supporta `IObjectSafety` è responsabile per la propria sicurezza e quello di qualsiasi oggetto delega. Il programmatore deve tener conto dei derivanti dall'esecuzione del codice nel contesto dell'utente, il cross-site scripting ed eseguire il controllo dell'area appropriata.  
  
 Visualizzare [IObjectSafety::SetInterfaceSafetyOptions](https://msdn.microsoft.com/library/aa768225.aspx) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Interfaccia IObjectSafety](https://msdn.microsoft.com/library/aa768224.aspx)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
