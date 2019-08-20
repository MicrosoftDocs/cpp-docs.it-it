---
title: Classe COleCurrency
ms.date: 11/04/2016
f1_keywords:
- COleCurrency
- AFXDISP/COleCurrency
- AFXDISP/COleCurrency::COleCurrency
- AFXDISP/COleCurrency::Format
- AFXDISP/COleCurrency::GetStatus
- AFXDISP/COleCurrency::ParseCurrency
- AFXDISP/COleCurrency::SetCurrency
- AFXDISP/COleCurrency::SetStatus
- AFXDISP/COleCurrency::m_cur
- AFXDISP/COleCurrency::m_status
helpviewer_keywords:
- COleCurrency [MFC], COleCurrency
- COleCurrency [MFC], Format
- COleCurrency [MFC], GetStatus
- COleCurrency [MFC], ParseCurrency
- COleCurrency [MFC], SetCurrency
- COleCurrency [MFC], SetStatus
- COleCurrency [MFC], m_cur
- COleCurrency [MFC], m_status
ms.assetid: 3a36e345-303f-46fb-a57c-858274378a8d
ms.openlocfilehash: 6fac62e396791da69d8d94f6c42337c8c3afd528
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916982"
---
# <a name="colecurrency-class"></a>Classe COleCurrency

Incapsula il tipo di dati `CURRENCY` dell'automazione OLE.

## <a name="syntax"></a>Sintassi

```
class COleCurrency
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleCurrency:: COleCurrency](#colecurrency)|Costruisce un oggetto `COleCurrency`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleCurrency:: Format](#format)|Genera una rappresentazione di stringa formattata `COleCurrency` di un oggetto.|
|[COleCurrency:: GetStatus](#getstatus)|Ottiene lo stato (validità) di questo `COleCurrency` oggetto.|
|[COleCurrency::P arseCurrency](#parsecurrency)|Legge un valore di valuta da una stringa e imposta il valore `COleCurrency`di.|
|[COleCurrency:: securrency](#setcurrency)|Imposta il valore di questo `COleCurrency` oggetto.|
|[COleCurrency:: sestatus](#setstatus)|Imposta lo stato (validità) per questo `COleCurrency` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[operatore =](#operator_eq)|Copia un `COleCurrency` valore.|
|[operator +, -](#operator_plus_minus)|Aggiunge, sottrae e modifica il segno dei `COleCurrency` valori.|
|[operatore + =,-=](#operator_plus_minus_eq)|Aggiunge e sottrae un `COleCurrency` valore da questo `COleCurrency` oggetto.|
|[operatore */](#operator_star)|Ridimensiona un `COleCurrency` valore in base a un valore integer.|
|[operatore * =,/=](#operator_star_div_eq)|Ridimensiona questo `COleCurrency` valore in base a un valore integer.|
|[operatore < <](#operator_stream)|Restituisce un `COleCurrency` valore a `CArchive` o `CDumpContext`.|
|[operatore > >](#operator_stream)|Inserisce un `COleCurrency` oggetto da `CArchive`.|
|[VALUTA operatore](#operator_currency)|Converte un `COleCurrency` valore in una valuta.|
|[operator = =, <, < = e così via.](#colecurrency_relational_operators)|Confronta due `COleCurrency` valori.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[COleCurrency:: m_cur](#m_cur)|Contiene la valuta sottostante per questo `COleCurrency` oggetto.|
|[COleCurrency:: m_status](#m_status)|Contiene lo stato di questo `COleCurrency` oggetto.|

## <a name="remarks"></a>Note

`COleCurrency`non dispone di una classe base.

La valuta viene implementata come valore integer a 8 byte e a complemento doppio ridimensionato di 10.000. In questo modo si ottiene un numero a virgola fissa con 15 cifre a sinistra del separatore decimale e 4 cifre a destra. Il tipo di dati CURRENCY è estremamente utile per i calcoli che comportano denaro o per qualsiasi calcolo a virgola fissa in cui l'accuratezza è importante. È uno dei tipi possibili per il `VARIANT` tipo di dati di automazione OLE.

`COleCurrency`implementa anche alcune operazioni aritmetiche di base per questo tipo a virgola fissa. Sono state selezionate le operazioni supportate per controllare gli errori di arrotondamento che si verificano durante i calcoli a virgola fissa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`COleCurrency`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="colecurrency"></a>COleCurrency:: COleCurrency

Costruisce un oggetto `COleCurrency`.

```
COleCurrency();
COleCurrency(CURRENCY cySrc);
  COleCurrency(const COleCurrency& curSrc);
