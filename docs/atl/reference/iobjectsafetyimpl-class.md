---
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
ms.openlocfilehash: 6eee7585bc3c5587e106ab6b0cefb4b7129df59f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329656"
---
# <a name="iobjectsafetyimpl-class"></a>Classe IObjectSafetyImpl

Questa classe fornisce un'implementazione predefinita dell'interfaccia `IObjectSafety` per consentire a un client di recuperare e impostare i livelli di sicurezza di un oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T,DWORD dwSupportedSafety>
class IObjectSafetyImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IObjectSafetyImpl`derivata da .

*dwSupportedSafety*<br/>
Specifica le opzioni di sicurezza supportate per il controllo. I possibili valori sono i seguenti:

- INTERFACESAFE_FOR_UNTRUSTED_CALLER L'interfaccia identificata dal `riid` parametro [SetInterfaceSafetyOptions](#setinterfacesafetyoptions) deve essere resa sicura per lo scripting.

- INTERFACESAFE_FOR_UNTRUSTED_DATA L'interfaccia `SetInterfaceSafetyOptions` identificata dal parametro `riid` deve essere resa sicura per i dati non attendibili durante l'inizializzazione.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IObjectSafetyImpl::GetInterfaceSafetyOptions](#getinterfacesafetyoptions)|Recupera le opzioni di sicurezza supportate dall'oggetto, nonché le opzioni di sicurezza attualmente impostate per l'oggetto.|
|[IObjectSafetyImpl::SetInterfaceSafetyOptions](#setinterfacesafetyoptions)|Rende l'oggetto sicuro per l'inizializzazione o lo scripting.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IObjectSafetyImpl::m_dwCurrentSafety](#m_dwcurrentsafety)|Memorizza il livello di sicurezza corrente dell'oggetto.|

## <a name="remarks"></a>Osservazioni

Class `IObjectSafetyImpl` fornisce un'implementazione predefinita di `IObjectSafety`. L'interfaccia `IObjectSafety` consente a un client di recuperare e impostare i livelli di sicurezza di un oggetto. Ad esempio, un browser `IObjectSafety::SetInterfaceSafetyOptions` Web può chiamare per rendere un controllo sicuro per l'inizializzazione o sicuro per lo scripting.

Si noti che l'utilizzo della macro [IMPLEMENTED_CATEGORY](category-macros.md#implemented_category) con le categorie CATID_SafeForScripting e CATID_SafeForInitializing dei componenti fornisce un modo alternativo per specificare che un componente è sicuro.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IObjectSafety`

`IObjectSafetyImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="iobjectsafetyimplgetinterfacesafetyoptions"></a><a name="getinterfacesafetyoptions"></a>IObjectSafetyImpl::GetInterfaceSafetyOptions

Recupera le opzioni di sicurezza supportate dall'oggetto, nonché le opzioni di sicurezza attualmente impostate per l'oggetto.

```
HRESULT GetInterfaceSafetyOptions(
    REFIID riid,
    DWORD* pdwSupportedOptions,
    DWORD* pdwEnabledOptions);
```

### <a name="remarks"></a>Osservazioni

L'implementazione restituisce i valori appropriati per qualsiasi `IUnknown::QueryInterface`interfaccia supportata dall'implementazione dell'oggetto di .

> [!IMPORTANT]
> Qualsiasi oggetto che `IObjectSafety` supporta è responsabile della propria sicurezza e di quello di qualsiasi oggetto che delega. Il programmatore deve tenere conto dei problemi derivanti dall'esecuzione di codice nel contesto dell'utente, dal cross-site scripting e dall'esecuzione di controlli di zona appropriati.

Vedere [IObjectSafety::GetInterfaceSafetyOptions](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768223\(v=vs.85\)) in Windows SDK.

## <a name="iobjectsafetyimplm_dwcurrentsafety"></a><a name="m_dwcurrentsafety"></a>IObjectSafetyImpl::m_dwCurrentSafety

Memorizza il livello di sicurezza corrente dell'oggetto.

```
DWORD m_dwCurrentSafety;
```

## <a name="iobjectsafetyimplsetinterfacesafetyoptions"></a><a name="setinterfacesafetyoptions"></a>IObjectSafetyImpl::SetInterfaceSafetyOptions

Rende l'oggetto sicuro per l'inizializzazione o lo scripting impostando il [membro m_dwCurrentSafety](#m_dwcurrentsafety) sul valore appropriato.

```
HRESULT SetInterfaceSafetyOptions(
    REFIID riid,
    DWORD dwOptionsSetMask,
    DWORD dwEnabledOptions);
```

### <a name="remarks"></a>Osservazioni

L'implementazione restituisce E_NOINTERFACE per qualsiasi interfaccia `IUnknown::QueryInterface`non supportata dall'implementazione dell'oggetto di .

> [!IMPORTANT]
> Qualsiasi oggetto che `IObjectSafety` supporta è responsabile della propria sicurezza e di quello di qualsiasi oggetto che delega. Il programmatore deve tenere conto dei problemi derivanti dall'esecuzione di codice nel contesto dell'utente, dal cross-site scripting e dall'esecuzione di controlli di zona appropriati.

Vedere [IObjectSafety::SetInterfaceSafetyOptions](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768225\(v=vs.85\)) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Interfaccia IObjectSafety](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768224\(v=vs.85\))<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
