---
title: Classe CStatic
ms.date: 11/04/2016
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
ms.openlocfilehash: fd7b6787b372e220a32770e19d54d149f5ba6934
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69502407"
---
# <a name="cstatic-class"></a>Classe CStatic

Fornisce la funzionalità di un controllo statico di Windows.

## <a name="syntax"></a>Sintassi

```
class CStatic : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CStatic:: CStatic](#cstatic)|Costruisce un oggetto `CStatic`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStatic:: create](#create)|Crea il controllo statico di Windows e lo collega all' `CStatic` oggetto.|
|[CStatic::D rawItem](#drawitem)|Eseguire l'override di per disegnare un controllo statico creato dal proprietario.|
|[CStatic::GetBitmap](#getbitmap)|Recupera l'handle della bitmap precedentemente impostata con la [bitmap](#setbitmap).|
|[CStatic:: GetCursor](#getcursor)|Recupera l'handle dell'immagine del cursore impostata in precedenza con il [cursore](#setcursor).|
|[CStatic:: GetEnhMetaFile](#getenhmetafile)|Recupera l'handle del metafile migliorato precedentemente impostato con [SetEnhMetaFile](#setenhmetafile).|
|[CStatic::GetIcon](#geticon)|Recupera l'handle dell'icona precedentemente impostata con l' [icona](#seticon)di visualizzazione.|
|[CStatic::SetBitmap](#setbitmap)|Specifica una bitmap da visualizzare nel controllo statico.|
|[CStatic:: secursor](#setcursor)|Specifica un'immagine del cursore da visualizzare nel controllo statico.|
|[CStatic::SetEnhMetaFile](#setenhmetafile)|Specifica un metafile migliorato da visualizzare nel controllo statico.|
|[CStatic::SetIcon](#seticon)|Specifica un'icona da visualizzare nel controllo statico.|

## <a name="remarks"></a>Note

Un controllo statico Visualizza una stringa di testo, box, rettangolo, icona, cursore, bitmap o Enhanced Metafile. Può essere usato per etichettare, box o separare altri controlli. Un controllo statico normalmente non accetta input e non fornisce alcun output. Tuttavia, può notificare al padre i clic del mouse se viene creato con lo stile SS_NOTIFY.

Creare un controllo statico in due passaggi. Chiamare innanzitutto il costruttore per costruire l' `CStatic` oggetto, quindi chiamare la funzione membro [create](#create) per creare il controllo statico e `CStatic` collegarlo all'oggetto.

Se si crea un `CStatic` oggetto in una finestra di dialogo (tramite una risorsa della finestra di `CStatic` dialogo), l'oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si crea un `CStatic` oggetto all'interno di una finestra, potrebbe essere necessario eliminarlo. Un `CStatic` oggetto creato nello stack all'interno di una finestra viene eliminato automaticamente. Se si crea l' `CStatic` oggetto nell'heap usando la **nuova** funzione, è necessario chiamare **Delete** nell'oggetto per eliminarlo al termine dell'operazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CStatic`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="create"></a>CStatic:: create

Crea il controllo statico di Windows e lo collega all' `CStatic` oggetto.

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
Specifica il testo da inserire nel controllo. Se è NULL, non verrà visualizzato alcun testo.

