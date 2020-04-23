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
ms.openlocfilehash: c9e94e334318b32efcf8c9de681a78349ab12151
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751129"
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
|[CProgressCtrl::Creare](#create)|Crea un controllo indicatore di stato `CProgressCtrl` e lo associa a un oggetto.|
|[CProgressCtrl::CreateEx](#createex)|Crea un controllo di stato con gli stili estesi `CProgressCtrl` di Windows specificati e lo associa a un oggetto.|
|[CProgressCtrl::GetBarColor](#getbarcolor)|Ottiene il colore dell'indicatore di stato per il controllo indicatore di stato corrente.|
|[CProgressCtrl::GetBkColor](#getbkcolor)|Ottiene il colore di sfondo dell'indicatore di stato corrente.|
|[CProgressCtrl::GetPos](#getpos)|Ottiene la posizione corrente dell'indicatore di stato.|
|[CProgressCtrl::GetRange](#getrange)|Ottiene i limiti inferiore e superiore dell'intervallo del controllo indicatore di stato.|
|[CProgressCtrl::GetState](#getstate)|Ottiene lo stato del controllo indicatore di stato corrente.|
|[CProgressCtrl::GetStep](#getstep)|Recupera l'incremento del passo per l'indicatore di stato del controllo indicatore di stato corrente.|
|[CProgressCtrl::OffsetPos](#offsetpos)|Sposta la posizione corrente di un controllo indicatore di stato di un incremento specificato e ridisegna la barra per riflettere la nuova posizione.|
|[CProgressCtrl::SetBarColor](#setbarcolor)|Imposta il colore della barra di avanzamento nel controllo indicatore di stato corrente.|
|[CProgressCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo per l'indicatore di stato.|
|[CProgressCtrl::SetMarquee](#setmarquee)|Attiva o disattiva la modalità di selezione per il controllo indicatore di stato corrente.|
|[CProgressCtrl::SetPos](#setpos)|Imposta la posizione corrente per un controllo indicatore di stato e ridisegna la barra per riflettere la nuova posizione.|
|[CProgressCtrl::SetRange](#setrange)|Imposta gli intervalli minimo e massimo per un controllo indicatore di stato e ridisegna la barra per riflettere i nuovi intervalli.|
|[CProgressCtrl::SetState](#setstate)|Imposta lo stato del controllo indicatore di stato corrente.|
|[CProgressCtrl::SetStep](#setstep)|Specifica l'incremento del passo per un controllo indicatore di stato.|
|[CProgressCtrl::StepIt](#stepit)|Sposta la posizione corrente per un controllo indicatore di stato in base all'incremento del passo (vedere [PassoSet](#setstep)) e ridisegna la barra per riflettere la nuova posizione.|

## <a name="remarks"></a>Osservazioni

Un controllo indicatore di stato è una finestra che un'applicazione può utilizzare per indicare lo stato di avanzamento di un'operazione lunga. È costituito da un rettangolo che viene gradualmente riempito, da sinistra a destra, con il colore di evidenziazione del sistema durante l'avanzamento di un'operazione.

Un controllo indicatore di stato ha un intervallo e una posizione corrente. L'intervallo rappresenta la durata totale dell'operazione e la posizione corrente rappresenta lo stato di avanzamento dell'applicazione verso il completamento dell'operazione. La routine della finestra utilizza l'intervallo e la posizione corrente per determinare la percentuale dell'indicatore di stato da riempire con il colore di evidenziazione. Poiché i valori dell'intervallo e della posizione corrente sono espressi come interi con segno, l'intervallo possibile dei valori di posizione corrente è compreso tra -2.147.483.648 e 2.147.483.647 inclusi.

Per ulteriori informazioni `CProgressCtrl`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzo di CProgressCtrl](../../mfc/using-cprogressctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CProgressCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cprogressctrlcprogressctrl"></a><a name="cprogressctrl"></a>CProgressCtrl::CProgressCtrl

Costruisce un oggetto `CProgressCtrl`.

```
CProgressCtrl();
```

### <a name="remarks"></a>Osservazioni

Dopo aver `CProgressCtrl` creato l'oggetto, chiamare `CProgressCtrl::Create` per creare il controllo indicatore di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_1.cpp)]

## <a name="cprogressctrlcreate"></a><a name="create"></a>CProgressCtrl::Creare

Crea un controllo indicatore di stato `CProgressCtrl` e lo associa a un oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo indicatore di stato. Applicare qualsiasi combinazione di stili di finestradescritta in [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in Windows SDK, oltre ai seguenti stili di controllo indicatore di stato, al controllo:

- PBS_VERTICAL Visualizza le informazioni sullo stato di avanzamento verticalmente, dall'alto verso il basso. Senza questo flag, il controllo indicatore di stato viene visualizzato orizzontalmente, da sinistra a destra.

- PBS_SMOOTH Visualizza un riempimento graduale e fluido nel controllo indicatore di stato. Senza questo flag, il controllo verrà riempito con blocchi.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo indicatore di stato. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura. Poiché il controllo deve essere una finestra figlio, le coordinate specificate sono relative all'area client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo indicatore `CDialog`di stato, in genere un oggetto . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo indicatore di stato.

### <a name="return-value"></a>Valore restituito

TRUESe `CProgressCtrl` l'oggetto viene creato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Costruire un `CProgressCtrl` oggetto in due passaggi. Chiamare innanzitutto il costruttore `CProgressCtrl` , che `Create`crea l'oggetto , quindi chiamare , che crea il controllo indicatore di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#2](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_2.cpp)]

## <a name="cprogressctrlcreateex"></a><a name="createex"></a>CProgressCtrl::CreateEx

Crea un controllo (una finestra figlio) `CProgressCtrl` e lo associa all'oggetto.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwExStyle (in stile dwExStyle)*<br/>
Specifica lo stile esteso del controllo in fase di creazione. Per un elenco di stili di Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo indicatore di stato. Applicare qualsiasi combinazione di stili di finestra descritta in [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in Windows SDK.

*Rect*<br/>
Riferimento a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece [di Crea](#create) per applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

## <a name="cprogressctrlgetbarcolor"></a><a name="getbarcolor"></a>CProgressCtrl::GetBarColor

Ottiene il colore dell'indicatore di stato per il controllo indicatore di stato corrente.

```
COLORREF GetBarColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore dell'indicatore di stato corrente, rappresentato come valore [COLORREF,](/windows/win32/gdi/colorref) o CLR_DEFAULT se il colore predefinito dell'indicatore di stato è .

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PBM_GETBARCOLOR,](/windows/win32/Controls/pbm-getbarcolor) descritto in Windows SDK.

## <a name="cprogressctrlgetbkcolor"></a><a name="getbkcolor"></a>CProgressCtrl::GetBkColor

Ottiene il colore di sfondo dell'indicatore di stato corrente.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore di sfondo dell'indicatore di stato corrente, rappresentato come valore [COLORREF.](/windows/win32/gdi/colorref)

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [PBM_GETBKCOLOR,](/windows/win32/Controls/pbm-getbkcolor) descritto in Windows SDK.

## <a name="cprogressctrlgetpos"></a><a name="getpos"></a>CProgressCtrl::GetPos

Recupera la posizione corrente dell'indicatore di stato.

```
int GetPos();
```

### <a name="return-value"></a>Valore restituito

Posizione del controllo indicatore di stato.

### <a name="remarks"></a>Osservazioni

La posizione del controllo indicatore di stato non è la posizione fisica sullo schermo, ma è tra l'intervallo superiore e inferiore indicato in [SetRange](#setrange).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#3](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_3.cpp)]

## <a name="cprogressctrlgetrange"></a><a name="getrange"></a>CProgressCtrl::GetRange

Ottiene i limiti inferiore e superiore correnti, o intervallo, del controllo indicatore di stato.

```cpp
void GetRange(
    int& nLower,
    int& nUpper);
```

### <a name="parameters"></a>Parametri

*nInferiore*<br/>
Riferimento a un numero intero che riceve il limite inferiore del controllo indicatore di stato.

*nSuperiore*<br/>
Riferimento a un numero intero che riceve il limite superiore del controllo indicatore di stato.

### <a name="remarks"></a>Osservazioni

Questa funzione copia i valori dei limiti inferiore e superiore nei numeri interi a cui fanno riferimento *nLower* e *nUpper*, rispettivamente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#4](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_4.cpp)]

## <a name="cprogressctrlgetstate"></a><a name="getstate"></a>CProgressCtrl::GetState

Ottiene lo stato del controllo indicatore di stato corrente.

```
int GetState() const;
```

### <a name="return-value"></a>Valore restituito

Lo stato del controllo indicatore di stato corrente, che è uno dei valori seguenti:

|valore|State|
|-----------|-----------|
|PBST_NORMAL|In corso|
|PBST_ERROR|Errore|
|PBST_PAUSED|Paused|

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio PBM_GETSTATE,](/windows/win32/Controls/pbm-getstate) descritto in Windows SDK.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene recuperato lo stato del controllo indicatore di stato corrente.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#5](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_6.cpp)]

## <a name="cprogressctrlgetstep"></a><a name="getstep"></a>CProgressCtrl::GetStep

Recupera l'incremento del passo per l'indicatore di stato del controllo indicatore di stato corrente.

```
int GetStep() const;
```

### <a name="return-value"></a>Valore restituito

Incremento del passo dell'indicatore di stato.

### <a name="remarks"></a>Osservazioni

L'incremento del passo è la quantità in base alla quale una chiamata a [CProgressCtrl::StepAumenta](#stepit) la posizione corrente dell'indicatore di stato.

Questo metodo invia il [messaggio di PBM_GETSTEP,](/windows/win32/Controls/pbm-getstep) descritto in Windows SDK.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene recuperato l'incremento del passaggio del controllo indicatore di stato corrente.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_7.cpp)]

## <a name="cprogressctrloffsetpos"></a><a name="offsetpos"></a>CProgressCtrl::OffsetPos

Fa avanzare la posizione corrente del controllo indicatore di stato in base all'incremento specificato da *nPos* e ridisegna la barra per riflettere la nuova posizione.

```
int OffsetPos(int nPos);
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Importo per anticipare la posizione.

### <a name="return-value"></a>Valore restituito

Posizione precedente del controllo indicatore di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#5](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_8.cpp)]

## <a name="cprogressctrlsetbarcolor"></a><a name="setbarcolor"></a>CProgressCtrl::SetBarColor

Imposta il colore della barra di avanzamento nel controllo indicatore di stato corrente.

```
COLORREF SetBarColor(COLORREF clrBar);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*clrBar*|[in] Valore [COLORREF](/windows/win32/gdi/colorref) che specifica il nuovo colore dell'indicatore di stato. Specificare CLR_DEFAULT modo in modo che l'indicatore di stato utilizzi il colore predefinito.|

### <a name="return-value"></a>Valore restituito

Colore precedente dell'indicatore di stato, rappresentato come valore [COLORREF,](/windows/win32/gdi/colorref) o CLR_DEFAULT se il colore dell'indicatore di stato è il colore predefinito.

### <a name="remarks"></a>Osservazioni

Il `SetBarColor` metodo imposta il colore dell'indicatore di stato solo se non è attivo un [tema](/windows/win32/Controls/visual-styles-overview) di Windows Vista.

Questo metodo invia il [messaggio di PBM_SETBARCOLOR,](/windows/win32/Controls/pbm-setbarcolor) descritto in Windows SDK.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito il colore dell'indicatore di stato viene impostato su rosso, verde, blu o predefinito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_9.cpp)]

## <a name="cprogressctrlsetbkcolor"></a><a name="setbkcolor"></a>CProgressCtrl::SetBkColor

Imposta il colore di sfondo per l'indicatore di stato.

```
COLORREF SetBkColor(COLORREF clrNew);
```

### <a name="parameters"></a>Parametri

*ClrNew (informazioni in base alla proprietà*<br/>
Valore COLORREF che specifica il nuovo colore di sfondo. Specificare il valore CLR_DEFAULT per utilizzare il colore di sfondo predefinito per l'indicatore di stato.

### <a name="return-value"></a>Valore restituito

Il valore [COLORREF](/windows/win32/gdi/colorref) che indica il colore di sfondo precedente o CLR_DEFAULT se il colore di sfondo è predefinito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#6](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_10.cpp)]

## <a name="cprogressctrlsetmarquee"></a><a name="setmarquee"></a>CProgressCtrl::SetMarquee

Attiva o disattiva la modalità di selezione per il controllo indicatore di stato corrente.

```
BOOL SetMarquee(
    BOOL fMarqueeMode,
    int nInterval);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*fMarqueeMode (modalità fMarquee)*|[in] TRUE per attivare la modalità di selezione o FALSE per disattivare la modalità di selezione.|
|*nInterval (Intervallo)*|[in] Tempo in millisecondi tra gli aggiornamenti dell'animazione del perimetro di selezione.|

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

Quando la modalità di selezione è attivata, la barra di avanzamento viene animata e scorre come un segno su un perimetro di selezione del teatro.

Questo metodo invia il [messaggio di PBM_SETMARQUEE,](/windows/win32/Controls/pbm-setmarquee) descritto in Windows SDK.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene avviato e interrotto l'animazione a scorrimento del perimetro di selezione.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_11.cpp)]

## <a name="cprogressctrlsetpos"></a><a name="setpos"></a>CProgressCtrl::SetPos

Imposta la posizione corrente del controllo indicatore di stato come specificato da *nPos* e ridisegna la barra per riflettere la nuova posizione.

```
int SetPos(int nPos);
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Nuova posizione del controllo indicatore di stato.

### <a name="return-value"></a>Valore restituito

Posizione precedente del controllo indicatore di stato.

### <a name="remarks"></a>Osservazioni

La posizione del controllo indicatore di stato non è la posizione fisica sullo schermo, ma è tra l'intervallo superiore e inferiore indicato in [SetRange](#setrange).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#7](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_12.cpp)]

## <a name="cprogressctrlsetrange"></a><a name="setrange"></a>CProgressCtrl::SetRange

Imposta i limiti superiore e inferiore dell'intervallo del controllo indicatore di stato e ridisegna la barra per riflettere i nuovi intervalli.

```cpp
void SetRange(
    short nLower,
    short nUpper);

void SetRange32(
    int nLower,
    int nUpper);
```

### <a name="parameters"></a>Parametri

*nInferiore*<br/>
Specifica il limite inferiore dell'intervallo (il valore predefinito è zero).

*nSuperiore*<br/>
Specifica il limite superiore dell'intervallo (il valore predefinito è 100).

### <a name="remarks"></a>Osservazioni

La funzione `SetRange32` membro imposta l'intervallo di 32 bit per il controllo di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#8](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_13.cpp)]

## <a name="cprogressctrlsetstate"></a><a name="setstate"></a>CProgressCtrl::SetState

Imposta lo stato del controllo indicatore di stato corrente.

```
int SetState(int iState);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iState (informazioni in stato in stato*|[in] Stato per impostare l'indicatore di stato. Usare uno dei valori seguenti:<br /><br /> - PBST_NORMAL - In corso<br />- PBST_ERROR - Errore<br />- PBST_PAUSED - In pausa|

### <a name="return-value"></a>Valore restituito

Stato precedente del controllo indicatore di stato corrente.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio PBM_SETSTATE,](/windows/win32/Controls/pbm-setstate) descritto in Windows SDK.

### <a name="example"></a>Esempio

L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente lo stato del controllo indicatore di stato corrente viene impostato su In pausa o In corso.

[!code-cpp[NVC_MFC_CProgressCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_14.cpp)]

## <a name="cprogressctrlsetstep"></a><a name="setstep"></a>CProgressCtrl::SetStep

Specifica l'incremento del passo per un controllo indicatore di stato.

```
int SetStep(int nStep);
```

### <a name="parameters"></a>Parametri

*nPasso*<br/>
Nuovo incremento di passo.

### <a name="return-value"></a>Valore restituito

Incremento del passaggio precedente.

### <a name="remarks"></a>Osservazioni

L'incremento del passo è `CProgressCtrl::StepIt` la quantità in base alla quale una chiamata a aumenta la posizione corrente dell'indicatore di stato.

L'incremento di passaggio predefinito è 10.The default step increment is 10.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_15.cpp)]

## <a name="cprogressctrlstepit"></a><a name="stepit"></a>CProgressCtrl::StepIt

Sposta la posizione corrente per un controllo indicatore di stato in base all'incremento del passo e ridisegna la barra per riflettere la nuova posizione.

```
int StepIt();
```

### <a name="return-value"></a>Valore restituito

Posizione precedente del controllo indicatore di stato.

### <a name="remarks"></a>Osservazioni

L'incremento del `CProgressCtrl::SetStep` passaggio viene impostato dalla funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CProgressCtrl#10](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_16.cpp)]

## <a name="see-also"></a>Vedere anche

[ESEMPIO MFC CMNCTRL2](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
