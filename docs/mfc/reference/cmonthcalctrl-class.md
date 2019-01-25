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
ms.openlocfilehash: 48b02843cc957994aa3f3109a82cb2188dd9acff
ms.sourcegitcommit: c85c8a1226d8fbbaa29f4691ed719f8e6cc6575c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/24/2019
ms.locfileid: "54894198"
---
# <a name="cmonthcalctrl-class"></a>Classe CMonthCalCtrl

Incapsula la funzionalità di un controllo calendario mensile.

## <a name="syntax"></a>Sintassi

```
class CMonthCalCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMonthCalCtrl::CMonthCalCtrl](#cmonthcalctrl)|Costruisce un oggetto `CMonthCalCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMonthCalCtrl::Create](#create)|Crea un controllo calendario mensile e lo collega al `CMonthCalCtrl` oggetto.|
|[CMonthCalCtrl::GetCalendarBorder](#getcalendarborder)|Recupera la larghezza del bordo del controllo calendario mensile corrente.|
|[CMonthCalCtrl::GetCalendarCount](#getcalendarcount)|Recupera il numero dei calendari visualizzati nel controllo calendario mensile corrente.|
|[CMonthCalCtrl::GetCalendarGridInfo](#getcalendargridinfo)|Recupera le informazioni relative al controllo di calendario del mese corrente.|
|[CMonthCalCtrl::GetCalID](#getcalid)|Recupera l'identificatore di calendario per il controllo di calendario del mese corrente.|
|[CMonthCalCtrl::GetColor](#getcolor)|Ottiene il colore di un'area specificata di un controllo calendario mensile.|
|[CMonthCalCtrl::GetCurrentView](#getcurrentview)|Recupera la visualizzazione attualmente visualizzato dal controllo calendario mensile corrente.|
|[CMonthCalCtrl::GetCurSel](#getcursel)|Recupera l'ora di sistema come indicato dalla data attualmente selezionata.|
|[CMonthCalCtrl::GetFirstDayOfWeek](#getfirstdayofweek)|Ottiene il primo giorno della settimana da visualizzare nella colonna più a sinistra del calendario.|
|[CMonthCalCtrl::GetMaxSelCount](#getmaxselcount)|Recupera il numero massimo corrente di giorni che possono essere selezionati in un controllo calendario mensile.|
|[CMonthCalCtrl::GetMaxTodayWidth](#getmaxtodaywidth)|Recupera la larghezza massima della stringa "Today" per il controllo di calendario del mese corrente.|
|[CMonthCalCtrl::GetMinReqRect](#getminreqrect)|Recupera le dimensioni minime richieste per mostrare un mese intero in un controllo calendario mensile.|
|[CMonthCalCtrl::GetMonthDelta](#getmonthdelta)|Recupera il valore di scorrimento per un controllo calendario mensile.|
|[CMonthCalCtrl::GetMonthRange](#getmonthrange)|Recupera le informazioni che rappresenta i limiti massimo e minimo del mese del calendario la visualizzazione del controllo della data.|
|[CMonthCalCtrl::GetRange](#getrange)|Recupera le date di minime e massime correnti impostate in un controllo calendario mensile.|
|[CMonthCalCtrl::GetSelRange](#getselrange)|Recupera informazioni relative alla data che rappresenta i limiti superiori e inferiori dell'intervallo di date selezionato dall'utente.|
|[CMonthCalCtrl::GetToday](#gettoday)|Recupera le informazioni sulla data per la data specificata come "oggi" per un controllo calendario mensile.|
|[CMonthCalCtrl::HitTest](#hittest)|Determina la sezione di un controllo calendario mensile che si trova un punto specificato sullo schermo.|
|[CMonthCalCtrl::IsCenturyView](#iscenturyview)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione secolo.|
|[CMonthCalCtrl::IsDecadeView](#isdecadeview)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione di dieci anni.|
|[CMonthCalCtrl::IsMonthView](#ismonthview)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione di mese.|
|[CMonthCalCtrl::IsYearView](#isyearview)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione di year.|
|[CMonthCalCtrl::SetCalendarBorder](#setcalendarborder)|Imposta lo spessore del bordo del controllo calendario mensile corrente.|
|[CMonthCalCtrl::SetCalendarBorderDefault](#setcalendarborderdefault)|Imposta lo spessore predefinito del bordo del controllo calendario mensile corrente.|
|[CMonthCalCtrl::SetCalID](#setcalid)|Imposta l'identificatore di calendario per il controllo di calendario del mese corrente.|
|[CMonthCalCtrl::SetCenturyView](#setcenturyview)|Imposta il controllo di calendario del mese corrente per mostrare la visualizzazione secolo.|
|[CMonthCalCtrl::SetColor](#setcolor)|Imposta il colore di un'area specificata di un controllo calendario mensile.|
|[CMonthCalCtrl::SetCurrentView](#setcurrentview)|Imposta il controllo di calendario del mese corrente per visualizzare la visualizzazione specificata.|
|[CMonthCalCtrl::SetCurSel](#setcursel)|Imposta la data attualmente selezionata per un controllo calendario mensile.|
|[CMonthCalCtrl::SetDayState](#setdaystate)|Imposta la visualizzazione per i giorni in un controllo calendario mensile.|
|[CMonthCalCtrl::SetDecadeView](#setdecadeview)|Imposta controllo calendario del mese corrente per la visualizzazione di dieci anni.|
|[CMonthCalCtrl::SetFirstDayOfWeek](#setfirstdayofweek)|Imposta il giorno della settimana da visualizzare nella colonna più a sinistra del calendario.|
|[CMonthCalCtrl::SetMaxSelCount](#setmaxselcount)|Imposta il numero massimo di giorni che possono essere selezionati in un controllo calendario mensile.|
|[CMonthCalCtrl::SetMonthDelta](#setmonthdelta)|Imposta il valore di scorrimento per un controllo calendario mensile.|
|[CMonthCalCtrl::SetMonthView](#setmonthview)|Imposta il controllo di calendario del mese corrente per visualizzare la visualizzazione di mese.|
|[CMonthCalCtrl::SetRange](#setrange)|Imposta i valori minimo e massimo consentito di date per un controllo calendario mensile.|
|[CMonthCalCtrl::SetSelRange](#setselrange)|Imposta la selezione per un calendario mensile di controllo per un determinato intervallo di date.|
|[CMonthCalCtrl::SetToday](#settoday)|Imposta il controllo calendario per il giorno corrente.|
|[CMonthCalCtrl::SetYearView](#setyearview)|Imposta controllo calendario mensile corrente alla visualizzazione di anno.|
|[CMonthCalCtrl::SizeMinReq](#sizeminreq)|Ridisegna il controllo calendario mensile alla dimensione minima, un mese.|
|[CMonthCalCtrl::SizeRectToMin](#sizerecttomin)|Per il controllo di calendario del mese corrente, calcola il rettangolo più piccolo che può contenere tutti i calendari che rientrano in un rettangolo specificato.|

## <a name="remarks"></a>Note

Il controllo calendario mensile fornisce all'utente con un'interfaccia semplice calendario, da cui l'utente può selezionare una data. L'utente può modificare la visualizzazione da:

- Lo scorrimento all'indietro e Avanti, mese per mese.

- Fare clic sul testo di oggi per visualizzare il giorno corrente (se non viene utilizzato lo stile MCS_NOTODAY).

- Selezione di un mese o anno da un menu a comparsa.

È possibile personalizzare il mese di calendario controllo applicando un'ampia gamma di stili all'oggetto durante la creazione. Questi stili sono descritte nel [mese degli stili del controllo calendario](/windows/desktop/Controls/month-calendar-control-styles) nel SDK di Windows.

Il controllo calendario mensile può visualizzare più mesi, e può indicare giorni speciali (ad esempio, le festività) da mettere in grassetto della data.

Per altre informazioni sull'uso di controllo calendario mensile, vedere [CMonthCalCtrl usando](../../mfc/using-cmonthcalctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CMonthCalCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDTCTL

##  <a name="cmonthcalctrl"></a>  CMonthCalCtrl::CMonthCalCtrl

Costruisce un oggetto `CMonthCalCtrl`.

```
CMonthCalCtrl();
```

### <a name="remarks"></a>Note

È necessario chiamare `Create` dopo la creazione dell'oggetto.

##  <a name="create"></a>  CMonthCalCtrl::Create

Crea un controllo calendario mensile e lo collega al `CMonthCalCtrl` oggetto.

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
Specifica la combinazione degli stili di Windows applicata al controllo calendario mensile. Visualizzare [mese degli stili del controllo calendario](/windows/desktop/Controls/month-calendar-control-styles) nel SDK di Windows per altre informazioni sugli stili.

*rect*<br/>
Un riferimento a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura. Contiene la posizione e le dimensioni del controllo calendario mensile.

*pt*<br/>
Un riferimento a un [punto](https://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che identifica la posizione del controllo calendario mensile.

*pParentWnd*<br/>
Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto, ovvero la finestra padre del controllo calendario mensile. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo. del controllo calendario mensile

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Creazione di un mese di calendario controllo in due passaggi:

1. Chiamare [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md) per costruire un `CMonthCalCtrl` oggetto.

1. Chiamare questa funzione membro, che crea un controllo calendario mensile e lo collega al `CMonthCalCtrl` oggetto.

Quando si chiama `Create`, vengono inizializzati i controlli comuni. La versione di `Create` è chiamata determina modo in cui viene ridimensionato:

- Per ridimensionare automaticamente il controllo a un mese MFC, chiamare l'override che usa il *pt* parametro.

- Per ridimensionare il controllo, chiamare l'override di questa funzione che usa il *rect* parametro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#1](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_1.cpp)]

##  <a name="getcalendarborder"></a>  CMonthCalCtrl::GetCalendarBorder

Recupera la larghezza del bordo del controllo calendario mensile corrente.

```
int GetCalendarBorder() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza del bordo del controllo, in pixel.

### <a name="remarks"></a>Note

Questo metodo invia il [MCM_GETCALENDARBORDER](/windows/desktop/Controls/mcm-getcalendarborder) messaggio, che è descritti nel SDK di Windows.

##  <a name="getcalendarcount"></a>  CMonthCalCtrl::GetCalendarCount

Recupera il numero dei calendari visualizzati nel controllo calendario mensile corrente.

```
int GetCalendarCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di calendari attualmente visualizzato nel controllo calendario mensile. Il numero massimo consentito di calendari è 12.

### <a name="remarks"></a>Note

Questo metodo invia il [MCM_GETCALENDARCOUNT](/windows/desktop/Controls/mcm-getcalendarcount) messaggio, che è descritti nel SDK di Windows.

##  <a name="getcalendargridinfo"></a>  CMonthCalCtrl::GetCalendarGridInfo

Recupera le informazioni relative al controllo di calendario del mese corrente.

```
BOOL GetCalendarGridInfo(PMCGRIDINFO pmcGridInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pmcGridInfo*|[out] Puntatore a un [MCGRIDINFO](/windows/desktop/api/commctrl/ns-commctrl-tagmcgridinfo) struttura che riceve informazioni relative al controllo di calendario del mese corrente. Il chiamante è responsabile dell'allocazione e l'inizializzazione di questa struttura.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [MCM_GETCALENDARGRIDINFO](/windows/desktop/Controls/mcm-getcalendargridinfo) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile `m_monthCalCtrl`, che viene usato per accedere a livello di codice il controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

Il codice seguente viene illustrato come utilizzare il `GetCalendarGridInfo` metodo per recuperare la data di calendario che consente di visualizzare il controllo calendario mensile corrente.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_3.cpp)]

##  <a name="getcalid"></a>  CMonthCalCtrl::GetCalID

Recupera l'identificatore di calendario per il controllo di calendario del mese corrente.

```
CALID GetCalID() const;
```

### <a name="return-value"></a>Valore restituito

Uno dei [identificatore di calendario](/windows/desktop/Intl/calendar-identifiers) costanti.

### <a name="remarks"></a>Note

Un identificatore di calendario denota un calendario di aree specifiche, ad esempio il calendario gregoriano (localizzato), giapponese o Hijri calendari. L'applicazione può usare un identificatore di calendario con diversi linguaggi che supportano le funzioni.

Questo metodo invia il [MCM_GETCALID](/windows/desktop/Controls/mcm-getcalid) messaggio, che è descritti nel SDK di Windows.

##  <a name="getcolor"></a>  CMonthCalCtrl::GetColor

Recupera il colore di un'area del mese di calendario controllo specificato dalla *nRegion*.

```
COLORREF GetColor(int nRegion) const;
```

### <a name="parameters"></a>Parametri

*nRegion*<br/>
L'area del controllo calendario mensile da cui recuperare il colore. Per un elenco di valori, vedere la *nRegion* del parametro [SetColor](#setcolor).

### <a name="return-value"></a>Valore restituito

Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore che specifica il colore associato la parte del controllo calendario mensile, se ha esito positivo. In caso contrario, questa funzione membro restituisce -1.

##  <a name="getcurrentview"></a>  CMonthCalCtrl::GetCurrentView

Recupera la visualizzazione attualmente visualizzato dal controllo calendario mensile corrente.

```
DWORD GetCurrentView() const;
```

### <a name="return-value"></a>Valore restituito

La visualizzazione corrente è indicato da uno dei valori seguenti:

|Valore|Significato|
|-----------|-------------|
|MCMV_MONTH|Visualizzazione mensile|
|MCMV_YEAR|Visualizzazione annuale|
|MCMV_DECADE|Visualizzazione di dieci anni|
|MCMV_CENTURY|Visualizzazione di secolo|

### <a name="remarks"></a>Note

Questo metodo invia il [MCM_GETCURRENTVIEW](/windows/desktop/Controls/mcm-getcurrentview) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile `m_monthCalCtrl`, che viene usato per accedere a livello di codice il controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

I report di esempio di codice seguenti che consente di visualizzare il calendario mensile controllano attualmente visualizzato.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#7](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_4.cpp)]

##  <a name="getcursel"></a>  CMonthCalCtrl::GetCurSel

Recupera l'ora di sistema come indicato dalla data attualmente selezionata.

```
BOOL GetCurSel(COleDateTime& refDateTime) const;  BOOL GetCurSel(CTime& refDateTime) const;

BOOL GetCurSel(LPSYSTEMTIME pDateTime) const;
```

### <a name="parameters"></a>Parametri

*refDateTime*<br/>
Un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto o una [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto. Riceve l'ora corrente.

*pDateTime*<br/>
Un puntatore a un [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che riceverà le informazioni sulla data attualmente selezionata. Questo parametro deve essere un indirizzo valido e non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. otherwize 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_GETCURSEL](/windows/desktop/Controls/mcm-getcursel), come descritto nel SDK di Windows.

> [!NOTE]
>  Questa funzione membro non riesce se lo stile MCS_MULTISELECT è impostato.

Nell'implementazione di MFC di `GetCurSel`, è possibile specificare un `COleDateTime` utilizzo, un `CTime` utilizzo, o un `SYSTEMTIME` struttura sull'utilizzo.

##  <a name="getfirstdayofweek"></a>  CMonthCalCtrl::GetFirstDayOfWeek

Ottiene il primo giorno della settimana da visualizzare nella colonna più a sinistra del calendario.

```
int GetFirstDayOfWeek(BOOL* pbLocal = NULL) const;
```

### <a name="parameters"></a>Parametri

*pbLocal*<br/>
Puntatore a un valore BOOL. Se il valore è diverso da zero, impostazione del controllo non corrisponde all'impostazione del Pannello di controllo.

### <a name="return-value"></a>Valore restituito

Valore intero che rappresenta il primo giorno della settimana. Visualizzare **osservazioni** per altre informazioni su ciò che rappresentano i numeri interi.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_GETFIRSTDAYOFWEEK](/windows/desktop/Controls/mcm-getfirstdayofweek), come descritto nel SDK di Windows. I giorni della settimana sono rappresentati come numeri interi, come indicato di seguito.

|Value|Giorno della settimana|
|-----------|---------------------|
|0|Lunedì|
|1|Martedì|
|2|Mercoledì|
|3|Giovedì|
|4|Venerdì|
|5|Saturday|
|6|Domenica|

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMonthCalCtrl::SetFirstDayOfWeek](#setfirstdayofweek).

##  <a name="getmaxselcount"></a>  CMonthCalCtrl::GetMaxSelCount

Recupera il numero massimo corrente di giorni che possono essere selezionati in un controllo calendario mensile.

```
int GetMaxSelCount() const;
```

### <a name="return-value"></a>Valore restituito

Valore integer che rappresenta il numero totale di giorni che possono essere selezionati per il controllo.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_GETMAXSELCOUNT](/windows/desktop/Controls/mcm-getmaxselcount), come descritto nel SDK di Windows. Utilizzare questa funzione membro per i controlli con il set di stili MCS_MULTISELECT.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMonthCalCtrl::SetMaxSelCount](#setmaxselcount).

##  <a name="getmaxtodaywidth"></a>  CMonthCalCtrl::GetMaxTodayWidth

Recupera la larghezza massima della stringa "Today" per il controllo di calendario del mese corrente.

```
DWORD GetMaxTodayWidth() const;
```

### <a name="return-value"></a>Valore restituito

La larghezza della stringa "Oggi", in pixel.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile `m_monthCalCtrl`, che viene usato per accedere a livello di codice il controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

L'esempio di codice seguente illustra il `GetMaxTodayWidth` (metodo).

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_5.cpp)]

### <a name="remarks"></a>Note

L'utente può restituire la data corrente, fare clic sulla stringa "Oggi", che viene visualizzata nella parte inferiore del controllo calendario mensile. La stringa "Today" include i testo dell'etichetta e testo della data.

Questo metodo invia il [MCM_GETMAXTODAYWIDTH](/windows/desktop/Controls/mcm-getmaxtodaywidth) messaggio, che è descritti nel SDK di Windows.

##  <a name="getminreqrect"></a>  CMonthCalCtrl::GetMinReqRect

Recupera le dimensioni minime richieste per mostrare un mese intero in un controllo calendario mensile.

```
BOOL GetMinReqRect(RECT* pRect) const;
```

### <a name="parameters"></a>Parametri

*pRect*<br/>
Un puntatore a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceverà le informazioni rettangolo di delimitazione. Questo parametro deve essere un indirizzo valido e non può essere NULL.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, questa funzione membro restituisce diverso da zero e `lpRect` riceve le informazioni di delimitazione applicabile. In caso contrario, la funzione membro restituisce 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_GETMINREQRECT](/windows/desktop/Controls/mcm-getminreqrect), come descritto nel SDK di Windows.

##  <a name="getmonthdelta"></a>  CMonthCalCtrl::GetMonthDelta

Recupera il valore di scorrimento per un controllo calendario mensile.

```
int GetMonthDelta() const;
```

### <a name="return-value"></a>Valore restituito

Il valore di scorrimento per il controllo calendario mensile. Il valore di scorrimento è il numero di mesi che il controllo viene spostato la sua visualizzazione quando l'utente sceglie un pulsante di scorrimento di una volta.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_GETMONTHDELTA](/windows/desktop/Controls/mcm-getmonthdelta), come descritto nel SDK di Windows.

##  <a name="getmonthrange"></a>  CMonthCalCtrl::GetMonthRange

Recupera le informazioni che rappresenta i limiti massimo e minimo del mese del calendario la visualizzazione del controllo della data.

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
Un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oppure [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto contenente la data minima consentita.

*refMaxRange*<br/>
Un riferimento a un `COleDateTime` o `CTime` oggetto contenente la data massima consentita.

*pMinRange*<br/>
Un puntatore a un [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che contiene la data alla fine dell'intervallo più bassa.

*pMaxRange*<br/>
Un puntatore a un `SYSTEMTIME` struttura che contiene la data alla fine dell'intervallo più alto.

*dwFlags*<br/>
Valore che specifica l'ambito dei limiti di intervallo da recuperare. Questo valore deve essere uno dei seguenti.

|Value|Significato|
|-----------|-------------|
|GMR_DAYSTATE|Includere iniziali e finali mesi dell'intervallo visibile che vengono visualizzati solo parzialmente.|
|GMR_VISIBLE|Includere solo nei mesi visualizzati completamente.|

### <a name="return-value"></a>Valore restituito

Numero intero che rappresenta l'intervallo, in mesi, occupate da due limiti indicato dal *refMinRange* e *refMaxRange* nelle versioni di primo e secondo, o *pMinRange* e *pMaxRange* nella terza versione.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_GETMONTHRANGE](/windows/desktop/Controls/mcm-getmonthrange), come descritto nel SDK di Windows. Nell'implementazione di MFC di `GetMonthRange`, è possibile specificare `COleDateTime` utilizzo, un `CTime` utilizzo, o un `SYSTEMTIME` struttura sull'utilizzo.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [SetDayState](#setdaystate).

##  <a name="getrange"></a>  CMonthCalCtrl::GetRange

Recupera le date di minime e massime correnti impostate in un controllo calendario mensile.

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
Un puntatore a un `COleDateTime` oggetti, una `CTime` oggetto, o [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che contiene la data alla fine dell'intervallo più bassa.

*pMaxRange*<br/>
Un puntatore a un `COleDateTime` oggetti, una `CTime` oggetto, o [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che contiene la data alla fine dell'intervallo più alto.

### <a name="return-value"></a>Valore restituito

Un valore DWORD che può essere zero (limiti non sono impostati) o una combinazione dei valori seguenti che specificano le informazioni sul limite.

|Value|Significato|
|-----------|-------------|
|GDTR_MAX|È impostato un limite massimo per il controllo; *pMaxRange* sia valido e contiene le informazioni sulla data applicabile.|
|GDTR_MIN|Per il controllo; è impostato un limite minimo *pMinRange* sia valido e contiene le informazioni sulla data applicabile.|

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_GETRANGE](/windows/desktop/Controls/mcm-getrange), come descritto nel SDK di Windows. Nell'implementazione di MFC di `GetRange`, è possibile specificare un `COleDateTime` utilizzo, un `CTime` utilizzo, o un `SYSTEMTIME` struttura sull'utilizzo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#2](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_6.cpp)]

##  <a name="getselrange"></a>  CMonthCalCtrl::GetSelRange

Recupera informazioni relative alla data che rappresenta i limiti superiori e inferiori dell'intervallo di date selezionato dall'utente.

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
Un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oppure [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto contenente la data minima consentita.

*refMaxRange*<br/>
Un riferimento a un `COleDateTime` o `CTime` oggetto contenente la data massima consentita.

*pMinRange*<br/>
Un puntatore a un [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che contiene la data alla fine dell'intervallo più bassa.

*pMaxRange*<br/>
Un puntatore a un `SYSTEMTIME` struttura che contiene la data alla fine dell'intervallo più alto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_GETSELRANGE](/windows/desktop/Controls/mcm-getselrange), come descritto nel SDK di Windows. `GetSelRange` Se applicato a un controllo calendario mensile che non utilizza lo stile MCS_MULTISELECT riuscirà.

Nell'implementazione di MFC di `GetSelRange`, è possibile specificare `COleDateTime` utilizzo, un `CTime` utilizzo, o un `SYSTEMTIME` struttura sull'utilizzo.

##  <a name="gettoday"></a>  CMonthCalCtrl::GetToday

Recupera le informazioni sulla data per la data specificata come "oggi" per un controllo calendario mensile.

```
BOOL GetToday(COleDateTime& refDateTime) const;  BOOL GetToday(COleDateTime& refDateTime) const;

BOOL GetToday(LPSYSTEMTIME pDateTime) const;
```

### <a name="parameters"></a>Parametri

*refDateTime*<br/>
Un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oppure [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto indicante il giorno corrente.

*pDateTime*<br/>
Un puntatore a un [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che riceverà le informazioni sulla data. Questo parametro deve essere un indirizzo valido e non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_GETTODAY](/windows/desktop/Controls/mcm-gettoday), come descritto nel SDK di Windows. Nell'implementazione di MFC di `GetToday`, è possibile specificare un `COleDateTime` utilizzo, un `CTime` utilizzo, o un `SYSTEMTIME` struttura sull'utilizzo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#3](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_7.cpp)]

##  <a name="hittest"></a>  CMonthCalCtrl::HitTest

Determina quale controllo calendario mensile, se presente, è in una posizione specificata.

```
DWORD HitTest(PMCHITTESTINFO pMCHitTest);
```

### <a name="parameters"></a>Parametri

*pMCHitTest*<br/>
Un puntatore a un [MCHITTESTINFO](/windows/desktop/api/commctrl/ns-commctrl-mchittestinfo) punta struttura contenente l'hit test per il controllo calendario mensile.

### <a name="return-value"></a>Valore restituito

Un valore DWORD. Uguale per il **uHit** membro del `MCHITTESTINFO` struttura.

### <a name="remarks"></a>Note

`HitTest` Usa il `MCHITTESTINFO` struttura, che contiene informazioni sull'hit test.

##  <a name="iscenturyview"></a>  CMonthCalCtrl::IsCenturyView

Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione secolo.

```
BOOL IsCenturyView() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione corrente della visualizzazione secolo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [MCM_GETCURRENTVIEW](/windows/desktop/Controls/mcm-getcurrentview) messaggio, che è descritti nel SDK di Windows. Se tale messaggio restituisce MCMV_CENTURY, questo metodo restituisce TRUE.

##  <a name="isdecadeview"></a>  CMonthCalCtrl::IsDecadeView

Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione di dieci anni.

```
BOOL IsDecadeView() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione corrente della visualizzazione di dieci anni. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [MCM_GETCURRENTVIEW](/windows/desktop/Controls/mcm-getcurrentview) messaggio, che è descritti nel SDK di Windows. Se tale messaggio restituisce MCMV_DECADE, questo metodo restituisce TRUE.

##  <a name="ismonthview"></a>  CMonthCalCtrl::IsMonthView

Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione di mese.

```
BOOL IsMonthView() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione corrente è la visualizzazione di mese; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [MCM_GETCURRENTVIEW](/windows/desktop/Controls/mcm-getcurrentview) messaggio, che è descritti nel SDK di Windows. Se tale messaggio restituisce MCMV_MONTH, questo metodo restituisce TRUE.

##  <a name="isyearview"></a>  CMonthCalCtrl::IsYearView

Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione di year.

```
BOOL IsYearView() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la visualizzazione corrente è l'anno; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [MCM_GETCURRENTVIEW](/windows/desktop/Controls/mcm-getcurrentview) messaggio, che è descritti nel SDK di Windows. Se tale messaggio restituisce MCMV_YEAR, questo metodo restituisce TRUE.

##  <a name="setcalendarborder"></a>  CMonthCalCtrl::SetCalendarBorder

Imposta lo spessore del bordo del controllo calendario mensile corrente.

```
void SetCalendarBorder(int cxyBorder);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*cxyBorder*|[in] La larghezza del bordo, in pixel.|

### <a name="remarks"></a>Note

Se questo metodo ha esito positivo, lo spessore del bordo è impostato il *cxyBorder* parametro. In caso contrario, lo spessore del bordo viene reimpostato sul valore predefinito specificato dall'oggetto corrente [tema](/windows/desktop/Controls/visual-styles-overview), oppure zero se non vengono usati i temi.

Questo metodo invia il [MCM_SETCALENDARBORDER](/windows/desktop/Controls/mcm-setcalendarborder) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile `m_monthCalCtrl`, che viene usato per accedere a livello di codice il controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

Il seguente codice esempio imposta lo spessore del bordo del calendario mensile di controllo su otto pixel. Usare la [CMonthCalCtrl::GetCalendarBorder](#getcalendarborder) metodo per determinare se questo metodo ha avuto esito positivo.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#6](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_8.cpp)]

##  <a name="setcalendarborderdefault"></a>  CMonthCalCtrl::SetCalendarBorderDefault

Imposta lo spessore predefinito del bordo del controllo calendario mensile corrente.

```
void SetCalendarBorderDefault();
```

### <a name="remarks"></a>Note

Lo spessore del bordo è impostato sul valore predefinito specificato dall'oggetto corrente [tema](/windows/desktop/Controls/visual-styles-overview), oppure zero se non vengono usati i temi.

Questo metodo invia il [MCM_SETCALENDARBORDER](/windows/desktop/Controls/mcm-setcalendarborder) messaggio, che è descritti nel SDK di Windows.

##  <a name="setcalid"></a>  CMonthCalCtrl::SetCalID

Imposta l'identificatore di calendario per il controllo di calendario del mese corrente.

```
BOOL SetCalID(CALID calid);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*calid*|[in] Uno dei [identificatore di calendario](/windows/desktop/Intl/calendar-identifiers) costanti.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Un identificatore del calendario specifica un calendario di aree specifiche, ad esempio il calendario gregoriano (localizzato), giapponese o Hijri calendari. Usare la `SetCalID` per visualizzare un calendario specificato dal metodo il *calid* parametro se le impostazioni locali che contiene il calendario sono installata nel computer.

Questo metodo invia il [MCM_SETCALID](/windows/desktop/Controls/mcm-setcalid) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile `m_monthCalCtrl`, che viene usato per accedere a livello di codice il controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente imposta il controllo calendario mensile per visualizzare il calendario giapponese (imperiale). Il `SetCalID` metodo ha esito positivo solo se il calendario è installato nel computer.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_9.cpp)]

##  <a name="setcenturyview"></a>  CMonthCalCtrl::SetCenturyView

Imposta il controllo di calendario del mese corrente per mostrare la visualizzazione secolo.

```
BOOL SetCenturyView();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo Usa il [CMonthCalCtrl::SetCurrentView](#setcurrentview) metodo per impostare la visualizzazione su `MCMV_CENTURY`, che rappresenta la visualizzazione secolo.

##  <a name="setcolor"></a>  CMonthCalCtrl::SetColor

Imposta il colore di un'area specificata di un controllo calendario mensile.

```
COLORREF SetColor(
    int nRegion,
    COLORREF ref);
```

### <a name="parameters"></a>Parametri

*nRegion*<br/>
Valore intero che specifica quale colore calendario del mese da impostare. Questo valore può essere uno dei seguenti.

|Value|Significato|
|-----------|-------------|
|MCSC_BACKGROUND|Il colore di sfondo visualizzato tra i mesi.|
|MCSC_MONTHBK|Il colore di sfondo visualizzato nel corso del mese.|
|MCSC_TEXT|Colore utilizzato per visualizzare il testo all'interno di un mese.|
|MCSC_TITLEBK|Il colore di sfondo visualizzato nel titolo del calendario.|
|MCSC_TITLETEXT|Il colore utilizzato per visualizzare il testo del titolo del calendario.|
|MCSC_TRAILINGTEXT|Colore utilizzato per visualizzare il testo dell'intestazione e finali giorni. Intestazione e finali giorni sono i giorni dei mesi precedenti e seguenti che vengono visualizzati nel calendario corrente.|

*ref*<br/>
Valore COLORREF per la nuova impostazione di colori per la parte specificata del controllo calendario mensile.

### <a name="return-value"></a>Valore restituito

Un valore COLORREF che rappresenta l'impostazione colore precedente per la parte specificata del controllo calendario mensile, se ha esito positivo. Questo messaggio in caso contrario, restituisce -1.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_SETCOLOR](/windows/desktop/Controls/mcm-setcolor), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#4](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_10.cpp)]

##  <a name="setcurrentview"></a>  CMonthCalCtrl::SetCurrentView

Imposta il controllo di calendario del mese corrente per visualizzare la visualizzazione specificata.

```
BOOL SetCurrentView(DWORD dwNewView);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwNewView*|[in] Uno dei valori seguenti che specifica una frequenza mensile, annuale, dieci anni o vista secolo.<br /><br /> MCMV_MONTH: Visualizzazione mensile<br /><br /> MCMV_YEAR: Visualizzazione annuale<br /><br /> MCMV_DECADE: Visualizzazione di dieci anni<br /><br /> MCMV_CENTURY: Visualizzazione di secolo|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [MCM_SETCURRENTVIEW](/windows/desktop/Controls/mcm-setcurrentview) messaggio, che è descritti nel SDK di Windows.

##  <a name="setcursel"></a>  CMonthCalCtrl::SetCurSel

Imposta la data attualmente selezionata per un controllo calendario mensile.

```
BOOL SetCurSel(const COleDateTime& refDateTime);
BOOL SetCurSel(const CTime& refDateTime);
  BOOL SetCurSel(const LPSYSTEMTIME pDateTime);
```

### <a name="parameters"></a>Parametri

*refDateTime*<br/>
Un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oppure [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che indica il controllo calendario mensile attualmente selezionato.

*pDateTime*<br/>
Puntatore a un [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che contiene la data da impostare come la selezione corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_SETCURSEL](/windows/desktop/Controls/mcm-setcursel), come descritto nel SDK di Windows. Nell'implementazione di MFC di `SetCurSel`, è possibile specificare un `COleDateTime` utilizzo, un `CTime` utilizzo, o un `SYSTEMTIME` struttura sull'utilizzo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#5](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_11.cpp)]

##  <a name="setdaystate"></a>  CMonthCalCtrl::SetDayState

Imposta la visualizzazione per i giorni in un controllo calendario mensile.

```
BOOL SetDayState(
    int nMonths,
    LPMONTHDAYSTATE pStates);
```

### <a name="parameters"></a>Parametri

*nMonths*<br/>
Valore che indica il numero di elementi presenti nella matrice che *pStates* punta a.

*pStates*<br/>
Un puntatore a un [MONTHDAYSTATE](/windows/desktop/Controls/monthdaystate) matrice di valori che definiscono la modalità controllo calendario mensile disegnerà ogni giorno nella relativa visualizzazione. Il tipo di dati MONTHDAYSTATE è un campo di bit, in cui ogni bit (da 1 a 31) rappresenta lo stato di un giorno al mese. Se un bit è attivo, il giorno corrispondente verrà visualizzato in grassetto. in caso contrario, verrà visualizzato con alcuna particolare attenzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_SETDAYSTATE](/windows/desktop/Controls/mcm-setdaystate), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#6](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_12.cpp)]

##  <a name="setdecadeview"></a>  CMonthCalCtrl::SetDecadeView

Imposta controllo calendario del mese corrente per la visualizzazione di dieci anni.

```
BOOL SetDecadeView();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo Usa il [CMonthCalCtrl::SetCurrentView](#setcurrentview) metodo per impostare la visualizzazione su `MCMV_DECADE`, che rappresenta la visualizzazione di dieci anni.

##  <a name="setfirstdayofweek"></a>  CMonthCalCtrl::SetFirstDayOfWeek

Imposta il giorno della settimana da visualizzare nella colonna più a sinistra del calendario.

```
BOOL SetFirstDayOfWeek(
    int iDay,
    int* lpnOld = NULL);
```

### <a name="parameters"></a>Parametri

*iDay*<br/>
Valore intero che rappresenta il giorno che si desidera impostare come primo giorno della settimana. Questo valore deve essere uno dei numeri di giorni. Visualizzare [GetFirstDayOfWeek](#getfirstdayofweek) per una descrizione dei valori del giorno.

*lpnOld*<br/>
Imposta un puntatore a un integer che indica il primo giorno della settimana in precedenza.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il primo giorno della settimana precedente è impostato su un valore diverso da quello del LOCALE_IFIRSTDAYOFWEEK, ovvero il giorno indicato nell'impostazione del Pannello di controllo. In caso contrario, questa funzione restituisce 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_SETFIRSTDAYOFWEEK](/windows/desktop/Controls/mcm-setfirstdayofweek), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#7](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_13.cpp)]

##  <a name="setmaxselcount"></a>  CMonthCalCtrl::SetMaxSelCount

Imposta il numero massimo di giorni che possono essere selezionati in un controllo calendario mensile.

```
BOOL SetMaxSelCount(int nMax);
```

### <a name="parameters"></a>Parametri

*nMax*<br/>
Il valore che verrà impostato per rappresentare il numero massimo di giorni selezionabili.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_SETMAXSELCOUNT](/windows/desktop/Controls/mcm-setmaxselcount), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CMonthCalCtrl#8](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_14.cpp)]

##  <a name="setmonthdelta"></a>  CMonthCalCtrl::SetMonthDelta

Imposta il valore di scorrimento per un controllo calendario mensile.

```
int SetMonthDelta(int iDelta);
```

### <a name="parameters"></a>Parametri

*iDelta*<br/>
Il numero di mesi da impostare come valore di scorrimento del controllo. Se questo valore è zero, il delta del mese viene reimpostato sul valore predefinito, ovvero il numero di mesi visualizzata nel controllo.

### <a name="return-value"></a>Valore restituito

Il precedente valore di scorrimento. Se il valore di scorrimento non è stato impostato in precedenza, il valore restituito è 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_SETMONTHDELTA](/windows/desktop/Controls/mcm-setmonthdelta), come descritto nel SDK di Windows.

##  <a name="setmonthview"></a>  CMonthCalCtrl::SetMonthView

Imposta il controllo di calendario del mese corrente per visualizzare la visualizzazione di mese.

```
BOOL SetMonthView();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo Usa il [CMonthCalCtrl::SetCurrentView](#setcurrentview) metodo per impostare la visualizzazione su MCMV_MONTH, che rappresenta la visualizzazione di mese.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile `m_monthCalCtrl`, che viene usato per accedere a livello di codice il controllo calendario mensile. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente imposta il controllo calendario mensile per visualizzare il mese, anno, decennio e visualizzazioni secolo.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_15.cpp)]

##  <a name="setrange"></a>  CMonthCalCtrl::SetRange

Imposta le date consentite minime e massime per un controllo calendario mensile.

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
Un puntatore a un `COleDateTime` oggetti, una `CTime` oggetto, o [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che contiene la data alla fine dell'intervallo più bassa.

*pMaxRange*<br/>
Un puntatore a un `COleDateTime` oggetti, una `CTime` oggetto, o `SYSTEMTIME` struttura che contiene la data alla fine dell'intervallo più alto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_SETRANGE](/windows/desktop/Controls/mcm-setrange), come descritto nel SDK di Windows. Nell'implementazione di MFC di `SetRange`, è possibile specificare `COleDateTime` utilizzo, un `CTime` utilizzo, o un `SYSTEMTIME` struttura sull'utilizzo.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMonthCalCtrl::GetRange](#getrange).

##  <a name="setselrange"></a>  CMonthCalCtrl::SetSelRange

Imposta la selezione per un calendario mensile di controllo per un determinato intervallo di date.

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
Un puntatore a un `COleDateTime` oggetti, una `CTime` oggetto, o [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che contiene la data alla fine dell'intervallo più bassa.

*pMaxRange*<br/>
Un puntatore a un `COleDateTime` oggetti, una `CTime` oggetto, o `SYSTEMTIME` struttura che contiene la data alla fine dell'intervallo più alto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_SETSELRANGE](/windows/desktop/Controls/mcm-setselrange), come descritto nel SDK di Windows. Nell'implementazione di MFC di `SetSelRange`, è possibile specificare `COleDateTime` utilizzo, un `CTime` utilizzo, o un `SYSTEMTIME` struttura sull'utilizzo.

##  <a name="settoday"></a>  CMonthCalCtrl::SetToday

Imposta il controllo calendario per il giorno corrente.

```
void SetToday(const COleDateTime& refDateTime);
void SetToday(const CTime* pDateTime);
  void SetToday(const LPSYSTEMTIME pDateTime);
```

### <a name="parameters"></a>Parametri

*refDateTime*<br/>
Un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che contiene la data corrente.

*pDateTime*<br/>
Nella seconda versione, un puntatore a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto contenente le informazioni sulla data corrente. Nella terza versione, un puntatore a un [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che contiene le informazioni sulla data corrente.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [MCM_SETTODAY](/windows/desktop/Controls/mcm-settoday), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMonthCalCtrl::GetToday](#gettoday).

##  <a name="setyearview"></a>  CMonthCalCtrl::SetYearView

Imposta controllo calendario mensile corrente alla visualizzazione di anno.

```
BOOL SetYearView();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo Usa il [CMonthCalCtrl::SetCurrentView](#setcurrentview) metodo per impostare la visualizzazione su MCMV_YEAR, che rappresenta la annual visualizzazione.

##  <a name="sizeminreq"></a>  CMonthCalCtrl::SizeMinReq

Consente di visualizzare il mese di controllo di calendario alla minima dimensione che visualizza un mese.

```
BOOL SizeMinReq(BOOL bRepaint = TRUE);
```

### <a name="parameters"></a>Parametri

*bRepaint*<br/>
Specifica se il controllo deve essere ridisegnata. Per impostazione predefinita, TRUE. Se FALSE, non l'aggiornamento si verifica.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo calendario mensile viene ridimensionato al minimo; in caso contrario 0.

### <a name="remarks"></a>Note

La chiamata a `SizeMinReq` visualizza correttamente il controllo calendario mensile intera per mese un.

##  <a name="sizerecttomin"></a>  CMonthCalCtrl::SizeRectToMin

Per il controllo di calendario del mese corrente, calcola il rettangolo più piccolo che può contenere tutti i calendari che rientrano in un rettangolo specificato.

```
LPRECT SizeRectToMin(LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpRect*|[in] Puntatore a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che definisce un rettangolo che contiene il numero desiderato di calendari.|

### <a name="return-value"></a>Valore restituito

Puntatore a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che definisce un rettangolo la cui dimensione è minore o uguale al rettangolo definito dalle *lpRect* parametro.

### <a name="remarks"></a>Note

Questo metodo calcola il numero di calendari sufficiente per il rettangolo specificato dal *lpRect* parametro e quindi restituisce il rettangolo più piccolo che può contenere il numero di calendari. In effetti, questo metodo riduce il rettangolo specificato adattandola al numero desiderato di calendari.

Questo metodo invia il [MCM_SIZERECTTOMIN](/windows/desktop/Controls/mcm-sizerecttomin) messaggio, che è descritti nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[CMNCTRL1 esempio MFC](../../visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)
