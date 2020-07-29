---
title: Classe CAnimateCtrl
ms.date: 11/04/2016
f1_keywords:
- CAnimateCtrl
- AFXCMN/CAnimateCtrl
- AFXCMN/CAnimateCtrl::CAnimateCtrl
- AFXCMN/CAnimateCtrl::Close
- AFXCMN/CAnimateCtrl::Create
- AFXCMN/CAnimateCtrl::CreateEx
- AFXCMN/CAnimateCtrl::IsPlaying
- AFXCMN/CAnimateCtrl::Open
- AFXCMN/CAnimateCtrl::Play
- AFXCMN/CAnimateCtrl::Seek
- AFXCMN/CAnimateCtrl::Stop
helpviewer_keywords:
- CAnimateCtrl [MFC], CAnimateCtrl
- CAnimateCtrl [MFC], Close
- CAnimateCtrl [MFC], Create
- CAnimateCtrl [MFC], CreateEx
- CAnimateCtrl [MFC], IsPlaying
- CAnimateCtrl [MFC], Open
- CAnimateCtrl [MFC], Play
- CAnimateCtrl [MFC], Seek
- CAnimateCtrl [MFC], Stop
ms.assetid: 5e8eb1bd-96b7-47b8-8de2-6bcbb3cc299b
ms.openlocfilehash: 651b5775886374f3fcc95ab6b2cb3d892d9d77e8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87183383"
---
# <a name="canimatectrl-class"></a>Classe CAnimateCtrl

