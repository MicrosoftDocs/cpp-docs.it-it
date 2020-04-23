---
title: Classe COleCurrency
ms.date: 08/29/2019
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
ms.openlocfilehash: cc69143101c5d00d4f9a689bd02abdd9596e5b53
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753929"
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
|[COleCurrency::Formato](#format)|Genera una rappresentazione di `COleCurrency` stringa formattata di un oggetto.|
|[COleCurrency::GetStatus](#getstatus)|Ottiene lo stato (validità) `COleCurrency` di questo oggetto.|
|[ValutaCOleCurrency::ParseValuta](#parsecurrency)|Legge un valore CURRENCY da una stringa `COleCurrency`e imposta il valore di .|
|[Valuta::SetValuta](#setcurrency)|Imposta il valore `COleCurrency` di questo oggetto.|
|[COleCurrency::SetStatus](#setstatus)|Imposta lo stato (validità) `COleCurrency` per questo oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore .](#operator_eq)|Copia un `COleCurrency` valore.|
|[operatore di comando , -](#operator_plus_minus)|Aggiunge, sottrae e `COleCurrency` modifica il segno dei valori.|
|[operatore di lavoro sz, -](#operator_plus_minus_eq)|Aggiunge e sottrae un `COleCurrency` valore da questo `COleCurrency` oggetto.|
|[operatore : /](#operator_star)|Ridimensiona un `COleCurrency` valore in base a un valore intero.|
|[operatore :](#operator_star_div_eq)|Ridimensiona questo `COleCurrency` valore in base a un valore intero.|
|[ <<operatore](#operator_stream)|Restituisce `COleCurrency` un `CArchive` valore `CDumpContext`in o .|
|[ >>operatore](#operator_stream)|Inserisce `COleCurrency` un `CArchive`oggetto da .|
|[operatore CURRENCY](#operator_currency)|Converte `COleCurrency` un valore in un CURRENCY.|
|[operatore di lavoro , <, <, ecc.](#colecurrency_relational_operators)|Confronta due `COleCurrency` valori.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Valuta::m_cur COleCurrency](#m_cur)|Contiene la valuta `COleCurrency` sottostante per questo oggetto.|
|[Valuta COle::m_status](#m_status)|Contiene lo stato `COleCurrency` di questo oggetto.|

## <a name="remarks"></a>Osservazioni

`COleCurrency`non dispone di una classe base.

CURRENCY viene implementato come un valore intero a 8 byte, a due pollici, scalato di 10.000. In questo modo si ottiene un numero a virgola fissa con 15 cifre a sinistra del separatore decimale e 4 cifre a destra. Il tipo di dati CURRENCY è estremamente utile per i calcoli che coinvolgono denaro o per qualsiasi calcolo a virgola fissa in cui l'accuratezza è importante. È uno dei tipi possibili `VARIANT` per il tipo di dati dell'automazione OLE.

`COleCurrency`implementa anche alcune operazioni aritmetiche di base per questo tipo a virgola fissa. Le operazioni supportate sono state selezionate per controllare gli errori di arrotondamento che si verificano durante i calcoli a virgola fissa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`COleCurrency`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="colecurrencycolecurrency"></a><a name="colecurrency"></a>COleCurrency::COleCurrency

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

*CySrc*<br/>
Valore CURRENCY da copiare `COleCurrency` nel nuovo oggetto.

*curSrc*<br/>
Oggetto `COleCurrency` esistente da copiare `COleCurrency` nel nuovo oggetto.

*varSrc*<br/>
Struttura `VARIANT` di dati esistente `COleVariant` (eventualmente un oggetto) da convertire in un `COleCurrency` valore di valuta (VT_CY) e copiata nel nuovo oggetto.

*nUnits*, *nFractionalUnits* Indica le unità e la parte frazionaria (in 1/10.000) del valore da copiare nel nuovo `COleCurrency` oggetto.

### <a name="remarks"></a>Osservazioni

Tutti questi costruttori `COleCurrency` creano nuovi oggetti inizializzati sul valore specificato. Segue una breve descrizione di ciascuno di questi costruttori. Se non specificato diversamente, `COleCurrency` lo stato del nuovo elemento è impostato su valido.

- COleCurrency() Costruisce `COleCurrency` un oggetto inizializzato su 0 (zero).

- COleCurrency(`cySrc`) Costruisce `COleCurrency` un oggetto da [un](/windows/win32/api/wtypes/ns-wtypes-cy~r1) currency valore.

- COleCurrency(`curSrc`) Costruisce `COleCurrency` un oggetto `COleCurrency` da un oggetto esistente. Il nuovo oggetto ha lo stesso stato dell'oggetto di origine.

- COleCurrency(`varSrc`) Costruisce `COleCurrency` un oggetto. Tenta di [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) convertire una `COleVariant` struttura o un oggetto VARIANT in un valore di valuta (VT_CY). Se questa conversione ha esito positivo, `COleCurrency` il valore convertito viene copiato nel nuovo oggetto. In caso contrario, il `COleCurrency` valore dell'oggetto è impostato su zero (0) e il relativo stato su non valido.

- COleCurrency(`nUnits` `nFractionalUnits`, ) `COleCurrency` Costruisce un oggetto dai componenti numerici specificati. Se il valore assoluto della parte frazionaria è maggiore di 10.000, viene effettuata la rettifica appropriata alle unità. Si noti che le unità e la parte frazionaria sono specificate da valori long con segno.

Per ulteriori informazioni, vedere le voci [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy~r1) e [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) in Windows SDK.

### <a name="example"></a>Esempio

Negli esempi seguenti vengono illustrati gli effetti dei costruttori con parametro zero e a due parametri:

[!code-cpp[NVC_MFCOleContainer#10](../../mfc/codesnippet/cpp/colecurrency-class_1.cpp)]

## <a name="colecurrencyformat"></a><a name="format"></a>COleCurrency::Formato

Chiamare questa funzione membro per creare una rappresentazione formattata del valore di valuta.

```
CString Format(DWORD  dwFlags = 0, LCID  lcid = LANG_USER_DEFAULT) const;
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Indica i flag per le impostazioni locali. Solo il seguente flag è rilevante per la valuta:

- LOCALE_NOUSEROVERRIDE Utilizzare le impostazioni locali predefinite del sistema, anziché le impostazioni utente personalizzate.

*lcid*<br/>
Indica l'ID delle impostazioni locali da utilizzare per la conversione.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il valore di valuta formattato.

### <a name="remarks"></a>Osservazioni

Formatta il valore utilizzando le specifiche della lingua locale (ID delle impostazioni locali). Un simbolo di valuta non è incluso nel valore restituito. Se lo stato `COleCurrency` di questo oggetto è null, il valore restituito è una stringa vuota. Se lo stato non è valido, la stringa restituita viene specificata dalla risorsa stringa IDS_INVALID_CURRENCY.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#11](../../mfc/codesnippet/cpp/colecurrency-class_2.cpp)]

## <a name="colecurrencygetstatus"></a><a name="getstatus"></a>COleCurrency::GetStatus

Chiamare questa funzione membro per ottenere lo stato `COleCurrency` (validità) di un determinato oggetto.

```
CurrencyStatus GetStatus() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce lo `COleCurrency` stato di questo valore.

### <a name="remarks"></a>Osservazioni

Il valore restituito è `CurrencyStatus` definito dal tipo enumerato definito all'interno della `COleCurrency` classe.

```
enum CurrencyStatus {
    valid = 0,
    invalid = 1,
    null = 2
    };
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleCurrency::valid`Indica che `COleCurrency` questo oggetto è valido.

- `COleCurrency::invalid`Indica che `COleCurrency` questo oggetto non è valido. vale a dire, il suo valore potrebbe non essere corretto.

- `COleCurrency::null`Indica che `COleCurrency` questo oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di database di "non avere alcun valore", al contrario di C , NULL.)

Lo stato `COleCurrency` di un oggetto non è valido nei seguenti casi:

- Se il valore è impostato `COleVariant` da un VALORE VARIANT o un valore che non può essere convertito in un valore di valuta.

- Se l'oggetto ha subito un overflow o underflow `+=` ** \* **durante un'operazione di assegnazione aritmetica, ad esempio o .

- Se a questo oggetto è stato assegnato un valore non valido.

- Se lo stato di questo oggetto è stato impostato in modo esplicito su non valido utilizzando [SetStatus](#setstatus).

Per ulteriori informazioni sulle operazioni che possono impostare lo stato come non valido, vedere le seguenti funzioni membro:

- [COleCurrency](#colecurrency)

- [operatore .](#operator_eq)

- [operatore -](#operator_plus_minus)

- [operatore e -](#operator_plus_minus_eq)

- [operatore /](#operator_star)

- [operatore e /](#operator_star_div_eq)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#12](../../mfc/codesnippet/cpp/colecurrency-class_3.cpp)]

## <a name="colecurrencym_cur"></a><a name="m_cur"></a>Valuta::m_cur COleCurrency

Struttura [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy~r1) sottostante `COleCurrency` per questo oggetto.

### <a name="remarks"></a>Osservazioni

> [!CAUTION]
> Se si modifica `CURRENCY` il valore nella struttura a cui accede il `COleCurrency` puntatore restituito da questa funzione, il valore di questo oggetto verrà modificato. Non modifica lo stato `COleCurrency` di questo oggetto.

Per ulteriori informazioni, vedere la voce [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy~r1) in Windows SDK.

## <a name="colecurrencym_status"></a><a name="m_status"></a>Valuta COle::m_status

Il tipo di questo membro dati `CurrencyStatus`è il tipo `COleCurrency` enumerato , definito all'interno della classe.

```
enum CurrencyStatus{
    valid = 0,
    invalid = 1,
    null = 2,
};
```

### <a name="remarks"></a>Osservazioni

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleCurrency::valid`Indica che `COleCurrency` questo oggetto è valido.

- `COleCurrency::invalid`Indica che `COleCurrency` questo oggetto non è valido. vale a dire, il suo valore potrebbe non essere corretto.

- `COleCurrency::null`Indica che `COleCurrency` questo oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di database di "non avere alcun valore", al contrario di C , NULL.)

Lo stato `COleCurrency` di un oggetto non è valido nei seguenti casi:

- Se il valore è impostato `COleVariant` da un VALORE VARIANT o un valore che non può essere convertito in un valore di valuta.

- Se l'oggetto ha subito un overflow o underflow `+=` ** \* **durante un'operazione di assegnazione aritmetica, ad esempio o .

- Se a questo oggetto è stato assegnato un valore non valido.

- Se lo stato di questo oggetto è stato impostato in modo esplicito su non valido utilizzando [SetStatus](#setstatus).

Per ulteriori informazioni sulle operazioni che possono impostare lo stato come non valido, vedere le seguenti funzioni membro:

- [COleCurrency](#colecurrency)

- [operatore .](#operator_eq)

- [operatore di comando , -](#operator_plus_minus)

- [operatore di lavoro sz, -](#operator_plus_minus_eq)

- [operatore : /](#operator_star)

- [operatore :](#operator_star_div_eq)

> [!CAUTION]
> Questo membro dati è per situazioni di programmazione avanzate. È necessario utilizzare le funzioni membro inline [GetStatus](#getstatus) e [SetStatus](#setstatus). Per `SetStatus` ulteriori precauzioni relative all'impostazione esplicita di questo membro dati, vedere per ulteriori precauzioni.

## <a name="colecurrencyoperator-"></a><a name="operator_eq"></a>COleCurrency::operatore

Questi operatori di assegnazione di overload `COleCurrency` copiano il valore di valuta di origine in questo oggetto.

```
const COleCurrency& operator=(CURRENCY cySrc);
const COleCurrency& operator=(const COleCurrency& curSrc);
const COleCurrency& operator=(const VARIANT& varSrc);
```

### <a name="remarks"></a>Osservazioni

Di seguito è fornita una breve descrizione di ciascun operatore:

- **operatore : (** `cySrc` **)** Il `CURRENCY` valore viene `COleCurrency` copiato nell'oggetto e il relativo stato viene impostato su valido.

- **operatore : (** `curSrc` **)** Il valore e lo stato dell'operando, un oggetto esistente `COleCurrency` vengono copiati in questo `COleCurrency` oggetto.

- **operatore : (** *varSrc* **)** Se la conversione del valore (o dell'oggetto `VARIANT` `VT_CY` [COleVariant)](../../mfc/reference/colevariant-class.md) in una valuta `COleCurrency` ( ) ha esito positivo, il valore convertito viene copiato in questo oggetto e il relativo stato viene impostato su valido. Se la conversione non riesce, il valore dell'oggetto `COleCurrency` viene impostato su 0 e il relativo stato su non valido.

Per ulteriori informazioni, vedere le voci [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy~r1) e [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#15](../../mfc/codesnippet/cpp/colecurrency-class_4.cpp)]

## <a name="colecurrencyoperator---"></a><a name="operator_plus_minus"></a>Valuta::operatore COleCurrency::operatore -

Questi operatori consentono di aggiungere `COleCurrency` e sottrarre due valori l'uno dall'altro e di modificare il segno di un `COleCurrency` valore.

```
COleCurrency operator+(const COleCurrency& cur) const;
COleCurrency operator-(const COleCurrency& cur) const;
COleCurrency operator-() const;
```

### <a name="remarks"></a>Osservazioni

Se uno degli operandi è null, `COleCurrency` lo stato del valore risultante è null.

Se l'operazione aritmetica `COleCurrency` causa un overflow, il valore risultante non è valido.

Se l'operando non è valido e l'altro `COleCurrency` non è null, lo stato del valore risultante non è valido.

Per altre informazioni sui valori di stato valid, invalid e null, vedere la variabile membro [m_status.](#m_status)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#16](../../mfc/codesnippet/cpp/colecurrency-class_5.cpp)]

## <a name="colecurrencyoperator---"></a><a name="operator_plus_minus_eq"></a>COleCurrency::operatore s, -

Consentono di aggiungere e `COleCurrency` sottrarre `COleCurrency` un valore da e verso questo oggetto.

```
const COleCurrency& operator+=(const COleCurrency& cur);
const COleCurrency& operator-=(const COleCurrency& cur);
```

### <a name="remarks"></a>Osservazioni

Se uno degli operandi è null, `COleCurrency` lo stato di questo oggetto è impostato su null.

Se l'operazione aritmetica causa `COleCurrency` un overflow, lo stato di questo oggetto è impostato su non valido.

Se uno degli operandi non è valido e l'altro non è null, lo stato di questo `COleCurrency` oggetto è impostato su non valido.

Per altre informazioni sui valori di stato valid, invalid e null, vedere la variabile membro [m_status.](#m_status)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#17](../../mfc/codesnippet/cpp/colecurrency-class_6.cpp)]

## <a name="colecurrencyoperator--and-"></a><a name="operator_star"></a>COleCurrency::operatore \* e /

Consentono di scalare un valore in base a un `COleCurrency` valore integrale.

```
COleCurrency operator*(long nOperand) const;
COleCurrency operator/(long nOperand) const;
```

### <a name="remarks"></a>Osservazioni

Se `COleCurrency` l'operando è null, lo `COleCurrency` stato del valore risultante è null.

Se l'operazione aritmetica supera o sottodisponene, lo stato del valore risultante `COleCurrency` non è valido.

Se `COleCurrency` l'operando non è valido, `COleCurrency` lo stato del valore risultante non è valido.

Per altre informazioni sui valori di stato valid, invalid e null, vedere la variabile membro [m_status.](#m_status)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#18](../../mfc/codesnippet/cpp/colecurrency-class_7.cpp)]

## <a name="colecurrencyoperator--"></a><a name="operator_star_div_eq"></a>COleCurrency::operatore \*, /

Consentono di scalare questo `COleCurrency` valore in base a un valore integrale.

```
const COleCurrency& operator*=(long nOperand);
const COleCurrency& operator/=(long nOperand);
```

### <a name="remarks"></a>Osservazioni

Se `COleCurrency` l'operando è null, `COleCurrency` lo stato di questo oggetto è impostato su null.

Se l'operazione aritmetica causa `COleCurrency` un overflow, lo stato di questo oggetto è impostato su non valido.

Se `COleCurrency` l'operando non è valido, lo stato di questo `COleCurrency` oggetto è impostato su non valido.

Per altre informazioni sui valori di stato valid, invalid e null, vedere la variabile membro [m_status.](#m_status)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#19](../../mfc/codesnippet/cpp/colecurrency-class_8.cpp)]

## <a name="colecurrencyoperator-ltlt-gtgt"></a><a name="operator_stream"></a>COleCurrency::operatore &lt; &lt;,&gt;&gt;

Supporta il dump diagnostico e l'archiviazione in un archivio.

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

### <a name="remarks"></a>Osservazioni

L'operatore di estrazione ( **>>**) supporta il caricamento da un archivio.

## <a name="colecurrencyoperator-currency"></a><a name="operator_currency"></a>COleCurrency::operatore CURRENCY

Restituisce `CURRENCY` una struttura il `COleCurrency` cui valore viene copiato da questo oggetto.

```
operator CURRENCY() const;
```

### <a name="remarks"></a>Osservazioni

## <a name="colecurrencyparsecurrency"></a><a name="parsecurrency"></a>ValutaCOleCurrency::ParseValuta

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

*Valuta lpsz*<br/>
Puntatore alla stringa con terminazione null che deve essere analizzata.

*dwFlags*<br/>
Indica i flag per le impostazioni locali, probabilmente il seguente flag:

- LOCALE_NOUSEROVERRIDE Utilizzare le impostazioni locali predefinite del sistema, anziché le impostazioni utente personalizzate.

*lcid*<br/>
Indica l'ID delle impostazioni locali da utilizzare per la conversione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la stringa è stata convertita correttamente in un valore di valuta, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizza le specifiche della lingua locale (ID delle impostazioni locali) per il significato dei caratteri non numerici nella stringa di origine.

Per una descrizione dei valori degli ID delle impostazioni locali, vedere [Supporto di più lingue](/previous-versions/windows/desktop/automat/supporting-multiple-national-languages).

Se la stringa è stata convertita correttamente `COleCurrency` in un valore di valuta, il valore di questo oggetto viene impostato su tale valore e il relativo stato su valido.

Se la stringa non può essere convertita in un valore di valuta `COleCurrency` o se si è verificato un overflow numerico, lo stato di questo oggetto non è valido.

Se la conversione della stringa non è riuscita a causa di errori di allocazione della memoria, questa funzione genera [un'eccezione CMemoryException](../../mfc/reference/cmemoryexception-class.md). In qualsiasi altro stato di errore, questa funzione genera [un'eccezione COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#13](../../mfc/codesnippet/cpp/colecurrency-class_9.cpp)]

## <a name="colecurrency-relational-operators"></a><a name="colecurrency_relational_operators"></a>Operatori relazionali COleCurrency

Confrontare due valori di valuta e restituire diverso da zero se la condizione è vera; in caso contrario 0.

```
BOOL operator==(const COleCurrency& cur) const;
BOOL operator!=(const COleCurrency& cur) const;
BOOL operator<(const COleCurrency& cur) const;
BOOL operator>(const COleCurrency& cur) const;
BOOL operator<=(const COleCurrency& cur) const;
BOOL operator>=(const COleCurrency& cur) const;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Il valore restituito delle operazioni **<** ** \< **di **>** **>=** ordinamento ( , , , ) non è definito se lo stato di uno degli operandi è null o non valido. Gli operatori `==`di `!=`uguaglianza ( , ) considerano lo stato degli operandi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#20](../../mfc/codesnippet/cpp/colecurrency-class_10.cpp)]

## <a name="colecurrencysetcurrency"></a><a name="setcurrency"></a>Valuta::SetValuta

Chiamare questa funzione membro per impostare le `COleCurrency` unità e la parte frazionaria di questo oggetto.

```cpp
void SetCurrency(
    long nUnits,
    long nFractionalUnits);
```

### <a name="parameters"></a>Parametri

*nUnits*, *nFractionalUnits* Indica le unità e la parte frazionaria (in 1/10.000) del valore da copiare in questo `COleCurrency` oggetto.

### <a name="remarks"></a>Osservazioni

Se il valore assoluto della parte frazionaria è maggiore di 10.000, viene effettuata la regolazione appropriata alle unità, come illustrato nella terza degli esempi seguenti.

Si noti che le unità e la parte frazionaria sono specificate da valori long con segno. Il quarto degli esempi seguenti mostra cosa accade quando i parametri hanno segni diversi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#14](../../mfc/codesnippet/cpp/colecurrency-class_11.cpp)]

## <a name="colecurrencysetstatus"></a><a name="setstatus"></a>COleCurrency::SetStatus

Chiamare questa funzione membro per impostare lo `COleCurrency` stato (validità) di questo oggetto.

```cpp
void SetStatus(CurrencyStatus  status  );
```

### <a name="parameters"></a>Parametri

*Stato*<br/>
Nuovo stato per `COleCurrency` questo oggetto.

### <a name="remarks"></a>Osservazioni

Il *status* valore del parametro `CurrencyStatus` status è definito dal `COleCurrency` tipo enumerato, definito all'interno della classe.

```
enum CurrencyStatus {
    valid = 0,
    invalid = 1,
    null = 2
    };
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleCurrency::valid`Indica che `COleCurrency` questo oggetto è valido.

- `COleCurrency::invalid`Indica che `COleCurrency` questo oggetto non è valido. vale a dire, il suo valore potrebbe non essere corretto.

- `COleCurrency::null`Indica che `COleCurrency` questo oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di database di "non avere alcun valore", al contrario di C , NULL.)

> [!CAUTION]
> Questa funzione è per situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. Verrà utilizzato più spesso per impostare lo stato su null o non valido. Si noti che l'operatore di assegnazione ( [operatore )](#operator_eq)e [SetCurrency](#setcurrency) impostano lo stato dell'oggetto in base ai valori di origine.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleVariant](../../mfc/reference/colevariant-class.md)
