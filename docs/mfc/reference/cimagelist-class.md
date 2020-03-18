---
title: Classe CImageList
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
ms.openlocfilehash: 1555209ce0f1c2caacbfb4b01107775db948d230
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420358"
---
# <a name="cimagelist-class"></a>Classe CImageList

Fornisce la funzionalità del controllo elenco immagini comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CImageList : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImageList:: CImageList](#cimagelist)|Costruisce un oggetto `CImageList`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImageList:: Add](#add)|Aggiunge un'immagine o immagini a un elenco di immagini.|
|[CImageList:: Connetti](#attach)|Connette un elenco di immagini a un oggetto `CImageList`.|
|[CImageList:: BeginDrag](#begindrag)|Inizia il trascinamento di un'immagine.|
|[CImageList:: Copy](#copy)|Copia un'immagine all'interno di un oggetto `CImageList`.|
|[CImageList:: create](#create)|Inizializza un elenco di immagini e lo collega a un oggetto `CImageList`.|
|[CImageList::D eleteImageList](#deleteimagelist)|Elimina un elenco di immagini.|
|[CImageList::D eleteTempMap](#deletetempmap)|Chiamato dal gestore del tempo di inattività [CWinApp](../../mfc/reference/cwinapp-class.md) per eliminare qualsiasi oggetto `CImageList` temporaneo creato da `FromHandle`.|
|[CImageList::D etach](#detach)|Scollega un oggetto elenco immagini da un oggetto `CImageList` e restituisce un handle a un elenco di immagini.|
|[CImageList::D ragEnter](#dragenter)|Blocca gli aggiornamenti durante un'operazione di trascinamento e visualizza l'immagine di trascinamento in una posizione specificata.|
|[CImageList::D ragLeave](#dragleave)|Sblocca la finestra e nasconde l'immagine di trascinamento in modo che la finestra possa essere aggiornata.|
|[CImageList::D ragMove](#dragmove)|Sposta l'immagine trascinata durante un'operazione di trascinamento della selezione.|
|[CImageList::D ragShowNolock](#dragshownolock)|Consente di visualizzare o nascondere l'immagine di trascinamento durante un'operazione di trascinamento senza bloccare la finestra.|
|[CImageList::D RAW](#draw)|Disegna l'immagine che viene trascinata durante un'operazione di trascinamento della selezione.|
|[CImageList::D rawEx](#drawex)|Disegna un elemento dell'elenco di immagini nel contesto di dispositivo specificato. La funzione usa lo stile di disegno specificato e combina l'immagine con il colore specificato.|
|[CImageList::D rawIndirect](#drawindirect)|Disegna un'immagine da un elenco immagini.|
|[CImageList:: EndDrag](#enddrag)|Termina un'operazione di trascinamento.|
|[CImageList:: ExtractIcon](#extracticon)|Crea un'icona basata su un'immagine e una maschera in un elenco di immagini.|
|[CImageList:: FromHandle](#fromhandle)|Restituisce un puntatore a un oggetto `CImageList` quando viene specificato un handle per un elenco di immagini. Se all'handle non è collegato un oggetto `CImageList`, viene creato e collegato un oggetto `CImageList` temporaneo.|
|[CImageList:: FromHandlePermanent](#fromhandlepermanent)|Restituisce un puntatore a un oggetto `CImageList` quando viene specificato un handle per un elenco di immagini. Se un oggetto `CImageList` non è associato all'handle, viene restituito NULL.|
|[CImageList:: GetBkColor](#getbkcolor)|Recupera il colore di sfondo corrente per un elenco di immagini.|
|[CImageList:: GetDragImage](#getdragimage)|Ottiene l'elenco di immagini temporanee utilizzato per il trascinamento.|
|[CImageList:: GetImageCount](#getimagecount)|Recupera il numero di immagini in un elenco di immagini.|
|[CImageList:: GetImageInfo](#getimageinfo)|Recupera le informazioni relative a un'immagine.|
|[CImageList:: GetSafeHandle](#getsafehandle)|Recupera `m_hImageList`.|
|[CImageList:: Read](#read)|Legge un elenco di immagini da un archivio.|
|[CImageList:: Remove](#remove)|Rimuove un'immagine da un elenco immagini.|
|[CImageList:: Replace](#replace)|Sostituisce un'immagine in un elenco di immagini con una nuova immagine.|
|[CImageList:: SetBkColor](#setbkcolor)|Imposta il colore di sfondo per un elenco di immagini.|
|[CImageList:: SetDragCursorImage](#setdragcursorimage)|Crea una nuova immagine di trascinamento.|
|[CImageList:: SetImageCount](#setimagecount)|Reimposta il numero di immagini in un elenco di immagini.|
|[CImageList:: SetOverlayImage](#setoverlayimage)|Aggiunge l'indice in base zero di un'immagine all'elenco di immagini da utilizzare come maschera di sovrapposizione.|
|[CImageList:: Write](#write)|Scrive un elenco di immagini in un archivio.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImageList:: operator HIMAGELIST](#operator_himagelist)|Restituisce l'oggetto HIMAGELIST associato al `CImageList`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImageList:: m_hImageList](#m_himagelist)|Handle contenente l'elenco di immagini associato a questo oggetto.|

## <a name="remarks"></a>Osservazioni

Un "elenco di immagini" è una raccolta di immagini di dimensioni uguali, a ciascuna delle quali è possibile fare riferimento tramite il relativo indice in base zero. Gli elenchi di immagini vengono utilizzati per gestire in modo efficiente grandi set di icone o bitmap. Tutte le immagini in un elenco di immagini sono contenute in un'unica bitmap a caratteri wide nel formato del dispositivo dello schermo. Un elenco di immagini può includere anche una bitmap monocromatica che contiene le maschere usate per creare le immagini in modo trasparente (stile icona). Il Application Programming Interface Microsoft Win32 (API) fornisce funzioni elenco immagini che consentono di creare immagini, creare ed eliminare in modo permanente elenchi di immagini, aggiungere e rimuovere immagini, sostituire immagini, unire immagini e trascinare immagini.

Questo controllo (e pertanto la classe `CImageList`) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3,51 e successive.

Per altre informazioni sull'uso di `CImageList`, vedere [controlli](../../mfc/controls-mfc.md) e [uso di CImageList](../../mfc/using-cimagelist.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CImageList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="add"></a>CImageList:: Add

Chiamare questa funzione per aggiungere una o più immagini o un'icona a un elenco di immagini.

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
Puntatore alla bitmap che contiene l'immagine o le immagini. Il numero di immagini viene dedotto dalla larghezza della bitmap.

*pbmMask*<br/>
Puntatore alla bitmap contenente la maschera. Se non viene usata alcuna maschera con l'elenco di immagini, questo parametro viene ignorato.

*crMask*<br/>
Colore utilizzato per generare la maschera. Ogni pixel di questo colore nella bitmap specificata viene modificato in nero e il bit corrispondente nella maschera è impostato su uno.

*hIcon*<br/>
Handle dell'icona che contiene la bitmap e la maschera per la nuova immagine.

### <a name="return-value"></a>Valore restituito

Indice in base zero della prima nuova immagine, se ha esito positivo; in caso contrario,-1.

### <a name="remarks"></a>Osservazioni

Al termine dell'operazione, l'utente è responsabile del rilascio dell'handle dell'icona.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#1](../../mfc/reference/codesnippet/cpp/cimagelist-class_1.cpp)]

##  <a name="attach"></a>CImageList:: Connetti

Chiamare questa funzione per alleghi un elenco di immagini a un oggetto `CImageList`.

```
BOOL Attach(HIMAGELIST hImageList);
```

### <a name="parameters"></a>Parametri

*hImageList*<br/>
Handle per un oggetto elenco immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'allegato ha avuto esito positivo; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#2](../../mfc/reference/codesnippet/cpp/cimagelist-class_2.cpp)]

##  <a name="begindrag"></a>CImageList:: BeginDrag

Chiamare questa funzione per avviare il trascinamento di un'immagine.

```
BOOL BeginDrag(
    int nImage,
    CPoint ptHotSpot);
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine da trascinare.

*ptHotSpot*<br/>
Coordinate della posizione iniziale del trascinamento, in genere la posizione del cursore. Le coordinate sono relative all'angolo superiore sinistro dell'immagine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione crea un elenco di immagini temporaneo usato per il trascinamento. L'immagine combina l'immagine specificata e la relativa maschera con il cursore corrente. In risposta ai messaggi di WM_MOUSEMOVE successivi, è possibile spostare l'immagine di trascinamento utilizzando la funzione membro `DragMove`. Per terminare l'operazione di trascinamento, è possibile usare la funzione membro `EndDrag`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#3](../../mfc/reference/codesnippet/cpp/cimagelist-class_3.cpp)]

##  <a name="cimagelist"></a>CImageList:: CImageList

Costruisce un oggetto `CImageList`.

```
CImageList();
```

##  <a name="copy"></a>CImageList:: Copy

Questa funzione membro implementa il comportamento della funzione Win32 [ImageList_Copy](/windows/win32/api/commctrl/nf-commctrl-imagelist_copy), come descritto nel Windows SDK.

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
Indice in base zero dell'immagine da utilizzare come destinazione dell'operazione di copia.

*iSrc*<br/>
Indice in base zero dell'immagine da utilizzare come origine dell'operazione di copia.

*uFlags*<br/>
Valore del flag di bit che specifica il tipo di operazione di copia da effettuare. Questo parametro può essere uno dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|ILCF_MOVE|L'immagine di origine viene copiata nell'indice dell'immagine di destinazione. Questa operazione comporta più istanze di una determinata immagine. Il valore predefinito è ILCF_MOVE.|
|ILCF_SWAP|Le immagini di origine e di destinazione scambiano le posizioni all'interno dell'elenco di immagini.|

*pSrc*<br/>
Puntatore a un oggetto `CImageList` che rappresenta la destinazione dell'operazione di copia.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#6](../../mfc/reference/codesnippet/cpp/cimagelist-class_4.cpp)]

##  <a name="create"></a>CImageList:: create

Inizializza un elenco di immagini e lo collega a un oggetto [CImageList](../../mfc/reference/cimagelist-class.md) .

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

*CY*<br/>
Dimensioni di ogni immagine, in pixel.

*nFlags*<br/>
Specifica il tipo di elenco di immagini da creare. Questo parametro può essere una combinazione dei valori seguenti, ma può includere solo uno dei valori `ILC_COLOR`.

|valore|Significato|
|-----------|-------------|
|ILC_COLOR|Utilizzare il comportamento predefinito se non viene specificato alcun flag di ILC_COLOR *. In genere, il valore predefinito è ILC_COLOR4; Tuttavia, per i driver di visualizzazione precedenti, il valore predefinito è ILC_COLORDDB.|
|ILC_COLOR4|Usare una sezione bitmap (DIB) a 4 bit (a 16 colori) come bitmap per l'elenco di immagini.|
|ILC_COLOR8|Usare una sezione DIB a 8 bit. I colori utilizzati per la tabella dei colori sono uguali a quelli della tavolozza dei mezzitoni.|
|ILC_COLOR16|Usare una sezione DIB a 16 bit (32/64K).|
|ILC_COLOR24|Usare una sezione DIB a 24 bit.|
|ILC_COLOR32|Usare una sezione DIB a 32 bit.|
|ILC_COLORDDB|Usare una bitmap dipendente dal dispositivo.|
|ILC_MASK|Usa una maschera. L'elenco di immagini contiene due bitmap, una delle quali è una bitmap monocromatica utilizzata come maschera. Se questo valore non è incluso, l'elenco di immagini contiene una sola bitmap. Per ulteriori informazioni sulle immagini mascherate, vedere Drawing images [from an image list](../../mfc/drawing-images-from-an-image-list.md) .|

*nInitial*<br/>
Numero di immagini contenute inizialmente nell'elenco immagini.

*nGrow*<br/>
Numero di immagini in base alle quali l'elenco di immagini può aumentare quando il sistema deve ridimensionare l'elenco per fare spazio alle nuove immagini. Questo parametro rappresenta il numero di nuove immagini che possono essere contenute nell'elenco immagini ridimensionato.

*nBitmapID*<br/>
ID di risorsa della bitmap da associare all'elenco di immagini.

*crMask*<br/>
Colore utilizzato per generare una maschera. Ogni pixel di questo colore nella bitmap specificata viene modificato in nero e il bit corrispondente nella maschera è impostato su uno.

*lpszBitmapID*<br/>
Stringa contenente gli ID risorsa delle immagini.

*ImageList1*<br/>
Riferimento a un oggetto `CImageList`.

*nImage1*<br/>
Indice della prima immagine esistente.

*imagelist2*<br/>
Riferimento a un oggetto `CImageList`.

*nImage2*<br/>
Indice della seconda immagine esistente.

*DX*<br/>
Offset dell'asse x della seconda immagine in relazione alla prima immagine, in pixel.

*DY*<br/>
Offset dell'asse y della seconda immagine in relazione alla prima immagine, in pixel.

*pImageList*<br/>
Puntatore a un oggetto `CImageList`.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Si costruisce un `CImageList` in due passaggi. Chiamare prima di tutto il costruttore, quindi chiamare `Create`, che crea l'elenco di immagini e lo collega all'oggetto `CImageList`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#7](../../mfc/reference/codesnippet/cpp/cimagelist-class_5.cpp)]

##  <a name="deleteimagelist"></a>CImageList::D eleteImageList

Chiamare questa funzione per eliminare un elenco di immagini.

```
BOOL DeleteImageList();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#8](../../mfc/reference/codesnippet/cpp/cimagelist-class_6.cpp)]

##  <a name="deletetempmap"></a>CImageList::D eleteTempMap

Chiamato automaticamente da `CWinApp` gestore del tempo di inattività, `DeleteTempMap` Elimina tutti gli oggetti `CImageList` temporanei creati da [FromHandle](#fromhandle), ma non elimina gli handle (`hImageList`) associati temporaneamente agli oggetti `ImageList`.

```
static void PASCAL DeleteTempMap();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#9](../../mfc/reference/codesnippet/cpp/cimagelist-class_7.cpp)]

##  <a name="detach"></a>CImageList::D etach

Chiamare questa funzione per scollegare un oggetto elenco immagini da un oggetto `CImageList`.

```
HIMAGELIST Detach();
```

### <a name="return-value"></a>Valore restituito

Handle per un oggetto elenco immagini.

### <a name="remarks"></a>Osservazioni

Questa funzione restituisce un handle per l'oggetto elenco immagini.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList:: Connetti](#attach).

##  <a name="dragenter"></a>CImageList::D ragEnter

Durante un'operazione di trascinamento, blocca gli aggiornamenti alla finestra specificata da *pWndLock* e visualizza l'immagine di trascinamento nella posizione specificata dal *punto*.

```
static BOOL PASCAL DragEnter(
    CWnd* pWndLock,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWndLock*<br/>
Puntatore alla finestra che possiede l'immagine di trascinamento.

*point*<br/>
Posizione in cui visualizzare l'immagine di trascinamento. Le coordinate sono relative all'angolo superiore sinistro della finestra (non all'area client).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Le coordinate sono relative all'angolo superiore sinistro della finestra, pertanto è necessario compensare le larghezze degli elementi della finestra, ad esempio il bordo, la barra del titolo e la barra dei menu, quando si specificano le coordinate.

Se *pWndLock* è null, questa funzione disegna l'immagine nel contesto di visualizzazione associato alla finestra desktop e le coordinate sono relative all'angolo superiore sinistro dello schermo.

Questa funzione blocca tutti gli altri aggiornamenti della finestra specificata durante l'operazione di trascinamento. Se è necessario eseguire qualsiasi disegno durante un'operazione di trascinamento, ad esempio evidenziando la destinazione di un'operazione di trascinamento della selezione, è possibile nascondere temporaneamente l'immagine trascinata usando la funzione [CImageList::D ragleave](#dragleave) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList:: BeginDrag](#begindrag).

##  <a name="dragleave"></a>CImageList::D ragLeave

Sblocca la finestra specificata da *pWndLock* e nasconde l'immagine di trascinamento, consentendo l'aggiornamento della finestra.

```
static BOOL PASCAL DragLeave(CWnd* pWndLock);
```

### <a name="parameters"></a>Parametri

*pWndLock*<br/>
Puntatore alla finestra che possiede l'immagine di trascinamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList:: EndDrag](#enddrag).

##  <a name="dragmove"></a>CImageList::D ragMove

Chiamare questa funzione per spostare l'immagine trascinata durante un'operazione di trascinamento della selezione.

```
static BOOL PASCAL DragMove(CPoint pt);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Nuova posizione di trascinamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata in risposta a un messaggio di WM_MOUSEMOVE. Per iniziare un'operazione di trascinamento, usare la funzione membro `BeginDrag`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#4](../../mfc/reference/codesnippet/cpp/cimagelist-class_8.cpp)]

##  <a name="dragshownolock"></a>CImageList::D ragShowNolock

Consente di visualizzare o nascondere l'immagine di trascinamento durante un'operazione di trascinamento senza bloccare la finestra.

```
static BOOL PASCAL DragShowNolock(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
Specifica se l'immagine di trascinamento deve essere visualizzata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La funzione [CImageList::D ragenter](#dragenter) blocca tutti gli aggiornamenti alla finestra durante un'operazione di trascinamento. Questa funzione, tuttavia, non blocca la finestra.

##  <a name="draw"></a>CImageList::D RAW

Chiamare questa funzione per creare l'immagine che viene trascinata durante un'operazione di trascinamento della selezione.

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
Indice in base zero dell'immagine da creare.

*pt*<br/>
Posizione in cui eseguire il progetto all'interno del contesto di dispositivo specificato.

*nStyle*<br/>
Flag che specifica lo stile di disegno. Può essere uno o più di questi valori:

|valore|Significato|
|-----------|-------------|
|ILD_BLEND25, ILD_FOCUS|Disegna l'immagine, combinando il 25% con il colore di evidenziazione del sistema. Questo valore non ha alcun effetto se l'elenco di immagini non contiene una maschera.|
|ILD_BLEND50, ILD_SELECTED, ILD_BLEND|Disegna l'immagine, fondendo il 50% con il colore di evidenziazione del sistema. Questo valore non ha alcun effetto se l'elenco di immagini non contiene una maschera.|
|ILD_MASK|Disegna la maschera.|
|ILD_NORMAL|Disegna l'immagine utilizzando il colore di sfondo per l'elenco di immagini. Se il colore di sfondo è il valore CLR_NONE, l'immagine viene disegnata in modo trasparente utilizzando la maschera.|
|ILD_TRANSPARENT|Disegna l'immagine in modo trasparente utilizzando la maschera, indipendentemente dal colore di sfondo.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList:: SetOverlayImage](#setoverlayimage).

##  <a name="drawex"></a>CImageList::D rawEx

Disegna un elemento dell'elenco di immagini nel contesto di dispositivo specificato.

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
Indice in base zero dell'immagine da creare.

*pt*<br/>
Posizione in cui eseguire il progetto all'interno del contesto di dispositivo specificato.

*SZ*<br/>
Dimensione della parte dell'immagine da creare rispetto all'angolo superiore sinistro dell'immagine. Vedere *dx* e *dy* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) nel Windows SDK.

*clrBk*<br/>
Colore di sfondo dell'immagine. Vedere *rgbBk* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) nel Windows SDK.

*clrFg*<br/>
Colore di primo piano dell'immagine. Vedere *rgbFg* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) nel Windows SDK.

*nStyle*<br/>
Flag che specifica lo stile di disegno. Vedere *fStyle* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La funzione usa lo stile di disegno specificato e combina l'immagine con il colore specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#10](../../mfc/reference/codesnippet/cpp/cimagelist-class_9.cpp)]

##  <a name="drawindirect"></a>CImageList::D rawIndirect

Chiamare questa funzione membro per creare un'immagine da un elenco immagini.

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
Puntatore a una struttura [IMAGELISTDRAWPARAMS](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams) che contiene informazioni sull'operazione di estrazione.

*pDC*<br/>
Puntatore al contesto di dispositivo di destinazione. Al termine dell'operazione, è necessario eliminare questo oggetto [CDC](../../mfc/reference/cdc-class.md) .

*nImage*<br/>
Indice in base zero dell'immagine da disegnare.

*pt*<br/>
Struttura di [punti](/previous-versions/dd162805\(v=vs.85\)) che contiene le coordinate x e y in cui verrà disegnata l'immagine.

*SZ*<br/>
Struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) che indica le dimensioni dell'immagine da disegnare.

*ptOrigin*<br/>
Struttura di [punti](/previous-versions/dd162805\(v=vs.85\)) che contiene le coordinate x e y che specificano l'angolo superiore sinistro dell'operazione di disegno rispetto all'immagine stessa. I pixel dell'immagine che si trovano a sinistra della coordinata x e al di sopra della coordinata y non vengono disegnati.

*fStyle*<br/>
Flag che specifica lo stile di disegno e, facoltativamente, l'immagine sovrapposta. Per informazioni sull'immagine sovrapposta, vedere la sezione Osservazioni. L'implementazione predefinita di MFC, ILD_NORMAL, disegna l'immagine utilizzando il colore di sfondo per l'elenco di immagini. Se il colore di sfondo è il valore CLR_NONE, l'immagine viene disegnata in modo trasparente utilizzando una maschera.

Gli altri stili possibili sono descritti sotto il membro *fStyle* della struttura [IMAGELISTDRAWPARAMS](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams) .

*dwRop*<br/>
Valore che specifica un codice di operazione raster. Questi codici definiscono il modo in cui i dati del colore per il rettangolo di origine verranno combinati con i dati del colore per il rettangolo di destinazione per ottenere il colore finale. L'implementazione predefinita di MFC, SRCCOPY, copia il rettangolo di origine direttamente nel rettangolo di destinazione. Questo parametro viene ignorato se il parametro *fStyle* non include il flag ILD_ROP.

Gli altri valori possibili sono descritti sotto il membro *dwRop* della struttura [IMAGELISTDRAWPARAMS](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams) .

*rgbBack*<br/>
Il colore di sfondo dell'immagine, per impostazione predefinita CLR_DEFAULT. Questo parametro può essere un valore RGB definito dall'applicazione o uno dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|CLR_DEFAULT|Colore di sfondo predefinito. L'immagine viene disegnata utilizzando il colore di sfondo dell'elenco immagini.|
|CLR_NONE|Nessun colore di sfondo. L'immagine viene disegnata in modo trasparente.|

*rgbFore*<br/>
Colore di primo piano dell'immagine, per impostazione predefinita CLR_DEFAULT. Questo parametro può essere un valore RGB definito dall'applicazione o uno dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|CLR_DEFAULT|Colore di primo piano predefinito. L'immagine viene disegnata utilizzando il colore di evidenziazione del sistema come colore di primo piano.|
|CLR_NONE|Nessun colore di Blend. L'immagine viene mescolata con il colore del contesto di dispositivo di destinazione.|

Questo parametro viene usato solo se *fStyle* include il flag ILD_BLEND25 o ILD_BLEND50.

*fState*<br/>
Flag che specifica lo stato del disegno. Questo membro può contenere uno o più flag di stato dell'elenco di immagini.

*Frame*<br/>
Influisce sul comportamento degli effetti di saturazione e di fusione alfa.

Se usato con ILS_SATURATE, questo membro include il valore che viene aggiunto a ogni componente colore della tripletta RGB per ogni pixel nell'icona.

Se utilizzato con ILS_APLHA, questo membro include il valore per il canale alfa. Questo valore può essere compreso tra 0 e 255, mentre 0 è completamente trasparente e 255 è completamente opaco.

*crEffect*<br/>
Valore [COLORREF](/windows/win32/gdi/colorref) usato per gli effetti bagliore e ombreggiatura.

### <a name="return-value"></a>Valore restituito

TRUE se l'immagine viene disegnata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare la prima versione se si vuole riempire la struttura Win32 autonomamente. Utilizzare la seconda versione per sfruttare i vantaggi di uno o più argomenti predefiniti di MFC oppure evitare di gestire la struttura.

Un'immagine sovrapposta è un'immagine disegnata sopra l'immagine primaria, specificata in questa funzione membro dal parametro *nImage* . Creare una maschera di sovrapposizione usando la funzione membro di [disegno](#draw) con l'indice in base uno della maschera di sovrapposizione specificata usando la macro [INDEXTOOVERLAYMASK](/windows/win32/api/commctrl/nf-commctrl-indextooverlaymask) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#11](../../mfc/reference/codesnippet/cpp/cimagelist-class_10.cpp)]

##  <a name="enddrag"></a>CImageList:: EndDrag

Chiamare questa funzione per terminare un'operazione di trascinamento.

```
static void PASCAL EndDrag();
```

### <a name="remarks"></a>Osservazioni

Per iniziare un'operazione di trascinamento, usare la funzione membro `BeginDrag`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#5](../../mfc/reference/codesnippet/cpp/cimagelist-class_11.cpp)]

##  <a name="extracticon"></a>CImageList:: ExtractIcon

Chiamare questa funzione per creare un'icona basata su un'immagine e sulla relativa maschera in un elenco di immagini.

```
HICON ExtractIcon(int nImage);
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine.

### <a name="return-value"></a>Valore restituito

Handle dell'icona in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Questo metodo si basa sul comportamento della macro [ImageList_ExtractIcon](/windows/win32/api/commctrl/nf-commctrl-imagelist_extracticon) per creare l'icona. Per altre informazioni sulla creazione e la pulizia delle icone, vedere la macro [ImageList_ExtractIcon](/windows/win32/api/commctrl/nf-commctrl-imagelist_extracticon) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#12](../../mfc/reference/codesnippet/cpp/cimagelist-class_12.cpp)]

##  <a name="fromhandle"></a>CImageList:: FromHandle

Restituisce un puntatore a un oggetto `CImageList` quando viene specificato un handle per un elenco di immagini.

```
static CImageList* PASCAL FromHandle(HIMAGELIST hImageList);
```

### <a name="parameters"></a>Parametri

*hImageList*<br/>
Specifica l'elenco di immagini.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CImageList` in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Se un `CImageList` non è ancora collegato all'handle, viene creato e collegato un oggetto `CImageList` temporaneo. Questo oggetto `CImageList` temporaneo è valido solo fino alla successiva esecuzione del tempo di inattività dell'applicazione nel ciclo di eventi, al momento dell'eliminazione di tutti gli oggetti temporanei.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#13](../../mfc/reference/codesnippet/cpp/cimagelist-class_13.cpp)]

##  <a name="fromhandlepermanent"></a>CImageList:: FromHandlePermanent

Restituisce un puntatore a un oggetto `CImageList` quando viene specificato un handle per un elenco di immagini.

```
static CImageList* PASCAL FromHandlePermanent(HIMAGELIST hImageList);
```

### <a name="parameters"></a>Parametri

*hImageList*<br/>
Specifica l'elenco di immagini.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CImageList` in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Se un oggetto `CImageList` non è associato all'handle, viene restituito NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#14](../../mfc/reference/codesnippet/cpp/cimagelist-class_14.cpp)]

##  <a name="getbkcolor"></a>CImageList:: GetBkColor

Chiamare questa funzione per recuperare il colore di sfondo corrente per un elenco di immagini.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore di colore RGB del colore di sfondo dell'oggetto `CImageList`.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList:: SetBkColor](#setbkcolor).

##  <a name="getdragimage"></a>CImageList:: GetDragImage

Ottiene l'elenco di immagini temporanee utilizzato per il trascinamento.

```
static CImageList* PASCAL GetDragImage(
    LPPOINT lpPoint,
    LPPOINT lpPointHotSpot);
```

### <a name="parameters"></a>Parametri

*lpPoint*<br/>
Indirizzo di una struttura di [punti](/previous-versions/dd162805\(v=vs.85\)) che riceve la posizione di trascinamento corrente.

*lpPointHotSpot*<br/>
Indirizzo di una struttura `POINT` che riceve l'offset dell'immagine di trascinamento rispetto alla posizione di trascinamento.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, puntatore all'elenco di immagini temporanee utilizzato per il trascinamento; in caso contrario, NULL.

##  <a name="getimagecount"></a>CImageList:: GetImageCount

Chiamare questa funzione per recuperare il numero di immagini in un elenco di immagini.

```
int GetImageCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di immagini.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList:: ExtractIcon](#extracticon).

##  <a name="getimageinfo"></a>CImageList:: GetImageInfo

Chiamare questa funzione per recuperare le informazioni relative a un'immagine.

```
BOOL GetImageInfo(
    int nImage,
    IMAGEINFO* pImageInfo) const;
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine.

*pImageInfo*<br/>
Puntatore a una struttura [IMAGEINFO](/windows/win32/api/commctrl/ns-commctrl-imageinfo) che riceve informazioni sull'immagine. Le informazioni contenute in questa struttura possono essere utilizzate per modificare direttamente le bitmap per l'immagine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La struttura `IMAGEINFO` contiene informazioni su un'immagine in un elenco di immagini.

##  <a name="getsafehandle"></a>CImageList:: GetSafeHandle

Chiamare questa funzione per recuperare il membro dati `m_hImageList`.

```
HIMAGELIST GetSafeHandle() const;
```

### <a name="return-value"></a>Valore restituito

Handle per l'elenco di immagini associate; in caso contrario, NULL se non è associato alcun oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#15](../../mfc/reference/codesnippet/cpp/cimagelist-class_15.cpp)]

##  <a name="m_himagelist"></a>CImageList:: m_hImageList

Handle dell'elenco immagini collegato all'oggetto.

`HIMAGELIST m_hImageList;`

### <a name="remarks"></a>Osservazioni

Il membro dati `m_hImageList` è una variabile pubblica di tipo HIMAGELIST.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#23](../../mfc/reference/codesnippet/cpp/cimagelist-class_16.cpp)]

##  <a name="operator_himagelist"></a>CImageList:: operator HIMAGELIST

Utilizzare questo operatore per ottenere l'handle associato dell'oggetto `CImageList`.

```
operator HIMAGELIST() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un handle per l'elenco di immagini rappresentato dall'oggetto `CImageList`; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HIMAGELIST.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#16](../../mfc/reference/codesnippet/cpp/cimagelist-class_17.cpp)]

##  <a name="read"></a>CImageList:: Read

Chiamare questa funzione per leggere un elenco di immagini da un archivio.

```
BOOL Read(CArchive* pArchive);
```

### <a name="parameters"></a>Parametri

*Con il*<br/>
Puntatore a un oggetto `CArchive` da cui leggere l'elenco di immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#18](../../mfc/reference/codesnippet/cpp/cimagelist-class_18.cpp)]

##  <a name="remove"></a>CImageList:: Remove

Chiamare questa funzione per rimuovere un'immagine da un oggetto elenco immagini.

```
BOOL Remove(int nImage);
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Tutti gli elementi che seguono *nImage* ora si spostano verso il basso di una posizione. Se, ad esempio, un elenco di immagini contiene due elementi, l'eliminazione del primo elemento farà sì che l'elemento rimanente si trovi nella prima posizione. *nImage*= 0 per l'elemento nella prima posizione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#19](../../mfc/reference/codesnippet/cpp/cimagelist-class_19.cpp)]

##  <a name="replace"></a>CImageList:: Replace

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
Puntatore alla bitmap che contiene l'immagine.

*pbmMask*<br/>
Puntatore alla bitmap contenente la maschera. Se non viene usata alcuna maschera con l'elenco di immagini, questo parametro viene ignorato.

*hIcon*<br/>
Handle per l'icona che contiene la bitmap e la maschera per la nuova immagine.

### <a name="return-value"></a>Valore restituito

La versione restituita BOOL restituisce un valore diverso da zero se ha esito positivo; in caso contrario, 0.

La versione restituita **int** restituisce l'indice in base zero dell'immagine, se ha esito positivo; in caso contrario,-1.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro dopo aver chiamato [SetImageCount](#setimagecount) per assegnare le nuove immagini valide ai numeri di indice dell'immagine segnaposto.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList:: SetImageCount](#setimagecount).

##  <a name="setbkcolor"></a>CImageList:: SetBkColor

Chiamare questa funzione per impostare il colore di sfondo per un elenco di immagini.

```
COLORREF SetBkColor(COLORREF cr);
```

### <a name="parameters"></a>Parametri

*CR*<br/>
Colore di sfondo da impostare. Può essere CLR_NONE. In tal caso, le immagini vengono disegnate in modo trasparente utilizzando la maschera.

### <a name="return-value"></a>Valore restituito

Il colore di sfondo precedente, se ha esito positivo; in caso contrario CLR_NONE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#20](../../mfc/reference/codesnippet/cpp/cimagelist-class_20.cpp)]

##  <a name="setdragcursorimage"></a>CImageList:: SetDragCursorImage

Crea una nuova immagine di trascinamento combinando l'immagine specificata, in genere un'immagine del cursore del mouse, con l'immagine di trascinamento corrente.

```
BOOL SetDragCursorImage(
    int nDrag,
    CPoint ptHotSpot);
```

### <a name="parameters"></a>Parametri

*nTrasposta*<br/>
Indice della nuova immagine da combinare con l'immagine di trascinamento.

*ptHotSpot*<br/>
Posizione dell'area sensibile all'interno della nuova immagine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Poiché le funzioni di trascinamento utilizzano la nuova immagine durante un'operazione di trascinamento, è necessario utilizzare la funzione [ShowCursor](/windows/win32/api/winuser/nf-winuser-showcursor) di Windows per nascondere il cursore del mouse effettivo dopo aver chiamato `CImageList::SetDragCursorImage`. In caso contrario, è possibile che nel sistema siano presenti due cursori del mouse per la durata dell'operazione di trascinamento.

##  <a name="setimagecount"></a>CImageList:: SetImageCount

Chiamare questa funzione membro per reimpostare il numero di immagini in un oggetto `CImageList`.

```
BOOL SetImageCount(UINT uNewCount);
```

### <a name="parameters"></a>Parametri

*uNewCount*<br/>
Valore che specifica il nuovo numero totale di immagini nell'elenco immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se si chiama questa funzione membro per aumentare il numero di immagini nell'elenco di immagini, chiamare [Replace](#replace) per ogni immagine aggiuntiva per assegnare i nuovi indici alle immagini valide. Se non si assegnano gli indici a immagini valide, le operazioni di creazione che creano le nuove immagini saranno imprevedibili.

Se si riduce la dimensione di un elenco di immagini utilizzando questa funzione, le immagini troncate vengono liberate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#21](../../mfc/reference/codesnippet/cpp/cimagelist-class_21.cpp)]

##  <a name="setoverlayimage"></a>CImageList:: SetOverlayImage

Chiamare questa funzione per aggiungere l'indice in base zero di un'immagine all'elenco di immagini da utilizzare come maschera di sovrapposizione.

```
BOOL SetOverlayImage(
    int nImage,
    int nOverlay);
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine da utilizzare come maschera di sovrapposizione.

*nOverlay*<br/>
Indice in base uno della maschera di sovrapposizione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È possibile aggiungere fino a quattro indici all'elenco.

Una maschera di sovrapposizione è un'immagine disegnata in modo trasparente su un'altra immagine. Creare una maschera di sovrapposizione su un'immagine usando la funzione membro [CImageList::D RAW](#draw) con l'indice in base uno della maschera di sovrapposizione specificata usando la macro INDEXTOOVERLAYMASK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#22](../../mfc/reference/codesnippet/cpp/cimagelist-class_22.cpp)]

##  <a name="write"></a>CImageList:: Write

Chiamare questa funzione per scrivere un oggetto elenco di immagini in un archivio.

```
BOOL Write(CArchive* pArchive);
```

### <a name="parameters"></a>Parametri

*Con il*<br/>
Puntatore a un oggetto `CArchive` in cui archiviare l'elenco di immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#17](../../mfc/reference/codesnippet/cpp/cimagelist-class_23.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CListCtrl](../../mfc/reference/clistctrl-class.md)<br/>
[Classe CTabCtrl](../../mfc/reference/ctabctrl-class.md)
