---
title: Funzioni globali di sicurezza | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- SIDs [C++], modifying SID objects
- ACL object global functions
- security IDs [C++]
ms.assetid: 6a584bfe-16b7-47f4-8439-9c789c41567a
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 368da76305910a0948eb386990a4bcdb84e61396
ms.lasthandoff: 02/24/2017

---
# <a name="security-global-functions"></a>Funzioni globali di protezione
Queste funzioni forniscono supporto per la modifica di oggetti SID e l'ACL.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
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

##  <a name="a-nameatlgetdacla--atlgetdacl"></a><a name="atlgetdacl"></a>AtlGetDacl  
 Chiamare questa funzione per recuperare le informazioni dell'elenco di controllo di accesso discrezionali (DACL) di un oggetto specificato.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlGetDacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CDacl* pDacl) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Handle per l'oggetto per il quale recuperare le informazioni di sicurezza.  
  
 `ObjectType`  
 Specifica un valore di [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumerazione che indica il tipo di oggetto identificato dal `hObject` parametro.  
  
 `pDacl`  
 Puntatore a un oggetto DACL che conterrà le informazioni di sicurezza recuperato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug si verifica un errore di asserzione se il valore `hObject` o `pDacl` non è valido *.*  

v

##  <a name="a-nameatlsetdacla--atlsetdacl"></a><a name="atlsetdacl"></a>AtlSetDacl  
 Chiamare questa funzione per impostare le informazioni dell'elenco di controllo di accesso discrezionali (DACL) di un oggetto specificato.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlSetDacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CDacl& rDacl,
    DWORD dwInheritanceFlowControl = 0) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Handle per l'oggetto per cui si desidera impostare informazioni di protezione.  
  
 `ObjectType`  
 Specifica un valore di [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumerazione che indica il tipo di oggetto identificato dal `hObject` parametro.  
  
 `rDacl`  
 L'elenco DACL contenente le nuove informazioni di sicurezza.  
  
 `dwInheritanceFlowControl`  
 Il controllo di flusso di ereditarietà. Questo valore può essere 0 (impostazione predefinita), PROTECTED_DACL_SECURITY_INFORMATION o UNPROTECTED_DACL_SECURITY_INFORMATION.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug si verifica un errore di asserzione se `hObject` non è valido, o se `dwInheritanceFlowControl` non è uno dei tre valori consentiti.  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h 

##  <a name="a-nameatlgetgroupsida--atlgetgroupsid"></a><a name="atlgetgroupsid"></a>AtlGetGroupSid  
 Chiamare questa funzione per recuperare l'ID di sicurezza (SID) del gruppo per un oggetto.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlGetGroupSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSid* pSid) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Handle per l'oggetto da cui recuperare informazioni di sicurezza.  
  
 `ObjectType`  
 Specifica un valore di [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumerazione che indica il tipo di oggetto identificato dal `hObject` parametro.  
  
 `pSid`  
 Puntatore a un `CSid` oggetto che contiene le nuove informazioni di sicurezza.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h 

##  <a name="a-nameatlsetgroupsida--atlsetgroupsid"></a><a name="atlsetgroupsid"></a>AtlSetGroupSid  
 Chiamare questa funzione per impostare l'ID di sicurezza (SID) del gruppo per un oggetto.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlSetGroupSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSid& rSid) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Handle per l'oggetto per cui si desidera impostare informazioni di protezione.  
  
 `ObjectType`  
 Specifica un valore di [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumerazione che indica il tipo di oggetto identificato dal `hObject` parametro.  
  
 `rSid`  
 Il `CSid` oggetto contenente le nuove informazioni di sicurezza.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h 

##  <a name="a-nameatlgetownersida--atlgetownersid"></a><a name="atlgetownersid"></a>AtlGetOwnerSid  
 Chiamare questa funzione per recuperare l'ID di sicurezza (SID) del proprietario per un oggetto.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlGetOwnerSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSid* pSid) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Handle per l'oggetto da cui recuperare informazioni di sicurezza.  
  
 `ObjectType`  
 Specifica un valore di [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumerazione che indica il tipo di oggetto identificato dal `hObject` parametro.  
  
 `pSid`  
 Puntatore a un `CSid` oggetto che contiene le nuove informazioni di sicurezza.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h 

##  <a name="a-nameatlsetownersida--atlsetownersid"></a><a name="atlsetownersid"></a>AtlSetOwnerSid  
 Chiamare questa funzione per impostare l'ID di sicurezza (SID) del proprietario per un oggetto.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlSetOwnerSid(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSid& rSid) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Handle per l'oggetto per cui si desidera impostare informazioni di protezione.  
  
 `ObjectType`  
 Specifica un valore di [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumerazione che indica il tipo di oggetto identificato dal `hObject` parametro.  
  
 `rSid`  
 Il `CSid` oggetto contenente le nuove informazioni di sicurezza.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h 

##  <a name="a-nameatlgetsacla--atlgetsacl"></a><a name="atlgetsacl"></a>AtlGetSacl  
 Chiamare questa funzione per recuperare le informazioni dell'elenco di controllo di accesso di sistema (SACL) di un oggetto specificato.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlGetSacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    CSacl* pSacl,
    bool bRequestNeededPrivileges = true) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Handle per l'oggetto da cui recuperare le informazioni di sicurezza.  
  
 `ObjectType`  
 Specifica un valore di [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumerazione che indica il tipo di oggetto identificato dal `hObject` parametro.  
  
 `pSacl`  
 Puntatore a un oggetto SACL che conterrà le informazioni di sicurezza recuperato.  
  
 `bRequestNeededPrivileges`  
 Se true, la funzione tenterà di attivare il privilegio SE_SECURITY_NAME e ripristinarlo al completamento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Se `AtlGetSacl` deve essere chiamato più volte per molti oggetti diversi, sarà più efficiente per abilitare il privilegio SE_SECURITY_NAME una volta prima della chiamata alla funzione, con `bRequestNeededPrivileges` impostato su false.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h 

##  <a name="a-nameatlsetsacla--atlsetsacl"></a><a name="atlsetsacl"></a>AtlSetSacl  
 Chiamare questa funzione per impostare le informazioni dell'elenco di controllo di accesso di sistema (SACL) di un oggetto specificato.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
inline bool AtlSetSacl(
    HANDLE hObject,
    SE_OBJECT_TYPE ObjectType,
    const CSacl& rSacl,
    DWORD dwInheritanceFlowControl = 0,
    bool bRequestNeededPrivileges = true) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Handle per l'oggetto per cui si desidera impostare informazioni di protezione.  
  
 `ObjectType`  
 Specifica un valore di [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumerazione che indica il tipo di oggetto identificato dal `hObject` parametro.  
  
 *rSacl*  
 Il SACL contenente le nuove informazioni di sicurezza.  
  
 `dwInheritanceFlowControl`  
 Il controllo di flusso di ereditarietà. Questo valore può essere 0 (impostazione predefinita), PROTECTED_SACL_SECURITY_INFORMATION o UNPROTECTED_SACL_SECURITY_INFORMATION.  
  
 `bRequestNeededPrivileges`  
 Se true, la funzione tenterà di attivare il privilegio SE_SECURITY_NAME e ripristinarlo al completamento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug si verifica un errore di asserzione se `hObject` non è valido, o se `dwInheritanceFlowControl` non è uno dei tre valori consentiti.  
  
 Se `AtlSetSacl` deve essere chiamato più volte per molti oggetti diversi, sarà più efficiente per abilitare il privilegio SE_SECURITY_NAME una volta prima della chiamata alla funzione, con `bRequestNeededPrivileges` impostato su false.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h 

##  <a name="a-nameatlgetsecuritydescriptora--atlgetsecuritydescriptor"></a><a name="atlgetsecuritydescriptor"></a>AtlGetSecurityDescriptor  
 Chiamare questa funzione per recuperare il descrittore di sicurezza di un oggetto specifico.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
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
 *pszObjectName*  
 Puntatore a una stringa con terminazione null che specifica il nome dell'oggetto da cui recuperare informazioni di sicurezza.  
  
 `ObjectType`  
 Specifica un valore di [SE_OBJECT_TYPE](http://msdn.microsoft.com/library/windows/desktop/aa379593) enumerazione che indica il tipo di oggetto identificato dal *pszObjectName* parametro.  
  
 *pSecurityDescriptor*  
 Oggetto che riceve il descrittore di sicurezza richiesto.  
  
 *requestedInfo*  
 Un set di [SECURITY_INFORMATION](http://msdn.microsoft.com/library/windows/desktop/aa379573) bit di flag che indicano il tipo di informazioni di sicurezza da recuperare. Questo parametro può essere una combinazione dei valori seguenti.  
  
 `bRequestNeededPrivileges`  
 Se true, la funzione tenterà di attivare il privilegio SE_SECURITY_NAME e ripristinarlo al completamento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Se `AtlGetSecurityDescriptor` deve essere chiamato più volte per molti oggetti diversi, sarà più efficiente per abilitare il privilegio SE_SECURITY_NAME una volta prima della chiamata alla funzione, con `bRequestNeededPrivileges` impostato su false.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h 
   
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)

