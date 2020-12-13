---
description: 'Altre informazioni su: classe IObjectSafetyImpl'
title: Classe IObjectSafetyImpl
ms.date: 11/04/2016
f1_keywords:
- IObjectSafetyImpl
- ATLCTL/ATL::IObjectSafetyImpl
- ATLCTL/ATL::IObjectSafetyImpl::GetInterfaceSafetyOptions
- ATLCTL/ATL::IObjectSafetyImpl::SetInterfaceSafetyOptions
- ATLCTL/ATL::IObjectSafetyImpl::m_dwCurrentSafety
helpviewer_keywords:
- controls [ATL], safe
- safe for scripting and initialization (controls)
- IObjectSafety, ATL implementation
- IObjectSafetyImpl class
ms.assetid: 64e32082-d910-4a8a-a5bf-ebed9145359d
ms.openlocfilehash: ac19fe24d12d7d09968b3e2d76f77741e83e1f81
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139464"
---
# <a name="iobjectsafetyimpl-class"></a>Classe IObjectSafetyImpl

Questa classe fornisce un'implementazione predefinita dell' `IObjectSafety` interfaccia per consentire a un client di recuperare e impostare i livelli di sicurezza di un oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T,DWORD dwSupportedSafety>
class IObjectSafetyImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IObjectSafetyImpl` .

*dwSupportedSafety*<br/>
Specifica le opzioni di sicurezza supportate per il controllo. I possibili valori sono i seguenti:

- INTERFACESAFE_FOR_UNTRUSTED_CALLER l'interfaccia identificata dal [](#setinterfacesafetyoptions) parametro SetInterfaceSafetyOptions `riid` deve essere resa sicura per lo scripting.

- INTERFACESAFE_FOR_UNTRUSTED_DATA l'interfaccia identificata dal `SetInterfaceSafetyOptions` parametro `riid` deve essere resa sicura per i dati non attendibili durante l'inizializzazione.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IObjectSafetyImpl:: GetInterfaceSafetyOptions](#getinterfacesafetyoptions)|Recupera le opzioni di sicurezza supportate dall'oggetto, nonché le opzioni di sicurezza attualmente impostate per l'oggetto.|
|[IObjectSafetyImpl:: SetInterfaceSafetyOptions](#setinterfacesafetyoptions)|Rende l'oggetto sicuro per l'inizializzazione o lo scripting.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[IObjectSafetyImpl:: m_dwCurrentSafety](#m_dwcurrentsafety)|Archivia il livello di sicurezza corrente dell'oggetto.|

## <a name="remarks"></a>Commenti

`IObjectSafetyImpl`La classe fornisce un'implementazione predefinita di `IObjectSafety` . L' `IObjectSafety` interfaccia consente a un client di recuperare e impostare i livelli di sicurezza di un oggetto. Ad esempio, un Web browser può chiamare `IObjectSafety::SetInterfaceSafetyOptions` per rendere un controllo sicuro per l'inizializzazione o per la sicurezza per gli script.

Si noti che l'uso della macro [IMPLEMENTED_CATEGORY](category-macros.md#implemented_category) con le categorie di componenti CATID_SafeForScripting e CATID_SafeForInitializing fornisce un modo alternativo per specificare che un componente è sicuro.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IObjectSafety`

`IObjectSafetyImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="iobjectsafetyimplgetinterfacesafetyoptions"></a><a name="getinterfacesafetyoptions"></a> IObjectSafetyImpl:: GetInterfaceSafetyOptions

Recupera le opzioni di sicurezza supportate dall'oggetto, nonché le opzioni di sicurezza attualmente impostate per l'oggetto.

```
HRESULT GetInterfaceSafetyOptions(
    REFIID riid,
    DWORD* pdwSupportedOptions,
    DWORD* pdwEnabledOptions);
```

### <a name="remarks"></a>Commenti

L'implementazione restituisce i valori appropriati per qualsiasi interfaccia supportata dall'implementazione dell'oggetto di `IUnknown::QueryInterface` .

> [!IMPORTANT]
> Qualsiasi oggetto che supporta `IObjectSafety` è responsabile della propria sicurezza e di qualsiasi oggetto che delega. Il programmatore deve tenere in considerazione i problemi derivanti dall'esecuzione di codice nel contesto dell'utente, dallo scripting tra siti e dall'esecuzione del controllo di zona appropriato.

Vedere [IObjectSafety:: GetInterfaceSafetyOptions](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768223\(v=vs.85\)) nella Windows SDK.

## <a name="iobjectsafetyimplm_dwcurrentsafety"></a><a name="m_dwcurrentsafety"></a> IObjectSafetyImpl:: m_dwCurrentSafety

Archivia il livello di sicurezza corrente dell'oggetto.

```
DWORD m_dwCurrentSafety;
```

## <a name="iobjectsafetyimplsetinterfacesafetyoptions"></a><a name="setinterfacesafetyoptions"></a> IObjectSafetyImpl:: SetInterfaceSafetyOptions

Rende sicuro l'oggetto per l'inizializzazione o l'esecuzione di script impostando il membro [m_dwCurrentSafety](#m_dwcurrentsafety) sul valore appropriato.

```
HRESULT SetInterfaceSafetyOptions(
    REFIID riid,
    DWORD dwOptionsSetMask,
    DWORD dwEnabledOptions);
```

### <a name="remarks"></a>Commenti

L'implementazione restituisce E_NOINTERFACE per qualsiasi interfaccia non supportata dall'implementazione dell'oggetto di `IUnknown::QueryInterface` .

> [!IMPORTANT]
> Qualsiasi oggetto che supporta `IObjectSafety` è responsabile della propria sicurezza e di qualsiasi oggetto che delega. Il programmatore deve tenere in considerazione i problemi derivanti dall'esecuzione di codice nel contesto dell'utente, dallo scripting tra siti e dall'esecuzione del controllo di zona appropriato.

Vedere [IObjectSafety:: SetInterfaceSafetyOptions](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768225\(v=vs.85\)) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Interfaccia IObjectSafety](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768224\(v=vs.85\))<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
