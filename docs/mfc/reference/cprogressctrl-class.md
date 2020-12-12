---
description: 'Altre informazioni su: classe CProgressCtrl'
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
ms.openlocfilehash: f5bd1bcae041d6bd61b715275b232fc5536cba2f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301412"
---
# <a name="cprogressctrl-class"></a>Classe CProgressCtrl

Fornisce la funzionalità del controllo indicatore di stato comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CProgressCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CProgressCtrl:: CProgressCtrl](#cprogressctrl)|Costruisce un oggetto `CProgressCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CProgressCtrl:: create](#create)|Crea un controllo indicatore di stato e lo collega a un `CProgressCtrl` oggetto.|
|[CProgressCtrl:: CreateEx](#createex)|Crea un controllo di stato con gli stili estesi di Windows specificati e lo associa a un `CProgressCtrl` oggetto.|
|[CProgressCtrl:: GetBarColor](#getbarcolor)|Ottiene il colore della barra dell'indicatore di stato per il controllo indicatore di stato corrente.|
|[CProgressCtrl:: GetBkColor](#getbkcolor)|Ottiene il colore di sfondo dell'indicatore di stato corrente.|
|[CProgressCtrl:: GetPos](#getpos)|Ottiene la posizione corrente dell'indicatore di stato.|
|[CProgressCtrl:: GetRange](#getrange)|Ottiene i limiti inferiore e superiore dell'intervallo del controllo indicatore di stato.|
|[CProgressCtrl:: GetState](#getstate)|Ottiene lo stato del controllo indicatore di stato corrente.|
|[CProgressCtrl:: getstep](#getstep)|Recupera l'incremento del passaggio per l'indicatore di stato del controllo indicatore di stato corrente.|
|[CProgressCtrl:: OffsetPos](#offsetpos)|Sposta in avanti la posizione corrente di un controllo indicatore di stato in base a un incremento specificato e ridisegnato la barra per riflettere la nuova posizione.|
|[CProgressCtrl:: SetBarColor](#setbarcolor)|Imposta il colore della barra indicatore di stato nel controllo indicatore di stato corrente.|
|[CProgressCtrl:: SetBkColor](#setbkcolor)|Imposta il colore di sfondo per l'indicatore di stato.|
|[CProgressCtrl:: semarquee](#setmarquee)|Attiva o disattiva la modalità marquee per il controllo indicatore di stato corrente.|
|[CProgressCtrl:: SetPos](#setpos)|Imposta la posizione corrente per un controllo indicatore di stato e ridisegnato la barra in modo da riflettere la nuova posizione.|
|[CProgressCtrl:: SetRange](#setrange)|Imposta gli intervalli minimo e massimo per un controllo indicatore di stato e ridisegnato la barra in modo da riflettere i nuovi intervalli.|
|[CProgressCtrl:: sestate](#setstate)|Imposta lo stato del controllo indicatore di stato corrente.|
|[CProgressCtrl:: sestep](#setstep)|Specifica l'incremento del passaggio per un controllo indicatore di stato.|
|[CProgressCtrl:: StepIt](#stepit)|Sposta in avanti la posizione corrente per un controllo indicatore di stato in base all'incremento del passaggio [(vedere il passaggio)](#setstep)e ridisegnato la barra per riflettere la nuova posizione.|

## <a name="remarks"></a>Commenti

Un controllo indicatore di stato è una finestra che può essere utilizzata da un'applicazione per indicare lo stato di avanzamento di un'operazione di lunga durata. È costituito da un rettangolo che viene riempito gradualmente, da sinistra a destra, con il colore di evidenziazione del sistema durante l'avanzamento di un'operazione.

Un controllo indicatore di stato ha un intervallo e una posizione corrente. L'intervallo rappresenta la durata totale dell'operazione e la posizione corrente rappresenta lo stato di avanzamento dell'applicazione verso il completamento dell'operazione. La routine della finestra usa l'intervallo e la posizione corrente per determinare la percentuale dell'indicatore di stato da riempire con il colore di evidenziazione. Poiché i valori di intervallo e posizione corrente sono espressi come interi con segno, il possibile intervallo di valori di posizione correnti è compreso tra-2.147.483.648 e 2.147.483.647 inclusi.

Per altre informazioni sull'uso di `CProgressCtrl` , vedere [controlli](../../mfc/controls-mfc.md) e [uso di CProgressCtrl](../../mfc/using-cprogressctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CProgressCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cprogressctrlcprogressctrl"></a><a name="cprogressctrl"></a> CProgressCtrl:: CProgressCtrl

Costruisce un oggetto `CProgressCtrl`.

```
CProgressCtrl();
```

### <a name="remarks"></a>Commenti

Dopo la costruzione dell' `CProgressCtrl` oggetto, chiamare `CProgressCtrl::Create` per creare il controllo indicatore di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_1.cpp)]

## <a name="cprogressctrlcreate"></a><a name="create"></a> CProgressCtrl:: create

Crea un controllo indicatore di stato e lo collega a un `CProgressCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo indicatore di stato. Applicare qualsiasi combinazione di finestra stylesdescribed in [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) nel Windows SDK, oltre agli stili del controllo indicatore di stato seguenti, al controllo:

- PBS_VERTICAL Visualizza le informazioni sullo stato verticalmente, dall'alto verso il basso. Senza questo flag, il controllo indicatore di stato viene visualizzato orizzontalmente, da sinistra a destra.

- PBS_SMOOTH Visualizza un riempimento graduale e uniforme nel controllo indicatore di stato. Senza questo flag, il controllo verrà riempito con blocchi.

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo indicatore di stato. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) . Poiché il controllo deve essere una finestra figlio, le coordinate specificate sono relative all'area client di *pParentWnd*.

*pParentWnd*<br/>
Specifica la finestra padre del controllo indicatore di stato, in genere `CDialog` . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo indicatore di stato.

### <a name="return-value"></a>Valore restituito

TRUE se l' `CProgressCtrl` oggetto è stato creato correttamente; in caso contrario, false.

### <a name="remarks"></a>Commenti

Si costruisce un `CProgressCtrl` oggetto in due passaggi. Chiamare innanzitutto il costruttore, che crea l' `CProgressCtrl` oggetto, quindi chiamare `Create` , che crea il controllo indicatore di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#2](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_2.cpp)]

## <a name="cprogressctrlcreateex"></a><a name="createex"></a> CProgressCtrl:: CreateEx

Crea un controllo (una finestra figlio) e lo associa all' `CProgressCtrl` oggetto.

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
Specifica lo stile esteso del controllo da creare. Per un elenco degli stili Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nel Windows SDK.

*dwStyle*<br/>
Specifica lo stile del controllo indicatore di stato. Applicare qualsiasi combinazione di stili di finestra descritti in [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) nel Windows SDK.

*Rect*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Usare `CreateEx` anziché [create](#create) per applicare gli stili estesi di Windows, specificati dall'introduzione allo stile esteso di Windows **WS_EX_**.

## <a name="cprogressctrlgetbarcolor"></a><a name="getbarcolor"></a> CProgressCtrl:: GetBarColor

Ottiene il colore della barra dell'indicatore di stato per il controllo indicatore di stato corrente.

```
COLORREF GetBarColor() const;
```

### <a name="return-value"></a>Valore restituito

Il colore dell'indicatore di stato corrente, rappresentato come valore [COLORREF](/windows/win32/gdi/colorref) , o CLR_DEFAULT se il colore della barra dell'indicatore di stato è il colore predefinito.

### <a name="remarks"></a>Commenti

Questo metodo invia il messaggio di [PBM_GETBARCOLOR](/windows/win32/Controls/pbm-getbarcolor) , descritto nel Windows SDK.

## <a name="cprogressctrlgetbkcolor"></a><a name="getbkcolor"></a> CProgressCtrl:: GetBkColor

Ottiene il colore di sfondo dell'indicatore di stato corrente.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore di sfondo dell'indicatore di stato corrente, rappresentato come valore [COLORREF](/windows/win32/gdi/colorref) .

### <a name="remarks"></a>Commenti

Questo metodo invia il messaggio di [PBM_GETBKCOLOR](/windows/win32/Controls/pbm-getbkcolor) , descritto nel Windows SDK.

## <a name="cprogressctrlgetpos"></a><a name="getpos"></a> CProgressCtrl:: GetPos

Recupera la posizione corrente dell'indicatore di stato.

```
int GetPos();
```

### <a name="return-value"></a>Valore restituito

Posizione del controllo indicatore di stato.

### <a name="remarks"></a>Commenti

La posizione del controllo indicatore di stato non è la posizione fisica sullo schermo, bensì tra l'intervallo superiore e inferiore indicato in [SetRange](#setrange).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#3](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_3.cpp)]

## <a name="cprogressctrlgetrange"></a><a name="getrange"></a> CProgressCtrl:: GetRange

Ottiene i limiti inferiore e superiore correnti, o l'intervallo, del controllo indicatore di stato.

```cpp
void GetRange(
    int& nLower,
    int& nUpper);
```

### <a name="parameters"></a>Parametri

*nLower*<br/>
Riferimento a un Integer che riceve il limite inferiore del controllo indicatore di stato.

*nUpper*<br/>
Riferimento a un Integer che riceve il limite superiore del controllo indicatore di stato.

### <a name="remarks"></a>Commenti

Questa funzione copia i valori dei limiti inferiore e superiore negli Integer a cui fa riferimento rispettivamente *nLower* e *nUpper*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#4](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_4.cpp)]

## <a name="cprogressctrlgetstate"></a><a name="getstate"></a> CProgressCtrl:: GetState

Ottiene lo stato del controllo indicatore di stato corrente.

```
int GetState() const;
```

### <a name="return-value"></a>Valore restituito

Stato del controllo indicatore di stato corrente, ovvero uno dei valori seguenti:

|Valore|State|
|-----------|-----------|
|PBST_NORMAL|In corso|
|PBST_ERROR|Errore|
|PBST_PAUSED|Paused|

### <a name="remarks"></a>Commenti

Questo metodo invia il messaggio di [PBM_GETSTATE](/windows/win32/Controls/pbm-getstate) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene recuperato lo stato del controllo indicatore di stato corrente.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#5](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_6.cpp)]

## <a name="cprogressctrlgetstep"></a><a name="getstep"></a> CProgressCtrl:: getstep

Recupera l'incremento del passaggio per l'indicatore di stato del controllo indicatore di stato corrente.

```
int GetStep() const;
```

### <a name="return-value"></a>Valore restituito

Incremento del passaggio dell'indicatore di stato.

### <a name="remarks"></a>Commenti

L'incremento del passaggio è la quantità in base alla quale una chiamata a [CProgressCtrl:: StepIt](#stepit) aumenta la posizione corrente dell'indicatore di stato.

Questo metodo invia il messaggio di [PBM_GETSTEP](/windows/win32/Controls/pbm-getstep) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene recuperato l'incremento del passaggio del controllo indicatore di stato corrente.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_7.cpp)]

## <a name="cprogressctrloffsetpos"></a><a name="offsetpos"></a> CProgressCtrl:: OffsetPos

Sposta la posizione corrente del controllo indicatore di stato in base all'incremento specificato da *nPos* e ridisegnato la barra in modo da riflettere la nuova posizione.

```
int OffsetPos(int nPos);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Quantità per far avanzare la posizione.

### <a name="return-value"></a>Valore restituito

Posizione precedente del controllo indicatore di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#5](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_8.cpp)]

## <a name="cprogressctrlsetbarcolor"></a><a name="setbarcolor"></a> CProgressCtrl:: SetBarColor

Imposta il colore della barra indicatore di stato nel controllo indicatore di stato corrente.

```
COLORREF SetBarColor(COLORREF clrBar);
```

### <a name="parameters"></a>Parametri

*clrBar*\
in Valore [COLORREF](/windows/win32/gdi/colorref) che specifica il nuovo colore della barra dell'indicatore di stato. Specificare CLR_DEFAULT per fare in modo che l'indicatore di stato utilizzi il colore predefinito.

### <a name="return-value"></a>Valore restituito

Il colore precedente della barra indicatore di stato, rappresentato come valore [COLORREF](/windows/win32/gdi/colorref) , o CLR_DEFAULT se il colore della barra indicatore di stato è il colore predefinito.

### <a name="remarks"></a>Commenti

Il `SetBarColor` metodo imposta il colore dell'indicatore di stato solo se non è attivo un [tema](/windows/win32/Controls/visual-styles-overview) di Windows Vista.

Questo metodo invia il messaggio di [PBM_SETBARCOLOR](/windows/win32/Controls/pbm-setbarcolor) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente il colore dell'indicatore di stato viene modificato in rosso, verde, blu o predefinito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_9.cpp)]

## <a name="cprogressctrlsetbkcolor"></a><a name="setbkcolor"></a> CProgressCtrl:: SetBkColor

Imposta il colore di sfondo per l'indicatore di stato.

```
COLORREF SetBkColor(COLORREF clrNew);
```

### <a name="parameters"></a>Parametri

*clrNew*<br/>
Valore COLORREF che specifica il nuovo colore di sfondo. Specificare il valore CLR_DEFAULT per utilizzare il colore di sfondo predefinito per l'indicatore di stato.

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che indica il colore di sfondo precedente o CLR_DEFAULT se il colore di sfondo è il colore predefinito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#6](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_10.cpp)]

## <a name="cprogressctrlsetmarquee"></a><a name="setmarquee"></a> CProgressCtrl:: semarquee

Attiva o disattiva la modalità marquee per il controllo indicatore di stato corrente.

```
BOOL SetMarquee(
    BOOL fMarqueeMode,
    int nInterval);
```

### <a name="parameters"></a>Parametri

*fMarqueeMode*\
in TRUE per attivare la modalità marquee o FALSE per disattivare la modalità marquee.

*nIntervallo*\
in Tempo in millisecondi tra gli aggiornamenti dell'animazione Marquee.

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce sempre TRUE.

### <a name="remarks"></a>Commenti

Quando la modalità Marquee è attivata, l'indicatore di stato viene animato e scorre come un segno in un Marquee del teatro.

Questo metodo invia il messaggio di [PBM_SETMARQUEE](/windows/win32/Controls/pbm-setmarquee) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene avviata e arrestata l'animazione di scorrimento Marquee.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_11.cpp)]

## <a name="cprogressctrlsetpos"></a><a name="setpos"></a> CProgressCtrl:: SetPos

Imposta la posizione corrente del controllo indicatore di stato come specificato da *nPos* e ridisegnato la barra in modo da riflettere la nuova posizione.

```
int SetPos(int nPos);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Nuova posizione del controllo indicatore di stato.

### <a name="return-value"></a>Valore restituito

Posizione precedente del controllo indicatore di stato.

### <a name="remarks"></a>Commenti

La posizione del controllo indicatore di stato non è la posizione fisica sullo schermo, bensì tra l'intervallo superiore e inferiore indicato in [SetRange](#setrange).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#7](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_12.cpp)]

## <a name="cprogressctrlsetrange"></a><a name="setrange"></a> CProgressCtrl:: SetRange

Imposta i limiti superiore e inferiore dell'intervallo del controllo indicatore di stato e ridisegnato la barra in modo da riflettere i nuovi intervalli.

```cpp
void SetRange(
    short nLower,
    short nUpper);

void SetRange32(
    int nLower,
    int nUpper);
```

### <a name="parameters"></a>Parametri

*nLower*<br/>
Specifica il limite inferiore dell'intervallo (il valore predefinito è zero).

*nUpper*<br/>
Specifica il limite superiore dell'intervallo (il valore predefinito è 100).

### <a name="remarks"></a>Commenti

La funzione membro `SetRange32` imposta l'intervallo di 32 bit per il controllo dello stato di avanzamento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#8](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_13.cpp)]

## <a name="cprogressctrlsetstate"></a><a name="setstate"></a> CProgressCtrl:: sestate

Imposta lo stato del controllo indicatore di stato corrente.

```
int SetState(int iState);
```

### <a name="parameters"></a>Parametri

*iState*\
in Stato per impostare l'indicatore di stato. Usare uno dei valori seguenti:

- `PBST_NORMAL` -In corso
- `PBST_ERROR` -Errore
- `PBST_PAUSED` -Sospeso

### <a name="return-value"></a>Valore restituito

Stato precedente del controllo indicatore di stato corrente.

### <a name="remarks"></a>Commenti

Questo metodo invia il messaggio di [PBM_SETSTATE](/windows/win32/Controls/pbm-setstate) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente lo stato del controllo indicatore di stato corrente viene impostato su In pausa o In corso.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_14.cpp)]

## <a name="cprogressctrlsetstep"></a><a name="setstep"></a> CProgressCtrl:: sestep

Specifica l'incremento del passaggio per un controllo indicatore di stato.

```
int SetStep(int nStep);
```

### <a name="parameters"></a>Parametri

*nStep*<br/>
Incremento nuovo passaggio.

### <a name="return-value"></a>Valore restituito

Incremento del passaggio precedente.

### <a name="remarks"></a>Commenti

L'incremento del passaggio è la quantità in base alla quale una chiamata a `CProgressCtrl::StepIt` aumenta la posizione corrente dell'indicatore di stato.

L'incremento predefinito del passaggio è 10.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_15.cpp)]

## <a name="cprogressctrlstepit"></a><a name="stepit"></a> CProgressCtrl:: StepIt

Sposta in avanti la posizione corrente per un controllo indicatore di stato in base all'incremento del passaggio e ridisegnato la barra per riflettere la nuova posizione.

```
int StepIt();
```

### <a name="return-value"></a>Valore restituito

Posizione precedente del controllo indicatore di stato.

### <a name="remarks"></a>Commenti

L'incremento del passaggio viene impostato dalla `CProgressCtrl::SetStep` funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#10](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_16.cpp)]

## <a name="see-also"></a>Vedere anche

[CMNCTRL2 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
