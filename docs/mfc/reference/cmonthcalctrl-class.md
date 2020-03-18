---
title: Classe CMonthCalCtrl
ms.date: 11/04/2016
f1_keywords:
- CMonthCalCtrl
- AFXDTCTL/CMonthCalCtrl
- AFXDTCTL/CMonthCalCtrl::CMonthCalCtrl
- AFXDTCTL/CMonthCalCtrl::Create
- AFXDTCTL/CMonthCalCtrl::GetCalendarBorder
- AFXDTCTL/CMonthCalCtrl::GetCalendarCount
- AFXDTCTL/CMonthCalCtrl::GetCalendarGridInfo
- AFXDTCTL/CMonthCalCtrl::GetCalID
- AFXDTCTL/CMonthCalCtrl::GetColor
- AFXDTCTL/CMonthCalCtrl::GetCurrentView
- AFXDTCTL/CMonthCalCtrl::GetCurSel
- AFXDTCTL/CMonthCalCtrl::GetFirstDayOfWeek
- AFXDTCTL/CMonthCalCtrl::GetMaxSelCount
- AFXDTCTL/CMonthCalCtrl::GetMaxTodayWidth
- AFXDTCTL/CMonthCalCtrl::GetMinReqRect
- AFXDTCTL/CMonthCalCtrl::GetMonthDelta
- AFXDTCTL/CMonthCalCtrl::GetMonthRange
- AFXDTCTL/CMonthCalCtrl::GetRange
- AFXDTCTL/CMonthCalCtrl::GetSelRange
- AFXDTCTL/CMonthCalCtrl::GetToday
- AFXDTCTL/CMonthCalCtrl::HitTest
- AFXDTCTL/CMonthCalCtrl::IsCenturyView
- AFXDTCTL/CMonthCalCtrl::IsDecadeView
- AFXDTCTL/CMonthCalCtrl::IsMonthView
- AFXDTCTL/CMonthCalCtrl::IsYearView
- AFXDTCTL/CMonthCalCtrl::SetCalendarBorder
- AFXDTCTL/CMonthCalCtrl::SetCalendarBorderDefault
- AFXDTCTL/CMonthCalCtrl::SetCalID
- AFXDTCTL/CMonthCalCtrl::SetCenturyView
- AFXDTCTL/CMonthCalCtrl::SetColor
- AFXDTCTL/CMonthCalCtrl::SetCurrentView
- AFXDTCTL/CMonthCalCtrl::SetCurSel
- AFXDTCTL/CMonthCalCtrl::SetDayState
- AFXDTCTL/CMonthCalCtrl::SetDecadeView
- AFXDTCTL/CMonthCalCtrl::SetFirstDayOfWeek
- AFXDTCTL/CMonthCalCtrl::SetMaxSelCount
- AFXDTCTL/CMonthCalCtrl::SetMonthDelta
- AFXDTCTL/CMonthCalCtrl::SetMonthView
- AFXDTCTL/CMonthCalCtrl::SetRange
- AFXDTCTL/CMonthCalCtrl::SetSelRange
- AFXDTCTL/CMonthCalCtrl::SetToday
- AFXDTCTL/CMonthCalCtrl::SetYearView
- AFXDTCTL/CMonthCalCtrl::SizeMinReq
- AFXDTCTL/CMonthCalCtrl::SizeRectToMin
helpviewer_keywords:
- CMonthCalCtrl [MFC], CMonthCalCtrl
- CMonthCalCtrl [MFC], Create
- CMonthCalCtrl [MFC], GetCalendarBorder
- CMonthCalCtrl [MFC], GetCalendarCount
- CMonthCalCtrl [MFC], GetCalendarGridInfo
- CMonthCalCtrl [MFC], GetCalID
- CMonthCalCtrl [MFC], GetColor
- CMonthCalCtrl [MFC], GetCurrentView
- CMonthCalCtrl [MFC], GetCurSel
- CMonthCalCtrl [MFC], GetFirstDayOfWeek
- CMonthCalCtrl [MFC], GetMaxSelCount
- CMonthCalCtrl [MFC], GetMaxTodayWidth
- CMonthCalCtrl [MFC], GetMinReqRect
- CMonthCalCtrl [MFC], GetMonthDelta
- CMonthCalCtrl [MFC], GetMonthRange
- CMonthCalCtrl [MFC], GetRange
- CMonthCalCtrl [MFC], GetSelRange
- CMonthCalCtrl [MFC], GetToday
- CMonthCalCtrl [MFC], HitTest
- CMonthCalCtrl [MFC], IsCenturyView
- CMonthCalCtrl [MFC], IsDecadeView
- CMonthCalCtrl [MFC], IsMonthView
- CMonthCalCtrl [MFC], IsYearView
- CMonthCalCtrl [MFC], SetCalendarBorder
- CMonthCalCtrl [MFC], SetCalendarBorderDefault
- CMonthCalCtrl [MFC], SetCalID
- CMonthCalCtrl [MFC], SetCenturyView
- CMonthCalCtrl [MFC], SetColor
- CMonthCalCtrl [MFC], SetCurrentView
- CMonthCalCtrl [MFC], SetCurSel
- CMonthCalCtrl [MFC], SetDayState
- CMonthCalCtrl [MFC], SetDecadeView
- CMonthCalCtrl [MFC], SetFirstDayOfWeek
- CMonthCalCtrl [MFC], SetMaxSelCount
- CMonthCalCtrl [MFC], SetMonthDelta
- CMonthCalCtrl [MFC], SetMonthView
- CMonthCalCtrl [MFC], SetRange
- CMonthCalCtrl [MFC], SetSelRange
- CMonthCalCtrl [MFC], SetToday
- CMonthCalCtrl [MFC], SetYearView
- CMonthCalCtrl [MFC], SizeMinReq
- CMonthCalCtrl [MFC], SizeRectToMin
ms.assetid: a42f6bd6-ab5c-4335-82f8-839982fc64a2
ms.openlocfilehash: 963aecfed4f6eb67a0ab227df06fce98c0778f7f
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420204"
---
# <a name="cmonthcalctrl-class"></a>Classe CMonthCalCtrl

Incapsula la funzionalità di un controllo calendario mensile.

## <a name="syntax"></a>Sintassi

