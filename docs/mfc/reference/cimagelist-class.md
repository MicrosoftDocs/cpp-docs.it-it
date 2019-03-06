---
title: CImageList (classe)
ms.date: 11/04/2016
f1_keywords:
- CImageList
- AFXCMN/CImageList
- AFXCMN/CImageList::CImageList
- AFXCMN/CImageList::Add
- AFXCMN/CImageList::Attach
- AFXCMN/CImageList::BeginDrag
- AFXCMN/CImageList::Copy
- AFXCMN/CImageList::Create
- AFXCMN/CImageList::DeleteImageList
- AFXCMN/CImageList::DeleteTempMap
- AFXCMN/CImageList::Detach
- AFXCMN/CImageList::DragEnter
- AFXCMN/CImageList::DragLeave
- AFXCMN/CImageList::DragMove
- AFXCMN/CImageList::DragShowNolock
- AFXCMN/CImageList::Draw
- AFXCMN/CImageList::DrawEx
- AFXCMN/CImageList::DrawIndirect
- AFXCMN/CImageList::EndDrag
- AFXCMN/CImageList::ExtractIcon
- AFXCMN/CImageList::FromHandle
- AFXCMN/CImageList::FromHandlePermanent
- AFXCMN/CImageList::GetBkColor
- AFXCMN/CImageList::GetDragImage
- AFXCMN/CImageList::GetImageCount
- AFXCMN/CImageList::GetImageInfo
- AFXCMN/CImageList::GetSafeHandle
- AFXCMN/CImageList::Read
- AFXCMN/CImageList::Remove
- AFXCMN/CImageList::Replace
- AFXCMN/CImageList::SetBkColor
- AFXCMN/CImageList::SetDragCursorImage
- AFXCMN/CImageList::SetImageCount
- AFXCMN/CImageList::SetOverlayImage
- AFXCMN/CImageList::Write
- AFXCMN/CImageList::m_hImageList
helpviewer_keywords:
- CImageList [MFC], CImageList
- CImageList [MFC], Add
- CImageList [MFC], Attach
- CImageList [MFC], BeginDrag
- CImageList [MFC], Copy
- CImageList [MFC], Create
- CImageList [MFC], DeleteImageList
- CImageList [MFC], DeleteTempMap
- CImageList [MFC], Detach
- CImageList [MFC], DragEnter
- CImageList [MFC], DragLeave
- CImageList [MFC], DragMove
- CImageList [MFC], DragShowNolock
- CImageList [MFC], Draw
- CImageList [MFC], DrawEx
- CImageList [MFC], DrawIndirect
- CImageList [MFC], EndDrag
- CImageList [MFC], ExtractIcon
- CImageList [MFC], FromHandle
- CImageList [MFC], FromHandlePermanent
- CImageList [MFC], GetBkColor
- CImageList [MFC], GetDragImage
- CImageList [MFC], GetImageCount
- CImageList [MFC], GetImageInfo
- CImageList [MFC], GetSafeHandle
- CImageList [MFC], Read
- CImageList [MFC], Remove
- CImageList [MFC], Replace
- CImageList [MFC], SetBkColor
- CImageList [MFC], SetDragCursorImage
- CImageList [MFC], SetImageCount
- CImageList [MFC], SetOverlayImage
- CImageList [MFC], Write
- CImageList [MFC], m_hImageList
ms.assetid: b6d1a704-1c82-4548-8a8f-77972adc98a5
ms.openlocfilehash: 2fc92858f84826e2b953fcbc9de020741e97b007
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57416007"
---
# <a name="cimagelist-class"></a>CImageList (classe)

