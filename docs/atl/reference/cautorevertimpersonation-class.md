---
title: Classe CAutoRevertImpersonation
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
ms.openlocfilehash: c8ab7fed8f1560054eb023cbd4e47c43c4c6f0cc
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57299101"
---
# <a name="cautorevertimpersonation-class"></a>Classe CAutoRevertImpersonation

Questa classe viene ripristinata [CAccessToken](../../atl/reference/caccesstoken-class.md) gli oggetti in uno stato nonimpersonating quando esce dall'ambito.

## <a name="syntax"></a>Sintassi

```
class CAutoRevertImpersonation
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoRevertImpersonation::CAutoRevertImpersonation](#cautorevertimpersonation)|Costruisce un `CAutoRevertImpersonation` oggetto|
|[CAutoRevertImpersonation::~CAutoRevertImpersonation](#dtor)|Elimina l'oggetto e inverte la rappresentazione di token di accesso.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoRevertImpersonation::Attach](#attach)|Consente di automatizzare l'annullamento della rappresentazione di un token di accesso.|
|[CAutoRevertImpersonation::Detach](#detach)|Annulla l'annullamento della rappresentazione automatica.|
|[CAutoRevertImpersonation::GetAccessToken](#getaccesstoken)|Recupera l'oggetto corrente token di accesso associato all'oggetto.|

## <a name="remarks"></a>Note

Un' [token di accesso](/windows/desktop/SecAuthZ/access-tokens) è un oggetto che descrive il contesto di sicurezza di un processo o thread e viene allocato a ogni utente connesso a un sistema di Windows NT o Windows 2000. Questi token di accesso possono essere rappresentati con il `CAccessToken` classe.

In alcuni casi è necessario rappresentare token di accesso. Questa classe viene fornita per praticità, ma non esegue la rappresentazione dei token di accesso; esegue solo la reversibilità automatico in uno stato nonimpersonated. Questo avviene perché la rappresentazione di token di accesso può essere eseguita in molti modi.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="attach"></a>  CAutoRevertImpersonation::Attach

Consente di automatizzare l'annullamento della rappresentazione di un token di accesso.

```
void Attach(const CAccessToken* pAT) throw();
```

### <a name="parameters"></a>Parametri

*pAT*<br/>
L'indirizzo del [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto annullate automaticamente

### <a name="remarks"></a>Note

Questo metodo deve essere utilizzato solo se il [CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) oggetto è stato creato con un valore NULL `CAccessToken` puntatore, oppure se [Detach](#detach) è stato chiamato in precedenza. Nei casi semplici, non è necessario utilizzare questo metodo.

##  <a name="cautorevertimpersonation"></a>  CAutoRevertImpersonation::CAutoRevertImpersonation

Costruisce un oggetto `CAutoRevertImpersonation`.

```
CAutoRevertImpersonation(const CAccessToken* pAT) throw();
```

### <a name="parameters"></a>Parametri

*pAT*<br/>
L'indirizzo del [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto annullate automaticamente.

### <a name="remarks"></a>Note

La rappresentazione effettiva del token di accesso deve essere eseguita separatamente dal e preferibilmente prima della creazione di un `CAutoRevertImpersonation` oggetto. Questa rappresentazione verrà annullata automaticamente quando il `CAutoRevertImpersonation` oggetto esce dall'ambito.

##  <a name="dtor"></a>  CAutoRevertImpersonation::~CAutoRevertImpersonation

Elimina l'oggetto e inverte la rappresentazione di token di accesso.

```
~CAutoRevertImpersonation() throw();
```

### <a name="remarks"></a>Note

Ripristina qualsiasi rappresentazione attualmente attivo per il [CAccessToken](../../atl/reference/caccesstoken-class.md) relativo oggetto fornito in fase di costruzione o tramite il [Attach](#attach) (metodo). Se nessun `CAccessToken` viene associato, il distruttore non ha alcun effetto.

##  <a name="detach"></a>  CAutoRevertImpersonation::Detach

Annulla l'annullamento della rappresentazione automatica.

```
const CAccessToken* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

L'indirizzo dell'oggetto associato in precedenza [CAccessToken](../../atl/reference/caccesstoken-class.md), oppure NULL se era presente alcuna associazione.

### <a name="remarks"></a>Note

La chiamata **Scollega** impedisce il `CAutoRevertImpersonation` oggetti da qualsiasi rappresentazione attualmente attivo per il ripristino il [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto associato all'oggetto. `CAutoRevertImpersonation` può essere eliminato senza alcun effetto o riassociati allo stesso o a un'altra `CAccessToken` dell'oggetto usando [Attach](#attach).

##  <a name="getaccesstoken"></a>  CAutoRevertImpersonation::GetAccessToken

Recupera l'oggetto corrente token di accesso associato all'oggetto.

```
const CAccessToken* GetAccessToken() throw();
```

### <a name="return-value"></a>Valore restituito

L'indirizzo dell'oggetto associato in precedenza [CAccessToken](../../atl/reference/caccesstoken-class.md), oppure NULL se era presente alcuna associazione.

### <a name="remarks"></a>Note

Se questo metodo viene chiamato per gli scopi che includono l'annullamento di una rappresentazione del `CAccessToken` oggetti, il [Detach](#detach) metodo deve essere usato invece.

## <a name="see-also"></a>Vedere anche

[Esempio ATLSecurity](../../visual-cpp-samples.md)<br/>
[Token di accesso](/windows/desktop/SecAuthZ/access-tokens)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