```
class CMonthCalCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMonthCalCtrl:: CMonthCalCtrl](#cmonthcalctrl)|Costruisce un oggetto `CMonthCalCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMonthCalCtrl:: create](#create)|Crea un controllo calendario mensile e lo connette all'oggetto `CMonthCalCtrl`.|
|[CMonthCalCtrl:: GetCalendarBorder](#getcalendarborder)|Recupera la larghezza del bordo del controllo calendario mensile corrente.|
|[CMonthCalCtrl:: GetCalendarCount](#getcalendarcount)|Recupera il numero di calendari visualizzati nel controllo calendario mensile corrente.|
|[CMonthCalCtrl:: GetCalendarGridInfo](#getcalendargridinfo)|Recupera le informazioni sul controllo calendario mensile corrente.|
|[CMonthCalCtrl:: getcalid](#getcalid)|Recupera l'identificatore del calendario per il controllo di calendario mensile corrente.|
|[CMonthCalCtrl:: GetColor](#getcolor)|Ottiene il colore di un'area specificata di un controllo di calendario mensile.|
|[CMonthCalCtrl:: GetCurrentView](#getcurrentview)|Recupera la visualizzazione attualmente visualizzata dal controllo calendario mensile corrente.|
|[CMonthCalCtrl:: GetCurSel](#getcursel)|Recupera l'ora di sistema come indicato dalla data attualmente selezionata.|
|[CMonthCalCtrl:: GetFirstDayOfWeek](#getfirstdayofweek)|Ottiene il primo giorno della settimana da visualizzare nella colonna più a sinistra del calendario.|
|[CMonthCalCtrl:: GetMaxSelCount](#getmaxselcount)|Recupera il numero massimo di giorni corrente che può essere selezionato in un controllo di calendario mensile.|
|[CMonthCalCtrl:: GetMaxTodayWidth](#getmaxtodaywidth)|Recupera la larghezza massima della stringa "Today" per il controllo di calendario mensile corrente.|
|[CMonthCalCtrl:: GetMinReqRect](#getminreqrect)|Recupera le dimensioni minime necessarie per mostrare un mese intero in un controllo di calendario mensile.|
|[CMonthCalCtrl:: GetMonthDelta](#getmonthdelta)|Recupera la velocità di scorrimento per un controllo di calendario mensile.|
|[CMonthCalCtrl:: GetMonthRange](#getmonthrange)|Recupera le informazioni sulla data che rappresentano i limiti massimo e minimo della visualizzazione di un controllo di calendario mensile.|
|[CMonthCalCtrl:: GetRange](#getrange)|Recupera le date minime e massime correnti impostate in un controllo di calendario mensile.|
|[CMonthCalCtrl:: GetSelRange](#getselrange)|Recupera le informazioni sulla data che rappresentano i limiti superiore e inferiore dell'intervallo di date attualmente selezionato dall'utente.|
|[CMonthCalCtrl:: GetToday](#gettoday)|Recupera le informazioni sulla data per la data specificata come "Today" per un controllo di calendario mensile.|
|[CMonthCalCtrl:: HitTest](#hittest)|Determina quale sezione di un controllo calendario mensile si trova in un determinato punto sullo schermo.|
|[CMonthCalCtrl:: IsCenturyView](#iscenturyview)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione secolo.|
|[CMonthCalCtrl:: IsDecadeView](#isdecadeview)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione decennio.|
|[CMonthCalCtrl:: IsMonthView](#ismonthview)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione mese.|
|[CMonthCalCtrl:: IsYearView](#isyearview)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione anno.|
|[CMonthCalCtrl:: SetCalendarBorder](#setcalendarborder)|Imposta la larghezza del bordo del controllo calendario mensile corrente.|
|[CMonthCalCtrl:: SetCalendarBorderDefault](#setcalendarborderdefault)|Imposta la larghezza predefinita del bordo del controllo calendario mensile corrente.|
|[CMonthCalCtrl:: tocalid](#setcalid)|Imposta l'identificatore del calendario per il controllo di calendario mensile corrente.|
|[CMonthCalCtrl:: SetCenturyView](#setcenturyview)|Imposta il controllo calendario mensile corrente per visualizzare la visualizzazione secolo.|
|[CMonthCalCtrl:: ToColor](#setcolor)|Imposta il colore di un'area specificata di un controllo di calendario mensile.|
|[CMonthCalCtrl:: SetCurrentView](#setcurrentview)|Imposta il controllo calendario mensile corrente per visualizzare la visualizzazione specificata.|
|[CMonthCalCtrl:: CurSel](#setcursel)|Imposta la data attualmente selezionata per un controllo di calendario mensile.|
|[CMonthCalCtrl:: SetDayState](#setdaystate)|Imposta la visualizzazione per i giorni in un controllo di calendario mensile.|
|[CMonthCalCtrl:: SetDecadeView](#setdecadeview)|Imposta il controllo calendario mensile corrente sulla visualizzazione decennio.|
|[CMonthCalCtrl:: SetFirstDayOfWeek](#setfirstdayofweek)|Imposta il giorno della settimana da visualizzare nella colonna più a sinistra del calendario.|
|[CMonthCalCtrl:: SetMaxSelCount](#setmaxselcount)|Imposta il numero massimo di giorni che possono essere selezionati in un controllo di calendario mensile.|
|[CMonthCalCtrl:: SetMonthDelta](#setmonthdelta)|Imposta la velocità di scorrimento per un controllo di calendario mensile.|
|[CMonthCalCtrl:: SetMonthView](#setmonthview)|Imposta il controllo calendario mensile corrente per visualizzare la visualizzazione mese.|
|[CMonthCalCtrl:: SetRange](#setrange)|Imposta le date minime e massime consentite per un controllo di calendario mensile.|
|[CMonthCalCtrl:: SetSelRange](#setselrange)|Imposta la selezione per un controllo di calendario mensile su un intervallo di date specificato.|
|[CMonthCalCtrl:: seoggi](#settoday)|Imposta il controllo Calendar per il giorno corrente.|
|[CMonthCalCtrl:: SetYearView](#setyearview)|Imposta il controllo calendario mensile corrente sulla visualizzazione anno.|
|[CMonthCalCtrl:: SizeMinReq](#sizeminreq)|Consente di ridisegnare il controllo di calendario mensile con la dimensione minima di un mese.|
|[CMonthCalCtrl:: SizeRectToMin](#sizerecttomin)|Per il controllo calendario mensile corrente, calcola il rettangolo più piccolo che può contenere tutti i calendari che rientrano in un rettangolo specificato.|

## <a name="remarks"></a>Osservazioni

Il controllo calendario mensile fornisce all'utente una semplice interfaccia del calendario dalla quale l'utente può selezionare una data. L'utente può modificare la visualizzazione in base a quanto segue:

- Scorrimento a ritroso e in avanti, dal mese al mese.

- Fare clic sul testo odierno per visualizzare il giorno corrente (se lo stile del MCS_NOTODAY non viene usato).

- Selezionare un mese o un anno da un menu a comparsa.

È possibile personalizzare il controllo di calendario mensile applicando un'ampia gamma di stili all'oggetto quando viene creato. Questi stili sono descritti negli [stili del controllo calendario mensile](/windows/win32/Controls/month-calendar-control-styles) nel Windows SDK.

Il controllo calendario mensile può visualizzare più di un mese e può indicare giorni speciali, ad esempio festivi, in grassetto la data.

Per ulteriori informazioni sull'utilizzo del controllo calendario mensile, vedere [utilizzo di CMonthCalCtrl](../../mfc/using-cmonthcalctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CMonthCalCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDTCTL. h

##  <a name="cmonthcalctrl"></a>CMonthCalCtrl:: CMonthCalCtrl

Costruisce un oggetto `CMonthCalCtrl`.

```
CMonthCalCtrl();
```

### <a name="remarks"></a>Osservazioni

È necessario chiamare `Create` dopo la costruzione dell'oggetto.

##  <a name="create"></a>CMonthCalCtrl:: create

Crea un controllo calendario mensile e lo connette all'oggetto `CMonthCalCtrl`.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);

virtual BOOL Create(
    DWORD dwStyle,
    const POINT& pt,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica la combinazione di stili di Windows applicati al controllo calendario mensile. Per ulteriori informazioni sugli stili, vedere [stili del controllo calendario mensile](/windows/win32/Controls/month-calendar-control-styles) nel Windows SDK.

*rect*<br/>
Riferimento a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) . Contiene la posizione e le dimensioni del controllo calendario mensile.

*pt*<br/>
Riferimento a una struttura [Point](/previous-versions/dd162805\(v=vs.85\)) che identifica la posizione del controllo calendario mensile.

*pParentWnd*<br/>
Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che rappresenta la finestra padre del controllo calendario mensile. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo di calendario mensile.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Creare un controllo calendario mensile in due passaggi:

1. Chiamare [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md) per costruire un oggetto `CMonthCalCtrl`.

1. Chiamare questa funzione membro, che crea un controllo calendario mensile e lo collega all'oggetto `CMonthCalCtrl`.

Quando si chiama `Create`, i controlli comuni vengono inizializzati. La versione di `Create` chiamata determina la modalità di ridimensionamento:

- Per fare in modo che MFC ridimensiona automaticamente il controllo in un mese, chiamare la sostituzione che usa il parametro *PT* .

- Per dimensionare autonomamente il controllo, chiamare l'override di questa funzione che usa il parametro *Rect* .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#1](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_1.cpp)]

##  <a name="getcalendarborder"></a>CMonthCalCtrl:: GetCalendarBorder

Recupera la larghezza del bordo del controllo calendario mensile corrente.

```
int GetCalendarBorder() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza del bordo del controllo, in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [MCM_GETCALENDARBORDER](/windows/win32/Controls/mcm-getcalendarborder) , descritto nel Windows SDK.

##  <a name="getcalendarcount"></a>CMonthCalCtrl:: GetCalendarCount

Recupera il numero di calendari visualizzati nel controllo calendario mensile corrente.

```
int GetCalendarCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di calendari attualmente visualizzati nel controllo di calendario mensile. Il numero massimo consentito di calendari è 12.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [MCM_GETCALENDARCOUNT](/windows/win32/Controls/mcm-getcalendarcount) , descritto nel Windows SDK.

##  <a name="getcalendargridinfo"></a>CMonthCalCtrl:: GetCalendarGridInfo

Recupera le informazioni sul controllo calendario mensile corrente.

```
BOOL GetCalendarGridInfo(PMCGRIDINFO pmcGridInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pmcGridInfo*|out Puntatore a una struttura [MCGRIDINFO](/windows/win32/api/commctrl/ns-commctrl-mcgridinfo) che riceve informazioni sul controllo calendario mensile corrente. Il chiamante è responsabile dell'allocazione e dell'inizializzazione di questa struttura.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [MCM_GETCALENDARGRIDINFO](/windows/win32/Controls/mcm-getcalendargridinfo) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_monthCalCtrl`, utilizzata per accedere a livello di codice al controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene usato il metodo `GetCalendarGridInfo` per recuperare la data di calendario visualizzata dal controllo calendario mensile corrente.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_3.cpp)]

##  <a name="getcalid"></a>CMonthCalCtrl:: getcalid

Recupera l'identificatore del calendario per il controllo di calendario mensile corrente.

```
CALID GetCalID() const;
```

### <a name="return-value"></a>Valore restituito

Una delle costanti dell' [identificatore del calendario](/windows/win32/Intl/calendar-identifiers) .

### <a name="remarks"></a>Osservazioni

Un identificatore di calendario indica un calendario specifico dell'area, ad esempio i calendari Gregorian (localizzato), giapponese o Hijri. L'applicazione può usare un identificatore di calendario con varie funzioni di supporto del linguaggio.

Questo metodo invia il messaggio di [MCM_GETCALID](/windows/win32/Controls/mcm-getcalid) , descritto nel Windows SDK.

##  <a name="getcolor"></a>CMonthCalCtrl:: GetColor

Recupera il colore di un'area del controllo calendario mensile specificato da *nRegion*.

```
COLORREF GetColor(int nRegion) const;
```

### <a name="parameters"></a>Parametri

*nRegion*<br/>
Area del controllo calendario mensile da cui viene recuperato il colore. Per un elenco di valori, vedere il parametro *nRegion* di [Secolor](#setcolor).

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che specifica il colore associato alla parte del controllo calendario mensile, se ha esito positivo. In caso contrario, la funzione membro restituisce-1.

##  <a name="getcurrentview"></a>CMonthCalCtrl:: GetCurrentView

Recupera la visualizzazione attualmente visualizzata dal controllo calendario mensile corrente.

```
DWORD GetCurrentView() const;
```

### <a name="return-value"></a>Valore restituito

Visualizzazione corrente, indicata da uno dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|MCMV_MONTH|Visualizzazione mensile|
|MCMV_YEAR|Visualizzazione annuale|
|MCMV_DECADE|Visualizzazione decennio|
|MCMV_CENTURY|Visualizzazione secolo|

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [MCM_GETCURRENTVIEW](/windows/win32/Controls/mcm-getcurrentview) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_monthCalCtrl`, utilizzata per accedere a livello di codice al controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene illustrata la visualizzazione del controllo calendario mensile attualmente visualizzato.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#7](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_4.cpp)]

##  <a name="getcursel"></a>CMonthCalCtrl:: GetCurSel

Recupera l'ora di sistema come indicato dalla data attualmente selezionata.

```
BOOL GetCurSel(COleDateTime& refDateTime) const;  BOOL GetCurSel(CTime& refDateTime) const;

BOOL GetCurSel(LPSYSTEMTIME pDateTime) const;
```

### <a name="parameters"></a>Parametri

*refDateTime*<br/>
Riferimento a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) o a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) . Riceve l'ora corrente.

*pDateTime*<br/>
Puntatore a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che riceverà le informazioni sulla data attualmente selezionate. Questo parametro deve essere un indirizzo valido e non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; otherwize 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_GETCURSEL](/windows/win32/Controls/mcm-getcursel)del messaggio Win32, come descritto nel Windows SDK.

> [!NOTE]
>  Questa funzione membro ha esito negativo se è impostato lo stile MCS_MULTISELECT.

Nell'implementazione di MFC di `GetCurSel`, è possibile specificare un utilizzo `COleDateTime`, un utilizzo `CTime` o un utilizzo della struttura `SYSTEMTIME`.

##  <a name="getfirstdayofweek"></a>CMonthCalCtrl:: GetFirstDayOfWeek

Ottiene il primo giorno della settimana da visualizzare nella colonna più a sinistra del calendario.

```
int GetFirstDayOfWeek(BOOL* pbLocal = NULL) const;
```

### <a name="parameters"></a>Parametri

*pbLocal*<br/>
Puntatore a un valore BOOL. Se il valore è diverso da zero, l'impostazione del controllo non corrisponde a quella nel pannello di controllo.

### <a name="return-value"></a>Valore restituito

Valore intero che rappresenta il primo giorno della settimana. Per ulteriori informazioni su ciò che rappresentano questi valori integer, vedere la **sezione Osservazioni** .

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_GETFIRSTDAYOFWEEK](/windows/win32/Controls/mcm-getfirstdayofweek)del messaggio Win32, come descritto nel Windows SDK. I giorni della settimana sono rappresentati come numeri interi, come indicato di seguito.

|valore|Giorno della settimana|
|-----------|---------------------|
|0|Monday|
|1|Tuesday|
|2|Wednesday|
|3|Thursday|
|4|Friday|
|5|Sabato|
|6|Sunday|

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMonthCalCtrl:: setFirstDayOfWeek](#setfirstdayofweek).

##  <a name="getmaxselcount"></a>CMonthCalCtrl:: GetMaxSelCount

Recupera il numero massimo di giorni corrente che può essere selezionato in un controllo di calendario mensile.

```
int GetMaxSelCount() const;
```

### <a name="return-value"></a>Valore restituito

Valore intero che rappresenta il numero totale di giorni che è possibile selezionare per il controllo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_GETMAXSELCOUNT](/windows/win32/Controls/mcm-getmaxselcount)del messaggio Win32, come descritto nel Windows SDK. Usare questa funzione membro per i controlli con il set di stili MCS_MULTISELECT.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMonthCalCtrl:: SetMaxSelCount](#setmaxselcount).

##  <a name="getmaxtodaywidth"></a>CMonthCalCtrl:: GetMaxTodayWidth

Recupera la larghezza massima della stringa "Today" per il controllo di calendario mensile corrente.

```
DWORD GetMaxTodayWidth() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza in pixel della stringa "Today".

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_monthCalCtrl`, utilizzata per accedere a livello di codice al controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene illustrato il metodo `GetMaxTodayWidth`.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_5.cpp)]

### <a name="remarks"></a>Osservazioni

L'utente può tornare alla data corrente facendo clic sulla stringa "Today", che viene visualizzata nella parte inferiore del controllo calendario mensile. La stringa "Today" include il testo dell'etichetta e il testo della data.

Questo metodo invia il messaggio di [MCM_GETMAXTODAYWIDTH](/windows/win32/Controls/mcm-getmaxtodaywidth) , descritto nel Windows SDK.

##  <a name="getminreqrect"></a>CMonthCalCtrl:: GetMinReqRect

Recupera le dimensioni minime necessarie per mostrare un mese intero in un controllo di calendario mensile.

```
BOOL GetMinReqRect(RECT* pRect) const;
```

### <a name="parameters"></a>Parametri

*pRect*<br/>
Puntatore a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che riceverà informazioni sul rettangolo di delimitazione. Questo parametro deve essere un indirizzo valido e non può essere NULL.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, questa funzione membro restituisce un valore diverso da zero e `lpRect` riceve le informazioni di delimitazione applicabili. Se ha esito negativo, la funzione membro restituisce 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_GETMINREQRECT](/windows/win32/Controls/mcm-getminreqrect)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="getmonthdelta"></a>CMonthCalCtrl:: GetMonthDelta

Recupera la velocità di scorrimento per un controllo di calendario mensile.

```
int GetMonthDelta() const;
```

### <a name="return-value"></a>Valore restituito

Velocità di scorrimento per il controllo di calendario mensile. La velocità di scorrimento indica il numero di mesi durante i quali il controllo sposta la visualizzazione quando l'utente fa clic su un pulsante di scorrimento una volta.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_GETMONTHDELTA](/windows/win32/Controls/mcm-getmonthdelta)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="getmonthrange"></a>CMonthCalCtrl:: GetMonthRange

Recupera le informazioni sulla data che rappresentano i limiti massimo e minimo della visualizzazione di un controllo di calendario mensile.

```
int GetMonthRange(
    COleDateTime& refMinRange,
    COleDateTime& refMaxRange,
    DWORD dwFlags) const;

int GetMonthRange(
    CTime& refMinRange,
    CTime& refMaxRange,
    DWORD dwFlags) const;

int GetMonthRange(
    LPSYSTEMTIME pMinRange,
    LPSYSTEMTIME pMaxRange,
    DWORD dwFlags) const;
```

### <a name="parameters"></a>Parametri

*refMinRange*<br/>
Riferimento a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) o [CTime](../../atl-mfc-shared/reference/ctime-class.md) contenente la data minima consentita.

*refMaxRange*<br/>
Riferimento a un oggetto `COleDateTime` o `CTime` che contiene la data massima consentita.

*pMinRange*<br/>
Puntatore a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) contenente la data all'estremità inferiore dell'intervallo.

*pMaxRange*<br/>
Puntatore a una struttura `SYSTEMTIME` contenente la data all'estremità superiore dell'intervallo.

*dwFlags*<br/>
Valore che specifica l'ambito dei limiti di intervallo da recuperare. Questo valore deve essere uno dei seguenti.

|valore|Significato|
|-----------|-------------|
|GMR_DAYSTATE|Includere i mesi precedenti e finali dell'intervallo visibile che vengono visualizzati solo parzialmente.|
|GMR_VISIBLE|Includere solo i mesi che vengono visualizzati interamente.|

### <a name="return-value"></a>Valore restituito

Intero che rappresenta l'intervallo, espresso in mesi, per i due limiti indicati da *refMinRange* e *refMaxRange* nella prima e nella seconda versione oppure *pMinRange* e *pMaxRange* nella terza versione.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_GETMONTHRANGE](/windows/win32/Controls/mcm-getmonthrange)del messaggio Win32, come descritto nel Windows SDK. Nell'implementazione di MFC di `GetMonthRange`, è possibile specificare `COleDateTime` utilizzo, un utilizzo `CTime` o un utilizzo della struttura `SYSTEMTIME`.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMonthCalCtrl:: SetDayState](#setdaystate).

##  <a name="getrange"></a>CMonthCalCtrl:: GetRange

Recupera le date minime e massime correnti impostate in un controllo di calendario mensile.

```
DWORD GetRange(
    COleDateTime* pMinRange,
    COleDateTime* pMaxRange) const;

DWORD GetRange(
    CTime* pMinRange,
    CTime* pMaxRange) const;

DWORD GetRange(
    LPSYSTEMTIME pMinRange,
    LPSYSTEMTIME pMaxRange) const;
```

### <a name="parameters"></a>Parametri

*pMinRange*<br/>
Puntatore a un oggetto `COleDateTime`, un oggetto `CTime` o una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) contenente la data all'estremità inferiore dell'intervallo.

*pMaxRange*<br/>
Puntatore a un oggetto `COleDateTime`, a un oggetto `CTime` o a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) contenente la data alla fine più alta dell'intervallo.

### <a name="return-value"></a>Valore restituito

Valore DWORD che può essere zero (nessun limite impostato) o una combinazione dei valori seguenti che specificano le informazioni sui limiti.

|valore|Significato|
|-----------|-------------|
|GDTR_MAX|Per il controllo è impostato un limite massimo. *pMaxRange* è valido e contiene le informazioni applicabili sulla data.|
|GDTR_MIN|È stato impostato un limite minimo per il controllo; *pMinRange* è valido e contiene le informazioni applicabili sulla data.|

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_GETRANGE](/windows/win32/Controls/mcm-getrange)del messaggio Win32, come descritto nel Windows SDK. Nell'implementazione di MFC di `GetRange`, è possibile specificare un utilizzo `COleDateTime`, un utilizzo `CTime` o un utilizzo della struttura `SYSTEMTIME`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#2](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_6.cpp)]

##  <a name="getselrange"></a>CMonthCalCtrl:: GetSelRange

Recupera le informazioni sulla data che rappresentano i limiti superiore e inferiore dell'intervallo di date attualmente selezionato dall'utente.

```
BOOL GetSelRange(
    COleDateTime& refMinRange,
    COleDateTime& refMaxRange) const;

BOOL GetSelRange(
    CTime& refMinRange,
    CTime& refMaxRange) const;

BOOL GetSelRange(
    LPSYSTEMTIME pMinRange,
    LPSYSTEMTIME pMaxRange) const;
```

### <a name="parameters"></a>Parametri

*refMinRange*<br/>
Riferimento a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) o [CTime](../../atl-mfc-shared/reference/ctime-class.md) contenente la data minima consentita.

*refMaxRange*<br/>
Riferimento a un oggetto `COleDateTime` o `CTime` che contiene la data massima consentita.

*pMinRange*<br/>
Puntatore a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) contenente la data all'estremità inferiore dell'intervallo.

*pMaxRange*<br/>
Puntatore a una struttura `SYSTEMTIME` contenente la data all'estremità superiore dell'intervallo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_GETSELRANGE](/windows/win32/Controls/mcm-getselrange)del messaggio Win32, come descritto nel Windows SDK. `GetSelRange` avrà esito negativo se applicato a un controllo calendario mensile che non usa lo stile MCS_MULTISELECT.

Nell'implementazione di MFC di `GetSelRange`, è possibile specificare `COleDateTime` utilizzo, un utilizzo `CTime` o un utilizzo della struttura `SYSTEMTIME`.

##  <a name="gettoday"></a>CMonthCalCtrl:: GetToday

Recupera le informazioni sulla data per la data specificata come "Today" per un controllo di calendario mensile.

```
BOOL GetToday(COleDateTime& refDateTime) const;  BOOL GetToday(COleDateTime& refDateTime) const;

BOOL GetToday(LPSYSTEMTIME pDateTime) const;
```

### <a name="parameters"></a>Parametri

*refDateTime*<br/>
Riferimento a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) o [CTime](../../atl-mfc-shared/reference/ctime-class.md) che indica il giorno corrente.

*pDateTime*<br/>
Puntatore a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che riceverà le informazioni sulla data. Questo parametro deve essere un indirizzo valido e non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_GETTODAY](/windows/win32/Controls/mcm-gettoday)del messaggio Win32, come descritto nel Windows SDK. Nell'implementazione di MFC di `GetToday`, è possibile specificare un utilizzo `COleDateTime`, un utilizzo `CTime` o un utilizzo della struttura `SYSTEMTIME`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#3](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_7.cpp)]

##  <a name="hittest"></a>CMonthCalCtrl:: HitTest

Determina quale controllo di calendario mensile, se presente, si trova in una posizione specificata.

```
DWORD HitTest(PMCHITTESTINFO pMCHitTest);
```

### <a name="parameters"></a>Parametri

*pMCHitTest*<br/>
Puntatore a una struttura [MCHITTESTINFO](/windows/win32/api/commctrl/ns-commctrl-mchittestinfo) contenente i punti di hit testing per il controllo di calendario mensile.

### <a name="return-value"></a>Valore restituito

Valore DWORD. Uguale al membro **uhit** della struttura `MCHITTESTINFO`.

### <a name="remarks"></a>Osservazioni

`HitTest` usa la struttura `MCHITTESTINFO`, che contiene informazioni sull'hit test.

##  <a name="iscenturyview"></a>CMonthCalCtrl:: IsCenturyView

Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione secolo.

```
BOOL IsCenturyView() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione corrente è la visualizzazione del secolo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [MCM_GETCURRENTVIEW](/windows/win32/Controls/mcm-getcurrentview) , descritto nel Windows SDK. Se il messaggio restituisce MCMV_CENTURY, questo metodo restituisce TRUE.

##  <a name="isdecadeview"></a>CMonthCalCtrl:: IsDecadeView

Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione decennio.

```
BOOL IsDecadeView() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione corrente è la visualizzazione decennio; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [MCM_GETCURRENTVIEW](/windows/win32/Controls/mcm-getcurrentview) , descritto nel Windows SDK. Se il messaggio restituisce MCMV_DECADE, questo metodo restituisce TRUE.

##  <a name="ismonthview"></a>CMonthCalCtrl:: IsMonthView

Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione mese.

```
BOOL IsMonthView() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione corrente è la visualizzazione del mese; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [MCM_GETCURRENTVIEW](/windows/win32/Controls/mcm-getcurrentview) , descritto nel Windows SDK. Se il messaggio restituisce MCMV_MONTH, questo metodo restituisce TRUE.

##  <a name="isyearview"></a>CMonthCalCtrl:: IsYearView

Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione anno.

```
BOOL IsYearView() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione corrente è la visualizzazione dell'anno. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [MCM_GETCURRENTVIEW](/windows/win32/Controls/mcm-getcurrentview) , descritto nel Windows SDK. Se il messaggio restituisce MCMV_YEAR, questo metodo restituisce TRUE.

##  <a name="setcalendarborder"></a>CMonthCalCtrl:: SetCalendarBorder

Imposta la larghezza del bordo del controllo calendario mensile corrente.

```
void SetCalendarBorder(int cxyBorder);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*cxyBorder*|in Larghezza, in pixel, del bordo.|

### <a name="remarks"></a>Osservazioni

Se questo metodo ha esito positivo, lo spessore del bordo viene impostato sul parametro *cxyBorder* . In caso contrario, la larghezza del bordo viene reimpostata sul valore predefinito specificato dal [tema](/windows/win32/Controls/visual-styles-overview)corrente oppure su zero se i temi non vengono utilizzati.

Questo metodo invia il messaggio di [MCM_SETCALENDARBORDER](/windows/win32/Controls/mcm-setcalendarborder) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_monthCalCtrl`, utilizzata per accedere a livello di codice al controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene impostata la larghezza del bordo del controllo calendario mensile su otto pixel. Usare il metodo [CMonthCalCtrl:: GetCalendarBorder](#getcalendarborder) per determinare se il metodo è riuscito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#6](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_8.cpp)]

##  <a name="setcalendarborderdefault"></a>CMonthCalCtrl:: SetCalendarBorderDefault

Imposta la larghezza predefinita del bordo del controllo calendario mensile corrente.

```
void SetCalendarBorderDefault();
```

### <a name="remarks"></a>Osservazioni

Lo spessore del bordo è impostato sul valore predefinito specificato dal [tema](/windows/win32/Controls/visual-styles-overview)corrente oppure su zero se i temi non vengono usati.

Questo metodo invia il messaggio di [MCM_SETCALENDARBORDER](/windows/win32/Controls/mcm-setcalendarborder) , descritto nel Windows SDK.

##  <a name="setcalid"></a>CMonthCalCtrl:: tocalid

Imposta l'identificatore del calendario per il controllo di calendario mensile corrente.

```
BOOL SetCalID(CALID calid);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*CALID*|in Una delle costanti dell' [identificatore del calendario](/windows/win32/Intl/calendar-identifiers) .|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Un identificatore di calendario specifica un calendario specifico dell'area, ad esempio i calendari Gregorian (localizzato), giapponese o Hijri. Usare il metodo `SetCalID` per visualizzare un calendario specificato dal parametro *CALID* se le impostazioni locali che contengono il calendario sono installate nel computer.

Questo metodo invia il messaggio di [MCM_SETCALID](/windows/win32/Controls/mcm-setcalid) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_monthCalCtrl`, utilizzata per accedere a livello di codice al controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene impostato il controllo di calendario mensile per visualizzare il calendario dell'imperatore giapponese. Il metodo `SetCalID` ha esito positivo solo se il calendario è installato nel computer.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_9.cpp)]

##  <a name="setcenturyview"></a>CMonthCalCtrl:: SetCenturyView

Imposta il controllo calendario mensile corrente per visualizzare la visualizzazione secolo.

```
BOOL SetCenturyView();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo usa il metodo [CMonthCalCtrl:: SetCurrentView](#setcurrentview) per impostare la visualizzazione su `MCMV_CENTURY`, che rappresenta la visualizzazione secolo.

##  <a name="setcolor"></a>CMonthCalCtrl:: ToColor

Imposta il colore di un'area specificata di un controllo di calendario mensile.

```
COLORREF SetColor(
    int nRegion,
    COLORREF ref);
```

### <a name="parameters"></a>Parametri

*nRegion*<br/>
Valore integer che specifica il colore del calendario mensile da impostare. Il valore può essere uno dei seguenti.

|valore|Significato|
|-----------|-------------|
|MCSC_BACKGROUND|Il colore di sfondo visualizzato tra i mesi.|
|MCSC_MONTHBK|Il colore di sfondo visualizzato nel mese.|
|MCSC_TEXT|Colore utilizzato per visualizzare il testo all'interno di un mese.|
|MCSC_TITLEBK|Il colore di sfondo visualizzato nel titolo del calendario.|
|MCSC_TITLETEXT|Colore utilizzato per visualizzare il testo all'interno del titolo del calendario.|
|MCSC_TRAILINGTEXT|Colore utilizzato per visualizzare il testo dell'intestazione e del giorno finale. Le intestazioni e i giorni finali sono i giorni dei mesi precedenti e successivi visualizzati nel calendario corrente.|

*ref*<br/>
Valore COLORREF per la nuova impostazione del colore per la parte specificata del controllo calendario mensile.

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta l'impostazione del colore precedente per la parte specificata del controllo calendario mensile, se ha esito positivo. In caso contrario, il messaggio restituisce-1.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_SETCOLOR](/windows/win32/Controls/mcm-setcolor)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#4](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_10.cpp)]

##  <a name="setcurrentview"></a>CMonthCalCtrl:: SetCurrentView

Imposta il controllo calendario mensile corrente per visualizzare la visualizzazione specificata.

```
BOOL SetCurrentView(DWORD dwNewView);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwNewView*|in Uno dei valori seguenti che specifica una vista mensile, annuale, decade o secolo.<br /><br /> MCMV_MONTH: visualizzazione mensile<br /><br /> MCMV_YEAR: visualizzazione annuale<br /><br /> MCMV_DECADE: visualizzazione decennio<br /><br /> MCMV_CENTURY: visualizzazione secolo|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [MCM_SETCURRENTVIEW](/windows/win32/Controls/mcm-setcurrentview) , descritto nel Windows SDK.

##  <a name="setcursel"></a>CMonthCalCtrl:: CurSel

Imposta la data attualmente selezionata per un controllo di calendario mensile.

```
BOOL SetCurSel(const COleDateTime& refDateTime);
BOOL SetCurSel(const CTime& refDateTime);
BOOL SetCurSel(const LPSYSTEMTIME pDateTime);
```

### <a name="parameters"></a>Parametri

*refDateTime*<br/>
Riferimento a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) o [CTime](../../atl-mfc-shared/reference/ctime-class.md) che indica il controllo di calendario mensile attualmente selezionato.

*pDateTime*<br/>
Puntatore a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che contiene la data da impostare come selezione corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_SETCURSEL](/windows/win32/Controls/mcm-setcursel)del messaggio Win32, come descritto nel Windows SDK. Nell'implementazione di MFC di `SetCurSel`, è possibile specificare un utilizzo `COleDateTime`, un utilizzo `CTime` o un utilizzo della struttura `SYSTEMTIME`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#5](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_11.cpp)]

##  <a name="setdaystate"></a>CMonthCalCtrl:: SetDayState

Imposta la visualizzazione per i giorni in un controllo di calendario mensile.

```
BOOL SetDayState(
    int nMonths,
    LPMONTHDAYSTATE pStates);
```

### <a name="parameters"></a>Parametri

*nMonths*<br/>
Valore che indica il numero di elementi nella matrice a cui punta *pStates* .

*pStates*<br/>
Puntatore a una matrice [MONTHDAYSTATE](/windows/win32/Controls/monthdaystate) di valori che definiscono il modo in cui il controllo calendario mensile trarrà ogni giorno nella visualizzazione. Il tipo di dati MONTHDAYSTATE è un campo di bit, dove ogni bit (da 1 a 31) rappresenta lo stato di un giorno in un mese. Se un bit è acceso, il giorno corrispondente verrà visualizzato in grassetto. in caso contrario, verrà visualizzato senza enfasi.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_SETDAYSTATE](/windows/win32/Controls/mcm-setdaystate)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#6](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_12.cpp)]

##  <a name="setdecadeview"></a>CMonthCalCtrl:: SetDecadeView

Imposta il controllo calendario mensile corrente sulla visualizzazione decennio.

```
BOOL SetDecadeView();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo usa il metodo [CMonthCalCtrl:: SetCurrentView](#setcurrentview) per impostare la visualizzazione su `MCMV_DECADE`, che rappresenta la visualizzazione decade.

##  <a name="setfirstdayofweek"></a>CMonthCalCtrl:: SetFirstDayOfWeek

Imposta il giorno della settimana da visualizzare nella colonna più a sinistra del calendario.

```
BOOL SetFirstDayOfWeek(
    int iDay,
    int* lpnOld = NULL);
```

### <a name="parameters"></a>Parametri

*iDay*<br/>
Valore intero che rappresenta il giorno da impostare come primo giorno della settimana. Questo valore deve essere uno dei numeri di giorno. Per una descrizione dei numeri di giorno, vedere [GetFirstDayOfWeek](#getfirstdayofweek) .

*lpnOld*<br/>
Puntatore a un intero che indica il primo giorno della settimana impostato in precedenza.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il primo giorno della settimana precedente è impostato su un valore diverso da quello di LOCALE_IFIRSTDAYOFWEEK, ovvero il giorno indicato nell'impostazione del pannello di controllo. In caso contrario, la funzione restituisce 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_SETFIRSTDAYOFWEEK](/windows/win32/Controls/mcm-setfirstdayofweek)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#7](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_13.cpp)]

##  <a name="setmaxselcount"></a>CMonthCalCtrl:: SetMaxSelCount

Imposta il numero massimo di giorni che possono essere selezionati in un controllo di calendario mensile.

```
BOOL SetMaxSelCount(int nMax);
```

### <a name="parameters"></a>Parametri

*nMax*<br/>
Valore che verrà impostato per rappresentare il numero massimo di giorni selezionabili.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_SETMAXSELCOUNT](/windows/win32/Controls/mcm-setmaxselcount)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#8](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_14.cpp)]

##  <a name="setmonthdelta"></a>CMonthCalCtrl:: SetMonthDelta

Imposta la velocità di scorrimento per un controllo di calendario mensile.

```
int SetMonthDelta(int iDelta);
```

### <a name="parameters"></a>Parametri

*Oggetto IDelta*<br/>
Numero di mesi da impostare come velocità di scorrimento del controllo. Se questo valore è zero, il Delta del mese viene reimpostato sul valore predefinito, ovvero sul numero di mesi visualizzato nel controllo.

### <a name="return-value"></a>Valore restituito

Velocità di scorrimento precedente. Se la frequenza di scorrimento non è stata impostata in precedenza, il valore restituito è 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_SETMONTHDELTA](/windows/win32/Controls/mcm-setmonthdelta)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="setmonthview"></a>CMonthCalCtrl:: SetMonthView

Imposta il controllo calendario mensile corrente per visualizzare la visualizzazione mese.

```
BOOL SetMonthView();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo usa il metodo [CMonthCalCtrl:: SetCurrentView](#setcurrentview) per impostare la visualizzazione su MCMV_MONTH, che rappresenta la visualizzazione month.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_monthCalCtrl`, utilizzata per accedere a livello di codice al controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene impostato il controllo di calendario mensile per visualizzare le visualizzazioni month, year, decade e Century.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_15.cpp)]

##  <a name="setrange"></a>CMonthCalCtrl:: SetRange

Imposta le date minime e massime consentite per un controllo di calendario mensile.

```
BOOL SetRange(
    const COleDateTime* pMinRange,
    const COleDateTime* pMaxRange);

BOOL SetRange(
    const CTime* pMinRange,
    const CTime* pMaxRange);

BOOL SetRange(
    const LPSYSTEMTIME pMinRange,
    const LPSYSTEMTIME pMaxRange);
```

### <a name="parameters"></a>Parametri

*pMinRange*<br/>
Puntatore a un oggetto `COleDateTime`, un oggetto `CTime` o una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) contenente la data all'estremità inferiore dell'intervallo.

*pMaxRange*<br/>
Puntatore a un oggetto `COleDateTime`, a un oggetto `CTime` o a una struttura di `SYSTEMTIME` contenente la data alla fine più alta dell'intervallo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_SETRANGE](/windows/win32/Controls/mcm-setrange)del messaggio Win32, come descritto nel Windows SDK. Nell'implementazione di MFC di `SetRange`, è possibile specificare `COleDateTime` utilizzo, un utilizzo `CTime` o un utilizzo della struttura `SYSTEMTIME`.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMonthCalCtrl:: GetRange](#getrange).

##  <a name="setselrange"></a>CMonthCalCtrl:: SetSelRange

Imposta la selezione per un controllo di calendario mensile su un intervallo di date specificato.

```
BOOL SetSelRange(
    const COleDateTime& pMinRange,
    const COleDateTime& pMaxRange);

BOOL SetSelRange(
    const CTime& pMinRange,
    const CTime& pMaxRange);

BOOL SetSelRange(
    const LPSYSTEMTIME pMinRange,
    const LPSYSTEMTIME pMaxRange);
```

### <a name="parameters"></a>Parametri

*pMinRange*<br/>
Puntatore a un oggetto `COleDateTime`, un oggetto `CTime` o una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) contenente la data all'estremità inferiore dell'intervallo.

*pMaxRange*<br/>
Puntatore a un oggetto `COleDateTime`, a un oggetto `CTime` o a una struttura di `SYSTEMTIME` contenente la data alla fine più alta dell'intervallo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_SETSELRANGE](/windows/win32/Controls/mcm-setselrange)del messaggio Win32, come descritto nel Windows SDK. Nell'implementazione di MFC di `SetSelRange`, è possibile specificare `COleDateTime` utilizzo, un utilizzo `CTime` o un utilizzo della struttura `SYSTEMTIME`.

##  <a name="settoday"></a>CMonthCalCtrl:: seoggi

Imposta il controllo Calendar per il giorno corrente.

```
void SetToday(const COleDateTime& refDateTime);
void SetToday(const CTime* pDateTime);
void SetToday(const LPSYSTEMTIME pDateTime);
```

### <a name="parameters"></a>Parametri

*refDateTime*<br/>
Riferimento a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) che contiene la data corrente.

*pDateTime*<br/>
Nella seconda versione, un puntatore a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) contenente le informazioni sulla data corrente. Nella terza versione, un puntatore a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che contiene le informazioni sulla data corrente.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [MCM_SETTODAY](/windows/win32/Controls/mcm-settoday)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMonthCalCtrl:: GetToday](#gettoday).

##  <a name="setyearview"></a>CMonthCalCtrl:: SetYearView

Imposta il controllo calendario mensile corrente sulla visualizzazione anno.

```
BOOL SetYearView();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo usa il metodo [CMonthCalCtrl:: SetCurrentView](#setcurrentview) per impostare la visualizzazione su MCMV_YEAR, che rappresenta la visualizzazione annuale.

##  <a name="sizeminreq"></a>CMonthCalCtrl:: SizeMinReq

Visualizza il controllo di calendario mensile alla dimensione minima che visualizza un mese.

```
BOOL SizeMinReq(BOOL bRepaint = TRUE);
```

### <a name="parameters"></a>Parametri

*bRepaint*<br/>
Specifica se il controllo deve essere ridisegnato. Per impostazione predefinita, TRUE. Se FALSE, non viene eseguita alcuna operazione di ridisegno.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo di calendario mensile è dimensionato al minimo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

La chiamata di `SizeMinReq` Visualizza correttamente l'intero controllo di calendario mensile per il calendario di un mese.

##  <a name="sizerecttomin"></a>CMonthCalCtrl:: SizeRectToMin

Per il controllo calendario mensile corrente, calcola il rettangolo più piccolo che può contenere tutti i calendari che rientrano in un rettangolo specificato.

```
LPRECT SizeRectToMin(LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpRect*|in Puntatore a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che definisce un rettangolo che contiene il numero desiderato di calendari.|

### <a name="return-value"></a>Valore restituito

Puntatore a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che definisce un rettangolo la cui dimensione è minore o uguale al rettangolo definito dal parametro *lpRect* .

### <a name="remarks"></a>Osservazioni

Questo metodo calcola il numero di calendari che possono essere inseriti nel rettangolo specificato dal parametro *lpRect* , quindi restituisce il rettangolo più piccolo che può contenere tale numero di calendari. In effetti, questo metodo compatta il rettangolo specificato per adattarlo esattamente al numero desiderato di calendari.

Questo metodo invia il messaggio di [MCM_SIZERECTTOMIN](/windows/win32/Controls/mcm-sizerecttomin) , descritto nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[CMNCTRL1 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)
