---
title: Classe CStatic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CStatic
- AFXWIN/CStatic
- AFXWIN/CStatic::CStatic
- AFXWIN/CStatic::Create
- AFXWIN/CStatic::DrawItem
- AFXWIN/CStatic::GetBitmap
- AFXWIN/CStatic::GetCursor
- AFXWIN/CStatic::GetEnhMetaFile
- AFXWIN/CStatic::GetIcon
- AFXWIN/CStatic::SetBitmap
- AFXWIN/CStatic::SetCursor
- AFXWIN/CStatic::SetEnhMetaFile
- AFXWIN/CStatic::SetIcon
dev_langs:
- C++
helpviewer_keywords:
- CStatic [MFC], CStatic
- CStatic [MFC], Create
- CStatic [MFC], DrawItem
- CStatic [MFC], GetBitmap
- CStatic [MFC], GetCursor
- CStatic [MFC], GetEnhMetaFile
- CStatic [MFC], GetIcon
- CStatic [MFC], SetBitmap
- CStatic [MFC], SetCursor
- CStatic [MFC], SetEnhMetaFile
- CStatic [MFC], SetIcon
ms.assetid: e7c94cd9-5ebd-428a-aa30-b3e51f8efb95
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 084a3101b7415ae4b77ed11070c893a7bc44ac37
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46439666"
---
# <a name="cstatic-class"></a>Classe CStatic

Fornisce la funzionalità di un controllo statico di Windows.

## <a name="syntax"></a>Sintassi

```
class CStatic : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStatic::CStatic](#cstatic)|Costruisce un oggetto `CStatic`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStatic::Create](#create)|Crea il controllo statico di Windows e lo collega al `CStatic` oggetto.|
|[CStatic::DrawItem](#drawitem)|Eseguire l'override per disegnare un controllo statico creato dal proprietario.|
|[CStatic::GetBitmap](#getbitmap)|Recupera l'handle di bitmap impostata in precedenza con [SetBitmap](#setbitmap).|
|[CStatic::GetCursor](#getcursor)|Recupera l'handle dell'immagine del cursore è impostato in precedenza con [SetCursor](#setcursor).|
|[CStatic::GetEnhMetaFile](#getenhmetafile)|Recupera l'handle del metafile avanzato impostato in precedenza con [SetEnhMetaFile](#setenhmetafile).|
|[CStatic::GetIcon](#geticon)|Recupera l'handle dell'icona impostato in precedenza con [SetIcon](#seticon).|
|[CStatic::SetBitmap](#setbitmap)|Specifica una bitmap da visualizzare nel controllo statico.|
|[CStatic::SetCursor](#setcursor)|Specifica un'immagine di cursore da visualizzare nel controllo statico.|
|[CStatic::SetEnhMetaFile](#setenhmetafile)|Specifica un enhanced metafile da visualizzare nel controllo statico.|
|[CStatic::SetIcon](#seticon)|Specifica l'icona da visualizzare nel controllo statico.|

## <a name="remarks"></a>Note

Un controllo statico Visualizza una stringa di testo, finestra, rettangolo, icona, cursori, bitmap o metafile avanzato. Può essere utilizzato per assegnare un'etichetta, casella o separare altri controlli. Un controllo statico in genere non accetta input e non fornisce alcun output. Tuttavia, è possibile avvisare padre del clic del mouse se viene creato con lo stile SS_NOTIFY.

Creare un controllo statico in due passaggi. In primo luogo, chiamare il costruttore per costruire il `CStatic` dell'oggetto, quindi chiamare il [Create](#create) funzione membro per creare il controllo statico e associarlo al `CStatic` oggetto.

Se si crea una `CStatic` oggetto all'interno di una finestra di dialogo (tramite una risorsa finestra di dialogo), il `CStatic` oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si crea un `CStatic` dell'oggetto all'interno di una finestra, è necessario anche eliminarla definitivamente. Oggetto `CStatic` oggetto creato nello stack interno di una finestra viene eliminato automaticamente. Se si crea il `CStatic` oggetto sull'heap tramite il **nuovi** funzione, è necessario chiamare **eliminare** sull'oggetto per eliminarla definitivamente al termine con esso.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CStatic`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="create"></a>  CStatic::Create

Crea il controllo statico di Windows e lo collega al `CStatic` oggetto.

