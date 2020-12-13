---
description: 'Altre informazioni su: classe CSecurityAttributes'
title: Classe CSecurityAttributes
ms.date: 11/04/2016
f1_keywords:
- CSecurityAttributes
- ATLSECURITY/ATL::CSecurityAttributes
- ATLSECURITY/ATL::CSecurityAttributes::CSecurityAttributes
- ATLSECURITY/ATL::CSecurityAttributes::Set
helpviewer_keywords:
- CSecurityAttributes class
ms.assetid: a094880c-52e1-4a28-97ff-752d5869908e
ms.openlocfilehash: 8cb772e574aef4ad941feef1cb838fb91d937576
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140816"
---
# <a name="csecurityattributes-class"></a>Classe CSecurityAttributes

Questa classe è un wrapper sottile per la struttura degli attributi di sicurezza.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CSecurityAttributes : public SECURITY_ATTRIBUTES
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSecurityAttributes:: CSecurityAttributes](#csecurityattributes)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSecurityAttributes:: set](#set)|Chiamare questo metodo per impostare gli attributi dell' `CSecurityAttributes` oggetto.|

## <a name="remarks"></a>Commenti

La `SECURITY_ATTRIBUTES` struttura contiene un [descrittore di sicurezza](/windows/win32/api/winnt/ns-winnt-security_descriptor) utilizzato per la creazione di un oggetto e specifica se l'handle recuperato specificando questa struttura è ereditabile.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SECURITY_ATTRIBUTES`

`CSecurityAttributes`

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="csecurityattributescsecurityattributes"></a><a name="csecurityattributes"></a> CSecurityAttributes:: CSecurityAttributes

Costruttore.

```
CSecurityAttributes() throw();
explicit CSecurityAttributes(const CSecurityDesc& rSecurityDescriptor, bool bInheritsHandle = false) throw(...);
```

### <a name="parameters"></a>Parametri

*rSecurityDescriptor*<br/>
Riferimento a un descrittore di sicurezza.

*bInheritsHandle*<br/>
Specifica se l'handle restituito viene ereditato alla creazione di un nuovo progetto. Se questo membro è true, il nuovo processo eredita l'handle.

## <a name="csecurityattributesset"></a><a name="set"></a> CSecurityAttributes:: set

Chiamare questo metodo per impostare gli attributi dell' `CSecurityAttributes` oggetto.

```cpp
void Set(const CSecurityDesc& rSecurityDescriptor, bool bInheritHandle = false) throw(...);
```

### <a name="parameters"></a>Parametri

*rSecurityDescriptor*<br/>
Riferimento a un descrittore di sicurezza.

*bInheritHandle*<br/>
Specifica se l'handle restituito viene ereditato alla creazione di un nuovo progetto. Se questo membro è true, il nuovo processo eredita l'handle.

### <a name="remarks"></a>Commenti

Questo metodo viene utilizzato dal costruttore per inizializzare l' `CSecurityAttributes` oggetto.

## <a name="see-also"></a>Vedi anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\))<br/>
[descrittore di sicurezza](/windows/win32/api/winnt/ns-winnt-security_descriptor)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