COleCurrency(const VARIANT& varSrc);

COleCurrency(
    long nUnits,
    long nFractionalUnits);
```

### <a name="parameters"></a>Parametri

*cySrc*<br/>
Valore di valuta da copiare nel nuovo `COleCurrency` oggetto.

*curSrc*<br/>
Oggetto esistente `COleCurrency` da copiare nel nuovo `COleCurrency` oggetto.

*varSrc*<br/>
Una struttura `VARIANT` di dati esistente (possibilmente un `COleVariant` oggetto) da convertire in un valore di valuta (VT_CY) e copiata `COleCurrency` nel nuovo oggetto.

*nUnits*, *nFractionalUnits* indicano le unità e la parte frazionaria (in 1/10000) del valore da copiare nel nuovo `COleCurrency` oggetto.

### <a name="remarks"></a>Note

Tutti questi costruttori creano nuovi `COleCurrency` oggetti inizializzati sul valore specificato. Di seguito viene riportata una breve descrizione di ognuno di questi costruttori. Se non specificato diversamente, lo stato del nuovo `COleCurrency` elemento è impostato su valido.

- COleCurrency () costruisce un `COleCurrency` oggetto inizializzato su 0 (zero).

- COleCurrency (`cySrc`) costruisce un `COleCurrency` oggetto da un valore di [valuta](/windows/desktop/api/wtypes/ns-wtypes-tagcy) .

- COleCurrency (`curSrc`) costruisce un `COleCurrency` oggetto da un oggetto `COleCurrency` esistente. Il nuovo oggetto ha lo stesso stato dell'oggetto di origine.

- COleCurrency (`varSrc`) costruisce un `COleCurrency` oggetto. Tenta di convertire una struttura [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) o `COleVariant` un oggetto in un valore Currency (VT_CY). Se la conversione ha esito positivo, il valore convertito viene copiato nel `COleCurrency` nuovo oggetto. In caso contrario, il valore dell' `COleCurrency` oggetto viene impostato su zero (0) e il relativo stato su non valido.

- `COleCurrency(`nUnits`, `nFractionalUnits`) Constructs a `COleCurrency ' oggetto dai componenti numerici specificati. Se il valore assoluto della parte frazionaria è maggiore di 10.000, viene apportata la rettifica appropriata alle unità. Si noti che le unità e la parte frazionaria sono specificate dai valori Long con segno.

Per ulteriori informazioni, vedere la [valuta](/windows/desktop/api/wtypes/ns-wtypes-tagcy) e le voci [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) nella Windows SDK.

### <a name="example"></a>Esempio

Negli esempi seguenti vengono illustrati gli effetti dei costruttori di parametri zero e di due parametri:

[!code-cpp[NVC_MFCOleContainer#10](../../mfc/codesnippet/cpp/colecurrency-class_1.cpp)]

##  <a name="format"></a>COleCurrency:: Format

Chiamare questa funzione membro per creare una rappresentazione formattata del valore di valuta.

```
CString Format(DWORD  dwFlags = 0, LCID  lcid = LANG_USER_DEFAULT) const;
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Indica i flag per le impostazioni locali. Per la valuta sono rilevanti solo i flag seguenti:

- LOCALE_NOUSEROVERRIDE utilizzano le impostazioni locali predefinite del sistema anziché le impostazioni utente personalizzate.

*lcid*<br/>
Indica l'ID delle impostazioni locali da utilizzare per la conversione.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il valore di valuta formattato.

### <a name="remarks"></a>Note

