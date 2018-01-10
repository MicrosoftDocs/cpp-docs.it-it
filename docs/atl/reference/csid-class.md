---
title: Classe IDSR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSid
- ATLSECURITY/ATL::CSid
- ATLSECURITY/ATL::CSid::CSidArray
- ATLSECURITY/ATL::CSid::CSid
- ATLSECURITY/ATL::CSid::AccountName
- ATLSECURITY/ATL::CSid::Domain
- ATLSECURITY/ATL::CSid::EqualPrefix
- ATLSECURITY/ATL::CSid::GetLength
- ATLSECURITY/ATL::CSid::GetPSID
- ATLSECURITY/ATL::CSid::GetPSID_IDENTIFIER_AUTHORITY
- ATLSECURITY/ATL::CSid::GetSubAuthority
- ATLSECURITY/ATL::CSid::GetSubAuthorityCount
- ATLSECURITY/ATL::CSid::IsValid
- ATLSECURITY/ATL::CSid::LoadAccount
- ATLSECURITY/ATL::CSid::Sid
- ATLSECURITY/ATL::CSid::SidNameUse
dev_langs: C++
helpviewer_keywords: CSid class
ms.assetid: be58b7ca-5958-49c3-a833-ca341aaaf753
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3915206f0b05e33d5e13e41871a597ea7278ee8f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="csid-class"></a>Classe IDSR
Questa classe è un wrapper per un `SID` struttura (SID).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CSid
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSid::CSidArray](#csidarray)|Matrice di oggetti `CSid`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSid::CSid](#csid)|Costruttore.|  
|[IDSR:: ~ IDSR](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSid::AccountName](#accountname)|Restituisce il nome dell'account di cui è associato il `CSid` oggetto.|  
|[CSid::Domain](#domain)|Restituisce il nome del dominio di cui è associato il `CSid` oggetto.|  
|[CSid::EqualPrefix](#equalprefix)|Test `SID` prefissi (SID) per verificarne l'uguaglianza.|  
|[CSid::GetLength](#getlength)|Restituisce la lunghezza del `CSid` oggetto.|  
|[CSid::GetPSID](#getpsid)|Restituisce un puntatore a un `SID` struttura.|  
|[CSid::GetPSID_IDENTIFIER_AUTHORITY](#getpsid_identifier_authority)|Restituisce un puntatore al **SID_IDENTIFIER_AUTHORITY** struttura.|  
|[CSid::GetSubAuthority](#getsubauthority)|Restituisce un sottoautorità specificato in un **SID** struttura.|  
|[CSid::GetSubAuthorityCount](#getsubauthoritycount)|Restituisce il numero di sottoautorità.|  
|[CSid::IsValid](#isvalid)|Test di `CSid` oggetto per la validità.|  
|[CSid::LoadAccount](#loadaccount)|Gli aggiornamenti di `CSid` oggetto dato il nome dell'account e dominio o un oggetto esistente `SID` struttura.|  
|[CSid::Sid](#sid)|Restituisce la stringa di ID.|  
|[CSid::SidNameUse](#sidnameuse)|Restituisce una descrizione dello stato di `CSid` oggetto.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](#operator_eq)|Operatore di assegnazione.|  
|[operatore SID const *](#operator_const_sid__star)|Cast di un `CSid` oggetto in un puntatore a un `SID` struttura.|  
  
### <a name="global-operators"></a>Operatori globali  
  
|||  
|-|-|  
|[operatore = =](#operator_eq_eq)|Verifica l'uguaglianza dei due oggetti di descrittore di sicurezza|  
|[operatore! =](#operator_neq)|Verifica due oggetti descrittore di sicurezza per verificarne la disuguaglianza|  
|[(operatore)\<](#operator_lt_)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|  
|[operatore >](#operator_gt_)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|  
|[(operatore)\<=](#operator_lt__eq)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|  
|[operatore > =](#operator_gt__eq)|Confronta il valore relativo di due oggetti descrittore di sicurezza.|  
  
## <a name="remarks"></a>Note  
 Il `SID` struttura è una struttura a lunghezza variabile utilizzata per identificare in modo univoco gli utenti o gruppi.  
  
 Le applicazioni non devono modificare il `SID` struttura direttamente, ma si utilizzano i metodi forniti in questa classe wrapper. Vedere anche [AtlGetOwnerSid](security-global-functions.md#atlgetownersid), [AtlSetGroupSid](security-global-functions.md#atlsetgroupsid), [AtlGetGroupSid](security-global-functions.md#atlgetgroupsid), e [AtlSetOwnerSid](security-global-functions.md#atlsetownersid).  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in Windows SDK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="accountname"></a>CSid::AccountName  
 Restituisce il nome dell'account di cui è associato il `CSid` oggetto.  
  
```
LPCTSTR AccountName() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il `LPCTSTR` che punta al nome dell'account.  
  
### <a name="remarks"></a>Note  
 Questo metodo tenta di trovare un nome per l'oggetto specificato `SID` (ID di sicurezza). Per informazioni dettagliate, vedere [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166).  
  
 Se nessun nome di account per il `SID` è reperibile, `AccountName` restituisce una stringa vuota. Ciò può verificarsi se un timeout della rete impedisce l'individuazione del nome di questo metodo. Si verifica anche per gli identificatori di sicurezza senza nome account corrispondente, ad esempio un account di accesso `SID` che identifica una sessione di accesso.  
  
##  <a name="csid"></a>CSid::CSid  
 Costruttore.  
  
```
CSid() throw();
CSid(const SID& rhs) throw(...);
CSid(const CSid& rhs) throw(...);

CSid(
    const SID_IDENTIFIER_AUTHORITY& IdentifierAuthority,
    BYTE nSubAuthorityCount,
    ...) throw(...);

explicit CSid(
    LPCTSTR pszAccountName,
    LPCTSTR pszSystem = NULL) throw(...);

explicit CSid(
    const SID* pSid,
    LPCTSTR pszSystem = NULL) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Un oggetto esistente `CSid` oggetto o `SID` struttura (SID).  
  
 *IdentifierAuthority*  
 L'autorità.  
  
 *nSubAuthorityCount*  
 Il numero di sottoautorità.  
  
 `pszAccountName`  
 Il nome dell'account.  
  
 `pszSystem`  
 Nome del sistema. Questa stringa può essere il nome di un computer remoto. Se questa stringa è NULL, viene utilizzato invece il sistema locale.  
  
 `pSid`  
 Un puntatore a un `SID` struttura.  
  
### <a name="remarks"></a>Note  
 Il costruttore inizializza la `CSid` oggetto, l'impostazione di un membro dati interni *SidTypeInvalid*, oppure copiando le impostazioni da un oggetto esistente `CSid`, `SID`, o un account esistente.  
  
 Se l'inizializzazione ha esito negativo, il costruttore genera un [CAtlException classe](../../atl/reference/catlexception-class.md).  
  
##  <a name="dtor"></a>IDSR:: ~ IDSR  
 Distruttore.  
  
```
virtual ~CSid() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera le risorse acquisite dall'oggetto.  
  
##  <a name="csidarray"></a>CSid::CSidArray  
 Matrice di [IDSR](../../atl/reference/csid-class.md) oggetti.  
  
```
typedef CAtlArray<CSid> CSidArray;
```  
  
### <a name="remarks"></a>Note  
 Questo typedef specifica il tipo di matrice che può essere utilizzato per recuperare gli identificatori di sicurezza da un ACL (elenco di controllo di accesso). Vedere [CAcl::GetAclEntries](../../atl/reference/cacl-class.md#getaclentries).  
  
##  <a name="domain"></a>CSid::Domain  
 Restituisce il nome del dominio di cui è associato il `CSid` oggetto.  
  
```
LPCTSTR Domain() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il `LPCTSTR` che puntano al dominio.  
  
### <a name="remarks"></a>Note  
 Questo metodo tenta di trovare un nome per l'oggetto specificato `SID` (ID di sicurezza). Per informazioni dettagliate, vedere [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166).  
  
 Se nessun nome di account per il `SID` è reperibile, **dominio** restituisce il dominio come una stringa vuota. Ciò può verificarsi se un timeout della rete impedisce l'individuazione del nome di questo metodo. Si verifica anche per gli identificatori di sicurezza senza nome account corrispondente, ad esempio un account di accesso `SID` che identifica una sessione di accesso.  
  
##  <a name="equalprefix"></a>CSid::EqualPrefix  
 Test `SID` prefissi (SID) per verificarne l'uguaglianza.  
  
```
bool EqualPrefix(const SID& rhs) const throw();
bool EqualPrefix(const CSid& rhs) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `SID` struttura (ID di sicurezza) o `CSid` oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** in caso di esito positivo **false** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Vedere [EqualPrefixSid](http://msdn.microsoft.com/library/windows/desktop/aa446621) in Windows SDK per ulteriori dettagli.  
  
##  <a name="getlength"></a>CSid::GetLength  
 Restituisce la lunghezza del `CSid` oggetto.  
  
```
UINT GetLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza in byte del `CSid` oggetto.  
  
### <a name="remarks"></a>Note  
 Se il `CSid` struttura non è valida, il valore restituito è indefinito. Prima di chiamare `GetLength`, utilizzare il [CSid::IsValid](#isvalid) funzione membro per verificare che `CSid` è valido.  
  
> [!NOTE]
>  In una build di debug, la funzione genera un'ASSERZIONE se il `CSid` oggetto non è valido.  
  
##  <a name="getpsid"></a>CSid::GetPSID  
 Restituisce un puntatore a un `SID` struttura (SID).  
  
```
const SID* GetPSID() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indirizzo del `CSid` sottostante del `SID` struttura.  
  
##  <a name="getpsid_identifier_authority"></a>CSid::GetPSID_IDENTIFIER_AUTHORITY  
 Restituisce un puntatore al **SID_IDENTIFIER_AUTHORITY** struttura.  
  
```
const SID_IDENTIFIER_AUTHORITY* GetPSID_IDENTIFIER_AUTHORITY() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce l'indirizzo del **SID_IDENTIFIER_AUTHORITY** struttura. In caso contrario, il valore restituito è indefinito. Errore può verificarsi se il `CSid` oggetto non valido, nel qual caso il [CSid::IsValid](#isvalid) restituisce **false**. La funzione `GetLastError` può essere chiamato per informazioni dettagliate sull'errore.  
  
> [!NOTE]
>  In una build di debug, la funzione genera un'ASSERZIONE se il `CSid` oggetto non è valido.  
  
##  <a name="getsubauthority"></a>CSid::GetSubAuthority  
 Restituisce un sottoautorità specificato in un `SID` struttura (SID).  
  
```
DWORD GetSubAuthority(DWORD nSubAuthority) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *nSubAuthority*  
 Il tipo di sottoautorità.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il riferimento di sottoautorità *nSubAuthority.* Il valore di sottoautorità è un identificatore relativo (RID).  
  
### <a name="remarks"></a>Note  
 Il *nSubAuthority* parametro specifica un valore di indice che identifica il metodo restituirà l'elemento della matrice sottoautorità. Il metodo non esegue alcun test di convalida su questo valore. Un'applicazione può chiamare [CSid::GetSubAuthorityCount](#getsubauthoritycount) per individuare l'intervallo di valori accettabili.  
  
> [!NOTE]
>  In una build di debug, la funzione genera un'ASSERZIONE se il `CSid` oggetto non è valido.  
  
##  <a name="getsubauthoritycount"></a>CSid::GetSubAuthorityCount  
 Restituisce il numero di sottoautorità.  
  
```
UCHAR GetSubAuthorityCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è il numero di sottoautorità.  
  
 Se il metodo ha esito negativo, il valore restituito è indefinito. Il metodo ha esito negativo se il `CSid` oggetto non è valido. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.  
  
> [!NOTE]
>  In una build di debug, la funzione genera un'ASSERZIONE se il `CSid` oggetto non è valido.  
  
##  <a name="isvalid"></a>CSid::IsValid  
 Test di `CSid` oggetto per la validità.  
  
```
bool IsValid() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il `CSid` oggetto è valido, **false** in caso contrario. Non sono disponibili informazioni dettagliate sull'errore per questo metodo. non chiamare `GetLastError`.  
  
### <a name="remarks"></a>Note  
 Il `IsValid` metodo convalida il `CSid` oggetto verificando che il numero di revisione sia all'interno di un intervallo noto e che il numero di sottoautorità è inferiore al massimo.  
  
##  <a name="loadaccount"></a>CSid::LoadAccount  
 Gli aggiornamenti di `CSid` oggetto dato il nome dell'account e di dominio o di una struttura di sicurezza (SID) esistente.  
  
```
bool LoadAccount(
    LPCTSTR pszAccountName,
    LPCTSTR pszSystem = NULL) throw(...);

bool LoadAccount(
    const SID* pSid,
    LPCTSTR pszSystem = NULL) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `pszAccountName`  
 Il nome dell'account.  
  
 `pszSystem`  
 Nome del sistema. Questa stringa può essere il nome di un computer remoto. Se questa stringa è NULL, viene utilizzato invece il sistema locale.  
  
 `pSid`  
 Un puntatore a un [SID](http://msdn.microsoft.com/library/windows/desktop/aa379594\(v=vs.85\).aspx) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** in caso di esito positivo **false** in caso di errore. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.  
  
### <a name="remarks"></a>Note  
 `LoadAccount`tenta di trovare un ID di sicurezza per il nome specificato. Vedere [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166\(v=vs.85\).aspx) per altri dettagli.  
  
##  <a name="operator_eq"></a>CSid::operator =  
 Operatore di assegnazione.  
  
```
CSid& operator= (const CSid& rhs) throw(...);  
CSid& operator= (const SID& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `SID` (ID di sicurezza) o `CSid` da assegnare al `CSid` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento aggiornato `CSid` oggetto.  
  
##  <a name="operator_eq_eq"></a>CSid::operator = =  
 Verifica l'uguaglianza dei due oggetti di descrittore di sicurezza.  
  
```
bool operator==(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il `SID` (SID) o `CSid` che viene visualizzato sul lato sinistro dell'operatore = =.  
  
 `rhs`  
 Il `SID` (SID) o `CSid` che viene visualizzato sul lato destro dell'operatore = =.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se i descrittori di sicurezza sono uguali; in caso contrario **false**.  
  
##  <a name="operator_neq"></a>CSid::operator! =  
 Verifica due oggetti descrittore di sicurezza per verificarne la disuguaglianza.  
  
```
bool operator!=(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il `SID` (ID di sicurezza) o `CSid` che viene visualizzato sul lato sinistro del! = (operatore).  
  
 `rhs`  
 Il `SID` (ID di sicurezza) o `CSid` che viene visualizzato sul lato destro del! = (operatore).  
  
### <a name="return-value"></a>Valore restituito  
 **true** se i descrittori di sicurezza non sono uguali, altrimenti **false**.  
  
##  <a name="operator_lt"></a>CSid::operator&lt;  
 Confronta il valore relativo di due oggetti descrittore di sicurezza.  
  
```
bool operator<(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il `SID` (ID di sicurezza) o `CSid` che viene visualizzato sul lato sinistro del! = (operatore).  
  
 `rhs`  
 Il `SID` (ID di sicurezza) o `CSid` che viene visualizzato sul lato destro del! = (operatore).  
  
### <a name="return-value"></a>Valore restituito  
 **true** se `lhs` è minore di `rhs`, in caso contrario **false**.  
  
##  <a name="operator_lt__eq"></a>CSid::operator&lt;=  
 Confronta il valore relativo di due oggetti descrittore di sicurezza.  
  
```
bool operator<=(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il `SID` (ID di sicurezza) o `CSid` che viene visualizzato sul lato sinistro del! = (operatore).  
  
 `rhs`  
 Il `SID` (ID di sicurezza) o `CSid` che viene visualizzato sul lato destro del! = (operatore).  
  
### <a name="return-value"></a>Valore restituito  
 **true** se `lhs` è minore o uguale a `rhs`, in caso contrario **false**.  
  
##  <a name="operator_gt"></a>CSid::operator&gt;  
 Confronta il valore relativo di due oggetti descrittore di sicurezza.  
  
```
bool operator>(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il `SID` (ID di sicurezza) o `CSid` che viene visualizzato sul lato sinistro del! = (operatore).  
  
 `rhs`  
 Il `SID` (ID di sicurezza) o `CSid` che viene visualizzato sul lato destro del! = (operatore).  
  
### <a name="return-value"></a>Valore restituito  
 **true** se `lhs` è maggiore di `rhs`, in caso contrario **false**.  
  
##  <a name="operator_gt__eq"></a>CSid::operator&gt;=  
 Confronta il valore relativo di due oggetti descrittore di sicurezza.  
  
```
bool operator>=(
    const CSid& lhs,
    const CSid& rhs) throw());
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il `SID` (ID di sicurezza) o `CSid` che viene visualizzato sul lato sinistro del! = (operatore).  
  
 `rhs`  
 Il `SID` (ID di sicurezza) o `CSid` che viene visualizzato sul lato destro del! = (operatore).  
  
### <a name="return-value"></a>Valore restituito  
 **true** se `lhs` è maggiore o uguale a `rhs`, in caso contrario **false**.  
  
##  <a name="operator_const_sid__star"></a>SID const CSid::operator *  
 Cast di un `CSid` oggetto in un puntatore a un `SID` struttura (SID).  
  
```  
operator const SID *() const throw(...);
```  
  
### <a name="remarks"></a>Note  
 Restituisce l'indirizzo del `SID` struttura.  
  
##  <a name="sid"></a>CSid::Sid  
 Restituisce il `SID` struttura (SID) sotto forma di stringa.  
  
```
LPCTSTR Sid() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il `SID` struttura sotto forma di stringa in un formato appropriato per la visualizzazione, archiviazione o la trasmissione. Equivalente a [ConvertSidToStringSid](http://msdn.microsoft.com/library/windows/desktop/aa376399), anche se questa funzione è disponibile in Windows 2000 o versione successiva e pertanto viene emulato per sistemi operativi precedenti.  
  
##  <a name="sidnameuse"></a>CSid::SidNameUse  
 Restituisce una descrizione dello stato di `CSid` oggetto.  
  
```
SID_NAME_USE SidNameUse() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del membro dati che archivia un valore che indica lo stato del `CSid` oggetto.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|SidTypeUser|Indica un utente `SID` (ID di sicurezza).|  
|SidTypeGroup|Indica un gruppo `SID`.|  
|SidTypeDomain|Indica un dominio `SID`.|  
|SidTypeAlias|Indica un alias `SID`.|  
|SidTypeWellKnownGroup|Indica un `SID` per un gruppo noto.|  
|SidTypeDeletedAccount|Indica un `SID` per un account eliminato.|  
|SidTypeInvalid|Indica un oggetto non valido `SID`.|  
|SidTypeUnknown|Indica uno stato sconosciuto `SID` tipo.|  
|SidTypeComputer|Indica un `SID` per un computer.|  
  
### <a name="remarks"></a>Note  
 Chiamare [CSid::LoadAccount](#loadaccount) per aggiornare il `CSid` oggetto prima di chiamare `SidNameUse` per restituire il relativo stato. `SidNameUse`non modificare lo stato dell'oggetto (mediante una chiamata a **LookupAccountName** o **LookupAccountSid**), ma solo restituisce lo stato corrente.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di sicurezza](../../visual-cpp-samples.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni di sicurezza globale](../../atl/reference/security-global-functions.md)   
 [Operatori](../../atl/reference/atl-operators.md)
