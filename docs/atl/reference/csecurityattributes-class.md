---
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
ms.openlocfilehash: e0ac813008a028bb233adfb4c7409a0ad62a6b78
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81746495"
---
# <a name="csecurityattributes-class"></a>Classe CSecurityAttributes

Questa classe è un wrapper sottile per la struttura degli attributi di sicurezza.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CSecurityAttributes : public SECURITY_ATTRIBUTES
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Attributi di Sicurezza::CSecurityAttributesCSecurityAttributes::CSecurityAttributes](#csecurityattributes)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityAttributes::Set](#set)|Chiamare questo metodo per impostare gli attributi dell'oggetto. `CSecurityAttributes`|

## <a name="remarks"></a>Osservazioni

La `SECURITY_ATTRIBUTES` struttura contiene un [descrittore](/windows/win32/api/winnt/ns-winnt-security_descriptor) di sicurezza utilizzato per la creazione di un oggetto e specifica se l'handle recuperato specificando questa struttura è ereditabile.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [Controllo di accesso](/windows/win32/SecAuthZ/access-control) in Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SECURITY_ATTRIBUTES`

`CSecurityAttributes`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h

## <a name="csecurityattributescsecurityattributes"></a><a name="csecurityattributes"></a>Attributi di Sicurezza::CSecurityAttributesCSecurityAttributes::CSecurityAttributes

Costruttore.

```
CSecurityAttributes() throw();
explicit CSecurityAttributes(const CSecurityDesc& rSecurityDescriptor, bool bInheritsHandle = false) throw(...);
```

### <a name="parameters"></a>Parametri

*rSecurityDescriptor (descritto in rSecurityDescriptor)*<br/>
Riferimento a un descrittore di sicurezza.

*bHandle*<br/>
Specifica se l'handle restituito viene ereditato alla creazione di un nuovo progetto. Se questo membro è true, il nuovo processo eredita l'handle.

## <a name="csecurityattributesset"></a><a name="set"></a>CSecurityAttributes::Set

Chiamare questo metodo per impostare gli attributi dell'oggetto. `CSecurityAttributes`

```cpp
void Set(const CSecurityDesc& rSecurityDescriptor, bool bInheritHandle = false) throw(...);
```

### <a name="parameters"></a>Parametri

*rSecurityDescriptor (descritto in rSecurityDescriptor)*<br/>
Riferimento a un descrittore di sicurezza.

*bInheritHandle (opzione)*<br/>
Specifica se l'handle restituito viene ereditato alla creazione di un nuovo progetto. Se questo membro è true, il nuovo processo eredita l'handle.

### <a name="remarks"></a>Osservazioni

Questo metodo viene utilizzato dal `CSecurityAttributes` costruttore per inizializzare l'oggetto.

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\))<br/>
[descrittore di sicurezza](/windows/win32/api/winnt/ns-winnt-security_descriptor)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