Il valore viene formattato utilizzando le specifiche della lingua locale (ID impostazioni locali). Il simbolo di valuta non è incluso nel valore restituito. Se lo stato di questo `COleCurrency` oggetto è null, il valore restituito è una stringa vuota. Se lo stato non è valido, la stringa restituita viene specificata dalla risorsa di stringa IDS_INVALID_CURRENCY.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#11](../../mfc/codesnippet/cpp/colecurrency-class_2.cpp)]

##  <a name="getstatus"></a>COleCurrency:: GetStatus

Chiamare questa funzione membro per ottenere lo stato (validità) di un oggetto `COleCurrency` specificato.

```
CurrencyStatus GetStatus() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce lo stato di questo `COleCurrency` valore.

### <a name="remarks"></a>Note

Il valore restituito è definito dal `CurrencyStatus` tipo enumerato definito all'interno della `COleCurrency` classe.

```
enum CurrencyStatus {
    valid = 0,
    invalid = 1,
    null = 2
    };
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

  - `COleCurrency::valid`Indica che l' `COleCurrency` oggetto è valido.

  - `COleCurrency::invalid`Indica che l' `COleCurrency` oggetto non è valido, ovvero che il relativo valore potrebbe non essere corretto.

  - `COleCurrency::null`Indica che l' `COleCurrency` oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Si tratta di "null" nel senso del database "senza valore", in contrapposizione a C++ null).

Lo stato di un `COleCurrency` oggetto non è valido nei casi seguenti:

- Se il valore viene impostato da un valore Variant `COleVariant` o che non può essere convertito in un valore di valuta.

- Se l'oggetto ha riscontrato un overflow o un underflow durante un'operazione di assegnazione aritmetica, ad esempio `+=` o. **\* =**

- Se a questo oggetto è stato assegnato un valore non valido.

