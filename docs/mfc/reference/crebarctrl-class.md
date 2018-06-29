---
title: CReBarCtrl (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CReBarCtrl
- AFXCMN/CReBarCtrl
- AFXCMN/CReBarCtrl::CReBarCtrl
- AFXCMN/CReBarCtrl::BeginDrag
- AFXCMN/CReBarCtrl::Create
- AFXCMN/CReBarCtrl::CreateEx
- AFXCMN/CReBarCtrl::DeleteBand
- AFXCMN/CReBarCtrl::DragMove
- AFXCMN/CReBarCtrl::EndDrag
- AFXCMN/CReBarCtrl::GetBandBorders
- AFXCMN/CReBarCtrl::GetBandCount
- AFXCMN/CReBarCtrl::GetBandInfo
- AFXCMN/CReBarCtrl::GetBandMargins
- AFXCMN/CReBarCtrl::GetBarHeight
- AFXCMN/CReBarCtrl::GetBarInfo
- AFXCMN/CReBarCtrl::GetBkColor
- AFXCMN/CReBarCtrl::GetColorScheme
- AFXCMN/CReBarCtrl::GetDropTarget
- AFXCMN/CReBarCtrl::GetExtendedStyle
- AFXCMN/CReBarCtrl::GetImageList
- AFXCMN/CReBarCtrl::GetPalette
- AFXCMN/CReBarCtrl::GetRect
- AFXCMN/CReBarCtrl::GetRowCount
- AFXCMN/CReBarCtrl::GetRowHeight
- AFXCMN/CReBarCtrl::GetTextColor
- AFXCMN/CReBarCtrl::GetToolTips
- AFXCMN/CReBarCtrl::HitTest
- AFXCMN/CReBarCtrl::IDToIndex
- AFXCMN/CReBarCtrl::InsertBand
- AFXCMN/CReBarCtrl::MaximizeBand
- AFXCMN/CReBarCtrl::MinimizeBand
- AFXCMN/CReBarCtrl::MoveBand
- AFXCMN/CReBarCtrl::PushChevron
- AFXCMN/CReBarCtrl::RestoreBand
- AFXCMN/CReBarCtrl::SetBandInfo
- AFXCMN/CReBarCtrl::SetBandWidth
- AFXCMN/CReBarCtrl::SetBarInfo
- AFXCMN/CReBarCtrl::SetBkColor
- AFXCMN/CReBarCtrl::SetColorScheme
- AFXCMN/CReBarCtrl::SetExtendedStyle
- AFXCMN/CReBarCtrl::SetImageList
- AFXCMN/CReBarCtrl::SetOwner
- AFXCMN/CReBarCtrl::SetPalette
- AFXCMN/CReBarCtrl::SetTextColor
- AFXCMN/CReBarCtrl::SetToolTips
- AFXCMN/CReBarCtrl::SetWindowTheme
- AFXCMN/CReBarCtrl::ShowBand
- AFXCMN/CReBarCtrl::SizeToRect
dev_langs:
- C++
helpviewer_keywords:
- CReBarCtrl [MFC], CReBarCtrl
- CReBarCtrl [MFC], BeginDrag
- CReBarCtrl [MFC], Create
- CReBarCtrl [MFC], CreateEx
- CReBarCtrl [MFC], DeleteBand
- CReBarCtrl [MFC], DragMove
- CReBarCtrl [MFC], EndDrag
- CReBarCtrl [MFC], GetBandBorders
- CReBarCtrl [MFC], GetBandCount
- CReBarCtrl [MFC], GetBandInfo
- CReBarCtrl [MFC], GetBandMargins
- CReBarCtrl [MFC], GetBarHeight
- CReBarCtrl [MFC], GetBarInfo
- CReBarCtrl [MFC], GetBkColor
- CReBarCtrl [MFC], GetColorScheme
- CReBarCtrl [MFC], GetDropTarget
- CReBarCtrl [MFC], GetExtendedStyle
- CReBarCtrl [MFC], GetImageList
- CReBarCtrl [MFC], GetPalette
- CReBarCtrl [MFC], GetRect
- CReBarCtrl [MFC], GetRowCount
- CReBarCtrl [MFC], GetRowHeight
- CReBarCtrl [MFC], GetTextColor
- CReBarCtrl [MFC], GetToolTips
- CReBarCtrl [MFC], HitTest
- CReBarCtrl [MFC], IDToIndex
- CReBarCtrl [MFC], InsertBand
- CReBarCtrl [MFC], MaximizeBand
- CReBarCtrl [MFC], MinimizeBand
- CReBarCtrl [MFC], MoveBand
- CReBarCtrl [MFC], PushChevron
- CReBarCtrl [MFC], RestoreBand
- CReBarCtrl [MFC], SetBandInfo
- CReBarCtrl [MFC], SetBandWidth
- CReBarCtrl [MFC], SetBarInfo
- CReBarCtrl [MFC], SetBkColor
- CReBarCtrl [MFC], SetColorScheme
- CReBarCtrl [MFC], SetExtendedStyle
- CReBarCtrl [MFC], SetImageList
- CReBarCtrl [MFC], SetOwner
- CReBarCtrl [MFC], SetPalette
- CReBarCtrl [MFC], SetTextColor
- CReBarCtrl [MFC], SetToolTips
- CReBarCtrl [MFC], SetWindowTheme
- CReBarCtrl [MFC], ShowBand
- CReBarCtrl [MFC], SizeToRect
ms.assetid: 154570d7-e48c-425d-8c7e-c64542bcb4cc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 85a3c51f5c59b510e1024cc5f363096952c0f35a
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37079462"
---
# <a name="crebarctrl-class"></a>CReBarCtrl (classe)
Incapsula la funzionalità di un controllo Rebar, ovvero un contenitore per una finestra figlio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CReBarCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CReBarCtrl::CReBarCtrl](#crebarctrl)|Costruisce un oggetto `CReBarCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CReBarCtrl::BeginDrag](#begindrag)|Inserisce il controllo rebar nella modalità di trascinamento e rilascio.|  
|[CReBarCtrl::Create](#create)|Crea il controllo rebar e lo collega al `CReBarCtrl` oggetto.|  
|[CReBarCtrl::CreateEx](#createex)|Crea un controllo rebar con gli stili estesi di Windows specificati e lo collega a un `CReBarCtrl` oggetto.|  
|[CReBarCtrl::DeleteBand](#deleteband)|Elimina una banda da un controllo rebar.|  
|[CReBarCtrl::DragMove](#dragmove)|Aggiorna la posizione di trascinamento del controllo rebar dopo una chiamata a `BeginDrag`.|  
|[CReBarCtrl::EndDrag](#enddrag)|Termina l'operazione di trascinamento e rilascio del controllo rebar.|  
|[CReBarCtrl::GetBandBorders](#getbandborders)|Recupera i bordi di un fuori banda.|  
|[CReBarCtrl::GetBandCount](#getbandcount)|Recupera il conteggio delle bande attualmente presente nel controllo rebar.|  
|[CReBarCtrl::GetBandInfo](#getbandinfo)|Recupera informazioni su una banda specificata in un controllo rebar.|  
|[CReBarCtrl::GetBandMargins](#getbandmargins)|Recupera i margini di un fuori banda.|  
|[CReBarCtrl::GetBarHeight](#getbarheight)|Recupera l'altezza del controllo rebar.|  
|[CReBarCtrl::GetBarInfo](#getbarinfo)|Recupera le informazioni sul controllo rebar e Usa l'elenco di immagini.|  
|[CReBarCtrl::GetBkColor](#getbkcolor)|Recupera il colore di sfondo predefinito di un controllo rebar.|  
|[CReBarCtrl::GetColorScheme](#getcolorscheme)|Recupera il [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) struttura associato al controllo rebar.|  
|[CReBarCtrl::GetDropTarget](#getdroptarget)|Recupera un controllo rebar `IDropTarget` puntatore a interfaccia.|  
|[CReBarCtrl::GetExtendedStyle](#getextendedstyle)|Ottiene lo stile esteso del controllo rebar corrente.|  
|[CReBarCtrl::GetImageList](#getimagelist)|Recupera l'elenco di immagini associato a un controllo rebar.|  
|[CReBarCtrl::GetPalette](#getpalette)|Recupera tavolozza corrente del controllo rebar.|  
|[CReBarCtrl::GetRect](#getrect)|Recupera il rettangolo di delimitazione per un determinato fuori banda in un controllo rebar.|  
|[CReBarCtrl::GetRowCount](#getrowcount)|Recupera il numero di righe fuori banda in un controllo rebar.|  
|[CReBarCtrl::GetRowHeight](#getrowheight)|Recupera l'altezza di una riga specificata in un controllo rebar.|  
|[CReBarCtrl::GetTextColor](#gettextcolor)|Recupera colore del testo predefinito di un controllo rebar.|  
|[CReBarCtrl::GetToolTips](#gettooltips)|Recupera l'handle a qualsiasi controllo descrizione comando associato al controllo rebar.|  
|[CReBarCtrl::HitTest](#hittest)|Determina quale parte di un controllo rebar band se non è un punto specificato sullo schermo, un controllo rebar band esiste a quel punto.|  
|[CReBarCtrl::IDToIndex](#idtoindex)|Converte un identificatore fuori banda (ID) in un indice fuori banda in un controllo rebar.|  
|[CReBarCtrl::InsertBand](#insertband)|Inserisce una nuovo fuori banda in un controllo rebar.|  
|[CReBarCtrl::MaximizeBand](#maximizeband)|Ridimensiona una banda in un controllo rebar alle dimensioni massime.|  
|[CReBarCtrl::MinimizeBand](#minimizeband)|Ridimensiona una banda in un controllo rebar alle sue dimensioni più piccolo.|  
|[CReBarCtrl::MoveBand](#moveband)|Sposta una banda da un indice a un altro.|  
|[CReBarCtrl::PushChevron](#pushchevron)|A livello di codice inserisce una freccia di espansione.|  
|[CReBarCtrl::RestoreBand](#restoreband)|Ridimensiona una banda in un controllo rebar alle sue dimensioni ideali.|  
|[CReBarCtrl::SetBandInfo](#setbandinfo)|Imposta le caratteristiche di una banda esistente in un controllo rebar.|  
|[CReBarCtrl::SetBandWidth](#setbandwidth)|Imposta la larghezza della banda di ancorato specificata nel controllo rebar corrente.|  
|[CReBarCtrl::SetBarInfo](#setbarinfo)|Imposta le caratteristiche di un controllo rebar.|  
|[CReBarCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo predefinito di un controllo rebar.|  
|[CReBarCtrl::SetColorScheme](#setcolorscheme)|Imposta la combinazione colori per i pulsanti su un controllo rebar.|  
|[CReBarCtrl::SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi per il controllo rebar corrente.|  
|[CReBarCtrl::SetImageList](#setimagelist)|Imposta l'elenco di immagini di un controllo rebar.|  
|[CReBarCtrl::SetOwner](#setowner)|Imposta finestra proprietaria di un controllo rebar.|  
|[CReBarCtrl::SetPalette](#setpalette)|Imposta tavolozza corrente del controllo rebar.|  
|[CReBarCtrl::SetTextColor](#settextcolor)|Imposta colore del testo predefinito di un controllo rebar.|  
|[CReBarCtrl::SetToolTips](#settooltips)|Associa un controllo descrizione comando con il controllo rebar.|  
|[CReBarCtrl::SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione del controllo rebar.|  
|[CReBarCtrl::ShowBand](#showband)|Mostra o nasconde una banda specificata in un controllo rebar.|  
|[CReBarCtrl::SizeToRect](#sizetorect)|Si adatta a un controllo rebar a un rettangolo specificato.|  
  
## <a name="remarks"></a>Note  
 L'applicazione in cui si trova il controllo rebar assegna la finestra figlio contenuta dal controllo rebar per il controllo rebar band. La finestra figlio viene in genere un altro controllo comune.  
  
 Rebar (controlli) contengono una o più bande. Ogni band può contenere una combinazione di una barra verticale di ridimensionamento, una bitmap, un'etichetta di testo e una finestra figlio. La banda può contenere uno solo di ognuno di questi elementi.  
  
 Il controllo rebar può visualizzare la finestra figlio su una bitmap specificata in background. Tutte le bande controllo rebar possono essere ridimensionate, ad eccezione di quelli che usano il **RBBS_FIXEDSIZE** stile. Quando si riposizionare o si ridimensiona un controllo Rebar, il controllo rebar gestisce le dimensioni e posizione della finestra figlio assegnata a tale fuori banda. Per ridimensionare o modificare l'ordine delle bande all'interno del controllo, fare clic e trascinare la barra di spostamento della banda.  
  
 La figura seguente mostra un controllo rebar con tre bande:  
  
-   Fuori banda 0 contiene un controllo barra degli strumenti flat, trasparente.  
  
-   Fuori banda 1 contiene entrambi i pulsanti a discesa trasparente standard e trasparente.  
  
-   Fuori banda 2 contiene quattro pulsanti standard e una casella combinata.  
  
     ![Esempio di menu Rebar](../../mfc/reference/media/vc4scc1.gif "vc4scc1")  
  
## <a name="rebar-control"></a>Controllo Rebar  
 Rebar controlli supportano:  
  
-   Elenchi di immagini.  
  
-   Gestione dei messaggi.  
  
-   Funzionalità di disegno personalizzato.  
  
-   Una varietà di stili del controllo oltre a stili di finestra standard. Per un elenco di questi stili, vedere [stili del controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774377) in Windows SDK.  
  
 Per altre informazioni, vedere [utilizzo di CReBarCtrl](../../mfc/using-crebarctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CReBarCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="begindrag"></a>  CReBarCtrl::BeginDrag  
 Implementa il comportamento del messaggio Win32 [RB_BEGINDRAG](http://msdn.microsoft.com/library/windows/desktop/bb774429), come descritto in Windows SDK.  
  
```  
void BeginDrag(
    UINT uBand,  
    DWORD dwPos = (DWORD)-1);
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda di cui l'operazione di trascinamento e rilascio avrà effetto.  
  
 *dwPos*  
 Oggetto `DWORD` valore che contiene le coordinate del mouse iniziale. Coordinata orizzontale è inclusa nel LOWORD e la coordinata verticale è contenuta nel HIWORD. Se si passa `(DWORD)-1`, il controllo rebar userà la posizione del puntatore del mouse l'ultimo thread del controllo denominato `GetMessage` o `PeekMessage`.  
  
##  <a name="create"></a>  CReBarCtrl::Create  
 Crea il controllo rebar e lo collega al `CReBarCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *dwStyle*  
 Specifica la combinazione di stili del controllo rebar applicata al controllo. Vedere [stili del controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774377) in Windows SDK per un elenco degli stili supportati.  
  
 *Rect*  
 Un riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto oppure [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura, ovvero la posizione e dimensioni del controllo rebar.  
  
 *pParentWnd*  
 Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che è la finestra padre del controllo rebar. Non deve essere **NULL**.  
  
 *nID*  
 Specifica l'ID del controllo. del controllo rebar  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto è stato creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Creare un controllo rebar in due passaggi:  
  
1.  Chiamare [CReBarCtrl](#crebarctrl) per costruire un `CReBarCtrl` oggetto.  
  
2.  Chiamare questa funzione membro, che crea il controllo rebar di Windows e lo collega al `CReBarCtrl` oggetto.  
  
 Quando si chiama **crea**, vengono inizializzati i controlli comuni.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#3](../../mfc/reference/codesnippet/cpp/crebarctrl-class_1.cpp)]  
  
##  <a name="createex"></a>  CReBarCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e la associa il `CReBarCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *dwExStyle*  
 Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere la *dwExStyle* parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in Windows SDK.  
  
 *dwStyle*  
 Specifica la combinazione di stili del controllo rebar applicata al controllo. Per un elenco degli stili supportati, vedere [stili del controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774377) in Windows SDK.  
  
 *Rect*  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e posizione della finestra deve essere creato, nelle coordinate client di *pParentWnd*.  
  
 *pParentWnd*  
 Un puntatore alla finestra padre del controllo.  
  
 *nID*  
 ID finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Uso `CreateEx` invece di [Create](#create) per applicare stili estesi di Windows, specificati per il prefisso di stile esteso di Windows **WS_EX _**.  
  
##  <a name="crebarctrl"></a>  CReBarCtrl::CReBarCtrl  
 Crea un oggetto `CReBarCtrl`.  
  
```  
CReBarCtrl();
```  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CReBarCtrl::Create](#create).  
  
##  <a name="deleteband"></a>  CReBarCtrl::DeleteBand  
 Implementa il comportamento del messaggio Win32 [RB_DELETEBAND](http://msdn.microsoft.com/library/windows/desktop/bb774431), come descritto in Windows SDK.  
  
```  
BOOL DeleteBand(UINT uBand);
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda di eliminazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la banda eliminato correttamente. zero in caso contrario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#4](../../mfc/reference/codesnippet/cpp/crebarctrl-class_2.cpp)]  
  
##  <a name="dragmove"></a>  CReBarCtrl::DragMove  
 Implementa il comportamento del messaggio Win32 [RB_DRAGMOVE](https://msdn.microsoft.com/library/bb774433.aspx), come descritto in Windows SDK.  
  
```  
void DragMove(DWORD dwPos = (DWORD)-1);
```  
  
### <a name="parameters"></a>Parametri  
 *dwPos*  
 Oggetto `DWORD` valore contenente le nuove coordinate del mouse. Coordinata orizzontale è inclusa nel LOWORD e la coordinata verticale è contenuta nel HIWORD. Se si passa `(DWORD)-1`, il controllo rebar userà la posizione del puntatore del mouse l'ultimo thread del controllo denominato `GetMessage` o `PeekMessage`.  
  
##  <a name="enddrag"></a>  CReBarCtrl::EndDrag  
 Implementa il comportamento del messaggio Win32 [RB_ENDDRAG](http://msdn.microsoft.com/library/windows/desktop/bb774435), come descritto in Windows SDK.  
  
```  
void EndDrag();
```  
  
##  <a name="getbandborders"></a>  CReBarCtrl::GetBandBorders  
 Implementa il comportamento del messaggio Win32 [RB_GETBANDBORDERS](http://msdn.microsoft.com/library/windows/desktop/bb774437), come descritto in Windows SDK.  
  
```  
void GetBandBorders(
    UINT uBand,  
    LPRECT prc) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda di cui verranno recuperati i bordi.  
  
 *Repubblica popolare cinese*  
 Un puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceverà i bordi fuori banda. Se il controllo rebar ha il **RBS_BANDBORDERS** stile, ogni membro della struttura verrà visualizzato il numero di pixel, sul lato corrispondente della banda, che costituiscono il bordo. Se il controllo rebar non ha il **RBS_BANDBORDERS** stile, solo il membro a sinistra della struttura riceve informazioni valide. Per una descrizione di stili del controllo rebar, vedere [stili del controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774377) in Windows SDK.  
  
##  <a name="getbandcount"></a>  CReBarCtrl::GetBandCount  
 Implementa il comportamento del messaggio Win32 [RB_GETBANDCOUNT](http://msdn.microsoft.com/library/windows/desktop/bb774439), come descritto in Windows SDK.  
  
```  
UINT GetBandCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di bande assegnato al controllo.  
  
##  <a name="getbandinfo"></a>  CReBarCtrl::GetBandInfo  
 Implementa il comportamento del messaggio Win32 [RB_GETBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774451) come descritto in Windows SDK.  
  
```  
BOOL GetBandInfo(
    UINT uBand,  
    REBARBANDINFO* prbbi) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda per il quale verranno recuperate le informazioni.  
  
 *prbbi*  
 Un puntatore a un [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) struttura per ricevere le informazioni fuori banda. È necessario impostare il `cbSize` membro della struttura per `sizeof(REBARBANDINFO)` e impostare il **fMask** membro per gli elementi che si desidera recuperare prima di inviare questo messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="getbandmargins"></a>  CReBarCtrl::GetBandMargins  
 Recupera i margini della banda.  
  
```  
void GetBandMargins(PMARGINS pMargins);
```  
  
### <a name="parameters"></a>Parametri  
 *pMargins*  
 Un puntatore a un [margini](http://msdn.microsoft.com/library/windows/desktop/bb773244)struttura che riceverà le informazioni.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del [RB_GETBANDMARGINS](http://msdn.microsoft.com/library/windows/desktop/bb774453) dei messaggi, come descritto in Windows SDK.  
  
##  <a name="getbarheight"></a>  CReBarCtrl::GetBarHeight  
 Recupera l'altezza della barra di controllo rebar.  
  
```  
UINT GetBarHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore che rappresenta l'altezza, in pixel, del controllo.  
  
##  <a name="getbarinfo"></a>  CReBarCtrl::GetBarInfo  
 Implementa il comportamento del messaggio Win32 [RB_GETBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb774457), come descritto in Windows SDK.  
  
```  
BOOL GetBarInfo(REBARINFO* prbi) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *prbi*  
 Un puntatore a un [REBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb774395) struttura che riceverà le informazioni sul controllo rebar. È necessario impostare il *cbSize* membro della struttura per `sizeof(REBARINFO)` prima di inviare questo messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="getbkcolor"></a>  CReBarCtrl::GetBkColor  
 Implementa il comportamento del messaggio Win32 [RB_GETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774459), come descritto in Windows SDK.  
  
```  
COLORREF GetBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un **COLORREF** valore che rappresenta il colore di sfondo predefinito corrente.  
  
##  <a name="getcolorscheme"></a>  CReBarCtrl::GetColorScheme  
 Recupera il [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) struttura per il controllo rebar.  
  
```  
BOOL GetColorScheme(COLORSCHEME* lpcs);
```  
  
### <a name="parameters"></a>Parametri  
 *lpcs*  
 Un puntatore a un [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) struttura, come descritto in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il **COLORSCHEME** che include il colore di evidenziazione del pulsante e il colore dell'ombreggiatura pulsante.  
  
##  <a name="getdroptarget"></a>  CReBarCtrl::GetDropTarget  
 Implementa il comportamento del messaggio Win32 [RB_GETDROPTARGET](http://msdn.microsoft.com/library/windows/desktop/bb774463), come descritto in Windows SDK.  
  
```  
IDropTarget* GetDropTarget() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interfaccia.  
  
##  <a name="getextendedstyle"></a>  CReBarCtrl::GetExtendedStyle  
 Ottiene gli stili estesi del controllo rebar corrente.  
  
```  
DWORD GetExtendedStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Combinazione bit per bit (OR) di flag che indicano gli stili estesi. I possibili flag sono `RBS_EX_SPLITTER` e `RBS_EX_TRANSPARENT`. Per altre informazioni, vedere la *dwMask* parametro del [CReBarCtrl::SetExtendedStyle](#setextendedstyle) metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [RB_GETEXTENDEDSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb774433) messaggio, come descritto in Windows SDK.  
  
##  <a name="getimagelist"></a>  CReBarCtrl::GetImageList  
 Ottiene il `CImageList` oggetto associato a un controllo rebar.  
  
```  
CImageList* GetImageList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto. Restituisce **NULL** se non è impostato alcun elenco di immagini per il controllo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro utilizza le dimensioni e maschera informazioni archiviate nel [REBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb774395) struttura, come descritto in Windows SDK.  
  
##  <a name="getpalette"></a>  CReBarCtrl::GetPalette  
 Recupera tavolozza corrente del controllo rebar.  
  
```  
CPalette* GetPalette() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CPalette](../../mfc/reference/cpalette-class.md) oggetto che specifica la tavolozza corrente del controllo rebar.  
  
### <a name="remarks"></a>Note  
 Si noti che questa funzione membro Usa un `CPalette` oggetto come relativo valore restituito, anziché un' `HPALETTE`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#5](../../mfc/reference/codesnippet/cpp/crebarctrl-class_3.cpp)]  
  
##  <a name="getrect"></a>  CReBarCtrl::GetRect  
 Implementa il comportamento del messaggio Win32 [RB_GETRECT](http://msdn.microsoft.com/library/windows/desktop/bb774469), come descritto in Windows SDK.  
  
```  
BOOL GetRect(
    UINT uBand,  
    LPRECT prc) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda del controllo rebar.  
  
 *Repubblica popolare cinese*  
 Un puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceverà i limiti del controllo rebar band.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#6](../../mfc/reference/codesnippet/cpp/crebarctrl-class_4.cpp)]  
  
##  <a name="getrowcount"></a>  CReBarCtrl::GetRowCount  
 Implementa il comportamento del messaggio Win32 [RB_GETROWCOUNT](http://msdn.microsoft.com/library/windows/desktop/bb774471), come descritto in Windows SDK.  
  
```  
UINT GetRowCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un **UINT** valore che rappresenta il numero di righe fuori banda nel controllo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#7](../../mfc/reference/codesnippet/cpp/crebarctrl-class_5.cpp)]  
  
##  <a name="getrowheight"></a>  CReBarCtrl::GetRowHeight  
 Implementa il comportamento del messaggio Win32 [RB_GETROWHEIGHT](http://msdn.microsoft.com/library/windows/desktop/bb774473), come descritto in Windows SDK.  
  
```  
UINT GetRowHeight(UINT uRow) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *uRow*  
 Indice in base zero della banda che avrà l'altezza recuperato.  
  
### <a name="return-value"></a>Valore restituito  
 Un **UINT** valore che rappresenta l'altezza di riga, in pixel.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#8](../../mfc/reference/codesnippet/cpp/crebarctrl-class_6.cpp)]  
  
##  <a name="gettextcolor"></a>  CReBarCtrl::GetTextColor  
 Implementa il comportamento del messaggio Win32 [RB_GETTEXTCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774475), come descritto in Windows SDK.  
  
```  
COLORREF GetTextColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un **COLORREF** valore che rappresenta il colore del testo predefinito corrente.  
  
##  <a name="gettooltips"></a>  CReBarCtrl::GetToolTips  
 Implementa il comportamento del messaggio Win32 [RB_GETTOOLTIPS](http://msdn.microsoft.com/library/windows/desktop/bb774477), come descritto in Windows SDK.  
  
```  
CToolTipCtrl* GetToolTips() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Si noti che l'implementazione MFC di `GetToolTips` restituisce un puntatore a un `CToolTipCtrl`, anziché un' `HWND`.  
  
##  <a name="hittest"></a>  CReBarCtrl::HitTest  
 Implementa il comportamento del messaggio Win32 [RB_HITTEST](http://msdn.microsoft.com/library/windows/desktop/bb774494), come descritto in Windows SDK.  
  
```  
int HitTest(RBHITTESTINFO* prbht);
```  
  
### <a name="parameters"></a>Parametri  
 *prbht*  
 Un puntatore a un [RBHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb774391) struttura. Prima di inviare il messaggio, il **pt** membro della struttura deve essere inizializzato al punto che verrà testato, nelle coordinate client.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero della banda al punto specificato oppure -1 se nessun controllo rebar band è stato in corrispondenza del punto.  
  
##  <a name="idtoindex"></a>  CReBarCtrl::IDToIndex  
 Implementa il comportamento del messaggio Win32 [RB_IDTOINDEX](http://msdn.microsoft.com/library/windows/desktop/bb774496), come descritto in Windows SDK.  
  
```  
int IDToIndex(UINT uBandID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *uBandID*  
 L'identificatore della banda specificata, definito dall'applicazione passato il **wID** membro del [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) struttura quando viene inserita il fuori banda.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice fuori banda in base zero in caso di esito positivo,-1 in caso contrario. Se gli indici duplicati fuori banda esistono, viene restituito il primo.  
  
##  <a name="insertband"></a>  CReBarCtrl::InsertBand  
 Implementa il comportamento del messaggio Win32 [RB_INSERTBAND](http://msdn.microsoft.com/library/windows/desktop/bb774498), come descritto in Windows SDK.  
  
```  
BOOL InsertBand(
    UINT uIndex,  
    REBARBANDINFO* prbbi);
```  
  
### <a name="parameters"></a>Parametri  
 *uIndex*  
 Indice in base zero della posizione in cui verrà inserita il fuori banda. Se si imposta questo parametro su -1, il controllo aggiungerà il nuovo fuori banda nell'ultima posizione.  
  
 *prbbi*  
 Un puntatore a un [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) struttura che definisce il fuori banda da inserire. È necessario impostare il *cbSize* membro della struttura per `sizeof(REBARBANDINFO)` prima di chiamare questa funzione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#9](../../mfc/reference/codesnippet/cpp/crebarctrl-class_7.cpp)]  
  
##  <a name="maximizeband"></a>  CReBarCtrl::MaximizeBand  
 Ridimensiona una banda in un controllo rebar alle dimensioni massime.  
  
```  
void MaximizeBand(UINT uBand);
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda per essere ingrandita.  
  
### <a name="remarks"></a>Note  
 Implementa il comportamento del messaggio Win32 [RB_MAXIMIZEBAND](http://msdn.microsoft.com/library/windows/desktop/bb774500) con `fIdeal` impostato su 0, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#10](../../mfc/reference/codesnippet/cpp/crebarctrl-class_8.cpp)]  
  
##  <a name="minimizeband"></a>  CReBarCtrl::MinimizeBand  
 Ridimensiona una banda in un controllo rebar alle sue dimensioni più piccolo.  
  
```  
void MinimizeBand(UINT uBand);
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda per essere ridotta a icona.  
  
### <a name="remarks"></a>Note  
 Implementa il comportamento del messaggio Win32 [RB_MINIMIZEBAND](http://msdn.microsoft.com/library/windows/desktop/bb774502), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#11](../../mfc/reference/codesnippet/cpp/crebarctrl-class_9.cpp)]  
  
##  <a name="moveband"></a>  CReBarCtrl::MoveBand  
 Implementa il comportamento del messaggio Win32 [RB_MOVEBAND](http://msdn.microsoft.com/library/windows/desktop/bb774504), come descritto in Windows SDK.  
  
```  
BOOL MoveBand(
    UINT uFrom,  
    UINT uTo);
```  
  
### <a name="parameters"></a>Parametri  
 *uFrom*  
 Indice in base zero della banda da spostare.  
  
 *utomatica*  
 Indice in base zero della nuova posizione fuori banda. Valore di questo parametro non deve essere maggiore del numero di bande meno uno. Per ottenere il numero di bande, chiamare [GetBandCount](#getbandcount).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="pushchevron"></a>  CReBarCtrl::PushChevron  
 Implementa il comportamento del messaggio Win32 [RB_PUSHCHEVRON](http://msdn.microsoft.com/library/windows/desktop/bb774506), come descritto in Windows SDK.  
  
```  
void PushChevron(
    UINT uBand,  
    LPARAM lAppValue);
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda di cui freccia di espansione è per essere inserita.  
  
 *lAppValue*  
 Un'applicazione è definito valore a 32 bit. Vedere *lAppValue* in [RB_PUSHCHEVRON](http://msdn.microsoft.com/library/windows/desktop/bb774506) in Windows SDK.  
  
##  <a name="restoreband"></a>  CReBarCtrl::RestoreBand  
 Ridimensiona una banda in un controllo rebar alle sue dimensioni ideali.  
  
```  
void RestoreBand(UINT uBand);
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda per essere ingrandita.  
  
### <a name="remarks"></a>Note  
 Implementa il comportamento del messaggio Win32 [RB_MAXIMIZEBAND](http://msdn.microsoft.com/library/windows/desktop/bb774500) con `fIdeal` impostato su 1, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#12](../../mfc/reference/codesnippet/cpp/crebarctrl-class_10.cpp)]  
  
##  <a name="setbandinfo"></a>  CReBarCtrl::SetBandInfo  
 Implementa il comportamento del messaggio Win32 [RB_SETBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774508), come descritto in Windows SDK.  
  
```  
BOOL SetBandInfo(
    UINT uBand,  
    REBARBANDINFO* prbbi);
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda di ricevere le nuove impostazioni.  
  
 *prbbi*  
 Puntatore a un [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) struttura che definisce il fuori banda da inserire. È necessario impostare il `cbSize` membro della struttura per `sizeof(REBARBANDINFO)` prima di inviare questo messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#13](../../mfc/reference/codesnippet/cpp/crebarctrl-class_11.cpp)]  
  
##  <a name="setbandwidth"></a>  CReBarCtrl::SetBandWidth  
 Imposta la larghezza della banda di ancorato specificata nel controllo rebar corrente.  
  
```  
BOOL SetBandWidth(
    UINT uBand,   
    int cxWidth);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *uBand*|Indice in base zero di un controllo rebar band.|  
|[in] *cxWidth*|Nuova larghezza di banda del controllo rebar, in pixel.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il metodo ha esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [RB_SETBANDWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb774511) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile, `m_rebar`, che viene utilizzato per accedere al controllo rebar corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CReBarCtrl_s1#1](../../mfc/reference/codesnippet/cpp/crebarctrl-class_12.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta ogni controllo rebar band sia la stessa larghezza.  
  
 [!code-cpp[NVC_MFC_CReBarCtrl_s1#2](../../mfc/reference/codesnippet/cpp/crebarctrl-class_13.cpp)]  
  
##  <a name="setbarinfo"></a>  CReBarCtrl::SetBarInfo  
 Implementa il comportamento del messaggio Win32 [RB_SETBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb774513), come descritto in Windows SDK.  
  
```  
BOOL SetBarInfo(REBARINFO* prbi);
```  
  
### <a name="parameters"></a>Parametri  
 *prbi*  
 Un puntatore a un [REBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb774395) struttura che contiene le informazioni da impostare. È necessario impostare il `cbSize` membro della struttura per `sizeof(REBARINFO)` prima di inviare questo messaggio  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#14](../../mfc/reference/codesnippet/cpp/crebarctrl-class_14.cpp)]  
  
##  <a name="setbkcolor"></a>  CReBarCtrl::SetBkColor  
 Implementa il comportamento del messaggio Win32 [RB_SETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774515), come descritto in Windows SDK.  
  
```  
COLORREF SetBkColor(COLORREF clr);
```  
  
### <a name="parameters"></a>Parametri  
 *CLR*  
 Il **COLORREF** valore che rappresenta il nuovo colore di sfondo predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che rappresenta il colore di sfondo predefinito precedente.  
  
### <a name="remarks"></a>Note  
 Vedere questo argomento per ulteriori informazioni sul momento in cui impostare il colore di sfondo e su come impostare il valore predefinito.  
  
##  <a name="setcolorscheme"></a>  CReBarCtrl::SetColorScheme  
 Imposta la combinazione colori per i pulsanti su un controllo rebar.  
  
```  
void SetColorScheme(const COLORSCHEME* lpcs);
```  
  
### <a name="parameters"></a>Parametri  
 `lpcs`  
 Un puntatore a un [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) struttura, come descritto in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Il **COLORSCHEME** che include sia il colore di evidenziazione del pulsante e il colore dell'ombreggiatura pulsante.  
  
##  <a name="setextendedstyle"></a>  CReBarCtrl::SetExtendedStyle  
 Imposta gli stili estesi per il controllo rebar corrente.  
  
```  
DWORD SetExtendedStyle(
    DWORD dwMask,   
    DWORD dwStyleEx);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *dwMask*|Una combinazione bit per bit (OR) di flag che specificano i flag nel *dwStyleEx* parametro è applicabile. Utilizzare uno o più dei seguenti valori:<br /><br /> RBS_EX_SPLITTER: Per impostazione predefinita, visualizzare la barra di divisione nella parte inferiore in modalità orizzontale e a destra in modalità verticale.<br /><br /> RBS_EX_TRANSPARENT: Inoltrare il [WM_ERASEBKGND](http://msdn.microsoft.com/library/windows/desktop/ms648055) messaggio alla finestra padre.|  
|[in] *dwStyleEx*|Combinazione bit per bit (OR) di flag che specificano lo stile da applicare. Per impostare uno stile, specificare lo stesso flag che viene utilizzato per la *dwMask* parametro. Per reimpostare uno stile, specificare zero binario.|  
  
### <a name="return-value"></a>Valore restituito  
 Lo stile esteso precedente.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [RB_SETEXTENDEDSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb774519) messaggio, come descritto in Windows SDK.  
  
##  <a name="setimagelist"></a>  CReBarCtrl::SetImageList  
 Assegna un elenco di immagini a un controllo rebar.  
  
```  
BOOL SetImageList(CImageList* pImageList);
```  
  
### <a name="parameters"></a>Parametri  
 *pImageList*  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto che contiene l'elenco di immagini per poter essere assegnati al controllo rebar.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="setowner"></a>  CReBarCtrl::SetOwner  
 Implementa il comportamento del messaggio Win32 [RB_SETPARENT](http://msdn.microsoft.com/library/windows/desktop/bb774522), come descritto in Windows SDK.  
  
```  
CWnd* SetOwner(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pWnd*  
 Un puntatore a un `CWnd` oggetto da impostare come proprietario del controllo rebar.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che rappresenta il proprietario corrente del controllo rebar.  
  
### <a name="remarks"></a>Note  
 Si noti che questa funzione membro utilizza i puntatori a `CWnd` oggetti per il proprietario corrente e selezionato del controllo rebar, piuttosto che gestisce per windows.  
  
> [!NOTE]
>  Questa funzione membro non modifica l'elemento padre effettivo impostato al momento della creazione del controllo; anziché invia i messaggi di notifica alla finestra specificato.  
  
##  <a name="setpalette"></a>  CReBarCtrl::SetPalette  
 Implementa il comportamento del messaggio Win32 [RB_SETPALETTE](http://msdn.microsoft.com/library/windows/desktop/bb774520), come descritto in Windows SDK.  
  
```  
CPalette* SetPalette(HPALETTE hPal);
```  
  
### <a name="parameters"></a>Parametri  
 *hPal*  
 Un `HPALETTE` che specifica la nuova tavolozza che verrà utilizzato il controllo rebar.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CPalette](../../mfc/reference/cpalette-class.md) oggetto che specifica la tavolozza precedente del controllo rebar.  
  
### <a name="remarks"></a>Note  
 Si noti che questa funzione membro Usa un `CPalette` oggetto come relativo valore restituito, anziché un' `HPALETTE`.  
  
##  <a name="settextcolor"></a>  CReBarCtrl::SetTextColor  
 Implementa il comportamento del messaggio Win32 [RB_SETTEXTCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb774524), come descritto in Windows SDK.  
  
```  
COLORREF SetTextColor(COLORREF clr);
```  
  
### <a name="parameters"></a>Parametri  
 *CLR*  
 Un **COLORREF** valore che rappresenta il nuovo testo di colore `CReBarCtrl` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Il [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che rappresenta il colore del testo precedente associato il `CReBarCtrl` oggetto.  
  
### <a name="remarks"></a>Note  
 Viene fornito per supportare la flessibilità di colori di testo in un controllo rebar.  
  
##  <a name="settooltips"></a>  CReBarCtrl::SetToolTips  
 Associa un controllo descrizione comando con un controllo rebar.  
  
```  
void SetToolTips(CToolTipCtrl* pToolTip);
```  
  
### <a name="parameters"></a>Parametri  
 *pToolTip*  
 Un puntatore a un [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) oggetto  
  
### <a name="remarks"></a>Note  
 È necessario eliminare definitivamente il `CToolTipCtrl` dell'oggetto al termine con esso.  
  
##  <a name="setwindowtheme"></a>  CReBarCtrl::SetWindowTheme  
 Imposta lo stile di visualizzazione del controllo rebar.  
  
```  
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
### <a name="parameters"></a>Parametri  
 *pszSubAppName*  
 Un puntatore a una stringa Unicode contenente lo stile di visualizzazione del controllo rebar da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito non viene utilizzato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del [RB_SETWINDOWTHEME](http://msdn.microsoft.com/library/windows/desktop/bb774530) dei messaggi, come descritto in Windows SDK.  
  
##  <a name="showband"></a>  CReBarCtrl::ShowBand  
 Implementa il comportamento del messaggio Win32 [RB_SHOWBAND](http://msdn.microsoft.com/library/windows/desktop/bb774532), come descritto in Windows SDK.  
  
```  
BOOL ShowBand(
    UINT uBand,  
    BOOL fShow = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *uBand*  
 Indice in base zero della banda del controllo rebar.  
  
 *fShow*  
 Indica se il fuori banda debba essere mostrata o nascosta. Se questo valore è **TRUE**, verrà visualizzata il fuori banda. In caso contrario, sarà nascosto il fuori banda.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="sizetorect"></a>  CReBarCtrl::SizeToRect  
 Implementa il comportamento del messaggio Win32 [RB_SIZETORECT](http://msdn.microsoft.com/library/windows/desktop/bb774534), come descritto in Windows SDK.  
  
```  
BOOL SizeToRect(CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 *Rect*  
 Un riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica il rettangolo di ridimensionamento per il controllo rebar.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si noti che questa funzione membro Usa un `CRect` oggetto come parametro, piuttosto che un `RECT` struttura.  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)


