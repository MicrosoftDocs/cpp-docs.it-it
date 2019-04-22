---
title: Classe CProgressCtrl
ms.date: 11/04/2016
f1_keywords:
- CProgressCtrl
- AFXCMN/CProgressCtrl
- AFXCMN/CProgressCtrl::CProgressCtrl
- AFXCMN/CProgressCtrl::Create
- AFXCMN/CProgressCtrl::CreateEx
- AFXCMN/CProgressCtrl::GetBarColor
- AFXCMN/CProgressCtrl::GetBkColor
- AFXCMN/CProgressCtrl::GetPos
- AFXCMN/CProgressCtrl::GetRange
- AFXCMN/CProgressCtrl::GetState
- AFXCMN/CProgressCtrl::GetStep
- AFXCMN/CProgressCtrl::OffsetPos
- AFXCMN/CProgressCtrl::SetBarColor
- AFXCMN/CProgressCtrl::SetBkColor
- AFXCMN/CProgressCtrl::SetMarquee
- AFXCMN/CProgressCtrl::SetPos
- AFXCMN/CProgressCtrl::SetRange
- AFXCMN/CProgressCtrl::SetState
- AFXCMN/CProgressCtrl::SetStep
- AFXCMN/CProgressCtrl::StepIt
helpviewer_keywords:
- CProgressCtrl [MFC], CProgressCtrl
- CProgressCtrl [MFC], Create
- CProgressCtrl [MFC], CreateEx
- CProgressCtrl [MFC], GetBarColor
- CProgressCtrl [MFC], GetBkColor
- CProgressCtrl [MFC], GetPos
- CProgressCtrl [MFC], GetRange
- CProgressCtrl [MFC], GetState
- CProgressCtrl [MFC], GetStep
- CProgressCtrl [MFC], OffsetPos
- CProgressCtrl [MFC], SetBarColor
- CProgressCtrl [MFC], SetBkColor
- CProgressCtrl [MFC], SetMarquee
- CProgressCtrl [MFC], SetPos
- CProgressCtrl [MFC], SetRange
- CProgressCtrl [MFC], SetState
- CProgressCtrl [MFC], SetStep
- CProgressCtrl [MFC], StepIt
ms.assetid: 222630f4-1598-4026-8198-51649b1192ab
ms.openlocfilehash: 15241485278f09d16c86fc7274f2fc1d85a7a2f7
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58778949"
---
# <a name="cprogressctrl-class"></a>Classe CProgressCtrl

