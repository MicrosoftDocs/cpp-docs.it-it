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
ms.openlocfilehash: e3b0a369071571fb343d1b5030eebbf7c471bc81
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51519191"
---
# <a name="colecurrency-class"></a>Classe COleCurrency

Incapsula il tipo di dati `CURRENCY` dell'automazione OLE.

## <a name="syntax"></a>Sintassi

```
class COleCurrency
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleCurrency::COleCurrency](#colecurrency)|Costruisce un oggetto `COleCurrency`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleCurrency::Format](#format)|Genera una rappresentazione di stringa formattata di un `COleCurrency` oggetto.|
|[COleCurrency::GetStatus](#getstatus)|Ottiene lo stato (validità) di questo `COleCurrency` oggetto.|
|[COleCurrency::ParseCurrency](#parsecurrency)|Legge un valore di valuta da una stringa e imposta il valore di `COleCurrency`.|
|[COleCurrency::SetCurrency](#setcurrency)|Imposta il valore di questo `COleCurrency` oggetto.|
|[COleCurrency::SetStatus](#setstatus)|Imposta lo stato (validità) per questo `COleCurrency` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator =](#operator_eq)|Copia un `COleCurrency` valore.|
|[operatore +, -](#operator_plus_minus)|Aggiunge, sottrae e cambia l'accesso di `COleCurrency` valori.|
|[operatore + =, =](#operator_plus_minus_eq)|Aggiunge e consente di sottrarre un `COleCurrency` valore da questo `COleCurrency` oggetto.|
|[operatore * /](#operator_star)|Ridimensiona un `COleCurrency` valore da un valore integer.|
|[operatore * =, / =](#operator_star_div_eq)|Ridimensiona la struttura `COleCurrency` valore da un valore integer.|
|[operatore <<](#operator_stream)|Output di un `COleCurrency` valore per `CArchive` o `CDumpContext`.|
|[operatore >>](#operator_stream)|Gli input una `COleCurrency` dall'oggetto `CArchive`.|
|[operatore valuta](#operator_currency)|Converte un `COleCurrency` valore in una valuta.|
|[operatore = =, <, < = e così via.](#colecurrency_relational_operators)|Confronta due `COleCurrency` valori.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleCurrency::m_cur](#m_cur)|Contiene la valuta sottostante per questa `COleCurrency` oggetto.|
|[COleCurrency::m_status](#m_status)|Contiene lo stato di questo `COleCurrency` oggetto.|

## <a name="remarks"></a>Note

`COleCurrency` non è una classe di base.

VALUTA viene implementato come un a 8 byte, valore integer in complemento a due ridimensionata di 10.000. In questo modo si ottiene un numero a virgola fissa con 15 cifre a sinistra del separatore decimale e 4 cifre a destra. Il tipo di dati di valuta è estremamente utile per i calcoli che includono denaro o per qualsiasi calcolo a virgola fissa in cui la precisione è importante. È uno dei possibili tipi per il `VARIANT` tipo di dati di automazione OLE.

`COleCurrency` implementa inoltre alcune operazioni aritmetiche di base per questo tipo a virgola fissa. Le operazioni supportate sono state selezionate per controllare gli errori di arrotondamento che possono verificarsi durante i calcoli a virgola fissa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`COleCurrency`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="colecurrency"></a>  COleCurrency::COleCurrency

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
Un oggetto esistente `COleCurrency` da copiare nel nuovo oggetto `COleCurrency` oggetto.

*varSrc*<br/>
Un oggetto esistente `VARIANT` struttura di data (possibilmente una `COleVariant` oggetto) venga convertito in un valore di valuta (VT_CY) e copiare nel nuovo `COleCurrency` oggetto.

*nUnits*, *nFractionalUnits* indicano l'unità e la parte frazionaria (in 1/10 000's) del valore da copiare nel nuovo `COleCurrency` oggetto.

### <a name="remarks"></a>Note

Tutti questi costruttori creare nuovi `COleCurrency` oggetti inizializzati sul valore specificato. Segue una breve descrizione di ognuno di questi costruttori. Se non specificato diversamente, lo stato del nuovo `COleCurrency` voce è impostata su valido.

- Costrutti COleCurrency() un `COleCurrency` oggetto inizializzato a 0 (zero).

- COleCurrency (`cySrc`) Costruisce una `COleCurrency` dell'oggetto da un [valuta](/windows/desktop/api/wtypes/ns-wtypes-tagcy) valore.

- COleCurrency (`curSrc`) Costruisce una `COleCurrency` oggetto da un oggetto esistente `COleCurrency` oggetto. Il nuovo oggetto ha lo stesso stato dell'oggetto di origine.

- COleCurrency (`varSrc`) Costruisce una `COleCurrency` oggetto. Tenta di convertire un [VARIANT](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) struttura o `COleVariant` oggetto su un valore di valuta (VT_CY). Se la conversione ha esito positivo, il valore convertito viene copiato nel nuovo `COleCurrency` oggetto. In caso contrario, il valore della `COleCurrency` oggetto è impostato su zero (0) e il relativo stato come non valida.

- `COleCurrency(`nUnits`, `nFractionalUnits`) Constructs a `COleCurrency' oggetto dai componenti numerici specificati. Se il valore assoluto della parte frazionaria è maggiore di 10.000, viene eseguito l'adattamento appropriato per le unità. Si noti che l'unità e la parte frazionaria viene specificati dai valori long con segno.

Per altre informazioni, vedere la [CURRENCY](/windows/desktop/api/wtypes/ns-wtypes-tagcy) e [VARIANT](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) voci nel SDK di Windows.

### <a name="example"></a>Esempio

Gli esempi seguenti illustrano gli effetti dei costruttori di parametro da zero e due parametri:

[!code-cpp[NVC_MFCOleContainer#10](../../mfc/codesnippet/cpp/colecurrency-class_1.cpp)]

##  <a name="format"></a>  COleCurrency::Format

Chiamare questa funzione membro per creare una rappresentazione formattata del valore di valuta.

```
CString Format(DWORD  dwFlags = 0, LCID  lcid = LANG_USER_DEFAULT) const;
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Indica i flag per le impostazioni locali. Solo il flag seguente è relative a valuta:

