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
ms.openlocfilehash: df21591dec1da5861125d7e9480fb9345aaad061
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752944"
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
|[CBitmapButton::CBitmapButton](#cbitmapbutton)|Costruisce un oggetto `CBitmapButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmapButton::Caricamento automatico](#autoload)|Associa un pulsante in una finestra `CBitmapButton` di dialogo a un oggetto della classe , carica le bitmap in base al nome e ridimensiona il pulsante per adattarlo alla bitmap.|
|[CBitmapButton::LoadBitmaps](#loadbitmaps)|Inizializza l'oggetto caricando una o più risorse bitmap denominate dal file di risorse dell'applicazione e allegando le bitmap all'oggetto.|
|[CBitmapButton::SizeToContent](#sizetocontent)|Ridimensiona il pulsante per contenere la bitmap.|

## <a name="remarks"></a>Osservazioni

`CBitmapButton`gli oggetti contengono fino a quattro bitmap, che contengono immagini per i diversi stati che un pulsante può assumere: su (o normale), giù (o selezionato), stato attivo e disabilitato. È necessaria solo la prima bitmap; gli altri sono opzionali.

Le immagini con pulsante bitmap includono il bordo intorno all'immagine e l'immagine stessa. Il bordo in genere svolge un ruolo nella visualizzazione dello stato del pulsante. Ad esempio, la bitmap per lo stato attivo è in genere simile a quella per lo stato attivo, ma con un rettangolo tratteggiato ingiunto dal bordo o una linea continua spessa al bordo. La bitmap per lo stato disabilitato è in genere simile a quella per lo stato attivo, ma presenta un contrasto inferiore (ad esempio una selezione di menu in grigio o in grigio).

Queste bitmap possono essere di qualsiasi dimensione, ma tutte vengono trattate come se fossero delle stesse dimensioni della bitmap per lo stato attivo.

Varie applicazioni richiedono diverse combinazioni di immagini bitmap:

|Su|Giù|Con stato attivo|Disabled|Applicazione|
|--------|----------|-------------|--------------|-----------------|
|×||||Bitmap|
|×|×|||Pulsante senza stile WS_TABSTOP|
|×|×|×|×|Pulsante di finestra di dialogo con tutti gli stati|
|×|×|×||Pulsante della finestra di dialogo con stile WS_TABSTOP|

Quando si crea un controllo pulsante bitmap, impostare lo stile di BS_OWNERDRAW per specificare che il pulsante è disegnato dal proprietario. In questo modo Windows inviare i messaggi WM_MEASUREITEM e WM_DRAWITEM per il pulsante; il framework gestisce questi messaggi e gestisce l'aspetto del pulsante per l'utente.

### <a name="to-create-a-bitmap-button-control-in-a-windows-client-area"></a>Per creare un controllo pulsante bitmap nell'area client di una finestraTo create a bitmap-button control in a window's client area

1. Creare da una a quattro immagini bitmap per il pulsante.

1. Costruire l'oggetto [CBitmapButton.](#cbitmapbutton)

1. Chiamare la funzione [Create](../../mfc/reference/cbutton-class.md#create) per creare il controllo `CBitmapButton` pulsante di Windows e associarlo all'oggetto.

1. Chiamare la funzione membro [LoadBitmaps](#loadbitmaps) per caricare le risorse bitmap dopo la costruzione del pulsante bitmap.

### <a name="to-include-a-bitmap-button-control-in-a-dialog-box"></a>Per includere un controllo pulsante bitmap in una finestra di dialogoTo include a bitmap-button control in a dialog box

1. Creare da una a quattro immagini bitmap per il pulsante.

1. Creare un modello di finestra di dialogo con un pulsante di disegno del proprietario posizionato nel punto in cui si desidera inserire il pulsante bitmap. La dimensione del pulsante nel modello non ha importanza.

1. Impostare la didascalia del pulsante su un valore quale "MYIMAGE" e definire un simbolo per il pulsante, ad esempio IDC_MYIMAGE.

1. Nello script di risorsa dell'applicazione assegnare a ognuna delle immagini create per il pulsante un ID creato aggiungendo una delle lettere "U", "D", "F" o "X" (per l'alto, verso il basso, lo stato attivo e disabilitato) alla stringa utilizzata per la didascalia del pulsante nel passaggio 3. Per la didascalia del pulsante "MYIMAGE", ad esempio, gli ID sarebbero " MYIMAGEU", "MYIMAGED", "MYIMAGEF" e "MYIMAGEX". È **necessario** specificare l'ID delle bitmap tra virgolette doppie. In caso contrario, l'editor di risorse assegnerà un numero intero alla risorsa e MFC avrà esito negativo durante il caricamento dell'immagine.

1. Nella classe di finestre di `CDialog`dialogo `CBitmapButton` dell'applicazione (derivata da ), aggiungere un oggetto membro.

1. Nella `CDialog` routine [OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog) dell'oggetto, `CBitmapButton` chiamare la funzione [AutoLoad](#autoload) dell'oggetto, utilizzando come `CDialog` parametri l'ID di controllo del pulsante e il puntatore **this** dell'oggetto.

Se si desidera gestire i messaggi di notifica di Windows, ad esempio BN_CLICKED, inviati `CDialog`da un `CDialog`controllo pulsante bitmap all'elemento padre (in genere una classe derivata da ), aggiungere all'oggetto derivato dall'oggetto derivato da una voce della mappa messaggi e una funzione membro del gestore messaggi per ogni messaggio. Le notifiche inviate `CBitmapButton` da un oggetto sono le stesse di quelle inviate da un oggetto [CButton.](../../mfc/reference/cbutton-class.md)

La classe [CToolBar](../../mfc/reference/ctoolbar-class.md) adotta un approccio diverso ai pulsanti bitmap.

Per ulteriori `CBitmapButton`informazioni su , vedere [Controlli](../../mfc/controls-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

`CBitmapButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="cbitmapbuttonautoload"></a><a name="autoload"></a>CBitmapButton::Caricamento automatico

Associa un pulsante in una finestra `CBitmapButton` di dialogo a un oggetto della classe , carica le bitmap in base al nome e ridimensiona il pulsante per adattarlo alla bitmap.

```
BOOL AutoLoad(
    UINT nID,
    CWnd* pParent);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
ID di controllo del pulsante.

*pPadre*<br/>
Puntatore all'oggetto proprietario del pulsante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `AutoLoad` la funzione per inizializzare un pulsante di disegno del proprietario in una finestra di dialogo come pulsante bitmap. Le istruzioni per l'utilizzo di `CBitmapButton` questa funzione sono riportate nelle osservazioni per la classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#75](../../mfc/codesnippet/cpp/cbitmapbutton-class_1.cpp)]

## <a name="cbitmapbuttoncbitmapbutton"></a><a name="cbitmapbutton"></a>CBitmapButton::CBitmapButton

Crea un oggetto `CBitmapButton`.

```
CBitmapButton();
```

### <a name="remarks"></a>Osservazioni

Dopo aver creato `CBitmapButton` l'oggetto di C, chiamare [CButton::Create](../../mfc/reference/cbutton-class.md#create) per `CBitmapButton` creare il controllo pulsante di Windows e collegarlo all'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#57](../../mfc/codesnippet/cpp/cbitmapbutton-class_2.cpp)]

## <a name="cbitmapbuttonloadbitmaps"></a><a name="loadbitmaps"></a>CBitmapButton::LoadBitmaps

Utilizzare questa funzione quando si desidera caricare le immagini bitmap identificate dai `AutoLoad` relativi nomi di risorse o numeri ID o quando non è possibile utilizzare la funzione perché, ad esempio, si crea un pulsante bitmap che non fa parte di una finestra di dialogo.

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

*lpszBitmapResource (informazioni in base alla proprietà)*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per lo stato normale o "su" di un pulsante bitmap. Obbligatorio.

*lpszBitmapResourceSel*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per lo stato selezionato o "giù" di un pulsante bitmap. Può essere Null.

*lpszBitmapResourceFocus*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per lo stato attivo di un pulsante bitmap. Può essere Null.

*lpszBitmapResourceDisabled*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per lo stato disabilitato di un pulsante bitmap. Può essere Null.

*nIdBitmapResource*<br/>
Specifica il numero ID della risorsa bitmap per lo stato normale o "su" di un pulsante bitmap. Obbligatorio.

*nIdBitmapResourceSel*<br/>
Specifica il numero ID della risorsa bitmap per lo stato selezionato o "giù" di un pulsante bitmap. Può essere 0.

*nIdBitmapResourceFocus*<br/>
Specifica il numero ID della risorsa bitmap per lo stato attivo di un pulsante bitmap. Può essere 0.

*nIDBitmapResourceDisabled*<br/>
Specifica il numero ID della risorsa bitmap per lo stato disabilitato di un pulsante bitmap. Può essere 0.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#58](../../mfc/codesnippet/cpp/cbitmapbutton-class_3.cpp)]

## <a name="cbitmapbuttonsizetocontent"></a><a name="sizetocontent"></a>CBitmapButton::SizeToContent

Chiamare questa funzione per ridimensionare un pulsante bitmap alle dimensioni della bitmap.

```cpp
void SizeToContent();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#59](../../mfc/codesnippet/cpp/cbitmapbutton-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLTEST](../../overview/visual-cpp-samples.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
