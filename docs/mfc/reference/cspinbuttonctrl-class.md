---
title: CSpinButtonCtrl (classe)
ms.date: 11/04/2016
f1_keywords:
- CSpinButtonCtrl
- AFXCMN/CSpinButtonCtrl
- AFXCMN/CSpinButtonCtrl::CSpinButtonCtrl
- AFXCMN/CSpinButtonCtrl::Create
- AFXCMN/CSpinButtonCtrl::CreateEx
- AFXCMN/CSpinButtonCtrl::GetAccel
- AFXCMN/CSpinButtonCtrl::GetBase
- AFXCMN/CSpinButtonCtrl::GetBuddy
- AFXCMN/CSpinButtonCtrl::GetPos
- AFXCMN/CSpinButtonCtrl::GetRange
- AFXCMN/CSpinButtonCtrl::SetAccel
- AFXCMN/CSpinButtonCtrl::SetBase
- AFXCMN/CSpinButtonCtrl::SetBuddy
- AFXCMN/CSpinButtonCtrl::SetPos
- AFXCMN/CSpinButtonCtrl::SetRange
helpviewer_keywords:
- CSpinButtonCtrl [MFC], CSpinButtonCtrl
- CSpinButtonCtrl [MFC], Create
- CSpinButtonCtrl [MFC], CreateEx
- CSpinButtonCtrl [MFC], GetAccel
- CSpinButtonCtrl [MFC], GetBase
- CSpinButtonCtrl [MFC], GetBuddy
- CSpinButtonCtrl [MFC], GetPos
- CSpinButtonCtrl [MFC], GetRange
- CSpinButtonCtrl [MFC], SetAccel
- CSpinButtonCtrl [MFC], SetBase
- CSpinButtonCtrl [MFC], SetBuddy
- CSpinButtonCtrl [MFC], SetPos
- CSpinButtonCtrl [MFC], SetRange
ms.assetid: 509bfd76-1c5a-4af6-973f-e133c0b87734
ms.openlocfilehash: 6f864a37c46158ab98776cd96d9f50d7cfaeb13d
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58776349"
---
# <a name="cspinbuttonctrl-class"></a>CSpinButtonCtrl (classe)

