---
title: Classe CDateTimeCtrl
ms.date: 11/04/2016
f1_keywords:
- CDateTimeCtrl
- AFXDTCTL/CDateTimeCtrl
- AFXDTCTL/CDateTimeCtrl::CDateTimeCtrl
- AFXDTCTL/CDateTimeCtrl::CloseMonthCal
- AFXDTCTL/CDateTimeCtrl::Create
- AFXDTCTL/CDateTimeCtrl::GetDateTimePickerInfo
- AFXDTCTL/CDateTimeCtrl::GetIdealSize
- AFXDTCTL/CDateTimeCtrl::GetMonthCalColor
- AFXDTCTL/CDateTimeCtrl::GetMonthCalCtrl
- AFXDTCTL/CDateTimeCtrl::GetMonthCalFont
- AFXDTCTL/CDateTimeCtrl::GetMonthCalStyle
- AFXDTCTL/CDateTimeCtrl::GetRange
- AFXDTCTL/CDateTimeCtrl::GetTime
- AFXDTCTL/CDateTimeCtrl::SetFormat
- AFXDTCTL/CDateTimeCtrl::SetMonthCalColor
- AFXDTCTL/CDateTimeCtrl::SetMonthCalFont
- AFXDTCTL/CDateTimeCtrl::SetMonthCalStyle
- AFXDTCTL/CDateTimeCtrl::SetRange
- AFXDTCTL/CDateTimeCtrl::SetTime
helpviewer_keywords:
- CDateTimeCtrl [MFC], CDateTimeCtrl
- CDateTimeCtrl [MFC], CloseMonthCal
- CDateTimeCtrl [MFC], Create
- CDateTimeCtrl [MFC], GetDateTimePickerInfo
- CDateTimeCtrl [MFC], GetIdealSize
- CDateTimeCtrl [MFC], GetMonthCalColor
- CDateTimeCtrl [MFC], GetMonthCalCtrl
- CDateTimeCtrl [MFC], GetMonthCalFont
- CDateTimeCtrl [MFC], GetMonthCalStyle
- CDateTimeCtrl [MFC], GetRange
- CDateTimeCtrl [MFC], GetTime
- CDateTimeCtrl [MFC], SetFormat
- CDateTimeCtrl [MFC], SetMonthCalColor
- CDateTimeCtrl [MFC], SetMonthCalFont
- CDateTimeCtrl [MFC], SetMonthCalStyle
- CDateTimeCtrl [MFC], SetRange
- CDateTimeCtrl [MFC], SetTime
ms.assetid: 7113993b-5d37-4148-939f-500a190c5bdc
ms.openlocfilehash: 8c69473ab813c2fa692044fddc406a74a5aeb197
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62253517"
---
# <a name="cdatetimectrl-class"></a>Classe CDateTimeCtrl

Incapsula la funzionalità di un controllo di selezione data e ora.

## <a name="syntax"></a>Sintassi

