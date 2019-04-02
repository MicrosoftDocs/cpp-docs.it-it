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
ms.openlocfilehash: 66188a2c944379cfae813220937ac1e7e98fb41d
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58768341"
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
[SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560)<br/>
[descrittore di sicurezza](/windows/desktop/api/winnt/ns-winnt-_security_descriptor)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
