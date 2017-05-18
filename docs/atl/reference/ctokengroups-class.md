---
title: Classe CTokenGroups | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CTokenGroups
- ATLSECURITY/ATL::CTokenGroups
- ATLSECURITY/ATL::CTokenGroups::CTokenGroups
- ATLSECURITY/ATL::CTokenGroups::Add
- ATLSECURITY/ATL::CTokenGroups::Delete
- ATLSECURITY/ATL::CTokenGroups::DeleteAll
- ATLSECURITY/ATL::CTokenGroups::GetCount
- ATLSECURITY/ATL::CTokenGroups::GetLength
- ATLSECURITY/ATL::CTokenGroups::GetPTOKEN_GROUPS
- ATLSECURITY/ATL::CTokenGroups::GetSidsAndAttributes
- ATLSECURITY/ATL::CTokenGroups::LookupSid
dev_langs:
- C++
helpviewer_keywords:
- CTokenGroups class
ms.assetid: 2ab08076-4b08-4487-bc70-ec6dee304190
caps.latest.revision: 23
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 41b93e1c0a2e55013e280023a7f47610d38ddc10
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ctokengroups-class"></a>Classe CTokenGroups
Questa classe è un wrapper per il **TOKEN_GROUPS** struttura.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CTokenGroups
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenGroups::CTokenGroups](#ctokengroups)|Costruttore.|  
|[CTokenGroups:: ~ CTokenGroups](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenGroups::Add](#add)|Aggiunge un `CSid` o esistenti **TOKEN_GROUPS** struttura per il `CTokenGroups` oggetto.|  
|[CTokenGroups::Delete](#delete)|Elimina un `CSid` e relativi attributi associati dal `CTokenGroups` oggetto.|  
|[CTokenGroups::DeleteAll](#deleteall)|Elimina tutti `CSid` oggetti e i relativi attributi associati dal `CTokenGroups` oggetto.|  
|[CTokenGroups::GetCount](#getcount)|Restituisce il numero di `CSid` oggetti e attributi associati ai **CTokenGroups** oggetto.|  
|[CTokenGroups::GetLength](#getlength)|Restituisce la dimensione di `CTokenGroups` oggetto.|  
|[CTokenGroups::GetPTOKEN_GROUPS](#getptoken_groups)|Recupera un puntatore per il **TOKEN_GROUPS** struttura.|  
|[CTokenGroups::GetSidsAndAttributes](#getsidsandattributes)|Recupera il `CSid` oggetti e attributi appartenenti a di `CTokenGroups` oggetto.|  
|[CTokenGroups::LookupSid](#lookupsid)|Recupera gli attributi associati un `CSid` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[TOKEN_GROUPS const CTokenGroups::operator *](#operator_const_token_groups__star)|Cast di `CTokenGroups` a un puntatore a oggetto la **TOKEN_GROUPS** struttura.|  
|[CTokenGroups::operator =](#operator_eq)|Operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 Un [token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909) è un oggetto che descrive il contesto di sicurezza di un processo o thread e viene allocato per ogni utente connesso a un sistema di Windows NT o Windows 2000.  
  
 Il **CTokenGroups** classe è un wrapper per il [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) struttura, che contiene informazioni sugli identificatori di sicurezza (SID) di gruppo in un token di accesso.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [il controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="add"></a>CTokenGroups::Add  
 Aggiunge un `CSid` o esistenti **TOKEN_GROUPS** struttura per il `CTokenGroups` oggetto.  
  
```
void Add(const CSid& rSid, DWORD dwAttributes) throw(... );  
void Add(const TOKEN_GROUPS& rTokenGroups) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rSid`  
 Oggetto [IDSR](../../atl/reference/csid-class.md) oggetto.  
  
 `dwAttributes`  
 Gli attributi per associare il `CSid` oggetto.  
  
 *rTokenGroups*  
 Oggetto [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) struttura.  
  
### <a name="remarks"></a>Note  
 Questi metodi consentono di aggiungere uno o più `CSid` oggetti e i relativi attributi associati per il `CTokenGroups` oggetto.  
  
##  <a name="ctokengroups"></a>CTokenGroups::CTokenGroups  
 Costruttore.  
  
```
CTokenGroups() throw();
CTokenGroups(const CTokenGroups& rhs) throw(... );  
CTokenGroups(const TOKEN_GROUPS& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `CTokenGroups` oggetto o [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) struttura con cui costruire la `CTokenGroups` oggetto.  
  
### <a name="remarks"></a>Note  
 Il `CTokenGroups` oggetto può essere creato facoltativamente utilizzando un **TOKEN_GROUPS** struttura o definita in precedenza `CTokenGroups` oggetto.  
  
##  <a name="dtor"></a>CTokenGroups:: ~ CTokenGroups  
 Distruttore.  
  
```
virtual ~CTokenGroups() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera tutte le risorse allocate.  
  
##  <a name="delete"></a>CTokenGroups::Delete  
 Elimina un `CSid` e relativi attributi associati dal `CTokenGroups` oggetto.  
  
```
bool Delete(const CSid& rSid) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rSid`  
 Il [IDSR](../../atl/reference/csid-class.md) oggetto per cui l'ID di sicurezza (SID) e gli attributi devono essere rimossi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il `CSid` viene rimosso, false in caso contrario.  
  
##  <a name="deleteall"></a>CTokenGroups::DeleteAll  
 Elimina tutti `CSid` oggetti e i relativi attributi associati dal `CTokenGroups` oggetto.  
  
```
void DeleteAll() throw();
```  
  
##  <a name="getcount"></a>CTokenGroups::GetCount  
 Restituisce il numero di `CSid` gli oggetti contenuti `CTokenGroups`.  
  
```
UINT GetCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di [IDSR](../../atl/reference/csid-class.md) oggetti e i relativi attributi associati ai `CTokenGroups` oggetto.  
  
##  <a name="getlength"></a>CTokenGroups::GetLength  
 Restituisce la dimensione di **CTokenGroup** oggetto.  
  
```
UINT GetLength() const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce la dimensione totale del **CTokenGroup** oggetto, in byte.  
  
##  <a name="getptoken_groups"></a>CTokenGroups::GetPTOKEN_GROUPS  
 Recupera un puntatore per il **TOKEN_GROUPS** struttura.  
  
```
const TOKEN_GROUPS* GetPTOKEN_GROUPS() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Recupera un puntatore al [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) appartenenti alla struttura di `CTokenGroups` oggetto token di accesso.  
  
##  <a name="getsidsandattributes"></a>CTokenGroups::GetSidsAndAttributes  
 Recupera il `CSid` attributi appartenenti a oggetti e (facoltativamente) la `CTokenGroups` oggetto.  
  
```
void GetSidsAndAttributes(
    CSid::CSidArray* pSids,
    CAtlArray<DWORD>* pAttributes = NULL) const throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pSids`  
 Puntatore a una matrice di [IDSR](../../atl/reference/csid-class.md) oggetti.  
  
 `pAttributes`  
 Puntatore a una matrice di valori DWORD. Se questo parametro viene omesso o è NULL, gli attributi non vengono recuperati.  
  
### <a name="remarks"></a>Note  
 Questo metodo enumererà tutti i `CSid` gli oggetti contenuti nel `CTokenGroups` dell'oggetto e inserire oggetti matrice li e, facoltativamente, i flag di attributo.  
  
##  <a name="lookupsid"></a>CTokenGroups::LookupSid  
 Recupera gli attributi associati un `CSid` oggetto.  
  
```
bool LookupSid(  
    const CSid& rSid,
    DWORD* pdwAttributes = NULL) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rSid`  
 Il [IDSR](../../atl/reference/csid-class.md) oggetto.  
  
 `pdwAttributes`  
 Puntatore a un valore DWORD che accetterà la `CSid` attributo dell'oggetto. Se omesso o è NULL, l'attributo non possono essere recuperata.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il `CSid` viene trovato, false in caso contrario.  
  
### <a name="remarks"></a>Note  
 L'impostazione `pdwAttributes` a NULL consente di confermare l'esistenza di `CSid` senza accedere all'attributo. Si noti che questo metodo non deve essere utilizzato per controllare i diritti di accesso, possono verificarsi risultati non corretti in Windows 2000. Le applicazioni devono invece utilizzare il [CAccessToken::CheckTokenMembership](../../atl/reference/caccesstoken-class.md#checktokenmembership) metodo.  
  
##  <a name="operator_eq"></a>CTokenGroups::operator =  
 Operatore di assegnazione.  
  
```
CTokenGroups& operator= (const TOKEN_GROUPS& rhs) throw(...);  
CTokenGroups& operator= (const CTokenGroups& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `CTokenGroups` oggetto o [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) struttura per assegnare il `CTokenGroups` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CTokenGroups` oggetto.  
  
##  <a name="operator_const_token_groups__star"></a>TOKEN_GROUPS const CTokenGroups::operator *  
 Esegue il cast a un puntatore a un valore di **TOKEN_GROUPS** struttura.  
  
```  
operator const TOKEN_GROUPS *() const throw(...);
```  
  
### <a name="remarks"></a>Note  
 Esegue il cast a un puntatore a un valore di [TOKEN_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624) struttura.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di sicurezza](../../visual-cpp-samples.md)   
 [IDSR (classe)](../../atl/reference/csid-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di protezione](../../atl/reference/security-global-functions.md)

