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
ms.openlocfilehash: 4230d43bad8bcc15bcb26aaf0357e70216909ba1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318132"
---
# <a name="cspinbuttonctrl-class"></a>Classe CSpinButtonCtrl

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
|[CSpinButtonCtrl::Crea](#create)|Crea un controllo pulsante di selezione `CSpinButtonCtrl` e lo associa a un oggetto.|
|[CSpinButtonCtrl::CreateEx](#createex)|Crea un controllo pulsante di selezione con gli stili `CSpinButtonCtrl` estesi di Windows specificati e lo associa a un oggetto.|
|[CSpinButtonCtrl::GetAccel](#getaccel)|Recupera le informazioni sull'accelerazione per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::GetBase](#getbase)|Recupera la base corrente per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::GetBuddy](#getbuddy)|Recupera un puntatore alla finestra buddy corrente.|
|[CSpinButtonCtrl::GetPos](#getpos)|Recupera la posizione corrente di un controllo pulsante di selezione.|
|[CSpinButtonCtrl::GetRange](#getrange)|Recupera i limiti superiore e inferiore (intervallo) per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetAccel](#setaccel)|Imposta l'accelerazione per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetBase](#setbase)|Imposta la base per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetBuddy](#setbuddy)|Imposta la finestra buddy per un controllo pulsante di selezione.|
|[CSpinButtonCtrl::SetPos](#setpos)|Imposta la posizione corrente per il controllo.|
|[CSpinButtonCtrl::SetRange](#setrange)|Imposta i limiti superiore e inferiore (intervallo) per un controllo pulsante di selezione.|

## <a name="remarks"></a>Osservazioni

Un "controllo pulsante di selezione" (noto anche come un controllo di scorrimento) è una coppia di pulsanti freccia su cui l'utente può fare clic per incrementare o diminuire un valore, ad esempio una posizione di scorrimento o un numero visualizzato in un controllo complementare. Il valore associato a un controllo pulsante di selezione viene chiamato la posizione corrente. Un controllo pulsante di selezione viene usato più spesso con un controllo complementare, denominato "finestra amico".

Questo controllo (e `CSpinButtonCtrl` quindi la classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.

Per l'utente, un controllo pulsante di selezione e la relativa finestra buddy hanno spesso l'aspetto di un singolo controllo. È possibile specificare che un controllo pulsante di selezione si posizioni automaticamente accanto alla relativa finestra buddy e che imposti automaticamente la didascalia della finestra buddy sulla posizione corrente. È possibile utilizzare un controllo pulsante di selezione con un controllo di modifica per richiedere all'utente l'input numerico.

Facendo clic sulla freccia rivolta verso l'alto, la posizione corrente viene spostata verso il valore massimo, mentre facendo clic sulla freccia rivolta verso il basso viene spostata la posizione corrente verso il valore minimo. Per impostazione predefinita, il valore minimo è 100 e il valore massimo è 0. Ogni volta che l'impostazione minima è maggiore dell'impostazione massima (ad esempio, quando vengono utilizzate le impostazioni predefinite), facendo clic sulla freccia verso l'alto si riduce il valore della posizione e facendo clic sulla freccia giù si aumenta.

Un controllo pulsante di selezione senza una finestra buddy funziona come una sorta di barra di scorrimento semplificata. Ad esempio, un controllo struttura a schede talvolta visualizza un controllo pulsante di selezione per consentire all'utente di scorrere altre schede nella visualizzazione.

Per ulteriori informazioni `CSpinButtonCtrl`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzo di CSpinButtonCtrl](../../mfc/using-cspinbuttonctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSpinButtonCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cspinbuttonctrlcreate"></a><a name="create"></a>CSpinButtonCtrl::Crea

Crea un controllo pulsante di selezione `CSpinButtonCtrl` e lo associa a un oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo pulsante di selezione. Applicare qualsiasi combinazione di stili di controllo pulsante di selezione al controllo. Questi stili sono descritti in stili di [controllo di](/windows/win32/Controls/up-down-control-styles) scorrimento in Windows SDK.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo pulsante di selezione. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [RECT](/previous-versions/dd162897\(v=vs.85\))

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre del controllo pulsante di selezione, in genere un `CDialog`oggetto . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo pulsante di selezione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CSpinButtonCtrl` oggetto in due passaggi In primo `Create`luogo, chiamare il costruttore e quindi `CSpinButtonCtrl` chiamare , che crea il controllo pulsante di selezione e lo associa all'oggetto.

Per creare un controllo pulsante di selezione con stili di finestra `Create`estesi, chiamare [CSpinButtonCtrl::CreateEx](#createex) anziché .

## <a name="cspinbuttonctrlcreateex"></a><a name="createex"></a>CSpinButtonCtrl::CreateEx

Crea un controllo (una finestra figlio) `CSpinButtonCtrl` e lo associa all'oggetto.

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
Specifica lo stile esteso del controllo in fase di creazione. Per un elenco degli stili di finestra estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo pulsante di selezione. Applicare qualsiasi combinazione di stili di controllo pulsante di selezione al controllo. Questi stili sono descritti in stili di [controllo di](/windows/win32/Controls/up-down-control-styles) scorrimento in Windows SDK.

*Rect*<br/>
Riferimento a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece di [Crea](#create) per applicare gli stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows WS_EX_.

## <a name="cspinbuttonctrlcspinbuttonctrl"></a><a name="cspinbuttonctrl"></a>CSpinButtonCtrl::CSpinButtonCtrl

Costruisce un oggetto `CSpinButtonCtrl`.

```
CSpinButtonCtrl();
```

## <a name="cspinbuttonctrlgetaccel"></a><a name="getaccel"></a>CSpinButtonCtrl::GetAccel

Recupera le informazioni sull'accelerazione per un controllo pulsante di selezione.

```
UINT GetAccel(
    int nAccel,
    UDACCEL* pAccel) const;
```

### <a name="parameters"></a>Parametri

*nAccel*<br/>
Numero di elementi nella matrice specificata da *pAccel*.

*pAccel*<br/>
Puntatore a una matrice di strutture [UDACCEL](/windows/win32/api/commctrl/ns-commctrl-udaccel) che riceve informazioni sull'accelerazione.

### <a name="return-value"></a>Valore restituito

Numero di strutture di acceleratori recuperate.

## <a name="cspinbuttonctrlgetbase"></a><a name="getbase"></a>CSpinButtonCtrl::GetBase

Recupera la base corrente per un controllo pulsante di selezione.

```
UINT GetBase() const;
```

### <a name="return-value"></a>Valore restituito

Valore di base corrente.

## <a name="cspinbuttonctrlgetbuddy"></a><a name="getbuddy"></a>CSpinButtonCtrl::GetBuddy

Recupera un puntatore alla finestra buddy corrente.

```
CWnd* GetBuddy() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra buddy corrente.

## <a name="cspinbuttonctrlgetpos"></a><a name="getpos"></a>CSpinButtonCtrl::GetPos

Recupera la posizione corrente di un controllo pulsante di selezione.

```
int GetPos() const;  int GetPos32(LPBOOL lpbError = NULL) const;
```

### <a name="parameters"></a>Parametri

*lpbErrore*<br/>
Puntatore a un valore booleano impostato su zero se il valore viene recuperato correttamente o diverso da zero se si verifica un errore. Se questo parametro è impostato su NULL, gli errori non vengono segnalati.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce la posizione corrente a 16 bit nella parola meno recente. La parola più ordine è diversa da zero se si è verificato un errore.

La seconda versione restituisce la posizione a 32 bit.

### <a name="remarks"></a>Osservazioni

Quando elabora il valore restituito, il controllo aggiorna la posizione corrente in base alla didascalia della finestra buddy. Il controllo restituisce un errore se non è presente alcuna finestra buddy o se la didascalia specifica un valore non valido o non compreso nell'intervallo.

## <a name="cspinbuttonctrlgetrange"></a><a name="getrange"></a>CSpinButtonCtrl::GetRange

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

*Inferiore*<br/>
Riferimento a un numero intero che riceve il limite inferiore per il controllo.

*Superiore*<br/>
Riferimento a un numero intero che riceve il limite superiore per il controllo.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce un valore a 32 bit contenente i limiti superiore e inferiore. La parola meno ordine è il limite superiore per il controllo e la parola più ordine è il limite inferiore.

### <a name="remarks"></a>Osservazioni

La funzione `GetRange32` membro recupera l'intervallo del controllo pulsante di selezione come numero intero a 32 bit.

## <a name="cspinbuttonctrlsetaccel"></a><a name="setaccel"></a>CSpinButtonCtrl::SetAccel

Imposta l'accelerazione per un controllo pulsante di selezione.

```
BOOL SetAccel(
    int nAccel,
    UDACCEL* pAccel);
```

### <a name="parameters"></a>Parametri

*nAccel*<br/>
Numero di strutture [UDACCEL specificate](/windows/win32/api/commctrl/ns-commctrl-udaccel) da *pAccel*.

*pAccel*<br/>
Puntatore a una matrice di strutture UDACCEL, che contengono informazioni sull'accelerazione. Gli elementi devono essere ordinati in `nSec` ordine crescente in base al membro.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="cspinbuttonctrlsetbase"></a><a name="setbase"></a>CSpinButtonCtrl::SetBase

Imposta la base per un controllo pulsante di selezione.

```
int SetBase(int nBase);
```

### <a name="parameters"></a>Parametri

*nBase (base)*<br/>
Nuovo valore di base per il controllo. Può essere 10 per decimale o 16 per esadecimale.

### <a name="return-value"></a>Valore restituito

Valore di base precedente in caso di esito positivo oppure zero se viene fornita una base non valida.

### <a name="remarks"></a>Osservazioni

Il valore di base determina se nella finestra buddy vengono visualizzati numeri in cifre decimali o esadecimali. I numeri esadecimali sono sempre senza segno; i numeri decimali sono firmati.

## <a name="cspinbuttonctrlsetbuddy"></a><a name="setbuddy"></a>CSpinButtonCtrl::SetBuddy

Imposta la finestra buddy per un controllo pulsante di selezione.

```
CWnd* SetBuddy(CWnd* pWndBuddy);
```

### <a name="parameters"></a>Parametri

*pWndBuddy*<br/>
Puntatore alla nuova finestra buddy.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra buddy precedente.

### <a name="remarks"></a>Osservazioni

Un controllo di selezione è quasi sempre associato a un'altra finestra, ad esempio un controllo di modifica, che visualizza parte del contenuto. Quest'altra finestra è chiamata "amico" del controllo di selezione.

## <a name="cspinbuttonctrlsetpos"></a><a name="setpos"></a>CSpinButtonCtrl::SetPos

Imposta la posizione corrente per un controllo pulsante di selezione.

```
int SetPos(int nPos);
int SetPos32(int nPos);
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Nuova posizione per il controllo. Questo valore deve essere compreso nell'intervallo specificato dai limiti superiore e inferiore per il controllo.

### <a name="return-value"></a>Valore restituito

La posizione precedente (precisione `SetPos`a 16 bit `SetPos32`per , precisione a 32 bit per ).

### <a name="remarks"></a>Osservazioni

`SetPos32`imposta la posizione a 32 bit.

## <a name="cspinbuttonctrlsetrange"></a><a name="setrange"></a>CSpinButtonCtrl::SetRange

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

*nInferiore* e *nUpper*<br/>
Limiti superiore e inferiore per il controllo. Per `SetRange`, nessuno dei due limiti può essere maggiore di UD_MAXVAL o minore di UD_MINVAL; inoltre, la differenza tra i due limiti non può superare UD_MAXVAL. `SetRange32`non pone restrizioni ai limiti; utilizzare qualsiasi numero intero.

### <a name="remarks"></a>Osservazioni

La funzione `SetRange32` membro imposta l'intervallo a 32 bit per il controllo pulsante di selezione.

> [!NOTE]
> L'intervallo predefinito per il pulsante di selezione ha il valore massimo impostato su zero (0) e il valore minimo impostato su 100. Poiché il valore massimo è inferiore al valore minimo, facendo clic sulla freccia rivolta verso l'alto si ridurrà la posizione e facendo clic sulla freccia giù verrà aumentato. Utilizzare `CSpinButtonCtrl::SetRange` per regolare questi valori.

## <a name="see-also"></a>Vedere anche

[ESEMPIO MFC CMNCTRL2](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CSliderCtrl](../../mfc/reference/csliderctrl-class.md)
