---
description: 'Altre informazioni su: funzioni globali di sicurezza'
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
ms.openlocfilehash: 10a3a3f358eba3aa1715bd375221f6ec35a56fcf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157789"
---
# <a name="security-global-functions"></a>Funzioni globali di sicurezza

Queste funzioni forniscono supporto per la modifica di oggetti SID e ACL.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere usate nelle applicazioni eseguite nel Windows Runtime.

|Nome|Description|
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

## <a name="atlgetdacl"></a><a name="atlgetdacl"></a> AtlGetDacl

Chiamare questa funzione per recuperare le informazioni dell'elenco di controllo di accesso discrezionali (DACL) di un oggetto specificato.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

```
inline bool AtlGetDacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CDacl* pDacl) throw();
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto per il quale recuperare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore dell'enumerazione [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) che indica il tipo di oggetto identificato dal parametro *hObject* .

*pDacl*<br/>
Puntatore a un oggetto DACL che conterrà le informazioni di sicurezza recuperate.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Commenti

Nelle build di debug, si verificherà un errore di asserzione se *hObject* o *pDacl* non è valido.

## <a name="atlsetdacl"></a><a name="atlsetdacl"></a> AtlSetDacl

Chiamare questa funzione per impostare le informazioni dell'elenco di controllo di accesso discrezionali (DACL) di un oggetto specificato.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

```
inline bool AtlSetDacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CDacl& rDacl,
    DWORD dwInheritanceFlowControl = 0) throw(...);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto per il quale impostare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore dell'enumerazione [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) che indica il tipo di oggetto identificato dal parametro *hObject* .

*rDacl*<br/>
Elenco DACL contenente le nuove informazioni di sicurezza.

*dwInheritanceFlowControl*<br/>
Controllo del flusso di ereditarietà. Questo valore può essere 0 (impostazione predefinita), PROTECTED_DACL_SECURITY_INFORMATION o UNPROTECTED_DACL_SECURITY_INFORMATION.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Commenti

Nelle build di debug, si verificherà un errore di asserzione se *hObject* non è valido o se *dwInheritanceFlowControl* non è uno dei tre valori consentiti.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="atlgetgroupsid"></a><a name="atlgetgroupsid"></a> AtlGetGroupSid

Chiamare questa funzione per recuperare l'ID di sicurezza (SID) del gruppo per un oggetto.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

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
Specifica un valore dell'enumerazione [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) che indica il tipo di oggetto identificato dal parametro *hObject* .

*pSid*<br/>
Puntatore a un `CSid` oggetto che conterrà le nuove informazioni di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="atlsetgroupsid"></a><a name="atlsetgroupsid"></a> AtlSetGroupSid

Chiamare questa funzione per impostare l'ID di sicurezza (SID) del gruppo per un oggetto.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

```
inline bool AtlSetGroupSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSid& rSid) throw(...);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto per il quale impostare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore dell'enumerazione [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) che indica il tipo di oggetto identificato dal parametro *hObject* .

*rSid*<br/>
`CSid`Oggetto contenente le nuove informazioni di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="atlgetownersid"></a><a name="atlgetownersid"></a> AtlGetOwnerSid

Chiamare questa funzione per recuperare l'ID di sicurezza (SID) del proprietario per un oggetto.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

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
Specifica un valore dell'enumerazione [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) che indica il tipo di oggetto identificato dal parametro *hObject* .

*pSid*<br/>
Puntatore a un `CSid` oggetto che conterrà le nuove informazioni di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="atlsetownersid"></a><a name="atlsetownersid"></a> AtlSetOwnerSid

Chiamare questa funzione per impostare l'ID di sicurezza (SID) del proprietario per un oggetto.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

```
inline bool AtlSetOwnerSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSid& rSid) throw(...);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per l'oggetto per il quale impostare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore dell'enumerazione [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) che indica il tipo di oggetto identificato dal parametro *hObject* .

*rSid*<br/>
`CSid`Oggetto contenente le nuove informazioni di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="atlgetsacl"></a><a name="atlgetsacl"></a> AtlGetSacl

Chiamare questa funzione per recuperare le informazioni dell'elenco di controllo di accesso di sistema (SACL) di un oggetto specificato.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

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
Specifica un valore dell'enumerazione [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) che indica il tipo di oggetto identificato dal parametro *hObject* .

*pSacl*<br/>
Puntatore a un oggetto SACL che conterrà le informazioni di sicurezza recuperate.

*bRequestNeededPrivileges*<br/>
Se true, la funzione tenterà di abilitare il privilegio di SE_SECURITY_NAME e di ripristinarla al completamento.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Commenti

Se `AtlGetSacl` deve essere chiamato più volte su molti oggetti diversi, sarà più efficiente abilitare il privilegio di SE_SECURITY_NAME una volta prima di chiamare la funzione, con *bRequestNeededPrivileges* impostato su false.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="atlsetsacl"></a><a name="atlsetsacl"></a> AtlSetSacl

Chiamare questa funzione per impostare le informazioni dell'elenco di controllo di accesso di sistema (SACL) di un oggetto specificato.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

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
Handle per l'oggetto per il quale impostare le informazioni di sicurezza.

*ObjectType*<br/>
Specifica un valore dell'enumerazione [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) che indica il tipo di oggetto identificato dal parametro *hObject* .

*rSacl*<br/>
SACL contenente le nuove informazioni di sicurezza.

*dwInheritanceFlowControl*<br/>
Controllo del flusso di ereditarietà. Questo valore può essere 0 (impostazione predefinita), PROTECTED_SACL_SECURITY_INFORMATION o UNPROTECTED_SACL_SECURITY_INFORMATION.

*bRequestNeededPrivileges*<br/>
Se true, la funzione tenterà di abilitare il privilegio di SE_SECURITY_NAME e di ripristinarla al completamento.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Commenti

Nelle build di debug, si verificherà un errore di asserzione se *hObject* non è valido o se *dwInheritanceFlowControl* non è uno dei tre valori consentiti.

Se `AtlSetSacl` deve essere chiamato più volte su molti oggetti diversi, sarà più efficiente abilitare il privilegio di SE_SECURITY_NAME una volta prima di chiamare la funzione, con *bRequestNeededPrivileges* impostato su false.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="atlgetsecuritydescriptor"></a><a name="atlgetsecuritydescriptor"></a> AtlGetSecurityDescriptor

Chiamare questa funzione per recuperare il descrittore di sicurezza di un oggetto specifico.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

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
Specifica un valore dell'enumerazione [SE_OBJECT_TYPE](/windows/win32/api/accctrl/ne-accctrl-se_object_type) che indica il tipo di oggetto identificato dal parametro *pszObjectName* .

*pSecurityDescriptor*<br/>
Oggetto che riceve il descrittore di sicurezza richiesto.

*requestedInfo*<br/>
Set di flag di bit [SECURITY_INFORMATION](/windows/win32/SecAuthZ/security-information) che indicano il tipo di informazioni di sicurezza da recuperare. Questo parametro può essere una combinazione dei valori seguenti.

*bRequestNeededPrivileges*<br/>
Se true, la funzione tenterà di abilitare il privilegio di SE_SECURITY_NAME e di ripristinarla al completamento.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.

### <a name="remarks"></a>Commenti

Se `AtlGetSecurityDescriptor` deve essere chiamato più volte su molti oggetti diversi, sarà più efficiente abilitare il privilegio di SE_SECURITY_NAME una volta prima di chiamare la funzione, con *bRequestNeededPrivileges* impostato su false.

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h

## <a name="see-also"></a>Vedi anche

[Funzioni](../../atl/reference/atl-functions.md)
