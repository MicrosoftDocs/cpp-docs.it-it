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
ms.openlocfilehash: ec9060ba60c4d9877e5ee32bc68da0134f0ccf20
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78866934"
---
# <a name="cdatetimectrl-class"></a>Classe CDateTimeCtrl

Incapsula la funzionalità di un controllo di selezione data e ora.

## <a name="syntax"></a>Sintassi

```
class CDateTimeCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDateTimeCtrl:: CDateTimeCtrl](#cdatetimectrl)|Costruisce un oggetto `CDateTimeCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDateTimeCtrl:: CloseMonthCal](#closemonthcal)|Chiude il controllo selezione data e ora corrente.|
|[CDateTimeCtrl:: create](#create)|Crea il controllo selezione data e ora e lo connette all'oggetto `CDateTimeCtrl`.|
|[CDateTimeCtrl:: GetDateTimePickerInfo](#getdatetimepickerinfo)|Recupera le informazioni sul controllo selezione data e ora corrente.|
|[CDateTimeCtrl:: GetIdealSize](#getidealsize)|Restituisce la dimensione ideale del controllo selezione data e ora richiesto per visualizzare la data o l'ora corrente.|
|[CDateTimeCtrl:: GetMonthCalColor](#getmonthcalcolor)|Recupera il colore per una parte specificata del calendario mensile all'interno del controllo selezione data e ora.|
|[CDateTimeCtrl:: GetMonthCalCtrl](#getmonthcalctrl)|Recupera l'oggetto `CMonthCalCtrl` associato al controllo selezione data e ora.|
|[CDateTimeCtrl:: GetMonthCalFont](#getmonthcalfont)|Recupera il tipo di carattere attualmente utilizzato dal controllo Calendar Month Child del controllo selezione data e ora.|
|[CDateTimeCtrl:: GetMonthCalStyle](#getmonthcalstyle)|Ottiene lo stile del controllo selezione data e ora corrente.|
|[CDateTimeCtrl:: GetRange](#getrange)|Recupera gli orari di sistema minimi e massimi correnti per un controllo selezione data e ora.|
|[CDateTimeCtrl:: getTime](#gettime)|Recupera l'ora attualmente selezionata da un controllo selezione data e ora e lo inserisce in una struttura `SYSTEMTIME` specificata.|
|[CDateTimeCtrl:: seformatt](#setformat)|Imposta la visualizzazione di un controllo selezione data e ora in base a una stringa di formato specificata.|
|[CDateTimeCtrl:: SetMonthCalColor](#setmonthcalcolor)|Imposta il colore per una porzione specificata del calendario mensile in un controllo selezione data e ora.|
|[CDateTimeCtrl:: SetMonthCalFont](#setmonthcalfont)|Imposta il tipo di carattere utilizzato dal controllo calendario mensile figlio del controllo selezione data e ora.|
|[CDateTimeCtrl:: SetMonthCalStyle](#setmonthcalstyle)|Imposta lo stile del controllo selezione data e ora corrente.|
|[CDateTimeCtrl:: SetRange](#setrange)|Imposta l'ora di sistema minima e massima consentita per un controllo selezione data e ora.|
|[CDateTimeCtrl:: setime](#settime)|Imposta l'ora in un controllo selezione data e ora.|

## <a name="remarks"></a>Osservazioni

Il controllo selezione data e ora (controllo DTP) fornisce un'interfaccia semplice per scambiare informazioni di data e ora con un utente. Questa interfaccia contiene i campi, ognuno dei quali Visualizza una parte delle informazioni di data e ora archiviate nel controllo. L'utente può modificare le informazioni archiviate nel controllo modificando il contenuto della stringa in un campo specificato. L'utente può spostarsi da un campo all'altra usando il mouse o la tastiera.

È possibile personalizzare il controllo selezione data e ora applicando un'ampia gamma di stili all'oggetto quando viene creato. Per ulteriori informazioni sugli stili specifici del controllo selezione data e ora, vedere [stili di controllo selezione data e ora](/windows/win32/Controls/date-and-time-picker-control-styles) nella Windows SDK. È possibile impostare il formato di visualizzazione del controllo DTP usando gli stili del formato. Questi stili di formato sono descritti in "stili di formato" nell'argomento Windows SDK gli [stili del controllo selezione data e ora](/windows/win32/Controls/date-and-time-picker-control-styles).

Il controllo selezione data e ora usa anche le notifiche e i callback, descritti in [uso di CDateTimeCtrl](../../mfc/using-cdatetimectrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CDateTimeCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDTCTL. h

##  <a name="cdatetimectrl"></a>CDateTimeCtrl:: CDateTimeCtrl

Costruisce un oggetto `CDateTimeCtrl`.

```
CDateTimeCtrl();
```

##  <a name="closemonthcal"></a>CDateTimeCtrl:: CloseMonthCal

Chiude il controllo selezione data e ora corrente.

```
void CloseMonthCal() const;
```

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [DTM_CLOSEMONTHCAL](/windows/win32/Controls/dtm-closemonthcal) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, *m_dateTimeCtrl*, utilizzata per accedere a livello di codice al controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene chiuso il calendario a discesa per il controllo selezione data e ora corrente.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#5](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_2.cpp)]

##  <a name="create"></a>CDateTimeCtrl:: create

Crea il controllo selezione data e ora e lo connette all'oggetto `CDateTimeCtrl`.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica la combinazione di stili di controllo data e ora. Per ulteriori informazioni sugli stili di selezione di data e ora, vedere [stili di controllo selezione data e ora](/windows/win32/Controls/date-and-time-picker-control-styles) nella Windows SDK.

*rect*<br/>
Riferimento a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) , ovvero la posizione e le dimensioni del controllo selezione data e ora.

*pParentWnd*<br/>
Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che rappresenta la finestra padre del controllo selezione data e ora. Non deve essere NULL.

*nID*<br/>
Specifica l'ID di controllo del controllo selezione data e ora.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la creazione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

##### <a name="to-create-a-date-and-time-picker-control"></a>Per creare un controllo selezione data e ora

1. Chiamare [CDateTimeCtrl](#cdatetimectrl) per costruire un oggetto `CDateTimeCtrl`.

1. Chiamare questa funzione membro, che crea il controllo selezione data e ora di Windows e lo connette all'oggetto `CDateTimeCtrl`.

Quando si chiama `Create`, i controlli comuni vengono inizializzati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_3.cpp)]

##  <a name="getdatetimepickerinfo"></a>CDateTimeCtrl:: GetDateTimePickerInfo

Recupera le informazioni sul controllo selezione data e ora corrente.

```
BOOL GetDateTimePickerInfo(LPDATETIMEPICKERINFO pDateTimePickerInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pDateTimePickerInfo*|out Puntatore a una struttura [DATETIMEPICKERINFO](/windows/win32/api/commctrl/ns-commctrl-datetimepickerinfo) che riceve una descrizione del controllo selezione data e ora corrente.<br /><br /> Il chiamante è responsabile dell'allocazione di questa struttura. Questo metodo inizializza tuttavia il membro *cbSize* della struttura.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [DTM_GETDATETIMEPICKERINFO](/windows/win32/Controls/dtm-getdatetimepickerinfo) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, *m_dateTimeCtrl*, utilizzata per accedere a livello di codice al controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene indicato se recuperare correttamente le informazioni sul controllo selezione data e ora corrente.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_4.cpp)]

##  <a name="getmonthcalcolor"></a>CDateTimeCtrl:: GetMonthCalColor

Recupera il colore per una parte specificata del calendario mensile all'interno del controllo selezione data e ora.

```
COLORREF GetMonthCalColor(int iColor) const;
```

### <a name="parameters"></a>Parametri

*iColor*<br/>
Valore **int** che specifica quale area dei colori del calendario mensile recuperare. Per un elenco di valori, vedere il parametro *iColor* per [SetMonthCalColor](#setmonthcalcolor).

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta l'impostazione del colore per la parte specificata del controllo calendario mensile, se ha esito positivo. La funzione restituisce-1 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [DTM_GETMCCOLOR](/windows/win32/Controls/dtm-getmccolor)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#2](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_5.cpp)]

##  <a name="getmonthcalctrl"></a>CDateTimeCtrl:: GetMonthCalCtrl

Recupera l'oggetto `CMonthCalCtrl` associato al controllo selezione data e ora.

```
CMonthCalCtrl* GetMonthCalCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md) o null in caso di esito negativo o se la finestra non è visibile.

### <a name="remarks"></a>Osservazioni

Controlli di selezione data e ora creare un controllo calendario mensile figlio quando l'utente fa clic sulla freccia a discesa. Quando l'oggetto `CMonthCalCtrl` non è più necessario, viene eliminato definitivamente, quindi l'applicazione non deve basarsi sull'archiviazione dell'oggetto che rappresenta il calendario mensile figlio del controllo selezione data e ora.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#3](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_6.cpp)]

##  <a name="getmonthcalfont"></a>CDateTimeCtrl:: GetMonthCalFont

Ottiene il tipo di carattere attualmente utilizzato dal controllo calendario mensile del controllo selezione data e ora.

```
CFont* GetMonthCalFont() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CFont](../../mfc/reference/cfont-class.md) o null in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il `CFont` oggetto a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato definitivamente durante il successivo tempo di elaborazione inattivo.

##  <a name="getmonthcalstyle"></a>CDateTimeCtrl:: GetMonthCalStyle

Ottiene lo stile del controllo calendario mensile a discesa associato al controllo selezione data e ora corrente.

```
DWORD GetMonthCalStyle() const;
```

### <a name="return-value"></a>Valore restituito

Stile del controllo calendario mensile a discesa, ovvero una combinazione bit per bit (o) degli stili del controllo selezione data e ora. Per altre informazioni, vedere [stili del controllo calendario mensile](/windows/win32/Controls/month-calendar-control-styles).

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [DTM_GETMCSTYLE](/windows/win32/Controls/dtm-getmcstyle) , descritto nel Windows SDK.

##  <a name="getrange"></a>CDateTimeCtrl:: GetRange

Recupera gli orari di sistema minimi e massimi correnti per un controllo selezione data e ora.

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
Puntatore a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) o a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) che contiene la prima ora consentita nell'oggetto `CDateTimeCtrl`.

*pMaxRange*<br/>
Puntatore a un oggetto `COleDateTime` o a un oggetto `CTime` contenente l'ora più recente consentita nell'oggetto `CDateTimeCtrl`.

### <a name="return-value"></a>Valore restituito

Valore DWORD contenente i flag che indicano gli intervalli impostati. Se

`return value & GDTR_MAX` == 0

il secondo parametro è quindi valido. Analogamente, se

`return value & GDTR_MIN` == 0

il primo parametro è quindi valido.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [DTM_GETRANGE](/windows/win32/Controls/dtm-getrange)del messaggio Win32, come descritto nel Windows SDK. Nell'implementazione di MFC, è possibile specificare l'utilizzo di `COleDateTime` o `CTime`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#4](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_7.cpp)]

##  <a name="gettime"></a>CDateTimeCtrl:: getTime

Recupera l'ora attualmente selezionata da un controllo selezione data e ora e lo inserisce in una struttura `SYSTEMTIME` specificata.

```
BOOL GetTime(COleDateTime& timeDest) const;
DWORD GetTime(CTime& timeDest) const;
DWORD GetTime(LPSYSTEMTIME pTimeDest) const;
```

### <a name="parameters"></a>Parametri

*più a tempo*<br/>
Nella prima versione, un riferimento a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) che riceverà le informazioni sull'ora di sistema. Nella seconda versione, un riferimento a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) che riceverà le informazioni sull'ora di sistema.

*pTimeDest*<br/>
Puntatore alla struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) per ricevere le informazioni sull'ora di sistema. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Nella prima versione, diverso da zero se l'ora viene scritta correttamente nell'oggetto `COleDateTime`; in caso contrario, 0. Nella seconda e nella terza versione, un valore DWORD uguale al membro *dwFlag* impostato nella struttura [NMDATETIMECHANGE](/windows/win32/api/commctrl/ns-commctrl-nmdatetimechange) . Per ulteriori informazioni, vedere la sezione **osservazioni** riportata di seguito.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [DTM_GETSYSTEMTIME](/windows/win32/Controls/dtm-getsystemtime)del messaggio Win32, come descritto nel Windows SDK. Nell'implementazione MFC di `GetTime`, è possibile utilizzare le classi `COleDateTime` o `CTime` oppure è possibile utilizzare una struttura `SYSTEMTIME` per archiviare le informazioni sull'ora.

Il valore DWORD restituito nella seconda e nella terza versione precedente indica se il controllo selezione data e ora è impostato sullo stato "No date", come indicato nel *dwFlags*del membro della struttura [NMDATETIMECHANGE](/windows/win32/api/commctrl/ns-commctrl-nmdatetimechange) . Se il valore restituito è uguale a GDT_NONE, il controllo viene impostato sullo stato "No date" e utilizza lo stile DTS_SHOWNONE. Se il valore restituito è uguale a GDT_VALID, l'ora di sistema viene archiviata correttamente nel percorso di destinazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#5](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_8.cpp)]

##  <a name="getidealsize"></a>CDateTimeCtrl:: GetIdealSize

Restituisce la dimensione ideale del controllo selezione data e ora richiesto per visualizzare la data o l'ora corrente.

```
BOOL GetIdealSize(LPSIZE psize) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*psize*|out Puntatore a una struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) che contiene le dimensioni ideali per il controllo.|

### <a name="return-value"></a>Valore restituito

Il valore restituito è sempre TRUE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [DTM_GETIDEALSIZE](/windows/win32/Controls/dtm-getidealsize) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, *m_dateTimeCtrl*, utilizzata per accedere a livello di codice al controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente vengono recuperate le dimensioni ideali per visualizzare il controllo selezione data e ora.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_9.cpp)]

##  <a name="setformat"></a>CDateTimeCtrl:: seformatt

Imposta la visualizzazione di un controllo selezione data e ora in base a una stringa di formato specificata.

```
BOOL SetFormat(LPCTSTR pstrFormat);
```

### <a name="parameters"></a>Parametri

*pstrFormat*<br/>
Puntatore a una stringa di formato con terminazione zero che definisce la visualizzazione desiderata. Se si imposta questo parametro su NULL, il controllo verrà reimpostato sulla stringa di formato predefinita per lo stile corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

> [!NOTE]
>  L'input dell'utente non determina l'esito positivo o negativo della chiamata.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [DTM_SETFORMAT](/windows/win32/Controls/dtm-setformat)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#6](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_10.cpp)]

##  <a name="setmonthcalcolor"></a>CDateTimeCtrl:: SetMonthCalColor

Imposta il colore per una porzione specificata del calendario mensile in un controllo selezione data e ora.

```
COLORREF SetMonthCalColor(
    int iColor,
    COLORREF ref);
```

### <a name="parameters"></a>Parametri

*iColor*<br/>
valore **int** che specifica l'area del controllo calendario mensile da impostare. Il valore può essere uno dei seguenti.

|valore|Significato|
|-----------|-------------|
|MCSC_BACKGROUND|Imposta il colore di sfondo visualizzato tra i mesi.|
|MCSC_MONTHBK|Imposta il colore di sfondo visualizzato all'interno di un mese.|
|MCSC_TEXT|Imposta il colore utilizzato per visualizzare il testo all'interno di un mese.|
|MCSC_TITLEBK|Imposta il colore di sfondo visualizzato nel titolo del calendario.|
|MCSC_TITLETEXT|Consente di impostare il colore utilizzato per visualizzare il testo all'interno del titolo del calendario.|
|MCSC_TRAILINGTEXT|Imposta il colore utilizzato per visualizzare il testo dell'intestazione e del giorno finale. Le intestazioni e i giorni finali sono i giorni dei mesi precedenti e successivi visualizzati nel calendario corrente.|

*ref*<br/>
Valore COLORREF che rappresenta il colore che verrà impostato per l'area specificata del calendario mensile.

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta l'impostazione del colore precedente per la parte specificata del controllo calendario mensile, se ha esito positivo. In caso contrario, il messaggio restituisce-1.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [DTM_SETMCCOLOR](/windows/win32/Controls/dtm-setmccolor)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CDateTimeCtrl:: GetMonthCalColor](#getmonthcalcolor).

##  <a name="setmonthcalfont"></a>CDateTimeCtrl:: SetMonthCalFont

Imposta il tipo di carattere utilizzato dal controllo calendario mensile figlio del controllo selezione data e ora.

```
void SetMonthCalFont(
    HFONT hFont,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*hFont*<br/>
Handle per il tipo di carattere che verrà impostato.

*bRedraw*<br/>
Specifica se il controllo deve essere ridisegnato immediatamente dopo l'impostazione del tipo di carattere. Se si imposta questo parametro su TRUE, il controllo verrà ridisegnato automaticamente.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [DTM_SETMCFONT](/windows/win32/Controls/dtm-setmcfont)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#7](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_11.cpp)]

> [!NOTE]
>  Se si usa questo codice, è necessario creare un membro della classe derivata da `CDialog`denominata *m_MonthFont* di tipo `CFont`.

##  <a name="setmonthcalstyle"></a>CDateTimeCtrl:: SetMonthCalStyle

Imposta lo stile del controllo calendario mensile a discesa associato al controllo selezione data e ora corrente.

```
DWORD SetMonthCalStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwStyle*|in Nuovo stile del controllo calendario mensile, ovvero una combinazione bit per bit (o) degli stili del controllo calendario mensile. Per altre informazioni, vedere [stili del controllo calendario mensile](/windows/win32/Controls/month-calendar-control-styles).|

### <a name="return-value"></a>Valore restituito

Stile precedente del controllo calendario mensile a discesa.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [DTM_SETMCSTYLE](/windows/win32/Controls/dtm-setmcstyle) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, *m_dateTimeCtrl*, utilizzata per accedere a livello di codice al controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene impostato il controllo selezione data e ora per visualizzare i numeri settimanali, i nomi abbreviati dei giorni della settimana e nessun indicatore di oggi.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_12.cpp)]

##  <a name="setrange"></a>CDateTimeCtrl:: SetRange

Imposta l'ora di sistema minima e massima consentita per un controllo selezione data e ora.

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
Puntatore a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) o a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) che contiene la prima ora consentita nell'oggetto `CDateTimeCtrl`.

*pMaxRange*<br/>
Puntatore a un oggetto `COleDateTime` o a un oggetto `CTime` contenente l'ora più recente consentita nell'oggetto `CDateTimeCtrl`.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [DTM_SETRANGE](/windows/win32/Controls/dtm-setrange)del messaggio Win32, come descritto nel Windows SDK. Nell'implementazione di MFC, è possibile specificare l'utilizzo di `COleDateTime` o `CTime`. Se lo stato dell'oggetto `COleDateTime` è NULL, l'intervallo verrà rimosso. Se il puntatore `CTime` o il puntatore `COleDateTime` è NULL, l'intervallo verrà rimosso.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CDateTimeCtrl:: GetRange](#getrange).

##  <a name="settime"></a>CDateTimeCtrl:: setime

Imposta l'ora in un controllo selezione data e ora.

```
BOOL SetTime(const COleDateTime& timeNew);
BOOL SetTime(const CTime* pTimeNew);
BOOL SetTime(LPSYSTEMTIME pTimeNew = NULL);
```

### <a name="parameters"></a>Parametri

*timeNew*<br/>
Riferimento a un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) contenente l'oggetto in cui verrà impostato il controllo.

*pTimeNew*<br/>
Nella seconda versione precedente, un puntatore a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) contenente l'ora in cui verrà impostato il controllo. Nella terza versione precedente, puntatore a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) contenente l'ora in cui verrà impostato il controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [DTM_SETSYSTEMTIME](/windows/win32/Controls/dtm-setsystemtime)del messaggio Win32, come descritto nel Windows SDK. Nell'implementazione MFC di `SetTime`, è possibile utilizzare le classi `COleDateTime` o `CTime` oppure è possibile utilizzare una struttura `SYSTEMTIME` per impostare le informazioni sull'ora.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#8](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_13.cpp)]

## <a name="see-also"></a>Vedere anche

[CMNCTRL1 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)