```
class CDateTimeCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDateTimeCtrl::CDateTimeCtrl](#cdatetimectrl)|Costruisce un oggetto `CDateTimeCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDateTimeCtrl::CloseMonthCal](#closemonthcal)|Chiude il controllo di selezione data e ora corrente.|
|[CDateTimeCtrl::Create](#create)|Crea il controllo di selezione data e ora e lo collega al `CDateTimeCtrl` oggetto.|
|[CDateTimeCtrl::GetDateTimePickerInfo](#getdatetimepickerinfo)|Recupera le informazioni sul controllo selezione data e ora corrente.|
|[CDateTimeCtrl::GetIdealSize](#getidealsize)|Restituisce la dimensione ideale del controllo selezione data e ora che è necessario per visualizzare la data corrente o l'ora.|
|[CDateTimeCtrl::GetMonthCalColor](#getmonthcalcolor)|Recupera il colore per una parte del calendario mensile all'interno del controllo selezione data e ora.|
|[CDateTimeCtrl::GetMonthCalCtrl](#getmonthcalctrl)|Recupera il `CMonthCalCtrl` oggetto associato al controllo di selezione data e ora.|
|[CDateTimeCtrl::GetMonthCalFont](#getmonthcalfont)|Recupera il tipo di carattere attualmente usato da data e controllo di calendario mensile figlio del controllo di selezione ora.|
|[CDateTimeCtrl::GetMonthCalStyle](#getmonthcalstyle)|Ottiene lo stile del controllo selezione data e ora corrente.|
|[CDateTimeCtrl::GetRange](#getrange)|Recupera corrente minimi e massimi consentiti tempi di sistema per un controllo selezione data e ora.|
|[CDateTimeCtrl::GetTime](#gettime)|Recupera il tempo attualmente selezionato da un controllo selezione data e ora e lo inserisce in un determinato `SYSTEMTIME` struttura.|
|[CDateTimeCtrl::SetFormat](#setformat)|Imposta la visualizzazione di un controllo selezione data e ora in base a una stringa di formato specificato.|
|[CDateTimeCtrl::SetMonthCalColor](#setmonthcalcolor)|Imposta il colore per una parte del calendario mensile all'interno di un controllo selezione data e ora.|
|[CDateTimeCtrl::SetMonthCalFont](#setmonthcalfont)|Imposta il tipo di carattere che verrà utilizzato controllo calendario mensile di data e ora di selezione del controllo figlio.|
|[CDateTimeCtrl::SetMonthCalStyle](#setmonthcalstyle)|Imposta lo stile del controllo selezione data e ora corrente.|
|[CDateTimeCtrl::SetRange](#setrange)|Impostare gli orari di sistema minimo e massimo consentito per un controllo selezione data e ora.|
|[CDateTimeCtrl::SetTime](#settime)|Imposta il tempo in un controllo selezione data e ora.|

## <a name="remarks"></a>Note

Il controllo di selezione data e ora (controllo DTP) fornisce una semplice interfaccia per lo scambio di informazioni di data e ora con un utente. Questa interfaccia contiene i campi, ognuno dei quali consente di visualizzare una parte delle informazioni di data e ora archiviate nel controllo. L'utente può modificare le informazioni archiviate nel controllo modificando il contenuto della stringa in un determinato campo. L'utente può spostarsi da un campo a altro utilizzando il mouse o tastiera.

È possibile personalizzare il controllo di selezione data e ora, applicando un'ampia gamma di stili all'oggetto durante la creazione. Visualizzare [data e ora degli stili del controllo selezione](/windows/desktop/Controls/date-and-time-picker-control-styles) nel SDK di Windows per altre informazioni sugli stili specifici per il controllo di selezione data e ora. È possibile impostare il formato di visualizzazione del controllo DTP utilizzando gli stili di formato. Questi stili di formato sono descritti in "Formato di stili" nell'argomento Windows SDK [data e ora degli stili del controllo selezione](/windows/desktop/Controls/date-and-time-picker-control-styles).

Il controllo di selezione data e ora USA anche le notifiche e i callback, che sono descritte nel [utilizzo di CDateTimeCtrl](../../mfc/using-cdatetimectrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CDateTimeCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDTCTL

##  <a name="cdatetimectrl"></a>  CDateTimeCtrl::CDateTimeCtrl

Costruisce un oggetto `CDateTimeCtrl`.

```
CDateTimeCtrl();
```

##  <a name="closemonthcal"></a>  CDateTimeCtrl::CloseMonthCal

Chiude il controllo di selezione data e ora corrente.

```
void CloseMonthCal() const;
```

### <a name="remarks"></a>Note

Questo metodo invia il [DTM_CLOSEMONTHCAL](/windows/desktop/Controls/dtm-closemonthcal) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile *m_dateTimeCtrl*, che viene usato per accedere a livello di codice il controllo di selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente consente di chiudere il calendario a discesa per il controllo di selezione data e ora corrente.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#5](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_2.cpp)]

##  <a name="create"></a>  CDateTimeCtrl::Create

Crea il controllo di selezione data e ora e lo collega al `CDateTimeCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica la combinazione degli stili di controllo di data ora. Visualizzare [data e ora degli stili del controllo selezione](/windows/desktop/Controls/date-and-time-picker-control-styles) nel SDK di Windows per altre informazioni sugli stili di controllo selezione data e ora.

*rect*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura, ovvero la posizione e dimensioni del controllo selezione data e ora.

*pParentWnd*<br/>
Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto, ovvero la finestra padre del controllo selezione data e ora. Non deve essere NULL.

*nID*<br/>
Specifica ID del controllo. della data e ora controllo di selezione

### <a name="return-value"></a>Valore restituito

Diverso da zero se la creazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

##### <a name="to-create-a-date-and-time-picker-control"></a>Per creare un controllo selezione data e ora

1. Chiamare [CDateTimeCtrl](#cdatetimectrl) per costruire un `CDateTimeCtrl` oggetto.

1. Chiamare questa funzione membro, che crea il controllo di selezione data e ora di Windows e lo collega al `CDateTimeCtrl` oggetto.

Quando si chiama `Create`, vengono inizializzati i controlli comuni.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_3.cpp)]

##  <a name="getdatetimepickerinfo"></a>  CDateTimeCtrl::GetDateTimePickerInfo

Recupera le informazioni sul controllo selezione data e ora corrente.

```
BOOL GetDateTimePickerInfo(LPDATETIMEPICKERINFO pDateTimePickerInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pDateTimePickerInfo*|[out] Un puntatore a un [DATETIMEPICKERINFO](/windows/desktop/api/commctrl/ns-commctrl-tagdatetimepickerinfo) struttura che riceve una descrizione del controllo selezione data e ora corrente.<br /><br /> Il chiamante è responsabile dell'allocazione di questa struttura. Tuttavia, questo metodo inizializza la *cbSize* membro della struttura.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [DTM_GETDATETIMEPICKERINFO](/windows/desktop/Controls/dtm-getdatetimepickerinfo) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile *m_dateTimeCtrl*, che viene usato per accedere a livello di codice il controllo di selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente indica se è stata recupera le informazioni sul controllo selezione data e ora corrente.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_4.cpp)]

##  <a name="getmonthcalcolor"></a>  CDateTimeCtrl::GetMonthCalColor

Recupera il colore per una parte del calendario mensile all'interno del controllo selezione data e ora.

```
COLORREF GetMonthCalColor(int iColor) const;
```

### <a name="parameters"></a>Parametri

*iColor*<br/>
Un' **int** valore che specifica quale area di colore del calendario mensile per il recupero. Per un elenco di valori, vedere la *iColor* parametro per [SetMonthCalColor](#setmonthcalcolor).

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta l'impostazione del colore per la parte specificata del controllo calendario mensile se ha esito positivo. La funzione restituisce -1 se ha esito negativo.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_GETMCCOLOR](/windows/desktop/Controls/dtm-getmccolor), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#2](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_5.cpp)]

##  <a name="getmonthcalctrl"></a>  CDateTimeCtrl::GetMonthCalCtrl

Recupera il `CMonthCalCtrl` oggetto associato al controllo di selezione data e ora.

```
CMonthCalCtrl* GetMonthCalCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md) dell'oggetto, o NULL se ha esito negativo o se la finestra non è visibile.

### <a name="remarks"></a>Note

Controlli selezione data e ora creano un controllo di calendario mensile figlio quando l'utente fa clic sulla freccia giù. Quando il `CMonthCalCtrl` oggetto non è più necessario, viene eliminato definitivamente, in modo che l'applicazione non deve fare affidamento sulla memorizzazione di oggetto che rappresenta di calendario mensile figlio del controllo di date time picker.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#3](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_6.cpp)]

##  <a name="getmonthcalfont"></a>  CDateTimeCtrl::GetMonthCalFont

Ottiene il tipo di carattere attualmente usato da data e controllo di calendario mensile di controllo di selezione ora.

```
CFont* GetMonthCalFont() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CFont](../../mfc/reference/cfont-class.md) dell'oggetto, o NULL se ha esito negativo.

### <a name="remarks"></a>Note

Il `CFont` oggetto a cui punta il valore restituito è un oggetto temporaneo e viene eliminato definitivamente durante il tempo di elaborazione di inattività successivo.

##  <a name="getmonthcalstyle"></a>  CDateTimeCtrl::GetMonthCalStyle

Ottiene lo stile del controllo calendario mensile a discesa associato con il controllo di selezione data e ora corrente.

```
DWORD GetMonthCalStyle() const;
```

### <a name="return-value"></a>Valore restituito

Lo stile del controllo calendario mensile di elenco a discesa, ovvero una combinazione bit per bit (o) di stili del controllo selezione data e ora. Per altre informazioni, vedere [mese degli stili del controllo calendario](/windows/desktop/Controls/month-calendar-control-styles).

### <a name="remarks"></a>Note

Questo metodo invia il [DTM_GETMCSTYLE](/windows/desktop/Controls/dtm-getmcstyle) messaggio, che è descritti nel SDK di Windows.

##  <a name="getrange"></a>  CDateTimeCtrl::GetRange

Recupera corrente minimi e massimi consentiti tempi di sistema per un controllo selezione data e ora.

```
DWORD GetRange(
    COleDateTime* pMinRange,
    COleDateTime* pMaxRange) const;

DWORD GetRange(
    CTime* pMinRange,
    CTime* pMaxRange) const;
```

### <a name="parameters"></a>Parametri

*pMinRange*<br/>
Un puntatore a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto o una [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto contenente l'ora meno recente consentita nel `CDateTimeCtrl` oggetto.

*pMaxRange*<br/>
Un puntatore a un `COleDateTime` oggetto o una `CTime` oggetto che contiene l'ultima ora consentita nel `CDateTimeCtrl` oggetto.

### <a name="return-value"></a>Valore restituito

Valore DWORD che contiene i flag che indicano quali intervalli vengono impostati. Se

`return value & GDTR_MAX` == 0

il secondo parametro è valido. Analogamente, se

`return value & GDTR_MIN` == 0

il primo parametro è valido.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_GETRANGE](/windows/desktop/Controls/dtm-getrange), come descritto nel SDK di Windows. Nell'implementazione di MFC, è possibile specificare `COleDateTime` o `CTime` utilizzi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#4](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_7.cpp)]

##  <a name="gettime"></a>  CDateTimeCtrl::GetTime

Recupera il tempo attualmente selezionato da un controllo selezione data e ora e lo inserisce in un determinato `SYSTEMTIME` struttura.

```
BOOL GetTime(COleDateTime& timeDest) const;
DWORD GetTime(CTime& timeDest) const;
DWORD GetTime(LPSYSTEMTIME pTimeDest) const;
```

### <a name="parameters"></a>Parametri

*timeDest*<br/>
Nella prima versione, un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che riceverà le informazioni sull'ora di sistema. Nella seconda versione, un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che riceverà le informazioni sull'ora di sistema.

*pTimeDest*<br/>
Un puntatore per il [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura per ricevere le informazioni sull'ora di sistema. Non deve essere NULL.

### <a name="return-value"></a>Valore restituito

Nella prima versione, diverso da zero se il tempo è stata scritta correttamente il `COleDateTime` oggetto; in caso contrario 0. Nelle versioni di secondo e terza valore uguale a un valore DWORD il *dwFlag* set di membri [NMDATETIMECHANGE](/windows/desktop/api/commctrl/ns-commctrl-tagnmdatetimechange) struttura. Vedere le **osservazioni** sezione di seguito per altre informazioni.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_GETSYSTEMTIME](/windows/desktop/Controls/dtm-getsystemtime), come descritto nel SDK di Windows. Nell'implementazione di MFC `GetTime`, è possibile usare `COleDateTime` o `CTime` classi oppure è possibile usare un `SYSTEMTIME` struttura per archiviare le informazioni sull'ora.

Il valore DWORD restituito nelle versioni di secondo e terzo, sopra, indica se il controllo di selezione data e ora è impostato per lo stato "Nessun data", come indicato nella [NMDATETIMECHANGE](/windows/desktop/api/commctrl/ns-commctrl-tagnmdatetimechange) i membri di struttura *dwFlags* . Se il valore restituito è uguale a GDT_NONE, il controllo è impostato sullo stato "Nessun date" e viene utilizzato lo stile DTS_SHOWNONE. Se il valore restituito è uguale a GDT_VALID, l'ora di sistema è stata archiviata nel percorso di destinazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#5](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_8.cpp)]

##  <a name="getidealsize"></a>  CDateTimeCtrl::GetIdealSize

Restituisce la dimensione ideale del controllo selezione data e ora che è necessario per visualizzare la data corrente o l'ora.

```
BOOL GetIdealSize(LPSIZE psize) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*psize*|[out] Puntatore a un [dimensioni](/windows/desktop/api/windef/ns-windef-tagsize) struttura che contiene la dimensione ideale per il controllo.|

### <a name="return-value"></a>Valore restituito

Il valore restituito è sempre TRUE.

### <a name="remarks"></a>Note

Questo metodo invia il [DTM_GETIDEALSIZE](/windows/desktop/Controls/dtm-getidealsize) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile *m_dateTimeCtrl*, che viene usato per accedere a livello di codice il controllo di selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente recupera la dimensione ideale per visualizzare il controllo di selezione data e ora.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_9.cpp)]

##  <a name="setformat"></a>  CDateTimeCtrl::SetFormat

Imposta la visualizzazione di un controllo selezione data e ora in base a una stringa di formato specificato.

```
BOOL SetFormat(LPCTSTR pstrFormat);
```

### <a name="parameters"></a>Parametri

*pstrFormat*<br/>
Puntatore a una stringa di formato con terminazione zero che definisce la visualizzazione desiderata. Impostare questo parametro su NULL, il controllo verrà reimpostato alla stringa di formato predefinito per lo stile corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

> [!NOTE]
>  Input dell'utente non determina l'esito positivo o negativo per questa chiamata.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETFORMAT](/windows/desktop/Controls/dtm-setformat), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#6](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_10.cpp)]

##  <a name="setmonthcalcolor"></a>  CDateTimeCtrl::SetMonthCalColor

Imposta il colore per una parte del calendario mensile all'interno di un controllo selezione data e ora.

```
COLORREF SetMonthCalColor(
    int iColor,
    COLORREF ref);
```

### <a name="parameters"></a>Parametri

*iColor*<br/>
**int** valore che specifica quale area del controllo calendario mensile da impostare. Questo valore può essere uno dei seguenti.

|Value|Significato|
|-----------|-------------|
|MCSC_BACKGROUND|Impostare il colore di sfondo visualizzato tra i mesi.|
|MCSC_MONTHBK|Impostare il colore di sfondo visualizzato all'interno di un mese.|
|MCSC_TEXT|Impostare il colore utilizzato per visualizzare il testo all'interno di un mese.|
|MCSC_TITLEBK|Impostare il colore di sfondo visualizzato nel titolo del calendario.|
|MCSC_TITLETEXT|Impostare il colore utilizzato per visualizzare il testo del titolo del calendario.|
|MCSC_TRAILINGTEXT|Impostare il colore utilizzato per visualizzare l'intestazione e il testo finale giorni. Intestazione e finali giorni sono i giorni dei mesi precedenti e seguenti che vengono visualizzati nel calendario corrente.|

*ref*<br/>
Un valore COLORREF che rappresenta il colore che verrà impostato per l'area specificata del calendario mensile.

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta l'impostazione del colore precedente per la parte specificata del controllo calendario mensile se ha esito positivo. Il messaggio in caso contrario, restituisce -1.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETMCCOLOR](/windows/desktop/Controls/dtm-setmccolor), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CDateTimeCtrl::GetMonthCalColor](#getmonthcalcolor).

##  <a name="setmonthcalfont"></a>  CDateTimeCtrl::SetMonthCalFont

Imposta il tipo di carattere che verrà utilizzato controllo calendario mensile di data e ora di selezione del controllo figlio.

```
void SetMonthCalFont(
    HFONT hFont,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*hFont*<br/>
Handle per il tipo di carattere che verrà impostato.

*bRedraw*<br/>
Specifica se il controllo deve essere ridisegnato immediatamente al momento di impostare il tipo di carattere. Impostando questo parametro su TRUE, il controllo venga ricreato.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETMCFONT](/windows/desktop/Controls/dtm-setmcfont), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#7](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_11.cpp)]

> [!NOTE]
>  Se si usa questo codice, è opportuno rendere membro delle `CDialog`-classe chiamato derivata *m_MonthFont* di tipo `CFont`.

##  <a name="setmonthcalstyle"></a>  CDateTimeCtrl::SetMonthCalStyle

Imposta lo stile del controllo calendario mensile a discesa associato con il controllo di selezione data e ora corrente.

```
DWORD SetMonthCalStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwStyle*|[in] Un nuovo mese di calendario stile del controllo, ovvero una combinazione bit per bit (OR) di stili del controllo calendar month. Per altre informazioni, vedere [mese degli stili del controllo calendario](/windows/desktop/Controls/month-calendar-control-styles).|

### <a name="return-value"></a>Valore restituito

Lo stile precedente del controllo calendario mensile a discesa.

### <a name="remarks"></a>Note

Questo metodo invia il [DTM_SETMCSTYLE](/windows/desktop/Controls/dtm-setmcstyle) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Esempio di codice seguente definisce la variabile *m_dateTimeCtrl*, che viene usato per accedere a livello di codice il controllo di selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente imposta il controllo di selezione data e ora per visualizzare i numeri di settimana, i nomi abbreviati dei giorni della settimana e Nessun indicatore oggi.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_12.cpp)]

##  <a name="setrange"></a>  CDateTimeCtrl::SetRange

Impostare gli orari di sistema minimo e massimo consentito per un controllo selezione data e ora.

```
BOOL SetRange(
    const COleDateTime* pMinRange,
    const COleDateTime* pMaxRange);

BOOL SetRange(
    const CTime* pMinRange,
    const CTime* pMaxRange);
```

### <a name="parameters"></a>Parametri

*pMinRange*<br/>
Un puntatore a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto o una [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto contenente l'ora meno recente consentita nel `CDateTimeCtrl` oggetto.

*pMaxRange*<br/>
Un puntatore a un `COleDateTime` oggetto o una `CTime` oggetto che contiene l'ultima ora consentita nel `CDateTimeCtrl` oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETRANGE](/windows/desktop/Controls/dtm-setrange), come descritto nel SDK di Windows. Nell'implementazione di MFC, è possibile specificare `COleDateTime` o `CTime` utilizzi. Se il `COleDateTime` oggetto ha uno stato NULL, l'intervallo verrà rimosso. Se il `CTime` puntatore o il `COleDateTime` puntatore è NULL, l'intervallo verrà rimosso.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CDateTimeCtrl::GetRange](#getrange).

##  <a name="settime"></a>  CDateTimeCtrl::SetTime

Imposta il tempo in un controllo selezione data e ora.

```
BOOL SetTime(const COleDateTime& timeNew);
BOOL SetTime(const CTime* pTimeNew);
BOOL SetTime(LPSYSTEMTIME pTimeNew = NULL);
```

### <a name="parameters"></a>Parametri

*timeNew*<br/>
Un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che contiene il da cui verrà impostato il controllo.

*pTimeNew*<br/>
Nella seconda versione precedente, un puntatore a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto contenente l'ora in cui verrà impostato il controllo. Nella terza versione precedente, un puntatore a un [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che contiene l'ora in cui verrà impostato il controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETSYSTEMTIME](/windows/desktop/Controls/dtm-setsystemtime), come descritto nel SDK di Windows. Nell'implementazione di MFC `SetTime`, è possibile usare il `COleDateTime` o `CTime` classi oppure è possibile usare un `SYSTEMTIME` struttura, per impostare le informazioni sull'ora.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#8](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_13.cpp)]

## <a name="see-also"></a>Vedere anche

[CMNCTRL1 esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)