- LOCALE_NOUSEROVERRIDE usare le impostazioni locali del sistema predefinito, anziché impostazioni utente personalizzate.

*lcid*<br/>
Indica l'ID delle impostazioni locali da usare per la conversione.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il valore di formato di valuta.

### <a name="remarks"></a>Note

Formatta il valore usando le specifiche di lingua locale (ID impostazioni locali). Un simbolo di valuta non è incluso nel valore restituito. Se lo stato di questo `COleCurrency` oggetto è null, il valore restituito è una stringa vuota. Se lo stato è valido, la stringa restituita è specificata da risorsa di tipo stringa IDS_INVALID_CURRENCY.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#11](../../mfc/codesnippet/cpp/colecurrency-class_2.cpp)]

##  <a name="getstatus"></a>  COleCurrency::GetStatus

Chiamare questa funzione membro per ottenere lo stato (validità) di un determinato `COleCurrency` oggetto.

```
CurrencyStatus GetStatus() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce lo stato di questo `COleCurrency` valore.

### <a name="remarks"></a>Note

Il valore restituito è definito per il `CurrencyStatus` tipo enumerato che viene definito all'interno di `COleCurrency` classe.

```
enum CurrencyStatus {
    valid = 0,
    invalid = 1,
    null = 2
    };
