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
ms.openlocfilehash: eff2d0c1de88ebd9d949ebe197563c87c17e5b05
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372454"
---
# <a name="cimagelist-class"></a>Classe CImageList

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
|[CImageList::Add](#add)|Aggiunge una o più immagini a un elenco di immagini.|
|[CImageList::Attach](#attach)|Associa un elenco immagini `CImageList` a un oggetto.|
|[CImageList::BeginDrag](#begindrag)|Inizia a trascinare un'immagine.|
|[CImageList::Copia](#copy)|Copia un'immagine `CImageList` all'interno di un oggetto.|
|[CImageList::Create](#create)|Inizializza un elenco immagini e lo `CImageList` associa a un oggetto.|
|[CImageList::DeleteImageList](#deleteimagelist)|Elimina un elenco immagini.|
|[CImageList::DeleteTempMap](#deletetempmap)|Chiamato dal gestore del tempo di inattività [CWinApp](../../mfc/reference/cwinapp-class.md) per eliminare qualsiasi oggetto temporaneo `CImageList` creato da `FromHandle`.|
|[CImageList::Detach](#detach)|Scollega un oggetto elenco `CImageList` immagini da un oggetto e restituisce un handle a un elenco immagini.|
|[CImageList::DragEnter](#dragenter)|Blocca gli aggiornamenti durante un'operazione di trascinamento e visualizza l'immagine di trascinamento in una posizione specificata.|
|[CImageList::DragLeave](#dragleave)|Sblocca la finestra e nasconde l'immagine di trascinamento in modo che la finestra possa essere aggiornata.|
|[CImageList::DragMove](#dragmove)|Sposta l'immagine trascinata durante un'operazione di trascinamento della selezione.|
|[CImageList::DragShowNolock](#dragshownolock)|Mostra o nasconde l'immagine di trascinamento durante un'operazione di trascinamento, senza bloccare la finestra.|
|[CImageList::Draw](#draw)|Disegna l'immagine trascinata durante un'operazione di trascinamento della selezione.|
|[CImageList::DrawEx](#drawex)|Disegna un elemento dell'elenco immagini nel contesto di dispositivo specificato. La funzione utilizza lo stile di disegno specificato e fonde l'immagine con il colore specificato.|
|[CImageList::DrawIndirect](#drawindirect)|Disegna un'immagine da un elenco di immagini.|
|[CImageList::EndDrag](#enddrag)|Termina un'operazione di trascinamento.|
|[CImageList::ExtractIcon](#extracticon)|Crea un'icona basata su un'immagine e una maschera in un elenco di immagini.|
|[CImageList::FromHandle](#fromhandle)|Restituisce un `CImageList` puntatore a un oggetto quando viene fornito un handle per un elenco immagini. Se all'handle non è collegato un oggetto `CImageList`, viene creato e collegato un oggetto `CImageList` temporaneo.|
|[CImageList::FromHandlePermanent](#fromhandlepermanent)|Restituisce un `CImageList` puntatore a un oggetto quando viene fornito un handle per un elenco immagini. Se `CImageList` un oggetto non è associato all'handle, viene restituito NULL.|
|[CImageList::GetBkColor](#getbkcolor)|Recupera il colore di sfondo corrente per un elenco immagini.|
|[CImageList::GetDragImage](#getdragimage)|Ottiene l'elenco di immagini temporaneo utilizzato per il trascinamento.|
|[CImageList::GetImageCount](#getimagecount)|Recupera il numero di immagini in un elenco di immagini.|
|[CImageList::GetImageInfo](#getimageinfo)|Recupera informazioni su un'immagine.|
|[CImageList::GetSafeHandle](#getsafehandle)|Recupera `m_hImageList`.|
|[CImageList::Leggi](#read)|Legge un elenco di immagini da un archivio.|
|[CImageList::Rimuovere](#remove)|Rimuove un'immagine da un elenco di immagini.|
|[CImageList::Sostituisci](#replace)|Sostituisce un'immagine in un elenco immagini con una nuova immagine.|
|[CImageList::SetBkColor](#setbkcolor)|Imposta il colore di sfondo per un elenco immagini.|
|[CImageList::SetDragCursorImage](#setdragcursorimage)|Crea una nuova immagine di trascinamento.|
|[CImageList::SetImageCount](#setimagecount)|Reimposta il numero di immagini in un elenco di immagini.|
|[CImageList::SetOverlayImage](#setoverlayimage)|Aggiunge l'indice in base zero di un'immagine all'elenco di immagini da utilizzare come maschere di sovrapposizione.|
|[CImageList::Write](#write)|Scrive un elenco immagini in un archivio.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImageList::operator HIMAGELIST](#operator_himagelist)|Restituisce l'HIMAGELIST `CImageList`associato all'oggetto .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImageList::m_hImageList](#m_himagelist)|Handle contenente l'elenco immagini associato a questo oggetto.|

## <a name="remarks"></a>Osservazioni

Un "elenco immagini" è una raccolta di immagini delle stesse dimensioni, ognuna delle quali può essere indicata dal suo indice in base zero. Gli elenchi immagini vengono utilizzati per gestire in modo efficiente grandi set di icone o bitmap. Tutte le immagini in un elenco di immagini sono contenute in un'unica bitmap larga in formato dispositivo schermo. Un elenco immagini può anche includere una bitmap monocromatica che contiene le maschere utilizzate per disegnare le immagini in modo trasparente (stile icona). L'API (Application Programming Interface) Microsoft Win32 fornisce funzioni di elenco immagini che consentono di disegnare immagini, creare e distruggere elenchi di immagini, aggiungere e rimuovere immagini, sostituire immagini, unire immagini e trascinare immagini.

Questo controllo (e `CImageList` quindi la classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.

Per ulteriori informazioni `CImageList`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzo di CImageList](../../mfc/using-cimagelist.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CImageList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cimagelistadd"></a><a name="add"></a>CImageList::Add

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

*pbmImage (pbmImage)*<br/>
Puntatore alla bitmap contenente l'immagine o le immagini. Il numero di immagini viene dedotto dalla larghezza della bitmap.

*pbmMask (pbx)*<br/>
Puntatore alla bitmap contenente la maschera. Se con l'elenco immagini non viene utilizzata alcuna maschera, questo parametro viene ignorato.

*crMaschera*<br/>
Colore utilizzato per generare la maschera. Ogni pixel di questo colore nella bitmap specificata viene modificato in nero e il bit corrispondente nella maschera viene impostato su uno.

*hIcon*<br/>
Handle dell'icona che contiene la bitmap e la maschera per la nuova immagine.

### <a name="return-value"></a>Valore restituito

Indice in base zero della prima nuova immagine se ha esito positivo; in caso contrario - 1.

### <a name="remarks"></a>Osservazioni

L'utente è responsabile del rilascio della maniglia dell'icona al termine dell'operazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#1](../../mfc/reference/codesnippet/cpp/cimagelist-class_1.cpp)]

## <a name="cimagelistattach"></a><a name="attach"></a>CImageList::Attach

Chiamare questa funzione per associare `CImageList` un elenco immagini a un oggetto.

```
BOOL Attach(HIMAGELIST hImageList);
```

### <a name="parameters"></a>Parametri

*hImageList*<br/>
Handle per un oggetto elenco immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'allegato ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#2](../../mfc/reference/codesnippet/cpp/cimagelist-class_2.cpp)]

## <a name="cimagelistbegindrag"></a><a name="begindrag"></a>CImageList::BeginDrag

Chiamare questa funzione per iniziare a trascinare un'immagine.

```
BOOL BeginDrag(
    int nImage,
    CPoint ptHotSpot);
```

### <a name="parameters"></a>Parametri

*nImmagine*<br/>
Indice in base zero dell'immagine da trascinare.

*PtHotSpot*<br/>
Coordinate della posizione di trascinamento iniziale (in genere, la posizione del cursore). Le coordinate sono relative all'angolo superiore sinistro dell'immagine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione crea un elenco immagini temporaneo che viene utilizzato per il trascinamento. L'immagine combina l'immagine specificata e la relativa maschera con il cursore corrente. In risposta ai successivi messaggi di WM_MOUSEMOVE, `DragMove` è possibile spostare l'immagine di trascinamento utilizzando la funzione membro. Per terminare l'operazione di `EndDrag` trascinamento, è possibile utilizzare la funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#3](../../mfc/reference/codesnippet/cpp/cimagelist-class_3.cpp)]

## <a name="cimagelistcimagelist"></a><a name="cimagelist"></a>CImageList::CImageList

Costruisce un oggetto `CImageList`.

```
CImageList();
```

## <a name="cimagelistcopy"></a><a name="copy"></a>CImageList::Copia

Questa funzione membro implementa il comportamento della funzione Win32 [ImageList_Copy](/windows/win32/api/commctrl/nf-commctrl-imagelist_copy), come descritto in Windows SDK.

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

*Isrc*<br/>
Indice in base zero dell'immagine da utilizzare come origine dell'operazione di copia.

*UFlags (Flag)*<br/>
Valore del flag di bit che specifica il tipo di operazione di copia da eseguire. Questo parametro può essere uno dei seguenti valori:

|Valore|Significato|
|-----------|-------------|
|ILCF_MOVE|L'immagine di origine viene copiata nell'indice dell'immagine di destinazione. Questa operazione genera più istanze di una determinata immagine. ILCF_MOVE è l'impostazione predefinita.|
|ILCF_SWAP|Le immagini di origine e di destinazione si scambiano posizioni all'interno dell'elenco immagini.|

*pSrc*<br/>
Puntatore a `CImageList` un oggetto che è la destinazione dell'operazione di copia.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#6](../../mfc/reference/codesnippet/cpp/cimagelist-class_4.cpp)]

## <a name="cimagelistcreate"></a><a name="create"></a>CImageList::Create

Inizializza un elenco immagini e lo associa a un oggetto [CImageList.](../../mfc/reference/cimagelist-class.md)

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

*Cx*<br/>
Dimensioni di ogni immagine, in pixel.

*Cy*<br/>
Dimensioni di ogni immagine, in pixel.

*Nflags*<br/>
Specifica il tipo di elenco immagini da creare. Questo parametro può essere una combinazione dei valori seguenti, `ILC_COLOR` ma può includere solo uno dei valori.

|Valore|Significato|
|-----------|-------------|
|ILC_COLOR|Utilizzare il comportamento predefinito se non viene specificato alcun o più flag ILC_COLOR . In genere, il valore predefinito è ILC_COLOR4; ma per i driver video meno recenti, l'impostazione predefinita è ILC_COLORDDB.|
|ILC_COLOR4|Utilizzare una sezione di bitmap indipendente dal dispositivo (DIB) a 4 bit (16 colori) come bitmap per l'elenco immagini.|
|ILC_COLOR8|Utilizzare una sezione DIB a 8 bit. I colori utilizzati per la tavola colori sono gli stessi colori della tavolozza dei mezzitoni.|
|ILC_COLOR16|Utilizzare una sezione DIB a 16 bit (32/64k).|
|ILC_COLOR24|Utilizzare una sezione DIB a 24 bit.|
|ILC_COLOR32|Utilizzare una sezione DIB a 32 bit.|
|ILC_COLORDDB|Utilizzare una bitmap dipendente dal dispositivo.|
|ILC_MASK|Utilizza una maschera. L'elenco immagini contiene due bitmap, una delle quali è una bitmap monocromatica utilizzata come maschera. Se questo valore non è incluso, l'elenco immagini contiene una sola bitmap. Per ulteriori informazioni sulle immagini mascherate, vedere [Disegno di immagini da un elenco immagini.](../../mfc/drawing-images-from-an-image-list.md)|

*nIniziale*<br/>
Numero di immagini inizialmente contenute nell'elenco immagini.

*nCrescere*<br/>
Numero di immagini in base alle quali l'elenco immagini può aumentare quando il sistema deve ridimensionare l'elenco per fare spazio alle nuove immagini. Questo parametro rappresenta il numero di nuove immagini che l'elenco di immagini ridimensionate può contenere.

*nBitmapID (informazioni in stato in stato in cui*<br/>
ID risorsa della bitmap da associare all'elenco immagini.

*crMaschera*<br/>
Colore utilizzato per generare una maschera. Ogni pixel di questo colore nella bitmap specificata viene modificato in nero e il bit corrispondente nella maschera viene impostato su uno.

*lpszBitmapID (informazioni in due)*<br/>
Stringa contenente gli ID di risorsa delle immagini.

*elenco immagini1*<br/>
Riferimento a un oggetto `CImageList`.

*nImmagine1*<br/>
Indice della prima immagine esistente.

*elenco immagini2*<br/>
Riferimento a un oggetto `CImageList`.

*nImmagine2*<br/>
Indice della seconda immagine esistente.

*Dx*<br/>
Offset dell'asse x della seconda immagine in relazione alla prima immagine, in pixel.

*Dy*<br/>
Offset dell'asse y della seconda immagine in relazione alla prima immagine, in pixel.

*pImageList (elenco immagine)*<br/>
Puntatore a un oggetto `CImageList`.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CImageList` in due passi. Chiamare innanzitutto il costruttore e quindi chiamare `Create`, che crea `CImageList` l'elenco immagini e lo associa all'oggetto .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#7](../../mfc/reference/codesnippet/cpp/cimagelist-class_5.cpp)]

## <a name="cimagelistdeleteimagelist"></a><a name="deleteimagelist"></a>CImageList::DeleteImageList

Chiamare questa funzione per eliminare un elenco immagini.

```
BOOL DeleteImageList();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#8](../../mfc/reference/codesnippet/cpp/cimagelist-class_6.cpp)]

## <a name="cimagelistdeletetempmap"></a><a name="deletetempmap"></a>CImageList::DeleteTempMap

Chiamato automaticamente `CWinApp` dal gestore del `DeleteTempMap` tempo di `CImageList` inattività, elimina tutti gli oggetti `hImageList`temporanei creati da `ImageList` [FromHandle](#fromhandle), ma non elimina gli handle ( ) temporaneamente associati agli oggetti.

```
static void PASCAL DeleteTempMap();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#9](../../mfc/reference/codesnippet/cpp/cimagelist-class_7.cpp)]

## <a name="cimagelistdetach"></a><a name="detach"></a>CImageList::Detach

Chiamare questa funzione per scollegare `CImageList` un oggetto elenco immagini da un oggetto.

```
HIMAGELIST Detach();
```

### <a name="return-value"></a>Valore restituito

Handle per un oggetto elenco immagini.

### <a name="remarks"></a>Osservazioni

Questa funzione restituisce un handle per l'oggetto elenco immagini.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList::Attach](#attach).

## <a name="cimagelistdragenter"></a><a name="dragenter"></a>CImageList::DragEnter

Durante un'operazione di trascinamento, blocca gli aggiornamenti nella finestra specificata da *pWndLock* e visualizza l'immagine di trascinamento nella posizione specificata dal *punto*.

```
static BOOL PASCAL DragEnter(
    CWnd* pWndLock,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWndLock (blocco di pWnd*<br/>
Puntatore alla finestra proprietaria dell'immagine di trascinamento.

*Punto*<br/>
Posizione in cui visualizzare l'immagine di trascinamento. Le coordinate sono relative all'angolo superiore sinistro della finestra (non all'area client).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Le coordinate sono relative all'angolo superiore sinistro della finestra, pertanto è necessario compensare la larghezza degli elementi della finestra, ad esempio il bordo, la barra del titolo e la barra dei menu, quando si specificano le coordinate.

Se *pWndLock* è NULL, questa funzione disegna l'immagine nel contesto di visualizzazione associato alla finestra del desktop e le coordinate sono relative all'angolo superiore sinistro dello schermo.

Questa funzione blocca tutti gli altri aggiornamenti alla finestra specificata durante l'operazione di trascinamento. Se è necessario eseguire qualsiasi disegno durante un'operazione di trascinamento, ad esempio evidenziando la destinazione di un'operazione di trascinamento della selezione, è possibile nascondere temporaneamente l'immagine trascinata utilizzando il [CImageList::DragLeave](#dragleave) funzione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList::BeginDrag](#begindrag).

## <a name="cimagelistdragleave"></a><a name="dragleave"></a>CImageList::DragLeave

Sblocca la finestra specificata da *pWndLock* e nasconde l'immagine di trascinamento, consentendo l'aggiornamento della finestra.

```
static BOOL PASCAL DragLeave(CWnd* pWndLock);
```

### <a name="parameters"></a>Parametri

*pWndLock (blocco di pWnd*<br/>
Puntatore alla finestra proprietaria dell'immagine di trascinamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList::EndDrag](#enddrag).

## <a name="cimagelistdragmove"></a><a name="dragmove"></a>CImageList::DragMove

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

Questa funzione viene in genere chiamata in risposta a un messaggio di WM_MOUSEMOVE. Per iniziare un'operazione `BeginDrag` di trascinamento, utilizzare la funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#4](../../mfc/reference/codesnippet/cpp/cimagelist-class_8.cpp)]

## <a name="cimagelistdragshownolock"></a><a name="dragshownolock"></a>CImageList::DragShowNolock

Mostra o nasconde l'immagine di trascinamento durante un'operazione di trascinamento, senza bloccare la finestra.

```
static BOOL PASCAL DragShowNolock(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
Specifica se l'immagine di trascinamento deve essere visualizzata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La funzione [CImageList::DragEnter](#dragenter) blocca tutti gli aggiornamenti alla finestra durante un'operazione di trascinamento. Questa funzione, tuttavia, non blocca la finestra.

## <a name="cimagelistdraw"></a><a name="draw"></a>CImageList::Draw

Chiamare questa funzione per disegnare l'immagine che viene trascinata durante un'operazione di trascinamento della selezione.

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

*nImmagine*<br/>
Indice in base zero dell'immagine da disegnare.

*pt*<br/>
Posizione in cui disegnare all'interno del contesto di periferica specificato.

*nStyle*<br/>
Flag che specifica lo stile di disegno. Può essere uno o più di questi valori:It can be one or more of these values:

|Valore|Significato|
|-----------|-------------|
|ILD_BLEND25, ILD_FOCUS|Disegna l'immagine, fondendo il 25% con il colore di evidenziazione del sistema. Questo valore non ha effetto se l'elenco immagini non contiene una maschera.|
|ILD_BLEND50, ILD_SELECTED, ILD_BLEND|Disegna l'immagine, fondendo il 50% con il colore di evidenziazione del sistema. Questo valore non ha effetto se l'elenco immagini non contiene una maschera.|
|ILD_MASK|Disegna la maschera.|
|ILD_NORMAL|Disegna l'immagine utilizzando il colore di sfondo per l'elenco delle immagini. Se il colore di sfondo è il valore CLR_NONE, l'immagine viene disegnata in modo trasparente utilizzando la maschera.|
|ILD_TRANSPARENT|Disegna l'immagine in modo trasparente utilizzando la maschera, indipendentemente dal colore di sfondo.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList::SetOverlayImage](#setoverlayimage).

## <a name="cimagelistdrawex"></a><a name="drawex"></a>CImageList::DrawEx

Disegna un elemento dell'elenco immagini nel contesto di dispositivo specificato.

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

*nImmagine*<br/>
Indice in base zero dell'immagine da disegnare.

*pt*<br/>
Posizione in cui disegnare all'interno del contesto di periferica specificato.

*Sz*<br/>
Dimensione della parte dell'immagine da disegnare rispetto all'angolo superiore sinistro dell'immagine. Vedere *dx* e *dy* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) in Windows SDK.

*clrBk (clrBk)*<br/>
Colore di sfondo dell'immagine. Vedere *rgbBk* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) in Windows SDK.

*ClrFg (clrFg)*<br/>
Colore di primo piano dell'immagine. Vedere *rgbFg* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) in Windows SDK.

*nStyle*<br/>
Flag che specifica lo stile di disegno. Vedere *fStyle* in [ImageList_DrawEx](/windows/win32/api/commctrl/nf-commctrl-imagelist_drawex) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La funzione utilizza lo stile di disegno specificato e fonde l'immagine con il colore specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#10](../../mfc/reference/codesnippet/cpp/cimagelist-class_9.cpp)]

## <a name="cimagelistdrawindirect"></a><a name="drawindirect"></a>CImageList::DrawIndirect

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
Puntatore a una struttura [IMAGELISTDRAWPARAMS](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams) che contiene informazioni sull'operazione di disegno.

*pDC*<br/>
Puntatore al contesto di dispositivo di destinazione. È necessario eliminare questo oggetto [CDC](../../mfc/reference/cdc-class.md) al termine dell'operazione.

*nImmagine*<br/>
Indice in base zero dell'immagine da disegnare.

*pt*<br/>
Struttura [POINT](/previous-versions/dd162805\(v=vs.85\)) contenente le coordinate x e y in cui verrà disegnata l'immagine.

*Sz*<br/>
Struttura [DI DIMENSIONE](/windows/win32/api/windef/ns-windef-size) che indica le dimensioni dell'immagine da disegnare.

*ptOrigin*<br/>
Struttura [POINT](/previous-versions/dd162805\(v=vs.85\)) contenente le coordinate x e y che specificano l'angolo superiore sinistro dell'operazione di disegno rispetto all'immagine stessa. I pixel dell'immagine che si trovano a sinistra della coordinata x e sopra la coordinata y non vengono disegnati.

*fStile*<br/>
Flag che specifica lo stile di disegno e, facoltativamente, l'immagine sovrapposta. Vedere la sezione Osservazioni per informazioni sull'immagine sovrapposta. L'implementazione predefinita MFC, ILD_NORMAL, disegna l'immagine utilizzando il colore di sfondo per l'elenco di immagini. Se il colore di sfondo è il valore CLR_NONE, l'immagine viene disegnata in modo trasparente utilizzando una maschera.

Altri stili possibili sono descritti sotto il membro *fStyle* della struttura [IMAGELISTDRAWPARAMS.](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams)

*dwRop*<br/>
Valore che specifica un codice dell'operazione raster. Questi codici definiscono il modo in cui i dati di colore per il rettangolo di origine verranno combinati con i dati di colore per il rettangolo di destinazione per ottenere il colore finale. L'implementazione predefinita di MFC, SRCCOPY, copia il rettangolo di origine direttamente nel rettangolo di destinazione. Questo parametro viene ignorato se il parametro *fStyle* non include il flag di ILD_ROP.

Altri valori possibili sono descritti nel membro *dwRop* della struttura [IMAGELISTDRAWPARAMS.](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams)

*rgbIndietro*<br/>
Il colore di sfondo dell'immagine, per impostazione predefinita, CLR_DEFAULT. Questo parametro può essere un valore RGB definito dall'applicazione o uno dei seguenti valori:

|Valore|Significato|
|-----------|-------------|
|CLR_DEFAULT|Colore di sfondo predefinito. L'immagine viene disegnata utilizzando il colore di sfondo dell'elenco immagini.|
|CLR_NONE|Nessun colore di sfondo. L'immagine viene disegnata in modo trasparente.|

*rgbFore*<br/>
Colore di primo piano dell'immagine, per impostazione predefinita CLR_DEFAULT. Questo parametro può essere un valore RGB definito dall'applicazione o uno dei seguenti valori:

|Valore|Significato|
|-----------|-------------|
|CLR_DEFAULT|Colore di primo piano predefinito. L'immagine viene disegnata utilizzando il colore di evidenziazione del sistema come colore di primo piano.|
|CLR_NONE|Nessun colore di fusione. L'immagine viene fusa con il colore del contesto di dispositivo di destinazione.|

Questo parametro viene utilizzato solo se *fStyle* include il flag ILD_BLEND25 o ILD_BLEND50.

*fStato*<br/>
Flag che specifica lo stato del disegno. Questo membro può contenere uno o più flag di stato dell'elenco immagini.

*Telaio*<br/>
Influisce sul comportamento degli effetti di saturazione e di fusione alfa.

Se utilizzato con ILS_SATURATE, questo membro contiene il valore aggiunto a ogni componente di colore della tripletta RGB per ogni pixel nell'icona.

Se utilizzato con ILS_APLHA, questo membro contiene il valore per il canale alfa. Questo valore può essere compreso tra 0 e 255, con 0 completamente trasparente e 255 completamente opaco.

*CrEffect (in questo modo)*<br/>
Valore [COLORREF](/windows/win32/gdi/colorref) utilizzato per gli effetti bagliore e ombra.

### <a name="return-value"></a>Valore restituito

TRUESe l'immagine viene disegnata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare la prima versione se si desidera riempire manualmente la struttura Win32. Utilizzare la seconda versione se si desidera sfruttare uno o più argomenti predefiniti di MFC o evitare di gestire la struttura.

Un'immagine sovrapposta è un'immagine che viene disegnata sopra l'immagine primaria, specificata in questa funzione membro dal *nImage* parametro. Disegnare una maschera di sovrapposizione utilizzando la funzione membro [Draw](#draw) con l'indice in base uno della maschera di sovrapposizione specificato utilizzando la macro [INDEXTOOVERLAYMASK.](/windows/win32/api/commctrl/nf-commctrl-indextooverlaymask)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#11](../../mfc/reference/codesnippet/cpp/cimagelist-class_10.cpp)]

## <a name="cimagelistenddrag"></a><a name="enddrag"></a>CImageList::EndDrag

Chiamare questa funzione per terminare un'operazione di trascinamento.

```
static void PASCAL EndDrag();
```

### <a name="remarks"></a>Osservazioni

Per iniziare un'operazione `BeginDrag` di trascinamento, utilizzare la funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#5](../../mfc/reference/codesnippet/cpp/cimagelist-class_11.cpp)]

## <a name="cimagelistextracticon"></a><a name="extracticon"></a>CImageList::ExtractIcon

Chiamare questa funzione per creare un'icona basata su un'immagine e la relativa maschera in un elenco di immagini.

```
HICON ExtractIcon(int nImage);
```

### <a name="parameters"></a>Parametri

*nImmagine*<br/>
Indice in base zero dell'immagine.

### <a name="return-value"></a>Valore restituito

Handle dell'icona se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questo metodo si basa sul comportamento della macro [ImageList_ExtractIcon](/windows/win32/api/commctrl/nf-commctrl-imagelist_extracticon) per creare l'icona. Fare riferimento alla macro [ImageList_ExtractIcon](/windows/win32/api/commctrl/nf-commctrl-imagelist_extracticon) per ulteriori informazioni sulla creazione e la pulizia delle icone.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#12](../../mfc/reference/codesnippet/cpp/cimagelist-class_12.cpp)]

## <a name="cimagelistfromhandle"></a><a name="fromhandle"></a>CImageList::FromHandle

Restituisce un `CImageList` puntatore a un oggetto quando viene fornito un handle per un elenco immagini.

```
static CImageList* PASCAL FromHandle(HIMAGELIST hImageList);
```

### <a name="parameters"></a>Parametri

*hImageList*<br/>
Specifica l'elenco immagini.

### <a name="return-value"></a>Valore restituito

Un puntatore `CImageList` a un oggetto se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se `CImageList` un oggetto non è già associato `CImageList` alla maniglia, viene creato e associato un oggetto temporaneo. Questo `CImageList` oggetto temporaneo è valido solo fino alla successiva inattività dell'applicazione nel ciclo di eventi, in cui vengono eliminati tutti gli oggetti temporanei.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#13](../../mfc/reference/codesnippet/cpp/cimagelist-class_13.cpp)]

## <a name="cimagelistfromhandlepermanent"></a><a name="fromhandlepermanent"></a>CImageList::FromHandlePermanent

Restituisce un `CImageList` puntatore a un oggetto quando viene fornito un handle per un elenco immagini.

```
static CImageList* PASCAL FromHandlePermanent(HIMAGELIST hImageList);
```

### <a name="parameters"></a>Parametri

*hImageList*<br/>
Specifica l'elenco immagini.

### <a name="return-value"></a>Valore restituito

Un puntatore `CImageList` a un oggetto se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se `CImageList` un oggetto non è associato all'handle, viene restituito NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#14](../../mfc/reference/codesnippet/cpp/cimagelist-class_14.cpp)]

## <a name="cimagelistgetbkcolor"></a><a name="getbkcolor"></a>CImageList::GetBkColor

Chiamare questa funzione per recuperare il colore di sfondo corrente per un elenco immagini.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore del colore `CImageList` RGB del colore di sfondo dell'oggetto.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList::SetBkColor](#setbkcolor).

## <a name="cimagelistgetdragimage"></a><a name="getdragimage"></a>CImageList::GetDragImage

Ottiene l'elenco di immagini temporaneo utilizzato per il trascinamento.

```
static CImageList* PASCAL GetDragImage(
    LPPOINT lpPoint,
    LPPOINT lpPointHotSpot);
```

### <a name="parameters"></a>Parametri

*lpPunto*<br/>
Indirizzo di una struttura [POINT](/previous-versions/dd162805\(v=vs.85\)) che riceve la posizione di trascinamento corrente.

*lpPointHotSpot*<br/>
Indirizzo di `POINT` una struttura che riceve l'offset dell'immagine di trascinamento rispetto alla posizione di trascinamento.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un puntatore all'elenco di immagini temporaneo utilizzato per il trascinamento; in caso contrario, NULL.

## <a name="cimagelistgetimagecount"></a><a name="getimagecount"></a>CImageList::GetImageCount

Chiamare questa funzione per recuperare il numero di immagini in un elenco di immagini.

```
int GetImageCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di immagini.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList::ExtractIcon](#extracticon).

## <a name="cimagelistgetimageinfo"></a><a name="getimageinfo"></a>CImageList::GetImageInfo

Chiamare questa funzione per recuperare informazioni su un'immagine.

```
BOOL GetImageInfo(
    int nImage,
    IMAGEINFO* pImageInfo) const;
```

### <a name="parameters"></a>Parametri

*nImmagine*<br/>
Indice in base zero dell'immagine.

*pImageInfo (informazioni in stato in questo gruppo)*<br/>
Puntatore a una struttura [IMAGEINFO](/windows/win32/api/commctrl/ns-commctrl-imageinfo) che riceve informazioni sull'immagine. Le informazioni contenute in questa struttura possono essere utilizzate per modificare direttamente le bitmap per l'immagine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La `IMAGEINFO` struttura contiene informazioni su un'immagine in un elenco immagini.

## <a name="cimagelistgetsafehandle"></a><a name="getsafehandle"></a>CImageList::GetSafeHandle

Chiamare questa funzione `m_hImageList` per recuperare il membro dati.

```
HIMAGELIST GetSafeHandle() const;
```

### <a name="return-value"></a>Valore restituito

Un handle per l'elenco delle immagini allegate; in caso contrario NULL se non è associato alcun oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#15](../../mfc/reference/codesnippet/cpp/cimagelist-class_15.cpp)]

## <a name="cimagelistm_himagelist"></a><a name="m_himagelist"></a>CImageList::m_hImageList

Handle dell'elenco immagini associato a questo oggetto.

`HIMAGELIST m_hImageList;`

### <a name="remarks"></a>Osservazioni

Il `m_hImageList` membro dati è una variabile pubblica di tipo HIMAGELIST.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#23](../../mfc/reference/codesnippet/cpp/cimagelist-class_16.cpp)]

## <a name="cimagelistoperator-himagelist"></a><a name="operator_himagelist"></a>CImageList::operator HIMAGELIST

Utilizzare questo operatore per ottenere `CImageList` l'handle associato dell'oggetto.

```
operator HIMAGELIST() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un `CImageList` handle per l'elenco di immagini rappresentato dall'oggetto; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questo operatore è un operatore di cast, che supporta l'utilizzo diretto di un oggetto HIMAGELIST.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#16](../../mfc/reference/codesnippet/cpp/cimagelist-class_17.cpp)]

## <a name="cimagelistread"></a><a name="read"></a>CImageList::Leggi

Chiamare questa funzione per leggere un elenco di immagini da un archivio.

```
BOOL Read(CArchive* pArchive);
```

### <a name="parameters"></a>Parametri

*pArchivio*<br/>
Puntatore a `CArchive` un oggetto da cui deve essere letto l'elenco immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#18](../../mfc/reference/codesnippet/cpp/cimagelist-class_18.cpp)]

## <a name="cimagelistremove"></a><a name="remove"></a>CImageList::Rimuovere

Chiamare questa funzione per rimuovere un'immagine da un oggetto elenco immagini.

```
BOOL Remove(int nImage);
```

### <a name="parameters"></a>Parametri

*nImmagine*<br/>
Indice in base zero dell'immagine da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Tutti gli elementi che seguono *nImage* ora si spostano verso il basso di una posizione. Ad esempio, se un elenco immagini contiene due elementi, l'eliminazione del primo elemento farà sì che l'elemento rimanente sia ora nella prima posizione. *nImage*0 per l'elemento in prima posizione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#19](../../mfc/reference/codesnippet/cpp/cimagelist-class_19.cpp)]

## <a name="cimagelistreplace"></a><a name="replace"></a>CImageList::Sostituisci

Chiamare questa funzione per sostituire un'immagine in un elenco immagini con una nuova immagine.

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

*nImmagine*<br/>
Indice in base zero dell'immagine da sostituire.

*pbmImage (pbmImage)*<br/>
Puntatore alla bitmap contenente l'immagine.

*pbmMask (pbx)*<br/>
Puntatore alla bitmap contenente la maschera. Se con l'elenco immagini non viene utilizzata alcuna maschera, questo parametro viene ignorato.

*hIcon*<br/>
Handle per l'icona che contiene la bitmap e la maschera per la nuova immagine.

### <a name="return-value"></a>Valore restituito

La versione che restituisce BOOL restituisce diverso da zero se ha esito positivo; in caso contrario 0.

La versione che restituisce **int** restituisce l'indice in base zero dell'immagine se ha esito positivo; in caso contrario - 1.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro dopo aver chiamato [SetImageCount](#setimagecount) per assegnare le nuove immagini valide ai numeri di indice dell'immagine segnaposto.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CImageList::SetImageCount](#setimagecount).

## <a name="cimagelistsetbkcolor"></a><a name="setbkcolor"></a>CImageList::SetBkColor

Chiamare questa funzione per impostare il colore di sfondo per un elenco immagini.

```
COLORREF SetBkColor(COLORREF cr);
```

### <a name="parameters"></a>Parametri

*Cr*<br/>
Colore di sfondo da impostare. Può essere CLR_NONE. In tal caso, le immagini vengono disegnate in modo trasparente utilizzando la maschera.

### <a name="return-value"></a>Valore restituito

Il colore di sfondo precedente se ha esito positivo; in caso contrario CLR_NONE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#20](../../mfc/reference/codesnippet/cpp/cimagelist-class_20.cpp)]

## <a name="cimagelistsetdragcursorimage"></a><a name="setdragcursorimage"></a>CImageList::SetDragCursorImage

Crea una nuova immagine di trascinamento combinando l'immagine specificata (in genere un'immagine del cursore del mouse) con l'immagine di trascinamento corrente.

```
BOOL SetDragCursorImage(
    int nDrag,
    CPoint ptHotSpot);
```

### <a name="parameters"></a>Parametri

*nTrascinare*<br/>
Indice della nuova immagine da combinare con l'immagine di trascinamento.

*PtHotSpot*<br/>
Posizione dell'area sensibile all'interno della nuova immagine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Poiché le funzioni di trascinamento utilizzano la nuova immagine durante un'operazione di `CImageList::SetDragCursorImage`trascinamento, è necessario utilizzare la funzione [ShowCursor](/windows/win32/api/winuser/nf-winuser-showcursor) di Windows per nascondere il cursore del mouse effettivo dopo la chiamata a . In caso contrario, il sistema potrebbe sembrare avere due cursori del mouse per la durata dell'operazione di trascinamento.

## <a name="cimagelistsetimagecount"></a><a name="setimagecount"></a>CImageList::SetImageCount

Chiamare questa funzione membro per reimpostare `CImageList` il numero di immagini in un oggetto.

```
BOOL SetImageCount(UINT uNewCount);
```

### <a name="parameters"></a>Parametri

*uNewCount (conteggio informazioni in cui l'oggetto*<br/>
Valore che specifica il nuovo numero totale di immagini nell'elenco immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se si chiama questa funzione membro per aumentare il numero di immagini nell'elenco immagini, quindi chiamare [Sostituire](#replace) per ogni immagine aggiuntiva per assegnare i nuovi indici alle immagini valide. Se non si assegnano gli indici a immagini valide, le operazioni di disegno che creano le nuove immagini saranno imprevedibili.

Se si riducono le dimensioni di un elenco immagini utilizzando questa funzione, le immagini troncate vengono liberate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#21](../../mfc/reference/codesnippet/cpp/cimagelist-class_21.cpp)]

## <a name="cimagelistsetoverlayimage"></a><a name="setoverlayimage"></a>CImageList::SetOverlayImage

Chiamare questa funzione per aggiungere l'indice in base zero di un'immagine all'elenco di immagini da utilizzare come maschere di sovrapposizione.

```
BOOL SetOverlayImage(
    int nImage,
    int nOverlay);
```

### <a name="parameters"></a>Parametri

*nImmagine*<br/>
Indice in base zero dell'immagine da utilizzare come maschera di sovrapposizione.

*nSovrapposizione*<br/>
Indice in base uno della maschera di sovrapposizione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È possibile aggiungere fino a quattro indici all'elenco.

Una maschera di sovrapposizione è un'immagine disegnata in modo trasparente su un'altra immagine. Disegnare una maschera di sovrapposizione su un'immagine utilizzando la funzione membro [CImageList::Draw](#draw) con l'indice in base uno della maschera di sovrapposizione specificato utilizzando la macro INDEXTOOVERLAYMASK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#22](../../mfc/reference/codesnippet/cpp/cimagelist-class_22.cpp)]

## <a name="cimagelistwrite"></a><a name="write"></a>CImageList::Write

Chiamare questa funzione per scrivere un oggetto elenco immagini in un archivio.

```
BOOL Write(CArchive* pArchive);
```

### <a name="parameters"></a>Parametri

*pArchivio*<br/>
Puntatore a `CArchive` un oggetto in cui deve essere archiviato l'elenco immagini.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CImageList#17](../../mfc/reference/codesnippet/cpp/cimagelist-class_23.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CListCtrl](../../mfc/reference/clistctrl-class.md)<br/>
[Classe CTabCtrl](../../mfc/reference/ctabctrl-class.md)
