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
ms.openlocfilehash: e5c3705c0aa2fd90e73cb54ba5a97c252ed2cf83
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371636"
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
|[Stati che siclano::CStaticCStatic::CStatic](#cstatic)|Costruisce un oggetto `CStatic`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Stati che determinano il nome di dati CStatic::Create](#create)|Crea il controllo statico di Windows `CStatic` e lo associa all'oggetto.|
|[Proprietà Static::DrawItem](#drawitem)|Eseguire l'override per disegnare un controllo statico disegnato dal proprietario.|
|[Proprietà Static::GetBitmap](#getbitmap)|Recupera l'handle della bitmap precedentemente impostato con [SetBitmap](#setbitmap).|
|[Colonna Static::GetCursorCStatic::GetCursor](#getcursor)|Recupera l'handle dell'immagine del cursore precedentemente impostato con [SetCursor](#setcursor).|
|[Metodo CStatic::GetEnhMetaFile](#getenhmetafile)|Recupera l'handle del metafile avanzato precedentemente impostato con [SetEnhMetaFile](#setenhmetafile).|
|[Stati che siri a chiave::GetIconCStatic::GetIcon](#geticon)|Recupera l'handle dell'icona precedentemente impostata con [SetIcon](#seticon).|
|[Proprietà Static::SetBitmap :SetBitmap.CStatic::SetBitmap](#setbitmap)|Specifica una bitmap da visualizzare nel controllo statico.|
|[CStatic::SetCursor](#setcursor)|Specifica un'immagine del cursore da visualizzare nel controllo statico.|
|[Metodo CStatic::SetEnhMetaFile](#setenhmetafile)|Specifica un metafile avanzato da visualizzare nel controllo statico.|
|[Proprietà CStatic::SetIcon](#seticon)|Specifica un'icona da visualizzare nel controllo statico.|

## <a name="remarks"></a>Osservazioni

Un controllo statico visualizza una stringa di testo, una casella, un rettangolo, un'icona, un cursore, una bitmap o un metafile avanzato. Può essere utilizzato per etichettare, box o separare altri controlli. Un controllo statico normalmente non accetta input e non fornisce alcun output; tuttavia, può notificare all'elemento padre i clic del mouse se viene creato con SS_NOTIFY stile.

Creare un controllo statico in due passaggi. Chiamare innanzitutto il costruttore per costruire l'oggetto, `CStatic` quindi chiamare la funzione membro [Create](#create) per creare il controllo statico e associarlo all'oggetto. `CStatic`

Se si `CStatic` crea un oggetto all'interno di `CStatic` una finestra di dialogo (tramite una risorsa finestra di dialogo), l'oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si `CStatic` crea un oggetto all'interno di una finestra, potrebbe anche essere necessario distruggerlo. Un `CStatic` oggetto creato nello stack all'interno di una finestra viene eliminato automaticamente. Se si `CStatic` crea l'oggetto nell'heap utilizzando la **nuova** funzione, è necessario chiamare **delete** sull'oggetto per eliminarlo al termine dell'operazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CStatic`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cstaticcreate"></a><a name="create"></a>Stati che determinano il nome di dati CStatic::Create

Crea il controllo statico di Windows `CStatic` e lo associa all'oggetto.

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
Specifica il testo da inserire nel controllo. Se NULL, nessun testo sarà visibile.

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile della finestra del controllo statico. Applicare qualsiasi combinazione di stili di [controllo statici](../../mfc/reference/styles-used-by-mfc.md#static-styles) al controllo.

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo statico. Può essere una `RECT` struttura `CRect` o un oggetto.

*pParentWnd (informazioni in due)*<br/>
Specifica la `CStatic` finestra padre, `CDialog` in genere un oggetto. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo statico.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire `CStatic` un oggetto in due passaggi. Chiamare innanzitutto `CStatic`il costruttore `Create`, quindi chiamare , che crea il `CStatic` controllo statico di Windows e lo associa all'oggetto .

Applicare i seguenti stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a un controllo statico:

- WS_CHILD sempre

- WS_VISIBLE di solito

- WS_DISABLED Raramente

Se si intende visualizzare una bitmap, un cursore, un'icona o un metafile nel controllo statico, è necessario applicare uno dei seguenti [stili statici:](../../mfc/reference/styles-used-by-mfc.md#static-styles)

- SS_BITMAP Utilizzare questo stile per le bitmap.

- SS_ICON Utilizzare questo stile per i cursori e le icone.

- SS_ENHMETAFILE Utilizzare questo stile per i metafile avanzati.

Per i cursori, le bitmap o le icone, è anche possibile utilizzare il seguente stile:

- SS_CENTERIMAGE Utilizzare per centrare l'immagine nel controllo statico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#1](../../mfc/reference/codesnippet/cpp/cstatic-class_1.cpp)]

## <a name="cstaticcstatic"></a><a name="cstatic"></a>Stati che siclano::CStaticCStatic::CStatic

Costruisce un oggetto `CStatic`.

```
CStatic();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#2](../../mfc/reference/codesnippet/cpp/cstatic-class_2.cpp)]

## <a name="cstaticdrawitem"></a><a name="drawitem"></a>Proprietà Static::DrawItem

Chiamato dal framework per disegnare un controllo statico disegnato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDrawItemStruct (informazioni in base a lpDrawItemStruct)*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT.](/windows/win32/api/winuser/ns-winuser-drawitemstruct) La struttura contiene informazioni sull'elemento da disegnare e sul tipo di disegno richiesto.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione `CStatic` per implementare il disegno per un oggetto disegnato dal proprietario (il controllo ha lo stile SS_OWNERDRAW).

## <a name="cstaticgetbitmap"></a><a name="getbitmap"></a>Proprietà Static::GetBitmap

Ottiene l'handle della bitmap, precedentemente impostata `CStatic`con [SetBitmap](#setbitmap), associata a .

```
HBITMAP GetBitmap() const;
```

### <a name="return-value"></a>Valore restituito

Handle per la bitmap corrente oppure NULL se non è stata impostata alcuna bitmap.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#3](../../mfc/reference/codesnippet/cpp/cstatic-class_3.cpp)]

## <a name="cstaticgetcursor"></a><a name="getcursor"></a>Colonna Static::GetCursorCStatic::GetCursor

Ottiene l'handle del cursore, precedentemente impostato `CStatic`con [SetCursor](#setcursor), associato a .

```
HCURSOR GetCursor();
```

### <a name="return-value"></a>Valore restituito

Un handle per il cursore corrente o NULL se non è stato impostato alcun cursore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#4](../../mfc/reference/codesnippet/cpp/cstatic-class_4.cpp)]

## <a name="cstaticgetenhmetafile"></a><a name="getenhmetafile"></a>Metodo CStatic::GetEnhMetaFile

Ottiene l'handle del metafile avanzato, precedentemente impostato con [SetEnhMetafile](#setenhmetafile), associato `CStatic`a .

```
HENHMETAFILE GetEnhMetaFile() const;
```

### <a name="return-value"></a>Valore restituito

Un handle per il metafile avanzato corrente oppure NULL se non è stato impostato alcun metafile avanzato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#5](../../mfc/reference/codesnippet/cpp/cstatic-class_5.cpp)]

## <a name="cstaticgeticon"></a><a name="geticon"></a>Stati che siri a chiave::GetIconCStatic::GetIcon

Ottiene l'handle dell'icona, precedentemente impostato con [SetIcon](#seticon), associato `CStatic`a .

```
HICON GetIcon() const;
```

### <a name="return-value"></a>Valore restituito

Handle per l'icona corrente oppure NULL se non è stata impostata alcuna icona.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#6](../../mfc/reference/codesnippet/cpp/cstatic-class_6.cpp)]

## <a name="cstaticsetbitmap"></a><a name="setbitmap"></a>Proprietà Static::SetBitmap :SetBitmap.CStatic::SetBitmap

Associa una nuova bitmap al controllo statico.

```
HBITMAP SetBitmap(HBITMAP hBitmap);
```

### <a name="parameters"></a>Parametri

*Hbitmap*<br/>
Handle della bitmap da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

Handle della bitmap precedentemente associata al controllo statico oppure NULL se al controllo statico non è stata associata alcuna bitmap.

### <a name="remarks"></a>Osservazioni

La bitmap verrà disegnata automaticamente nel controllo statico. Per impostazione predefinita, verrà disegnato nell'angolo superiore sinistro e il controllo statico verrà ridimensionato in base alle dimensioni della bitmap.

È possibile utilizzare vari stili di finestra e di controllo statico, tra cui:You can use various window and static control styles, including these:

- SS_BITMAP Utilizzare questo stile sempre per le bitmap.

- SS_CENTERIMAGE Utilizzare per centrare l'immagine nel controllo statico. Se l'immagine è più grande del controllo statico, verrà ritagliata. Se è più piccolo del controllo statico, lo spazio vuoto intorno all'immagine verrà riempito dal colore del pixel nell'angolo superiore sinistro della bitmap.

- MFC fornisce `CBitmap`la classe , che è possibile utilizzare quando è necessario eseguire altre `LoadBitmap`azioni con un'immagine bitmap che chiamare semplicemente la funzione Win32 . `CBitmap`, che contiene un tipo di oggetto GDI, viene spesso utilizzato in collaborazione con `CStatic`, ovvero una `CWnd` classe utilizzata per la visualizzazione di un oggetto grafico come controllo statico.

`CImage`è una classe ATL/MFC che consente di utilizzare più facilmente le bitmap indipendenti dal dispositivo (DIB). Per ulteriori informazioni, vedere [Classe CImage](../../atl-mfc-shared/reference/cimage-class.md).

- L'utilizzo tipico `CStatic::SetBitmap` consiste nel fornire un oggetto GDI restituito `CBitmap` `CImage` dall'operatore HBITMAP di un oggetto o . Il codice per eseguire questa operazione è simile alla riga seguente.

```
MyStaticControl.SetBitmap(HBITMAP(MyBitmap));
```

Nell'esempio seguente `CStatic` vengono creati due oggetti nell'heap. Viene quindi caricata una `CBitmap::LoadOEMBitmap` con una bitmap di `CImage::Load`sistema utilizzando e l'altra da un file utilizzando .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#3](../../mfc/reference/codesnippet/cpp/cstatic-class_3.cpp)]

## <a name="cstaticsetcursor"></a><a name="setcursor"></a>CStatic::SetCursor

Associa una nuova immagine del cursore al controllo statico.

```
HCURSOR SetCursor(HCURSOR hCursor);
```

### <a name="parameters"></a>Parametri

*hCursore (cursore)*<br/>
Handle del cursore da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

Handle del cursore precedentemente associato al controllo statico o NULL se al controllo static non è stato associato alcun cursore.

### <a name="remarks"></a>Osservazioni

Il cursore verrà disegnato automaticamente nel controllo statico. Per impostazione predefinita, verrà disegnato nell'angolo superiore sinistro e il controllo statico verrà ridimensionato in base alle dimensioni del cursore.

È possibile utilizzare vari stili di finestra e di controllo statico, inclusi i seguenti:

- SS_ICON Utilizzare questo stile sempre per i cursori e le icone.

- SS_CENTERIMAGE Utilizzare per centrare il controllo statico. Se l'immagine è più grande del controllo statico, verrà ritagliata. Se è più piccolo del controllo statico, lo spazio vuoto intorno all'immagine verrà riempito con il colore di sfondo del controllo statico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#4](../../mfc/reference/codesnippet/cpp/cstatic-class_4.cpp)]

## <a name="cstaticsetenhmetafile"></a><a name="setenhmetafile"></a>Metodo CStatic::SetEnhMetaFile

Associa una nuova immagine metafile avanzata al controllo statico.

```
HENHMETAFILE SetEnhMetaFile(HENHMETAFILE hMetaFile);
```

### <a name="parameters"></a>Parametri

*hMetaFile (file in cui hometaFile)*<br/>
Handle del metafile avanzato da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

Handle del metafile avanzato precedentemente associato al controllo statico oppure NULL se al controllo statico non è stato associato alcun metafile avanzato.

### <a name="remarks"></a>Osservazioni

Il metafile avanzato verrà disegnato automaticamente nel controllo statico. Il metafile avanzato viene ridimensionato per adattarsi alle dimensioni del controllo statico.

È possibile utilizzare vari stili di finestra e di controllo statico, inclusi i seguenti:

- SS_ENHMETAFILE Utilizzare questo stile sempre per i metafile avanzati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#5](../../mfc/reference/codesnippet/cpp/cstatic-class_5.cpp)]

## <a name="cstaticseticon"></a><a name="seticon"></a>Proprietà CStatic::SetIcon

Associa una nuova immagine dell'icona al controllo statico.

```
HICON SetIcon(HICON hIcon);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
Handle dell'icona da disegnare nel controllo statico.

### <a name="return-value"></a>Valore restituito

Handle dell'icona precedentemente associata al controllo statico oppure NULL se al controllo statico non è stata associata alcuna icona.

### <a name="remarks"></a>Osservazioni

L'icona verrà disegnata automaticamente nel controllo statico. Per impostazione predefinita, verrà disegnato nell'angolo superiore sinistro e il controllo statico verrà ridimensionato in base alle dimensioni dell'icona.

È possibile utilizzare vari stili di finestra e di controllo statico, inclusi i seguenti:

- SS_ICON Utilizzare questo stile sempre per i cursori e le icone.

- SS_CENTERIMAGE Utilizzare per centrare il controllo statico. Se l'immagine è più grande del controllo statico, verrà ritagliata. Se è più piccolo del controllo statico, lo spazio vuoto intorno all'immagine verrà riempito con il colore di sfondo del controllo statico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CStatic#6](../../mfc/reference/codesnippet/cpp/cstatic-class_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