Fornisce la funzionalità del controllo elenco immagini comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CImageList : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImageList::CImageList](#cimagelist)|Costruisce un oggetto `CImageList`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImageList::Add](#add)|Aggiunge un'immagine o immagini a un elenco di immagini.|
|[CImageList::Attach](#attach)|Associa un elenco di immagini da un `CImageList` oggetto.|
|[CImageList::BeginDrag](#begindrag)|Inizia a trascinare un'immagine.|
|[CImageList::Copy](#copy)|Copia un'immagine all'interno di un `CImageList` oggetto.|
|[CImageList::Create](#create)|Inizializza un elenco di immagini e lo collega a un `CImageList` oggetto.|
|[CImageList::DeleteImageList](#deleteimagelist)|Elimina un elenco di immagini.|
|[CImageList::DeleteTempMap](#deletetempmap)|Chiamato dal [CWinApp](../../mfc/reference/cwinapp-class.md) tempo di inattività gestore eliminare temporanei `CImageList` oggetto creato da `FromHandle`.|
|[CImageList::Detach](#detach)|Scollega un oggetto elenco immagini da un `CImageList` dell'oggetto e restituisce un handle per un elenco di immagini.|
|[CImageList::DragEnter](#dragenter)|Blocca gli aggiornamenti durante un'operazione di trascinamento e visualizza l'immagine di trascinamento in una posizione specificata.|
|[CImageList::DragLeave](#dragleave)|Sblocca la finestra e nasconde l'immagine di trascinamento in modo che la finestra può essere aggiornata.|
|[CImageList::DragMove](#dragmove)|Sposta l'immagine che viene trascinata durante un'operazione di trascinamento e rilascio.|
|[CImageList::DragShowNolock](#dragshownolock)|Mostra o nasconde l'immagine di trascinamento durante un'operazione di trascinamento, senza bloccare la finestra.|
|[CImageList::Draw](#draw)|Disegna l'immagine che viene trascinata durante un'operazione di trascinamento e rilascio.|
|[CImageList::DrawEx](#drawex)|Disegna un elemento di elenco di immagini nel contesto di dispositivo specificato. La funzione utilizza lo stile di disegno specificato e combina l'immagine con il colore specificati.|
|[CImageList::DrawIndirect](#drawindirect)|Disegna un'immagine da un elenco di immagini.|
|[CImageList::EndDrag](#enddrag)|Termina un'operazione di trascinamento.|
|[CImageList::ExtractIcon](#extracticon)|Crea un'icona basata su un'immagine e una maschera in un elenco di immagini.|
|[CImageList::FromHandle](#fromhandle)|Restituisce un puntatore a un `CImageList` dell'oggetto quando viene specificato un handle per un elenco di immagini. Se all'handle non è collegato un oggetto `CImageList`, viene creato e collegato un oggetto `CImageList` temporaneo.|
|[CImageList::FromHandlePermanent](#fromhandlepermanent)|Restituisce un puntatore a un `CImageList` dell'oggetto quando viene specificato un handle per un elenco di immagini. Se un `CImageList` oggetto non è connesso all'handle, viene restituito NULL.|
|[CImageList::GetBkColor](#getbkcolor)|Recupera il colore di sfondo corrente per un elenco di immagini.|
|[CImageList::GetDragImage](#getdragimage)|Ottiene l'elenco di immagini temporanee che viene usato per il trascinamento.|
|[CImageList::GetImageCount](#getimagecount)|Recupera il numero di immagini in un elenco di immagini.|
|[CImageList::GetImageInfo](#getimageinfo)|Recupera informazioni su un'immagine.|
|[CImageList::GetSafeHandle](#getsafehandle)|Recupera `m_hImageList`.|
|[CImageList::Read](#read)|Legge un elenco di immagini da un archivio.|
|[CImageList::Remove](#remove)|Rimuove un'immagine da un elenco di immagini.|
|[CImageList::Replace](#replace)|Sostituisce un'immagine in un elenco di immagini con una nuova immagine.|
|[CImageList::SetBkColor](#setbkcolor)|Imposta il colore di sfondo per un elenco di immagini.|
|[CImageList::SetDragCursorImage](#setdragcursorimage)|Crea una nuova immagine di trascinamento.|
|[CImageList::SetImageCount](#setimagecount)|Reimposta il numero di immagini in un elenco di immagini.|
|[CImageList::SetOverlayImage](#setoverlayimage)|Aggiunge l'indice in base zero di un'immagine all'elenco di immagini da utilizzare come maschere di sovrapposizione.|
|[CImageList::Write](#write)|Scrive un elenco di immagini in un archivio.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImageList::operator HIMAGELIST](#operator_himagelist)|Restituisce il HIMAGELIST collegati al `CImageList`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImageList::m_hImageList](#m_himagelist)|Handle che contiene l'elenco di immagini collegato a questo oggetto.|

## <a name="remarks"></a>Note

Un "elenco di immagini" è una raccolta di immagini stessa dimensione, ognuno dei quali può essere indicato dal relativo indice in base zero. Elenchi di immagini consentono di gestire in modo efficiente grandi set di icone o bitmap. Tutte le immagini in un elenco di immagini sono contenute in una singola e largo bitmap nel formato di dispositivo dello schermo. Un elenco di immagini può includere anche una bitmap monocromatica che contiene le maschere utilizzate per disegnare immagini in modo trasparente (stile icona). Microsoft Win32 application programming interface (API) fornisce funzioni di elenco immagini che consentono di disegnare immagini, creare e distruggere gli elenchi di immagini, aggiungere e rimuovere immagini, sostituire le immagini, immagini di tipo merge e trascinare le immagini.

Questo controllo (e pertanto il `CImageList` classe) è disponibile solo per i programmi in esecuzione in Windows 95 o 98 e Windows NT versione 3.51 e successive.

Per altre informazioni sull'uso `CImageList`, vedere [controlli](../../mfc/controls-mfc.md) e [utilizzo di CImageList](../../mfc/using-cimagelist.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CImageList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="add"></a>  CImageList::Add

Chiamare questa funzione per aggiungere uno o più immagini o un'icona per un elenco di immagini.

```
int Add(
    CBitmap* pbmImage,
    CBitmap* pbmMask);

int Add(
    CBitmap* pbmImage,
    COLORREF crMask);

int Add(HICON hIcon);
```

### <a name="parameters"></a>Parametri

*pbmImage*<br/>
Puntatore alla mappa di bit contenente le immagini. Il numero di immagini viene dedotto dalla larghezza della bitmap.

*pbmMask*<br/>
Puntatore alla mappa di bit contenente la maschera. Se nessun filtro viene usato con l'elenco di immagini, questo parametro viene ignorato.

*crMask*<br/>
Colore utilizzato per generare la maschera. Ciascun pixel di questo colore nella bitmap specificata viene impostato sul nero e i bit corrispondenti nella maschera è impostato su uno.

*hIcon*<br/>
Handle dell'icona che contiene il bitmap e la maschera per la nuova immagine.

### <a name="return-value"></a>Valore restituito

Indice in base zero della prima immagine nuovo caso di esito positivo; in caso contrario, - 1.

### <a name="remarks"></a>Note

Si è responsabile del rilascio di handle icona dopo aver con esso.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#1](../../mfc/reference/codesnippet/cpp/cimagelist-class_1.cpp)]

##  <a name="attach"></a>  CImageList::Attach

Chiamare questa funzione per associare un elenco di immagini a un `CImageList` oggetto.

```
BOOL Attach(HIMAGELIST hImageList);
```

### <a name="parameters"></a>Parametri

*hImageList*<br/>
Handle per un oggetto elenco immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha avuto esito positivo; l'allegato in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#2](../../mfc/reference/codesnippet/cpp/cimagelist-class_2.cpp)]

##  <a name="begindrag"></a>  CImageList::BeginDrag

Chiamare questa funzione per iniziare il trascinamento di un'immagine.

```
BOOL BeginDrag(
    int nImage,
    CPoint ptHotSpot);
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine da trascinare.

*ptHotSpot*<br/>
Coordinate della posizione iniziale di trascinamento (in genere, la posizione del cursore). Le coordinate sono relative all'angolo superiore sinistro dell'immagine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione crea un elenco di immagini temporaneo che viene usato per il trascinamento. L'immagine combina l'immagine specificata e la relativa maschera con il cursore corrente. In risposta a messaggi successivi WM_MOUSEMOVE, è possibile spostare l'immagine di trascinamento utilizzando il `DragMove` funzione membro. Per terminare l'operazione di trascinamento, è possibile usare il `EndDrag` funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#3](../../mfc/reference/codesnippet/cpp/cimagelist-class_3.cpp)]

##  <a name="cimagelist"></a>  CImageList::CImageList

Costruisce un oggetto `CImageList`.

```
CImageList();
```

##  <a name="copy"></a>  CImageList::Copy

Questa funzione membro implementa il comportamento della funzione Win32 [ImageList_Copy](/windows/desktop/api/commctrl/nf-commctrl-imagelist_copy), come descritto nel SDK di Windows.

```
BOOL Copy(
    int iDst,
    int iSrc,
    UINT uFlags = ILCF_MOVE);

BOOL Copy(
    int iDst,
    CImageList* pSrc,
    int iSrc,
    UINT uFlags = ILCF_MOVE);
```

### <a name="parameters"></a>Parametri

*iDst*<br/>
Indice a base zero dell'immagine da utilizzare come destinazione dell'operazione di copia.

*iSrc*<br/>
Indice a base zero dell'immagine da utilizzare come origine dell'operazione di copia.

*uFlags*<br/>
Il valore di flag di bit che specifica il tipo di operazione di copia da apportare. Questo parametro può essere uno dei valori seguenti:

|Value|Significato|
|-----------|-------------|
|ILCF_MOVE|L'immagine di origine viene copiata all'indice dell'immagine di destinazione. Questa operazione comporta più istanze di una determinata immagine. ILCF_MOVE è quello predefinito.|
|ILCF_SWAP|Le immagini di origine e destinazione scambiano le posizioni all'interno dell'elenco immagini.|

*pSrc*<br/>
Un puntatore a un `CImageList` oggetto che rappresenta la destinazione dell'operazione di copia.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#6](../../mfc/reference/codesnippet/cpp/cimagelist-class_4.cpp)]

##  <a name="create"></a>  CImageList::Create

Inizializza un elenco di immagini e lo collega a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.

```
BOOL Create(
    int cx,
    int cy,
    UINT nFlags,
    int nInitial,
    int nGrow);

BOOL Create(
    UINT nBitmapID,
    int cx,
    int nGrow,
    COLORREF crMask);

BOOL Create(
    LPCTSTR lpszBitmapID,
    int cx,
    int nGrow,
    COLORREF crMask);

BOOL Create(
    CImageList& imagelist1,
    int nImage1,
    CImageList& imagelist2,
    int nImage2,
    int dx,
    int dy);

BOOL Create(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*cx*<br/>
Dimensioni di ogni immagine, in pixel.

*cy*<br/>
Dimensioni di ogni immagine, in pixel.

*nFlags*<br/>
Specifica il tipo di elenco immagini da creare. Questo parametro può essere una combinazione dei valori seguenti, ma può includere solo uno del `ILC_COLOR` valori.

|Valore|Significato|
|-----------|-------------|
|ILC_COLOR|Se nessuno degli altri ILC_COLOR * flag è specificato, usare il comportamento predefinito. In genere, il valore predefinito è ILC_COLOR4; ma per i driver video precedente, il valore predefinito è ILC_COLORDDB.|
|ILC_COLOR4|Usare una sezione di bitmap indipendente dalla periferica (DIB) 4 bit (16 colori) come le bitmap per l'elenco di immagini.|
|ILC_COLOR8|Usare una sezione DIB 8 bit. I colori utilizzati per la tabella dei colori sono gli stessi colori come tavolozza dei mezzitoni.|
|ILC_COLOR16|Usare un a 16 bit (32 o 64 KB colore) sezione DIB.|
|ILC_COLOR24|Usare una sezione DIB 24 bit.|
|ILC_COLOR32|Usare una sezione di immagine DIB a 32 bit.|
|ILC_COLORDDB|Usare un'immagine bitmap dipendente dalla periferica.|
|ILC_MASK|Utilizza una maschera. L'elenco di immagini contiene due bitmap, uno dei quali è una bitmap monocromatica usata come maschera. Se questo valore non è incluso, l'elenco di immagini contiene solo una singola bitmap. Visualizzare [creazione di immagini da un elenco di immagini](../../mfc/drawing-images-from-an-image-list.md) per altre informazioni sulle immagini mascherate.|

*nInitial*<br/>
Numero di immagini contenente inizialmente l'elenco di immagini.

*nGrow*<br/>
Numero di immagini mediante il quale l'elenco di immagini può aumentare quando il sistema deve ridimensionare l'elenco per liberare spazio per nuove immagini. Questo parametro rappresenta il numero di nuove immagini che può contenere l'elenco di immagini ridimensionate.

*nBitmapID*<br/>
ID di risorsa della bitmap da associare l'elenco di immagini.

*crMask*<br/>
Colore utilizzato per generare una maschera. Ciascun pixel di questo colore nella bitmap specificata viene impostato sul nero e i bit corrispondenti nella maschera è impostato su uno.

*lpszBitmapID*<br/>
Stringa contenente l'ID risorsa delle immagini.

*imagelist1*<br/>
Riferimento a un oggetto `CImageList`.

*nImage1*<br/>
Indice della prima immagine esistente.

*imagelist2*<br/>
Riferimento a un oggetto `CImageList`.

*nImage2*<br/>
Indice della seconda immagine esistente.

*dx*<br/>
Offset dell'asse x dell'immagine di secondo in relazione alla prima immagine, in pixel.

*dy*<br/>
Offset dell'asse y dell'immagine di secondo in relazione alla prima immagine, in pixel.

*pImageList*<br/>
Puntatore a un oggetto `CImageList` .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce un `CImageList` in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che crea l'elenco di immagini e lo collega al `CImageList` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#7](../../mfc/reference/codesnippet/cpp/cimagelist-class_5.cpp)]

##  <a name="deleteimagelist"></a>  CImageList::DeleteImageList

Chiamare questa funzione per eliminare un elenco di immagini.

```
BOOL DeleteImageList();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#8](../../mfc/reference/codesnippet/cpp/cimagelist-class_6.cpp)]

##  <a name="deletetempmap"></a>  CImageList::DeleteTempMap

Chiamato automaticamente dal `CWinApp` gestore, tempo di inattività `DeleteTempMap` Elimina temporanei `CImageList` degli oggetti creati da [FromHandle](#fromhandle), ma non elimina definitivamente tutti gli handle ( `hImageList`) temporaneamente associati con la `ImageList` oggetti.

```
static void PASCAL DeleteTempMap();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#9](../../mfc/reference/codesnippet/cpp/cimagelist-class_7.cpp)]

##  <a name="detach"></a>  CImageList::Detach

Chiamare questa funzione per scollegare un oggetto elenco immagini da un `CImageList` oggetto.

```
HIMAGELIST Detach();
```

### <a name="return-value"></a>Valore restituito

Handle per un oggetto elenco immagini.

### <a name="remarks"></a>Note

Questa funzione restituisce un handle all'oggetto elenco immagini.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CImageList::Attach](#attach).

##  <a name="dragenter"></a>  CImageList::DragEnter

Durante un'operazione di trascinamento, blocca gli aggiornamenti alla finestra determinata dal *pWndLock* e visualizza l'immagine di trascinamento in corrispondenza della posizione specificata da *puntare*.

```
static BOOL PASCAL DragEnter(
    CWnd* pWndLock,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWndLock*<br/>
Puntatore alla finestra proprietaria dell'immagine di trascinamento.

*point*<br/>
Posizione in corrispondenza della quale visualizzare l'immagine di trascinamento. Coordinate sono relative all'angolo superiore sinistro della finestra (area non client).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Le coordinate sono relative angolo superiore sinistro della finestra del, pertanto è necessario tenere conto della larghezza degli elementi della finestra, ad esempio il bordo, sulla barra del titolo e la barra dei menu, quando si specificano le coordinate.

Se *pWndLock* è NULL, questa funzione consente di disegnare l'immagine nel contesto di visualizzazione associato alla finestra desktop e coordinate sono relative all'angolo superiore sinistro della schermata.

Questa funzione Blocca tutti gli aggiornamenti per la finestra specificata durante l'operazione di trascinamento. Se è necessario eseguire operazioni di disegno durante un'operazione di trascinamento, ad esempio l'evidenziazione della destinazione di un'operazione di trascinamento e rilascio, è possibile nascondere temporaneamente l'immagine trascinato tramite il [CImageList::DragLeave](#dragleave) (funzione).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CImageList::BeginDrag](#begindrag).

##  <a name="dragleave"></a>  CImageList::DragLeave

Sblocca la finestra specificata da *pWndLock* e nasconde l'immagine di trascinamento, consentendo la finestra da aggiornare.

```
static BOOL PASCAL DragLeave(CWnd* pWndLock);
```

### <a name="parameters"></a>Parametri

*pWndLock*<br/>
Puntatore alla finestra proprietaria dell'immagine di trascinamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CImageList::EndDrag](#enddrag).

##  <a name="dragmove"></a>  CImageList::DragMove

Chiamare questa funzione per spostare l'immagine che viene trascinata durante un'operazione di trascinamento e rilascio.

```
static BOOL PASCAL DragMove(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Nuova posizione del trascinamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata in risposta a un messaggio di WM_MOUSEMOVE. Per iniziare un'operazione di trascinamento, usare il `BeginDrag` funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#4](../../mfc/reference/codesnippet/cpp/cimagelist-class_8.cpp)]

##  <a name="dragshownolock"></a>  CImageList::DragShowNolock

Mostra o nasconde l'immagine di trascinamento durante un'operazione di trascinamento, senza bloccare la finestra.

```
static BOOL PASCAL DragShowNolock(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
Specifica se l'immagine di trascinamento è da visualizzare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il [CImageList::DragEnter](#dragenter) funzione Blocca tutti gli aggiornamenti per la finestra durante un'operazione di trascinamento. Questa funzione, tuttavia, non blocca le finestra.

##  <a name="draw"></a>  CImageList:: Draw

Chiamare questa funzione per disegnare l'immagine che viene trascinata durante un'operazione di trascinamento e rilascio.

```
BOOL Draw(
    CDC* pDC,
    int nImage,
    POINT pt,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo di destinazione.

*nImage*<br/>
Indice in base zero dell'immagine da disegnare.

*pt*<br/>
Posizione nella quale disegnare all'interno del contesto di dispositivo specificato.

*nStyle*<br/>
Flag che specifica lo stile di disegno. Può trattarsi di uno o più dei valori seguenti:

|Value|Significato|
|-----------|-------------|
|ILD_BLEND25, ILD_FOCUS|Disegna l'immagine, la fusione del 25% con il colore di sistema. Questo valore non ha alcun effetto se l'elenco di immagini non contiene una maschera.|
|ILD_BLEND50, ILD_SELECTED, ILD_BLEND|Disegna l'immagine, la fusione del 50% con il colore di sistema. Questo valore non ha alcun effetto se l'elenco di immagini non contiene una maschera.|
|ILD_MASK|Disegna la maschera.|
|ILD_NORMAL|Disegna l'immagine utilizzando il colore di sfondo per l'elenco di immagini. Se il colore di sfondo è il valore CLR_NONE, verrà disegnata l'immagine in modo trasparente, mediante la maschera.|
|ILD_TRANSPARENT|Disegna l'immagine in modo trasparente mediante la maschera, indipendentemente dal colore di sfondo.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CImageList:: SetOverlayImage](#setoverlayimage).

##  <a name="drawex"></a>  CImageList::DrawEx

Disegna un elemento di elenco di immagini nel contesto di dispositivo specificato.

```
BOOL DrawEx(
    CDC* pDC,
    int nImage,
    POINT pt,
    SIZE sz,
    COLORREF clrBk,
    COLORREF clrFg,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo di destinazione.

*nImage*<br/>
Indice in base zero dell'immagine da disegnare.

*pt*<br/>
Posizione nella quale disegnare all'interno del contesto di dispositivo specificato.

*sz*<br/>
Dimensione della porzione dell'immagine da disegnare rispetto all'angolo superiore sinistro dell'immagine. Visualizzare *dx* e *dy* nelle [ImageList_DrawEx](/windows/desktop/api/commctrl/nf-commctrl-imagelist_drawex) nel SDK di Windows.

*clrBk*<br/>
Colore di sfondo dell'immagine. Visualizzare *rgbBk* nelle [ImageList_DrawEx](/windows/desktop/api/commctrl/nf-commctrl-imagelist_drawex) nel SDK di Windows.

*clrFg*<br/>
Colore di primo piano dell'immagine. Visualizzare *rgbFg* nelle [ImageList_DrawEx](/windows/desktop/api/commctrl/nf-commctrl-imagelist_drawex) nel SDK di Windows.

*nStyle*<br/>
Flag che specifica lo stile di disegno. Visualizzare *fStyle* nelle [ImageList_DrawEx](/windows/desktop/api/commctrl/nf-commctrl-imagelist_drawex) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La funzione utilizza lo stile di disegno specificato e combina l'immagine con il colore specificati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#10](../../mfc/reference/codesnippet/cpp/cimagelist-class_9.cpp)]

##  <a name="drawindirect"></a>  CImageList::DrawIndirect

Chiamare questa funzione membro per disegnare un'immagine da un elenco di immagini.

```
BOOL DrawIndirect(IMAGELISTDRAWPARAMS* pimldp);

BOOL DrawIndirect(
    CDC* pDC,
    int nImage,
    POINT pt,
    SIZE sz,
    POINT ptOrigin,
    UINT fStyle = ILD_NORMAL,
    DWORD dwRop = SRCCOPY,
    COLORREF rgbBack = CLR_DEFAULT,
    COLORREF rgbFore = CLR_DEFAULT,
    DWORD fState = ILS_NORMAL,
    DWORD Frame = 0,
    COLORREF crEffect = CLR_DEFAULT);
```

### <a name="parameters"></a>Parametri

*pimldp*<br/>
Un puntatore a un [IMAGELISTDRAWPARAMS](/windows/desktop/api/commctrl/ns-commctrl-_imagelistdrawparams) struttura che contiene informazioni sull'operazione di disegno.

*pDC*<br/>
Puntatore al contesto di dispositivo di destinazione. È necessario eliminare questo [CDC](../../mfc/reference/cdc-class.md) dell'oggetto al termine con esso.

*nImage*<br/>
Indice a base zero dell'immagine da disegnare.

*pt*<br/>
Oggetto [punto](/previous-versions/dd162805\(v=vs.85\)) struttura che contiene le coordinate x e y in cui verrà disegnata l'immagine.

*sz*<br/>
Oggetto [dimensioni](/windows/desktop/api/windef/ns-windef-tagsize) struttura che indica la dimensione dell'immagine da disegnare.

*ptOrigin*<br/>
Oggetto [punto](/previous-versions/dd162805\(v=vs.85\)) struttura che contiene le coordinate x e y che specifica l'angolo superiore sinistro dell'operazione di disegno per quanto riguarda l'immagine stessa. Non vengono disegnati i pixel dell'immagine a sinistra della coordinata x e versioni successive la coordinata y.

*fStyle*<br/>
Flag che specifica lo stile di disegno e, facoltativamente, l'immagine sovrapposta. Vedere la sezione Osservazioni per informazioni sull'immagine di sovrapposizione. L'implementazione predefinita MFC, ILD_NORMAL, disegna l'immagine utilizzando il colore di sfondo per l'elenco di immagini. Se il colore di sfondo è il valore CLR_NONE, verrà disegnata l'immagine in modo trasparente con una maschera.

Altri possibili stili sono descritte sotto il *fStyle* membro del [IMAGELISTDRAWPARAMS](/windows/desktop/api/commctrl/ns-commctrl-_imagelistdrawparams) struttura.

*dwRop*<br/>
Valore che specifica un codice di operazione raster. Questi codici di definiscono come vengono combinate dati relativi al colore per il rettangolo di origine con dati relativi al colore per il rettangolo di destinazione ottenere il colore finale. Implementazione predefinita di MFC, SRCCOPY, copia il rettangolo di origine direttamente il rettangolo di destinazione. Questo parametro viene ignorato se la *fStyle* parametro non include il flag ILD_ROP.

Altri valori possibili sono illustrati sotto il *dwRop* membro del [IMAGELISTDRAWPARAMS](/windows/desktop/api/commctrl/ns-commctrl-_imagelistdrawparams) struttura.

*rgbBack*<br/>
Immagine colore di sfondo, per impostazione predefinita CLR_DEFAULT. Questo parametro può essere un valore RGB definito dall'applicazione o uno dei valori seguenti:

|Value|Significato|
|-----------|-------------|
|CLR_DEFAULT|Colore di sfondo predefinito. L'immagine viene disegnata utilizzando il colore di sfondo di elenco immagini.|
|CLR_NONE|Nessun colore di sfondo. Viene disegnata l'immagine in modo trasparente.|

*rgbFore*<br/>
Colore di primo piano immagine, per impostazione predefinita CLR_DEFAULT. Questo parametro può essere un valore RGB definito dall'applicazione o uno dei valori seguenti:

|Valore|Significato|
|-----------|-------------|
|CLR_DEFAULT|Colore di primo piano predefinito. L'immagine viene disegnata utilizzando il colore di sistema come il colore primo piano.|
|CLR_NONE|Nessun colore di blend. L'immagine viene sfumato con il colore del contesto di dispositivo di destinazione.|

Questo parametro viene utilizzato solo se *fStyle* include il flag ILD_BLEND25 o ILD_BLEND50.

*fState*<br/>
Flag che specifica lo stato di disegno. Questo membro può contenere uno o più flag di stato di elenco immagini.

*Frame*<br/>
Influisce sul comportamento di effetti saturate e fusione alfa.

Se usato con ILS_SATURATE, questo membro contiene il valore che viene aggiunto a ogni componente del colore dei tre RGB per ogni pixel selezionando l'icona.

Se usato con ILS_APLHA, questo membro contiene il valore per il canale alfa. Questo valore può essere compreso tra 0 e 255, 0 è completamente trasparente, e 255 che è completamente opaco.

*crEffect*<br/>
Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore usato per gli effetti di ombreggiatura e alone.

### <a name="return-value"></a>Valore restituito

TRUE se l'immagine viene disegnata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usare la prima versione, se si vuole compilare manualmente la struttura di Win32. Utilizzare la seconda versione, se si desidera sfruttare i vantaggi di uno o più degli argomenti predefiniti di MFC o evitare la gestione della struttura.

Un'immagine sovrapposta è un'immagine che viene disegnata sopra l'immagine primaria, specificato in questa funzione membro per il *immagine* parametro. Disegnare una maschera di sovrimpressione utilizzando il [disegnare](#draw) funzione membro con l'indice in base uno della maschera di sovrapposizione specificata utilizzando il [INDEXTOOVERLAYMASK](/windows/desktop/api/commctrl/nf-commctrl-indextooverlaymask) macro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#11](../../mfc/reference/codesnippet/cpp/cimagelist-class_10.cpp)]

##  <a name="enddrag"></a>  CImageList::EndDrag

Chiamare questa funzione per terminare un'operazione di trascinamento.

```
static void PASCAL EndDrag();
```

### <a name="remarks"></a>Note

Per iniziare un'operazione di trascinamento, usare il `BeginDrag` funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#5](../../mfc/reference/codesnippet/cpp/cimagelist-class_11.cpp)]

##  <a name="extracticon"></a>  CImageList::ExtractIcon

Chiamare questa funzione per creare un'icona in base a un'immagine e la relativa maschera correlato in un elenco di immagini.

```
HICON ExtractIcon(int nImage);
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine.

### <a name="return-value"></a>Valore restituito

Handle dell'icona se ha esito positivo. in caso contrario NULL.

### <a name="remarks"></a>Note

Questo metodo si basa sul comportamento dei [ImageList_ExtractIcon](/windows/desktop/api/commctrl/nf-commctrl-imagelist_extracticon) macro per creare l'icona. Vedere le [ImageList_ExtractIcon](/windows/desktop/api/commctrl/nf-commctrl-imagelist_extracticon) macro per altre informazioni sulla creazione di icone e pulizia.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#12](../../mfc/reference/codesnippet/cpp/cimagelist-class_12.cpp)]

##  <a name="fromhandle"></a>  CImageList::FromHandle

Restituisce un puntatore a un `CImageList` dell'oggetto quando viene specificato un handle per un elenco di immagini.

```
static CImageList* PASCAL FromHandle(HIMAGELIST hImageList);
```

### <a name="parameters"></a>Parametri

*hImageList*<br/>
Specifica l'elenco di immagini.

### <a name="return-value"></a>Valore restituito

Un puntatore a un `CImageList` oggetto se riesce; in caso contrario, NULL.

### <a name="remarks"></a>Note

Se un `CImageList` non è ancora connesso per l'handle, una variabile temporanea `CImageList` oggetto viene creato e collegato. Questo temporaneo `CImageList` oggetto è valido solo fino a quando non la volta successiva che l'applicazione ha il tempo di inattività nel relativo ciclo di eventi, momento in cui vengono eliminati tutti gli oggetti temporanei.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#13](../../mfc/reference/codesnippet/cpp/cimagelist-class_13.cpp)]

##  <a name="fromhandlepermanent"></a>  CImageList::FromHandlePermanent

Restituisce un puntatore a un `CImageList` dell'oggetto quando viene specificato un handle per un elenco di immagini.

```
static CImageList* PASCAL FromHandlePermanent(HIMAGELIST hImageList);
```

### <a name="parameters"></a>Parametri

*hImageList*<br/>
Specifica l'elenco di immagini.

### <a name="return-value"></a>Valore restituito

Un puntatore a un `CImageList` oggetto se riesce; in caso contrario, NULL.

### <a name="remarks"></a>Note

Se un `CImageList` oggetto non è connesso all'handle, viene restituito NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#14](../../mfc/reference/codesnippet/cpp/cimagelist-class_14.cpp)]

##  <a name="getbkcolor"></a>  CImageList::GetBkColor

Chiamare questa funzione per recuperare il colore di sfondo corrente per un elenco di immagini.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Il valore del colore RGB di `CImageList` colore di sfondo dell'oggetto.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CImageList::SetBkColor](#setbkcolor).

##  <a name="getdragimage"></a>  CImageList::GetDragImage

Ottiene l'elenco di immagini temporanee che viene usato per il trascinamento.

```
static CImageList* PASCAL GetDragImage(
    LPPOINT lpPoint,
    LPPOINT lpPointHotSpot);
```

### <a name="parameters"></a>Parametri

*lpPoint*<br/>
Indirizzo di un [punto](/previous-versions/dd162805\(v=vs.85\)) struttura che riceve l'oggetto corrente trascinare posizione.

*lpPointHotSpot*<br/>
Indirizzo di un `POINT` struttura che riceve l'offset dell'immagine di trascinamento rispetto alla posizione di trascinamento.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un puntatore all'immagine temporanea elenco che viene usato per il trascinamento; in caso contrario, NULL.

##  <a name="getimagecount"></a>  CImageList::GetImageCount

Chiamare questa funzione per recuperare il numero di immagini in un elenco di immagini.

```
int GetImageCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di immagini.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CImageList::ExtractIcon](#extracticon).

##  <a name="getimageinfo"></a>  CImageList::GetImageInfo

Chiamare questa funzione per recuperare informazioni su un'immagine.

```
BOOL GetImageInfo(
    int nImage,
    IMAGEINFO* pImageInfo) const;
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine.

*pImageInfo*<br/>
Puntatore a un [IMAGEINFO](/windows/desktop/api/commctrl/ns-commctrl-_imageinfo) struttura che riceve informazioni sull'immagine. Le informazioni contenute in questa struttura sono utilizzabile per modificare direttamente le bitmap per l'immagine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il `IMAGEINFO` struttura contiene informazioni su un'immagine in un elenco di immagini.

##  <a name="getsafehandle"></a>  CImageList::GetSafeHandle

Chiamare questa funzione per recuperare il `m_hImageList` (membro dati).

```
HIMAGELIST GetSafeHandle() const;
```

### <a name="return-value"></a>Valore restituito

Un handle per l'elenco di immagini collegato; in caso contrario, NULL se nessun oggetto associato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#15](../../mfc/reference/codesnippet/cpp/cimagelist-class_15.cpp)]

##  <a name="m_himagelist"></a>  CImageList::m_hImageList

Handle dell'elenco immagini collegato a questo oggetto.

`HIMAGELIST m_hImageList;`

### <a name="remarks"></a>Note

Il `m_hImageList` membro dati è una variabile pubblica di tipo HIMAGELIST.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#23](../../mfc/reference/codesnippet/cpp/cimagelist-class_16.cpp)]

##  <a name="operator_himagelist"></a>  CImageList::operator HIMAGELIST

Utilizzare questo operatore per ottenere l'handle associato del `CImageList` oggetto.

```
operator HIMAGELIST() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un handle per l'elenco di immagini rappresentato dal `CImageList` oggetto; in caso contrario, NULL.

### <a name="remarks"></a>Note

Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HIMAGELIST.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#16](../../mfc/reference/codesnippet/cpp/cimagelist-class_17.cpp)]

##  <a name="read"></a>  CImageList::Read

Chiamare questa funzione per leggere un elenco di immagini da un archivio.

```
BOOL Read(CArchive* pArchive);
```

### <a name="parameters"></a>Parametri

*pArchive*<br/>
Un puntatore a un `CArchive` oggetto da cui è possibile leggere l'elenco di immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#18](../../mfc/reference/codesnippet/cpp/cimagelist-class_18.cpp)]

##  <a name="remove"></a>  CImageList::Remove

Chiamare questa funzione per rimuovere un'immagine da un oggetto elenco immagini.

```
BOOL Remove(int nImage);
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Tutti gli elementi segue *immagine* ora spostare verso il basso di una posizione. Ad esempio, se un elenco di immagini contiene due elementi, l'eliminazione il primo elemento causerà l'elemento rimanente in questo modo la prima posizione. *Immagine*= 0 per l'elemento nella prima posizione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#19](../../mfc/reference/codesnippet/cpp/cimagelist-class_19.cpp)]

##  <a name="replace"></a>  CImageList::Replace

Chiamare questa funzione per sostituire un'immagine in un elenco di immagini con una nuova immagine.

```
BOOL Replace(
    int nImage,
    CBitmap* pbmImage,
    CBitmap* pbmMask);

int Replace(
    int nImage,
    HICON hIcon);
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine da sostituire.

*pbmImage*<br/>
Puntatore alla mappa di bit contenente l'immagine.

*pbmMask*<br/>
Puntatore alla mappa di bit contenente la maschera. Se nessun filtro viene usato con l'elenco di immagini, questo parametro viene ignorato.

*hIcon*<br/>
Handle per l'icona che contiene il bitmap e la maschera per la nuova immagine.

### <a name="return-value"></a>Valore restituito

La versione restituire BOOL restituisce diverso da zero se ha esito positivo. in caso contrario 0.

La versione restituzione **int** restituisce l'indice in base zero dell'immagine se ha esito positivo; in caso contrario - 1.

### <a name="remarks"></a>Note

Chiamare questa funzione membro dopo la chiamata [SetImageCount](#setimagecount) per assegnare il nuovo, immagini valide per il segnaposto immagine i numeri di indice.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CImageList::SetImageCount](#setimagecount).

##  <a name="setbkcolor"></a>  CImageList::SetBkColor

Chiamare questa funzione per impostare il colore di sfondo per un elenco di immagini.

```
COLORREF SetBkColor(COLORREF cr);
```

### <a name="parameters"></a>Parametri

*cr*<br/>
Colore di sfondo da impostare. Può essere CLR_NONE. In tal caso, le immagini vengono disegnate in modo trasparente, mediante la maschera.

### <a name="return-value"></a>Valore restituito

Il colore di sfondo precedente se ha esito positivo. in caso contrario CLR_NONE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#20](../../mfc/reference/codesnippet/cpp/cimagelist-class_20.cpp)]

##  <a name="setdragcursorimage"></a>  CImageList::SetDragCursorImage

Crea una nuova immagine di trascinamento combinando l'immagine specificata (in genere un'immagine del cursore del mouse) con l'immagine di trascinamento corrente.

```
BOOL SetDragCursorImage(
    int nDrag,
    CPoint ptHotSpot);
```

### <a name="parameters"></a>Parametri

*nDrag*<br/>
Indice della nuova immagine da combinare con l'immagine di trascinamento.

*ptHotSpot*<br/>
Posizione dell'area sensibile all'interno della nuova immagine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Poiché le funzioni di trascinamento usano la nuova immagine durante un'operazione di trascinamento, è consigliabile utilizzare il Windows [ShowCursor](/windows/desktop/api/winuser/nf-winuser-showcursor) funzione per nascondere il cursore del mouse effettivo dopo la chiamata `CImageList::SetDragCursorImage`. In caso contrario, il sistema potrebbe risultare due puntatori del mouse per la durata dell'operazione di trascinamento.

##  <a name="setimagecount"></a>  CImageList::SetImageCount

Chiamare questa funzione membro per reimpostare il numero di immagini in un `CImageList` oggetto.

```
BOOL SetImageCount(UINT uNewCount);
```

### <a name="parameters"></a>Parametri

*uNewCount*<br/>
Il valore che specifica il nuovo numero totale di immagini nell'elenco di immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Se si chiama questa funzione membro per aumentare il numero di immagini nell'elenco di immagini, quindi chiamare [sostituire](#replace) per ogni ulteriore immagine assegnare nuovi indici alle immagini valide. Se non si assegna gli indici per le immagini valide, le operazioni di disegno che creano le immagini nuove potrebbero essere imprevedibili.

Se si diminuisce la dimensione di un elenco di immagini mediante questa funzione, vengono liberate le immagini troncate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#21](../../mfc/reference/codesnippet/cpp/cimagelist-class_21.cpp)]

##  <a name="setoverlayimage"></a>  CImageList::SetOverlayImage

Chiamare questa funzione per aggiungere l'indice in base zero di un'immagine all'elenco di immagini da utilizzare come maschere di sovrapposizione.

```
BOOL SetOverlayImage(
    int nImage,
    int nOverlay);
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine da usare come maschera di sovrapposizione.

*nOverlay*<br/>
Indice in base uno della maschera di sovrapposizione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Fino a quattro indici possono essere aggiunti all'elenco.

Maschera di sovrimpressione è un'immagine raffigurata in modo trasparente in un'altra immagine. Disegnare una maschera di sovrimpressione su un'immagine mediante il [CImageList:: Draw](#draw) funzione membro con l'indice in base uno della maschera di sovrapposizione specificata utilizzando la macro INDEXTOOVERLAYMASK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#22](../../mfc/reference/codesnippet/cpp/cimagelist-class_22.cpp)]

##  <a name="write"></a>  CImageList::Write

Chiamare questa funzione per scrivere un oggetto elenco immagini in un archivio.

```
BOOL Write(CArchive* pArchive);
```

### <a name="parameters"></a>Parametri

*pArchive*<br/>
Un puntatore a un `CArchive` oggetto in cui deve essere archiviato l'elenco di immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#17](../../mfc/reference/codesnippet/cpp/cimagelist-class_23.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CListCtrl](../../mfc/reference/clistctrl-class.md)<br/>
[Classe CTabCtrl](../../mfc/reference/ctabctrl-class.md)
