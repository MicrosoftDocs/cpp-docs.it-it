---
title: Interfaccia IRegistrar
ms.date: 02/01/2017
f1_keywords:
- IRegistrar
- ATLIFASE/ATL::IRegistrar
- ATLIFASE/ATL::IRegistrar::ResourceRegisterSz
- ATLIFASE/ATL::IRegistrar::ResourceUnregisterSz
- ATLIFASE/ATL::IRegistrar::FileRegister
- ATLIFASE/ATL::IRegistrar::FileUnregister
- ATLIFASE/ATL::IRegistrar::StringRegister
- ATLIFASE/ATL::IRegistrar::StringUnregister
- ATLIFASE/ATL::IRegistrar::ResourceRegister
- ATLIFASE/ATL::IRegistrar::ResourceUnregister
helpviewer_keywords:
- Iregistrar Interface
ms.assetid: e88c04b7-0c93-4ae8-aeb9-ecd78f87421e
ms.openlocfilehash: 98943fe294322715723bd91207a6f3320ca1ffb3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329457"
---
# <a name="iregistrar-interface"></a>Interfaccia IRegistrar

Questa interfaccia è definita in atliface.h e viene utilizzata internamente dalle funzioni membro CAtlModule, ad esempio [UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced).

## <a name="syntax"></a>Sintassi

```
typedef interface IRegistrar IRegistrar;
```

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere l'argomento Utilizzo di [parametri sostituibili (il preprocessore della funzione](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) di registrazione).

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IRegistrar::ResourceRegisterSzIRegistrar::ResourceRegisterSz](#resourceregistersz)|Registra la risorsa. |
|[IRegistrar::ResourceUnregisterSzIRegistrar::ResourceUnregisterSz](#resourceunregistersz)| Annulla la registrazione della risorsa.|
|[IRegistrar::FileRegister](#fileregister)|Registra il file.|
|[IRegistrar::FileUnregister](#fileunregister)|Annulla la registrazione del file.|
|[IRegistrar::StringaRegistrare](#stringregister)|Registra la stringa.|
|[IRegistrar::StringUnregister](#stringunregister)|Annulla la registrazione della stringa|
|[IRegistrar::ResourceRegisterIRegistrar::ResourceRegister](#resourceregister)|Registra la risorsa.|
|[IRegistrar::ResourceUnregisterIRegistrar::ResourceUnregister](#resourceunregister)|Annulla la registrazione della risorsa.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlifase.h

## <a name="iregistrarresourceregistersz"></a><a name="resourceregistersz"></a>IRegistrar::ResourceRegisterSzIRegistrar::ResourceRegisterSz

Registra la risorsa.

```
virtual HRESULT STDMETHODCALLTYPE ResourceRegisterSz(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_z_ LPCOLESTR szID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

## <a name="iregistrarresourceunregistersz"></a><a name="resourceunregistersz"></a>IRegistrar::ResourceUnregisterSzIRegistrar::ResourceUnregisterSz

Annulla la registrazione della risorsa.

```
virtual HRESULT STDMETHODCALLTYPE ResourceUnregisterSz(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_z_ LPCOLESTR szID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

## <a name="iregistrarfileregister"></a><a name="fileregister"></a>IRegistrar::FileRegister

Registra il file.

```
virtual HRESULT STDMETHODCALLTYPE FileRegister(
    /* [in] */ _In_z_ LPCOLESTR fileName) = 0;
```

## <a name="iregistrarfileunregister"></a><a name="fileunregister"></a>IRegistrar::FileUnregister

Annulla la registrazione del file.

```
virtual HRESULT STDMETHODCALLTYPE FileUnregister(
    /* [in] */ _In_z_ LPCOLESTR fileName) = 0;
```

## <a name="iregistrarstringregister"></a><a name="stringregister"></a>IRegistrar::StringaRegistrare

Registra i dati stringa specificati.

```
virtual HRESULT STDMETHODCALLTYPE StringRegister(
    /* [in] */ _In_z_ LPCOLESTR data) = 0;
```

## <a name="iregistrarstringunregister"></a><a name="stringunregister"></a>IRegistrar::StringUnregister

Annulla la registrazione dei dati di stringa specificati.

```
virtualHRESULT STDMETHODCALLTYPE StringUnregister(
    /* [in] */ _In_z_ LPCOLESTR data) = 0;
```

## <a name="iregistrarresourceregister"></a><a name="resourceregister"></a>IRegistrar::ResourceRegisterIRegistrar::ResourceRegister

Registra la risorsa.

```
virtual HRESULT STDMETHODCALLTYPE ResourceRegister(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_ UINT nID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

## <a name="iregistrarresourceunregister"></a><a name="resourceunregister"></a>IRegistrar::ResourceUnregisterIRegistrar::ResourceUnregister

Annulla la registrazione della risorsa.

```
virtualHRESULT STDMETHODCALLTYPE ResourceUnregister(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_ UINT nID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

## <a name="see-also"></a>Vedere anche

[Utilizzo di parametri sostituibili (preprocessore della funzione di registrazione)Using Replaceable Parameters (The Registrar's Preprocessor)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)<br/>
[Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md)
