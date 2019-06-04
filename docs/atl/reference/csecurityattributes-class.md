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
ms.openlocfilehash: b26de7a2a3426ed2fe86bd7ef50f6c5410fa5364
ms.sourcegitcommit: ecf274bcfe3a977c48745aaa243e5e731f1fdc5f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2019
ms.locfileid: "66503202"
---
# <a name="csecurityattributes-class"></a>Classe CSecurityAttributes

Questa classe è un wrapper sottile per la struttura di attributi di sicurezza.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CSecurityAttributes : public SECURITY_ATTRIBUTES
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityAttributes::CSecurityAttributes](#csecurityattributes)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityAttributes::Set](#set)|Chiamare questo metodo per impostare gli attributi del `CSecurityAttributes` oggetto.|

## <a name="remarks"></a>Note

Il `SECURITY_ATTRIBUTES` struttura contiene una [descrittore di sicurezza](/windows/desktop/api/winnt/ns-winnt-_security_descriptor) utilizzata per la creazione di un oggetto e specifica se l'handle recuperato specificando questa struttura è ereditabile.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/desktop/SecAuthZ/access-control) nel SDK di Windows.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SECURITY_ATTRIBUTES`

`CSecurityAttributes`

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="csecurityattributes"></a>  CSecurityAttributes::CSecurityAttributes

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

##  <a name="set"></a>  CSecurityAttributes:: set

Chiamare questo metodo per impostare gli attributi del `CSecurityAttributes` oggetto.

```
void Set(const CSecurityDesc& rSecurityDescriptor, bool bInheritHandle = false) throw(...);
```

### <a name="parameters"></a>Parametri

*rSecurityDescriptor*<br/>
Riferimento a un descrittore di sicurezza.

*bInheritHandle*<br/>
Specifica se l'handle restituito viene ereditato alla creazione di un nuovo progetto. Se questo membro è true, il nuovo processo eredita l'handle.

### <a name="remarks"></a>Note

Questo metodo viene utilizzato dal costruttore per inizializzare il `CSecurityAttributes` oggetto.

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\))<br/>
[descrittore di sicurezza](/windows/desktop/api/winnt/ns-winnt-_security_descriptor)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
