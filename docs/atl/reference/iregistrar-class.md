---
title: Interfaccia IRegistrar
ms.date: 2/1/2017
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
ms.openlocfilehash: 3494920164ed3a62713298d2cafdbdc27dbb2b97
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50534771"
---
# <a name="iregistrar-interface"></a>Interfaccia IRegistrar

Questa interfaccia è definita in atliface.h e viene usata internamente dalle funzioni membro CAtlModule, ad esempio [UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced).

## <a name="syntax"></a>Sintassi

```
typedef interface IRegistrar IRegistrar;
```

## <a name="remarks"></a>Note

Vedere l'argomento [usando parametri sostituibili (preprocessore del Registrar)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) per altri dettagli.

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

##  <a name="resourceregistersz"></a>  IRegistrar::ResourceRegisterSz

Registra la risorsa.

```
virtual HRESULT STDMETHODCALLTYPE ResourceRegisterSz(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_z_ LPCOLESTR szID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

##  <a name="resourceunregistersz"></a>  IRegistrar::ResourceUnregisterSz

Annulla la registrazione della risorsa.

```
virtual HRESULT STDMETHODCALLTYPE ResourceUnregisterSz(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_z_ LPCOLESTR szID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

##  <a name="fileregister"></a>  IRegistrar::FileRegister

Registra il file.

```
virtual HRESULT STDMETHODCALLTYPE FileRegister(
    /* [in] */ _In_z_ LPCOLESTR fileName) = 0;
```

##  <a name="fileunregister"></a>  IRegistrar::FileUnregister

Annulla la registrazione del file.

```
virtual HRESULT STDMETHODCALLTYPE FileUnregister(
    /* [in] */ _In_z_ LPCOLESTR fileName) = 0;
```

##  <a name="stringregister"></a>  IRegistrar::StringRegister

Registra i dati di stringa specificata.

```
virtual HRESULT STDMETHODCALLTYPE StringRegister(
    /* [in] */ _In_z_ LPCOLESTR data) = 0;
```

##  <a name="stringunregister"></a>  IRegistrar::StringUnregister

Annulla la registrazione di dati della stringa specificata.

```
virtualHRESULT STDMETHODCALLTYPE StringUnregister(
    /* [in] */ _In_z_ LPCOLESTR data) = 0;
```

##  <a name="resourceregister"></a>  IRegistrar::ResourceRegister

Registra la risorsa.

```
virtual HRESULT STDMETHODCALLTYPE ResourceRegister(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_ UINT nID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

##  <a name="resourceunregister"></a>  IRegistrar::ResourceUnregister

Annulla la registrazione della risorsa.

```
virtualHRESULT STDMETHODCALLTYPE ResourceUnregister(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_ UINT nID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

## <a name="see-also"></a>Vedere anche

[Uso dei parametri sostituibili (preprocessore del registrar)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)<br/>
[Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md)