Fornisce la funzionalità del controllo animazione comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CAnimateCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimateCtrl:: CAnimateCtrl](#canimatectrl)|Costruisce un oggetto `CAnimateCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimateCtrl:: Close](#close)|Chiude il clip AVI.|
|[CAnimateCtrl:: create](#create)|Crea un controllo animazione e lo collega a un `CAnimateCtrl` oggetto.|
|[CAnimateCtrl:: CreateEx](#createex)|Crea un controllo animazione con gli stili estesi di Windows specificati e lo associa a un `CAnimateCtrl` oggetto.|
|[CAnimateCtrl:: riproduzione](#isplaying)|Indica se un clip audio-video con interfoliazione (AVI) viene riprodotto.|
|[CAnimateCtrl:: Open](#open)|Apre un clip AVI da un file o da una risorsa e visualizza il primo fotogramma.|
|[CAnimateCtrl::P lay](#play)|Riproduce il clip AVI senza suono.|
|[CAnimateCtrl:: Seek](#seek)|Visualizza un singolo fotogramma selezionato del clip AVI.|
|[CAnimateCtrl:: Stop](#stop)|Interrompe la riproduzione del clip AVI.|

## <a name="remarks"></a>Osservazioni

Questo controllo (e pertanto la `CAnimateCtrl` classe) è disponibile solo per i programmi in esecuzione in windows 95, windows 98 e Windows NT versione 3,51 e versioni successive.

Un controllo di animazione è una finestra rettangolare che visualizza una clip in formato AVI (Audio Video Interleaved), il formato video/audio standard di Windows. Un clip AVI è costituito da una serie di frame bitmap, ad esempio un film.

I controlli animazione possono riprodurre solo semplici clip AVI. In particolare, le clip che devono essere riprodotte da un controllo animazione devono soddisfare i requisiti seguenti:

- Deve esistere esattamente un flusso video e deve avere almeno un frame.

- Nel file possono essere presenti al massimo due flussi (in genere l'altro flusso, se presente, è un flusso audio, sebbene il controllo animazione ignori le informazioni audio).

- Il clip deve essere decompresso o compresso con compressione RLE8.

- Nel flusso video non sono consentite modifiche alla tavolozza.

È possibile aggiungere il clip AVI all'applicazione come risorsa AVI oppure può accompagnare l'applicazione come file AVI separato.

Poiché il thread continua l'esecuzione durante la visualizzazione del clip AVI, un uso comune per un controllo di animazione consiste nell'indicare l'attività di sistema durante un'operazione di lunga durata. La finestra di dialogo trova di Esplora file, ad esempio, Visualizza una lente di ingrandimento quando il sistema cerca un file.

Se si crea un `CAnimateCtrl` oggetto all'interno di una finestra di dialogo o di una risorsa finestra di dialogo mediante l'editor finestre, questo verrà eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si crea un `CAnimateCtrl` oggetto all'interno di una finestra, potrebbe essere necessario eliminarlo. Se si crea l' `CAnimateCtrl` oggetto nello stack, questo viene eliminato automaticamente. Se si crea l' `CAnimateCtrl` oggetto nell'heap usando la **`new`** funzione, è necessario chiamare **`delete`** sull'oggetto per eliminarlo. Se si deriva una nuova classe da `CAnimateCtrl` e si allocano memoria in tale classe, eseguire l'override del `CAnimateCtrl` distruttore per eliminare le allocazioni.

Per altre informazioni sull'uso di `CAnimateCtrl` , vedere [controlli](../../mfc/controls-mfc.md) e [uso di CAnimateCtrl](../../mfc/using-canimatectrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CAnimateCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="canimatectrlcanimatectrl"></a><a name="canimatectrl"></a>CAnimateCtrl:: CAnimateCtrl

Costruisce un oggetto `CAnimateCtrl`.

```
CAnimateCtrl();
```

### <a name="remarks"></a>Osservazioni

Prima di poter eseguire qualsiasi altra operazione sull'oggetto creato, è necessario chiamare la funzione membro [create](#create) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#56](../../mfc/codesnippet/cpp/canimatectrl-class_1.cpp)]

## <a name="canimatectrlclose"></a><a name="close"></a>CAnimateCtrl:: Close

Chiude il clip AVI che è stato precedentemente aperto nel controllo dell'animazione, se presente, e lo rimuove dalla memoria.

```
BOOL Close();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

## <a name="canimatectrlcreate"></a><a name="create"></a>CAnimateCtrl:: create

Crea un controllo animazione e lo collega a un `CAnimateCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo dell'animazione. Applicare qualsiasi combinazione degli stili di Windows descritti nella sezione Osservazioni riportata di seguito e gli stili del controllo animazione descritti in [stili di controllo animazione](/windows/win32/Controls/animation-control-styles) nella Windows SDK.

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo di animazione. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) .

*pParentWnd*<br/>
Specifica la finestra padre del controllo di animazione, in genere `CDialog` . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo di animazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Si costruisce un `CAnimateCtrl` in due passaggi. Chiamare innanzitutto il costruttore, quindi chiamare `Create` , che crea il controllo animazione e lo collega all' `CAnimateCtrl` oggetto.

Applicare gli [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a un controllo Animation.

- WS_CHILD sempre

- WS_VISIBLE in genere

- WS_DISABLED raramente

Se si desidera utilizzare gli stili estesi di Windows con il controllo animazione, chiamare [CreateEx](#createex) anziché `Create` .

Oltre agli stili della finestra elencati in precedenza, è possibile applicare uno o più stili del controllo di animazione a un controllo dell'animazione. Per ulteriori informazioni sugli [stili dei controlli di animazione](/windows/win32/Controls/animation-control-styles), vedere la Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

## <a name="canimatectrlcreateex"></a><a name="createex"></a>CAnimateCtrl:: CreateEx

Crea un controllo (una finestra figlio) e lo associa all' `CAnimateCtrl` oggetto.

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
Specifica lo stile del controllo dell'animazione. Applicare qualsiasi combinazione degli stili di controllo della finestra e dell'animazione descritti negli [stili dei controlli di animazione](/windows/win32/Controls/animation-control-styles) nell'Windows SDK.

*Rect*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Usare `CreateEx` anziché [create](#create) per applicare gli stili estesi di Windows, specificati dall'introduzione allo stile esteso di Windows **WS_EX_**.

## <a name="canimatectrlisplaying"></a><a name="isplaying"></a>CAnimateCtrl:: riproduzione

Indica se un clip audio-video con interfoliazione (AVI) viene riprodotto.

```
BOOL IsPlaying() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se viene riprodotta una clip AVI; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [ACM_ISPLAYING](/windows/win32/Controls/acm-isplaying) , descritto nel Windows SDK.

## <a name="canimatectrlopen"></a><a name="open"></a>CAnimateCtrl:: Open

Chiamare questa funzione per aprire un clip AVI e visualizzarne il primo fotogramma.

```
BOOL Open(LPCTSTR lpszFileName);
BOOL Open(UINT nID);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
Un `CString` oggetto o un puntatore a una stringa con terminazione null che contiene il nome del file AVI o il nome di una risorsa AVI. Se questo parametro è NULL, il sistema chiude il clip AVI che è stato precedentemente aperto per il controllo dell'animazione, se disponibile.

*nID*<br/>
Identificatore di risorsa AVI. Se questo parametro è NULL, il sistema chiude il clip AVI che è stato precedentemente aperto per il controllo dell'animazione, se disponibile.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La risorsa AVI viene caricata dal modulo che ha creato il controllo dell'animazione.

`Open`non supporta il suono in un clip AVI; è possibile aprire solo le clip AVI invisibile all'utente.

Se il controllo dell'animazione ha lo `ACS_AUTOPLAY` stile, il controllo animazione avvierà automaticamente la riproduzione della clip immediatamente dopo l'apertura. Continuerà a riprodurre il clip in background mentre il thread continua l'esecuzione. Al termine della riproduzione, il clip verrà ripetuto automaticamente.

Se il controllo animazione ha lo `ACS_CENTER` stile, il clip AVI verrà centrato nel controllo e le dimensioni del controllo non verranno modificate. Se il controllo dell'animazione non ha lo `ACS_CENTER` stile, il controllo verrà ridimensionato quando il clip AVI viene aperto alla dimensione delle immagini nel clip AVI. La posizione dell'angolo superiore sinistro del controllo non viene modificata, bensì solo le dimensioni del controllo.

Se il controllo dell'animazione ha lo `ACS_TRANSPARENT` stile, il primo fotogramma verrà disegnato usando uno sfondo trasparente anziché il colore di sfondo specificato nel clip dell'animazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

## <a name="canimatectrlplay"></a><a name="play"></a>CAnimateCtrl::P lay

Chiamare questa funzione per riprodurre un clip AVI in un controllo Animation.

```
BOOL Play(
    UINT nFrom,
    UINT nTo,
    UINT nRep);
```

### <a name="parameters"></a>Parametri

*NDA*<br/>
Indice in base zero del frame in cui inizia la riproduzione. Il valore deve essere minore di 65.536. Il valore 0 indica che inizia con il primo fotogramma del clip AVI.

*nPer*<br/>
Indice in base zero del frame in cui termina la riproduzione. Il valore deve essere minore di 65.536. Il valore-1 indica che termina con l'ultimo frame del clip AVI.

*nRep*<br/>
Numero di volte in cui riprodurre il clip AVI. Il valore-1 indica la riproduzione illimitata del file.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il controllo animazione riprodurrà il clip in background mentre il thread continua l'esecuzione. Se lo stile del controllo Animation è `ACS_TRANSPARENT` , il clip AVI verrà riprodotto utilizzando uno sfondo trasparente anziché il colore di sfondo specificato nel clip di animazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

## <a name="canimatectrlseek"></a><a name="seek"></a>CAnimateCtrl:: Seek

Chiamare questa funzione per visualizzare in modo statico un singolo frame del clip AVI.

```
BOOL Seek(UINT nTo);
```

### <a name="parameters"></a>Parametri

*nPer*<br/>
Indice in base zero del fotogramma da visualizzare. Il valore deve essere minore di 65.536. Il valore 0 indica la visualizzazione del primo fotogramma nel clip AVI. Il valore-1 indica che viene visualizzato l'ultimo frame del clip AVI.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se lo stile del controllo Animation è `ACS_TRANSPARENT` , il clip AVI verrà disegnato usando uno sfondo trasparente anziché il colore di sfondo specificato nel clip di animazione.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

## <a name="canimatectrlstop"></a><a name="stop"></a>CAnimateCtrl:: Stop

Chiamare questa funzione per interrompere la riproduzione di un clip AVI in un controllo Animation.

```
BOOL Stop();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CAnimateCtrl:: create](#create)<br/>
[ON_CONTROL](message-map-macros-mfc.md#on_control)