```

Per una breve descrizione dei valori di stato, vedere l'elenco seguente:

  - `COleCurrency::valid` Indica che questo `COleCurrency` oggetto è valido.

  - `COleCurrency::invalid` Indica che questo `COleCurrency` oggetto non è valido; vale a dire, il relativo valore sia corretto.

  - `COleCurrency::null` Indica che questo `COleCurrency` oggetto è null, vale a dire che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di NULL C++ database).

Lo stato di un `COleCurrency` oggetto non è valido nei casi seguenti:

- Se è impostato sul valore di una variante o `COleVariant` valore che non è stato possibile convertire un valore di valuta.

- Se questo oggetto è verificato un overflow o underflow durante un'operazione di assegnazione aritmetica, ad esempio `+=` oppure **\* =**.

- Se è stato assegnato un valore non valido per questo oggetto.

- Se lo stato di questo oggetto è stato impostato in modo esplicito come non valido tramite [SetStatus](#setstatus).

Per altre informazioni sulle operazioni che possono impostare lo stato non validi, vedere le funzioni membro seguenti:

- [COleCurrency](#colecurrency)

- [operator =](#operator_eq)

- [operatore + -](#operator_plus_minus)

- [operator + = e =](#operator_plus_minus_eq)

- [operatore * /](#operator_star)

- [operatore * = e =](#operator_star_div_eq)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#12](../../mfc/codesnippet/cpp/colecurrency-class_3.cpp)]

##  <a name="m_cur"></a>  COleCurrency::m_cur

Sottostante [CURRENCY](/windows/desktop/api/wtypes/ns-wtypes-tagcy) struttura per l'oggetto `COleCurrency` oggetto.

### <a name="remarks"></a>Note

> [!CAUTION]
>  Modifica del valore nel `CURRENCY` struttura a cui accede il puntatore restituito da questa funzione verrà modificato il valore di questa `COleCurrency` oggetto. Non modifica lo stato di questo `COleCurrency` oggetto.

Per altre informazioni, vedere la [valuta](/windows/desktop/api/wtypes/ns-wtypes-tagcy) voce nel SDK di Windows.

##  <a name="m_status"></a>  COleCurrency::m_status

Il tipo di questo membro dati è di tipo enumerato `CurrencyStatus`, che è definito all'interno di `COleCurrency` classe.

```
enum CurrencyStatus{
    valid = 0,
    invalid = 1,
    null = 2,
};
```

### <a name="remarks"></a>Note

Per una breve descrizione dei valori di stato, vedere l'elenco seguente:

- `COleCurrency::valid` Indica che questo `COleCurrency` oggetto è valido.

- `COleCurrency::invalid` Indica che questo `COleCurrency` oggetto non è valido; vale a dire, il relativo valore sia corretto.

- `COleCurrency::null` Indica che questo `COleCurrency` oggetto è null, vale a dire che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di NULL C++ database).

Lo stato di un `COleCurrency` oggetto non è valido nei casi seguenti:

- Se è impostato sul valore di una variante o `COleVariant` valore che non è stato possibile convertire un valore di valuta.

- Se questo oggetto è verificato un overflow o underflow durante un'operazione di assegnazione aritmetica, ad esempio `+=` oppure **\* =**.

- Se è stato assegnato un valore non valido per questo oggetto.

- Se lo stato di questo oggetto è stato impostato in modo esplicito come non valido tramite [SetStatus](#setstatus).

Per altre informazioni sulle operazioni che possono impostare lo stato non validi, vedere le funzioni membro seguenti:

- [COleCurrency](#colecurrency)

- [operator =](#operator_eq)

- [operatore +, -](#operator_plus_minus)

- [operatore + =, =](#operator_plus_minus_eq)

- [operatore * /](#operator_star)

- [operatore * =, / =](#operator_star_div_eq)

> [!CAUTION]
>  Questo membro dati è utile nelle situazioni di programmazione avanzate. È consigliabile usare le funzioni membro inline [GetStatus](#getstatus) e [SetStatus](#setstatus). Vedere `SetStatus` per gli altri avvisi riguardanti impostare in modo esplicito questo membro dati.

##  <a name="operator_eq"></a>  COleCurrency::operator =

Questi operatori di assegnazione di overload copiare il valore di valuta di origine in questo `COleCurrency` oggetto.

```
const COleCurrency& operator=(CURRENCY cySrc);
const COleCurrency& operator=(const COleCurrency& curSrc);
  const COleCurrency& operator=(const VARIANT& varSrc);
