---
title: CComCurrency (classe)
ms.date: 11/04/2016
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
helpviewer_keywords:
- CComCurrency class
ms.assetid: a1c3d10a-bba6-40cc-8bcf-aed9023c8a9e
ms.openlocfilehash: 541944e03e9caf6cba15612cf9e7cbbd239555ca
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327935"
---
# <a name="ccomcurrency-class"></a>CComCurrency (classe)

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
|[CComCurrency::operatore -](#operator_-)|Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency`.|
|[CComCurrency::operator !](#operator_neq)|Confronta due oggetti `CComCurrency` per stabilirne la disuguaglianza.|
|[Valuta CComCurrency::operatore](#operator_star)|Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency`.|
|[Valuta CCom: : operatore](#operator_star_eq)|Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency` e per assegnare il risultato.|
|[CComCurrency::operator /](#operator_div)|Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency`.|
|[CComCurrency::operatore /](#operator_div_eq)|Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency` e per assegnare il risultato.|
|[CComCurrency::operatore](#operator_add)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency`.|
|[CComCurrency::operatore](#operator_add_eq)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency` e per assegnare il risultato all'oggetto corrente.|
|[CComCurrency::operator e <](#operator_lt)|Questo operatore confronta due oggetti `CComCurrency` per determinare il minore.|
|[CComCurrency::operator <](#operator_lt_eq)|Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il minore.|
|[CComCurrency::operatore](#operator_eq)|Questo operatore assegna l'oggetto `CComCurrency` a un nuovo valore.|
|[CComCurrency::operatore](#operator_-_eq)|Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency` e per assegnare il risultato.|
|[CComCurrency::operatore](#operator_eq_eq)|Questo operatore confronta due oggetti `CComCurrency` per stabilirne l'uguaglianza.|
|[CComCurrency::operator e >](#operator_gt)|Questo operatore confronta due oggetti `CComCurrency` per determinare il più grande.|
|[CComCurrency::operator >](#operator_gt_eq)|Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il più grande.|
|[CComCurrency::operatore VALUTA](#operator_currency)|Esegue il cast di un oggetto CURRENCY.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCurrency::m_currency](#m_currency)|La variabile CURRENCY creata dall'istanza della classe.|

## <a name="remarks"></a>Osservazioni

`CComCurrency` è un wrapper per il tipo di dati CURRENCY. CURRENCY viene implementato come valore Integer a 8 byte in complemento a due ridotto di 10.000. In questo modo si ottiene un numero a virgola fissa con 15 cifre a sinistra del separatore decimale e 4 cifre a destra. Il tipo di dati CURRENCY è estremamente utile per i calcoli che includono denaro o per i calcoli a virgola fissa in cui la precisione è importante.

Il `CComCurrency` wrapper implementa operazioni aritmetiche, di assegnazione e di confronto per questo tipo a virgola fissa. Le applicazioni supportate sono state selezionate per controllare gli errori di arrotondamento che possono verificarsi durante i calcoli a virgola fissa.

L'oggetto `CComCurrency` fornisce accesso ai numeri su entrambi i lati del separatore decimale sotto forma di due componenti: un componente Integer che archivia il valore a sinistra del separatore decimale e un componente frazionario che archivia il valore a destra del separatore decimale. Il componente frazionario viene archiviato internamente come valore Integer compreso tra -9999 (CY_MIN_FRACTION) e +9999 (CY_MAX_FRACTION). Il metodo [CComCurrency::GetFraction](#getfraction) restituisce un valore scalato di un fattore 10000 (CY_SCALE).

Quando si specificano i componenti `CComCurrency` interi e frazionari di un oggetto, tenere presente che il componente frazionario è un numero compreso tra 0 e 9999. Questo è importante quando si opera con valute come il dollaro americano, che indica gli importi usando solo due cifre significative dopo il separatore decimale.  Anche se le ultime due cifre non vengono visualizzate, devono essere tenute in considerazione.

|Valore|Valori possibili di CComCurrency|
|-----------|---------------------------------------|
|$10.50|CComCurrency(10,5000) *o* CComCurrency(10.50)|
|$10.05|CComCurrency(10.500) *o* CComCurrency(10.05)|

I valori  CY_MIN_FRACTION, CY_MAX_FRACTION e  CY_SCALE sono definiti in atlcur.h.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcur.h

## <a name="ccomcurrencyccomcurrency"></a><a name="ccomcurrency"></a>CComCurrency::CComCurrency

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

*curSrc*<br/>
Oggetto `CComCurrency` esistente.

*CySrc*<br/>
Variabile di tipo CURRENCY.

*bSrc*, *dSrc*, *fSrc*, *lSrc*, *sSrc*, *ulSrc, usSrc*<br/>
Valore iniziale assegnato alla `m_currency`variabile membro .

*cSrc*<br/>
Carattere contenente il valore iniziale `m_currency`assegnato alla variabile membro .

*nInteger*, *nFrazione*<br/>
Componenti interi e frazionari del valore monetario iniziale. Per ulteriori informazioni, vedere [CComCurrency](../../atl/reference/ccomcurrency-class.md) overview.

*pDispSrc*<br/>
Puntatore. `IDispatch`

*varSrc*<br/>
Variabile di tipo VARIANT. Le impostazioni locali del thread corrente vengono utilizzate per eseguire la conversione.

*szSrc*<br/>
Stringa Unicode o ANSI contenente il valore iniziale. Le impostazioni locali del thread corrente vengono utilizzate per eseguire la conversione.

### <a name="remarks"></a>Osservazioni

Il costruttore imposta il valore iniziale di [CComCurrency::m_currency](#m_currency)e accetta un'ampia gamma di tipi di dati, inclusi numeri interi, stringhe, numeri a virgola mobile, variabili CURRENCY e altri `CComCurrency` oggetti. Se non viene `m_currency` fornito alcun valore, viene impostato su 0.

In caso di errore, ad esempio un overflow, i costruttori privi `AtlThrow` di una specifica di eccezione vuota (**throw()**) chiamano con un HRESULT che descrive l'errore.

Quando si utilizzano valori a virgola mobile `CComCurrency(10.50)` o double `CComCurrency(10,5000)` per `CComCurrency(10,50)`assegnare un valore, tenere presente che è equivalente e non .

## <a name="ccomcurrencygetcurrencyptr"></a><a name="getcurrencyptr"></a>CComCurrency::GetCurrencyPtr

Restituisce l'indirizzo di un membro dati `m_currency`.

```
CURRENCY* GetCurrencyPtr() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo di un `m_currency` membro dati

## <a name="ccomcurrencygetfraction"></a><a name="getfraction"></a>CComCurrency::GetFraction

Chiamare questo metodo per restituire il `CComCurrency` componente frazionario dell'oggetto.

```
SHORT GetFraction() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il componente `m_currency` frazionario del membro dati.

### <a name="remarks"></a>Osservazioni

Il componente frazionario è un valore intero a 4 cifre compreso tra -9999 (CY_MIN_FRACTION) e 9999 USD (CY_MAX_FRACTION). `GetFraction`restituisce questo valore scalato di 10000 (CY_SCALE). I valori di CY_MIN_FRACTION, CY_MAX_FRACTION e CY_SCALE sono definiti in atlcur.h.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#50](../../atl/codesnippet/cpp/ccomcurrency-class_1.cpp)]

## <a name="ccomcurrencygetinteger"></a><a name="getinteger"></a>CComCurrency::GetInteger

Chiamare questo metodo per ottenere `CComCurrency` il componente intero di un oggetto.

```
LONGLONG GetInteger() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il componente `m_currency` integer del membro dati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#51](../../atl/codesnippet/cpp/ccomcurrency-class_2.cpp)]

## <a name="ccomcurrencym_currency"></a><a name="m_currency"></a>CComCurrency::m_currency

Membro dati CURRENCY.

```
CURRENCY m_currency;
```

### <a name="remarks"></a>Osservazioni

Questo membro contiene la valuta accessibile e modificata dai metodi di questa classe.

## <a name="ccomcurrencyoperator--"></a><a name="operator_-"></a>CComCurrency::operatore -

Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency`.

```
CComCurrency operator-() const;
CComCurrency operator-(const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*Cur*<br/>
Oggetto `CComCurrency` .

### <a name="return-value"></a>Valore restituito

Restituisce `CComCurrency` un oggetto che rappresenta il risultato della sottrazione. In caso di errore, ad esempio un `AtlThrow` overflow, questo operatore chiama con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#55](../../atl/codesnippet/cpp/ccomcurrency-class_3.cpp)]

## <a name="ccomcurrencyoperator-"></a><a name="operator_neq"></a>CComCurrency::operator !

Questo operatore confronta due oggetti per la disuguaglianza.

```
bool operator!= (const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*Cur*<br/>
L'oggetto `CComCurrency` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento confrontato non è uguale all'oggetto; `CComCurrency` in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#56](../../atl/codesnippet/cpp/ccomcurrency-class_4.cpp)]

## <a name="ccomcurrencyoperator-"></a><a name="operator_star"></a>Valuta CComCurrency::operatore

Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency`.

```
CComCurrency operator*(long nOperand) const;
CComCurrency operator*(const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*nOperand*<br/>
Moltiplicatore.

*Cur*<br/>
Oggetto `CComCurrency` utilizzato come moltiplicatore.

### <a name="return-value"></a>Valore restituito

Restituisce `CComCurrency` un oggetto che rappresenta il risultato della moltiplicazione. In caso di errore, ad esempio un `AtlThrow` overflow, questo operatore chiama con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#57](../../atl/codesnippet/cpp/ccomcurrency-class_5.cpp)]

## <a name="ccomcurrencyoperator-"></a><a name="operator_star_eq"></a>CComCurrency::operatore\*=

Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency` e per assegnare il risultato.

```
const CComCurrency& operator*= (long nOperand);
const CComCurrency& operator*= (const CComCurrency& cur);
```

### <a name="parameters"></a>Parametri

*nOperand*<br/>
Moltiplicatore.

*Cur*<br/>
Oggetto `CComCurrency` utilizzato come moltiplicatore.

### <a name="return-value"></a>Valore restituito

Restituisce `CComCurrency` l'oggetto aggiornato. In caso di errore, ad esempio un `AtlThrow` overflow, questo operatore chiama con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#58](../../atl/codesnippet/cpp/ccomcurrency-class_6.cpp)]

## <a name="ccomcurrencyoperator-"></a><a name="operator_div"></a>CComCurrency::operator /

Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency`.

```
CComCurrency operator/(long nOperand) const;
```

### <a name="parameters"></a>Parametri

*nOperand*<br/>
Divisore.

### <a name="return-value"></a>Valore restituito

Restituisce `CComCurrency` un oggetto che rappresenta il risultato della divisione. Se il divisore è 0, si verificherà un errore di asserzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#59](../../atl/codesnippet/cpp/ccomcurrency-class_7.cpp)]

## <a name="ccomcurrencyoperator-"></a><a name="operator_div_eq"></a>CComCurrency::operatore /

Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency` e per assegnare il risultato.

```
const CComCurrency& operator/= (long nOperand);
```

### <a name="parameters"></a>Parametri

*nOperand*<br/>
Divisore.

### <a name="return-value"></a>Valore restituito

Restituisce `CComCurrency` l'oggetto aggiornato. Se il divisore è 0, si verificherà un errore di asserzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#60](../../atl/codesnippet/cpp/ccomcurrency-class_8.cpp)]

## <a name="ccomcurrencyoperator-"></a><a name="operator_add"></a>CComCurrency::operatore

Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency`.

```
CComCurrency operator+(const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*Cur*<br/>
Oggetto `CComCurrency` da aggiungere all'oggetto originale.

### <a name="return-value"></a>Valore restituito

Restituisce `CComCurrency` un oggetto che rappresenta il risultato dell'addizione. In caso di errore, ad esempio un `AtlThrow` overflow, questo operatore chiama con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#61](../../atl/codesnippet/cpp/ccomcurrency-class_9.cpp)]

## <a name="ccomcurrencyoperator-"></a><a name="operator_add_eq"></a>CComCurrency::operatore

Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency` e per assegnare il risultato all'oggetto corrente.

```
const CComCurrency& operator+= (const CComCurrency& cur);
```

### <a name="parameters"></a>Parametri

*Cur*<br/>
Oggetto `CComCurrency`.

### <a name="return-value"></a>Valore restituito

Restituisce `CComCurrency` l'oggetto aggiornato. In caso di errore, ad esempio un `AtlThrow` overflow, questo operatore chiama con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#62](../../atl/codesnippet/cpp/ccomcurrency-class_10.cpp)]

## <a name="ccomcurrencyoperator-lt"></a><a name="operator_lt"></a>CComCurrency::operatore&lt;

Questo operatore confronta due oggetti `CComCurrency` per determinare il minore.

```
bool operator<(const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*Cur*<br/>
Oggetto `CComCurrency` .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore del secondo, FALSE in caso contrario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#63](../../atl/codesnippet/cpp/ccomcurrency-class_11.cpp)]

## <a name="ccomcurrencyoperator-lt"></a><a name="operator_lt_eq"></a>CComCurrency::operatore&lt;=

Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il minore.

```
bool operator<= (const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*Cur*<br/>
Oggetto `CComCurrency` .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore o uguale al secondo, FALSE in caso contrario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#64](../../atl/codesnippet/cpp/ccomcurrency-class_12.cpp)]

## <a name="ccomcurrencyoperator-"></a><a name="operator_eq"></a>CComCurrency::operatore

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

*curSrc*<br/>
Oggetto `CComCurrency` .

*CySrc*<br/>
Variabile di tipo CURRENCY.

*sSrc*, *fSrc*, *lSrc*, *bSrc*, *usSrc*, *dSrc*, *cSrc*, *ulSrc*, *dSrc*<br/>
Valore numerico da `CComCurrency` assegnare all'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce `CComCurrency` l'oggetto aggiornato. In caso di errore, ad esempio un `AtlThrow` overflow, questo operatore chiama con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#65](../../atl/codesnippet/cpp/ccomcurrency-class_13.cpp)]

## <a name="ccomcurrencyoperator--"></a><a name="operator_-_eq"></a>CComCurrency::operatore

Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency` e per assegnare il risultato.

```
const CComCurrency& operator-= (const CComCurrency& cur);
```

### <a name="parameters"></a>Parametri

*Cur*<br/>
Oggetto `CComCurrency` .

### <a name="return-value"></a>Valore restituito

Restituisce `CComCurrency` l'oggetto aggiornato. In caso di errore, ad esempio un `AtlThrow` overflow, questo operatore chiama con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#66](../../atl/codesnippet/cpp/ccomcurrency-class_14.cpp)]

## <a name="ccomcurrencyoperator-"></a><a name="operator_eq_eq"></a>CComCurrency::operatore

Questo operatore confronta due oggetti `CComCurrency` per stabilirne l'uguaglianza.

```
bool operator== (const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*Cur*<br/>
Oggetto `CComCurrency` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti sono `m_currency` uguali, ovvero i membri dati, sia interi che frazionari, in entrambi gli oggetti hanno lo stesso valore, FALSE in caso contrario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#67](../../atl/codesnippet/cpp/ccomcurrency-class_15.cpp)]

## <a name="ccomcurrencyoperator-gt"></a><a name="operator_gt"></a>CComCurrency::operatore&gt;

Questo operatore confronta due oggetti `CComCurrency` per determinare il più grande.

```
bool operator>(const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*Cur*<br/>
Oggetto `CComCurrency` .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore del secondo, FALSE in caso contrario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#68](../../atl/codesnippet/cpp/ccomcurrency-class_16.cpp)]

## <a name="ccomcurrencyoperator-gt"></a><a name="operator_gt_eq"></a>CComCurrency::operatore&gt;=

Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il più grande.

```
bool operator>= (const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*Cur*<br/>
Oggetto `CComCurrency` .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore o uguale al secondo, FALSE in caso contrario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#69](../../atl/codesnippet/cpp/ccomcurrency-class_17.cpp)]

## <a name="ccomcurrencyoperator-currency"></a><a name="operator_currency"></a>CComCurrency::operatore VALUTA

Questi operatori vengono utilizzati per eseguire il cast di un `CComCurrency` oggetto a un tipo di dati CURRENCY.

```
operator CURRENCY&() throw();
operator const CURRENCY&() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento a un oggetto CURRENCY.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#70](../../atl/codesnippet/cpp/ccomcurrency-class_18.cpp)]

## <a name="ccomcurrencyround"></a><a name="round"></a>CComCurrency::Round

Chiamare questo metodo per arrotondare la valuta a un numero specificato di posizioni decimali.

```
HRESULT Roundint nDecimals);
```

### <a name="parameters"></a>Parametri

*nDecimals (Valori decimali)*<br/>
Il numero di `m_currency` cifre a cui verrà arrotondato, compreso tra 0 e 4.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#52](../../atl/codesnippet/cpp/ccomcurrency-class_19.cpp)]

## <a name="ccomcurrencysetfraction"></a><a name="setfraction"></a>Valuta CCom::SetFraction

Chiamare questo metodo per impostare il componente frazionario di un oggetto `CComCurrency`.

```
HRESULT SetFraction(SHORT nFraction);
```

### <a name="parameters"></a>Parametri

*nFrazione*<br/>
Valore da assegnare al componente frazionario del `m_currency` membro dati. Il segno del componente frazionario deve essere uguale al componente integer e il valore deve essere compreso tra -9999 (CY_MIN_FRACTION) e 9999 (CY_MAX_FRACTION).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#53](../../atl/codesnippet/cpp/ccomcurrency-class_20.cpp)]

## <a name="ccomcurrencysetinteger"></a><a name="setinteger"></a>CComCurrency::SetInteger

Chiamare questo metodo per impostare il componente Integer di un oggetto `CComCurrency`.

```
HRESULT SetInteger(LONGLONG nInteger);
```

### <a name="parameters"></a>Parametri

*nIntero*<br/>
Valore da assegnare al componente `m_currency` integer del membro dati. Il segno del componente intero deve corrispondere al segno del componente frazionario esistente.

*nInteger* deve essere compreso nell'intervallo CY_MIN_INTEGER CY_MAX_INTEGER inclusi. Questi valori sono definiti in atlcur.h.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#54](../../atl/codesnippet/cpp/ccomcurrency-class_21.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe COleCurrency](../../mfc/reference/colecurrency-class.md)<br/>
[Valuta](/windows/win32/api/wtypes/ns-wtypes-cy~r1)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
