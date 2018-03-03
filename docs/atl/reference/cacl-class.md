---
title: Classe CAcl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAcl
- ATLSECURITY/ATL::CAcl
- ATLSECURITY/ATL::CAcl::CAccessMaskArray
- ATLSECURITY/ATL::CAcl::CAceFlagArray
- ATLSECURITY/ATL::CAcl::CAceTypeArray
- ATLSECURITY/ATL::CAcl::CAcl
- ATLSECURITY/ATL::CAcl::GetAceCount
- ATLSECURITY/ATL::CAcl::GetAclEntries
- ATLSECURITY/ATL::CAcl::GetAclEntry
- ATLSECURITY/ATL::CAcl::GetLength
- ATLSECURITY/ATL::CAcl::GetPACL
- ATLSECURITY/ATL::CAcl::IsEmpty
- ATLSECURITY/ATL::CAcl::IsNull
- ATLSECURITY/ATL::CAcl::RemoveAce
- ATLSECURITY/ATL::CAcl::RemoveAces
- ATLSECURITY/ATL::CAcl::SetEmpty
- ATLSECURITY/ATL::CAcl::SetNull
dev_langs:
- C++
helpviewer_keywords:
- CAcl class
ms.assetid: 20bcb9af-dc1c-4737-b923-3864776680d6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cd3b17c3cf74e87b709353a8dd2cd00c5355c7fc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CAcl::RemoveAce](#removeace)|Rimuove una voce ACE specifica (voce di controllo di accesso) il `CAcl` oggetto.|  
|[CAcl::RemoveAces](#removeaces)|Rimuove tutte le voci ACE (voci di controllo di accesso) il `CAcl` che si applicano al determinato `CSid`.|  
|[CAcl::SetEmpty](#setempty)|I segni di `CAcl` dell'oggetto come vuoto.|  
|[CAcl::SetNull](#setnull)|I segni di `CAcl` oggetto come `NULL`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ACL const CAcl::operator *](#operator_const_acl__star)|Cast di un `CAcl` l'oggetto in un `ACL` struttura.|  
|[CAcl::operator =](#operator_eq)|Operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 Il **ACL** struttura corrisponde all'intestazione di un ACL (elenco di controllo di accesso). Un ACL include un elenco sequenziale di zero o più [ACE](http://msdn.microsoft.com/library/windows/desktop/aa374868) (voci di controllo di accesso). Le singole voci ACE in un elenco ACL sono numerate da 0 a *n-1*, dove  *n*  è il numero di voci ACE presenti nell'elenco ACL. Quando si modifica un ACL, un'applicazione fa riferimento a una voce di controllo di accesso (ACE) all'interno dell'elenco ACL in base al relativo indice.  
  
 Esistono due tipi ACL:  
  
-   Discretionary  
  
-   System  
  
 Un ACL discrezionale è controllato dal proprietario dell'oggetto o chiunque concesse **WRITE_DAC** accesso all'oggetto. Specifica che l'accesso utenti e gruppi specifici possono avere un oggetto. Ad esempio, il proprietario di un file può usare un ACL discrezionale per controllare quali utenti e gruppi può e non può avere accesso al file.  
  
 Un oggetto può avere anche le informazioni di sicurezza a livello di sistema associate, sotto forma di un sistema ACL controllata da un amministratore di sistema. Un ACL di sistema può consentire all'amministratore di sistema controllare i tentativi di accedere a un oggetto.  
  
 Per ulteriori informazioni, vedere il [ACL](http://msdn.microsoft.com/library/windows/desktop/aa374872) discussione in Windows SDK.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in Windows SDK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="caccessmaskarray"></a>CAcl::CAccessMaskArray  
 Matrice di oggetti ACCESS_MASK.  
  
```
typedef CAtlArray<ACCESS_MASK> CAccessMaskArray;
```  
  
### <a name="remarks"></a>Note  
 Questo typedef specifica il tipo di matrice che può essere utilizzato per archiviare i diritti di accesso utilizzati nelle voci di controllo di accesso (ACE).  
  
##  <a name="caceflagarray"></a>CAcl::CAceFlagArray  
 Matrice di byte.  
  
```
typedef CAtlArray<BYTE> CAceFlagArray;
```  
  
### <a name="remarks"></a>Note  
 Questo typedef specifica il tipo di matrice consentono di definire i flag di controllo specifici del tipo di voce ACE di controllo di accesso. Vedere il [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) definizione per un elenco completo dei flag possibili.  
  
##  <a name="cacetypearray"></a>CAcl::CAceTypeArray  
 Matrice di byte.  
  
```
typedef CAtlArray<BYTE> CAceTypeArray;
```  
  
### <a name="remarks"></a>Note  
 Questo typedef specifica il tipo di matrice consentono di definire la natura di oggetti di voce ACE di controllo di accesso, ad esempio ACCESS_ALLOWED_ACE_TYPE o ACCESS_DENIED_ACE_TYPE. Vedere il [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) definizione per un elenco completo dei tipi possibili.  
  
##  <a name="cacl"></a>CAcl::CAcl  
 Costruttore.  
  
```
CAcl() throw();
CAcl(const CAcl& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Oggetto `CAcl` esistente.  
  
### <a name="remarks"></a>Note  
 Il `CAcl` oggetto può essere creato facoltativamente utilizzando un oggetto esistente `CAcl` oggetto.  
  
##  <a name="dtor"></a>CAcl:: ~ CAcl  
 Distruttore.  
  
```
virtual ~CAcl() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera le risorse acquisite dall'oggetto.  
  
##  <a name="getacecount"></a>CAcl::GetAceCount  
 Restituisce il numero di controllo di accesso oggetti voce ACE.  
  
```
virtual UINT GetAceCount() const throw() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di voci ACE di `CAcl` oggetto.  
  
##  <a name="getaclentries"></a>CAcl::GetAclEntries  
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
 La voce di controllo di accesso ( **ACE**) tipi.  
  
 *pAceFlags*  
 Il **ACE** flag.  
  
### <a name="remarks"></a>Note  
 Questo metodo riempie i parametri di matrice con i dettagli di ogni **ACE** contenuto nell'oggetto di `CAcl` oggetto. Utilizzare NULL quando i dettagli della matrice particolare non sono necessari.  
  
 Il contenuto di ogni matrice corrispondenza tra loro, vale a dire il primo elemento del `CAccessMaskArray` matrice corrisponde al primo elemento nel `CSidArray` matrice e così via.  
  
 Vedere [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) per ulteriori informazioni sul flag e tipi di voci ACE.  
  
##  <a name="getaclentry"></a>CAcl::GetAclEntry  
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
 Tipo di oggetto. Questo verrà impostato su GUID_NULL se il tipo di oggetto non è specificato nella voce ACE o se la voce ACE non è oggetto.  
  
 `pInheritedObjectType`  
 Il tipo di oggetto ereditato. Questo verrà impostato su GUID_NULL se il tipo di oggetto ereditato non è specificato nella voce ACE o se la voce ACE non è oggetto.  
  
### <a name="remarks"></a>Note  
 Questo metodo recupera tutte le informazioni su una singola voce, fornire più informazioni rispetto [CAcl::GetAclEntries](#getaclentries) singolarmente rende disponibili.  
  
 Vedere [ACE_HEADER](http://msdn.microsoft.com/library/windows/desktop/aa374919) per ulteriori informazioni sul flag e tipi di voci ACE.  
  
##  <a name="getlength"></a>CAcl::GetLength  
 Restituisce la lunghezza dell'elenco di controllo di accesso (ACL).  
  
```
UINT GetLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza in byte necessaria contenere il **ACL** struttura.  
  
##  <a name="getpacl"></a>CAcl::GetPACL  
 Restituisce un puntatore a un elenco di controllo di accesso (ACL).  
  
```
const ACL* GetPACL() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al **ACL** struttura.  
  
##  <a name="isempty"></a>CAcl::IsEmpty  
 Test di `CAcl` oggetto per le voci.  
  
```
bool IsEmpty() const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce **true** se il `CAcl` non è NULL, oggetto e non contiene voci. Restituisce **false** se il `CAcl` è NULL, oggetto o contiene almeno una voce.  
  
##  <a name="isnull"></a>CAcl::IsNull  
 Restituisce lo stato di `CAcl` oggetto.  
  
```
bool IsNull() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il `CAcl` oggetto è NULL, **false** in caso contrario.  
  
##  <a name="operator_const_acl__star"></a>ACL const CAcl::operator *  
 Cast di un `CAcl` l'oggetto in un **ACL** struttura (elenco di controllo di accesso).  
  
```  
operator const ACL *() const throw(...);
```  
  
### <a name="remarks"></a>Note  
 Restituisce l'indirizzo del **ACL** struttura.  
  
##  <a name="operator_eq"></a>CAcl::operator =  
 Operatore di assegnazione.  
  
```
CAcl& operator= (const CAcl& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `CAcl` da assegnare all'oggetto esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento aggiornato `CAcl` oggetto.  
  
##  <a name="removeace"></a>CAcl::RemoveAce  
 Rimuove una voce ACE specifica (voce di controllo di accesso) il **CAcl** oggetto.  
  
```
void RemoveAce(UINT nIndex) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice per la voce ACE da rimuovere.  
  
### <a name="remarks"></a>Note  
 Questo metodo è derivato da [CAtlArray::RemoveAt](../../atl/reference/catlarray-class.md#removeat).  
  
##  <a name="removeaces"></a>CAcl::RemoveAces  
 Rimuove le voci ACE alls (voci di controllo di accesso) il `CAcl` che si applicano al determinato `CSid`.  
  
```
bool RemoveAces(const CSid& rSid) throw(...)
```  
  
### <a name="parameters"></a>Parametri  
 `rSid`  
 Riferimento a un oggetto `CSid`.  
  
##  <a name="setempty"></a>CAcl::SetEmpty  
 I segni di `CAcl` dell'oggetto come vuoto.  
  
```
void SetEmpty() throw();
```  
  
### <a name="remarks"></a>Note  
 Il `CAcl` può essere impostato su vuota o su NULL: i due stati sono distinti.  
  
##  <a name="setnull"></a>CAcl::SetNull  
 I segni di `CAcl` oggetto come NULL.  
  
```
void SetNull() throw();
```  
  
### <a name="remarks"></a>Note  
 Il `CAcl` può essere impostato su vuota o su NULL: i due stati sono distinti.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di sicurezza](../../atl/reference/security-global-functions.md)
