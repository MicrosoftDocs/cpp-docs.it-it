---
title: CStatusBarCtrl (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStatusBarCtrl
- AFXCMN/CStatusBarCtrl
- AFXCMN/CStatusBarCtrl::CStatusBarCtrl
- AFXCMN/CStatusBarCtrl::Create
- AFXCMN/CStatusBarCtrl::CreateEx
- AFXCMN/CStatusBarCtrl::DrawItem
- AFXCMN/CStatusBarCtrl::GetBorders
- AFXCMN/CStatusBarCtrl::GetIcon
- AFXCMN/CStatusBarCtrl::GetParts
- AFXCMN/CStatusBarCtrl::GetRect
- AFXCMN/CStatusBarCtrl::GetText
- AFXCMN/CStatusBarCtrl::GetTextLength
- AFXCMN/CStatusBarCtrl::GetTipText
- AFXCMN/CStatusBarCtrl::IsSimple
- AFXCMN/CStatusBarCtrl::SetBkColor
- AFXCMN/CStatusBarCtrl::SetIcon
- AFXCMN/CStatusBarCtrl::SetMinHeight
- AFXCMN/CStatusBarCtrl::SetParts
- AFXCMN/CStatusBarCtrl::SetSimple
- AFXCMN/CStatusBarCtrl::SetText
- AFXCMN/CStatusBarCtrl::SetTipText
dev_langs:
- C++
helpviewer_keywords:
- CStatusBarCtrl [MFC], CStatusBarCtrl
- CStatusBarCtrl [MFC], Create
- CStatusBarCtrl [MFC], CreateEx
- CStatusBarCtrl [MFC], DrawItem
- CStatusBarCtrl [MFC], GetBorders
- CStatusBarCtrl [MFC], GetIcon
- CStatusBarCtrl [MFC], GetParts
- CStatusBarCtrl [MFC], GetRect
- CStatusBarCtrl [MFC], GetText
- CStatusBarCtrl [MFC], GetTextLength
- CStatusBarCtrl [MFC], GetTipText
- CStatusBarCtrl [MFC], IsSimple
- CStatusBarCtrl [MFC], SetBkColor
- CStatusBarCtrl [MFC], SetIcon
- CStatusBarCtrl [MFC], SetMinHeight
- CStatusBarCtrl [MFC], SetParts
- CStatusBarCtrl [MFC], SetSimple
- CStatusBarCtrl [MFC], SetText
- CStatusBarCtrl [MFC], SetTipText
ms.assetid: 8504ad38-7b91-4746-aede-ac98886eb47b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3ee095257ddf3fd322a7e42e3f6fff6ac7cec76a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cstatusbarctrl-class"></a>CStatusBarCtrl (classe)
Fornisce la funzionalità del controllo barra di stato comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CStatusBarCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatusBarCtrl::CStatusBarCtrl](#cstatusbarctrl)|Costruisce un oggetto `CStatusBarCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatusBarCtrl::Create](#create)|Crea un controllo barra di stato e lo collega a un `CStatusBarCtrl` oggetto.|  
|[CStatusBarCtrl::CreateEx](#createex)|Crea un controllo barra di stato con gli stili estesi di Windows specificati e lo collega a un `CStatusBarCtrl` oggetto.|  
|[CStatusBarCtrl::DrawItem](#drawitem)|Chiamato quando un aspetto visivo di un proprietario barra controllo di stato.|  
|[CStatusBarCtrl::GetBorders](#getborders)|Recupera la larghezza dei bordi orizzontale e verticale di un controllo barra di stato corrente.|  
|[CStatusBarCtrl::GetIcon](#geticon)|Recupera l'icona per una parte (noto anche come un riquadro) nella barra di stato corrente.|  
|[CStatusBarCtrl::GetParts](#getparts)|Recupera un conteggio delle parti in un controllo barra di stato.|  
|[CStatusBarCtrl::GetRect](#getrect)|Recupera il rettangolo di delimitazione di una parte di un controllo barra di stato.|  
|[CStatusBarCtrl:: GetText](#gettext)|Recupera il testo dalla parte specificata di un controllo barra di stato.|  
|[CStatusBarCtrl:: Gettextlength](#gettextlength)|Recuperare la lunghezza, in caratteri, del testo da una parte specificata di un controllo barra di stato.|  
|[CStatusBarCtrl::GetTipText](#gettiptext)|Recupera il testo della descrizione comando per un riquadro in una barra di stato.|  
|[CStatusBarCtrl::IsSimple](#issimple)|Verifica di un controllo di finestra di stato per determinare se è in modalità semplice.|  
|[CStatusBarCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo in una barra di stato.|  
|[CStatusBarCtrl::SetIcon](#seticon)|Imposta l'icona per un riquadro in una barra di stato.|  
|[CStatusBarCtrl::SetMinHeight](#setminheight)|Imposta l'altezza minima di stato barra area di disegno del controllo.|  
|[CStatusBarCtrl::SetParts](#setparts)|Imposta il numero di parti in un controllo e la coordinata del bordo destro di ogni parte della barra di stato.|  
|[CStatusBarCtrl::SetSimple](#setsimple)|Specifica se un controllo barra di stato viene visualizzato testo semplice o Visualizza tutte le parti di controllo set da una precedente chiamata a `SetParts`.|  
|[CStatusBarCtrl::SetText](#settext)|Imposta il testo nella parte specificata di un controllo barra di stato.|  
|[CStatusBarCtrl:: SetTipText](#settiptext)|Imposta il testo della descrizione comando per un riquadro in una barra di stato.|  
  
## <a name="remarks"></a>Note  
 Un "controllo al barra di stato" è una finestra orizzontale, in genere visualizzata nella parte inferiore della finestra padre, in cui un'applicazione può visualizzare vari tipi di informazioni sullo stato. Il controllo barra di stato può essere suddivisa in parti per visualizzare più di un tipo di informazioni.  
  
 Questo controllo (e pertanto la `CStatusBarCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Per ulteriori informazioni sull'utilizzo `CStatusBarCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CStatusBarCtrl utilizzando](../../mfc/using-cstatusbarctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CStatusBarCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="create"></a>CStatusBarCtrl::Create  
 Crea un controllo barra di stato e lo collega a un `CStatusBarCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile del controllo barra di stato. Applicare qualsiasi combinazione di stili del controllo elencato della barra di stato [stili del controllo comune](http://msdn.microsoft.com/library/windows/desktop/bb775498) in Windows SDK. Questo parametro deve includere il **WS_CHILD** stile. Deve includere inoltre il **WS_VISIBLE** stile.  
  
 `rect`  
 Specifica dimensioni e la posizione del controllo barra di stato. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura.  
  
 `pParentWnd`  
 Specifica lo stato della barra di finestra padre del controllo, in genere un `CDialog`. Non deve essere **NULL.**  
  
 `nID`  
 Specifica l'ID del controllo barra di stato  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CStatusBarCtrl` in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare **crea**, che crea il controllo barra di stato e lo collega al `CStatusBarCtrl` oggetto.  
  
 La posizione predefinita di una finestra di stato è nella parte inferiore della finestra padre, ma è possibile specificare il `CCS_TOP` stile affinché venga visualizzato nella parte superiore dell'area client della finestra padre. È possibile specificare il **SBARS_SIZEGRIP** stile da includere un riquadro di ridimensionamento all'estremità destra della finestra di stato. La combinazione di `CCS_TOP` e **SBARS_SIZEGRIP** stili è sconsigliato, perché il riquadro di ridimensionamento non è disponibile anche se viene disegnato nella finestra di stato.  
  
 Per creare una barra di stato con stili finestra estesi, chiamare [CStatusBarCtrl::CreateEx](#createex) anziché **crea**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#1](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_1.cpp)]  
  
##  <a name="createex"></a>CStatusBarCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e la associa il `CStatusBarCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwExStyle`  
 Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in Windows SDK.  
  
 `dwStyle`  
 Specifica lo stile del controllo barra di stato. Applicare qualsiasi combinazione di stili del controllo elencato della barra di stato [stili del controllo comune](http://msdn.microsoft.com/library/windows/desktop/bb775498) in Windows SDK. Questo parametro deve includere il **WS_CHILD** stile. Deve includere inoltre il **WS_VISIBLE** stile.  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e la posizione della finestra deve essere creata, nelle coordinate del client di `pParentWnd`.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché [crea](#create) per applicare stili estesi di Windows, specificati per il prefisso di stile esteso di Windows **WS_EX _**.  
  
##  <a name="cstatusbarctrl"></a>CStatusBarCtrl::CStatusBarCtrl  
 Costruisce un oggetto `CStatusBarCtrl`.  
  
```  
CStatusBarCtrl();
```  
  
##  <a name="drawitem"></a>CStatusBarCtrl::DrawItem  
 Chiamato dal framework quando un aspetto visivo di un proprietario barra controllo di stato.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore di tipo long a un [DRAWITEMSTRUCT](http://msdn.microsoft.com/library/windows/desktop/bb775802) struttura che contiene informazioni sul tipo di disegno necessaria.  
  
### <a name="remarks"></a>Note  
 Il **itemAction** appartenente il `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita.  
  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare disegno di un proprietario `CStatusBarCtrl` oggetto.  
  
 L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima di questo membro funzione termina.  
  
##  <a name="getborders"></a>CStatusBarCtrl::GetBorders  
 Recupera larghezza corrente del controllo barra di stato dei bordi orizzontali e verticali e dello spazio tra i rettangoli.  
  
```  
BOOL GetBorders(int* pBorders) const;  
  
BOOL GetBorders(
    int& nHorz,  
    int& nVert,  
    int& nSpacing) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *pBorders*  
 Indirizzo di una matrice di interi con tre elementi. Il primo elemento riceve la larghezza del bordo orizzontale, il secondo la larghezza del bordo verticale e il terzo riceve la larghezza del bordo tra i rettangoli.  
  
 *nHorz*  
 Riferimento a un valore integer che riceve la larghezza del bordo orizzontale.  
  
 *Verti*  
 Riferimento a un valore integer che riceve la larghezza del bordo verticale.  
  
 *nSpacing*  
 Riferimento a un valore integer che riceve la larghezza del bordo tra i rettangoli.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questi bordi determinano la spaziatura tra il bordo esterno del controllo e i rettangoli che contengono testo all'interno del controllo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#2](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_2.cpp)]  
  
##  <a name="geticon"></a>CStatusBarCtrl::GetIcon  
 Recupera l'icona per una parte (noto anche come un riquadro) nella barra di stato corrente.  
  
```  
HICON GetIcon(int iPart) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iPart`|Indice in base zero della parte che contiene l'icona da recuperare. Se questo parametro è -1, la barra di stato viene considerata una barra di stato di visualizzazione semplice.|  
  
### <a name="return-value"></a>Valore restituito  
 Handle per l'icona se il metodo ha esito positivo. in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [SB_GETICON](http://msdn.microsoft.com/library/windows/desktop/bb760744) messaggio, come descritto in Windows SDK.  
  
 Un controllo barra di stato è costituito da una riga di riquadri di output di testo, che sono anche noti come parti. Per ulteriori informazioni sulla barra di stato, vedere [implementazione della barra di stato in MFC](../../mfc/status-bar-implementation-in-mfc.md) e [l'impostazione della modalità di un oggetto CStatusBarCtrl](../../mfc/setting-the-mode-of-a-cstatusbarctrl-object.md).  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce una variabile, `m_statusBar`, che viene utilizzato per accedere il controllo barra di stato corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CStatusBarCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_3.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente consente di copiare un'icona in due riquadri della barra di stato corrente. In una sezione dell'esempio di codice precedente abbiamo creato un controllo barra di stato con tre riquadri e quindi aggiunta un'icona per il primo riquadro. In questo esempio viene quindi aggiunto al riquadro secondo e terzo, recupera l'icona dal primo riquadro.  
  
 [!code-cpp[NVC_MFC_CStatusBarCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_4.cpp)]  
  
##  <a name="getparts"></a>CStatusBarCtrl::GetParts  
 Recupera un conteggio delle parti in un controllo barra di stato.  
  
```  
int GetParts(
    int nParts,  
    int* pParts) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nParts`  
 Numero di parti per il quale recuperare le coordinate. Se questo parametro è maggiore del numero di parti del controllo, il messaggio recupera coordinate esistente solo per le parti.  
  
 *pParts*  
 Indirizzo di una matrice di interi con lo stesso numero di elementi come il numero di parti specificato da `nParts`. Ogni elemento nella matrice riceve le coordinate client del bordo destro della parte corrispondente. Se un elemento è impostato su - 1, la posizione del bordo destro di una parte si estende al bordo destro della barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di parti di controllo se ha esito positivo oppure zero in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro inoltre di recuperare la coordinata del bordo destro del numero specificato di parti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#3](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_5.cpp)]  
  
##  <a name="getrect"></a>CStatusBarCtrl::GetRect  
 Recupera il rettangolo di delimitazione di una parte di un controllo barra di stato.  
  
```  
BOOL GetRect(
    int nPane,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPane`  
 Indice in base zero della parte di cui il rettangolo di delimitazione è da recuperare.  
  
 `lpRect`  
 Indirizzo di un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceve il rettangolo di delimitazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#4](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_6.cpp)]  
  
##  <a name="gettext"></a>CStatusBarCtrl:: GetText  
 Recupera il testo dalla parte specificata di un controllo barra di stato.  
  
```  
CString GetText(
    int nPane,  
    int* pType = NULL) const;  
  
int GetText(
    LPCTSTR lpszText,  
    int nPane,  
    int* pType = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Indirizzo del buffer che riceve il testo. Questo parametro è una stringa con terminazione null.  
  
 `nPane`  
 Indice in base zero della parte da cui recuperare il testo.  
  
 `pType`  
 Puntatore a un valore integer che riceve le informazioni sul tipo. Il tipo può essere uno dei valori seguenti:  
  
- **0** viene disegnato il testo con un bordo in basso rispetto al piano della barra di stato.  
  
- `SBT_NOBORDERS`Il testo viene disegnato senza bordi.  
  
- `SBT_POPOUT`Il testo viene disegnato con un bordo in alto rispetto al piano della barra di stato.  
  
- `SBT_OWNERDRAW`Se il testo ha la `SBT_OWNERDRAW` , tipo di disegno `pType` riceve questo messaggio e restituisce il valore a 32 bit associato al testo anziché il tipo di lunghezza e l'operazione.  
  
### <a name="return-value"></a>Valore restituito  
 Lunghezza, espressa in caratteri, del testo o un [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il testo corrente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#5](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_7.cpp)]  
  
##  <a name="gettextlength"></a>CStatusBarCtrl:: Gettextlength  
 Recupera la lunghezza, in caratteri, del testo da una parte specificata di un controllo barra di stato.  
  
```  
int GetTextLength(
    int nPane,  
    int* pType = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPane`  
 Indice in base zero della parte da cui recuperare il testo.  
  
 `pType`  
 Puntatore a un valore integer che riceve le informazioni sul tipo. Il tipo può essere uno dei valori seguenti:  
  
- **0** viene disegnato il testo con un bordo in basso rispetto al piano della barra di stato.  
  
- `SBT_NOBORDERS`Il testo viene disegnato senza bordi.  
  
- `SBT_OWNERDRAW`Viene disegnato il testo dalla finestra padre.  
  
- `SBT_POPOUT`Il testo viene disegnato con un bordo in alto rispetto al piano della barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza in caratteri, del testo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#6](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_8.cpp)]  
  
##  <a name="gettiptext"></a>CStatusBarCtrl::GetTipText  
 Recupera il testo della descrizione comando per un riquadro in una barra di stato.  
  
```  
CString GetTipText(int nPane) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPane`  
 Indice in base zero del riquadro della barra di stato per ricevere il testo della descrizione comando.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il testo da utilizzare nella descrizione comando.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [SB_GETTIPTEXT](http://msdn.microsoft.com/library/windows/desktop/bb760751), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#7](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_9.cpp)]  
  
##  <a name="issimple"></a>CStatusBarCtrl::IsSimple  
 Verifica di un controllo di finestra di stato per determinare se è in modalità semplice.  
  
```  
BOOL IsSimple() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo di finestra di stato è in modalità semplice. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [SB_ISSIMPLE](http://msdn.microsoft.com/library/windows/desktop/bb760753), come descritto in Windows SDK.  
  
##  <a name="setbkcolor"></a>CStatusBarCtrl::SetBkColor  
 Imposta il colore di sfondo in una barra di stato.  
  
```  
COLORREF SetBkColor(COLORREF cr);
```  
  
### <a name="parameters"></a>Parametri  
 `cr`  
 **COLORREF** valore che specifica il nuovo colore di sfondo. Specificare il `CLR_DEFAULT` valore affinché la barra di stato da usare il colore di sfondo predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che rappresenta il colore di sfondo predefinito precedente.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [SB_SETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760754), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#8](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_10.cpp)]  
  
##  <a name="seticon"></a>CStatusBarCtrl::SetIcon  
 Imposta l'icona per un riquadro in una barra di stato.  
  
```  
BOOL SetIcon(
    int nPane,  
    HICON hIcon);
```  
  
### <a name="parameters"></a>Parametri  
 `nPane`  
 Indice in base zero del riquadro che riceverà l'icona. Se questo parametro è -1, la barra di stato viene considerata una barra di stato semplice.  
  
 `hIcon`  
 Handle per l'icona da impostare. Se questo valore è **NULL**, l'icona viene rimossa dalla parte.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [SB_SETICON](http://msdn.microsoft.com/library/windows/desktop/bb760755), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CStatusBarCtrl::SetBkColor](#setbkcolor).  
  
##  <a name="setminheight"></a>CStatusBarCtrl::SetMinHeight  
 Imposta l'altezza minima di stato barra area di disegno del controllo.  
  
```  
void SetMinHeight(int nMin);
```  
  
### <a name="parameters"></a>Parametri  
 `nMin`  
 Altezza minima, in pixel, del controllo.  
  
### <a name="remarks"></a>Note  
 L'altezza minima è la somma di `nMin` e due volte la larghezza, in pixel, del bordo verticale del controllo barra di stato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#9](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_11.cpp)]  
  
##  <a name="setparts"></a>CStatusBarCtrl::SetParts  
 Imposta il numero di parti in un controllo e la coordinata del bordo destro di ogni parte della barra di stato.  
  
```  
BOOL SetParts(
    int nParts,  
    int* pWidths);
```  
  
### <a name="parameters"></a>Parametri  
 `nParts`  
 Numero di parti da impostare. Il numero di parti non può essere maggiore di 255.  
  
 *pWidths*  
 Indirizzo di una matrice di interi con lo stesso numero di elementi come parti specificate da `nParts`. Ogni elemento nella matrice specifica la posizione, nelle coordinate client, del bordo destro della parte corrispondente. Se un elemento è - 1, la posizione del bordo destro di una parte si estende al bordo destro del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#10](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_12.cpp)]  
  
##  <a name="setsimple"></a>CStatusBarCtrl::SetSimple  
 Specifica se un controllo barra di stato viene visualizzato testo semplice o Visualizza tutte le parti di controllo set da una precedente chiamata a [SetParts](#setparts).  
  
```  
BOOL SetSimple(BOOL bSimple = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bSimple`  
 Flag di tipo di visualizzazione. Se questo parametro è `TRUE`, il controllo Visualizza il testo semplice; in caso `FALSE`, viene visualizzato più parti.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 0.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione passa il controllo barra di stato da non semplice su simple, o viceversa, il sistema ridisegna immediatamente il controllo.  
  
##  <a name="settext"></a>CStatusBarCtrl::SetText  
 Imposta il testo nella parte specificata di un controllo barra di stato.  
  
```  
BOOL SetText(
    LPCTSTR lpszText,  
    int nPane,  
    int nType);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Indirizzo di una stringa con terminazione null che specifica il testo da impostare. Se `nType` è `SBT_OWNERDRAW`, `lpszText` rappresenta 32 bit di dati.  
  
 `nPane`  
 Indice in base zero della parte da impostare. Se questo valore è 255, si presuppone che il controllo barra di stato sia un controllo semplice solo con una parte.  
  
 `nType`  
 Tipo di operazione di disegno. Vedere [messaggio SB_SETTEXT](http://msdn.microsoft.com/library/bb760758\(vs.85\).aspx) per un elenco di valori possibili.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il messaggio invalida la parte del controllo che è stata modificata. Ciò comporta la visualizzazione del nuovo testo quando il controllo riceverà il messaggio `WM_PAINT`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#11](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_13.cpp)]  
  
##  <a name="settiptext"></a>CStatusBarCtrl:: SetTipText  
 Imposta il testo della descrizione comando per un riquadro in una barra di stato.  
  
```  
void SetTipText(
    int nPane,  
    LPCTSTR pszTipText);
```  
  
### <a name="parameters"></a>Parametri  
 `nPane`  
 Indice in base zero del riquadro della barra di stato per ricevere il testo della descrizione comando.  
  
 *pszTipText*  
 Un puntatore a una stringa contenente il testo della descrizione comando.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [SB_SETTIPTEXT](http://msdn.microsoft.com/library/windows/desktop/bb760759), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CStatusBarCtrl#12](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_14.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md)