```
virtual BOOL Create(
    LPCTSTR lpszText,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID = 0xffff);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Specifica il testo da inserire nel controllo. Se NULL, il testo non sarà visibile.

*dwStyle*<br/>
Specifica lo stile di finestra del controllo statico. Applicare qualsiasi combinazione di [stili del controllo statico](../../mfc/reference/styles-used-by-mfc.md#static-styles) al controllo.

*Rect*<br/>
Specifica la posizione e dimensioni del controllo statico. Può essere un' `RECT` struttura o un `CRect` oggetto.

*pParentWnd*<br/>
Specifica la `CStatic` finestra padre, in genere un `CDialog` oggetto. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo. del controllo statico

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Costruire un `CStatic` oggetto in due passaggi. In primo luogo, chiamare il costruttore `CStatic`, quindi chiamare `Create`, che crea il controllo statico di Windows e lo collega al `CStatic` oggetto.

Applicare la seguente istruzione [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a un controllo statico:

- WS_CHILD sempre

- In genere WS_VISIBLE

- WS_DISABLED raramente

Se si intende visualizzare una bitmap, cursori, icona o metafile del controllo statico, è necessario applicare uno dei seguenti [stili statici](../../mfc/reference/styles-used-by-mfc.md#static-styles):

- SS_BITMAP Usa questo stile per le immagini bitmap.

- SS_ICON usare questo stile di visualizzazione per icone e cursori.

- SS_ENHMETAFILE Usa questo stile per i metafile avanzati.

Per i cursori, bitmap o icone, è anche possibile usare lo stile seguente:

- Uso di SS_CENTERIMAGE per allineare al centro l'immagine nel controllo statico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#1](../../mfc/reference/codesnippet/cpp/cstatic-class_1.cpp)]

##  <a name="cstatic"></a>  CStatic::CStatic

Costruisce un oggetto `CStatic`.

```
CStatic();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#2](../../mfc/reference/codesnippet/cpp/cstatic-class_2.cpp)]

##  <a name="drawitem"></a>  CStatic::DrawItem

Chiamato dal framework per disegnare un controllo statico creato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Un puntatore a un [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) struttura. La struttura contiene informazioni sull'elemento da disegnare e il tipo di disegno necessaria.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per implementare la creazione per un proprietario `CStatic` oggetto (il controllo ha lo stile SS_OWNERDRAW).

##  <a name="getbitmap"></a>  CStatic::GetBitmap

Ottiene l'handle di bitmap, impostata in precedenza con [SetBitmap](#setbitmap), che viene associato `CStatic`.

```
HBITMAP GetBitmap() const;
```

### <a name="return-value"></a>Valore restituito

Handle alla bitmap corrente, oppure NULL se non è stata impostata alcuna immagine bitmap.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#3](../../mfc/reference/codesnippet/cpp/cstatic-class_3.cpp)]

##  <a name="getcursor"></a>  CStatic::GetCursor

Ottiene l'handle del cursore, impostato in precedenza con [SetCursor](#setcursor), che viene associato `CStatic`.

```
HCURSOR GetCursor();
```

### <a name="return-value"></a>Valore restituito

Handle per il cursore corrente, o NULL se non è stato impostato alcun cursore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#4](../../mfc/reference/codesnippet/cpp/cstatic-class_4.cpp)]

##  <a name="getenhmetafile"></a>  CStatic::GetEnhMetaFile

Ottiene l'handle del metafile avanzato, impostato in precedenza con [SetEnhMetafile](#setenhmetafile), che viene associato `CStatic`.

