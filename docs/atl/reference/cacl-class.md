---
title: Classe CAcl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAcl
- ATL::CAcl
- ATLSECURITY/CAcl
- ATL.CAcl
dev_langs:
- C++
helpviewer_keywords:
- CAcl class
ms.assetid: 20bcb9af-dc1c-4737-b923-3864776680d6
caps.latest.revision: 21
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 52de083664c2e9ca00a140450cb43372aff28428
ms.lasthandoff: 02/24/2017

---
# <a name="cacl-class"></a>Classe CAcl
Questa classe è un wrapper per un `ACL` struttura (elenco di controllo di accesso).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAcl
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAcl::CAccessMaskArray](#caccessmaskarray)|Matrice di `ACCESS_MASK`s.|  
|[CAcl::CAceFlagArray](#caceflagarray)|Matrice di `BYTE`s.|  
|[CAcl::CAceTypeArray](#cacetypearray)|Matrice di `BYTE`s.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAcl::CAcl](#cacl)|Costruttore.|  
|[CAcl:: ~ CAcl](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAcl::GetAceCount](#getacecount)|Restituisce il numero di controllo di accesso oggetti voce ACE.|  
|[CAcl::GetAclEntries](#getaclentries)|Recupera il controllo di accesso (ACL) le voci dell'elenco di `CAcl` oggetto.|  
|[CAcl::GetAclEntry](#getaclentry)|Recupera tutte le informazioni su una voce in un `CAcl` oggetto.|  
|[CAcl::GetLength](#getlength)|Restituisce la lunghezza degli elenchi ACL.|  
|[CAcl::GetPACL](#getpacl)|Restituisce del pacchetto del (puntatore a un ACL).|  
|[CAcl::IsEmpty](#isempty)|Test di `CAcl` oggetto per le voci.|  
|[CAcl::IsNull](#isnull)|Restituisce lo stato di `CAcl` oggetto.|  
|[CAcl::RemoveAce](#removeace)|Rimuove una voce ACE specifica (voce di controllo di accesso) di `CAcl` oggetto.|  
|[CAcl::RemoveAces](#removeaces)|Rimuove tutte le voci ACE (voci di controllo di accesso) di `CAcl` che si applicano al determinato `CSid`.|  
|[CAcl::SetEmpty](#setempty)|I segni di `CAcl` dell'oggetto come vuoto.|  
|[CAcl::SetNull](#setnull)|I segni di `CAcl` oggetto `NULL`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ACL const CAcl::operator *](#operator_const_acl__star)|Cast di un `CAcl` dell'oggetto a un `ACL` struttura.|  
|[CAcl::operator =](#operator_eq)|Operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 Il **ACL** struttura è l'intestazione di un ACL (elenco di controllo di accesso). Un ACL include un elenco sequenziale di zero o più [ACE](http://msdn.microsoft.com/library/windows/desktop/aa374868) (voci di controllo di accesso). Le singole voci ACE in un ACL sono numerate da 0 a *n-1*, dove *n* è il numero di voci ACE presenti nell'elenco ACL. Quando si modifica un ACL, un'applicazione fa riferimento a una voce di controllo di accesso (ACE) all'interno dell'ACL in base al relativo indice.  
  
 Esistono due tipi ACL:  
  
-   Discretionary  
  
-   System  
  
 Un ACL discrezionale è controllato dal proprietario dell'oggetto o chiunque concesse **WRITE_DAC** accesso all'oggetto. Specifica che un oggetto possono avere l'accesso utenti e gruppi specifici. Il proprietario di un file, ad esempio, possibile utilizzare un ACL discrezionale per controllare quali utenti e gruppi possono e non può avere accesso al file.  
  
 Un oggetto può anche avere informazioni sulla sicurezza a livello di sistema associate, sotto forma di un sistema ACL controllata da un amministratore di sistema. Un ACL di sistema può consentire all'amministratore di sistema controllare i tentativi di accedere a un oggetto.  
  
 Per ulteriori informazioni, vedere il [ACL](http://msdn.microsoft.com/library/windows/desktop/aa374872) in discussione il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [il controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="a-namecaccessmaskarraya--caclcaccessmaskarray"></a><a name="caccessmaskarray"></a>CAcl::CAccessMaskArray  
 Matrice di oggetti ACCESS_MASK.  
  
```
typedef CAtlArray<ACCESS_MASK> CAccessMaskArray;
```  
  
### <a name="remarks"></a>Note  
 Questo typedef specifica il tipo di matrice che può essere utilizzato per archiviare i diritti di accesso utilizzati nelle voci di controllo di accesso (ACE).  
  
##  <a name="a-namecaceflagarraya--caclcaceflagarray"></a><a name="caceflagarray"></a>CAcl::CAceFlagArray  
 Matrice di byte.  
  
```
typedef CAtlArray<BYTE> CAceFlagArray;
```  
  
### <a name="remarks"></a>Note  
 Questo typedef specifica il tipo di matrice consentono di definire i flag di controllo specifici del tipo di voce ACE di controllo di accesso. Vedere il [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) definizione per un elenco completo dei flag possibili.  
  
##  <a name="a-namecacetypearraya--caclcacetypearray"></a><a name="cacetypearray"></a>CAcl::CAceTypeArray  
 Matrice di byte.  
  
```
typedef CAtlArray<BYTE> CAceTypeArray;
```  
  
### <a name="remarks"></a>Note  
 Questo typedef specifica il tipo di matrice consentono di definire la natura degli oggetti voce ACE di controllo di accesso, ad esempio ACCESS_ALLOWED_ACE_TYPE o ACCESS_DENIED_ACE_TYPE. Vedere il [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) definizione per un elenco completo dei tipi possibili.  
  
##  <a name="a-namecacla--caclcacl"></a><a name="cacl"></a>CAcl::CAcl  
 Costruttore.  
  
```
CAcl() throw();
CAcl(const CAcl& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Oggetto `CAcl` esistente.  
  
### <a name="remarks"></a>Note  
 Il `CAcl` oggetto può essere creato facoltativamente utilizzando una classe `CAcl` oggetto.  
  
##  <a name="a-namedtora--caclcacl"></a><a name="dtor"></a>CAcl:: ~ CAcl  
 Distruttore.  
  
```
virtual ~CAcl() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera eventuali risorse ottenute dall'oggetto.  
  
##  <a name="a-namegetacecounta--caclgetacecount"></a><a name="getacecount"></a>CAcl::GetAceCount  
 Restituisce il numero di controllo di accesso oggetti voce ACE.  
  
```
virtual UINT GetAceCount() const throw() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di voci ACE di `CAcl` oggetto.  
  
##  <a name="a-namegetaclentriesa--caclgetaclentries"></a><a name="getaclentries"></a>CAcl::GetAclEntries  
 Recupera il controllo di accesso (ACL) le voci dell'elenco di `CAcl` oggetto.  
  
```
void GetAclEntries(
    CSid::CSidArray* pSids,
    CAccessMaskArray* pAccessMasks = NULL,
    CAceTypeArray* pAceTypes = NULL,
    CAceFlagArray* pAceFlags = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pSids`  
 Un puntatore a una matrice di [IDSR](../../atl/reference/csid-class.md) oggetti.  
  
 *pAccessMasks*  
 Le maschere di accesso.  
  
 *pAceTypes*  
 La voce di controllo di accesso ( **ACE**) i tipi.  
  
 *pAceFlags*  
 Il **ACE** flag.  
  
### <a name="remarks"></a>Note  
 Questo metodo riempie i parametri di matrice con i dettagli di ogni **ACE** contenuto nell'oggetto di `CAcl` oggetto. Utilizzare NULL quando non sono richiesti i dettagli della matrice particolare.  
  
 Il contenuto di ogni matrice corrispondenza tra loro, vale a dire il primo elemento di `CAccessMaskArray` matrice corrisponde al primo elemento nel `CSidArray` matrice e così via.  
  
 Vedere [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) per ulteriori informazioni sul flag e tipi di voci ACE.  
  
##  <a name="a-namegetaclentrya--caclgetaclentry"></a><a name="getaclentry"></a>CAcl::GetAclEntry  
 Recupera tutte le informazioni su una voce in un elenco di controllo di accesso (ACL).  
  
```
void GetAclEntry(
    UINT nIndex,
    CSid* pSid,
    ACCESS_MASK* pMask = NULL,
    BYTE* pType = NULL,
    BYTE* pFlags = NULL,
    GUID* pObjectType = NULL,
    GUID* pInheritedObjectType = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice per la voce ACL da recuperare.  
  
 `pSid`  
 Il [IDSR](../../atl/reference/csid-class.md) dell'oggetto a cui si applica la voce ACL.  
  
 *pMask*  
 La maschera che specifica le autorizzazioni per concedere o negare l'accesso.  
  
 `pType`  
 Il tipo di voce ACE.  
  
 `pFlags`  
 I flag ACE.  
  
 `pObjectType`  
 Tipo di oggetto. Questo tipo verrà impostato su GUID_NULL se il tipo di oggetto non viene specificato nella voce ACE, o se la voce ACE non è oggetto.  
  
 `pInheritedObjectType`  
 Il tipo di oggetto ereditato. Questo tipo verrà impostato su GUID_NULL se il tipo di oggetto ereditato non è specificato nella voce ACE, o se la voce ACE non è oggetto.  
  
### <a name="remarks"></a>Note  
 Questo metodo recupera tutte le informazioni relative a una singola voce, fornire più informazioni rispetto [CAcl::GetAclEntries](#getaclentries) da soli rende disponibili.  
  
 Vedere [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) per ulteriori informazioni sul flag e tipi di voci ACE.  
  
##  <a name="a-namegetlengtha--caclgetlength"></a><a name="getlength"></a>CAcl::GetLength  
 Restituisce la lunghezza dell'elenco di controllo di accesso (ACL).  
  
```
UINT GetLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza in byte necessari per contenere il **ACL** struttura.  
  
##  <a name="a-namegetpacla--caclgetpacl"></a><a name="getpacl"></a>CAcl::GetPACL  
 Restituisce un puntatore a un elenco di controllo di accesso (ACL).  
  
```
const ACL* GetPACL() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il **ACL** struttura.  
  
##  <a name="a-nameisemptya--caclisempty"></a><a name="isempty"></a>CAcl::IsEmpty  
 Test di `CAcl` oggetto per le voci.  
  
```
bool IsEmpty() const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce **true** se il `CAcl` oggetto non è NULL e non contiene voci. Restituisce **false** se il `CAcl` oggetto è NULL o contiene almeno una voce.  
  
##  <a name="a-nameisnulla--caclisnull"></a><a name="isnull"></a>CAcl::IsNull  
 Restituisce lo stato di `CAcl` oggetto.  
  
```
bool IsNull() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il `CAcl` oggetto è NULL, **false** in caso contrario.  
  
##  <a name="a-nameoperatorconstaclstara--cacloperator-const-acl-"></a><a name="operator_const_acl__star"></a>ACL const CAcl::operator *  
 Cast di un `CAcl` dell'oggetto a un **ACL** struttura (elenco di controllo di accesso).  
  
```  
operator const ACL *() const throw(...);
```  
  
### <a name="remarks"></a>Note  
 Restituisce l'indirizzo di **ACL** struttura.  
  
##  <a name="a-nameoperatoreqa--cacloperator-"></a><a name="operator_eq"></a>CAcl::operator =  
 Operatore di assegnazione.  
  
```
CAcl& operator= (const CAcl& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `CAcl` da assegnare all'oggetto esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento aggiornato `CAcl` oggetto.  
  
##  <a name="a-nameremoveacea--caclremoveace"></a><a name="removeace"></a>CAcl::RemoveAce  
 Rimuove una voce ACE specifica (voce di controllo di accesso) di **CAcl** oggetto.  
  
```
void RemoveAce(UINT nIndex) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice per la voce ACE da rimuovere.  
  
### <a name="remarks"></a>Note  
 Questo metodo è derivato da [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).  
  
##  <a name="a-nameremoveacesa--caclremoveaces"></a><a name="removeaces"></a>CAcl::RemoveAces  
 Rimuove le voci ACE alls, voci di controllo di accesso, il `CAcl` che si applicano al determinato `CSid`.  
  
```
bool RemoveAces(const CSid& rSid) throw(...)
```  
  
### <a name="parameters"></a>Parametri  
 `rSid`  
 Riferimento a un oggetto `CSid`.  
  
##  <a name="a-namesetemptya--caclsetempty"></a><a name="setempty"></a>CAcl::SetEmpty  
 I segni di `CAcl` dell'oggetto come vuoto.  
  
```
void SetEmpty() throw();
```  
  
### <a name="remarks"></a>Note  
 Il `CAcl` può essere impostata su un valore vuoto o NULL: i due stati sono distinti.  
  
##  <a name="a-namesetnulla--caclsetnull"></a><a name="setnull"></a>CAcl::SetNull  
 I segni di `CAcl` oggetto come NULL.  
  
```
void SetNull() throw();
```  
  
### <a name="remarks"></a>Note  
 Il `CAcl` può essere impostata su un valore vuoto o NULL: i due stati sono distinti.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di protezione](../../atl/reference/security-global-functions.md)

