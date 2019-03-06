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
ms.openlocfilehash: 867bec619dc633b7b1fbf9785e14132ba8c493ba
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417190"
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
|[CAnimateCtrl::CAnimateCtrl](#canimatectrl)|Costruisce un oggetto `CAnimateCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimateCtrl::Close](#close)|Chiude la clip AVI.|
|[CAnimateCtrl::Create](#create)|Crea un controllo animation e lo collega a un `CAnimateCtrl` oggetto.|
|[CAnimateCtrl::CreateEx](#createex)|Crea un controllo animation con gli stili estesi di Windows specificati e lo collega a un `CAnimateCtrl` oggetto.|
|[CAnimateCtrl::IsPlaying](#isplaying)|Indica se un clip Audio e Video con interfoliazione (AVI) è la riproduzione.|
|[CAnimateCtrl::Open](#open)|Apre un clip AVI da un file o una risorsa e visualizza il primo fotogramma.|
|[CAnimateCtrl::Play](#play)|Consente di riprodurre il clip AVI senza l'audio.|
|[CAnimateCtrl::Seek](#seek)|Consente di visualizzare un singolo frame selezionato del clip AVI.|
|[CAnimateCtrl::Stop](#stop)|Arresta la riproduzione della clip AVI.|

## <a name="remarks"></a>Note

Questo controllo (e pertanto il `CAnimateCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95, Windows 98 e Windows NT versione 3.51 e successive.

Un controllo animation è una finestra rettangolare contenente una clip in formato AVI (Audio Video con interfoliazione), ovvero il formato audio/video Windows standard. Un clip AVI è una serie di fotogrammi bitmap, come un film.

Controlli animazione possono riprodurre solo semplice clip AVI. In particolare, la clip per essere riprodotte da un controllo animation deve soddisfare i requisiti seguenti:

- Deve essere presente esattamente un flusso video e deve avere almeno un frame.

- Può esistere al massimo due flussi nel file (in genere l'altro flusso, se presente, è un flusso audio, anche se il controllo animazione Ignora informazioni audio).

- Il ritaglio deve essere non compressi o compressa con compressione RLE8.

- Nessuna modifica di tavolozza è consentita all'interno del flusso video.

È possibile aggiungere del clip AVI all'applicazione come una risorsa AVI, oppure può accompagnare l'applicazione come file AVI separato.

Poiché il thread continua l'esecuzione durante la visualizzazione del clip AVI, un utilizzo comune per un controllo animation è per indicare l'attività del sistema durante un'operazione di lunga durata. Ad esempio, la finestra di dialogo Trova di Esplora File consente di visualizzare una lente di ingrandimento mobile durante la ricerca di un file.

Se si crea un `CAnimateCtrl` oggetto all'interno di una finestra di dialogo casella o da una risorsa finestra di dialogo utilizzando la finestra di dialogo, verrà automaticamente quindi eliminato quando l'utente chiude la finestra di dialogo.

Se si crea un `CAnimateCtrl` dell'oggetto all'interno di una finestra, potrebbe essere necessario eliminarlo. Se si crea il `CAnimateCtrl` dell'oggetto nello stack, viene eliminato automaticamente. Se si crea il `CAnimateCtrl` oggetto sull'heap tramite il **nuovi** funzione, è necessario chiamare **eliminare** sull'oggetto per eliminarla definitivamente. Se si deriva una nuova classe da `CAnimateCtrl` e allocare memoria in tale classe, eseguire l'override di `CAnimateCtrl` distruttore per l'eliminazione delle allocazioni.

Per altre informazioni sull'uso `CAnimateCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [usando CAnimateCtrl](../../mfc/using-canimatectrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CAnimateCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="canimatectrl"></a>  CAnimateCtrl::CAnimateCtrl

Costruisce un oggetto `CAnimateCtrl`.

```
CAnimateCtrl();
```

### <a name="remarks"></a>Note

È necessario chiamare il [Create](#create) funzione membro prima di poter eseguire qualsiasi altra operazione sull'oggetto crei.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#56](../../mfc/codesnippet/cpp/canimatectrl-class_1.cpp)]

##  <a name="close"></a>  CAnimateCtrl::Close

Chiude la clip AVI che è stato precedentemente aperto nel controllo animazione (se presente) e lo rimuove dalla memoria.

```
BOOL Close();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

##  <a name="create"></a>  CAnimateCtrl::Create

Crea un controllo animation e lo collega a un `CAnimateCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo animazione. Applicare qualsiasi combinazione delle finestre di stili descritti nella sezione Osservazioni seguente e gli stili di controllo animazione descritto nella [stili del controllo animazione](/windows/desktop/Controls/animation-control-styles) nel SDK di Windows.

*rect*<br/>
Specifica del controllo animazione posizione e dimensioni. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](/windows/desktop/api/windef/ns-windef-tagrect) struttura.

*pParentWnd*<br/>
Specifica finestra padre del controllo animazione, in genere un `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID. del controllo animazione

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce un `CAnimateCtrl` in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo animazione e lo collega al `CAnimateCtrl` oggetto.

Applicare la seguente istruzione [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a un controllo di animazione.

- WS_CHILD sempre

- In genere WS_VISIBLE

- WS_DISABLED raramente

Se si desidera utilizzare gli stili estesi di windows con il controllo animazione, chiamare [CreateEx](#createex) invece di `Create`.

Oltre agli stili di finestra elencati in precedenza, è possibile applicare uno o più degli stili del controllo animazione a un controllo animation. Vedere il SDK di Windows per altre informazioni sul [stili del controllo animazione](/windows/desktop/Controls/animation-control-styles).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

##  <a name="createex"></a>  CAnimateCtrl::CreateEx

Crea un controllo (una finestra figlio) e la associa il `CAnimateCtrl` oggetto.

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
Specifica lo stile del controllo animazione. Applicare qualsiasi combinazione della finestra e stili del controllo animazione descritto nella [stili del controllo animazione](/windows/desktop/Controls/animation-control-styles) nel SDK di Windows.

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

##  <a name="isplaying"></a>  CAnimateCtrl::IsPlaying

Indica se un clip Audio e Video con interfoliazione (AVI) è la riproduzione.

```
BOOL IsPlaying() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se viene riprodotto un clip AVI; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [ACM_ISPLAYING](/windows/desktop/Controls/acm-isplaying) messaggio, che è descritti nel SDK di Windows.

##  <a name="open"></a>  CAnimateCtrl::Open

Chiamare questa funzione per aprire un clip AVI e visualizzare il primo fotogramma.

```
BOOL Open(LPCTSTR lpszFileName);
BOOL Open(UINT nID);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
Oggetto `CString` oggetto o un puntatore a una stringa con terminazione null che contiene il nome del file AVI o il nome di una risorsa AVI. Se questo parametro è NULL, il sistema viene chiuso del clip AVI che è stato precedentemente aperto per il controllo animazione, se presente.

*nID*<br/>
Identificatore della risorsa AVI. Se questo parametro è NULL, il sistema viene chiuso del clip AVI che è stato precedentemente aperto per il controllo animazione, se presente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La risorsa AVI viene caricata dal modulo che ha creato il controllo di animazione.

`Open` non supporta suono di un clip AVI; è possibile aprire solo i clip AVI invisibile all'utente.

Se il controllo animazione ha il `ACS_AUTOPLAY` stile, il controllo animazione verrà avviato automaticamente la clip subito dopo viene aperto. Continuerà a riprodurre il clip in background mentre il thread continua l'esecuzione. Quando viene eseguita la clip riprodotto, si verrà automaticamente ripetuto.

Se il controllo animazione dispone di `ACS_CENTER` stile, del clip AVI verrà centrato nel controllo e non cambia le dimensioni del controllo. Se il controllo animazione non dispone di `ACS_CENTER` stile, sarà possibile ridimensionare il controllo all'apertura del clip AVI alle dimensioni delle immagini del clip AVI. La posizione dell'angolo superiore sinistro del controllo non modificherà, solo le dimensioni del controllo.

Se il controllo animazione dispone di `ACS_TRANSPARENT` stile, il primo fotogramma verrà disegnato usando uno sfondo trasparente piuttosto che il colore di sfondo specificato nella clip di animazione.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

##  <a name="play"></a>  CAnimateCtrl::Play

Chiamare questa funzione per riprodurre una clip AVI in un controllo animation.

```
BOOL Play(
    UINT nFrom,
    UINT nTo,
    UINT nRep);
```

### <a name="parameters"></a>Parametri

*nFrom*<br/>
Indice in base zero del frame in cui inizia la riproduzione. Valore deve essere minore di 65.536. Un valore pari a 0 significa che iniziano con il primo fotogramma del clip AVI.

*nTo*<br/>
Indice in base zero del frame in cui la riproduzione di end. Valore deve essere minore di 65.536. Il valore - 1 significa terminare con l'ultimo fotogramma del clip AVI.

*nRep*<br/>
Numero di volte in cui riprodurre il clip AVI. Un valore di - 1 indica che il file di riproduzione per un periodo illimitato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il controllo animazione verrà riprodotto il ritaglio in background mentre il thread continua l'esecuzione. Se il controllo animazione `ACS_TRANSPARENT` stile, del clip AVI verrà riprodotto con uno sfondo trasparente, anziché il colore di sfondo specificato della clip di animazione.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

##  <a name="seek"></a>  CAnimateCtrl::Seek

Chiamare questa funzione per visualizzare staticamente un singolo frame della clip AVI.

```
BOOL Seek(UINT nTo);
```

### <a name="parameters"></a>Parametri

*nTo*<br/>
Indice in base zero della pagina da visualizzare. Valore deve essere minore di 65.536. Il valore 0 indica la visualizzazione del primo fotogramma del clip AVI. Il valore -1 indica la visualizzazione dell'ultimo fotogramma del clip AVI.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Se il controllo animazione `ACS_TRANSPARENT` stile, del clip AVI verrà disegnato usando uno sfondo trasparente piuttosto che il colore di sfondo specificato nella clip di animazione.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

##  <a name="stop"></a>  CAnimateCtrl::Stop

Chiamare questa funzione per arrestare la riproduzione di un clip AVI in un controllo animation.

```
BOOL Stop();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[CAnimateCtrl::Create](#create)<br/>
[ON_CONTROL](message-map-macros-mfc.md#on_control)
