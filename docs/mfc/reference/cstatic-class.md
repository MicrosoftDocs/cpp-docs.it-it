---
title: Classe CStatic | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStatic
dev_langs:
- C++
helpviewer_keywords:
- enhanced metafiles
- cursors, displaying
- static controls
- controls [MFC], static
- icons, displaying
- CStatic class
- enhanced metafiles, displaying
- bitmaps, displaying
ms.assetid: e7c94cd9-5ebd-428a-aa30-b3e51f8efb95
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 0209fad1b84b782cdec7927cb5a04e9bb3083d64
ms.lasthandoff: 02/24/2017

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
|[CStatic::Create](#create)|Crea il controllo statico di Windows e lo collega a di `CStatic` oggetto.|  
|[CStatic::DrawItem](#drawitem)|Eseguire l'override per disegnare un controllo statico disegnato dal proprietario.|  
|[CStatic::GetBitmap](#getbitmap)|Recupera l'handle di bitmap impostata in precedenza con [SetBitmap](#setbitmap).|  
|[CStatic::GetCursor](#getcursor)|Recupera l'handle dell'immagine del cursore sono impostato in precedenza con [SetCursor](#setcursor).|  
|[CStatic::GetEnhMetaFile](#getenhmetafile)|Recupera l'handle del metafile avanzato impostato in precedenza con [SetEnhMetaFile](#setenhmetafile).|  
|[CStatic::GetIcon](#geticon)|Recupera l'handle dell'icona impostato in precedenza con [SetIcon](#seticon).|  
|[CStatic::SetBitmap](#setbitmap)|Specifica una bitmap da visualizzare nel controllo statico.|  
|[CStatic::SetCursor](#setcursor)|Specifica un'immagine del cursore da visualizzare nel controllo statico.|  
|[CStatic::SetEnhMetaFile](#setenhmetafile)|Specifica un enhanced metafile da visualizzare nel controllo statico.|  
|[CStatic::SetIcon](#seticon)|Specifica l'icona da visualizzare nel controllo statico.|  
  
## <a name="remarks"></a>Note  
 Consente di visualizzare un controllo statico di una stringa di testo, casella, rettangolo, icona, cursore, bitmap o metafile avanzati. Può essere utilizzato per assegnare un'etichetta, casella o separare altri controlli. Un controllo statico in genere non accetta input e non fornisce alcun output. Tuttavia, è possibile segnalare padre clic del mouse se viene creato con **SS_NOTIFY** stile.  
  
 Creare un controllo statico in due passaggi. In primo luogo, chiamare il costruttore per costruire il `CStatic` dell'oggetto, quindi chiamare il [crea](#create) funzione membro per creare il controllo statico e associarlo a di `CStatic` oggetto.  
  
 Se si crea un `CStatic` oggetto all'interno di una finestra di dialogo (tramite una risorsa finestra di dialogo), il `CStatic` oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un `CStatic` dell'oggetto all'interno di una finestra, è necessario anche per eliminarlo. Oggetto `CStatic` oggetto creato nello stack interno di una finestra viene eliminato automaticamente. Se si crea il `CStatic` oggetto nell'heap mediante il **nuova** funzione, è necessario chiamare **eliminare** sull'oggetto per eliminarlo al termine con esso.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CStatic`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-namecreatea--cstaticcreate"></a><a name="create"></a>CStatic::Create  
 Crea il controllo statico di Windows e lo collega a di `CStatic` oggetto.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszText,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID = 0xffff);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Specifica il testo da inserire nel controllo. Se **NULL**, il testo non sarà visibile.  
  
 `dwStyle`  
 Specifica lo stile di finestra del controllo statico. Applicare qualsiasi combinazione di [degli stili del controllo statico](../../mfc/reference/static-styles.md) al controllo.  
  
 `rect`  
 Specifica la posizione e dimensioni del controllo statico. Può essere un `RECT` struttura o un `CRect` oggetto.  
  
 `pParentWnd`  
 Specifica il `CStatic` finestra padre, in genere un `CDialog` oggetto. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID di controllo. del controllo statico  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Costruire un `CStatic` oggetto in due passaggi. In primo luogo, chiamare il costruttore `CStatic`e quindi chiamare **crea**, che crea il controllo statico di Windows e lo collega a di `CStatic` oggetto.  
  
 Applicare la seguente istruzione [stili finestra](../../mfc/reference/window-styles.md) a un controllo statico:  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
 Se si intende visualizzare una bitmap, cursori, icona o metafile del controllo statico, è necessario applicare uno dei seguenti [stili statici](../../mfc/reference/static-styles.md):  
  
- **SS_BITMAP** utilizza questo stile di bitmap.  
  
- **SS_ICON** utilizza questo stile per le icone e cursori.  
  
- **SS_ENHMETAFILE** utilizza questo stile di metafile avanzati.  
  
 Per i cursori, bitmap o icone, è consigliabile utilizzare il seguente foglio di stile:  
  
- **SS_CENTERIMAGE** utilizzare per centrare l'immagine nel controllo statico.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatic n.&1;](../../mfc/reference/codesnippet/cpp/cstatic-class_1.cpp)]  
  
##  <a name="a-namecstatica--cstaticcstatic"></a><a name="cstatic"></a>CStatic::CStatic  
 Costruisce un oggetto `CStatic`.  
  
```  
CStatic();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatic n.&2;](../../mfc/reference/codesnippet/cpp/cstatic-class_2.cpp)]  
  
##  <a name="a-namedrawitema--cstaticdrawitem"></a><a name="drawitem"></a>CStatic::DrawItem  
 Chiamato dal framework per disegnare un controllo statico disegnato dal proprietario.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore a un [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) struttura. La struttura contiene informazioni relative all'elemento da disegnare e il tipo di disegno necessari.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per implementare la creazione per un proprietario **CStatic** oggetto (il controllo ha lo stile **SS_OWNERDRAW**).  
  
##  <a name="a-namegetbitmapa--cstaticgetbitmap"></a><a name="getbitmap"></a>CStatic::GetBitmap  
 Ottiene l'handle di bitmap, impostata in precedenza con [SetBitmap](#setbitmap), che è associata a `CStatic`.  
  
```  
HBITMAP GetBitmap() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per la bitmap corrente, o **NULL** se non è stata impostata alcuna bitmap.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatic n.&3;](../../mfc/reference/codesnippet/cpp/cstatic-class_3.cpp)]  
  
##  <a name="a-namegetcursora--cstaticgetcursor"></a><a name="getcursor"></a>CStatic::GetCursor  
 Ottiene l'handle del cursore, impostato in precedenza con [SetCursor](#setcursor), che è associata a `CStatic`.  
  
```  
HCURSOR GetCursor();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per il cursore corrente, o **NULL** se non è stato impostato alcun cursore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatic n.&4;](../../mfc/reference/codesnippet/cpp/cstatic-class_4.cpp)]  
  
##  <a name="a-namegetenhmetafilea--cstaticgetenhmetafile"></a><a name="getenhmetafile"></a>CStatic::GetEnhMetaFile  
 Ottiene l'handle del metafile avanzato, impostato in precedenza con [SetEnhMetafile](#setenhmetafile), che è associata a `CStatic`.  
  
```  
HENHMETAFILE GetEnhMetaFile() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per i metafile avanzati corrente, o **NULL** se non è stata impostata alcuna metafile avanzati.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatic n.&5;](../../mfc/reference/codesnippet/cpp/cstatic-class_5.cpp)]  
  
##  <a name="a-namegeticona--cstaticgeticon"></a><a name="geticon"></a>CStatic::GetIcon  
 Ottiene l'handle del set di icone, in precedenza con [SetIcon](#seticon), che è associata a `CStatic`.  
  
```  
HICON GetIcon() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per l'icona corrente, o **NULL** se non è stata impostata alcuna icona.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[6 NVC_MFC_CStatic](../../mfc/reference/codesnippet/cpp/cstatic-class_6.cpp)]  
  
##  <a name="a-namesetbitmapa--cstaticsetbitmap"></a><a name="setbitmap"></a>CStatic::SetBitmap  
 Associa il controllo statico di una nuova bitmap.  
  
```  
HBITMAP SetBitmap(HBITMAP hBitmap);
```  
  
### <a name="parameters"></a>Parametri  
 `hBitmap`  
 Handle della bitmap da disegnare nel controllo statico.  
  
### <a name="return-value"></a>Valore restituito  
 L'handle della bitmap che era precedentemente associata il controllo statico o `NULL` se nessuna bitmap è stata associata al controllo statico.  
  
### <a name="remarks"></a>Note  
 La bitmap verrà disegnata automaticamente nel controllo statico. Per impostazione predefinita, che verrà disegnata nell'angolo superiore sinistro e il controllo statico verrà ridimensionato alle dimensioni della bitmap.  
  
 È possibile utilizzare vari finestra e stili del controllo statico, quali:  
  
-   SS_BITMAP utilizzare sempre questo stile di bitmap.  
  
-   SS_CENTERIMAGE consente di centrare l'immagine nel controllo statico. Se l'immagine è più grande del controllo statico, verrà ritagliato. Se è più piccola del controllo statico, lo spazio vuoto intorno all'immagine verrà compilato in base al colore del pixel nell'angolo superiore sinistro della bitmap.  
  
-   MFC fornisce la classe `CBitmap`, che è possibile utilizzare quando si dispone di più con un'immagine bitmap di Win32 è sufficiente chiamare funzioni `LoadBitmap`. `CBitmap`, che contiene un tipo di oggetto GDI, viene spesso utilizzato in collaborazione con `CStatic`, ovvero un `CWnd` classe utilizzata per la visualizzazione di un oggetto grafico come controllo statico.  
  
 `CImage`è una classe ATL/MFC che consente di più facile lavorare con bitmap indipendente dalla periferica (DIB). Per ulteriori informazioni, vedere [CImage (classe)](../../atl-mfc-shared/reference/cimage-class.md).  
  
-   Utilizzo tipico consiste nell'assegnare `CStatic::SetBitmap` un oggetto GDI restituito dall'operatore HBITMAP di un `CBitmap` o `CImage` oggetto. Il codice per eseguire questa operazione è simile al seguente.  
  
```  
MyStaticControl.SetBitmap(HBITMAP(MyBitmap));
```  
Nell'esempio seguente vengono create due `CStatic` oggetti sull'heap. Viene quindi caricato automaticamente una con un sistema bitmap `CBitmap::LoadOEMBitmap` e l'altro in un file utilizzando `CImage::Load`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatic n.&3;](../../mfc/reference/codesnippet/cpp/cstatic-class_3.cpp)]  
  
##  <a name="a-namesetcursora--cstaticsetcursor"></a><a name="setcursor"></a>CStatic::SetCursor  
 Associa il controllo statico di una nuova immagine del cursore.  
  
```  
HCURSOR SetCursor(HCURSOR hCursor);
```  
  
### <a name="parameters"></a>Parametri  
 `hCursor`  
 Handle del cursore da disegnare nel controllo statico.  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del cursore in precedenza associato al controllo statico, o **NULL** se nessun cursore è stato associato al controllo statico.  
  
### <a name="remarks"></a>Note  
 Il cursore verrà disegnato automaticamente nel controllo statico. Per impostazione predefinita, che verrà disegnata nell'angolo superiore sinistro e il controllo statico verrà ridimensionato alle dimensioni del cursore.  
  
 È possibile utilizzare vari finestra e stili del controllo statico, inclusi i seguenti:  
  
- **SS_ICON** utilizza sempre questo stile per le icone e cursori.  
  
- **SS_CENTERIMAGE** utilizzare per allineare al centro del controllo statico. Se l'immagine è più grande del controllo statico, verrà ritagliato. Se è più piccola del controllo statico, il colore di sfondo del controllo statico verrà inserito lo spazio vuoto intorno all'immagine.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatic n.&4;](../../mfc/reference/codesnippet/cpp/cstatic-class_4.cpp)]  
  
##  <a name="a-namesetenhmetafilea--cstaticsetenhmetafile"></a><a name="setenhmetafile"></a>CStatic::SetEnhMetaFile  
 Associa il controllo statico di una nuova immagine di metafile avanzati.  
  
```  
HENHMETAFILE SetEnhMetaFile(HENHMETAFILE hMetaFile);
```  
  
### <a name="parameters"></a>Parametri  
 `hMetaFile`  
 Handle del metafile avanzato da disegnare nel controllo statico.  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del metafile avanzato in precedenza associato al controllo statico, o **NULL** se è stato associato al controllo statico non metafile avanzati.  
  
### <a name="remarks"></a>Note  
 Metafile avanzato verrà disegnato automaticamente nel controllo statico. Metafile avanzato viene ridimensionato per adattarsi alle dimensioni del controllo statico.  
  
 È possibile utilizzare vari finestra e stili del controllo statico, inclusi i seguenti:  
  
- **SS_ENHMETAFILE** utilizza sempre questo stile di metafile avanzati.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatic n.&5;](../../mfc/reference/codesnippet/cpp/cstatic-class_5.cpp)]  
  
##  <a name="a-nameseticona--cstaticseticon"></a><a name="seticon"></a>CStatic::SetIcon  
 Associa il controllo statico di una nuova immagine dell'icona.  
  
```  
HICON SetIcon(HICON hIcon);
```  
  
### <a name="parameters"></a>Parametri  
 `hIcon`  
 Handle dell'icona da disegnare nel controllo statico.  
  
### <a name="return-value"></a>Valore restituito  
 L'handle dell'icona in precedenza associato al controllo statico, o **NULL** se nessuna icona di stata associata al controllo statico.  
  
### <a name="remarks"></a>Note  
 L'icona verrà disegnata automaticamente nel controllo statico. Per impostazione predefinita, che verrà disegnata nell'angolo superiore sinistro e il controllo statico verrà ridimensionato alle dimensioni dell'icona.  
  
 È possibile utilizzare vari finestra e stili del controllo statico, inclusi i seguenti:  
  
- **SS_ICON** utilizza sempre questo stile per le icone e cursori.  
  
- **SS_CENTERIMAGE** utilizzare per allineare al centro del controllo statico. Se l'immagine è più grande del controllo statico, verrà ritagliato. Se è più piccola del controllo statico, il colore di sfondo del controllo statico verrà inserito lo spazio vuoto intorno all'immagine.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[6 NVC_MFC_CStatic](../../mfc/reference/codesnippet/cpp/cstatic-class_6.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [CButton (classe)](../../mfc/reference/cbutton-class.md)   
 [CComboBox (classe)](../../mfc/reference/ccombobox-class.md)   
 [Classe CEdit](../../mfc/reference/cedit-class.md)   
 [CListBox (classe)](../../mfc/reference/clistbox-class.md)   
 [Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)   
 [CDialog (classe)](../../mfc/reference/cdialog-class.md)