- Se lo stato di questo oggetto è stato impostato in modo esplicito su non valido utilizzando [SetStatus](#setstatus).

Per ulteriori informazioni sulle operazioni che possono impostare lo stato su non valido, vedere le funzioni membro seguenti:

- [COleCurrency](#colecurrency)

- [operatore =](#operator_eq)

- [operatore +-](#operator_plus_minus)

- [operator + = e-=](#operator_plus_minus_eq)

- [operatore */](#operator_star)

- [operator * = e/=](#operator_star_div_eq)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#12](../../mfc/codesnippet/cpp/colecurrency-class_3.cpp)]

##  <a name="m_cur"></a>COleCurrency:: m_cur

Struttura di [valuta](/windows/desktop/api/wtypes/ns-wtypes-tagcy) sottostante per questo `COleCurrency` oggetto.

### <a name="remarks"></a>Note

> [!CAUTION]
>  La modifica del valore nella `CURRENCY` struttura a cui accede il puntatore restituito da questa funzione modificherà il valore di `COleCurrency` questo oggetto. Non modifica lo stato di questo `COleCurrency` oggetto.

Per ulteriori informazioni, vedere la voce relativa alla [valuta](/windows/desktop/api/wtypes/ns-wtypes-tagcy) nella Windows SDK.

##  <a name="m_status"></a>COleCurrency:: m_status

Il tipo di questo membro dati è il tipo `CurrencyStatus`enumerato, definito all'interno della `COleCurrency` classe.

```
enum CurrencyStatus{
    valid = 0,
    invalid = 1,
    null = 2,
};
```

### <a name="remarks"></a>Note

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleCurrency::valid`Indica che l' `COleCurrency` oggetto è valido.

- `COleCurrency::invalid`Indica che l' `COleCurrency` oggetto non è valido, ovvero che il relativo valore potrebbe non essere corretto.

- `COleCurrency::null`Indica che l' `COleCurrency` oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Si tratta di "null" nel senso del database "senza valore", in contrapposizione a C++ null).

Lo stato di un `COleCurrency` oggetto non è valido nei casi seguenti:

- Se il valore viene impostato da un valore Variant `COleVariant` o che non può essere convertito in un valore di valuta.

- Se l'oggetto ha riscontrato un overflow o un underflow durante un'operazione di assegnazione aritmetica, ad esempio `+=` o. **\* =**

- Se a questo oggetto è stato assegnato un valore non valido.

- Se lo stato di questo oggetto è stato impostato in modo esplicito su non valido utilizzando [SetStatus](#setstatus).

Per ulteriori informazioni sulle operazioni che possono impostare lo stato su non valido, vedere le funzioni membro seguenti:

- [COleCurrency](#colecurrency)

- [operatore =](#operator_eq)

- [operator +, -](#operator_plus_minus)

- [operatore + =,-=](#operator_plus_minus_eq)

- [operatore */](#operator_star)

- [operatore * =,/=](#operator_star_div_eq)

> [!CAUTION]
>  Questo membro dati è per le situazioni di programmazione avanzate. È necessario utilizzare le funzioni membro inline [GetStatus](#getstatus) e [sestatus](#setstatus). Per `SetStatus` ulteriori avvertenze su come impostare in modo esplicito questo membro dati, vedere.

##  <a name="operator_eq"></a>COleCurrency:: operator =

Questi operatori di assegnazione di overload copiano il valore di valuta di `COleCurrency` origine in questo oggetto.

```
const COleCurrency& operator=(CURRENCY cySrc);
const COleCurrency& operator=(const COleCurrency& curSrc);
const COleCurrency& operator=(const VARIANT& varSrc);
```

### <a name="remarks"></a>Note

Di seguito viene riportata una breve descrizione di ogni operatore:

- **operator = (** `cySrc` **)** `CURRENCY` ilvalorevienecopiatonell'oggettoeilrelativostatoèimpostatosuvalid.`COleCurrency`

- **operator = (** `curSrc` **)** il valore e lo stato dell'operando, un `COleCurrency` oggetto esistente viene copiato in `COleCurrency` questo oggetto.

- **operatore = (** *varSrc* **)** Se `VARIANT` la conversione del valore (o dell'oggetto [COleVariant](../../mfc/reference/colevariant-class.md) ) in una valuta ( `VT_CY`) ha esito positivo, il valore convertito viene copiato in questo `COleCurrency` oggetto e il relativo stato è impostato su valid. Se la conversione ha esito negativo, il valore dell' `COleCurrency` oggetto viene impostato su 0 e il relativo stato su non è valido.

Per ulteriori informazioni, vedere la [valuta](/windows/desktop/api/wtypes/ns-wtypes-tagcy) e le voci [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) nella Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#15](../../mfc/codesnippet/cpp/colecurrency-class_4.cpp)]

##  <a name="operator_plus_minus"></a>COleCurrency:: operator +,-

Questi operatori consentono di aggiungere e sottrarre due `COleCurrency` valori tra loro e di modificare il segno di un `COleCurrency` valore.

```
COleCurrency operator+(const COleCurrency& cur) const;
COleCurrency operator-(const COleCurrency& cur) const;
COleCurrency operator-() const;
```

### <a name="remarks"></a>Note

Se uno degli operandi è null, lo stato del valore risultante `COleCurrency` è null.

Se l'operazione aritmetica causa un overflow, il `COleCurrency` valore risultante non è valido.

Se l'operando non è valido e l'altro non è null, lo stato del `COleCurrency` valore risultante non è valido.

Per ulteriori informazioni sui valori di stato validi, non validi e null, vedere la variabile membro [m_status](#m_status) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#16](../../mfc/codesnippet/cpp/colecurrency-class_5.cpp)]

##  <a name="operator_plus_minus_eq"></a>COleCurrency:: operator + =,-=

Consente di aggiungere e sottrarre un `COleCurrency` valore a e da questo `COleCurrency` oggetto.

```
const COleCurrency& operator+=(const COleCurrency& cur);
const COleCurrency& operator-=(const COleCurrency& cur);
```

### <a name="remarks"></a>Note

Se uno degli operandi è null, lo stato di questo `COleCurrency` oggetto viene impostato su null.

Se l'operazione aritmetica ha un overflow, lo stato di `COleCurrency` questo oggetto viene impostato su non valido.

Se uno degli operandi non è valido e l'altro non è null, lo stato di questo `COleCurrency` oggetto viene impostato su non valido.

Per ulteriori informazioni sui valori di stato validi, non validi e null, vedere la variabile membro [m_status](#m_status) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#17](../../mfc/codesnippet/cpp/colecurrency-class_6.cpp)]

##  <a name="operator_star"></a>COleCurrency:: operator \* e/

Consente di ridimensionare un `COleCurrency` valore in base a un valore integrale.

```
COleCurrency operator*(long nOperand) const;
COleCurrency operator/(long nOperand) const;
```

### <a name="remarks"></a>Note

Se l' `COleCurrency` operando è null, lo stato del valore `COleCurrency` risultante è null.

Se l'operazione aritmetica causa un overflow o un overflow, lo stato del valore risultante `COleCurrency` non è valido.

Se l' `COleCurrency` operando non è valido, lo stato del `COleCurrency` valore risultante non è valido.

Per ulteriori informazioni sui valori di stato validi, non validi e null, vedere la variabile membro [m_status](#m_status) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#18](../../mfc/codesnippet/cpp/colecurrency-class_7.cpp)]

##  <a name="operator_star_div_eq"></a>COleCurrency:: operator \*=,/=

Consente di ridimensionare questo `COleCurrency` valore in base a un valore integrale.

```
const COleCurrency& operator*=(long nOperand);
const COleCurrency& operator/=(long nOperand);
```

### <a name="remarks"></a>Note

Se l' `COleCurrency` operando è null, lo stato di `COleCurrency` questo oggetto viene impostato su null.

Se l'operazione aritmetica ha un overflow, lo stato di `COleCurrency` questo oggetto viene impostato su non valido.

Se l' `COleCurrency` operando non è valido, lo stato `COleCurrency` di questo oggetto è impostato su non valido.

Per ulteriori informazioni sui valori di stato validi, non validi e null, vedere la variabile membro [m_status](#m_status) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#19](../../mfc/codesnippet/cpp/colecurrency-class_8.cpp)]

##  <a name="operator_stream"></a>&lt; Operatore&lt;COleCurrency::,&gt;&gt;

Supporta il dump e l'archiviazione di diagnostica in un archivio.

```
friend CDumpContext& operator<<(
    CDumpContext& dc,
    COleCurrency curSrc);

friend CArchive& operator<<(
    CArchive& ar,
    COleCurrency curSrc);

friend CArchive& operator>>(
    CArchive& ar,
    COleCurrency& curSrc);
```

### <a name="remarks"></a>Note

L'operatore Extraction ( **>>** ) supporta il caricamento da un archivio.

##  <a name="operator_currency"></a>VALUTA COleCurrency:: operator

Restituisce una `CURRENCY` struttura il cui valore viene copiato da `COleCurrency` questo oggetto.

```
operator CURRENCY() const;
```

### <a name="remarks"></a>Note

##  <a name="parsecurrency"></a>COleCurrency::P arseCurrency

Chiamare questa funzione membro per analizzare una stringa per leggere un valore di valuta.

```
BOOL ParseCurrency(
    LPCTSTR lpszCurrency,
    DWORD dwFlags = 0,
    LCID lcid = LANG_USER_DEFAULT);

throw(CMemoryException*);
throw(COleException*);
```

### <a name="parameters"></a>Parametri

*lpszCurrency*<br/>
Puntatore alla stringa con terminazione null da analizzare.

*dwFlags*<br/>
Indica i flag per le impostazioni locali, probabilmente il flag seguente:

- LOCALE_NOUSEROVERRIDE utilizzano le impostazioni locali predefinite del sistema anziché le impostazioni utente personalizzate.

*lcid*<br/>
Indica l'ID delle impostazioni locali da utilizzare per la conversione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la stringa è stata convertita correttamente in un valore di valuta; in caso contrario, 0.

### <a name="remarks"></a>Note

USA specifiche della lingua locale (ID impostazioni locali) per il significato dei caratteri non numerici nella stringa di origine.

Per informazioni sui valori ID delle impostazioni locali, vedere [supporto di più lingue](/previous-versions/windows/desktop/automat/supporting-multiple-national-languages).

Se la stringa è stata convertita correttamente in un valore di valuta, il `COleCurrency` valore di questo oggetto viene impostato su tale valore e il relativo stato su valido.

Se la stringa non può essere convertita in un valore di valuta o se si è verificato un overflow numerico, lo stato `COleCurrency` di questo oggetto non è valido.

Se la conversione della stringa non è riuscita a causa di errori di allocazione della memoria, questa funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md). In qualsiasi altro stato di errore, questa funzione genera un'eccezione [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#13](../../mfc/codesnippet/cpp/colecurrency-class_9.cpp)]

##  <a name="colecurrency_relational_operators"></a>Operatori relazionali COleCurrency

Confrontare due valori di valuta e restituire un valore diverso da zero se la condizione è true; in caso contrario, 0.

```
BOOL operator==(const COleCurrency& cur) const;
BOOL operator!=(const COleCurrency& cur) const;
BOOL operator<(const COleCurrency& cur) const;
BOOL operator>(const COleCurrency& cur) const;
BOOL operator<=(const COleCurrency& cur) const;
BOOL operator>=(const COleCurrency& cur) const;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Il valore restituito delle operazioni di ordinamento ( **<** , **\< =** , **>** , **>=** ) non è definito se lo stato di uno degli operandi è null o non valido. Gli operatori di uguaglianza `==`( `!=`,) considerano lo stato degli operandi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#20](../../mfc/codesnippet/cpp/colecurrency-class_10.cpp)]

##  <a name="setcurrency"></a>COleCurrency:: securrency

Chiamare questa funzione membro per impostare le unità e la parte frazionaria di `COleCurrency` questo oggetto.

```
void SetCurrency(
    long nUnits,
    long nFractionalUnits);
```

### <a name="parameters"></a>Parametri

*nUnits*, *nFractionalUnits* indicano le unità e la parte frazionaria (in 1/10000) del valore da copiare in questo `COleCurrency` oggetto.

### <a name="remarks"></a>Note

Se il valore assoluto della parte frazionaria è maggiore di 10.000, viene apportata la rettifica appropriata alle unità, come illustrato nel terzo degli esempi seguenti.

Si noti che le unità e la parte frazionaria sono specificate dai valori Long con segno. Nel quarto degli esempi seguenti viene illustrato cosa accade quando i parametri hanno segni diversi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#14](../../mfc/codesnippet/cpp/colecurrency-class_11.cpp)]

##  <a name="setstatus"></a>COleCurrency:: sestatus

Chiamare questa funzione membro per impostare lo stato (validità) di questo `COleCurrency` oggetto.

```
void SetStatus(CurrencyStatus  status  );
```

### <a name="parameters"></a>Parametri

*status*<br/>
Nuovo stato per questo `COleCurrency` oggetto.

### <a name="remarks"></a>Note

Il valore del parametro *status* è definito dal `CurrencyStatus` tipo enumerato, definito all'interno della `COleCurrency` classe.

```
enum CurrencyStatus {
    valid = 0,
    invalid = 1,
    null = 2
    };
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleCurrency::valid`Indica che l' `COleCurrency` oggetto è valido.

- `COleCurrency::invalid`Indica che l' `COleCurrency` oggetto non è valido, ovvero che il relativo valore potrebbe non essere corretto.

- `COleCurrency::null`Indica che l' `COleCurrency` oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Si tratta di "null" nel senso del database "senza valore", in contrapposizione a C++ null).

> [!CAUTION]
>  Questa funzione è destinata a situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. Verrà usato più spesso per impostare lo stato su null o non valido. Si noti che l'operatore di assegnazione ( [operator =](#operator_eq)) e [SetCurrency](#setcurrency) consentono di impostare lo stato su dell'oggetto in base ai valori di origine.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleVariant](../../mfc/reference/colevariant-class.md)
