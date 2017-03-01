---
title: Classe IDSR | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSid
- ATL::CSid
- ATL.CSid
dev_langs:
- C++
helpviewer_keywords:
- CSid class
ms.assetid: be58b7ca-5958-49c3-a833-ca341aaaf753
caps.latest.revision: 24
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
ms.openlocfilehash: ceb0ab95d18e1336584eab45bc00ce769efd7384
ms.lasthandoff: 02/24/2017

---
# <a name="csid-class"></a>IDSR (classe)
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
|[CSid::AccountName](#accountname)|Restituisce il nome dell'account associato di `CSid` oggetto.|  
|[CSid::Domain](#domain)|Restituisce il nome di dominio associato con il `CSid` oggetto.|  
|[CSid::EqualPrefix](#equalprefix)|Test `SID` prefissi (SID) per verificarne l'uguaglianza.|  
|[CSid::GetLength](#getlength)|Restituisce il numero di `CSid` oggetto.|  
|[CSid::GetPSID](#getpsid)|Restituisce un puntatore a un `SID` struttura.|  
|[CSid::GetPSID_IDENTIFIER_AUTHORITY](#getpsid_identifier_authority)|Restituisce un puntatore per il **SID_IDENTIFIER_AUTHORITY** struttura.|  
|[CSid::GetSubAuthority](#getsubauthority)|Restituisce una sottoautorità specificato in un **SID** struttura.|  
|[CSid::GetSubAuthorityCount](#getsubauthoritycount)|Restituisce il numero di sottoautorità.|  
|[CSid::IsValid](#isvalid)|Test di `CSid` oggetto per la validità.|  
|[CSid::LoadAccount](#loadaccount)|Gli aggiornamenti di `CSid` oggetto dato il nome dell'account e dominio o un oggetto esistente `SID` struttura.|  
|[CSid::Sid](#sid)|Restituisce la stringa ID.|  
|[CSid::SidNameUse](#sidnameuse)|Restituisce una descrizione dello stato di `CSid` oggetto.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore =](#operator_eq)|Operatore di assegnazione.|  
|[operatore SID const *](#operator_const_sid__star)|Cast di un `CSid` oggetto a un puntatore a un `SID` struttura.|  
  
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
  
 Le applicazioni non è necessario modificare il `SID` struttura direttamente, ma si utilizzano i metodi forniti in questa classe wrapper. Vedere anche [AtlGetOwnerSid](http://msdn.microsoft.com/library/0e3a2606-74b8-4412-9803-bb437e22da85), [AtlSetGroupSid](http://msdn.microsoft.com/library/83531d32-11ab-4a68-a3c6-1bfa54ab8dfa), [AtlGetGroupSid](http://msdn.microsoft.com/library/8e7ec6b9-15c8-4a8a-977e-1e4c853d0be7), e [AtlSetOwnerSid](http://msdn.microsoft.com/library/3a8abb76-1d2c-465d-a5e8-62a12a3c37f3).  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [il controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="a-nameaccountnamea--csidaccountname"></a><a name="accountname"></a>CSid::AccountName  
 Restituisce il nome dell'account associato di `CSid` oggetto.  
  
```
LPCTSTR AccountName() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il `LPCTSTR` che punta al nome dell'account.  
  
### <a name="remarks"></a>Note  
 Questo metodo tenta di trovare un nome per l'oggetto `SID` (SID). Per informazioni dettagliate, vedere [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166).  
  
 Se nessun nome di account per il `SID` reperibili, `AccountName` restituisce una stringa vuota. Ciò può verificarsi se un timeout di rete impedisce l'individuazione del nome di questo metodo. Si verifica anche per gli identificatori di sicurezza senza nome account corrispondente, ad esempio un account di accesso `SID` che identifica una sessione di accesso.  
  
##  <a name="a-namecsida--csidcsid"></a><a name="csid"></a>CSid::CSid  
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
 Il nome del sistema. Questa stringa può essere il nome di un computer remoto. Se questa stringa è NULL, viene utilizzato il sistema locale.  
  
 `pSid`  
 Un puntatore a un `SID` struttura.  
  
### <a name="remarks"></a>Note  
 Il costruttore inizializza la `CSid` oggetto, l'impostazione di un membro dati interni su *SidTypeInvalid*, oppure copiando le impostazioni da un oggetto esistente `CSid`, `SID`, o account esistente.  
  
 Se un errore di inizializzazione, il costruttore genera un [CAtlException classe](../../atl/reference/catlexception-class.md).  
  
##  <a name="a-namedtora--csidcsid"></a><a name="dtor"></a>IDSR:: ~ IDSR  
 Distruttore.  
  
```
virtual ~CSid() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera eventuali risorse ottenute dall'oggetto.  
  
##  <a name="a-namecsidarraya--csidcsidarray"></a><a name="csidarray"></a>CSid::CSidArray  
 Matrice di [IDSR](../../atl/reference/csid-class.md) oggetti.  
  
```
typedef CAtlArray<CSid> CSidArray;
```  
  
### <a name="remarks"></a>Note  
 Questo typedef specifica il tipo di matrice che può essere utilizzato per recuperare gli identificatori di protezione da un ACL (elenco di controllo di accesso). Vedere [CAcl::GetAclEntries](../../atl/reference/cacl-class.md#getaclentries).  
  
##  <a name="a-namedomaina--csiddomain"></a><a name="domain"></a>CSid::Domain  
 Restituisce il nome di dominio associato con il `CSid` oggetto.  
  
```
LPCTSTR Domain() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il `LPCTSTR` che puntano al dominio.  
  
### <a name="remarks"></a>Note  
 Questo metodo tenta di trovare un nome per l'oggetto `SID` (SID). Per informazioni dettagliate, vedere [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166).  
  
 Se nessun nome di account per il `SID` reperibili, **dominio** restituisce il dominio come una stringa vuota. Ciò può verificarsi se un timeout di rete impedisce l'individuazione del nome di questo metodo. Si verifica anche per gli identificatori di sicurezza senza nome account corrispondente, ad esempio un account di accesso `SID` che identifica una sessione di accesso.  
  
##  <a name="a-nameequalprefixa--csidequalprefix"></a><a name="equalprefix"></a>CSid::EqualPrefix  
 Test `SID` prefissi (SID) per verificarne l'uguaglianza.  
  
```
bool EqualPrefix(const SID& rhs) const throw();
bool EqualPrefix(const CSid& rhs) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `SID` struttura (SID) o `CSid` oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** esito positivo, **false** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Vedere [EqualPrefixSid](http://msdn.microsoft.com/library/windows/desktop/aa446621) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori dettagli.  
  
##  <a name="a-namegetlengtha--csidgetlength"></a><a name="getlength"></a>CSid::GetLength  
 Restituisce il numero di `CSid` oggetto.  
  
```
UINT GetLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza in byte del `CSid` oggetto.  
  
### <a name="remarks"></a>Note  
 Se il `CSid` struttura non è valida, il valore restituito è indefinito. Prima di chiamare `GetLength`, utilizzare il [CSid::IsValid](#isvalid) funzione membro per verificare che `CSid` è valido.  
  
> [!NOTE]
>  In compilazioni di debug, la funzione causerà un'ASSERZIONE se il `CSid` oggetto non è valido.  
  
##  <a name="a-namegetpsida--csidgetpsid"></a><a name="getpsid"></a>CSid::GetPSID  
 Restituisce un puntatore a un `SID` struttura (SID).  
  
```
const SID* GetPSID() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indirizzo di `CSid` sottostante del `SID` struttura.  
  
##  <a name="a-namegetpsididentifierauthoritya--csidgetpsididentifierauthority"></a><a name="getpsid_identifier_authority"></a>CSid::GetPSID_IDENTIFIER_AUTHORITY  
 Restituisce un puntatore per il **SID_IDENTIFIER_AUTHORITY** struttura.  
  
```
const SID_IDENTIFIER_AUTHORITY* GetPSID_IDENTIFIER_AUTHORITY() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce l'indirizzo del **SID_IDENTIFIER_AUTHORITY** struttura. In caso contrario, il valore restituito è indefinito. Potrebbe verificarsi un errore se il `CSid` oggetto non valido, nel qual caso il [CSid::IsValid](#isvalid) restituisce **false**. La funzione `GetLastError` può essere chiamato per informazioni dettagliate sull'errore.  
  
> [!NOTE]
>  In compilazioni di debug, la funzione causerà un'ASSERZIONE se il `CSid` oggetto non è valido.  
  
##  <a name="a-namegetsubauthoritya--csidgetsubauthority"></a><a name="getsubauthority"></a>CSid::GetSubAuthority  
 Restituisce una sottoautorità specificato in un `SID` struttura (SID).  
  
```
DWORD GetSubAuthority(DWORD nSubAuthority) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *nSubAuthority*  
 Le sottoautorità.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce le sottoautorità a cui fa riferimento *nSubAuthority.* Il valore di sottoautorità è un identificatore relativo (RID).  
  
### <a name="remarks"></a>Note  
 Il *nSubAuthority* parametro specifica un valore di indice che identifica il metodo restituirà l'elemento della matrice sottoautorità. Il metodo non esegue alcun test di convalida su questo valore. Un'applicazione può chiamare [CSid::GetSubAuthorityCount](#getsubauthoritycount) per individuare l'intervallo di valori accettabili.  
  
> [!NOTE]
>  In compilazioni di debug, la funzione causerà un'ASSERZIONE se il `CSid` oggetto non è valido.  
  
##  <a name="a-namegetsubauthoritycounta--csidgetsubauthoritycount"></a><a name="getsubauthoritycount"></a>CSid::GetSubAuthorityCount  
 Restituisce il numero di sottoautorità.  
  
```
UCHAR GetSubAuthorityCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è il numero di sottoautorità.  
  
 Se il metodo non riesce, il valore restituito è indefinito. Il metodo non riesce se il `CSid` oggetto non è valido. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.  
  
> [!NOTE]
>  In compilazioni di debug, la funzione causerà un'ASSERZIONE se il `CSid` oggetto non è valido.  
  
##  <a name="a-nameisvalida--csidisvalid"></a><a name="isvalid"></a>CSid::IsValid  
 Test di `CSid` oggetto per la validità.  
  
```
bool IsValid() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il `CSid` oggetto è valido, **false** in caso contrario. Non sono disponibili informazioni sull'errore per questo metodo. non chiamare `GetLastError`.  
  
### <a name="remarks"></a>Note  
 Il `IsValid` metodo convalida il `CSid` oggetto verificando che il numero di revisione è all'interno di un intervallo noto e che il numero di sottoautorità è inferiore al massimo.  
  
##  <a name="a-nameloadaccounta--csidloadaccount"></a><a name="loadaccount"></a>CSid::LoadAccount  
 Gli aggiornamenti di `CSid` oggetto dato il nome dell'account e dominio o una struttura di sicurezza (SID) esistente.  
  
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
 Il nome del sistema. Questa stringa può essere il nome di un computer remoto. Se questa stringa è NULL, viene utilizzato il sistema locale.  
  
 `pSid`  
 Un puntatore a un [SID](http://msdn.microsoft.com/library/windows/desktop/aa379594\(v=vs.85\).aspx) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** esito positivo, **false** in caso di errore. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.  
  
### <a name="remarks"></a>Note  
 `LoadAccount`tenta di trovare un ID di sicurezza per il nome specificato. Vedere [LookupAccountSid](http://msdn.microsoft.com/library/windows/desktop/aa379166\(v=vs.85\).aspx) per ulteriori dettagli.  
  
##  <a name="a-nameoperatoreqa--csidoperator-"></a><a name="operator_eq"></a>CSid::operator =  
 Operatore di assegnazione.  
  
```
CSid& operator= (const CSid& rhs) throw(...);  
CSid& operator= (const SID& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `SID` (SID) o `CSid` di assegnare il `CSid` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento aggiornato `CSid` oggetto.  
  
##  <a name="a-nameoperatoreqeqa--csidoperator-"></a><a name="operator_eq_eq"></a>CSid::operator = =  
 Verifica due oggetti descrittore di sicurezza per verificarne l'uguaglianza.  
  
```
bool operator==(
    const CSid& lhs,
    const CSid& rhs) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il `SID` (SID) o `CSid` che viene visualizzato sul lato sinistro dell'operatore = =.  
  
 `rhs`  
 Il `SID` (SID) o `CSid` visualizzato sul lato destro dell'operatore = =.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se i descrittori di sicurezza sono uguali; in caso contrario **false**.  
  
##  <a name="a-nameoperatorneqa--csidoperator-"></a><a name="operator_neq"></a>CSid::operator! =  
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
  
##  <a name="a-nameoperatorlta--csidoperator-lt"></a><a name="operator_lt"></a>CSid::operator&lt;  
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
  
##  <a name="a-nameoperatorlteqa--csidoperator-lt"></a><a name="operator_lt__eq"></a>CSid::operator&lt;=  
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
  
##  <a name="a-nameoperatorgta--csidoperator-gt"></a><a name="operator_gt"></a>CSid::operator&gt;  
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
  
##  <a name="a-nameoperatorgteqa--csidoperator-gt"></a><a name="operator_gt__eq"></a>CSid::operator&gt;=  
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
  
##  <a name="a-nameoperatorconstsidstara--csidoperator-const-sid-"></a><a name="operator_const_sid__star"></a>SID const CSid::operator *  
 Cast di un `CSid` oggetto a un puntatore a un `SID` struttura (SID).  
  
```  
operator const SID *() const throw(...);
```  
  
### <a name="remarks"></a>Note  
 Restituisce l'indirizzo del `SID` struttura.  
  
##  <a name="a-namesida--csidsid"></a><a name="sid"></a>CSid::Sid  
 Restituisce il `SID` struttura (SID) sotto forma di stringa.  
  
```
LPCTSTR Sid() const throw(...);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il `SID` struttura sotto forma di stringa in un formato adatto alla visualizzazione, archiviazione o di trasmissione. Equivalente a [ConvertSidToStringSid](http://msdn.microsoft.com/library/windows/desktop/aa376399), anche se questa funzione è disponibile in Windows 2000 o versione successiva e quindi viene emulato per sistemi operativi precedenti.  
  
##  <a name="a-namesidnameusea--csidsidnameuse"></a><a name="sidnameuse"></a>CSid::SidNameUse  
 Restituisce una descrizione dello stato di `CSid` oggetto.  
  
```
SID_NAME_USE SidNameUse() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del membro dati che archivia un valore che indica lo stato di `CSid` oggetto.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|SidTypeUser|Indica un utente `SID` (SID).|  
|SidTypeGroup|Indica un gruppo `SID`.|  
|SidTypeDomain|Indica un dominio `SID`.|  
|SidTypeAlias|Indica un alias `SID`.|  
|SidTypeWellKnownGroup|Indica un `SID` per un gruppo conosciuto.|  
|SidTypeDeletedAccount|Indica un `SID` per un account eliminato.|  
|SidTypeInvalid|Indica un valore non valido `SID`.|  
|SidTypeUnknown|Indica un sconosciuto `SID` tipo.|  
|SidTypeComputer|Indica un `SID` per un computer.|  
  
### <a name="remarks"></a>Note  
 Chiamare [CSid::LoadAccount](#loadaccount) per aggiornare il `CSid` oggetto prima di chiamare `SidNameUse` per restituire il relativo stato. `SidNameUse`non modifica lo stato dell'oggetto (mediante una chiamata a **LookupAccountName** o **LookupAccountSid**), ma restituisce solo lo stato corrente.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di sicurezza](../../visual-cpp-samples.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni globali di protezione](../../atl/reference/security-global-functions.md)   
 [Operatori](../../atl/reference/atl-operators.md)

