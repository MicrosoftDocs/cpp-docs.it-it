---
title: Classe CComCurrency
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
ms.openlocfilehash: d6eb67e04ebb2b9084874a586eafc744df2d3f40
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70739775"
---
# <a name="ccomcurrency-class"></a>Classe CComCurrency

`CComCurrency` dispone di metodi e operatori per creare e gestire un oggetto CURRENCY.

## <a name="syntax"></a>Sintassi

```
class CComCurrency
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComCurrency:: CComCurrency](#ccomcurrency)|Costruttore per un oggetto `CComCurrency`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComCurrency::GetCurrencyPtr](#getcurrencyptr)|Restituisce l'indirizzo di un membro dati `m_currency`.|
|[CComCurrency::GetFraction](#getfraction)|Chiamare questo metodo per restituire il componente frazionario di un oggetto `CComCurrency`.|
|[CComCurrency::GetInteger](#getinteger)|Chiamare questo metodo per restituire il componente Integer di un oggetto `CComCurrency`.|
|[CComCurrency:: Round](#round)|Chiamare questo metodo per arrotondare un oggetto `CComCurrency` al valore intero più vicino.|
|[CComCurrency:: sefrazione](#setfraction)|Chiamare questo metodo per impostare il componente frazionario di un oggetto `CComCurrency`.|
|[CComCurrency:: seinteger](#setinteger)|Chiamare questo metodo per impostare il componente Integer di un oggetto `CComCurrency`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore CComCurrency:: operator-](#operator_-)|Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency`.|
|[CComCurrency:: operator! =](#operator_neq)|Confronta due oggetti `CComCurrency` per stabilirne la disuguaglianza.|
|[CComCurrency:: operator *](#operator_star)|Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency`.|
|[CComCurrency:: operator * =](#operator_star_eq)|Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency` e per assegnare il risultato.|
|[CComCurrency:: operator/](#operator_div)|Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency`.|
|[CComCurrency:: operator/=](#operator_div_eq)|Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency` e per assegnare il risultato.|
|[CComCurrency:: operator +](#operator_add)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency`.|
|[CComCurrency:: operator + =](#operator_add_eq)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency` e per assegnare il risultato all'oggetto corrente.|
|[< CComCurrency:: operator](#operator_lt)|Questo operatore confronta due oggetti `CComCurrency` per determinare il minore.|
|[CComCurrency:: operator < =](#operator_lt_eq)|Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il minore.|
|[CComCurrency:: operator =](#operator_eq)|Questo operatore assegna l'oggetto `CComCurrency` a un nuovo valore.|
|[CComCurrency:: operator-=](#operator_-_eq)|Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency` e per assegnare il risultato.|
|[CComCurrency:: operator = =](#operator_eq_eq)|Questo operatore confronta due oggetti `CComCurrency` per stabilirne l'uguaglianza.|
|[> CComCurrency:: operator](#operator_gt)|Questo operatore confronta due oggetti `CComCurrency` per determinare il più grande.|
|[CComCurrency:: operator > =](#operator_gt_eq)|Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il più grande.|
|[VALUTA CComCurrency:: operator](#operator_currency)|Esegue il cast di un oggetto di valuta.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CComCurrency:: m_currency](#m_currency)|Variabile di valuta creata dall'istanza della classe.|

## <a name="remarks"></a>Note

`CComCurrency`è un wrapper per il tipo di dati CURRENCY. La valuta viene implementata come valore integer a 8 byte a complemento due, ridimensionato di 10.000. In questo modo si ottiene un numero a virgola fissa con 15 cifre a sinistra del separatore decimale e 4 cifre a destra. Il tipo di dati CURRENCY è estremamente utile per i calcoli che comportano denaro o per qualsiasi calcolo a virgola fissa in cui l'accuratezza è importante.

Il `CComCurrency` wrapper implementa operazioni aritmetiche, di assegnazione e di confronto per questo tipo a virgola fissa. Le applicazioni supportate sono state selezionate per controllare gli errori di arrotondamento che possono verificarsi durante i calcoli a virgola fissa.

L'oggetto `CComCurrency` fornisce accesso ai numeri su entrambi i lati del separatore decimale sotto forma di due componenti: un componente Integer che archivia il valore a sinistra del separatore decimale e un componente frazionario che archivia il valore a destra del separatore decimale. Il componente frazionario viene archiviato internamente come valore intero compreso tra-9999 (CY_MIN_FRACTION) e + 9999 (CY_MAX_FRACTION). Il metodo [CComCurrency:: GetFraction](#getfraction) restituisce un valore ridimensionato in base a un fattore di 10000 (CY_SCALE).

Quando si specificano i componenti Integer e frazionari di `CComCurrency` un oggetto, tenere presente che il componente frazionario è un numero compreso tra 0 e 9999. Questo è importante quando si opera con valute come il dollaro americano, che indica gli importi usando solo due cifre significative dopo il separatore decimale. Anche se le ultime due cifre non vengono visualizzate, devono essere tenute in considerazione.

|Value|Valori possibili di CComCurrency|
|-----------|---------------------------------------|
|$10.50|CComCurrency (10, 5000) *o* CComCurrency (10.50)|
|$10.05|CComCurrency (10500) *o* CComCurrency (10.05)|

I valori CY_MIN_FRACTION, CY_MAX_FRACTION e CY_SCALE sono definiti in atlcur. h.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcur. h

##  <a name="ccomcurrency"></a>CComCurrency:: CComCurrency

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

*cySrc*<br/>
Variabile di tipo CURRENCY.

*bSrc*, *dSrc*, *fSrc*, *lSrc*, *sSrc*, *ulSrc, usSrc*<br/>
Valore iniziale assegnato alla variabile `m_currency`membro.

*cSrc*<br/>
Carattere che contiene il valore iniziale assegnato alla variabile `m_currency`membro.

*nInteger*, *nFraction*<br/>
I componenti Integer e frazionari del valore monetario iniziale. Per ulteriori informazioni, vedere la Panoramica di [CComCurrency](../../atl/reference/ccomcurrency-class.md) .

*pDispSrc*<br/>
`IDispatch` Puntatore.

*varSrc*<br/>
Variabile di tipo VARIANT. Le impostazioni locali del thread corrente vengono utilizzate per eseguire la conversione.

*szSrc*<br/>
Stringa Unicode o ANSI che contiene il valore iniziale. Le impostazioni locali del thread corrente vengono utilizzate per eseguire la conversione.

### <a name="remarks"></a>Note

Il costruttore imposta il valore iniziale di [CComCurrency:: m_currency](#m_currency)e accetta un'ampia gamma di tipi di dati, inclusi Integer, stringhe, numeri a virgola mobile, variabili di valuta e altri `CComCurrency` oggetti. Se non viene specificato alcun valore `m_currency` , viene impostato su 0.

In caso di errore, ad esempio un overflow, i costruttori privi di una chiamata `AtlThrow` specifica di eccezione vuota (**throw ()** ) con HRESULT che descrive l'errore.

Quando si usano valori a virgola mobile o Double per assegnare un valore, `CComCurrency(10.50)` si noti che `CComCurrency(10,5000)` equivale a `CComCurrency(10,50)`e not.

##  <a name="getcurrencyptr"></a>CComCurrency:: GetCurrencyPtr

Restituisce l'indirizzo di un membro dati `m_currency`.

```
CURRENCY* GetCurrencyPtr() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo di un `m_currency` membro dati.

##  <a name="getfraction"></a>CComCurrency:: getfrazioni

Chiamare questo metodo per restituire il componente frazionario dell' `CComCurrency` oggetto.

```
SHORT GetFraction() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il componente frazionario del `m_currency` membro dati.

### <a name="remarks"></a>Note

Il componente frazionario è un valore intero a 4 cifre compreso tra-9999 (CY_MIN_FRACTION) e + 9999 (CY_MAX_FRACTION). `GetFraction`restituisce questo valore ridimensionato di 10000 (CY_SCALE). I valori di CY_MIN_FRACTION, CY_MAX_FRACTION e CY_SCALE sono definiti in atlcur. h.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#50](../../atl/codesnippet/cpp/ccomcurrency-class_1.cpp)]

##  <a name="getinteger"></a>CComCurrency:: GetInteger

Chiamare questo metodo per ottenere il componente Integer di un `CComCurrency` oggetto.

```
LONGLONG GetInteger() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il componente Integer del `m_currency` membro dati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#51](../../atl/codesnippet/cpp/ccomcurrency-class_2.cpp)]

##  <a name="m_currency"></a>CComCurrency:: m_currency

Membro dati di valuta.

```
CURRENCY m_currency;
```

### <a name="remarks"></a>Note

Questo membro include la valuta a cui è stato eseguito l'accesso e manipolata dai metodi di questa classe.

##  <a name="operator_-"></a>Operatore CComCurrency:: operator-

Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency`.

```
CComCurrency operator-() const;
CComCurrency operator-(const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*cur*<br/>
Oggetto `CComCurrency`.

### <a name="return-value"></a>Valore restituito

Restituisce un `CComCurrency` oggetto che rappresenta il risultato della sottrazione. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#55](../../atl/codesnippet/cpp/ccomcurrency-class_3.cpp)]

##  <a name="operator_neq"></a>CComCurrency:: operator! =

Questo operatore confronta due oggetti per verificarne la disuguaglianza.

```
bool operator!= (const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*cur*<br/>
L'oggetto `CComCurrency` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'elemento da confrontare non è uguale all' `CComCurrency` oggetto; in caso contrario, false.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#56](../../atl/codesnippet/cpp/ccomcurrency-class_4.cpp)]

##  <a name="operator_star"></a>CComCurrency:: operator *

Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency`.

```
CComCurrency operator*(long nOperand) const;
CComCurrency operator*(const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*nOperand*<br/>
Moltiplicatore.

*cur*<br/>
`CComCurrency` Oggetto utilizzato come moltiplicatore.

### <a name="return-value"></a>Valore restituito

Restituisce un `CComCurrency` oggetto che rappresenta il risultato della moltiplicazione. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#57](../../atl/codesnippet/cpp/ccomcurrency-class_5.cpp)]

##  <a name="operator_star_eq"></a>Operatore CComCurrency::\*=

Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency` e per assegnare il risultato.

```
const CComCurrency& operator*= (long nOperand);
const CComCurrency& operator*= (const CComCurrency& cur);
```

### <a name="parameters"></a>Parametri

*nOperand*<br/>
Moltiplicatore.

*cur*<br/>
`CComCurrency` Oggetto utilizzato come moltiplicatore.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CComCurrency` aggiornato. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#58](../../atl/codesnippet/cpp/ccomcurrency-class_6.cpp)]

##  <a name="operator_div"></a>CComCurrency:: operator/

Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency`.

```
CComCurrency operator/(long nOperand) const;
```

### <a name="parameters"></a>Parametri

*nOperand*<br/>
Divisore.

### <a name="return-value"></a>Valore restituito

Restituisce un `CComCurrency` oggetto che rappresenta il risultato della divisione. Se il divisore è 0, si verificherà un errore di asserzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#59](../../atl/codesnippet/cpp/ccomcurrency-class_7.cpp)]

##  <a name="operator_div_eq"></a>CComCurrency:: operator/=

Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency` e per assegnare il risultato.

```
const CComCurrency& operator/= (long nOperand);
```

### <a name="parameters"></a>Parametri

*nOperand*<br/>
Divisore.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CComCurrency` aggiornato. Se il divisore è 0, si verificherà un errore di asserzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#60](../../atl/codesnippet/cpp/ccomcurrency-class_8.cpp)]

##  <a name="operator_add"></a>CComCurrency:: operator +

Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency`.

```
CComCurrency operator+(const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*cur*<br/>
`CComCurrency` Oggetto da aggiungere all'oggetto originale.

### <a name="return-value"></a>Valore restituito

Restituisce un `CComCurrency` oggetto che rappresenta il risultato dell'addizione. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#61](../../atl/codesnippet/cpp/ccomcurrency-class_9.cpp)]

##  <a name="operator_add_eq"></a>CComCurrency:: operator + =

Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency` e per assegnare il risultato all'oggetto corrente.

```
const CComCurrency& operator+= (const CComCurrency& cur);
```

### <a name="parameters"></a>Parametri

*cur*<br/>
Oggetto `CComCurrency`.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CComCurrency` aggiornato. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#62](../../atl/codesnippet/cpp/ccomcurrency-class_10.cpp)]

##  <a name="operator_lt"></a>Operatore CComCurrency::&lt;

Questo operatore confronta due oggetti `CComCurrency` per determinare il minore.

```
bool operator<(const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*cur*<br/>
Oggetto `CComCurrency`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore del secondo; in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#63](../../atl/codesnippet/cpp/ccomcurrency-class_11.cpp)]

##  <a name="operator_lt_eq"></a>Operatore CComCurrency::&lt;=

Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il minore.

```
bool operator<= (const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*cur*<br/>
Oggetto `CComCurrency`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore o uguale al secondo; in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#64](../../atl/codesnippet/cpp/ccomcurrency-class_12.cpp)]

##  <a name="operator_eq"></a>CComCurrency:: operator =

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
Oggetto `CComCurrency`.

*cySrc*<br/>
Variabile di tipo CURRENCY.

*sSrc*, *fSrc*, *lSrc*, *bSrc*, *usSrc*, *dSrc*, *cSrc*, *ulSrc*, *dSrc*<br/>
Valore numerico da assegnare all' `CComCurrency` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CComCurrency` aggiornato. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#65](../../atl/codesnippet/cpp/ccomcurrency-class_13.cpp)]

##  <a name="operator_-_eq"></a>CComCurrency:: operator-=

Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency` e per assegnare il risultato.

```
const CComCurrency& operator-= (const CComCurrency& cur);
```

### <a name="parameters"></a>Parametri

*cur*<br/>
Oggetto `CComCurrency`.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CComCurrency` aggiornato. In caso di errore, ad esempio un overflow, questo operatore chiama `AtlThrow` con un HRESULT che descrive l'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#66](../../atl/codesnippet/cpp/ccomcurrency-class_14.cpp)]

##  <a name="operator_eq_eq"></a>CComCurrency:: operator = =

Questo operatore confronta due oggetti `CComCurrency` per stabilirne l'uguaglianza.

```
bool operator== (const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*cur*<br/>
`CComCurrency` Oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli oggetti sono uguali, ovvero i `m_currency` membri dati, sia integer che frazionari, in entrambi gli oggetti hanno lo stesso valore; in caso contrario, false.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#67](../../atl/codesnippet/cpp/ccomcurrency-class_15.cpp)]

##  <a name="operator_gt"></a>Operatore CComCurrency::&gt;

Questo operatore confronta due oggetti `CComCurrency` per determinare il più grande.

```
bool operator>(const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*cur*<br/>
Oggetto `CComCurrency`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore del secondo; in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#68](../../atl/codesnippet/cpp/ccomcurrency-class_16.cpp)]

##  <a name="operator_gt_eq"></a>Operatore CComCurrency::&gt;=

Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il più grande.

```
bool operator>= (const CComCurrency& cur) const;
```

### <a name="parameters"></a>Parametri

*cur*<br/>
Oggetto `CComCurrency`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore o uguale al secondo; in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#69](../../atl/codesnippet/cpp/ccomcurrency-class_17.cpp)]

##  <a name="operator_currency"></a>VALUTA CComCurrency:: operator

Questi operatori vengono utilizzati per eseguire il `CComCurrency` cast di un oggetto a un tipo di dati Currency.

```
operator CURRENCY&() throw();
operator const CURRENCY&() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento a un oggetto di valuta.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#70](../../atl/codesnippet/cpp/ccomcurrency-class_18.cpp)]

##  <a name="round"></a>CComCurrency:: Round

Chiamare questo metodo per arrotondare la valuta a un numero specificato di posizioni decimali.

```
HRESULT Roundint nDecimals);
```

### <a name="parameters"></a>Parametri

*nDecimals*<br/>
Numero di cifre a cui `m_currency` verrà arrotondato l'intervallo compreso tra 0 e 4.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#52](../../atl/codesnippet/cpp/ccomcurrency-class_19.cpp)]

##  <a name="setfraction"></a>CComCurrency:: sefrazione

Chiamare questo metodo per impostare il componente frazionario di un oggetto `CComCurrency`.

```
HRESULT SetFraction(SHORT nFraction);
```

### <a name="parameters"></a>Parametri

*nFraction*<br/>
Valore da assegnare al componente frazionario del `m_currency` membro dati. Il segno del componente frazionario deve corrispondere al componente Integer e il valore deve essere compreso tra-9999 (CY_MIN_FRACTION) e + 9999 (CY_MAX_FRACTION).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#53](../../atl/codesnippet/cpp/ccomcurrency-class_20.cpp)]

##  <a name="setinteger"></a>CComCurrency:: seinteger

Chiamare questo metodo per impostare il componente Integer di un oggetto `CComCurrency`.

```
HRESULT SetInteger(LONGLONG nInteger);
```

### <a name="parameters"></a>Parametri

*nInteger*<br/>
Valore da assegnare al componente Integer del `m_currency` membro dati. Il segno del componente Integer deve corrispondere a quello del componente frazionario esistente.

*nInteger* deve essere compreso nell'intervallo compreso tra CY_MIN_INTEGER e CY_MAX_INTEGER. Questi valori sono definiti in atlcur. h.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#54](../../atl/codesnippet/cpp/ccomcurrency-class_21.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe COleCurrency](../../mfc/reference/colecurrency-class.md)<br/>
[VALUTA](/windows/win32/api/wtypes/ns-wtypes-cy~r1)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
