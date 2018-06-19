---
title: Classe CScrollBar | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CScrollBar
- AFXWIN/CScrollBar
- AFXWIN/CScrollBar::CScrollBar
- AFXWIN/CScrollBar::Create
- AFXWIN/CScrollBar::EnableScrollBar
- AFXWIN/CScrollBar::GetScrollBarInfo
- AFXWIN/CScrollBar::GetScrollInfo
- AFXWIN/CScrollBar::GetScrollLimit
- AFXWIN/CScrollBar::GetScrollPos
- AFXWIN/CScrollBar::GetScrollRange
- AFXWIN/CScrollBar::SetScrollInfo
- AFXWIN/CScrollBar::SetScrollPos
- AFXWIN/CScrollBar::SetScrollRange
- AFXWIN/CScrollBar::ShowScrollBar
dev_langs:
- C++
helpviewer_keywords:
- CScrollBar [MFC], CScrollBar
- CScrollBar [MFC], Create
- CScrollBar [MFC], EnableScrollBar
- CScrollBar [MFC], GetScrollBarInfo
- CScrollBar [MFC], GetScrollInfo
- CScrollBar [MFC], GetScrollLimit
- CScrollBar [MFC], GetScrollPos
- CScrollBar [MFC], GetScrollRange
- CScrollBar [MFC], SetScrollInfo
- CScrollBar [MFC], SetScrollPos
- CScrollBar [MFC], SetScrollRange
- CScrollBar [MFC], ShowScrollBar
ms.assetid: f3735ca5-73ea-46dc-918b-4d824c9fe47f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 90f672cbeeee0c297e3d1deb6a6b5e83bffda3e8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33372769"
---
# <a name="cscrollbar-class"></a>Classe CScrollBar
Fornisce la funzionalità di un controllo barra di scorrimento di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CScrollBar : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CScrollBar::CScrollBar](#cscrollbar)|Costruisce un oggetto `CScrollBar`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CScrollBar::Create](#create)|Crea la barra di scorrimento di Windows e lo collega al `CScrollBar` oggetto.|  
|[CScrollBar::EnableScrollBar](#enablescrollbar)|Abilita o disabilita una o entrambe le frecce di una barra di scorrimento.|  
|[CScrollBar::GetScrollBarInfo](#getscrollbarinfo)|Recupera informazioni relative a scorrimento utilizzando un `SCROLLBARINFO` struttura.|  
|[CScrollBar::GetScrollInfo](#getscrollinfo)|Recupera le informazioni sulla barra di scorrimento.|  
|[CScrollBar::GetScrollLimit](#getscrolllimit)|Recupera il limite della barra di scorrimento|  
|[CScrollBar::GetScrollPos](#getscrollpos)|Recupera la posizione corrente di una casella di scorrimento.|  
|[CScrollBar::GetScrollRange](#getscrollrange)|Recupera le posizioni di barra di scorrimento minima e massima correnti per la barra di scorrimento specificata.|  
|[CScrollBar::SetScrollInfo](#setscrollinfo)|Imposta informazioni sulla barra di scorrimento.|  
|[CScrollBar::SetScrollPos](#setscrollpos)|Imposta la posizione corrente di una casella di scorrimento.|  
|[CScrollBar::SetScrollRange](#setscrollrange)|Imposta i valori di posizione minima e massima correnti per la barra di scorrimento specificata.|  
|[CScrollBar::ShowScrollBar](#showscrollbar)|Mostra o nasconde una barra di scorrimento.|  
  
## <a name="remarks"></a>Note  
 Si crea un controllo barra di scorrimento in due passaggi. In primo luogo, chiamare il costruttore `CScrollBar` per costruire il `CScrollBar` dell'oggetto, quindi chiamare il [crea](#create) funzione membro per creare il controllo barra di scorrimento di Windows e associarlo al `CScrollBar` oggetto.  
  
 Se si crea un `CScrollBar` oggetto all'interno di una finestra di dialogo (tramite una risorsa finestra di dialogo), il `CScrollBar` viene automaticamente distrutta quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un `CScrollBar` oggetto all'interno di una finestra, è necessario anche per eliminarlo.  
  
 Se si crea il `CScrollBar` dell'oggetto nello stack, viene eliminato automaticamente. Se si crea il `CScrollBar` oggetto sull'heap tramite il **nuova** funzione, è necessario chiamare **eliminare** per l'oggetto venga eliminata quando l'utente termina la barra di scorrimento di Windows.  
  
 Se si alloca alcuna memoria nel `CScrollBar` dell'oggetto, eseguire l'override di `CScrollBar` distruttore per l'eliminazione delle allocazioni.  
  
 Per informazioni sull'utilizzo di `CScrollBar`, vedere [controlli](../../mfc/controls-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CScrollBar`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="create"></a>  CScrollBar::Create  
 Crea la barra di scorrimento di Windows e lo collega al `CScrollBar` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo scorrimento stile dell'indicatore. Applicare qualsiasi combinazione di [stili barra di scorrimento](../../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles) per la barra di scorrimento.  
  
 `rect`  
 Specifica la dimensione della barra di scorrimento e la posizione. Può essere un `RECT` struttura o un `CRect` oggetto.  
  
 `pParentWnd`  
 Specifica lo scorrimento finestra padre della barra, in genere un `CDialog` oggetto. Non deve essere **NULL**.  
  
 `nID`  
 ID del controllo della barra di scorrimento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CScrollBar` oggetto in due passaggi. In primo luogo, chiamare il costruttore, che costruisce il `CScrollBar` dell'oggetto, quindi chiamare **crea**, che crea e inizializza la barra di scorrimento di Windows associata e lo collega al `CScrollBar` oggetto.  
  
 Applicare la seguente istruzione [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a una barra di scorrimento:  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
- **WS_GROUP** per raggruppare i controlli  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CScrollBar#1](../../mfc/reference/codesnippet/cpp/cscrollbar-class_1.cpp)]  
  
##  <a name="cscrollbar"></a>  CScrollBar::CScrollBar  
 Costruisce un oggetto `CScrollBar`.  
  
```  
CScrollBar();
```  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione dell'oggetto, chiamare il **crea** funzione membro per creare e inizializzare la barra di scorrimento di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CScrollBar#2](../../mfc/reference/codesnippet/cpp/cscrollbar-class_2.h)]  
  
##  <a name="enablescrollbar"></a>  CScrollBar::EnableScrollBar  
 Abilita o disabilita una o entrambe le frecce di una barra di scorrimento.  
  
```  
BOOL EnableScrollBar(UINT nArrowFlags = ESB_ENABLE_BOTH);
```  
  
### <a name="parameters"></a>Parametri  
 `nArrowFlags`  
 Specifica se le frecce di scorrimento vengono abilitate o disabilitate e le frecce vengono abilitate o disabilitate. Questo parametro può essere uno dei valori seguenti:  
  
- **ESB_ENABLE_BOTH** consente a entrambe le frecce di una barra di scorrimento.  
  
- **ESB_DISABLE_LTUP** disabilita la freccia a sinistra di una barra di scorrimento orizzontale o la freccia della barra di scorrimento verticale.  
  
- **ESB_DISABLE_RTDN** disabilita la freccia a destra della barra di scorrimento orizzontale o la freccia rivolta verso il basso di una barra di scorrimento verticale.  
  
- **ESB_DISABLE_BOTH** Disabilita entrambe le frecce di una barra di scorrimento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le frecce vengono abilitate o disabilitate come specificato; in caso contrario, 0, che indica che le frecce sono già in stato richiesto o che si è verificato un errore.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CScrollBar::SetScrollRange](#setscrollrange).  
  
##  <a name="getscrollbarinfo"></a>  CScrollBar::GetScrollBarInfo  
 Recupera le informazioni che il **SCROLLBARINFO** gestite dalla struttura su una barra di scorrimento.  
  
```  
BOOL GetScrollBarInfo(PSCROLLBARINFO pScrollInfo) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *pScrollInfo*  
 Un puntatore al [SCROLLBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb787535) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del [SBM_SCROLLBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb787545) del messaggio, come descritto in Windows SDK.  
  
##  <a name="getscrollinfo"></a>  CScrollBar::GetScrollInfo  
 Recupera le informazioni gestite dalla struttura `SCROLLINFO` su una barra di scorrimento.  
  
```  
BOOL GetScrollInfo(
    LPSCROLLINFO lpScrollInfo,  
    UINT nMask = SIF_ALL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpScrollInfo`  
 Un puntatore a un [SCROLLINFO](http://msdn.microsoft.com/library/windows/desktop/bb787537) struttura. Windows SDK per ulteriori informazioni su questa struttura, vedere.  
  
 `nMask`  
 Specifica i parametri della barra di scorrimento per recuperare. Utilizzo tipico, SIF_ALL, specifica una combinazione di SIF_PAGE, SIF_POS, SIF_TRACKPOS e SIF_RANGE. Vedere `SCROLLINFO` per ulteriori informazioni sui valori nMask.  
  
### <a name="return-value"></a>Valore restituito  
 Se il messaggio recuperato tutti i valori, il valore restituito sarà **TRUE**. In caso contrario, è **FALSE**.  
  
### <a name="remarks"></a>Note  
 `GetScrollInfo` consente alle applicazioni di utilizzare posizioni di scorrimento a 32 bit.  
  
 Il [SCROLLINFO](http://msdn.microsoft.com/library/windows/desktop/bb787537) struttura contiene informazioni su una barra di scorrimento, inclusi i valori minimo e massimo scorrimento posizioni, le dimensioni della pagina e la posizione della casella di scorrimento (casella). Vedere il `SCROLLINFO` argomento struttura in Windows SDK per ulteriori informazioni su come modificare le impostazioni predefinite di struttura.  
  
 Gestori eventi che indicano la posizione della barra di scorrimento, i messaggi Windows MFC [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [CWnd::OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll), fornire solo 16 bit di dati di posizione. `GetScrollInfo` e `SetScrollInfo` forniscono 32 bit di dati relativi alla posizione di scorrimento. Di conseguenza, un'applicazione può chiamare `GetScrollInfo` durante l'elaborazione di `CWnd::OnHScroll` o `CWnd::OnVScroll` per ottenere i dati di posizione barra di scorrimento a 32 bit.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).  
  
##  <a name="getscrolllimit"></a>  CScrollBar::GetScrollLimit  
 Recupera il numero massimo di scorrimento posizione della barra di scorrimento.  
  
```  
int GetScrollLimit();
```  
  
### <a name="return-value"></a>Valore restituito  
 Specifica la posizione massima di una barra di scorrimento, se ha esito positivo. in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).  
  
##  <a name="getscrollpos"></a>  CScrollBar::GetScrollPos  
 Recupera la posizione corrente di una casella di scorrimento.  
  
```  
int GetScrollPos() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Specifica la posizione corrente della casella di scorrimento, se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La posizione corrente è un valore relativo varia a seconda dell'intervallo di scorrimento corrente. Ad esempio, se l'intervallo di scorrimento è 100 a 200 e la casella di scorrimento al centro della barra, la posizione corrente è 150.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).  
  
##  <a name="getscrollrange"></a>  CScrollBar::GetScrollRange  
 Copia le posizioni di barra di scorrimento minima e massima correnti per la barra di scorrimento specificata in percorsi specificati dalla `lpMinPos` e `lpMaxPos`.  
  
```  
void GetScrollRange(
    LPINT lpMinPos,  
    LPINT lpMaxPos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpMinPos`  
 Punta alla variabile di tipo integer che riceverà la posizione minima.  
  
 `lpMaxPos`  
 Punta alla variabile di tipo integer che riceverà la posizione massima.  
  
### <a name="remarks"></a>Note  
 L'intervallo predefinito per un controllo barra di scorrimento è vuoto (entrambi i valori sono 0).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).  
  
##  <a name="setscrollinfo"></a>  CScrollBar::SetScrollInfo  
 Imposta le informazioni che il `SCROLLINFO` gestite dalla struttura su una barra di scorrimento.  
  
```  
BOOL SetScrollInfo(
    LPSCROLLINFO lpScrollInfo,  
    BOOL bRedraw = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `lpScrollInfo`  
 Un puntatore a un [SCROLLINFO](http://msdn.microsoft.com/library/windows/desktop/bb787537) struttura.  
  
 `bRedraw`  
 Specifica se la barra di scorrimento deve essere ridisegnata in modo da riflettere le nuove informazioni. Se `bRedraw` è **TRUE**, la barra di scorrimento viene ridisegnata. Se è **FALSE**, non viene ridisegnato. La barra di scorrimento viene ridisegnata per impostazione predefinita.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, il valore restituito sarà **TRUE**. In caso contrario, è **FALSE**.  
  
### <a name="remarks"></a>Note  
 È necessario fornire i valori necessari per il `SCROLLINFO` struttura di parametri, inclusi i valori di flag.  
  
 Il `SCROLLINFO` struttura contiene informazioni su una barra di scorrimento, inclusi i valori minimo e massimo scorrimento posizioni, le dimensioni della pagina e la posizione della casella di scorrimento (casella). Vedere il [SCROLLINFO](http://msdn.microsoft.com/library/windows/desktop/bb787537) argomento struttura in Windows SDK per ulteriori informazioni su come modificare le impostazioni predefinite di struttura.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CScrollBar#3](../../mfc/reference/codesnippet/cpp/cscrollbar-class_3.cpp)]  
  
##  <a name="setscrollpos"></a>  CScrollBar::SetScrollPos  
 Imposta la posizione corrente di una casella di scorrimento a quello specificato da `nPos` e, se specificato, ridisegna la barra di scorrimento per riflettere la nuova posizione.  
  
```  
int SetScrollPos(
    int nPos,  
    BOOL bRedraw = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Specifica la nuova posizione della casella di scorrimento. Deve essere compreso nell'intervallo di scorrimento.  
  
 `bRedraw`  
 Specifica se la barra di scorrimento deve essere ridisegnata in modo da riflettere la nuova posizione. Se `bRedraw` è **TRUE**, la barra di scorrimento viene ridisegnata. Se è **FALSE**, non viene ridisegnato. La barra di scorrimento viene ridisegnata per impostazione predefinita.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica la posizione precedente della casella di scorrimento, se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Impostare `bRedraw` a **FALSE** ogni volta che verrà ridisegnata la barra di scorrimento da una chiamata successiva a un'altra funzione per evitare che la barra di scorrimento ridisegnata due volte all'interno di un breve periodo di tempo.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CScrollBar::SetScrollRange](#setscrollrange).  
  
##  <a name="setscrollrange"></a>  CScrollBar::SetScrollRange  
 Imposta i valori di posizione minima e massima correnti per la barra di scorrimento specificata.  
  
```  
void SetScrollRange(
    int nMinPos,  
    int nMaxPos,  
    BOOL bRedraw = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nMinPos`  
 Specifica il numero minimo di posizione di scorrimento.  
  
 `nMaxPos`  
 Specifica il numero massimo di posizione di scorrimento.  
  
 `bRedraw`  
 Specifica se la barra di scorrimento deve essere ridisegnata per riflettere la modifica. Se `bRedraw` è **TRUE**, la barra di scorrimento viene ridisegnata; se **FALSE**, non viene ridisegnato. Viene ridisegnato per impostazione predefinita.  
  
### <a name="remarks"></a>Note  
 Impostare `nMinPos` e `nMaxPos` su 0 per nascondere le barre di scorrimento standard.  
  
 Non chiamare questa funzione per nascondere una barra di scorrimento durante l'elaborazione di un messaggio di notifica della barra di scorrimento.  
  
 Se una chiamata a `SetScrollRange` immediatamente dopo una chiamata al `SetScrollPos` funzione membro, impostare `bRedraw` in `SetScrollPos` su 0 per impedire che vengano ridisegnate due volte la barra di scorrimento.  
  
 La differenza tra i valori specificati dal `nMinPos` e `nMaxPos` non deve essere maggiore di 32.767. L'intervallo predefinito per un controllo barra di scorrimento è vuoto (entrambi `nMinPos` e `nMaxPos` sono pari a 0).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CScrollBar#4](../../mfc/reference/codesnippet/cpp/cscrollbar-class_4.cpp)]  
  
##  <a name="showscrollbar"></a>  CScrollBar::ShowScrollBar  
 Mostra o nasconde una barra di scorrimento.  
  
```  
void ShowScrollBar(BOOL bShow = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bShow`  
 Specifica se mostrare o nascosta la barra di scorrimento. Se questo parametro è **TRUE**, viene visualizzata la barra di scorrimento; in caso contrario è nascosta.  
  
### <a name="remarks"></a>Note  
 Un'applicazione non deve chiamare questa funzione per nascondere una barra di scorrimento durante l'elaborazione di un messaggio di notifica della barra di scorrimento.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CScrollBar::Create](#create).  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Classe CButton](../../mfc/reference/cbutton-class.md)   
 [CComboBox (classe)](../../mfc/reference/ccombobox-class.md)   
 [Classe CEdit](../../mfc/reference/cedit-class.md)   
 [CListBox (classe)](../../mfc/reference/clistbox-class.md)   
 [Classe CStatic](../../mfc/reference/cstatic-class.md)   
 [Classe CDialog](../../mfc/reference/cdialog-class.md)
