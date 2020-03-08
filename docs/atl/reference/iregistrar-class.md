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
ms.openlocfilehash: e347bdba1656a53cd705123a26650dad50d3892f
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78857144"
---
# <a name="iregistrar-interface"></a>Interfaccia IRegistrar

Questa interfaccia è definita in Atliface. h e viene utilizzata internamente dalle funzioni membro CAtlModule, ad esempio [UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced).

## <a name="syntax"></a>Sintassi

```
typedef interface IRegistrar IRegistrar;
```

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere l'argomento [utilizzo di parametri sostituibili (preprocessore del registrar)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) .

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IRegistrar::ResourceRegisterSz](#resourceregistersz)|Registra la risorsa. |
|[IRegistrar::ResourceUnregisterSz](#resourceunregistersz)| Annulla la registrazione della risorsa.|
|[IRegistrar:: FileRegister](#fileregister)|Registra il file.|
|[IRegistrar::FileUnregister](#fileunregister)|Annulla la registrazione del file.|
|[IRegistrar::StringRegister](#stringregister)|Registra la stringa.|
|[IRegistrar::StringUnregister](#stringunregister)|Annulla la registrazione della stringa|
|[IRegistrar::ResourceRegister](#resourceregister)|Registra la risorsa.|
|[IRegistrar::ResourceUnregister](#resourceunregister)|Annulla la registrazione della risorsa.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlifase. h

##  <a name="resourceregistersz"></a>IRegistrar::ResourceRegisterSz

Registra la risorsa.

```
virtual HRESULT STDMETHODCALLTYPE ResourceRegisterSz(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_z_ LPCOLESTR szID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

##  <a name="resourceunregistersz"></a>IRegistrar::ResourceUnregisterSz

Annulla la registrazione della risorsa.

```
virtual HRESULT STDMETHODCALLTYPE ResourceUnregisterSz(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_z_ LPCOLESTR szID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

##  <a name="fileregister"></a>IRegistrar:: FileRegister

Registra il file.

```
virtual HRESULT STDMETHODCALLTYPE FileRegister(
    /* [in] */ _In_z_ LPCOLESTR fileName) = 0;
```

##  <a name="fileunregister"></a>IRegistrar::FileUnregister

Annulla la registrazione del file.

```
virtual HRESULT STDMETHODCALLTYPE FileUnregister(
    /* [in] */ _In_z_ LPCOLESTR fileName) = 0;
```

##  <a name="stringregister"></a>IRegistrar::StringRegister

Registra i dati di stringa specificati.

```
virtual HRESULT STDMETHODCALLTYPE StringRegister(
    /* [in] */ _In_z_ LPCOLESTR data) = 0;
```

##  <a name="stringunregister"></a>IRegistrar::StringUnregister

Annulla la registrazione dei dati di stringa specificati.

```
virtualHRESULT STDMETHODCALLTYPE StringUnregister(
    /* [in] */ _In_z_ LPCOLESTR data) = 0;
```

##  <a name="resourceregister"></a>IRegistrar::ResourceRegister

Registra la risorsa.

```
virtual HRESULT STDMETHODCALLTYPE ResourceRegister(
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_ UINT nID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```

##  <a name="resourceunregister"></a>IRegistrar::ResourceUnregister

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
[Classi modulo](../../atl/atl-module-classes.md)<br/>
[Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md)
