---
title: Classe CComCurrency | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComCurrency
- ATLCUR/ATL::CComCurrency
- ATLCUR/ATL::CComCurrency::CComCurrency
- ATLCUR/ATL::CComCurrency::GetCurrencyPtr
- ATLCUR/ATL::CComCurrency::GetFraction
- ATLCUR/ATL::CComCurrency::GetInteger
- ATLCUR/ATL::CComCurrency::Round
- ATLCUR/ATL::CComCurrency::SetFraction
- ATLCUR/ATL::CComCurrency::SetInteger
- ATLCUR/ATL::CComCurrency::m_currency
dev_langs:
- C++
helpviewer_keywords:
- CComCurrency class
ms.assetid: a1c3d10a-bba6-40cc-8bcf-aed9023c8a9e
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 1b0b4fa5f42bd060b08ef90d09eee8d9d2d76fe6
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ccomcurrency-class"></a>Classe CComCurrency
`CComCurrency` dispone di metodi e operatori per creare e gestire un oggetto CURRENCY.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComCurrency
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCurrency::CComCurrency](#ccomcurrency)|Costruttore per un oggetto `CComCurrency`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCurrency::GetCurrencyPtr](#getcurrencyptr)|Restituisce l'indirizzo di un membro dati `m_currency`.|  
|[CComCurrency::GetFraction](#getfraction)|Chiamare questo metodo per restituire il componente frazionario di un oggetto `CComCurrency`.|  
|[CComCurrency::GetInteger](#getinteger)|Chiamare questo metodo per restituire il componente Integer di un oggetto `CComCurrency`.|  
|[CComCurrency::Round](#round)|Chiamare questo metodo per arrotondare un oggetto `CComCurrency` al valore intero più vicino.|  
|[CComCurrency::SetFraction](#setfraction)|Chiamare questo metodo per impostare il componente frazionario di un oggetto `CComCurrency`.|  
|[CComCurrency::SetInteger](#setinteger)|Chiamare questo metodo per impostare il componente Integer di un oggetto `CComCurrency`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCurrency::operator-](#operator_-)|Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency`.|  
|[CComCurrency::operator! =](#operator_neq)|Confronta due oggetti `CComCurrency` per stabilirne la disuguaglianza.|  
|[CComCurrency::operator *](#operator_star)|Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency`.|  
|[CComCurrency::operator * =](#operator_star_eq)|Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency` e per assegnare il risultato.|  
|[CComCurrency::operator /](#operator_div)|Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency`.|  
|[CComCurrency::operator / =](#operator_div_eq)|Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency` e per assegnare il risultato.|  
|[CComCurrency::operator +](#operator_add)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency`.|  
|[+ = CComCurrency::operator](#operator_add_eq)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency` e per assegnare il risultato all'oggetto corrente.|  
|[CComCurrency::operator](#operator_lt)|Questo operatore confronta due oggetti `CComCurrency` per determinare il minore.|  
|[CComCurrency::operator<>](#operator_lt_eq)|Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il minore.|  
|[CComCurrency::operator =](#operator_eq)|Questo operatore assegna l'oggetto `CComCurrency` a un nuovo valore.|  
|[CComCurrency::operator =](#operator_-_eq)|Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency` e per assegnare il risultato.|  
|[CComCurrency::operator = =](#operator_eq_eq)|Questo operatore confronta due oggetti `CComCurrency` per stabilirne l'uguaglianza.|  
|[CComCurrency::operator >](#operator_gt)|Questo operatore confronta due oggetti `CComCurrency` per determinare il più grande.|  
|[CComCurrency::operator > =](#operator_gt_eq)|Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il più grande.|  
|[CComCurrency::operator valuta](#operator_currency)|Esegue il cast di un oggetto `CURRENCY`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCurrency::m_currency](#m_currency)|La variabile `CURRENCY` creata dall'istanza della classe.|  
  
## <a name="remarks"></a>Note  
 `CComCurrency`è un wrapper per il **valuta** tipo di dati. **VALUTA** viene implementato come un valore integer a 8 byte in complemento a due scalato in base a 10.000. In questo modo si ottiene un numero a virgola fissa con 15 cifre a sinistra del separatore decimale e 4 cifre a destra. Il **valuta** tipo di dati è estremamente utile per calcoli monetari o per tutti i calcoli a virgola fissa in cui la precisione è importante.  
  
 Il **CComCurrency** wrapper implementa operazioni aritmetiche, assegnazione e confronto per questo tipo a virgola fissa. Le applicazioni supportate sono state selezionate per controllare gli errori di arrotondamento che possono verificarsi durante i calcoli a virgola fissa.  
  
 L'oggetto `CComCurrency` fornisce accesso ai numeri su entrambi i lati del separatore decimale sotto forma di due componenti: un componente Integer che archivia il valore a sinistra del separatore decimale e un componente frazionario che archivia il valore a destra del separatore decimale. Il componente frazionario è memorizzato internamente come valore intero compreso tra -9999 ( **CY_MIN_FRACTION**) e +9999 ( **CY_MAX_FRACTION**). Il metodo [CComCurrency::GetFraction](#getfraction) restituisce un valore scalato in base a un fattore pari a 10000 ( **CY_SCALE**).  
  
 Quando si specifica il numero intero e componenti frazionari di un **CComCurrency** oggetto, tenere presente che il componente frazionario è un numero compreso nell'intervallo da 0 a 9999. Questo è importante quando si opera con valute come il dollaro americano, che indica gli importi usando solo due cifre significative dopo il separatore decimale.  Anche se le ultime due cifre non vengono visualizzate, devono essere tenute in considerazione.  
  
|Valore|Valori possibili di CComCurrency|  
|-----------|---------------------------------------|  
|$10.50|CComCurrency(10,5000) *o* CComCurrency(10.50)|  
|$10.05|CComCurrency(10,500) *o* CComCurrency(10.05)|  
  
 I valori **CY_MIN_FRACTION**, **CY_MAX_FRACTION**, e **CY_SCALE** sono definiti in atlcur.h.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcur.h  
  
##  <a name="ccomcurrency"></a>CComCurrency::CComCurrency  
 Costruttore.  
  
```
CComCurrency() throw();
CComCurrency(const CComCurrency& curSrc) throw();
CComCurrency(CURRENCY cySrc) throw();
CComCurrency(DECIMAL dSrc);
CComCurrency(ULONG ulSrc);  
CComCurrency(USHORT usSrc);  
CComCurrency(CHAR cSrc);  
CComCurrency(DOUBLE dSrc);  
CComCurrency(FLOAT fSrc);  
CComCurrency(LONG lSrc);  
CComCurrency(SHORT sSrc);  
CComCurrency(BYTE bSrc);  
CComCurrency(LONGLONG nInteger, SHORT nFraction);  
explicit CComCurrency(LPDISPATCH pDispSrc);  
explicit CComCurrency(const VARIANT& varSrc);  
explicit CComCurrency(LPCWSTR szSrc);  
explicit CComCurrency(LPCSTR szSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `curSrc`  
 Oggetto `CComCurrency` esistente.  
  
 `cySrc`  
 Una variabile di tipo **valuta**.  
  
 `bSrc`, `dSrc`, `fSrc`, `lSrc`, *sSrc*, *ulSrc, usSrc*  
 Il valore iniziale assegnato alla variabile membro `m_currency`.  
  
 `cSrc`  
 Un carattere che contiene il valore iniziale assegnato alla variabile membro `m_currency`.  
  
 `nInteger`, *nFraction*  
 Il valore integer e componenti frazionari del valore monetario iniziale. Vedere il [CComCurrency](../../atl/reference/ccomcurrency-class.md) overview per ulteriori informazioni.  
  
 `pDispSrc`  
 Un `IDispatch` puntatore.  
  
 *varSrc*  
 Una variabile di tipo **VARIANT**. Le impostazioni locali del thread corrente viene utilizzata per eseguire la conversione.  
  
 `szSrc`  
 Stringa Unicode o ANSI contenente il valore iniziale. Le impostazioni locali del thread corrente viene utilizzata per eseguire la conversione.  
  
### <a name="remarks"></a>Note  
 Il costruttore imposta il valore iniziale di [CComCurrency::m_currency](#m_currency)e accetta una vasta gamma di tipi di dati, tra cui integer, stringhe, numeri a virgola mobile, **valuta** variabili e altri `CComCurrency` oggetti. Se viene fornito alcun valore, `m_currency` è impostato su 0.  
  
 In caso di errore, ad esempio un overflow, i costruttori privi di una specifica di eccezione vuoto ( **throw ()**) chiamare `AtlThrow` con un HRESULT che descrive l'errore.  
  
 Quando si utilizzano valori a virgola mobile o doppie per assegnare un valore, si noti che **CComCurrency(10.50)** equivale a **CComCurrency(10,5000)** e non **CComCurrency(10,50)**.  
  
##  <a name="getcurrencyptr"></a>CComCurrency::GetCurrencyPtr  
 Restituisce l'indirizzo di un membro dati `m_currency`.  
  
```
CURRENCY* GetCurrencyPtr() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indirizzo di un `m_currency` (membro dati)  
  
##  <a name="getfraction"></a>CComCurrency::GetFraction  
 Chiamare questo metodo per restituire il componente frazionario di `CComCurrency` oggetto.  
  
```
SHORT GetFraction() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il componente frazionario del `m_currency` (membro dati).  
  
### <a name="remarks"></a>Note  
 Il componente frazionario è un valore integer a 4 cifre compreso tra -9999 ( **CY_MIN_FRACTION**) e +9999 ( **CY_MAX_FRACTION**). `GetFraction`Restituisce il valore ridimensionato di 10000 ( **CY_SCALE**). I valori di **CY_MIN_FRACTION**, **CY_MAX_FRACTION**, e **CY_SCALE** sono definiti in atlcur.h.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#50; NVC_ATL_Utilities](../../atl/codesnippet/cpp/ccomcurrency-class_1.cpp)]  
  
##  <a name="getinteger"></a>CComCurrency::GetInteger  
 Chiamare questo metodo per ottenere il componente numero intero di un `CComCurrency` oggetto.  
  
```
LONGLONG GetInteger() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il componente numero intero del `m_currency` (membro dati).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[51 NVC_ATL_Utilities](../../atl/codesnippet/cpp/ccomcurrency-class_2.cpp)]  
  
##  <a name="m_currency"></a>CComCurrency::m_currency  
 Il **valuta** (membro dati).  
  
```
CURRENCY m_currency;
```  
  
### <a name="remarks"></a>Note  
 Questo membro contiene la valuta accessibile e utilizzabile con i metodi di questa classe.  
  
##  <a name="operator_-"></a>CComCurrency::operator-  
 Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency`.  
  
```
CComCurrency operator-() const;
CComCurrency operator-(const CComCurrency& cur) const;
```  
  
### <a name="parameters"></a>Parametri  
 `cur`  
 Oggetto `CComCurrency`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CComCurrency` oggetto che rappresenta il risultato della sottrazione. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#55;](../../atl/codesnippet/cpp/ccomcurrency-class_3.cpp)]  
  
##  <a name="operator_neq"></a>CComCurrency::operator! =  
 Questo operatore confronta due oggetti per verificarne la disuguaglianza.  
  
```
bool operator!= (const CComCurrency& cur) const;
```  
  
### <a name="parameters"></a>Parametri  
 `cur`  
 L'oggetto `CComCurrency` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se l'elemento cui eseguire il confronto non è uguale al `CComCurrency` oggetto; in caso contrario, **false**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#56; NVC_ATL_Utilities](../../atl/codesnippet/cpp/ccomcurrency-class_4.cpp)]  
  
##  <a name="operator_star"></a>CComCurrency::operator *  
 Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency`.  
  
```
CComCurrency operator*(long nOperand) const;
CComCurrency operator*(const CComCurrency& cur) const;
```  
  
### <a name="parameters"></a>Parametri  
 `nOperand`  
 Moltiplicatore.  
  
 `cur`  
 Il `CComCurrency` oggetto usato come moltiplicatore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CComCurrency` oggetto che rappresenta il risultato della moltiplicazione. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#57;](../../atl/codesnippet/cpp/ccomcurrency-class_5.cpp)]  
  
##  <a name="operator_star_eq"></a>CComCurrency::operator * =  
 Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency` e per assegnare il risultato.  
  
```
const CComCurrency& operator*= (long nOperand);
const CComCurrency& operator*= (const CComCurrency& cur);
```  
  
### <a name="parameters"></a>Parametri  
 `nOperand`  
 Moltiplicatore.  
  
 `cur`  
 Il `CComCurrency` oggetto usato come moltiplicatore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CComCurrency` oggetto. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#58;](../../atl/codesnippet/cpp/ccomcurrency-class_6.cpp)]  
  
##  <a name="operator_div"></a>CComCurrency::operator /  
 Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency`.  
  
```
CComCurrency operator/(long nOperand) const;
```  
  
### <a name="parameters"></a>Parametri  
 `nOperand`  
 Divisore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CComCurrency` oggetto che rappresenta il risultato della divisione. Se il divisore è 0, si verificherà un errore di asserzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#59;](../../atl/codesnippet/cpp/ccomcurrency-class_7.cpp)]  
  
##  <a name="operator_div_eq"></a>CComCurrency::operator / =  
 Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency` e per assegnare il risultato.  
  
```
const CComCurrency& operator/= (long nOperand);
```  
  
### <a name="parameters"></a>Parametri  
 `nOperand`  
 Divisore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CComCurrency` oggetto. Se il divisore è 0, si verificherà un errore di asserzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[60 NVC_ATL_Utilities](../../atl/codesnippet/cpp/ccomcurrency-class_8.cpp)]  
  
##  <a name="operator_add"></a>CComCurrency::operator +  
 Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency`.  
  
```
CComCurrency operator+(const CComCurrency& cur) const;
```  
  
### <a name="parameters"></a>Parametri  
 `cur`  
 Il `CComCurrency` oggetto da aggiungere all'oggetto originale.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CComCurrency` oggetto che rappresenta il risultato dell'addizione. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities n.&61;](../../atl/codesnippet/cpp/ccomcurrency-class_9.cpp)]  
  
##  <a name="operator_add_eq"></a>+ = CComCurrency::operator  
 Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency` e per assegnare il risultato all'oggetto corrente.  
  
```
const CComCurrency& operator+= (const CComCurrency& cur);
```  
  
### <a name="parameters"></a>Parametri  
 `cur`  
 Oggetto `CComCurrency`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CComCurrency` oggetto. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#62; NVC_ATL_Utilities](../../atl/codesnippet/cpp/ccomcurrency-class_10.cpp)]  
  
##  <a name="operator_lt"></a>CComCurrency::operator&lt;  
 Questo operatore confronta due oggetti `CComCurrency` per determinare il minore.  
  
```
bool operator<(const CComCurrency& cur) const;
```  
  
### <a name="parameters"></a>Parametri  
 `cur`  
 Oggetto `CComCurrency`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è minore del secondo, **false** in caso contrario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#63;](../../atl/codesnippet/cpp/ccomcurrency-class_11.cpp)]  
  
##  <a name="operator_lt_eq"></a>CComCurrency::operator&lt;=  
 Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il minore.  
  
```
bool operator<= (const CComCurrency& cur) const;
```  
  
### <a name="parameters"></a>Parametri  
 `cur`  
 Oggetto `CComCurrency`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è minore o uguale al secondo, **false** in caso contrario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#64; NVC_ATL_Utilities](../../atl/codesnippet/cpp/ccomcurrency-class_12.cpp)]  
  
##  <a name="operator_eq"></a>CComCurrency::operator =  
 Questo operatore assegna l'oggetto `CComCurrency` a un nuovo valore.  
  
```
const CComCurrency& operator= (const CComCurrency& curSrc) throw();
const CComCurrency& operator= (CURRENCY cySrc) throw();
const CComCurrency& operator= (FLOAT fSrc);
const CComCurrency& operator= (SHORT sSrc);
const CComCurrency& operator= (LONG lSrc);
const CComCurrency& operator= (BYTE bSrc);
const CComCurrency& operator= (USHORT usSrc);
const CComCurrency& operator= (DOUBLE dSrc);
const CComCurrency& operator= (CHAR cSrc);
const CComCurrency& operator= (ULONG ulSrc);
const CComCurrency& operator= (DECIMAL dSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `curSrc`  
 Oggetto **CComCurrency** oggetto.  
  
 `cySrc`  
 Una variabile di tipo **valuta**.  
  
 *sSrc*, `fSrc`, `lSrc`, *bSrc*, *usSrc*, `dSrc`, *cSrc*, *ulSrc*,`dSrc`  
 Il valore numerico di assegnare il `CComCurrency` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CComCurrency` oggetto. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#65;](../../atl/codesnippet/cpp/ccomcurrency-class_13.cpp)]  
  
##  <a name="operator_-_eq"></a>CComCurrency::operator =  
 Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency` e per assegnare il risultato.  
  
```
const CComCurrency& operator-= (const CComCurrency& cur);
```  
  
### <a name="parameters"></a>Parametri  
 `cur`  
 Oggetto `CComCurrency`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CComCurrency` oggetto. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#66;](../../atl/codesnippet/cpp/ccomcurrency-class_14.cpp)]  
  
##  <a name="operator_eq_eq"></a>CComCurrency::operator = =  
 Questo operatore confronta due oggetti `CComCurrency` per stabilirne l'uguaglianza.  
  
```
bool operator== (const CComCurrency& cur) const;
```  
  
### <a name="parameters"></a>Parametri  
 `cur`  
 Il `CComCurrency` oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se gli oggetti sono uguali (vale a dire il `m_currency` membri dati, entrambi integer e frazionario, sia in oggetti hanno lo stesso valore), **false** in caso contrario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#67;](../../atl/codesnippet/cpp/ccomcurrency-class_15.cpp)]  
  
##  <a name="operator_gt"></a>CComCurrency::operator&gt;  
 Questo operatore confronta due oggetti `CComCurrency` per determinare il più grande.  
  
```
bool operator>(const CComCurrency& cur) const;
```  
  
### <a name="parameters"></a>Parametri  
 `cur`  
 Oggetto `CComCurrency`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è maggiore del secondo, **false** in caso contrario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#68;](../../atl/codesnippet/cpp/ccomcurrency-class_16.cpp)]  
  
##  <a name="operator_gt_eq"></a>CComCurrency::operator&gt;=  
 Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il più grande.  
  
```
bool operator>= (const CComCurrency& cur) const;
```  
  
### <a name="parameters"></a>Parametri  
 `cur`  
 Oggetto `CComCurrency`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è maggiore o uguale al secondo, **false** in caso contrario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#69;](../../atl/codesnippet/cpp/ccomcurrency-class_17.cpp)]  
  
##  <a name="operator_currency"></a>CComCurrency::operator valuta  
 Questi operatori vengono utilizzati per eseguire il cast un `CComCurrency` dell'oggetto a un **valuta** tipo di dati.  
  
```  
operator CURRENCY&() throw();
operator const CURRENCY&() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento a un **valuta** oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#70;](../../atl/codesnippet/cpp/ccomcurrency-class_18.cpp)]  
  
##  <a name="round"></a>CComCurrency::Round  
 Chiamare questo metodo per completare la valuta da un numero specificato di posizioni decimali.  
  
```
HRESULT Roundint nDecimals);
```  
  
### <a name="parameters"></a>Parametri  
 *nDecimals*  
 Il numero di cifre a cui `m_currency` verrà arrotondato, nell'intervallo da 0 a 4.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#52;](../../atl/codesnippet/cpp/ccomcurrency-class_19.cpp)]  
  
##  <a name="setfraction"></a>CComCurrency::SetFraction  
 Chiamare questo metodo per impostare il componente frazionario di un oggetto `CComCurrency`.  
  
```
HRESULT SetFraction(SHORT nFraction);
```  
  
### <a name="parameters"></a>Parametri  
 *nFraction*  
 Il valore da assegnare al componente frazionario del `m_currency` (membro dati). Il segno del componente frazionario deve essere identico al componente di tipo integer e il valore deve essere nell'intervallo da -9999 ( **CY_MIN_FRACTION**) a +9999 ( **CY_MAX_FRACTION**).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#53;](../../atl/codesnippet/cpp/ccomcurrency-class_20.cpp)]  
  
##  <a name="setinteger"></a>CComCurrency::SetInteger  
 Chiamare questo metodo per impostare il componente Integer di un oggetto `CComCurrency`.  
  
```
HRESULT SetInteger(LONGLONG nInteger);
```  
  
### <a name="parameters"></a>Parametri  
 `nInteger`  
 Il valore da assegnare al componente del numero intero di `m_currency` (membro dati). Il segno del componente integer deve corrispondere al segno del componente frazionario esistente.  
  
 `nInteger`deve essere compreso nell'intervallo **CY_MIN_INTEGER** a **CY_MAX_INTEGER** inclusivo. Questi valori sono definiti in atlcur.h.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#54; NVC_ATL_Utilities](../../atl/codesnippet/cpp/ccomcurrency-class_21.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleCurrency](../../mfc/reference/colecurrency-class.md)   
 [VALUTA](http://msdn.microsoft.com/en-us/5e81273c-7289-45c7-93c0-32c1553f708e)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