```

### <a name="remarks"></a>Note

Di seguito una breve descrizione di ogni operatore:

- **operatore = (** `cySrc` **)** il `CURRENCY` viene copiato nel `COleCurrency` oggetto e il relativo stato è impostato su valido.

- **operatore = (** `curSrc` **)** il valore e lo stato dell'operando, un oggetto esistente `COleCurrency` oggetto vengono copiati in questa `COleCurrency` oggetto.

- **operatore = (** *varSrc* **)** se la conversione del `VARIANT` valore (o [COleVariant](../../mfc/reference/colevariant-class.md) oggetti) da una valuta ( `VT_CY`) è esito positivo, il valore convertito viene copiato in questo `COleCurrency` oggetto e il relativo stato è impostato su valido. Se la conversione non riesce, il valore della `COleCurrency` oggetto è impostato su 0 e il relativo stato come non valida.

Per altre informazioni, vedere la [CURRENCY](/windows/desktop/api/wtypes/ns-wtypes-tagcy) e [VARIANT](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) voci nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#15](../../mfc/codesnippet/cpp/colecurrency-class_4.cpp)]

##  <a name="operator_plus_minus"></a>  COleCurrency::operator +, -

Questi operatori consentono di addizione e sottrazione due `COleCurrency` i valori a e tra loro e per modificare il segno di un `COleCurrency` valore.

```
COleCurrency operator+(const COleCurrency& cur) const;
COleCurrency operator-(const COleCurrency& cur) const;
COleCurrency operator-() const;
```

### <a name="remarks"></a>Note

Se uno degli operandi è null, lo stato dell'oggetto risultante `COleCurrency` valore è null.

Se l'operazione aritmetica supera, l'oggetto risultante `COleCurrency` valore non è valido.

Se l'operando è valido e l'altro non è null, lo stato dell'oggetto risultante `COleCurrency` valore non è valido.

Per altre informazioni sui valori di stato validi, non è valido e null, vedere la [m_status](#m_status) variabile membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#16](../../mfc/codesnippet/cpp/colecurrency-class_5.cpp)]

##  <a name="operator_plus_minus_eq"></a>  COleCurrency::operator + =, =

Consentono di addizione e sottrazione una `COleCurrency` valore da e verso questo `COleCurrency` oggetto.

```
const COleCurrency& operator+=(const COleCurrency& cur);
const COleCurrency& operator-=(const COleCurrency& cur);
```

### <a name="remarks"></a>Note

Se uno degli operandi è null, lo stato di questo `COleCurrency` oggetto viene impostato su null.

Se l'operazione aritmetica supera, lo stato di questo `COleCurrency` oggetto viene impostato come non valida.

Se uno degli operandi è valido e l'altro non è null, lo stato di questo `COleCurrency` oggetto viene impostato come non valida.

Per altre informazioni sui valori di stato validi, non è valido e null, vedere la [m_status](#m_status) variabile membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#17](../../mfc/codesnippet/cpp/colecurrency-class_6.cpp)]

##  <a name="operator_star"></a>  COleCurrency::operator \* e /

Consentono di ridimensionare un `COleCurrency` valore in base al valore integrale.

```
COleCurrency operator*(long nOperand) const;
COleCurrency operator/(long nOperand) const;
```

### <a name="remarks"></a>Note

Se il `COleCurrency` degli operandi è null, lo stato dell'oggetto risultante `COleCurrency` valore è null.

Se l'operazione aritmetica causa l'overflow o underflow, lo stato dell'oggetto risultante `COleCurrency` valore non è valido.

Se il `COleCurrency` operando non è valido, lo stato dell'oggetto risultante `COleCurrency` valore non è valido.

Per altre informazioni sui valori di stato validi, non è valido e null, vedere la [m_status](#m_status) variabile membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#18](../../mfc/codesnippet/cpp/colecurrency-class_7.cpp)]

##  <a name="operator_star_div_eq"></a>  COleCurrency::operator \*=, / =

Consentono di modificare le proporzioni `COleCurrency` valore in base al valore integrale.

```
const COleCurrency& operator*=(long nOperand);
const COleCurrency& operator/=(long nOperand);
```

### <a name="remarks"></a>Note

Se il `COleCurrency` degli operandi è null, lo stato di questo `COleCurrency` oggetto viene impostato su null.

Se l'operazione aritmetica supera, lo stato di questo `COleCurrency` oggetto viene impostato come non valida.

Se il `COleCurrency` operando non è valido, lo stato di questo `COleCurrency` oggetto viene impostato come non valida.

Per altre informazioni sui valori di stato validi, non è valido e null, vedere la [m_status](#m_status) variabile membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#19](../../mfc/codesnippet/cpp/colecurrency-class_8.cpp)]

##  <a name="operator_stream"></a>  COleCurrency::operator &lt; &lt;, &gt;&gt;

Supporta il dump di diagnostica e l'archiviazione in un archivio.

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

L'estrazione ( **>>**) operatore supporta il caricamento da un archivio.

##  <a name="operator_currency"></a>  COleCurrency::operator valuta

Restituisce un `CURRENCY` il cui valore viene copiato da questa struttura `COleCurrency` oggetto.

```
operator CURRENCY() const;
```

### <a name="remarks"></a>Note

##  <a name="parsecurrency"></a>  COleCurrency::ParseCurrency

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
Puntatore alla stringa con terminazione null che deve essere analizzato.

*dwFlags*<br/>
Indica i flag per impostazioni locali, probabilmente il flag seguente:

- LOCALE_NOUSEROVERRIDE usare le impostazioni locali del sistema predefinito, anziché impostazioni utente personalizzate.

*lcid*<br/>
Indica l'ID delle impostazioni locali da usare per la conversione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la stringa è stata convertita in un valore di valuta, in caso contrario 0.

### <a name="remarks"></a>Note

Usa le specifiche di lingua locale (ID impostazioni locali) per il significato dei caratteri non numerici nella stringa di origine.

Per una descrizione dei valori di ID delle impostazioni locali, vedere [che supportano più lingue](/previous-versions/windows/desktop/automat/supporting-multiple-national-languages).

Se la stringa è stata convertita in una valuta di valore, il valore di questa `COleCurrency` oggetto è impostato su tale valore e lo stato su valido.

Se la stringa non può essere convertita in un valore di valuta o se si è verificato un overflow numerico, lo stato di questo `COleCurrency` oggetto non è valido.

Se la conversione di stringa non è riuscita a causa di errori di allocazione di memoria, questa funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md). In qualsiasi altro stato di errore, questa funzione genera un [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#13](../../mfc/codesnippet/cpp/colecurrency-class_9.cpp)]

##  <a name="colecurrency_relational_operators"></a>  Operatori relazionali COleCurrency

Confrontare due valori di valuta e restituire diverso da zero se la condizione è true. in caso contrario 0.

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
>  Il valore restituito di operazioni di gestione degli ordini ( **<**, **\< =**, **>**, **>=**) non è definito se lo stato degli operandi è null o non valido. Gli operatori di uguaglianza ( `==`, `!=`) prendere in considerazione lo stato degli operandi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#20](../../mfc/codesnippet/cpp/colecurrency-class_10.cpp)]

##  <a name="setcurrency"></a>  COleCurrency::SetCurrency

Chiamare questa funzione membro per impostare l'unità e la parte frazionaria di questo `COleCurrency` oggetto.

```
void SetCurrency(
    long nUnits,
    long nFractionalUnits);
