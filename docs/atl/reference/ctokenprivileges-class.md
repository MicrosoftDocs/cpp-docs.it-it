---
title: Classe CTokenPrivileges | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CTokenPrivileges
- ATLSECURITY/ATL::CTokenPrivileges
- ATLSECURITY/ATL::CTokenPrivileges::CTokenPrivileges
- ATLSECURITY/ATL::CTokenPrivileges::Add
- ATLSECURITY/ATL::CTokenPrivileges::Delete
- ATLSECURITY/ATL::CTokenPrivileges::DeleteAll
- ATLSECURITY/ATL::CTokenPrivileges::GetCount
- ATLSECURITY/ATL::CTokenPrivileges::GetDisplayNames
- ATLSECURITY/ATL::CTokenPrivileges::GetLength
- ATLSECURITY/ATL::CTokenPrivileges::GetLuidsAndAttributes
- ATLSECURITY/ATL::CTokenPrivileges::GetNamesAndAttributes
- ATLSECURITY/ATL::CTokenPrivileges::GetPTOKEN_PRIVILEGES
- ATLSECURITY/ATL::CTokenPrivileges::LookupPrivilege
dev_langs:
- C++
helpviewer_keywords:
- CTokenPrivileges class
ms.assetid: 89590105-f001-4014-870d-142926091231
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f6c9886b79739f42329b0f306c8bce6afc2d9fa0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ctokenprivileges-class"></a>Classe CTokenPrivileges
Questa classe è un wrapper per il **TOKEN_PRIVILEGES** struttura.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CTokenPrivileges
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenPrivileges::CTokenPrivileges](#ctokenprivileges)|Costruttore.|  
|[CTokenPrivileges:: ~ CTokenPrivileges](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenPrivileges::Add](#add)|Aggiunge uno o più dei privilegi per il `CTokenPrivileges` oggetto.|  
|[CTokenPrivileges::Delete](#delete)|Elimina un privilegio dal `CTokenPrivileges` oggetto.|  
|[CTokenPrivileges::DeleteAll](#deleteall)|Elimina tutti i privilegi dal `CTokenPrivileges` oggetto.|  
|[CTokenPrivileges::GetCount](#getcount)|Restituisce il numero di voci di privilegi di `CTokenPrivileges` oggetto.|  
|[CTokenPrivileges::GetDisplayNames](#getdisplaynames)|Recupera i nomi visualizzati per i privilegi contenuti nel `CTokenPrivileges` oggetto.|  
|[CTokenPrivileges::GetLength](#getlength)|Restituisce la dimensione del buffer in byte necessarie per contenere il **TOKEN_PRIVILEGES** struttura è rappresentato dal `CTokenPrivileges` oggetto.|  
|[CTokenPrivileges::GetLuidsAndAttributes](#getluidsandattributes)|Recupera gli identificatori univoci locale (LUID) e i flag di attributo dal `CTokenPrivileges` oggetto.|  
|[CTokenPrivileges::GetNamesAndAttributes](#getnamesandattributes)|Recupera i nomi di privilegi e un flag di attributo dal `CTokenPrivileges` oggetto.|  
|[CTokenPrivileges::GetPTOKEN_PRIVILEGES](#getptoken_privileges)|Restituisce un puntatore al **TOKEN_PRIVILEGES** struttura.|  
|[CTokenPrivileges::LookupPrivilege](#lookupprivilege)|Recupera l'attributo associato al nome di un determinato privilegio.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenPrivileges::operator TOKEN_PRIVILEGES const *](#operator_const_token_privileges__star)|Esegue il cast di un valore a un puntatore per il **TOKEN_PRIVILEGES** struttura.|  
|[CTokenPrivileges::operator =](#operator_eq)|Operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 Un [token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909) è un oggetto che descrive il contesto di sicurezza di un processo o thread e viene allocato per ogni utente connesso a un sistema di Windows.  
  
 Il token di accesso viene utilizzato per descrivere i privilegi di sicurezza diversi concessi a ogni utente. Privilegio è costituito da un numero a 64 bit, denominato identificatore univoco locale ( [LUID](http://msdn.microsoft.com/library/windows/desktop/aa379261)) e una stringa del descrittore.  
  
 Il `CTokenPrivileges` classe è un wrapper per il [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) struttura e contiene 0 o più privilegi. Possono aggiungere privilegi, eliminato o sottoposti a query utilizzando i metodi della classe specificato.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in Windows SDK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="add"></a>  CTokenPrivileges::Add  
 Aggiunge uno o più dei privilegi per il `CTokenPrivileges` oggetto token di accesso.  
  
```
bool Add(LPCTSTR pszPrivilege, bool bEnable) throw(...);  
void Add(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pszPrivilege`  
 Puntatore a una stringa con terminazione null che specifica il nome dei privilegi, come definito in WINNT. File di intestazione H.  
  
 `bEnable`  
 Se true, il privilegio è abilitato. Se false, viene disabilitato il privilegio.  
  
 `rPrivileges`  
 Riferimento a un [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) struttura. Gli attributi e i privilegi copiati da questa struttura e aggiungere il `CTokenPrivileges` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Il primo form di questo metodo restituisce true se i privilegi vengono aggiunte correttamente, false in caso contrario.  
  
##  <a name="ctokenprivileges"></a>  CTokenPrivileges::CTokenPrivileges  
 Costruttore.  
  
```
CTokenPrivileges() throw();
CTokenPrivileges(const CTokenPrivileges& rhs) throw(... );  
CTokenPrivileges(const TOKEN_PRIVILEGES& rPrivileges) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `CTokenPrivileges` oggetto da assegnare al nuovo oggetto.  
  
 `rPrivileges`  
 Il [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) struttura da assegnare al nuovo `CTokenPrivileges` oggetto.  
  
### <a name="remarks"></a>Note  
 Il `CTokenPrivileges` oggetto può essere creato facoltativamente utilizzando un **TOKEN_PRIVILEGES** struttura o definita in precedenza `CTokenPrivileges` oggetto.  
  
##  <a name="dtor"></a>  CTokenPrivileges:: ~ CTokenPrivileges  
 Distruttore.  
  
```
virtual ~CTokenPrivileges() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera tutte le risorse allocate.  
  
##  <a name="delete"></a>  CTokenPrivileges::Delete  
 Elimina un privilegio dal `CTokenPrivileges` oggetto token di accesso.  
  
```
bool Delete(LPCTSTR pszPrivilege) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszPrivilege`  
 Puntatore a una stringa con terminazione null che specifica il nome dei privilegi, come definito in WINNT. File di intestazione H. Ad esempio, è possibile specificare questo parametro costante SE_SECURITY_NAME o la stringa corrispondente, "SeSecurityPrivilege".  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il privilegio è stata eliminata, false in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo è utile come strumento per la creazione di token con restrizioni.  
  
##  <a name="deleteall"></a>  CTokenPrivileges::DeleteAll  
 Elimina tutti i privilegi dal `CTokenPrivileges` oggetto token di accesso.  
  
```
void DeleteAll() throw();
```  
  
### <a name="remarks"></a>Note  
 Elimina contenuti in tutti i privilegi di `CTokenPrivileges` oggetto token di accesso.  
  
##  <a name="getdisplaynames"></a>  CTokenPrivileges::GetDisplayNames  
 Recupera i nomi visualizzati per i privilegi contenuti nel `CTokenPrivileges` oggetto token di accesso.  
  
```
void GetDisplayNames(CNames* pDisplayNames) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pDisplayNames`  
 Puntatore a una matrice di oggetti `CString`. **Record CNAME** viene definito come un typedef: **CTokenPrivileges::CAtlArray\<CString >**.  
  
### <a name="remarks"></a>Note  
 Il parametro `pDisplayNames` è un puntatore a una matrice di `CString` gli oggetti che riceveranno i nomi visualizzati corrispondente ai privilegi contenuti nel `CTokenPrivileges` oggetto. Questo metodo recupera i nomi visualizzati solo per i privilegi specificati nella sezione di WINNT privilegi definito. H.  
  
 Questo metodo recupera un nome visualizzabile: ad esempio, se il nome dell'attributo è SE_REMOTE_SHUTDOWN_NAME, il nome visualizzabile è "Arresto forzato da un sistema remoto". Per ottenere il nome del sistema, utilizzare [CTokenPrivileges::GetNamesAndAttributes](#getnamesandattributes).  
  
##  <a name="getcount"></a>  CTokenPrivileges::GetCount  
 Restituisce il numero di voci di privilegi di `CTokenPrivileges` oggetto.  
  
```
UINT GetCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di privilegi contenuti nel `CTokenPrivileges` oggetto.  
  
##  <a name="getlength"></a>  CTokenPrivileges::GetLength  
 Restituisce la lunghezza del `CTokenPrivileges` oggetto.  
  
```
UINT GetLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di byte necessari per contenere un **TOKEN_PRIVILEGES** struttura è rappresentato dal `CTokenPrivileges` oggetto, incluse tutte le voci di privilegio contiene.  
  
##  <a name="getluidsandattributes"></a>  CTokenPrivileges::GetLuidsAndAttributes  
 Recupera gli identificatori univoci locale (LUID) e i flag di attributo dal `CTokenPrivileges` oggetto.  
  
```
void GetLuidsAndAttributes(
    CLUIDArray* pPrivileges,
    CAttributes* pAttributes = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pPrivileges`  
 Puntatore a una matrice di [LUID](http://msdn.microsoft.com/library/windows/desktop/aa379261) oggetti. **CLUIDArray** è un typedef definito come **CAtlArray\<LUID > CLUIDArray**.  
  
 `pAttributes`  
 Puntatore a una matrice di oggetti DWORD. Se questo parametro viene omesso o NULL, gli attributi non vengono recuperati. **CAttributes** è un typedef definito come **CAtlArray \<DWORD > CAttributes**.  
  
### <a name="remarks"></a>Note  
 Questo metodo enumererà tutti i privilegi contenuti nel `CTokenPrivileges` oggetto del token di accesso e inserire i singoli LUID e, facoltativamente, i flag di attributo in oggetti di matrice.  
  
##  <a name="getnamesandattributes"></a>  CTokenPrivileges::GetNamesAndAttributes  
 Recupera il nome e l'attributo flag dal `CTokenPrivileges` oggetto.  
  
```
void GetNamesAndAttributes(
    CNames* pNames,
    CAttributes* pAttributes = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *pNames*  
 Puntatore a una matrice di `CString` oggetti. **Record CNAME** è un typedef definito come **CAtlArray \<CString > CNAME**.  
  
 `pAttributes`  
 Puntatore a una matrice di oggetti DWORD. Se questo parametro viene omesso o NULL, gli attributi non vengono recuperati. **CAttributes** è un typedef definito come **CAtlArray \<DWORD > CAttributes**.  
  
### <a name="remarks"></a>Note  
 Questo metodo enumererà tutti i privilegi contenuti nel `CTokenPrivileges` oggetto, inserire il nome e, facoltativamente, i flag di attributo in oggetti di matrice.  
  
 Questo metodo recupera il nome dell'attributo, anziché il nome visualizzabile: ad esempio, se il nome dell'attributo è SE_REMOTE_SHUTDOWN_NAME, il nome del sistema è "SeRemoteShutdownPrivilege". Per ottenere il nome visualizzabile, utilizzare il metodo [CTokenPrivileges::GetDisplayNames](#getdisplaynames).  
  
##  <a name="getptoken_privileges"></a>  CTokenPrivileges::GetPTOKEN_PRIVILEGES  
 Restituisce un puntatore al **TOKEN_PRIVILEGES** struttura.  
  
```
const TOKEN_PRIVILEGES* GetPTOKEN_PRIVILEGES() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) struttura.  
  
##  <a name="lookupprivilege"></a>  CTokenPrivileges::LookupPrivilege  
 Recupera l'attributo associato al nome di un determinato privilegio.  
  
```
bool LookupPrivilege(
    LPCTSTR pszPrivilege,
    DWORD* pdwAttributes = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pszPrivilege`  
 Puntatore a una stringa con terminazione null che specifica il nome dei privilegi, come definito in WINNT. File di intestazione H. Ad esempio, è possibile specificare questo parametro costante SE_SECURITY_NAME o la stringa corrispondente, "SeSecurityPrivilege".  
  
 `pdwAttributes`  
 Puntatore a una variabile che riceve gli attributi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'attributo viene recuperato correttamente, false in caso contrario.  
  
##  <a name="operator_eq"></a>  CTokenPrivileges::operator =  
 Operatore di assegnazione.  
  
```
CTokenPrivileges& operator= (const TOKEN_PRIVILEGES& rPrivileges) throw(...);  
CTokenPrivileges& operator= (const CTokenPrivileges& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rPrivileges`  
 Il [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) struttura per assegnare il `CTokenPrivileges` oggetto.  
  
 `rhs`  
 Il `CTokenPrivileges` oggetto da assegnare all'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'aggiornamento `CTokenPrivileges` oggetto.  
  
##  <a name="operator_const_token_privileges__star"></a>  CTokenPrivileges::operator TOKEN_PRIVILEGES const *  
 Esegue il cast di un valore a un puntatore per il **TOKEN_PRIVILEGES** struttura.  
  
```  
operator const TOKEN_PRIVILEGES *() const throw(...);
```  
  
### <a name="remarks"></a>Note  
 Esegue il cast di un valore a un puntatore per il [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) struttura.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di sicurezza](../../visual-cpp-samples.md)   
 [TOKEN_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630)   
 [IDENTIFICATORE UNIVOCO LOCALE](http://msdn.microsoft.com/library/windows/desktop/aa379261)   
 [LUID_AND_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379263)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
