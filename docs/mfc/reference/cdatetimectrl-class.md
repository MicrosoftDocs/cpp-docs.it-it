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
ms.openlocfilehash: d0433507c32c7359f8033836bf845defa8ad7f7a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321907"
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
|[CDateTimeCtrl::CloseMonthCal](#closemonthcal)|Chiude il controllo selezione data e ora corrente.|
|[CDateTimeCtrl::Crea](#create)|Crea il controllo selezione data e ora `CDateTimeCtrl` e lo associa all'oggetto.|
|[CDateTimeCtrl::GetDateTimePickerInfo](#getdatetimepickerinfo)|Recupera informazioni sul controllo selezione data e ora corrente.|
|[CDateTimeCtrl::GetIdealSize](#getidealsize)|Restituisce la dimensione ideale del controllo selezione data e ora necessario per visualizzare la data o l'ora corrente.|
|[CDateTimeCtrl::GetMonthCalColor](#getmonthcalcolor)|Recupera il colore per una determinata parte del calendario del mese all'interno del controllo selezione data e ora.|
|[CDateTimeCtrl::GetMonthCalCtrl](#getmonthcalctrl)|Recupera l'oggetto `CMonthCalCtrl` associato al controllo selezione data e ora.|
|[CDateTimeCtrl::GetMonthCalFont](#getmonthcalfont)|Recupera il tipo di carattere attualmente utilizzato dal controllo calendario mensile figlio del controllo selezione data e ora.|
|[CDateTimeCtrl::GetMonthCalStyle](#getmonthcalstyle)|Ottiene lo stile del controllo selezione data e ora corrente.|
|[CDateTimeCtrl::GetRange](#getrange)|Recupera le ore di sistema minime e massime correnti consentite per un controllo selezione data e ora.|
|[CDateTimeCtrl::GetTime](#gettime)|Recupera l'ora attualmente selezionata da un controllo selezione `SYSTEMTIME` data e ora e la inserisce in una struttura specificata.|
|[CDateTimeCtrl::SetFormat](#setformat)|Imposta la visualizzazione di un controllo selezione data e ora in base a una stringa di formato specificata.|
|[CDateTimeCtrl::SetMonthCalColor](#setmonthcalcolor)|Imposta il colore per una determinata parte del calendario mensile all'interno di un controllo selezione data e ora.|
|[CDateTimeCtrl::SetMonthCalFont](#setmonthcalfont)|Imposta il tipo di carattere che verrà utilizzato dal controllo calendario del mese figlio del controllo selezione data e ora.|
|[CDateTimeCtrl::SetMonthCalStyle](#setmonthcalstyle)|Imposta lo stile del controllo selezione data e ora corrente.|
|[CDateTimeCtrl::SetRange](#setrange)|Imposta gli orari di sistema minimi e massimi consentiti per un controllo selezione data e ora.|
|[CDateTimeCtrl::SetTime](#settime)|Imposta l'ora in un controllo selezione data e ora.|

## <a name="remarks"></a>Osservazioni

Il controllo selezione data e ora (controllo DTP) fornisce una semplice interfaccia per lo scambio di informazioni su data e ora con un utente. Questa interfaccia contiene campi, ognuno dei quali visualizza una parte delle informazioni di data e ora memorizzate nel controllo. L'utente può modificare le informazioni archiviate nel controllo modificando il contenuto della stringa in un determinato campo. L'utente può spostarsi da un campo all'altro utilizzando il mouse o la tastiera.

È possibile personalizzare il controllo selezione data e ora applicando diversi stili all'oggetto al momento della creazione. Per ulteriori informazioni sugli stili specifici del controllo selezione data e ora, vedere [Stili del controllo selezione data e ora](/windows/win32/Controls/date-and-time-picker-control-styles) in Windows SDK. È possibile impostare il formato di visualizzazione del controllo DTP utilizzando gli stili di formato. Questi stili di formato sono descritti in "Stili di formato" nell'argomento di Windows SDK [Stili controllo selezione data e ora](/windows/win32/Controls/date-and-time-picker-control-styles).

Il controllo selezione data e ora utilizza anche le notifiche e i callback, descritti in Utilizzo di [CDateTimeCtrl](../../mfc/using-cdatetimectrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CDateTimeCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdtctl.h

## <a name="cdatetimectrlcdatetimectrl"></a><a name="cdatetimectrl"></a>CDateTimeCtrl::CDateTimeCtrl

Costruisce un oggetto `CDateTimeCtrl`.

```
CDateTimeCtrl();
```

## <a name="cdatetimectrlclosemonthcal"></a><a name="closemonthcal"></a>CDateTimeCtrl::CloseMonthCal

Chiude il controllo selezione data e ora corrente.

```
void CloseMonthCal() const;
```

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio DTM_CLOSEMONTHCAL,](/windows/win32/Controls/dtm-closemonthcal) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la *variabile, m_dateTimeCtrl*, utilizzata per accedere a livello di codice al controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene chiuso il calendario a discesa per il controllo selezione data e ora corrente.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#5](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_2.cpp)]

## <a name="cdatetimectrlcreate"></a><a name="create"></a>CDateTimeCtrl::Crea

Crea il controllo selezione data e ora `CDateTimeCtrl` e lo associa all'oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica la combinazione di stili di controllo data e ora. Per ulteriori informazioni sugli stili di selezione data e ora, vedere [Stili del controllo selezione data e ora](/windows/win32/Controls/date-and-time-picker-control-styles) in Windows SDK.

*Rect*<br/>
Riferimento a una struttura [RECT,](/previous-versions/dd162897\(v=vs.85\)) ovvero la posizione e le dimensioni del controllo selezione data e ora.

*pParentWnd (informazioni in due)*<br/>
Puntatore a un [cWnd](../../mfc/reference/cwnd-class.md) oggetto che è la finestra padre del controllo selezione data e ora. Non deve essere NULL.

*nID*<br/>
Specifica l'ID di controllo del controllo selezione data e ora.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la creazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

##### <a name="to-create-a-date-and-time-picker-control"></a>Per creare un controllo selezione data e oraTo create a date and time picker control

1. Chiamare [CDateTimeCtrl](#cdatetimectrl) per `CDateTimeCtrl` costruire un oggetto.

1. Chiamare questa funzione membro, che crea il controllo selezione data `CDateTimeCtrl` e ora di Windows e lo associa all'oggetto.

Quando si `Create`chiama , i controlli comuni vengono inizializzati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_3.cpp)]

## <a name="cdatetimectrlgetdatetimepickerinfo"></a><a name="getdatetimepickerinfo"></a>CDateTimeCtrl::GetDateTimePickerInfo

Recupera informazioni sul controllo selezione data e ora corrente.

```
BOOL GetDateTimePickerInfo(LPDATETIMEPICKERINFO pDateTimePickerInfo) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pDateTimePickerInfo (informazioni in locale)*|[fuori] Puntatore a una struttura [DATETIMEPICKERINFO](/windows/win32/api/commctrl/ns-commctrl-datetimepickerinfo) che riceve una descrizione del controllo selezione data e ora corrente.<br /><br /> Il chiamante è responsabile dell'allocazione di questa struttura. Tuttavia, questo metodo inizializza il *cbSize* membro della struttura.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio DTM_GETDATETIMEPICKERINFO,](/windows/win32/Controls/dtm-getdatetimepickerinfo) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la *variabile, m_dateTimeCtrl*, utilizzata per accedere a livello di codice al controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene indicato se viene recuperato correttamente le informazioni sul controllo selezione data e ora corrente.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_4.cpp)]

## <a name="cdatetimectrlgetmonthcalcolor"></a><a name="getmonthcalcolor"></a>CDateTimeCtrl::GetMonthCalColor

Recupera il colore per una determinata parte del calendario del mese all'interno del controllo selezione data e ora.

```
COLORREF GetMonthCalColor(int iColor) const;
```

### <a name="parameters"></a>Parametri

*iColor (colore)*<br/>
Valore **int** che specifica l'area colore del calendario mensile da recuperare. Per un elenco di valori, vedere il parametro *iColor* per [SetMonthCalColor](#setmonthcalcolor).

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta l'impostazione del colore per la parte specificata del controllo calendario mensile in caso di esito positivo. La funzione restituisce -1 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_GETMCCOLOR](/windows/win32/Controls/dtm-getmccolor), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#2](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_5.cpp)]

## <a name="cdatetimectrlgetmonthcalctrl"></a><a name="getmonthcalctrl"></a>CDateTimeCtrl::GetMonthCalCtrl

Recupera l'oggetto `CMonthCalCtrl` associato al controllo selezione data e ora.

```
CMonthCalCtrl* GetMonthCalCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md) oggetto o NULL se non riesce o se la finestra non è visibile.

### <a name="remarks"></a>Osservazioni

I controlli selezione data e ora creano un controllo calendario mensile figlio quando l'utente fa clic sulla freccia a discesa. Quando `CMonthCalCtrl` l'oggetto non è più necessario, viene eliminato, pertanto l'applicazione non deve basarsi sull'archiviazione dell'oggetto che rappresenta il calendario dei mesi figlio del controllo selezione data e ora.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#3](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_6.cpp)]

## <a name="cdatetimectrlgetmonthcalfont"></a><a name="getmonthcalfont"></a>CDateTimeCtrl::GetMonthCalFont

Ottiene il tipo di carattere attualmente utilizzato dal controllo calendario mensile del controllo selezione data e ora.

```
CFont* GetMonthCalFont() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [CFont](../../mfc/reference/cfont-class.md) oggetto o NULL in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

L'oggetto `CFont` a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato durante il successivo tempo di elaborazione inattivo.

## <a name="cdatetimectrlgetmonthcalstyle"></a><a name="getmonthcalstyle"></a>CDateTimeCtrl::GetMonthCalStyle

Ottiene lo stile del controllo calendario mensile a discesa associato al controllo selezione data e ora corrente.

```
DWORD GetMonthCalStyle() const;
```

### <a name="return-value"></a>Valore restituito

Lo stile del controllo calendario mensile a discesa, ovvero una combinazione bit per bit (OR) degli stili del controllo selezione data e ora. Per ulteriori informazioni, vedere [Stili dei controlli Calendario mensile](/windows/win32/Controls/month-calendar-control-styles).

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio DTM_GETMCSTYLE,](/windows/win32/Controls/dtm-getmcstyle) descritto in Windows SDK.

## <a name="cdatetimectrlgetrange"></a><a name="getrange"></a>CDateTimeCtrl::GetRange

Recupera le ore di sistema minime e massime correnti consentite per un controllo selezione data e ora.

```
DWORD GetRange(
    COleDateTime* pMinRange,
    COleDateTime* pMaxRange) const;

DWORD GetRange(
    CTime* pMinRange,
    CTime* pMaxRange) const;
```

### <a name="parameters"></a>Parametri

*PMinRange (in quadra*<br/>
Puntatore a un [oggetto COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) o a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) contenente la prima ora consentita nell'oggetto. `CDateTimeCtrl`

*pMaxRange*<br/>
Puntatore a `COleDateTime` un `CTime` oggetto o a un `CDateTimeCtrl` oggetto contenente l'ora più recente consentita nell'oggetto.

### <a name="return-value"></a>Valore restituito

Valore DWORD contenente flag che indicano quali intervalli sono impostati. Se

`return value & GDTR_MAX` == 0

quindi il secondo parametro è valido. Allo stesso modo, se

`return value & GDTR_MIN` == 0

quindi il primo parametro è valido.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_GETRANGE](/windows/win32/Controls/dtm-getrange), come descritto in Windows SDK. Nell'implementazione di MFC, `COleDateTime` è `CTime` possibile specificare uno o più utilizzi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#4](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_7.cpp)]

## <a name="cdatetimectrlgettime"></a><a name="gettime"></a>CDateTimeCtrl::GetTime

Recupera l'ora attualmente selezionata da un controllo selezione `SYSTEMTIME` data e ora e la inserisce in una struttura specificata.

```
BOOL GetTime(COleDateTime& timeDest) const;
DWORD GetTime(CTime& timeDest) const;
DWORD GetTime(LPSYSTEMTIME pTimeDest) const;
```

### <a name="parameters"></a>Parametri

*timeDest*<br/>
Nella prima versione, un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che riceverà le informazioni sull'ora di sistema. Nella seconda versione, un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che riceverà le informazioni sull'ora di sistema.

*pTimeDest*<br/>
Puntatore alla struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) per ricevere le informazioni sull'ora di sistema. Non deve essere NULL.

### <a name="return-value"></a>Valore restituito

Nella prima versione, diverso da zero se `COleDateTime` l'ora viene scritta correttamente nell'oggetto; in caso contrario 0. Nella seconda e nella terza versione, un valore DWORD uguale al membro *dwFlag* impostato nella struttura [NMDATETIMECHANGE.](/windows/win32/api/commctrl/ns-commctrl-nmdatetimechange) Per ulteriori **informazioni,** vedere la sezione Osservazioni riportata di seguito.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_GETSYSTEMTIME](/windows/win32/Controls/dtm-getsystemtime), come descritto in Windows SDK. Nell'implementazione `GetTime`MFC di `COleDateTime` , `CTime` è possibile utilizzare `SYSTEMTIME` o classi oppure è possibile utilizzare una struttura per archiviare le informazioni sull'ora.

Il valore restituito DWORD nella seconda e nella terza versione, sopra riportato, indica se il controllo selezione data e ora è impostato o meno sullo stato "nessuna data", come indicato nel membro della struttura *dwFlags*di [NMDATETIMECHANGE](/windows/win32/api/commctrl/ns-commctrl-nmdatetimechange) . Se il valore restituito è uguale GDT_NONE, il controllo viene impostato sullo stato "nessuna data" e utilizza lo stile di DTS_SHOWNONE. Se il valore restituito è uguale a GDT_VALID, l'ora di sistema viene archiviata correttamente nel percorso di destinazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#5](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_8.cpp)]

## <a name="cdatetimectrlgetidealsize"></a><a name="getidealsize"></a>CDateTimeCtrl::GetIdealSize

Restituisce la dimensione ideale del controllo selezione data e ora necessario per visualizzare la data o l'ora corrente.

```
BOOL GetIdealSize(LPSIZE psize) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*psize*|[fuori] Puntatore a una struttura [dimensione](/windows/win32/api/windef/ns-windef-size) che contiene la dimensione ideale per il controllo.|

### <a name="return-value"></a>Valore restituito

Il valore restituito è sempre TRUE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio DTM_GETIDEALSIZE,](/windows/win32/Controls/dtm-getidealsize) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la *variabile, m_dateTimeCtrl*, utilizzata per accedere a livello di codice al controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene illustrato come recuperare le dimensioni ideali per visualizzare il controllo selezione data e ora.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_9.cpp)]

## <a name="cdatetimectrlsetformat"></a><a name="setformat"></a>CDateTimeCtrl::SetFormat

Imposta la visualizzazione di un controllo selezione data e ora in base a una stringa di formato specificata.

```
BOOL SetFormat(LPCTSTR pstrFormat);
```

### <a name="parameters"></a>Parametri

*pstrFormat (formattazione pstr)*<br/>
Puntatore a una stringa di formato con terminazione zero che definisce la visualizzazione desiderata. L'impostazione di questo parametro su NULL reimposterà il controllo sulla stringa di formato predefinita per lo stile corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

> [!NOTE]
> L'input dell'utente non determina l'esito positivo o negativo per questa chiamata.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETFORMAT](/windows/win32/Controls/dtm-setformat), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#6](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_10.cpp)]

## <a name="cdatetimectrlsetmonthcalcolor"></a><a name="setmonthcalcolor"></a>CDateTimeCtrl::SetMonthCalColor

Imposta il colore per una determinata parte del calendario mensile all'interno di un controllo selezione data e ora.

```
COLORREF SetMonthCalColor(
    int iColor,
    COLORREF ref);
```

### <a name="parameters"></a>Parametri

*iColor (colore)*<br/>
**valore int** che specifica l'area del controllo calendario mensile da impostare. Questo valore può essere uno dei seguenti.

|Valore|Significato|
|-----------|-------------|
|MCSC_BACKGROUND|Impostare il colore di sfondo visualizzato tra i mesi.|
|MCSC_MONTHBK|Impostare il colore di sfondo visualizzato entro un mese.|
|MCSC_TEXT|Impostare il colore utilizzato per visualizzare il testo entro un mese.|
|MCSC_TITLEBK|Impostare il colore di sfondo visualizzato nel titolo del calendario.|
|MCSC_TITLETEXT|Impostare il colore utilizzato per visualizzare il testo all'interno del titolo del calendario.|
|MCSC_TRAILINGTEXT|Impostare il colore utilizzato per visualizzare l'intestazione e il testo del giorno finale. Intestazione e giorni finali sono i giorni dei mesi precedenti e successivi visualizzati nel calendario corrente.|

*ref*<br/>
Valore COLORREF che rappresenta il colore che verrà impostato per l'area specificata del calendario mensile.

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta l'impostazione di colore precedente per la parte specificata del controllo calendario mensile in caso di esito positivo. In caso contrario, il messaggio restituisce -1.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETMCCOLOR](/windows/win32/Controls/dtm-setmccolor), come descritto in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CDateTimeCtrl::GetMonthCalColor](#getmonthcalcolor).

## <a name="cdatetimectrlsetmonthcalfont"></a><a name="setmonthcalfont"></a>CDateTimeCtrl::SetMonthCalFont

Imposta il tipo di carattere che verrà utilizzato dal controllo calendario del mese figlio del controllo selezione data e ora.

```
void SetMonthCalFont(
    HFONT hFont,
    BOOL bRedraw = TRUE);
```

### <a name="parameters"></a>Parametri

*hCarattere*<br/>
Handle per il tipo di carattere che verrà impostato.

*bRedraw*<br/>
Specifica se il controllo deve essere ridisegnato immediatamente dopo l'impostazione del tipo di carattere. L'impostazione di questo parametro su TRUE causa il ridisegno del controllo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETMCFONT](/windows/win32/Controls/dtm-setmcfont), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#7](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_11.cpp)]

> [!NOTE]
> Se si utilizza questo codice, è consigliabile `CDialog`rendere un membro della `CFont`classe derivata da *m_MonthFont* di tipo .

## <a name="cdatetimectrlsetmonthcalstyle"></a><a name="setmonthcalstyle"></a>CDateTimeCtrl::SetMonthCalStyle

Imposta lo stile del controllo calendario mensile a discesa associato al controllo selezione data e ora corrente.

```
DWORD SetMonthCalStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*DwStyle (in stile dwStyle)*|[in] Nuovo stile di controllo calendario mensile, ovvero una combinazione bit per bit (OR) degli stili del controllo calendario mensile. Per ulteriori informazioni, vedere [Stili dei controlli Calendario mensile](/windows/win32/Controls/month-calendar-control-styles).|

### <a name="return-value"></a>Valore restituito

Stile precedente del controllo calendario mensile a discesa.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio di DTM_SETMCSTYLE,](/windows/win32/Controls/dtm-setmcstyle) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la *variabile, m_dateTimeCtrl*, utilizzata per accedere a livello di codice al controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene illustrato come impostare il controllo selezione data e ora per visualizzare i numeri delle settimane, i nomi abbreviati dei giorni della settimana e nessun indicatore di data odierna.

[!code-cpp[NVC_MFC_CDateTimeCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_12.cpp)]

## <a name="cdatetimectrlsetrange"></a><a name="setrange"></a>CDateTimeCtrl::SetRange

Imposta gli orari di sistema minimi e massimi consentiti per un controllo selezione data e ora.

```
BOOL SetRange(
    const COleDateTime* pMinRange,
    const COleDateTime* pMaxRange);

BOOL SetRange(
    const CTime* pMinRange,
    const CTime* pMaxRange);
```

### <a name="parameters"></a>Parametri

*PMinRange (in quadra*<br/>
Puntatore a un [oggetto COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) o a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) contenente la prima ora consentita nell'oggetto. `CDateTimeCtrl`

*pMaxRange*<br/>
Puntatore a `COleDateTime` un `CTime` oggetto o a un `CDateTimeCtrl` oggetto contenente l'ora più recente consentita nell'oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETRANGE](/windows/win32/Controls/dtm-setrange), come descritto in Windows SDK. Nell'implementazione di MFC, `COleDateTime` è `CTime` possibile specificare uno o più utilizzi. Se `COleDateTime` lo stato dell'oggetto è NULL, l'intervallo verrà rimosso. Se `CTime` il puntatore o il `COleDateTime` puntatore è NULL, l'intervallo verrà rimosso.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CDateTimeCtrl::GetRange](#getrange).

## <a name="cdatetimectrlsettime"></a><a name="settime"></a>CDateTimeCtrl::SetTime

Imposta l'ora in un controllo selezione data e ora.

```
BOOL SetTime(const COleDateTime& timeNew);
BOOL SetTime(const CTime* pTimeNew);
BOOL SetTime(LPSYSTEMTIME pTimeNew = NULL);
```

### <a name="parameters"></a>Parametri

*timeNew*<br/>
Un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto contenente l'oggetto che verrà impostato il controllo.

*pTimeNuovo*<br/>
Nella seconda versione precedente, un puntatore a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto contenente l'ora in cui verrà impostato il controllo. Nella terza versione precedente, un puntatore a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) contenente l'ora in cui verrà impostato il controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETSYSTEMTIME](/windows/win32/Controls/dtm-setsystemtime), come descritto in Windows SDK. Nell'implementazione `SetTime`MFC di , `COleDateTime` `CTime` è possibile utilizzare le `SYSTEMTIME` classi o oppure una struttura per impostare le informazioni sull'ora.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CDateTimeCtrl#8](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_13.cpp)]

## <a name="see-also"></a>Vedere anche

[ESEMPIO MFC CMNCTRL1](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)
