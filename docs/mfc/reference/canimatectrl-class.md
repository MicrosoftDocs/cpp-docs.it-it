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
ms.openlocfilehash: fcee569659d732c26e274c8ca189042a16f13557
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371059"
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
|[CAnimateCtrl::Chiudi](#close)|Chiude la clip AVI.|
|[CAnimateCtrl::Creare](#create)|Crea un controllo di animazione `CAnimateCtrl` e lo associa a un oggetto.|
|[CAnimateCtrl::CreateEx](#createex)|Crea un controllo di animazione con gli stili `CAnimateCtrl` estesi di Windows specificati e lo associa a un oggetto.|
|[CAnimateCtrl::IsPlaying](#isplaying)|Indica se è in riproduzione una clip Audio-Video Interleaved (AVI).|
|[CAnimateCtrl::Apri](#open)|Apre una clip AVI da un file o da una risorsa e visualizza il primo fotogramma.|
|[CAnimateCtrl::Play](#play)|Riproduce la clip AVI senza audio.|
|[CAnimateCtrl::Seek](#seek)|Visualizza un singolo fotogramma selezionato della clip AVI.|
|[CAnimateCtrl:Arresto](#stop)|Interrompe la riproduzione della clip AVI.|

## <a name="remarks"></a>Osservazioni

Questo controllo (e `CAnimateCtrl` quindi la classe) è disponibile solo per i programmi in esecuzione in Windows 95, Windows 98 e Windows NT versione 3.51 e successive.

Un controllo animazione è una finestra rettangolare che visualizza una clip in formato AVI (Audio Video Interleaved), ovvero il formato audio/video standard di Windows. Una clip AVI è una serie di fotogrammi bitmap, come un filmato.

I controlli di animazione possono riprodurre solo semplici clip AVI. In particolare, le clip che devono essere riprodotte da un controllo animazione devono soddisfare i seguenti requisiti:

- Deve essere presente esattamente un flusso video e deve avere almeno un fotogramma.

- Ci possono essere al massimo due flussi nel file (in genere l'altro flusso, se presente, è un flusso audio, anche se il controllo di animazione ignora le informazioni audio).

- La clip deve essere decompressa o compressa con la compressione RLE8.

- Nel flusso video non sono consentite modifiche alla tavolozza.

È possibile aggiungere la clip AVI all'applicazione come risorsa AVI oppure accompagnarla come file AVI separato.

Poiché il thread continua l'esecuzione mentre viene visualizzato il clip AVI, un utilizzo comune per un controllo di animazione consiste nell'indicare l'attività del sistema durante un'operazione di lunga durata. Ad esempio, nella finestra di dialogo Trova di Esplora file viene visualizzata una lente di ingrandimento in movimento durante la ricerca di un file da parte del sistema.

Se si `CAnimateCtrl` crea un oggetto all'interno di una finestra di dialogo o da una risorsa finestra di dialogo utilizzando l'editor finestre, verrà eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si `CAnimateCtrl` crea un oggetto all'interno di una finestra, potrebbe essere necessario eliminarlo. Se si `CAnimateCtrl` crea l'oggetto nello stack, viene eliminato automaticamente. Se si `CAnimateCtrl` crea l'oggetto nell'heap utilizzando la **nuova** funzione, è necessario chiamare **delete** sull'oggetto per eliminarlo. Se si deriva una `CAnimateCtrl` nuova classe da e allocare memoria in tale classe, eseguire l'override del `CAnimateCtrl` distruttore per eliminare le allocazioni.

Per ulteriori informazioni `CAnimateCtrl`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzo di CAnimateCtrl](../../mfc/using-canimatectrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CAnimateCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="canimatectrlcanimatectrl"></a><a name="canimatectrl"></a>CAnimateCtrl::CAnimateCtrl

Costruisce un oggetto `CAnimateCtrl`.

```
CAnimateCtrl();
```

### <a name="remarks"></a>Osservazioni

È necessario chiamare la funzione membro [Create](#create) prima di poter eseguire qualsiasi altra operazione sull'oggetto creato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#56](../../mfc/codesnippet/cpp/canimatectrl-class_1.cpp)]

## <a name="canimatectrlclose"></a><a name="close"></a>CAnimateCtrl::Chiudi

Chiude la clip AVI precedentemente aperta nel controllo animazione (se presente) e la rimuove dalla memoria.

```
BOOL Close();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAnimateCtrl::CAnimateCtrl](#canimatectrl).

## <a name="canimatectrlcreate"></a><a name="create"></a>CAnimateCtrl::Creare

Crea un controllo di animazione `CAnimateCtrl` e lo associa a un oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo di animazione. Applicare qualsiasi combinazione degli stili di finestra descritti nella sezione Osservazioni riportata di seguito e gli stili di controllo di animazione descritti in [Stili di controllo animazione](/windows/win32/Controls/animation-control-styles) in Windows SDK.

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo di animazione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo `CDialog`di animazione, in genere un oggetto . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo di animazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CAnimateCtrl` in due passi. Chiamare innanzitutto il costruttore `Create`, quindi chiamare , che crea `CAnimateCtrl` il controllo di animazione e lo associa all'oggetto .

Applicare gli stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a un controllo di animazione.

- WS_CHILD sempre

- WS_VISIBLE di solito

- WS_DISABLED Raramente

Se si desidera utilizzare gli stili di finestre estese `Create`con il controllo animazione, chiamare [CreateEx](#createex) anziché .

Oltre agli stili di finestra elencati in precedenza, è possibile applicare uno o più stili di controllo animazione a un controllo di animazione. Per ulteriori informazioni sugli stili di [controllo di animazione,](/windows/win32/Controls/animation-control-styles)vedere Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAnimateCtrl::CAnimateCtrl](#canimatectrl).

## <a name="canimatectrlcreateex"></a><a name="createex"></a>CAnimateCtrl::CreateEx

Crea un controllo (una finestra figlio) `CAnimateCtrl` e lo associa all'oggetto.

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
Specifica lo stile del controllo di animazione. Applicare qualsiasi combinazione degli stili di controllo di finestra e animazione descritti in [Stili di controllo animazione](/windows/win32/Controls/animation-control-styles) in Windows SDK.

*Rect*<br/>
Riferimento a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece [di Crea](#create) per applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

## <a name="canimatectrlisplaying"></a><a name="isplaying"></a>CAnimateCtrl::IsPlaying

Indica se è in riproduzione una clip Audio-Video Interleaved (AVI).

```
BOOL IsPlaying() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe un clip AVI è in riproduzione; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio ACM_ISPLAYING,](/windows/win32/Controls/acm-isplaying) descritto in Windows SDK.

## <a name="canimatectrlopen"></a><a name="open"></a>CAnimateCtrl::Apri

Chiamare questa funzione per aprire una clip AVI e visualizzare il primo fotogramma.

```
BOOL Open(LPCTSTR lpszFileName);
BOOL Open(UINT nID);
```

### <a name="parameters"></a>Parametri

*lpszNomefileName (nome file)*<br/>
Oggetto `CString` o puntatore a una stringa con terminazione null che contiene il nome del file AVI o il nome di una risorsa AVI. Se questo parametro è NULL, il sistema chiude la clip AVI precedentemente aperta per il controllo di animazione, se presente.

*nID*<br/>
Identificatore di risorsa AVI. Se questo parametro è NULL, il sistema chiude la clip AVI precedentemente aperta per il controllo di animazione, se presente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La risorsa AVI viene caricata dal modulo che ha creato il controllo di animazione.

`Open`non supporta il suono in una clip AVI; è possibile aprire solo clip AVI silenziose.

Se il controllo `ACS_AUTOPLAY` di animazione ha lo stile, il controllo animazione inizierà automaticamente a riprodurre la clip immediatamente dopo l'apertura. Continuerà a riprodurre la clip in background mentre il thread continua l'esecuzione. Al termine della riproduzione, la clip verrà ripetuta automaticamente.

Se il controllo `ACS_CENTER` di animazione ha lo stile, la clip AVI verrà centrata nel controllo e le dimensioni del controllo non cambieranno. Se il controllo animazione `ACS_CENTER` non ha lo stile, il controllo verrà ridimensionato quando la clip AVI viene aperta in base alle dimensioni delle immagini nella clip AVI. La posizione dell'angolo superiore sinistro del controllo non cambierà, ma solo la dimensione del controllo.

Se il controllo `ACS_TRANSPARENT` di animazione ha lo stile, il primo fotogramma verrà disegnato utilizzando uno sfondo trasparente anziché il colore di sfondo specificato nella clip di animazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAnimateCtrl::CAnimateCtrl](#canimatectrl).

## <a name="canimatectrlplay"></a><a name="play"></a>CAnimateCtrl::Play

Chiamare questa funzione per riprodurre una clip AVI in un controllo di animazione.

```
BOOL Play(
    UINT nFrom,
    UINT nTo,
    UINT nRep);
```

### <a name="parameters"></a>Parametri

*nDa*<br/>
Indice in base zero del fotogramma in cui inizia la riproduzione. Il valore deve essere inferiore a 65.536. Un valore pari a 0 indica che il primo fotogramma della clip AVI.

*Nper*<br/>
Indice in base zero del fotogramma in cui termina la riproduzione. Il valore deve essere inferiore a 65.536. Un valore pari a - 1 indica che termina con l'ultimo fotogramma della clip AVI.

*nRep (in modo re)*<br/>
Numero di volte in cui riprodurre la clip AVI. Il valore -1 indica la riproduzione del file per un tempo indefinito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il controllo di animazione riprodurrà la clip in background mentre il thread continua l'esecuzione. Se il controllo `ACS_TRANSPARENT` dell'animazione ha uno stile, la clip AVI verrà riprodotta utilizzando uno sfondo trasparente anziché il colore di sfondo specificato nella clip di animazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAnimateCtrl::CAnimateCtrl](#canimatectrl).

## <a name="canimatectrlseek"></a><a name="seek"></a>CAnimateCtrl::Seek

Chiamare questa funzione per visualizzare in modo statico un singolo fotogramma della clip AVI.

```
BOOL Seek(UINT nTo);
```

### <a name="parameters"></a>Parametri

*Nper*<br/>
Indice in base zero del fotogramma da visualizzare. Il valore deve essere inferiore a 65.536. Un valore pari a 0 indica che il primo fotogramma della clip AVI. Il valore -1 indica la visualizzazione dell'ultimo fotogramma nella clip AVI.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se il controllo `ACS_TRANSPARENT` dell'animazione ha uno stile, la clip AVI verrà disegnata utilizzando uno sfondo trasparente anziché il colore di sfondo specificato nella clip di animazione.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAnimateCtrl::CAnimateCtrl](#canimatectrl).

## <a name="canimatectrlstop"></a><a name="stop"></a>CAnimateCtrl:Arresto

Chiamare questa funzione per interrompere la riproduzione di una clip AVI in un controllo animazione.

```
BOOL Stop();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAnimateCtrl::CAnimateCtrl](#canimatectrl).

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CAnimateCtrl::Creare](#create)<br/>
[ON_CONTROL](message-map-macros-mfc.md#on_control)