Fornisce la funzionalità del controllo pulsante di selezione comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CSpinButtonCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSpinButtonCtrl::CSpinButtonCtrl](#cspinbuttonctrl)|Costruisce un oggetto `CSpinButtonCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSpinButtonCtrl::Create](#create)|Crea un controllo pulsante di selezione e la collega a un `CSpinButtonCtrl` oggetto.|
|[CSpinButtonCtrl::CreateEx](#createex)|Crea un controllo pulsante di selezione con gli stili estesi di Windows specificati e lo collega a un `CSpinButtonCtrl` oggetto.|
|[CSpinButtonCtrl::GetAccel](#getaccel)|Recupera informazioni sull'accelerazione per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::GetBase](#getbase)|Recupera la base per un controllo pulsante di selezione corrente.|
|[CSpinButtonCtrl::GetBuddy](#getbuddy)|Recupera un puntatore alla finestra buddy corrente.|
|[CSpinButtonCtrl::GetPos](#getpos)|Recupera la posizione corrente del controllo pulsante di selezione.|
|[CSpinButtonCtrl::GetRange](#getrange)|Recupera i limiti superiori e inferiori (intervallo) per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetAccel](#setaccel)|Imposta l'accelerazione per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetBase](#setbase)|Imposta la base per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetBuddy](#setbuddy)|Imposta la finestra buddy per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetPos](#setpos)|Imposta la posizione corrente del controllo.|
|[CSpinButtonCtrl::SetRange](#setrange)|Imposta i limiti superiori e inferiori (intervallo) per un controllo pulsante di selezione.|

## <a name="remarks"></a>Note

Un "controllo pulsante di selezione" (anche noto come controllo di scorrimento) è una coppia di pulsanti freccia che l'utente può fare clic per incrementare o decrementare un valore, ad esempio un numero visualizzato in un controllo correlato o una posizione di scorrimento. Il valore associato a un controllo pulsante di selezione viene chiamato alla posizione corrente. Un controllo pulsante di selezione viene spesso usato con un controllo correlato, definito "finestra buddy".

Questo controllo (e pertanto il `CSpinButtonCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95 o 98 e Windows NT versione 3.51 e successive.

All'utente, un controllo pulsante di selezione e la relativa finestra buddy spesso simile a un singolo controllo. È possibile specificare che un controllo pulsante di selezione automaticamente posizionerà accanto alla relativa finestra buddy e che la didascalia della finestra buddy impostato automaticamente sulla propria posizione corrente. È possibile usare un controllo pulsante di selezione con un controllo di modifica per richiedere all'utente per l'input numerico.

Facendo clic sulla freccia consente di spostare la posizione corrente verso il valore massimo e facendo clic sulla freccia in giù sposta la posizione corrente verso il valore minimo. Per impostazione predefinita, il valore minimo è 100 e il valore massimo è 0. Ogni volta che l'impostazione minima è superiore al massimo l'impostazione (ad esempio, quando vengono utilizzate le impostazioni predefinite), fare clic su freccia diminuisce rapidamente il valore di posizione e facendo clic sulla freccia in giù aumenta.

Un controllo pulsante di selezione senza visualizzare una finestra buddy funziona come una sorta di barra di scorrimento semplificato. Ad esempio, un controllo struttura a schede Visualizza talvolta un controllo pulsante di selezione per consentire all'utente di scorrere le schede aggiuntive all'interno della visualizzazione.

Per altre informazioni sull'uso `CSpinButtonCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [usando CSpinButtonCtrl](../../mfc/using-cspinbuttonctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSpinButtonCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="create"></a>  CSpinButtonCtrl::Create

Crea un controllo pulsante di selezione e la collega a un `CSpinButtonCtrl` oggetto...

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo pulsante di selezione. Applicare qualsiasi combinazione di stili del controllo pulsante di selezione al controllo. Questi stili sono descritte nel [stili del controllo di scorrimento](/windows/desktop/Controls/up-down-control-styles) nel SDK di Windows.

*rect*<br/>
Specifica le dimensioni e la posizione del controllo pulsante di selezione. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura

*pParentWnd*<br/>
Un puntatore alla finestra padre del controllo pulsante di selezione, in genere un `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica ID. del controllo pulsante di selezione

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce una `CSpinButtonCtrl` dell'oggetto in due passaggi prima di tutto, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo pulsante di selezione e lo collega al `CSpinButtonCtrl` oggetto.

Per creare un controllo pulsante di selezione con gli stili finestra estesi, chiamare [CSpinButtonCtrl::CreateEx](#createex) invece di `Create`.

##  <a name="createex"></a>  CSpinButtonCtrl::CreateEx

Crea un controllo (una finestra figlio) e la associa il `CSpinButtonCtrl` oggetto.

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
Specifica lo stile esteso del controllo da creare. Per un elenco degli stili estesi di windows, vedere la *dwExStyle* parametro per [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.

*dwStyle*<br/>
Specifica lo stile del controllo pulsante di selezione. Applicare qualsiasi combinazione di stili del controllo pulsante di selezione al controllo. Questi stili sono descritte nel [stili del controllo di scorrimento](/windows/desktop/Controls/up-down-control-styles) nel SDK di Windows.

*rect*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che descrive le dimensioni e posizione della finestra da creare, nelle coordinate del client *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo.

*nID*<br/>
ID di finestra figlio. del controllo

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Uso `CreateEx` invece di [Create](#create) per applicare stili estesi di Windows, specificati da WS_EX _ fa precedere da stile esteso di Windows.

##  <a name="cspinbuttonctrl"></a>  CSpinButtonCtrl::CSpinButtonCtrl

Costruisce un oggetto `CSpinButtonCtrl`.

```
CSpinButtonCtrl();
```

##  <a name="getaccel"></a>  CSpinButtonCtrl::GetAccel

Recupera informazioni sull'accelerazione per un controllo pulsante di selezione.

```
UINT GetAccel(
    int nAccel,
    UDACCEL* pAccel) const;
```

### <a name="parameters"></a>Parametri

*nAccel*<br/>
Numero di elementi nella matrice specificata da *pAccel*.

*pAccel*<br/>
Puntatore a una matrice di [UDACCEL](/windows/desktop/api/commctrl/ns-commctrl-_udaccel) strutture che riceve informazioni sull'accelerazione.

### <a name="return-value"></a>Valore restituito

Numero di strutture di tasti di scelta rapida recuperati.

##  <a name="getbase"></a>  CSpinButtonCtrl::GetBase

Recupera la base per un controllo pulsante di selezione corrente.

```
UINT GetBase() const;
```

### <a name="return-value"></a>Valore restituito

Il valore di base corrente.

##  <a name="getbuddy"></a>  CSpinButtonCtrl::GetBuddy

Recupera un puntatore alla finestra buddy corrente.

```
CWnd* GetBuddy() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra buddy corrente.

##  <a name="getpos"></a>  CSpinButtonCtrl::GetPos

Recupera la posizione corrente del controllo pulsante di selezione.

```
int GetPos() const;  int GetPos32(LPBOOL lpbError = NULL) const;
```

### <a name="parameters"></a>Parametri

*lpbError*<br/>
Un puntatore a un valore booleano che è impostato su zero se il valore è stata recuperata o diverso da zero se si verifica un errore. Se questo parametro è impostato su NULL, non vengono segnalati gli errori.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce la posizione corrente di 16 bit della parola meno significativa. La parola più significativa è diverso da zero se si è verificato un errore.

La seconda versione restituisce la posizione di 32 bit.

### <a name="remarks"></a>Note

Quando elabora il valore restituito, il controllo degli aggiornamenti alla posizione corrente basata sulla barra del titolo della finestra buddy. Il controllo viene restituito un errore se è presente alcuna finestra buddy o se la didascalia specifica un valore non valido o out-of-range.

##  <a name="getrange"></a>  CSpinButtonCtrl::GetRange

Recupera i limiti superiori e inferiori (intervallo) per un controllo pulsante di selezione.

```
DWORD GetRange() const;

void GetRange(
    int& lower,
    int& upper) const;

void GetRange32(
    int& lower,
    int &upper) const;
```

### <a name="parameters"></a>Parametri

*inferiore*<br/>
Riferimento a un integer che riceve il limite inferiore per il controllo.

*superiore*<br/>
Riferimento a un integer che riceve il limite superiore per il controllo.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce un valore a 32 bit contenente i limiti superiori e inferiori. La parola meno significativa è il limite superiore per il controllo e la parola più significativa è il limite inferiore.

### <a name="remarks"></a>Note

La funzione membro `GetRange32` recupera intervallo del controllo pulsante di selezione come intero a 32 bit.

##  <a name="setaccel"></a>  CSpinButtonCtrl::SetAccel

Imposta l'accelerazione per un controllo pulsante di selezione.

```
BOOL SetAccel(
    int nAccel,
    UDACCEL* pAccel);
```

### <a name="parameters"></a>Parametri

*nAccel*<br/>
Numerosi [UDACCEL](/windows/desktop/api/commctrl/ns-commctrl-_udaccel) strutture specificato da *pAccel*.

*pAccel*<br/>
Puntatore a una matrice di strutture UDACCEL che contengono informazioni sull'accelerazione. Gli elementi devono essere disposti in ordine crescente in base il `nSec` membro.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="setbase"></a>  CSpinButtonCtrl::SetBase

Imposta la base per un controllo pulsante di selezione.

```
int SetBase(int nBase);
```

### <a name="parameters"></a>Parametri

*nBase*<br/>
Nuovo valore di base per il controllo. Può essere come separatore decimale 10 o 16 per cifre esadecimali.

### <a name="return-value"></a>Valore restituito

Il valore di base precedente se ha esito positivo oppure zero se viene specificata una base non valida.

### <a name="remarks"></a>Note

Il valore di base determina se la finestra buddy Visualizza i numeri in cifre decimali o esadecimali. I numeri esadecimali sono sempre senza segno; i numeri decimali vengono firmati.

##  <a name="setbuddy"></a>  CSpinButtonCtrl::SetBuddy

Imposta la finestra buddy per un controllo pulsante di selezione.

```
CWnd* SetBuddy(CWnd* pWndBuddy);
```

### <a name="parameters"></a>Parametri

*pWndBuddy*<br/>
Puntatore a una nuova finestra buddy.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra buddy precedente.

### <a name="remarks"></a>Note

Un controllo di selezione è quasi sempre associato a un'altra finestra, ad esempio un controllo di modifica, che consente di visualizzare alcuni contenuti. L'altra finestra viene chiamata "buddy" del controllo di selezione.

##  <a name="setpos"></a>  CSpinButtonCtrl::SetPos

Imposta la posizione corrente per un controllo pulsante di selezione.

```
int SetPos(int nPos);
int SetPos32(int nPos);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Nuova posizione per il controllo. Questo valore deve essere compreso nell'intervallo specificato per i limiti superiori e inferiori del controllo.

### <a name="return-value"></a>Valore restituito

La posizione precedente (16 bit di precisione per `SetPos`a 32 bit la precisione per `SetPos32`).

### <a name="remarks"></a>Note

`SetPos32` Imposta la posizione di 32 bit.

##  <a name="setrange"></a>  CSpinButtonCtrl::SetRange

Imposta i limiti superiori e inferiori (intervallo) per un controllo pulsante di selezione.

```
void SetRange(
    short nLower,
    short nUpper);

void SetRange32(
    int nLower,
    int nUpper);
```

### <a name="parameters"></a>Parametri

*nLower* e *nUpper*<br/>
Limiti superiori e inferiori del controllo. Per `SetRange`, né limite può essere maggiore di UD_MAXVAL o meno di UD_MINVAL; inoltre, la differenza tra due limiti non può superare UD_MAXVAL. `SetRange32` non applica alcuna restrizione sui limiti; usare qualsiasi integer.

### <a name="remarks"></a>Note

La funzione membro `SetRange32` imposta l'intervallo a 32 bit per il controllo pulsante di selezione.

> [!NOTE]
>  L'intervallo predefinito per il pulsante di selezione ha il valore massimo impostato su zero (0) e il valore minimo impostato su 100. Poiché il valore massimo è minore del valore minimo, facendo clic sulla freccia diminuirà la posizione e facendo clic sulla freccia in giù si aumenta. Usare `CSpinButtonCtrl::SetRange` per modificare questi valori.

## <a name="see-also"></a>Vedere anche

[CMNCTRL2 esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CSliderCtrl (classe)](../../mfc/reference/csliderctrl-class.md)
