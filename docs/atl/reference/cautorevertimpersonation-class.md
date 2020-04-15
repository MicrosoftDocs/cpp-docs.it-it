---
title: CAutoRevertImpersonation (classe)
ms.date: 11/04/2016
f1_keywords:
- CAutoRevertImpersonation
- ATLSECURITY/ATL::CAutoRevertImpersonation
- ATLSECURITY/ATL::CAutoRevertImpersonation::CAutoRevertImpersonation
- ATLSECURITY/ATL::CAutoRevertImpersonation::Attach
- ATLSECURITY/ATL::CAutoRevertImpersonation::Detach
- ATLSECURITY/ATL::CAutoRevertImpersonation::GetAccessToken
helpviewer_keywords:
- CAutoRevertImpersonation class
ms.assetid: 43732849-1940-4bd4-9d52-7a5698bb8838
ms.openlocfilehash: 813b6f0dd33bdfa85476b816086217a7892f4476
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318783"
---
# <a name="cautorevertimpersonation-class"></a>CAutoRevertImpersonation (classe)

Questa classe ripristina [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetti a uno stato nonimpersonating quando esce dall'ambito.

## <a name="syntax"></a>Sintassi

```
class CAutoRevertImpersonation
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoRevertImpersonation::CAutoRevertImpersonation](#cautorevertimpersonation)|Costruisce un `CAutoRevertImpersonation` oggetto|
|[CAutoRevertImpersonation:::CAutoRevertImpersonation](#dtor)|Elimina l'oggetto e annulla la rappresentazione del token di accesso.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoRevertImpersonation::Attach](#attach)|Automatizza la reversione della rappresentazione di un token di accesso.|
|[CAutoRevertImpersonation::Detach](#detach)|Annulla la reversione automatica della rappresentazione.|
|[CAutoRevertImpersonation::GetAccessToken](#getaccesstoken)|Recupera il token di accesso associato a questo oggetto.|

## <a name="remarks"></a>Osservazioni

Un token di [accesso](/windows/win32/SecAuthZ/access-tokens) è un oggetto che descrive il contesto di protezione di un processo o di un thread e viene allocato a ogni utente connesso a un sistema Windows NT o Windows 2000. Questi token di accesso possono `CAccessToken` essere rappresentati con la classe.

Talvolta è necessario rappresentare i token di accesso. Questa classe viene fornita per comodità, ma non esegue la rappresentazione dei token di accesso; esegue solo il ripristino automatico a uno stato non impersonato. Ciò è dovuto al fatto che la rappresentazione dell'accesso ai token può essere eseguita in diversi modi.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="cautorevertimpersonationattach"></a><a name="attach"></a>CAutoRevertImpersonation::Attach

Automatizza la reversione della rappresentazione di un token di accesso.

```
void Attach(const CAccessToken* pAT) throw();
```

### <a name="parameters"></a>Parametri

*Pat*<br/>
Indirizzo dell'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md) da ripristinare automaticamente

### <a name="remarks"></a>Osservazioni

Questo metodo deve essere utilizzato solo se il [CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) oggetto è stato creato con un puntatore NULL `CAccessToken` o se [Detach](#detach) è stato chiamato in precedenza. Per i casi semplici, non è necessario utilizzare questo metodo.

## <a name="cautorevertimpersonationcautorevertimpersonation"></a><a name="cautorevertimpersonation"></a>CAutoRevertImpersonation::CAutoRevertImpersonation

Costruisce un oggetto `CAutoRevertImpersonation`.

```
CAutoRevertImpersonation(const CAccessToken* pAT) throw();
```

### <a name="parameters"></a>Parametri

*Pat*<br/>
Indirizzo dell'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md) da ripristinare automaticamente.

### <a name="remarks"></a>Osservazioni

La rappresentazione effettiva del token di accesso deve essere eseguita `CAutoRevertImpersonation` separatamente e preferibilmente prima della creazione di un oggetto. Questa rappresentazione verrà ripristinata automaticamente `CAutoRevertImpersonation` quando l'oggetto esce dall'ambito.

## <a name="cautorevertimpersonationcautorevertimpersonation"></a><a name="dtor"></a>CAutoRevertImpersonation:::CAutoRevertImpersonation

Elimina l'oggetto e annulla la rappresentazione del token di accesso.

```
~CAutoRevertImpersonation() throw();
```

### <a name="remarks"></a>Osservazioni

Annulla qualsiasi rappresentazione attualmente attiva per l'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md) fornito durante la costruzione o tramite il [Attach](#attach) metodo. Se `CAccessToken` non è associato alcun elemento, il distruttore non ha alcun effetto.

## <a name="cautorevertimpersonationdetach"></a><a name="detach"></a>CAutoRevertImpersonation::Detach

Annulla la reversione automatica della rappresentazione.

```
const CAccessToken* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Indirizzo dell'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md)associato in precedenza oppure NULL se non esisteva alcuna associazione.

### <a name="remarks"></a>Osservazioni

La **Detach** chiamata `CAutoRevertImpersonation` Detach impedisce all'oggetto di ripristinare qualsiasi rappresentazione attualmente attiva per l'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md) associato a questo oggetto. `CAutoRevertImpersonation`può quindi essere distrutto senza alcun effetto o `CAccessToken` riassociato allo stesso o a un altro oggetto utilizzando [Associa](#attach).

## <a name="cautorevertimpersonationgetaccesstoken"></a><a name="getaccesstoken"></a>CAutoRevertImpersonation::GetAccessToken

Recupera il token di accesso associato a questo oggetto.

```
const CAccessToken* GetAccessToken() throw();
```

### <a name="return-value"></a>Valore restituito

Indirizzo dell'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md)associato in precedenza oppure NULL se non esisteva alcuna associazione.

### <a name="remarks"></a>Osservazioni

Se questo metodo viene chiamato per gli scopi che includono la `CAccessToken` reversione di una rappresentazione dell'oggetto, il [Detach](#detach) metodo deve essere utilizzato invece.

## <a name="see-also"></a>Vedere anche

[Esempio ATLSecurity](../../overview/visual-cpp-samples.md)<br/>
[Token di accesso](/windows/win32/SecAuthZ/access-tokens)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
