---
title: Funzioni globali di sicurezza
ms.date: 11/04/2016
f1_keywords:
- atlsecurity/ATL::AtlGetDacl
- atlsecurity/ATL::AtlSetDacl
- atlsecurity/ATL::AtlGetGroupSid
- atlsecurity/ATL::AtlSetGroupSid
- atlsecurity/ATL::AtlGetOwnerSid
- atlsecurity/ATL::AtlSetOwnerSid
- atlsecurity/ATL::AtlGetSacl
- atlsecurity/ATL::AtlSetSacl
- atlsecurity/ATL::AtlGetSecurityDescriptor
helpviewer_keywords:
- SIDs [C++], modifying SID objects
- ACL object global functions
- security IDs [C++]
ms.assetid: 6a584bfe-16b7-47f4-8439-9c789c41567a
ms.openlocfilehash: 2c9a6fd31850ed137167b6987ddf2f83f34c64a1
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57295877"
---
# <a name="security-global-functions"></a>Funzioni globali di sicurezza

Queste funzioni forniscono supporto per la modifica di SID e ACL a oggetti.

> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel Runtime di Windows.

|||
|-|-|
|[AtlGetDacl](#atlgetdacl)|Chiamare questa funzione per recuperare le informazioni dell'elenco di controllo di accesso discrezionali (DACL) di un oggetto specificato.|
|[AtlSetDacl](#atlsetdacl)|Chiamare questa funzione per impostare le informazioni dell'elenco di controllo di accesso discrezionali (DACL) di un oggetto specificato.|
|[AtlGetGroupSid](#atlgetgroupsid)|Chiamare questa funzione per recuperare l'ID di sicurezza (SID) del gruppo per un oggetto.|
|[AtlSetGroupSid](#atlsetgroupsid)|Chiamare questa funzione per impostare l'ID di sicurezza (SID) del gruppo per un oggetto.|
|[AtlGetOwnerSid](#atlgetownersid)|Chiamare questa funzione per recuperare l'ID di sicurezza (SID) del proprietario per un oggetto.|
|[AtlSetOwnerSid](#atlsetownersid)|Chiamare questa funzione per impostare l'ID di sicurezza (SID) del proprietario per un oggetto.|
|[AtlGetSacl](#atlgetsacl)|Chiamare questa funzione per recuperare le informazioni dell'elenco di controllo di accesso di sistema (SACL) di un oggetto specificato.|
|[AtlSetSacl](#atlsetsacl)|Chiamare questa funzione per impostare le informazioni dell'elenco di controllo di accesso di sistema (SACL) di un oggetto specificato.|
|[AtlGetSecurityDescriptor](#atlgetsecuritydescriptor)|Chiamare questa funzione per recuperare il descrittore di sicurezza di un oggetto specifico.|

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="atlgetdacl"></a>  AtlGetDacl

Chiamare questa funzione per recuperare le informazioni dell'elenco di controllo di accesso discrezionali (DACL) di un oggetto specificato.

> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

```
inline bool AtlGetDacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CDacl* pDacl) throw();
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto per cui recuperare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore di [SE_OBJECT_TYPE](/windows/desktop/api/accctrl/ne-accctrl-_se_object_type) enumerazione che indica il tipo di oggetto identificato dal *hObject* parametro.

*pDacl*<br/>
Puntatore a un oggetto DACL che conterrà le informazioni di sicurezza recuperati.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Nelle build di debug, si verifica un errore di asserzione se il valore *hObject* oppure *pDacl* non è valido.

##  <a name="atlsetdacl"></a>  AtlSetDacl

Chiamare questa funzione per impostare le informazioni dell'elenco di controllo di accesso discrezionali (DACL) di un oggetto specificato.

> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

```
inline bool AtlSetDacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CDacl& rDacl,
    DWORD dwInheritanceFlowControl = 0) throw(...);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto per cui impostare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore di [SE_OBJECT_TYPE](/windows/desktop/api/accctrl/ne-accctrl-_se_object_type) enumerazione che indica il tipo di oggetto identificato dal *hObject* parametro.

*rDacl*<br/>
L'elenco DACL contenente le nuove informazioni di sicurezza.

*dwInheritanceFlowControl*<br/>
Il controllo di flusso di ereditarietà. Questo valore può essere 0 (impostazione predefinita), PROTECTED_DACL_SECURITY_INFORMATION o UNPROTECTED_DACL_SECURITY_INFORMATION.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Nelle build di debug, si verifica un errore di asserzione se *hObject* non è valido, o se *dwInheritanceFlowControl* non è uno dei tre valori consentiti.
### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="atlgetgroupsid"></a>  AtlGetGroupSid

Chiamare questa funzione per recuperare l'ID di sicurezza (SID) del gruppo per un oggetto.

> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

```
inline bool AtlGetGroupSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSid* pSid) throw(...);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto da cui recuperare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore di [SE_OBJECT_TYPE](/windows/desktop/api/accctrl/ne-accctrl-_se_object_type) enumerazione che indica il tipo di oggetto identificato dal *hObject* parametro.

*pSid*<br/>
Puntatore a un `CSid` oggetto che contiene le nuove informazioni di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="atlsetgroupsid"></a>  AtlSetGroupSid

Chiamare questa funzione per impostare l'ID di sicurezza (SID) del gruppo per un oggetto.

> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

```
inline bool AtlSetGroupSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSid& rSid) throw(...);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto per cui impostare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore di [SE_OBJECT_TYPE](/windows/desktop/api/accctrl/ne-accctrl-_se_object_type) enumerazione che indica il tipo di oggetto identificato dal *hObject* parametro.

*rSid*<br/>
Il `CSid` contenente le nuove informazioni di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="atlgetownersid"></a>  AtlGetOwnerSid

Chiamare questa funzione per recuperare l'ID di sicurezza (SID) del proprietario per un oggetto.

> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

```
inline bool AtlGetOwnerSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSid* pSid) throw(...);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto da cui recuperare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore di [SE_OBJECT_TYPE](/windows/desktop/api/accctrl/ne-accctrl-_se_object_type) enumerazione che indica il tipo di oggetto identificato dal *hObject* parametro.

*pSid*<br/>
Puntatore a un `CSid` oggetto che contiene le nuove informazioni di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="atlsetownersid"></a>  AtlSetOwnerSid

Chiamare questa funzione per impostare l'ID di sicurezza (SID) del proprietario per un oggetto.

> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

```
inline bool AtlSetOwnerSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSid& rSid) throw(...);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto per cui impostare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore di [SE_OBJECT_TYPE](/windows/desktop/api/accctrl/ne-accctrl-_se_object_type) enumerazione che indica il tipo di oggetto identificato dal *hObject* parametro.

*rSid*<br/>
Il `CSid` contenente le nuove informazioni di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="atlgetsacl"></a>  AtlGetSacl

Chiamare questa funzione per recuperare le informazioni dell'elenco di controllo di accesso di sistema (SACL) di un oggetto specificato.

> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

```
inline bool AtlGetSacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSacl* pSacl,
    bool bRequestNeededPrivileges = true) throw(...);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto da cui recuperare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore di [SE_OBJECT_TYPE](/windows/desktop/api/accctrl/ne-accctrl-_se_object_type) enumerazione che indica il tipo di oggetto identificato dal *hObject* parametro.

*pSacl*<br/>
Puntatore a un oggetto SACL che conterrà le informazioni di sicurezza recuperati.

*bRequestNeededPrivileges*<br/>
Se true, la funzione tenterà di attivare il privilegio SE_SECURITY_NAME e ripristinarlo quindi sul completamento.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Se `AtlGetSacl` deve essere chiamato più volte su numerosi oggetti diversi, sarà più efficiente per abilitare il privilegio SE_SECURITY_NAME una sola volta prima di chiamare la funzione, con *bRequestNeededPrivileges* impostato su false.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="atlsetsacl"></a>  AtlSetSacl

Chiamare questa funzione per impostare le informazioni dell'elenco di controllo di accesso di sistema (SACL) di un oggetto specificato.

> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

```
inline bool AtlSetSacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSacl& rSacl,
    DWORD dwInheritanceFlowControl = 0,
    bool bRequestNeededPrivileges = true) throw(...);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto per cui impostare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore di [SE_OBJECT_TYPE](/windows/desktop/api/accctrl/ne-accctrl-_se_object_type) enumerazione che indica il tipo di oggetto identificato dal *hObject* parametro.

*rSacl*<br/>
L'elenco SACL che contiene le nuove informazioni di sicurezza.

*dwInheritanceFlowControl*<br/>
Il controllo di flusso di ereditarietà. Questo valore può essere 0 (impostazione predefinita), PROTECTED_SACL_SECURITY_INFORMATION o UNPROTECTED_SACL_SECURITY_INFORMATION.

*bRequestNeededPrivileges*<br/>
Se true, la funzione tenterà di attivare il privilegio SE_SECURITY_NAME e ripristinarlo quindi sul completamento.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Nelle build di debug, si verifica un errore di asserzione se *hObject* non è valido, o se *dwInheritanceFlowControl* non è uno dei tre valori consentiti.

Se `AtlSetSacl` deve essere chiamato più volte su numerosi oggetti diversi, sarà più efficiente per abilitare il privilegio SE_SECURITY_NAME una sola volta prima di chiamare la funzione, con *bRequestNeededPrivileges* impostato su false.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

##  <a name="atlgetsecuritydescriptor"></a>  AtlGetSecurityDescriptor

Chiamare questa funzione per recuperare il descrittore di sicurezza di un oggetto specifico.

> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

```
inline bool AtlGetSecurityDescriptor(
    LPCTSTR pszObjectName,
    SE_OBJECT_TYPE ObjectType,
    CSecurityDesc* pSecurityDescriptor,
    SECURITY_INFORMATION requestedInfo = OWNER_SECURITY_INFORMATION |
    GROUP_SECURITY_INFORMATION | DACL_SECURITY_INFORMATION |
    SACL_SECURITY_INFORMATION,
bool bRequestNeededPrivileges = true) throw(...);
```

### <a name="parameters"></a>Parametri

*pszObjectName*<br/>
Puntatore a una stringa con terminazione null che specifica il nome dell'oggetto da cui recuperare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore di [SE_OBJECT_TYPE](/windows/desktop/api/accctrl/ne-accctrl-_se_object_type) enumerazione che indica il tipo di oggetto identificato dal *pszObjectName* parametro.

*pSecurityDescriptor*<br/>
Oggetto che riceve il descrittore di sicurezza richiesto.

*requestedInfo*<br/>
Un set di [SECURITY_INFORMATION](/windows/desktop/SecAuthZ/security-information) bit di flag che indicano il tipo di informazioni di sicurezza da recuperare. Questo parametro può essere una combinazione dei valori seguenti.

*bRequestNeededPrivileges*<br/>
Se true, la funzione tenterà di attivare il privilegio SE_SECURITY_NAME e ripristinarlo quindi sul completamento.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Note

Se `AtlGetSecurityDescriptor` deve essere chiamato più volte su numerosi oggetti diversi, sarà più efficiente per abilitare il privilegio SE_SECURITY_NAME una sola volta prima di chiamare la funzione, con *bRequestNeededPrivileges* impostato su false.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
