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
ms.openlocfilehash: ebffbea120101a77450a5e8da3cdb6e34723e7be
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496505"
---
# <a name="csecurityattributes-class"></a>Classe CSecurityAttributes

Questa classe è un wrapper sottile per la struttura degli attributi di sicurezza.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CSecurityAttributes : public SECURITY_ATTRIBUTES
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityAttributes:: CSecurityAttributes](#csecurityattributes)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSecurityAttributes:: set](#set)|Chiamare questo metodo per impostare gli attributi dell' `CSecurityAttributes` oggetto.|

## <a name="remarks"></a>Note

La `SECURITY_ATTRIBUTES` struttura contiene un descrittore di [sicurezza](/windows/win32/api/winnt/ns-winnt-security_descriptor) utilizzato per la creazione di un oggetto e specifica se l'handle recuperato specificando questa struttura è ereditabile.

Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](/windows/win32/SecAuthZ/access-control) nella Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SECURITY_ATTRIBUTES`

`CSecurityAttributes`

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="csecurityattributes"></a>CSecurityAttributes:: CSecurityAttributes

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

##  <a name="set"></a>CSecurityAttributes:: set

Chiamare questo metodo per impostare gli attributi dell' `CSecurityAttributes` oggetto.

```
void Set(const CSecurityDesc& rSecurityDescriptor, bool bInheritHandle = false) throw(...);
```

### <a name="parameters"></a>Parametri

*rSecurityDescriptor*<br/>
Riferimento a un descrittore di sicurezza.

*bInheritHandle*<br/>
Specifica se l'handle restituito viene ereditato alla creazione di un nuovo progetto. Se questo membro è true, il nuovo processo eredita l'handle.

### <a name="remarks"></a>Note

Questo metodo viene utilizzato dal costruttore per inizializzare l' `CSecurityAttributes` oggetto.

## <a name="see-also"></a>Vedere anche

[Esempio di sicurezza](../../overview/visual-cpp-samples.md)<br/>
[SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\))<br/>
[descrittore di sicurezza](/windows/win32/api/winnt/ns-winnt-security_descriptor)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