```

### <a name="parameters"></a>Parametri

*nUnits*, *nFractionalUnits* indicano l'unità e la parte frazionaria (in 1/10 000's) del valore deve essere copiato `COleCurrency` oggetto.

### <a name="remarks"></a>Note

Se il valore assoluto della parte frazionaria è maggiore di 10.000, viene eseguito l'adattamento appropriato per le unità, come illustrato nel terzo degli esempi seguenti.

Si noti che l'unità e la parte frazionaria viene specificati dai valori long con segno. Il quarto degli esempi seguenti viene illustrato cosa accade quando i parametri hanno segni diversi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#14](../../mfc/codesnippet/cpp/colecurrency-class_11.cpp)]

##  <a name="setstatus"></a>  COleCurrency::SetStatus

Chiamare questa funzione membro per impostare lo stato (validità) di questo `COleCurrency` oggetto.

```
void SetStatus(CurrencyStatus  status  );
```

### <a name="parameters"></a>Parametri

*status*<br/>
Il nuovo stato per l'oggetto `COleCurrency` oggetto.

### <a name="remarks"></a>Note

Il *lo stato* valore del parametro è definito dal `CurrencyStatus` tipo enumerato, che viene definito all'interno di `COleCurrency` classe.

```
enum CurrencyStatus {
    valid = 0,
    invalid = 1,
    null = 2
    };
```

Per una breve descrizione dei valori di stato, vedere l'elenco seguente:

- `COleCurrency::valid` Indica che questo `COleCurrency` oggetto è valido.

- `COleCurrency::invalid` Indica che questo `COleCurrency` oggetto non è valido; vale a dire, il relativo valore sia corretto.

- `COleCurrency::null` Indica che questo `COleCurrency` oggetto è null, vale a dire che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di NULL C++ database).

> [!CAUTION]
>  Questa funzione è utile nelle situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. Sarà spesso usata per impostare lo stato su null o non valido. Si noti che l'operatore di assegnazione ( [operatore =](#operator_eq)) e [SetCurrency](#setcurrency) impostare lo stato su dell'oggetto basata i valori di origine.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleVariant](../../mfc/reference/colevariant-class.md)