*dwStyle*<br/>
Specifica lo stile della finestra del controllo statico. Applicare qualsiasi combinazione di [stili del controllo statico](../../mfc/reference/styles-used-by-mfc.md#static-styles) al controllo.

*rect*<br/>
Specifica la posizione e le dimensioni del controllo statico. Può trattarsi di una `RECT` struttura o di `CRect` un oggetto.

*pParentWnd*<br/>
Specifica la `CStatic` finestra padre, in genere `CDialog` un oggetto. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo del controllo statico.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Costruire un `CStatic` oggetto in due passaggi. Chiamare innanzitutto il costruttore `CStatic`, quindi chiamare `Create`, che crea il controllo statico di Windows e lo `CStatic` collega all'oggetto.

Applicare gli [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a un controllo statico:

- WS_CHILD sempre

- WS_VISIBLE in genere

- WS_DISABLED raramente

Se si intende visualizzare una bitmap, un cursore, un'icona o un metafile nel controllo statico, sarà necessario applicare uno degli [stili statici](../../mfc/reference/styles-used-by-mfc.md#static-styles)seguenti:

- SS_BITMAP utilizzare questo stile per le bitmap.

- SS_ICON utilizzare questo stile per cursori e icone.

- SS_ENHMETAFILE utilizzare questo stile per i metafile avanzati.

Per i cursori, le bitmap o le icone, è anche possibile usare lo stile seguente:

- SS_CENTERIMAGE usare per centrare l'immagine nel controllo statico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#1](../../mfc/reference/codesnippet/cpp/cstatic-class_1.cpp)]

##  <a name="cstatic"></a>CStatic:: CStatic

Costruisce un oggetto `CStatic`.

```
CStatic();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#2](../../mfc/reference/codesnippet/cpp/cstatic-class_2.cpp)]

##  <a name="drawitem"></a>CStatic::D rawItem

Chiamata eseguita dal Framework per disegnare un controllo statico creato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) . La struttura contiene informazioni sull'elemento da disegnare e il tipo di disegno necessario.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per implementare il disegno per `CStatic` un oggetto creato dal proprietario (il controllo ha lo stile SS_OWNERDRAW).

##  <a name="getbitmap"></a>CStatic:: GetBitmap

Ottiene l'handle della bitmap, precedentemente impostata con la [bitmap](#setbitmap), associata a `CStatic`.

```
HBITMAP GetBitmap() const;
```

### <a name="return-value"></a>Valore restituito

Handle per la bitmap corrente o NULL se non è stata impostata alcuna bitmap.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#3](../../mfc/reference/codesnippet/cpp/cstatic-class_3.cpp)]

##  <a name="getcursor"></a>CStatic:: GetCursor

Ottiene l'handle del cursore, precedentemente impostato con il [cursore](#setcursor), associato a `CStatic`.

```
HCURSOR GetCursor();
```

### <a name="return-value"></a>Valore restituito

Handle per il cursore corrente o NULL se non è stato impostato alcun cursore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#4](../../mfc/reference/codesnippet/cpp/cstatic-class_4.cpp)]

##  <a name="getenhmetafile"></a>CStatic:: GetEnhMetaFile

Ottiene l'handle del metafile migliorato, precedentemente impostato con [SetEnhMetafile](#setenhmetafile), associato a `CStatic`.

```
HENHMETAFILE GetEnhMetaFile() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il metafile avanzato corrente o NULL se non è stato impostato alcun metafile avanzato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#5](../../mfc/reference/codesnippet/cpp/cstatic-class_5.cpp)]

##  <a name="geticon"></a>CStatic:: GetIcon

Ottiene l'handle dell'icona, impostata in precedenza con l' [icona](#seticon)a cui è associato `CStatic`.

```
HICON GetIcon() const;
```

### <a name="return-value"></a>Valore restituito

Handle per l'icona corrente o NULL se non è stata impostata alcuna icona.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#6](../../mfc/reference/codesnippet/cpp/cstatic-class_6.cpp)]

##  <a name="setbitmap"></a>  CStatic::SetBitmap

Associa una nuova bitmap al controllo statico.

```
HBITMAP SetBitmap(HBITMAP hBitmap);
```

### <a name="parameters"></a>Parametri

*hBitmap*<br/>
Handle della bitmap da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

Handle della bitmap associata in precedenza al controllo statico o NULL se non è stata associata alcuna bitmap al controllo statico.

### <a name="remarks"></a>Note

La bitmap verrà disegnata automaticamente nel controllo statico. Per impostazione predefinita, verrà disegnato nell'angolo superiore sinistro e il controllo statico verrà ridimensionato in base alle dimensioni della bitmap.

È possibile utilizzare vari stili del controllo statico e della finestra, inclusi i seguenti:

- SS_BITMAP utilizzare questo stile sempre per le bitmap.

- SS_CENTERIMAGE usare per centrare l'immagine nel controllo statico. Se l'immagine è più grande del controllo statico, verrà ritagliata. Se è più piccolo del controllo statico, lo spazio vuoto intorno all'immagine verrà riempito dal colore del pixel nell'angolo superiore sinistro della bitmap.

- MFC fornisce la classe `CBitmap`, che è possibile utilizzare quando è necessario eseguire altre operazioni con un'immagine bitmap anziché chiamare semplicemente la funzione `LoadBitmap`Win32. `CBitmap`, che contiene un tipo di oggetto GDI, viene spesso utilizzato in collaborazione con `CStatic`, ovvero una `CWnd` classe utilizzata per la visualizzazione di un oggetto grafico come controllo statico.

`CImage`è una classe ATL/MFC che consente di lavorare più facilmente con le bitmap indipendenti dal dispositivo (DIB). Per ulteriori informazioni, vedere [classe CImage](../../atl-mfc-shared/reference/cimage-class.md).

- L'utilizzo tipico consiste nel `CStatic::SetBitmap` fornire un oggetto GDI restituito dall'operatore HBITMAP di un `CBitmap` oggetto o `CImage` . Il codice per eseguire questa operazione è simile alla riga seguente.

```
MyStaticControl.SetBitmap(HBITMAP(MyBitmap));
```
Nell'esempio seguente vengono creati `CStatic` due oggetti nell'heap. Viene quindi caricato un oggetto con una bitmap di `CBitmap::LoadOEMBitmap` sistema usando e l'altro da un `CImage::Load`file usando.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#3](../../mfc/reference/codesnippet/cpp/cstatic-class_3.cpp)]

##  <a name="setcursor"></a>CStatic:: secursor

Associa una nuova immagine del cursore al controllo statico.

```
HCURSOR SetCursor(HCURSOR hCursor);
```

### <a name="parameters"></a>Parametri

*hCursor*<br/>
Handle del cursore da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

Handle del cursore associato in precedenza al controllo statico o NULL se al controllo statico non è associato alcun cursore.

### <a name="remarks"></a>Note

Il cursore verrà automaticamente disegnato nel controllo statico. Per impostazione predefinita, verrà disegnato nell'angolo superiore sinistro e il controllo statico verrà ridimensionato in base alle dimensioni del cursore.

È possibile utilizzare vari stili di finestra e di controllo statico, inclusi i seguenti:

- SS_ICON utilizzare questo stile sempre per cursori e icone.

- SS_CENTERIMAGE utilizzare per centrare il controllo statico. Se l'immagine è più grande del controllo statico, verrà ritagliata. Se è più piccolo del controllo statico, lo spazio vuoto intorno all'immagine verrà riempito con il colore di sfondo del controllo statico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#4](../../mfc/reference/codesnippet/cpp/cstatic-class_4.cpp)]

##  <a name="setenhmetafile"></a>CStatic:: SetEnhMetaFile

Associa una nuova immagine Metafile avanzata al controllo statico.

```
HENHMETAFILE SetEnhMetaFile(HENHMETAFILE hMetaFile);
```

### <a name="parameters"></a>Parametri

*hMetaFile*<br/>
Handle del metafile migliorato da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

Handle del metafile migliorato precedentemente associato al controllo statico o NULL se non è stato associato alcun metafile avanzato al controllo statico.

### <a name="remarks"></a>Note

Il metafile migliorato verrà automaticamente disegnato nel controllo statico. Il metafile migliorato viene ridimensionato per adattarsi alle dimensioni del controllo statico.

È possibile utilizzare vari stili di finestra e di controllo statico, inclusi i seguenti:

- SS_ENHMETAFILE usare questo stile sempre per i metafile avanzati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#5](../../mfc/reference/codesnippet/cpp/cstatic-class_5.cpp)]

##  <a name="seticon"></a>CStatic:: seicon

Associa una nuova immagine icona al controllo statico.

```
HICON SetIcon(HICON hIcon);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
Handle dell'icona da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

Handle dell'icona precedentemente associata al controllo statico oppure NULL se nessuna icona è stata associata al controllo statico.

### <a name="remarks"></a>Note

L'icona verrà disegnata automaticamente nel controllo statico. Per impostazione predefinita, verrà disegnato nell'angolo superiore sinistro e il controllo statico verrà ridimensionato in base alle dimensioni dell'icona.

È possibile utilizzare vari stili di finestra e di controllo statico, inclusi i seguenti:

- SS_ICON utilizzare questo stile sempre per cursori e icone.

- SS_CENTERIMAGE utilizzare per centrare il controllo statico. Se l'immagine è più grande del controllo statico, verrà ritagliata. Se è più piccolo del controllo statico, lo spazio vuoto intorno all'immagine verrà riempito con il colore di sfondo del controllo statico.

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