Fornisce la funzionalità del controllo indicatore di stato comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CProgressCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CProgressCtrl::CProgressCtrl](#cprogressctrl)|Costruisce un oggetto `CProgressCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CProgressCtrl::Create](#create)|Crea un controllo indicatore di stato e la collega a un `CProgressCtrl` oggetto.|
|[CProgressCtrl::CreateEx](#createex)|Crea un controllo di stato con gli stili estesi di Windows specificati e lo collega a un `CProgressCtrl` oggetto.|
|[CProgressCtrl::GetBarColor](#getbarcolor)|Ottiene il colore della barra di indicatore di stato di avanzamento per il controllo barra di stato di avanzamento corrente.|
|[CProgressCtrl::GetBkColor](#getbkcolor)|Ottiene il colore di sfondo della barra di stato di avanzamento corrente.|
|[CProgressCtrl::GetPos](#getpos)|Ottiene la posizione corrente dell'indicatore di stato.|
|[CProgressCtrl::GetRange](#getrange)|Ottiene i limiti inferiori e superiori dell'intervallo del controllo indicatore di stato.|
|[CProgressCtrl::GetState](#getstate)|Ottiene lo stato del controllo indicatore di stato di avanzamento corrente.|
|[CProgressCtrl::GetStep](#getstep)|Recupera l'incremento di passaggio per l'indicatore di stato del controllo indicatore di stato di avanzamento corrente.|
|[CProgressCtrl::OffsetPos](#offsetpos)|Sposta in avanti la posizione corrente di un controllo indicatore di stato di un incremento specificato e lo ridisegna la barra in modo da riflettere la nuova posizione.|
|[CProgressCtrl::SetBarColor](#setbarcolor)|Imposta il colore della barra di indicatore di stato di avanzamento nel controllo indicatore di stato di avanzamento corrente.|
|[CProgressCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo per l'indicatore di stato.|
|[CProgressCtrl::SetMarquee](#setmarquee)|Abilita la modalità di selezione attiva o disattiva per il controllo barra di stato di avanzamento corrente.|
|[CProgressCtrl::SetPos](#setpos)|Imposta la posizione corrente per un controllo indicatore di stato e lo ridisegna la barra in modo da riflettere la nuova posizione.|
|[CProgressCtrl::SetRange](#setrange)|Imposta l'intervallo minimo e massimo per un controllo indicatore di stato e lo ridisegna la barra in modo da riflettere i nuovi intervalli.|
|[CProgressCtrl::SetState](#setstate)|Imposta lo stato del controllo indicatore di stato corrente.|
|[CProgressCtrl::SetStep](#setstep)|Specifica l'incremento di passaggio di un controllo indicatore di stato.|
|[CProgressCtrl::StepIt](#stepit)|Fa avanzare la posizione corrente per un controllo indicatore di stato l'incremento di passaggio (vedere [SetStep](#setstep)) e lo ridisegna la barra in modo da riflettere la nuova posizione.|

## <a name="remarks"></a>Note

Un controllo indicatore di stato è una finestra che un'applicazione può utilizzare per indicare lo stato di avanzamento di un'operazione di lunga durata. È costituito da un rettangolo che viene riempito gradualmente da sinistra a destra, con il sistema di colore di evidenziazione durante l'avanzamento dell'operazione.

Un controllo indicatore di stato con un intervallo e una posizione corrente. L'intervallo rappresenta la durata totale dell'operazione e la posizione corrente rappresenta lo stato di avanzamento che dell'applicazione ha compiuto verso il completamento dell'operazione. La procedura della finestra Usa l'intervallo e la posizione corrente per determinare la percentuale dell'indicatore di stato da riempire con il colore di evidenziazione. Poiché l'intervallo e i valori di posizione corrente sono espressi come numeri interi con segno, la gamma di valori di posizione corrente è compreso tra -2.147.483.648 a 2.147.483.647 inclusi.

Per altre informazioni sull'uso `CProgressCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [usando CProgressCtrl](../../mfc/using-cprogressctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CProgressCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="cprogressctrl"></a>  CProgressCtrl::CProgressCtrl

Costruisce un oggetto `CProgressCtrl`.

```
CProgressCtrl();
```

### <a name="remarks"></a>Note

Al termine della creazione di `CProgressCtrl` dell'oggetto, chiamare `CProgressCtrl::Create` per creare il controllo barra di stato di avanzamento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_1.cpp)]

##  <a name="create"></a>  CProgressCtrl::Create

Crea un controllo indicatore di stato e la collega a un `CProgressCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo indicatore di stato. Applicare qualsiasi combinazione di finestra stylesdescribed nelle [CreateWindow](/windows/desktop/api/winuser/nf-winuser-createwindowa) nel SDK di Windows, oltre a indicatore degli stili del controllo, al controllo di stato seguente:

- PBS_VERTICAL consente di visualizzare informazioni di stato verticalmente, dall'alto verso il basso. Senza questo flag, controllo indicatore di stato vengono visualizzati orizzontalmente, da sinistra a destra.

- Graduale consente di visualizzare PBS_SMOOTH, smooth compilando il controllo barra di stato di avanzamento. Senza questo flag, riempirà con i blocchi.

*rect*<br/>
Specifica le dimensioni e la posizione del controllo indicatore di stato. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura. Poiché il controllo deve essere una finestra figlio, delle coordinate specificate sono relativo all'area client del *pParentWnd*.

*pParentWnd*<br/>
Specifica lo stato di avanzamento della barra di finestra padre del controllo, in genere un `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID. del controllo indicatore di stato

### <a name="return-value"></a>Valore restituito

TRUE se il `CProgressCtrl` oggetto è stato creato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Si costruisce un `CProgressCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore che crea il `CProgressCtrl` dell'oggetto e quindi chiamare `Create`, che consente di creare il controllo barra di stato di avanzamento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#2](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_2.cpp)]

##  <a name="createex"></a>  CProgressCtrl::CreateEx

Crea un controllo (una finestra figlio) e la associa il `CProgressCtrl` oggetto.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwExStyle*<br/>
Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere la *dwExStyle* parametro per [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.

*dwStyle*<br/>
Specifica lo stile del controllo indicatore di stato. Applicare qualsiasi combinazione degli stili finestra descritto nella [CreateWindow](/windows/desktop/api/winuser/nf-winuser-createwindowa) nel SDK di Windows.

*rect*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che descrive le dimensioni e posizione della finestra da creare, nelle coordinate del client *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo.

*nID*<br/>
ID di finestra figlio. del controllo

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Uso `CreateEx` invece di [Create](#create) per applicare stili estesi di Windows, specificati dal prefisso di stile esteso di Windows **WS_EX _**.

##  <a name="getbarcolor"></a>  CProgressCtrl::GetBarColor

Ottiene il colore della barra di indicatore di stato di avanzamento per il controllo barra di stato di avanzamento corrente.

```
COLORREF GetBarColor() const;
```

### <a name="return-value"></a>Valore restituito

Il colore dell'indicatore di stato corrente, rappresentato come un [COLORREF](/windows/desktop/gdi/colorref) valore o CLR_DEFAULT se il colore della barra di stato di avanzamento indicatore è il colore predefinito.

### <a name="remarks"></a>Note

Questo metodo invia il [PBM_GETBARCOLOR](/windows/desktop/Controls/pbm-getbarcolor) messaggio, che è descritti nel SDK di Windows.

##  <a name="getbkcolor"></a>  CProgressCtrl::GetBkColor

Ottiene il colore di sfondo della barra di stato di avanzamento corrente.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Il colore di sfondo della barra di stato di avanzamento corrente, rappresentato come un [COLORREF](/windows/desktop/gdi/colorref) valore.

### <a name="remarks"></a>Note

Questo metodo invia il [PBM_GETBKCOLOR](/windows/desktop/Controls/pbm-getbkcolor) messaggio, che è descritti nel SDK di Windows.

##  <a name="getpos"></a>  CProgressCtrl::GetPos

Recupera la posizione corrente dell'indicatore di stato.

```
int GetPos();
```

### <a name="return-value"></a>Valore restituito

Posizione del controllo indicatore di stato.

### <a name="remarks"></a>Note

La posizione del controllo indicatore di stato non è la posizione fisica su schermo, ma piuttosto tra superiore e inferiore intervallo indicato nel [SetRange](#setrange).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#3](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_3.cpp)]

##  <a name="getrange"></a>  CProgressCtrl::GetRange

Ottiene l'attuali limiti inferiori e superiori, o l'intervallo, del controllo indicatore di stato di avanzamento.

```
void GetRange(
    int& nLower,
    int& nUpper);
```

### <a name="parameters"></a>Parametri

*nLower*<br/>
Un riferimento a un integer che riceve il limite inferiore del controllo indicatore di stato.

*nUpper*<br/>
Un riferimento a un integer che riceve il limite superiore del controllo indicatore di stato di avanzamento.

### <a name="remarks"></a>Note

Questa funzione copia i valori dei limiti inferiori e superiori per i numeri interi fa *nLower* e *nUpper*, rispettivamente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#4](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_4.cpp)]

##  <a name="getstate"></a>  CProgressCtrl::GetState

Ottiene lo stato del controllo indicatore di stato di avanzamento corrente.

```
int GetState() const;
```

### <a name="return-value"></a>Valore restituito

Lo stato del controllo barra lo stato di avanzamento corrente che è uno dei valori seguenti:

|Value|Stato|
|-----------|-----------|
|PBST_NORMAL|In corso|
|PBST_ERROR|Error|
|PBST_PAUSED|In pausa|

### <a name="remarks"></a>Note

Questo metodo invia il [PBM_GETSTATE](/windows/desktop/Controls/pbm-getstate) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente recupera lo stato del controllo indicatore di stato di avanzamento corrente.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#5](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_6.cpp)]

##  <a name="getstep"></a>  CProgressCtrl::GetStep

Recupera l'incremento di passaggio per l'indicatore di stato del controllo indicatore di stato di avanzamento corrente.

```
int GetStep() const;
```

### <a name="return-value"></a>Valore restituito

L'incremento del passaggio dell'indicatore di stato.

### <a name="remarks"></a>Note

L'incremento di passaggio è la quantità da una chiamata a [CProgressCtrl::StepIt](#stepit) aumenta la posizione corrente dell'indicatore di stato.

Questo metodo invia il [PBM_GETSTEP](/windows/desktop/Controls/pbm-getstep) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente recupera l'incremento di passaggio del controllo indicatore di stato di avanzamento corrente.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_7.cpp)]

##  <a name="offsetpos"></a>  CProgressCtrl::OffsetPos

Sposta in avanti l'indicatore di posizione corrente del controllo l'incremento specificato da *nPos* e lo ridisegna la barra in modo da riflettere la nuova posizione.

```
int OffsetPos(int nPos);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Quantità per spostare la posizione.

### <a name="return-value"></a>Valore restituito

Posizione precedente del controllo indicatore di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#5](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_8.cpp)]

##  <a name="setbarcolor"></a>  CProgressCtrl::SetBarColor

Imposta il colore della barra di indicatore di stato di avanzamento nel controllo indicatore di stato di avanzamento corrente.

```
COLORREF SetBarColor(COLORREF clrBar);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*clrBar*|[in] Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore che specifica il nuovo colore indicatore dell'indicatore di stato. Specificare CLR_DEFAULT per causare l'indicatore di stato da utilizzare sul colore predefinito.|

### <a name="return-value"></a>Valore restituito

Il colore precedente della barra di indicatore di stato di avanzamento, rappresentato come un [COLORREF](/windows/desktop/gdi/colorref) valore o CLR_DEFAULT se il colore della barra di indicatore di stato di avanzamento è il colore predefinito.

### <a name="remarks"></a>Note

Il `SetBarColor` metodo imposta l'indicatore di stato solo se color di una Vista di Windows [tema](/windows/desktop/Controls/visual-styles-overview) non è attiva.

Questo metodo invia il [PBM_SETBARCOLOR](/windows/desktop/Controls/pbm-setbarcolor) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente modifica il colore dell'indicatore di stato rosso, verde, blu o il valore predefinito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_9.cpp)]

##  <a name="setbkcolor"></a>  CProgressCtrl::SetBkColor

Imposta il colore di sfondo per l'indicatore di stato.

```
COLORREF SetBkColor(COLORREF clrNew);
```

### <a name="parameters"></a>Parametri

*clrNew*<br/>
Valore COLORREF che specifica il nuovo colore di sfondo. Specificare il valore CLR_DEFAULT per usare il colore di sfondo predefinito per l'indicatore di stato.

### <a name="return-value"></a>Valore restituito

Il [COLORREF](/windows/desktop/gdi/colorref) valore che indica il colore di sfondo precedente o CLR_DEFAULT se il colore di sfondo è il colore predefinito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#6](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_10.cpp)]

##  <a name="setmarquee"></a>  CProgressCtrl::SetMarquee

Abilita la modalità di selezione attiva o disattiva per il controllo barra di stato di avanzamento corrente.

```
BOOL SetMarquee(
    BOOL fMarqueeMode,
    int nInterval);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*fMarqueeMode*|[in] True se in modalità testo scorrevole turn on o su FALSE per disattivare la modalità testo scorrevole.|
|*nInterval*|[in] Tempo in millisecondi tra gli aggiornamenti del testo scorrevole.|

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce sempre TRUE.

### <a name="remarks"></a>Note

Quando è attivata la modalità di selezione, la barra di avanzamento viene animata e scorre, ad esempio un segno in un testo scorrevole teatro.

Questo metodo invia il [PBM_SETMARQUEE](/windows/desktop/Controls/pbm-setmarquee) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Esempio di codice seguente avvia e arresta il rettangolo di selezione lo scorrimento di animazione.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_11.cpp)]

##  <a name="setpos"></a>  CProgressCtrl::SetPos

Imposta lo stato di avanzamento della posizione corrente del controllo come specificato dalla barra *nPos* e lo ridisegna la barra in modo da riflettere la nuova posizione.

```
int SetPos(int nPos);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Nuova posizione del controllo indicatore di stato.

### <a name="return-value"></a>Valore restituito

Posizione precedente del controllo indicatore di stato.

### <a name="remarks"></a>Note

La posizione del controllo indicatore di stato non è la posizione fisica su schermo, ma piuttosto tra superiore e inferiore intervallo indicato nel [SetRange](#setrange).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#7](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_12.cpp)]

##  <a name="setrange"></a>  CProgressCtrl::SetRange

Imposta i limiti superiori e inferiori dell'indicatore intervallo del controllo di stato e lo ridisegna la barra in modo da riflettere i nuovi intervalli.

```
void SetRange(
    short nLower,
    short nUpper);

void SetRange32(
    int nLower,
    int nUpper);
```

### <a name="parameters"></a>Parametri

*nLower*<br/>
Specifica il limite inferiore dell'intervallo (valore predefinito è zero).

*nUpper*<br/>
Specifica il limite massimo dell'intervallo (valore predefinito è 100).

### <a name="remarks"></a>Note

La funzione membro `SetRange32` imposta l'intervallo a 32 bit per il controllo di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#8](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_13.cpp)]

##  <a name="setstate"></a>  CProgressCtrl::SetState

Imposta lo stato del controllo indicatore di stato corrente.

```
int SetState(int iState);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iState*|[in] Lo stato da impostare l'indicatore di stato. Usare uno dei valori indicati di seguito.<br /><br /> -PBST_NORMAL - In corso<br />-PBST_ERROR - errore<br />-PBST_PAUSED - messo in pausa|

### <a name="return-value"></a>Valore restituito

Stato precedente del controllo indicatore di stato corrente.

### <a name="remarks"></a>Note

Questo metodo invia il [PBM_SETSTATE](/windows/desktop/Controls/pbm-setstate) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente lo stato del controllo indicatore di stato corrente viene impostato su In pausa o In corso.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_14.cpp)]

##  <a name="setstep"></a>  CProgressCtrl::SetStep

Specifica l'incremento di passaggio di un controllo indicatore di stato.

```
int SetStep(int nStep);
```

### <a name="parameters"></a>Parametri

*nStep*<br/>
Nuovo passo.

### <a name="return-value"></a>Valore restituito

L'incremento di passaggio precedente.

### <a name="remarks"></a>Note

L'incremento di passaggio è la quantità da una chiamata a `CProgressCtrl::StepIt` aumenta lo stato di avanzamento posizione corrente dell'indicatore.

L'incremento di passaggio predefinito è 10.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_15.cpp)]

##  <a name="stepit"></a>  CProgressCtrl::StepIt

Fa avanzare la posizione corrente per un controllo indicatore di stato l'incremento di passaggio e lo ridisegna la barra in modo da riflettere la nuova posizione.

```
int StepIt();
```

### <a name="return-value"></a>Valore restituito

Posizione precedente del controllo indicatore di stato.

### <a name="remarks"></a>Note

L'incremento di passaggio è l'impostazione di `CProgressCtrl::SetStep` funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#10](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_16.cpp)]

## <a name="see-also"></a>Vedere anche

[CMNCTRL2 esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
