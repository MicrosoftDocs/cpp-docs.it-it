---
description: 'Altre informazioni su: classe CAutoRevertImpersonation'
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
ms.openlocfilehash: 48009a4d146866d36eebc75ada8f9ae12058287a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147082"
---
# <a name="cautorevertimpersonation-class"></a>Classe CAutoRevertImpersonation

Questa classe Ripristina gli oggetti [CAccessToken](../../atl/reference/caccesstoken-class.md) a uno stato non rappresentativo quando esce dall'ambito.

## <a name="syntax"></a>Sintassi

```
class CAutoRevertImpersonation
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAutoRevertImpersonation:: CAutoRevertImpersonation](#cautorevertimpersonation)|Costruisce un `CAutoRevertImpersonation` oggetto|
|[CAutoRevertImpersonation:: ~ CAutoRevertImpersonation](#dtor)|Elimina definitivamente l'oggetto e ripristina la rappresentazione del token di accesso.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAutoRevertImpersonation:: Connetti](#attach)|Automatizza la riversione di rappresentazione di un token di accesso.|
|[CAutoRevertImpersonation::D etach](#detach)|Annulla la riversione automatica della rappresentazione.|
|[CAutoRevertImpersonation:: GetAccessToken](#getaccesstoken)|Recupera il token di accesso corrente associato a questo oggetto.|

## <a name="remarks"></a>Commenti

Un [token di accesso](/windows/win32/SecAuthZ/access-tokens) è un oggetto che descrive il contesto di sicurezza di un processo o di un thread e viene allocato a ciascun utente connesso a un sistema Windows NT o Windows 2000. Questi token di accesso possono essere rappresentati con la `CAccessToken` classe.

A volte è necessario rappresentare i token di accesso. Questa classe viene fornita per praticità, ma non esegue la rappresentazione dei token di accesso. esegue solo la riversione automatica in uno stato non rappresentato. Ciò è dovuto al fatto che la rappresentazione dell'accesso ai token può essere eseguita in diversi modi.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="cautorevertimpersonationattach"></a><a name="attach"></a> CAutoRevertImpersonation:: Connetti

Automatizza la riversione di rappresentazione di un token di accesso.

```cpp
void Attach(const CAccessToken* pAT) throw();
```

### <a name="parameters"></a>Parametri

*pAT*<br/>
Indirizzo dell'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md) da ripristinare automaticamente

### <a name="remarks"></a>Commenti

Questo metodo deve essere utilizzato solo se l'oggetto [CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) è stato creato con un `CAccessToken` puntatore null o se lo [scollegamento](#detach) è stato chiamato in precedenza. Per i casi semplici, non è necessario usare questo metodo.

## <a name="cautorevertimpersonationcautorevertimpersonation"></a><a name="cautorevertimpersonation"></a> CAutoRevertImpersonation:: CAutoRevertImpersonation

Costruisce un oggetto `CAutoRevertImpersonation`.

```
CAutoRevertImpersonation(const CAccessToken* pAT) throw();
```

### <a name="parameters"></a>Parametri

*pAT*<br/>
Indirizzo dell'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md) da ripristinare automaticamente.

### <a name="remarks"></a>Commenti

La rappresentazione effettiva del token di accesso deve essere eseguita separatamente da e preferibilmente prima della creazione di un `CAutoRevertImpersonation` oggetto. Questa rappresentazione verrà ripristinata automaticamente quando l' `CAutoRevertImpersonation` oggetto esce dall'ambito.

## <a name="cautorevertimpersonationcautorevertimpersonation"></a><a name="dtor"></a> CAutoRevertImpersonation:: ~ CAutoRevertImpersonation

Elimina definitivamente l'oggetto e ripristina la rappresentazione del token di accesso.

```
~CAutoRevertImpersonation() throw();
```

### <a name="remarks"></a>Commenti

Annulla la rappresentazione attualmente attiva per l'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md) fornito in fase di costruzione o tramite il metodo di [connessione](#attach) . Se non `CAccessToken` è associato alcun oggetto, il distruttore non ha alcun effetto.

## <a name="cautorevertimpersonationdetach"></a><a name="detach"></a> CAutoRevertImpersonation::D etach

Annulla la riversione automatica della rappresentazione.

```
const CAccessToken* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Indirizzo del [CAccessToken](../../atl/reference/caccesstoken-class.md)associato in precedenza o null se non esiste alcuna associazione.

### <a name="remarks"></a>Commenti

La chiamata di **Detach** impedisce all' `CAutoRevertImpersonation` oggetto di ripristinare la rappresentazione attualmente attiva per l'oggetto [CAccessToken](../../atl/reference/caccesstoken-class.md) associato a questo oggetto. `CAutoRevertImpersonation` può quindi essere eliminato senza alcun effetto o riassociato allo stesso oggetto o a un altro `CAccessToken` oggetto tramite [Connetti](#attach).

## <a name="cautorevertimpersonationgetaccesstoken"></a><a name="getaccesstoken"></a> CAutoRevertImpersonation:: GetAccessToken

Recupera il token di accesso corrente associato a questo oggetto.

```
const CAccessToken* GetAccessToken() throw();
```

### <a name="return-value"></a>Valore restituito

Indirizzo del [CAccessToken](../../atl/reference/caccesstoken-class.md)associato in precedenza o null se non esiste alcuna associazione.

### <a name="remarks"></a>Commenti

Se questo metodo viene chiamato per gli scopi che includono la riversione di una rappresentazione dell' `CAccessToken` oggetto, è necessario utilizzare il metodo di [scollegamento](#detach) .

## <a name="see-also"></a>Vedi anche

[Esempio ATLSecurity](../../overview/visual-cpp-samples.md)<br/>
[Token di accesso](/windows/win32/SecAuthZ/access-tokens)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
