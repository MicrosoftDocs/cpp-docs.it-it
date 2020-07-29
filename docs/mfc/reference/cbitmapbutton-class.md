---
title: Classe CBitmapButton
ms.date: 11/04/2016
f1_keywords:
- CBitmapButton
- AFXEXT/CBitmapButton
- AFXEXT/CBitmapButton::CBitmapButton
- AFXEXT/CBitmapButton::AutoLoad
- AFXEXT/CBitmapButton::LoadBitmaps
- AFXEXT/CBitmapButton::SizeToContent
helpviewer_keywords:
- CBitmapButton [MFC], CBitmapButton
- CBitmapButton [MFC], AutoLoad
- CBitmapButton [MFC], LoadBitmaps
- CBitmapButton [MFC], SizeToContent
ms.assetid: 9ad6cb45-c3c4-4fb1-96d3-1fe3df7bbcfc
ms.openlocfilehash: 0cf4554f86f4a9275e4d96b3db519fde7fb05b22
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231871"
---
# <a name="cbitmapbutton-class"></a>Classe CBitmapButton

Crea controlli di tipo pulsante di comando dotati di immagini bitmap anziché di testo come etichetta.

## <a name="syntax"></a>Sintassi

```
class CBitmapButton : public CButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmapButton:: CBitmapButton](#cbitmapbutton)|Costruisce un oggetto `CBitmapButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmapButton:: autoload](#autoload)|Associa un pulsante in una finestra di dialogo con un oggetto della `CBitmapButton` classe, carica le bitmap in base al nome e ridimensiona il pulsante per adattarlo alla bitmap.|
|[CBitmapButton:: LoadBitmaps](#loadbitmaps)|Inizializza l'oggetto caricando una o più risorse bitmap denominate dal file di risorse dell'applicazione e aggiungendo le bitmap all'oggetto.|
|[CBitmapButton:: SizeToContent](#sizetocontent)|Ridimensiona il pulsante per adattarlo alla bitmap.|

## <a name="remarks"></a>Osservazioni

`CBitmapButton`gli oggetti contengono fino a quattro bitmap, che contengono immagini per i diversi Stati che un pulsante può assumere: up (o Normal), Down (o selected), Focused e disabled. È necessaria solo la prima bitmap. le altre sono facoltative.

Le immagini dei pulsanti bitmap includono il bordo intorno all'immagine e l'immagine stessa. Il bordo rappresenta in genere una parte della visualizzazione dello stato del pulsante. La bitmap per lo stato attivo, ad esempio, è in genere simile a quella per lo stato attivo, ma con un rettangolo tratteggiato inserito dal bordo o da una linea continua spessa al bordo. La bitmap per lo stato disabilitato è in genere simile a quella per lo stato attivo, ma ha un contrasto inferiore (ad esempio una selezione di menu in grigio o in grigio).

Queste bitmap possono essere di qualsiasi dimensione, ma tutte vengono considerate come se fossero le stesse dimensioni della bitmap per lo stato attivo.

Diverse applicazioni richiedono combinazioni diverse di immagini bitmap:

|Su|Giù|Con stato attivo|Disabled|Applicazione|
|--------|----------|-------------|--------------|-----------------|
|×||||Bitmap|
|×|×|||Pulsante senza WS_TABSTOP stile|
|×|×|×|×|Pulsante di dialogo con tutti gli Stati|
|×|×|×||Pulsante di dialogo con stile WS_TABSTOP|

Quando si crea un controllo Button bitmap, impostare lo stile BS_OWNERDRAW per specificare che il pulsante è disegnato dal proprietario. In questo modo Windows invierà i messaggi WM_MEASUREITEM e WM_DRAWITEM per il pulsante. il Framework gestisce questi messaggi e gestisce l'aspetto del pulsante.

### <a name="to-create-a-bitmap-button-control-in-a-windows-client-area"></a>Per creare un controllo Button bitmap nell'area client di una finestra

1. Creare una o quattro immagini bitmap per il pulsante.

1. Costruire l'oggetto [CBitmapButton](#cbitmapbutton) .

1. Chiamare la funzione [create](../../mfc/reference/cbutton-class.md#create) per creare il controllo pulsante di Windows e collegarlo all' `CBitmapButton` oggetto.

1. Chiamare la funzione membro [LoadBitmaps](#loadbitmaps) per caricare le risorse bitmap dopo la costruzione del pulsante bitmap.

### <a name="to-include-a-bitmap-button-control-in-a-dialog-box"></a>Per includere un controllo Button bitmap in una finestra di dialogo

1. Creare una o quattro immagini bitmap per il pulsante.

1. Creare un modello di finestra di dialogo con un pulsante di creazione del proprietario posizionato nel punto in cui si vuole usare il pulsante bitmap. La dimensione del pulsante nel modello non è rilevante.

1. Impostare la didascalia del pulsante su un valore come "immagine" e definire un simbolo per il pulsante, ad esempio IDC_MYIMAGE.

1. Nello script di risorsa dell'applicazione assegnare a ognuna delle immagini create per il pulsante un ID costruito aggiungendo una delle lettere "U", "D", "F" o "X" (per up, Down, Focused e Disabled) alla stringa usata per la didascalia del pulsante nel passaggio 3. Per la didascalia del pulsante "immagine", ad esempio, gli ID sono "immagini", "immagine", "MYIMAGEF" e "IMAGEX". È **necessario** specificare l'ID delle bitmap tra virgolette doppie. In caso contrario, l'editor di risorse assegnerà un valore integer alla risorsa e MFC non riuscirà durante il caricamento dell'immagine.

1. Nella classe della finestra di dialogo dell'applicazione (derivata da `CDialog` ) aggiungere un `CBitmapButton` oggetto membro.

1. Nella `CDialog` routine [OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog) dell'oggetto chiamare la `CBitmapButton` funzione [autoload](#autoload) dell'oggetto, usando come parametri l'ID di controllo del pulsante e il `CDialog` puntatore dell'oggetto **`this`** .

Se si desidera gestire i messaggi di notifica di Windows, ad esempio BN_CLICKED, inviati da un controllo Button bitmap al relativo elemento padre (in genere una classe derivata da `CDialog` ), aggiungere all' `CDialog` oggetto derivato da una voce della mappa messaggi e una funzione membro del gestore del messaggio per ogni messaggio. Le notifiche inviate da un `CBitmapButton` oggetto sono identiche a quelle inviate da un oggetto [CButton](../../mfc/reference/cbutton-class.md) .

La classe [CToolBar](../../mfc/reference/ctoolbar-class.md) accetta un approccio diverso ai pulsanti bitmap.

Per ulteriori informazioni su `CBitmapButton` , vedere [controlli](../../mfc/controls-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

`CBitmapButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

## <a name="cbitmapbuttonautoload"></a><a name="autoload"></a>CBitmapButton:: autoload

Associa un pulsante in una finestra di dialogo con un oggetto della `CBitmapButton` classe, carica le bitmap in base al nome e ridimensiona il pulsante per adattarlo alla bitmap.

```
BOOL AutoLoad(
    UINT nID,
    CWnd* pParent);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
ID del controllo del pulsante.

*pParent*<br/>
Puntatore all'oggetto proprietario del pulsante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare la `AutoLoad` funzione per inizializzare un pulsante di estrazione del proprietario in una finestra di dialogo come pulsante bitmap. Le istruzioni per l'uso di questa funzione sono disponibili nelle note relative alla `CBitmapButton` classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#75](../../mfc/codesnippet/cpp/cbitmapbutton-class_1.cpp)]

## <a name="cbitmapbuttoncbitmapbutton"></a><a name="cbitmapbutton"></a>CBitmapButton:: CBitmapButton

Crea un oggetto `CBitmapButton`.

```
CBitmapButton();
```

### <a name="remarks"></a>Osservazioni

Dopo aver creato l' `CBitmapButton` oggetto C++, chiamare [CButton:: create](../../mfc/reference/cbutton-class.md#create) per creare il controllo pulsante di Windows e collegarlo all' `CBitmapButton` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#57](../../mfc/codesnippet/cpp/cbitmapbutton-class_2.cpp)]

## <a name="cbitmapbuttonloadbitmaps"></a><a name="loadbitmaps"></a>CBitmapButton:: LoadBitmaps

Utilizzare questa funzione quando si desidera caricare le immagini bitmap identificate dai relativi nomi di risorse o numeri ID oppure quando non è possibile utilizzare la `AutoLoad` funzione perché, ad esempio, si sta creando un pulsante bitmap che non fa parte di una finestra di dialogo.

```
BOOL LoadBitmaps(
    LPCTSTR lpszBitmapResource,
    LPCTSTR lpszBitmapResourceSel = NULL,
    LPCTSTR lpszBitmapResourceFocus = NULL,
    LPCTSTR lpszBitmapResourceDisabled = NULL);

BOOL LoadBitmaps(
    UINT nIDBitmapResource,
    UINT nIDBitmapResourceSel = 0,
    UINT nIDBitmapResourceFocus = 0,
    UINT nIDBitmapResourceDisabled = 0);
```

### <a name="parameters"></a>Parametri

*lpszBitmapResource*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per lo stato normale o "up" di un pulsante bitmap. Obbligatorio.

*lpszBitmapResourceSel*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per lo stato selezionato o "inattivo" di un pulsante bitmap. Può essere Null.

*lpszBitmapResourceFocus*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per lo stato attivo di un pulsante bitmap. Può essere Null.

*lpszBitmapResourceDisabled*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per lo stato disabilitato di un pulsante bitmap. Può essere Null.

*nIDBitmapResource*<br/>
Specifica il numero ID della risorsa bitmap per lo stato normale o "up" di un pulsante bitmap. Obbligatorio.

*nIDBitmapResourceSel*<br/>
Specifica il numero ID della risorsa bitmap per lo stato selezionato o "in basso" di un pulsante bitmap. Può essere 0.

*nIDBitmapResourceFocus*<br/>
Specifica il numero ID della risorsa bitmap per lo stato attivo di un pulsante bitmap. Può essere 0.

*nIDBitmapResourceDisabled*<br/>
Specifica il numero ID della risorsa bitmap per lo stato disabilitato di un pulsante bitmap. Può essere 0.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#58](../../mfc/codesnippet/cpp/cbitmapbutton-class_3.cpp)]

## <a name="cbitmapbuttonsizetocontent"></a><a name="sizetocontent"></a>CBitmapButton:: SizeToContent

Chiamare questa funzione per ridimensionare un pulsante bitmap sulle dimensioni della bitmap.

```cpp
void SizeToContent();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#59](../../mfc/codesnippet/cpp/cbitmapbutton-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[CTRLTEST di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