```
HENHMETAFILE GetEnhMetaFile() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il metafile avanzato corrente oppure NULL se non è stata impostata alcuna metafile avanzato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#5](../../mfc/reference/codesnippet/cpp/cstatic-class_5.cpp)]

##  <a name="geticon"></a>  CStatic::GetIcon

Ottiene l'handle dell'icona, impostato in precedenza con [SetIcon](#seticon), che viene associato `CStatic`.

```
HICON GetIcon() const;
```

### <a name="return-value"></a>Valore restituito

Handle per l'icona corrente, o NULL se non è stata impostata alcuna icona.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#6](../../mfc/reference/codesnippet/cpp/cstatic-class_6.cpp)]

##  <a name="setbitmap"></a>  CStatic::SetBitmap

Associa una nuova bitmap con il controllo statico.

```
HBITMAP SetBitmap(HBITMAP hBitmap);
```

### <a name="parameters"></a>Parametri

*hBitmap*<br/>
Handle di bitmap da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

L'handle della bitmap che era precedentemente associata il controllo statico o NULL se nessun bitmap è stata associata al controllo statico.

### <a name="remarks"></a>Note

La bitmap verrà disegnata automaticamente nel controllo statico. Per impostazione predefinita, verrà disegnata nell'angolo superiore sinistro e il controllo statico verrà ridimensionato alle dimensioni della bitmap.

È possibile usare vari finestra e stili del controllo statico, quali:

- SS_BITMAP utilizzare sempre questo stile per le immagini bitmap.

- Uso di SS_CENTERIMAGE per allineare al centro l'immagine nel controllo statico. Se l'immagine è superiore a quello del controllo statico, verrà ritagliato. Se sono inferiore a quello del controllo statico, lo spazio vuoto attorno all'immagine verrà compilato in base al colore del pixel nell'angolo superiore sinistro della bitmap.

- MFC fornisce la classe `CBitmap`, che è possibile usare quando si dispone di più con un'immagine bitmap più semplicemente chiamare Win32 funzione `LoadBitmap`. `CBitmap`, che contiene un tipo di oggetto GDI, viene usato spesso in collaborazione con `CStatic`, ovvero un `CWnd` classe utilizzata per la visualizzazione di un oggetto grafico come un controllo statico.

`CImage` è una classe ATL/MFC che consente di più facile lavorare con bitmap indipendente dalla periferica (DIB). Per altre informazioni, vedere [classe CImage](../../atl-mfc-shared/reference/cimage-class.md).

- Utilizzo tipico consiste nell'assegnare `CStatic::SetBitmap` un oggetto GDI restituito dall'operatore HBITMAP di un `CBitmap` o `CImage` oggetto. Il codice per eseguire questa operazione è simile alla riga seguente.

```
MyStaticControl.SetBitmap(HBITMAP(MyBitmap));
```
L'esempio seguente crea due `CStatic` oggetti sull'heap. Viene quindi caricato automaticamente una con un sistema bitmap `CBitmap::LoadOEMBitmap` e l'altro da un file usando `CImage::Load`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#3](../../mfc/reference/codesnippet/cpp/cstatic-class_3.cpp)]

##  <a name="setcursor"></a>  CStatic::SetCursor

Associa una nuova immagine cursore con il controllo statico.

```
HCURSOR SetCursor(HCURSOR hCursor);
```

### <a name="parameters"></a>Parametri

*hCursor*<br/>
Handle del cursore da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

L'handle del cursore precedentemente associato il controllo statico, o NULL se nessun cursore è stato associato al controllo statico.

### <a name="remarks"></a>Note

Il cursore verrà disegnato automaticamente nel controllo statico. Per impostazione predefinita, verrà disegnata nell'angolo superiore sinistro e sarà possibile ridimensionare il controllo statico per le dimensioni del cursore.

È possibile usare vari finestra e stili del controllo statico, incluse le seguenti:

- SS_ICON utilizzare sempre questo stile di visualizzazione per icone e cursori.

- Uso di SS_CENTERIMAGE per allineare al centro del controllo statico. Se l'immagine è superiore a quello del controllo statico, verrà ritagliato. Se sono inferiore a quello del controllo statico, lo spazio vuoto attorno all'immagine verrà inserito il colore di sfondo del controllo statico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#4](../../mfc/reference/codesnippet/cpp/cstatic-class_4.cpp)]

##  <a name="setenhmetafile"></a>  CStatic::SetEnhMetaFile

Associa il controllo statico di una nuova immagine del metafile avanzato.

```
HENHMETAFILE SetEnhMetaFile(HENHMETAFILE hMetaFile);
```

### <a name="parameters"></a>Parametri

*hMetaFile*<br/>
Handle del metafile avanzato da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

L'handle del metafile avanzato precedentemente associato il controllo statico, o NULL se nessun metafile avanzato è stata associata al controllo statico.

### <a name="remarks"></a>Note

Metafile avanzato verrà disegnato automaticamente nel controllo statico. Metafile avanzato viene ridimensionato per adattarsi alla dimensione del controllo statico.

È possibile usare vari finestra e stili del controllo statico, incluse le seguenti:

- SS_ENHMETAFILE utilizzare sempre questo stile di visualizzazione per enhanced metafile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#5](../../mfc/reference/codesnippet/cpp/cstatic-class_5.cpp)]

##  <a name="seticon"></a>  CStatic::SetIcon

Associa una nuova immagine icona con il controllo statico.

```
HICON SetIcon(HICON hIcon);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
Handle dell'icona da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

L'handle dell'icona precedentemente associato il controllo statico, o NULL se nessuna icona è stata associata al controllo statico.

### <a name="remarks"></a>Note

L'icona verrà disegnata automaticamente nel controllo statico. Per impostazione predefinita, verrà disegnata nell'angolo superiore sinistro e sarà possibile ridimensionare il controllo statico per le dimensioni dell'icona.

È possibile usare vari finestra e stili del controllo statico, incluse le seguenti:

- SS_ICON utilizzare sempre questo stile di visualizzazione per icone e cursori.

- Uso di SS_CENTERIMAGE per allineare al centro del controllo statico. Se l'immagine è superiore a quello del controllo statico, verrà ritagliato. Se sono inferiore a quello del controllo statico, lo spazio vuoto attorno all'immagine verrà inserito il colore di sfondo del controllo statico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#6](../../mfc/reference/codesnippet/cpp/cstatic-class_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
