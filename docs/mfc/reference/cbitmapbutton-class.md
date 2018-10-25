---
title: Classe CBitmapButton | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CBitmapButton
- AFXEXT/CBitmapButton
- AFXEXT/CBitmapButton::CBitmapButton
- AFXEXT/CBitmapButton::AutoLoad
- AFXEXT/CBitmapButton::LoadBitmaps
- AFXEXT/CBitmapButton::SizeToContent
dev_langs:
- C++
helpviewer_keywords:
- CBitmapButton [MFC], CBitmapButton
- CBitmapButton [MFC], AutoLoad
- CBitmapButton [MFC], LoadBitmaps
- CBitmapButton [MFC], SizeToContent
ms.assetid: 9ad6cb45-c3c4-4fb1-96d3-1fe3df7bbcfc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 45909e50e56802fd547e6d68964fc3044921092e
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50066851"
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
|[CBitmapButton::AutoLoad](#autoload)|Associa un oggetto di un pulsante in una finestra di dialogo di `CBitmapButton` (classe), carica il bitmap(s) in base al nome e il pulsante per adattare la mappa di bit con dimensioni.|
|[CBitmapButton::LoadBitmaps](#loadbitmaps)|Inizializza l'oggetto caricamento di una o più risorse denominate bitmap da file di risorse dell'applicazione e collegando le bitmap all'oggetto.|
|[CBitmapButton::SizeToContent](#sizetocontent)|Ridimensiona il pulsante per adattarlo la bitmap.|

## <a name="remarks"></a>Note

`CBitmapButton` gli oggetti contengono fino a quattro bitmap, che contengono immagini per i diversi stati può presupporre che un pulsante: aggiornata (o normale) verso il basso (o selezionato), con stato attivo e disabilitati. Solo il primo bitmap è obbligatoria; gli altri sono facoltativi.

Le immagini bitmap dei pulsanti includono il bordo dell'immagine, nonché dell'immagine stessa. Bordo in genere riveste un ruolo in che mostra lo stato del pulsante. Ad esempio, la bitmap per lo stato attivo è in genere è simile a quella per lo stato attivo, ma con un rettangolo tratteggiata a grande scala da una linea continua spessa al bordo o il bordo. La bitmap per disabilitato lo stato in genere è simile a quello per lo stato attivo, ma ha inferiore a contrasto elevato (ad esempio, una selezione di menu in grigio o non disponibile).

Queste bitmap può essere di qualsiasi dimensione, ma vengono considerate tutte come se fossero le stesse dimensioni di bitmap per lo stato attivo.

Diverse applicazioni richiedono diverse combinazioni di immagini bitmap:

|Su|Giù|Con stato attivo|Disabilitato|Applicazione|
|--------|----------|-------------|--------------|-----------------|
|×||||Bitmap|
|×|×|||Pulsante senza stile WS_TABSTOP|
|×|×|×|×|Pulsante di finestra di dialogo con tutti gli Stati|
|×|×|×||Pulsante di finestra di dialogo con stile WS_TABSTOP|

Quando si crea un controllo pulsante di bitmap, impostare lo stile BS_OWNERDRAW per specificare che il pulsante è disegnato dal proprietario. In questo modo, Windows inviare i messaggi WM_MEASUREITEM e WM_DRAWITEM; del pulsante il framework gestisce questi messaggi e gestisce l'aspetto del pulsante per l'utente.

### <a name="to-create-a-bitmap-button-control-in-a-windows-client-area"></a>Per creare un controllo pulsante di bitmap nell'area client della finestra

1. Creare una a quattro immagini bitmap per il pulsante.

1. Costruire il [CBitmapButton](#cbitmapbutton) oggetto.

1. Chiamare il [Create](../../mfc/reference/cbutton-class.md#create) funzione per creare il controllo pulsante Windows e associarlo al `CBitmapButton` oggetto.

1. Chiamare il [LoadBitmaps](#loadbitmaps) funzione membro per caricare le risorse di bitmap dopo il pulsante bitmap è stato costruito.

### <a name="to-include-a-bitmap-button-control-in-a-dialog-box"></a>Per includere un controllo pulsante di bitmap in una finestra di dialogo

1. Creare una a quattro immagini bitmap per il pulsante.

1. Creare un modello di finestra di dialogo con un pulsante creato dal proprietario posizionato in cui si desidera il pulsante di bitmap. Le dimensioni del pulsante nel modello non è importante.

1. Impostare la didascalia del pulsante su un valore, ad esempio "MYIMAGE" e definire un simbolo per il pulsante, ad esempio IDC_MYIMAGE.

1. Nello script di risorsa dell'applicazione, assegnare ognuna delle immagini create per il pulsante di un ID creato mediante l'aggiunta di una lettera "U", "D", "F", o "X" (per verso l'alto, verso il basso, con stato attivo, disabilitato) e la stringa utilizzata per la didascalia del pulsante in passaggio 3. Per la didascalia del pulsante "MYIMAGE", ad esempio, gli ID sarà "MYIMAGEU", "MYIMAGED", "MYIMAGEF" e "MYIMAGEX." Si **necessario** specificare l'ID dei vostri bitmap all'interno delle virgolette doppie. In caso contrario, l'editor di risorse verrà assegnato un numero intero per la risorsa e MFC ha esito negativo quando il caricamento dell'immagine.

1. Nella classe di finestra di dialogo dell'applicazione (derivato da `CDialog`), aggiungere un `CBitmapButton` oggetto membro.

1. Nel `CDialog` dell'oggetto [OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog) chiamata di routine, il `CBitmapButton` dell'oggetto [AutoLoad](#autoload) funzionare, usando come parametri di ID di controllo del pulsante e `CDialog` oggetto **ciò** puntatore.

Se si desidera gestire i messaggi di notifica di Windows, ad esempio BN_CLICKED, inviato da un controllo pulsante bitmap all'elemento padre (in genere una classe derivata da `CDialog`), aggiungere il `CDialog`-oggetto derivato da un membro della mappa messaggi di movimento e gestore di messaggi funzione per ogni messaggio. Le notifiche inviate da un `CBitmapButton` oggetti sono identici a quelli inviati da un [CButton](../../mfc/reference/cbutton-class.md) oggetto.

La classe [CToolBar](../../mfc/reference/ctoolbar-class.md) adotta un approccio diverso per pulsanti con bitmap.

Per ulteriori informazioni sul `CBitmapButton`, vedere [controlli](../../mfc/controls-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

`CBitmapButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="autoload"></a>  CBitmapButton::AutoLoad

Associa un oggetto di un pulsante in una finestra di dialogo di `CBitmapButton` (classe), carica il bitmap(s) in base al nome e il pulsante per adattare la mappa di bit con dimensioni.

```
BOOL AutoLoad(
    UINT nID,
    CWnd* pParent);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
ID del controllo. del pulsante

*pParent*<br/>
Puntatore all'oggetto a cui appartiene il pulsante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Usare il `AutoLoad` funzione per inizializzare un pulsante di disegno in una finestra di dialogo come un pulsante bitmap. Le istruzioni per l'uso di questa funzione sono nella sezione Osservazioni per il `CBitmapButton` classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#75](../../mfc/codesnippet/cpp/cbitmapbutton-class_1.cpp)]

##  <a name="cbitmapbutton"></a>  CBitmapButton::CBitmapButton

Crea un oggetto `CBitmapButton`.

```
CBitmapButton();
```

### <a name="remarks"></a>Note

Dopo la creazione di C++ `CBitmapButton` dell'oggetto, chiamare [CButton::Create](../../mfc/reference/cbutton-class.md#create) per creare il controllo pulsante Windows e associarlo al `CBitmapButton` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#57](../../mfc/codesnippet/cpp/cbitmapbutton-class_2.cpp)]

##  <a name="loadbitmaps"></a>  CBitmapButton::LoadBitmaps

Utilizzare questa funzione quando si vuole caricare le immagini bitmap identificate da ai nomi di risorse o ai numeri ID, o quando non è possibile usare il `AutoLoad` funzionano perché, ad esempio, quando si crea un pulsante bitmap che non fa parte di una finestra di dialogo.

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
Punta alla stringa con terminazione null che contiene il nome della bitmap per normale del pulsante una bitmap o "backup" dello stato. Obbligatorio.

*lpszBitmapResourceSel*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per sia selezionato un pulsante bitmap o "disattivato". Può essere NULL.

*lpszBitmapResourceFocus*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per un pulsante di bitmap con stato attivo dello stato. Può essere NULL.

*lpszBitmapResourceDisabled*<br/>
Punta alla stringa con terminazione null che contiene il nome della bitmap per un pulsante di bitmap con stato disabilitato. Può essere NULL.

*nIDBitmapResource*<br/>
Specifica il numero di ID risorsa della risorsa bitmap per normale del pulsante una bitmap o "backup" dello stato. Obbligatorio.

*nIDBitmapResourceSel*<br/>
Specifica il numero di ID risorsa della risorsa bitmap per sia selezionato un pulsante bitmap o "disattivato". Può essere 0.

*nIDBitmapResourceFocus*<br/>
Specifica il numero di ID risorsa della risorsa bitmap per lo stato attivo del pulsante una bitmap. Può essere 0.

*nIDBitmapResourceDisabled*<br/>
Specifica il numero di ID risorsa della risorsa bitmap per stato disabilitato del pulsante una bitmap. Può essere 0.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#58](../../mfc/codesnippet/cpp/cbitmapbutton-class_3.cpp)]

##  <a name="sizetocontent"></a>  CBitmapButton::SizeToContent

Chiamare questa funzione per ridimensionare un pulsante bitmap per le dimensioni della bitmap.

```
void SizeToContent();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#59](../../mfc/codesnippet/cpp/cbitmapbutton-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLTEST](../../visual-cpp-samples.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

