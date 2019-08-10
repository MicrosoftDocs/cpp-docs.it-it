---
title: Classe CSpinButtonCtrl
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
ms.openlocfilehash: da247524dae77627bbf041b83bc1534a75c3b073
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916694"
---
# <a name="cspinbuttonctrl-class"></a>Classe CSpinButtonCtrl

Fornisce la funzionalità del controllo pulsante di selezione comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CSpinButtonCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CSpinButtonCtrl::CSpinButtonCtrl](#cspinbuttonctrl)|Costruisce un oggetto `CSpinButtonCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSpinButtonCtrl::Create](#create)|Crea un controllo pulsante di selezione e lo collega a un `CSpinButtonCtrl` oggetto.|
|[CSpinButtonCtrl::CreateEx](#createex)|Crea un controllo pulsante di selezione con gli stili estesi di Windows specificati e lo collega `CSpinButtonCtrl` a un oggetto.|
|[CSpinButtonCtrl::GetAccel](#getaccel)|Recupera le informazioni di accelerazione per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::GetBase](#getbase)|Recupera la base corrente per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::GetBuddy](#getbuddy)|Recupera un puntatore alla finestra Buddy corrente.|
|[CSpinButtonCtrl::GetPos](#getpos)|Recupera la posizione corrente di un controllo pulsante di selezione.|
|[CSpinButtonCtrl::GetRange](#getrange)|Recupera i limiti superiore e inferiore (intervallo) per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetAccel](#setaccel)|Imposta l'accelerazione per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetBase](#setbase)|Imposta la base per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetBuddy](#setbuddy)|Imposta la finestra buddy per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetPos](#setpos)|Imposta la posizione corrente per il controllo.|
|[CSpinButtonCtrl::SetRange](#setrange)|Imposta i limiti superiore e inferiore (intervallo) per un controllo pulsante di selezione.|

## <a name="remarks"></a>Note

Un "controllo pulsante di selezione" (noto anche come controllo di scorrimento) è una coppia di pulsanti freccia su cui l'utente può fare clic per incrementare o decrementare un valore, ad esempio una posizione di scorrimento o un numero visualizzato in un controllo complementare. Il valore associato a un controllo pulsante di selezione è denominato posizione corrente. Un controllo pulsante di selezione viene spesso usato con un controllo complementare, denominato "finestra di Buddy".

Questo controllo (e pertanto la `CSpinButtonCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3,51 e successive.

Per l'utente, un controllo pulsante di selezione e la relativa finestra di contatto spesso hanno un aspetto simile a un unico controllo. È possibile specificare che un controllo pulsante di selezione si posiziona automaticamente accanto alla finestra di contatto e che imposta automaticamente la didascalia della finestra di Buddy sulla posizione corrente. È possibile usare un controllo pulsante di selezione con un controllo di modifica per richiedere all'utente l'input numerico.

Se si fa clic sulla freccia in su, la posizione corrente viene spostata verso il massimo e si fa clic sulla freccia verso il basso per spostare la posizione corrente verso il minimo. Per impostazione predefinita, il valore minimo è 100 e il valore massimo è 0. Ogni volta che l'impostazione minima è maggiore dell'impostazione massima (ad esempio, quando vengono usate le impostazioni predefinite), facendo clic sulla freccia in su viene ridotto il valore di posizione e si fa clic sulla freccia verso il basso per aumentarlo.

Un controllo pulsante di selezione senza una finestra di tipo Buddy funge da barra di scorrimento semplificata. Ad esempio, un controllo struttura a schede a volte Visualizza un controllo pulsante di selezione per consentire all'utente di scorrere le schede aggiuntive nella visualizzazione.

Per altre informazioni sull'uso `CSpinButtonCtrl`di, vedere [controlli](../../mfc/controls-mfc.md) e [uso di CSpinButtonCtrl](../../mfc/using-cspinbuttonctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSpinButtonCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="create"></a>  CSpinButtonCtrl::Create

Crea un controllo pulsante di selezione e lo collega a un `CSpinButtonCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo pulsante di selezione. Applicare qualsiasi combinazione di stili di controllo pulsante di selezione al controllo. Questi stili sono descritti in [stili di controllo di scorrimento](/windows/desktop/Controls/up-down-control-styles) nel Windows SDK.

*rect*<br/>
Specifica la posizione e le dimensioni del controllo pulsante di selezione. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/previous-versions/dd162897\(v=vs.85\))

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo pulsante di selezione, in genere `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo pulsante di selezione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Per prima cosa `CSpinButtonCtrl` si costruisce un oggetto in due passaggi, si chiama il costruttore `Create`e quindi si chiama, che crea il controllo pulsante di selezione e `CSpinButtonCtrl` lo collega all'oggetto.

Per creare un controllo pulsante di selezione con gli stili della finestra estesa, chiamare [CSpinButtonCtrl:: CreateEx](#createex) anziché `Create`.

##  <a name="createex"></a>  CSpinButtonCtrl::CreateEx

Crea un controllo (una finestra figlio) e lo associa `CSpinButtonCtrl` all'oggetto.

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
Specifica lo stile esteso del controllo da creare. Per un elenco degli stili Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel Windows SDK.

*dwStyle*<br/>
Specifica lo stile del controllo pulsante di selezione. Applicare qualsiasi combinazione di stili di controllo pulsante di selezione al controllo. Questi stili sono descritti in [stili di controllo di scorrimento](/windows/desktop/Controls/up-down-control-styles) nel Windows SDK.

*rect*<br/>
Riferimento a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Usare `CreateEx` anziché [create](#create) per applicare gli stili estesi di Windows, specificato dalla prefazione WS_EX_ di Windows Extended Style.

##  <a name="cspinbuttonctrl"></a>  CSpinButtonCtrl::CSpinButtonCtrl

Costruisce un oggetto `CSpinButtonCtrl`.

```
CSpinButtonCtrl();
```

##  <a name="getaccel"></a>  CSpinButtonCtrl::GetAccel

Recupera le informazioni di accelerazione per un controllo pulsante di selezione.

```
UINT GetAccel(
    int nAccel,
    UDACCEL* pAccel) const;
```

### <a name="parameters"></a>Parametri

*nAccel*<br/>
Numero di elementi nella matrice specificata da *pAccel*.

*pAccel*<br/>
Puntatore a una matrice di strutture [UDACCEL](/windows/desktop/api/commctrl/ns-commctrl-udaccel) che riceve informazioni di accelerazione.

### <a name="return-value"></a>Valore restituito

Numero di strutture di accelerazione recuperate.

##  <a name="getbase"></a>CSpinButtonCtrl:: GetBase

Recupera la base corrente per un controllo pulsante di selezione.

```
UINT GetBase() const;
```

### <a name="return-value"></a>Valore restituito

Valore di base corrente.

##  <a name="getbuddy"></a>  CSpinButtonCtrl::GetBuddy

Recupera un puntatore alla finestra Buddy corrente.

```
CWnd* GetBuddy() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra Buddy corrente.

##  <a name="getpos"></a>  CSpinButtonCtrl::GetPos

Recupera la posizione corrente di un controllo pulsante di selezione.

```
int GetPos() const;  int GetPos32(LPBOOL lpbError = NULL) const;
```

### <a name="parameters"></a>Parametri

*lpbError*<br/>
Puntatore a un valore booleano impostato su zero se il valore viene recuperato correttamente o diverso da zero se si verifica un errore. Se questo parametro è impostato su NULL, gli errori non vengono segnalati.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce la posizione corrente a 16 bit nella parola di ordine inferiore. La parola più ordinata è diversa da zero se si è verificato un errore.

La seconda versione restituisce la posizione a 32 bit.

### <a name="remarks"></a>Note

Durante l'elaborazione del valore restituito, il controllo Aggiorna la posizione corrente in base alla didascalia della finestra di Buddy. Il controllo restituisce un errore se non è presente alcuna finestra buddy o se la didascalia specifica un valore non valido o non compreso nell'intervallo.

##  <a name="getrange"></a>  CSpinButtonCtrl::GetRange

Recupera i limiti superiore e inferiore (intervallo) per un controllo pulsante di selezione.

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

*lower*<br/>
Riferimento a un Integer che riceve il limite inferiore per il controllo.

*upper*<br/>
Riferimento a un Integer che riceve il limite superiore per il controllo.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce un valore a 32 bit contenente i limiti superiore e inferiore. La parola più bassa è il limite superiore per il controllo e la parola più ordinata è il limite inferiore.

### <a name="remarks"></a>Note

La funzione `GetRange32` membro recupera l'intervallo del controllo pulsante di selezione come intero a 32 bit.

##  <a name="setaccel"></a>  CSpinButtonCtrl::SetAccel

Imposta l'accelerazione per un controllo pulsante di selezione.

```
BOOL SetAccel(
    int nAccel,
    UDACCEL* pAccel);
```

### <a name="parameters"></a>Parametri

*nAccel*<br/>
Numero di strutture [UDACCEL](/windows/desktop/api/commctrl/ns-commctrl-udaccel) specificate da *pAccel*.

*pAccel*<br/>
Puntatore a una matrice di strutture UDACCEL, che contengono informazioni sull'accelerazione. Gli elementi devono essere ordinati in ordine crescente in base al `nSec` membro.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="setbase"></a>  CSpinButtonCtrl::SetBase

Imposta la base per un controllo pulsante di selezione.

```
int SetBase(int nBase);
```

### <a name="parameters"></a>Parametri

*nBase*<br/>
Nuovo valore di base per il controllo. Può essere 10 per Decimal o 16 per l'esadecimale.

### <a name="return-value"></a>Valore restituito

Il valore di base precedente, se ha esito positivo, oppure zero se viene specificata una base non valida.

### <a name="remarks"></a>Note

Il valore di base determina se la finestra Buddy Visualizza numeri in cifre decimali o esadecimali. I numeri esadecimali sono sempre senza segno; i numeri decimali sono firmati.

##  <a name="setbuddy"></a>  CSpinButtonCtrl::SetBuddy

Imposta la finestra buddy per un controllo pulsante di selezione.

```
CWnd* SetBuddy(CWnd* pWndBuddy);
```

### <a name="parameters"></a>Parametri

*pWndBuddy*<br/>
Puntatore alla nuova finestra di contatto.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra buddy precedente.

### <a name="remarks"></a>Note

Un controllo di selezione è quasi sempre associato a un'altra finestra, ad esempio un controllo di modifica, che Visualizza contenuto. Questa altra finestra è chiamata "Buddy" del controllo di selezione.

##  <a name="setpos"></a>  CSpinButtonCtrl::SetPos

Imposta la posizione corrente per un controllo pulsante di selezione.

```
int SetPos(int nPos);
int SetPos32(int nPos);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Nuova posizione per il controllo. Questo valore deve essere compreso nell'intervallo specificato dai limiti superiore e inferiore del controllo.

### <a name="return-value"></a>Valore restituito

Posizione precedente (precisione a 16 bit per `SetPos`la precisione a 32 bit per `SetPos32`).

### <a name="remarks"></a>Note

`SetPos32`imposta la posizione a 32 bit.

##  <a name="setrange"></a>  CSpinButtonCtrl::SetRange

Imposta i limiti superiore e inferiore (intervallo) per un controllo pulsante di selezione.

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
Limiti superiore e inferiore del controllo. Per `SetRange`, nessun limite può essere maggiore di UD_MAXVAL o minore di UD_MINVAL. Inoltre, la differenza tra i due limiti non può superare UD_MAXVAL. `SetRange32`non impone alcuna restrizione sui limiti; usare qualsiasi numero intero.

### <a name="remarks"></a>Note

La funzione `SetRange32` membro imposta l'intervallo di 32 bit per il controllo pulsante di selezione.

> [!NOTE]
>  L'intervallo predefinito per il pulsante di selezione è impostato su zero (0) e il valore minimo è impostato su 100. Poiché il valore massimo è minore del valore minimo, facendo clic sulla freccia rivolta verso l'alto si riduce la posizione e si fa clic sulla freccia verso il basso per aumentarlo. Utilizzare `CSpinButtonCtrl::SetRange` per modificare questi valori.

## <a name="see-also"></a>Vedere anche

[CMNCTRL2 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CSliderCtrl](../../mfc/reference/csliderctrl-class.md)
