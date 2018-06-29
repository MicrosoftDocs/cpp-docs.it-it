---
title: Classe CPagerCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CPagerCtrl
- AFXCMN/CPagerCtrl
- AFXCMN/CPagerCtrl::CPagerCtrl
- AFXCMN/CPagerCtrl::Create
- AFXCMN/CPagerCtrl::CreateEx
- AFXCMN/CPagerCtrl::ForwardMouse
- AFXCMN/CPagerCtrl::GetBkColor
- AFXCMN/CPagerCtrl::GetBorder
- AFXCMN/CPagerCtrl::GetButtonSize
- AFXCMN/CPagerCtrl::GetButtonState
- AFXCMN/CPagerCtrl::GetDropTarget
- AFXCMN/CPagerCtrl::GetScrollPos
- AFXCMN/CPagerCtrl::IsButtonDepressed
- AFXCMN/CPagerCtrl::IsButtonGrayed
- AFXCMN/CPagerCtrl::IsButtonHot
- AFXCMN/CPagerCtrl::IsButtonInvisible
- AFXCMN/CPagerCtrl::IsButtonNormal
- AFXCMN/CPagerCtrl::RecalcSize
- AFXCMN/CPagerCtrl::SetBkColor
- AFXCMN/CPagerCtrl::SetBorder
- AFXCMN/CPagerCtrl::SetButtonSize
- AFXCMN/CPagerCtrl::SetChild
- AFXCMN/CPagerCtrl::SetScrollPos
dev_langs:
- C++
helpviewer_keywords:
- CPagerCtrl [MFC], CPagerCtrl
- CPagerCtrl [MFC], Create
- CPagerCtrl [MFC], CreateEx
- CPagerCtrl [MFC], ForwardMouse
- CPagerCtrl [MFC], GetBkColor
- CPagerCtrl [MFC], GetBorder
- CPagerCtrl [MFC], GetButtonSize
- CPagerCtrl [MFC], GetButtonState
- CPagerCtrl [MFC], GetDropTarget
- CPagerCtrl [MFC], GetScrollPos
- CPagerCtrl [MFC], IsButtonDepressed
- CPagerCtrl [MFC], IsButtonGrayed
- CPagerCtrl [MFC], IsButtonHot
- CPagerCtrl [MFC], IsButtonInvisible
- CPagerCtrl [MFC], IsButtonNormal
- CPagerCtrl [MFC], RecalcSize
- CPagerCtrl [MFC], SetBkColor
- CPagerCtrl [MFC], SetBorder
- CPagerCtrl [MFC], SetButtonSize
- CPagerCtrl [MFC], SetChild
- CPagerCtrl [MFC], SetScrollPos
ms.assetid: 65ac58dd-4f5e-4b7e-b15c-e0d435a7e884
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ad0d928f7190d3908c41560c7fb106e3024ebc6e
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37079648"
---
# <a name="cpagerctrl-class"></a>Classe CPagerCtrl
La classe `CPagerCtrl` esegue il wrapping del controllo pager di Windows, che può scorrere all'interno della visualizzazione una finestra contenuta che non rientra nella finestra contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPagerCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPagerCtrl::CPagerCtrl](#cpagerctrl)|Costruisce un oggetto `CPagerCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPagerCtrl::Create](#create)|Crea un controllo cercapersone con stili specificati e lo collega all'oggetto corrente `CPagerCtrl` oggetto.|  
|[CPagerCtrl::CreateEx](#createex)|Crea un controllo cercapersone con stili estesi specificati e lo collega all'oggetto corrente `CPagerCtrl` oggetto.|  
|[CPagerCtrl::ForwardMouse](#forwardmouse)|Abilita o disabilita l'inoltro [WM_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) messaggi nella finestra contenuta nel controllo pager corrente.|  
|[CPagerCtrl::GetBkColor](#getbkcolor)|Recupera il colore di sfondo del controllo pager corrente.|  
|[CPagerCtrl::GetBorder](#getborder)|Recupera la dimensione del bordo del controllo pager corrente.|  
|[CPagerCtrl::GetButtonSize](#getbuttonsize)|Recupera la dimensione di pulsante del controllo pager corrente.|  
|[CPagerCtrl::GetButtonState](#getbuttonstate)|Recupera lo stato del pulsante specificato nel controllo pager corrente.|  
|[CPagerCtrl::GetDropTarget](#getdroptarget)|Recupera il [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interfaccia per il controllo pager corrente.|  
|[CPagerCtrl::GetScrollPos](#getscrollpos)|Recupera la posizione di scorrimento del controllo pager corrente.|  
|[CPagerCtrl::IsButtonDepressed](#isbuttondepressed)|Indica se il pulsante specificato del controllo pager corrente è in `pressed` dello stato.|  
|[CPagerCtrl::IsButtonGrayed](#isbuttongrayed)|Indica se il pulsante specificato del controllo pager corrente è in `grayed` dello stato.|  
|[CPagerCtrl::IsButtonHot](#isbuttonhot)|Indica se il pulsante specificato del controllo pager corrente è in `hot` dello stato.|  
|[CPagerCtrl::IsButtonInvisible](#isbuttoninvisible)|Indica se il pulsante specificato del controllo pager corrente è in `invisible` dello stato.|  
|[CPagerCtrl::IsButtonNormal](#isbuttonnormal)|Indica se il pulsante specificato del controllo pager corrente è in `normal` dello stato.|  
|[CPagerCtrl::RecalcSize](#recalcsize)|Fa sì che il controllo pager corrente ricalcolare le dimensioni della finestra contenuta.|  
|[CPagerCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo del controllo pager corrente.|  
|[CPagerCtrl::SetBorder](#setborder)|Imposta le dimensioni del bordo del controllo pager corrente.|  
|[CPagerCtrl::SetButtonSize](#setbuttonsize)|Imposta le dimensioni del pulsante del controllo pager corrente.|  
|[CPagerCtrl::SetChild](#setchild)|Imposta la finestra indipendente per il controllo pager corrente.|  
|[CPagerCtrl::SetScrollPos](#setscrollpos)|Imposta la posizione di scorrimento del controllo pager corrente.|  
  
## <a name="remarks"></a>Note  
 Un controllo cercapersone è una finestra che contiene un'altra finestra lineare e più grande rispetto alla finestra che lo contiene, che consente di scorrere la finestra contenuta nella visualizzazione. Il controllo pager Visualizza due pulsanti di scorrimento che vengono automaticamente eliminate quando si scorre la finestra contenuta per renderne più lontano e nuovamente in caso contrario. È possibile creare un controllo cercapersone verso cui scorre orizzontalmente o verticalmente.  
  
 Ad esempio, se l'applicazione dispone di una barra degli strumenti che non è sufficientemente ampia per visualizzare tutti i relativi elementi, è possibile assegnare la barra degli strumenti a un controllo cercapersone e gli utenti saranno in grado di scorrere la barra degli strumenti a sinistra o a destra per accedere a tutti gli elementi. Microsoft Internet Explorer versione 4.0 (versione commctrl.dll 4.71) introduce il controllo pager.  
  
 Il `CPagerCtrl` classe è derivata dal [CWnd](../../mfc/reference/cwnd-class.md) classe. Per ulteriori informazioni e per un'illustrazione di un controllo cercapersone, vedere [controlli Pager](http://msdn.microsoft.com/library/windows/desktop/bb760855).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CPagerCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="cpagerctrl"></a>  CPagerCtrl::CPagerCtrl  
 Costruisce un oggetto `CPagerCtrl`.  
  
```  
CPagerCtrl();
```  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CPagerCtrl::Create](#create) oppure [CPagerCtrl::CreateEx](#createex) per creare un controllo cercapersone e associarlo al `CPagerCtrl` oggetto.  
  
##  <a name="create"></a>  CPagerCtrl::Create  
 Crea un controllo cercapersone con stili specificati e lo collega all'oggetto corrente `CPagerCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *dwStyle*|Una combinazione bit per bit (OR) di [stili window](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [stili del controllo pager](http://msdn.microsoft.com/library/windows/desktop/bb760859) da applicare al controllo.|  
|[in] *rect*|Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene la posizione e dimensioni del controllo nelle coordinate client.|  
|[in] *pParentWnd*|Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che è la finestra padre del controllo. Questo parametro non può essere `NULL`.|  
|[in] *nID*|L'ID del controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Per creare un controllo cercapersone, dichiarare un `CPagerCtrl` variabile, quindi chiamare il [CPagerCtrl::Create](#create) o [CPagerCtrl::CreateEx](#createex) metodo su tale variabile.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente crea un controllo cercapersone, quindi utilizza il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lunghi con il controllo pager. Nell'esempio viene quindi utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager per 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo a 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="createex"></a>  CPagerCtrl::CreateEx  
 Crea un controllo cercapersone con stili estesi specificati e lo collega all'oggetto corrente `CPagerCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,   
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *dwExStyle*|Combinazione bit per bit di stili estesi da applicare al controllo. Per altre informazioni, vedere la *dwExStyle* parametro del [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) (funzione).|  
|[in] *dwStyle*|Una combinazione bit per bit (OR) di [stili window](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [stili del controllo pager](http://msdn.microsoft.com/library/windows/desktop/bb760859) da applicare al controllo.|  
|[in] *rect*|Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene la posizione e dimensioni del controllo nelle coordinate client.|  
|[in] *pParentWnd*|Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che è la finestra padre del controllo. Questo parametro non può essere `NULL`.|  
|[in] *nID*|L'ID del controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Per creare un controllo cercapersone, dichiarare un `CPagerCtrl` variabile, quindi chiamare il [CPagerCtrl::Create](#create) o [CPagerCtrl::CreateEx](#createex) metodo su tale variabile.  
  
##  <a name="forwardmouse"></a>  CPagerCtrl::ForwardMouse  
 Abilita o disabilita l'inoltro [WM_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) messaggi nella finestra contenuta nel controllo pager corrente.  
  
```  
void ForwardMouse(BOOL bForward);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *bForward*|`true` per inoltrare i messaggi del mouse, o `false` non inoltrare messaggi di mouse.|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_FORWARDMOUSE](http://msdn.microsoft.com/library/windows/desktop/bb760867) messaggio, come descritto in Windows SDK.  
  
##  <a name="getborder"></a>  CPagerCtrl::GetBorder  
 Recupera la dimensione del bordo del controllo pager corrente.  
  
```  
int GetBorder() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni correnti di bordo, misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBORDER](http://msdn.microsoft.com/library/windows/desktop/bb760869) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::GetBorder](#getborder) metodo per recuperare lo spessore del bordo del controllo pager.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#5](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_2.cpp)]  
  
##  <a name="getbkcolor"></a>  CPagerCtrl::GetBkColor  
 Recupera il colore di sfondo del controllo pager corrente.  
  
```  
COLORREF GetBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore contenente il colore di sfondo corrente del controllo pager.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760868) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::SetBkColor](#setbkcolor) metodo per impostare il colore di sfondo del controllo pager in rosso e il [CPagerCtrl::GetBkColor](#getbkcolor) metodo per confermare che è stata apportata la modifica.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]  
  
##  <a name="getbuttonsize"></a>  CPagerCtrl::GetButtonSize  
 Recupera la dimensione di pulsante del controllo pager corrente.  
  
```  
int GetButtonSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La dimensione corrente del controllo button, misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760870) messaggio, come descritto in Windows SDK.  
  
 Se il controllo pager ha il `PGS_HORZ` stile, la dimensione del controllo button determina la larghezza dei pulsanti di spostamento, e se dispone del controllo pager il `PGS_VERT` stile, la dimensione del controllo button determina l'altezza dei pulsanti di spostamento. Per altre informazioni, vedere [stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).  
  
##  <a name="getbuttonstate"></a>  CPagerCtrl::GetButtonState  
 Recupera lo stato del pulsante di scorrimento specificata in del controllo pager corrente.  
  
```  
DWORD GetButtonState(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *iButton*|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante destro del mouse. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato del pulsante specificato mediante il *iButton* parametro. Lo stato è `PGF_INVISIBLE`, `PGF_NORMAL`, `PGF_GRAYED`, `PGF_DEPRESSED`, o `PGF_HOT`. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, come descritto in Windows SDK.  
  
##  <a name="getdroptarget"></a>  CPagerCtrl::GetDropTarget  
 Recupera il [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interfaccia per il controllo pager corrente.  
  
```  
IDropTarget* GetDropTarget() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `IDropTarget` interfaccia per il controllo pager corrente.  
  
### <a name="remarks"></a>Note  
 `IDropTarget` è una delle interfacce implementate per supportare le operazioni di trascinamento e rilascio nell'applicazione.  
  
 Questo metodo invia il [PGM_GETDROPTARGET](http://msdn.microsoft.com/library/windows/desktop/bb760872) messaggio, come descritto in Windows SDK. Il chiamante di questo metodo è responsabile della chiamata di `Release` membro del [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interfaccia quando l'interfaccia non è più necessario.  
  
##  <a name="getscrollpos"></a>  CPagerCtrl::GetScrollPos  
 Recupera la posizione di scorrimento del controllo pager corrente.  
  
```  
int GetScrollPos() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La posizione di scorrimento corrente, misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETPOS](http://msdn.microsoft.com/library/windows/desktop/bb760874) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::GetScrollPos](#getscrollpos) metodo per recuperare la posizione di scorrimento corrente del controllo pager. Se il controllo pager non è già scorrere a zero, la posizione più a sinistra, nell'esempio viene utilizzata la [CPagerCtrl::SetScrollPos](#setscrollpos) metodo per impostare la posizione di scorrimento su zero.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#7](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_4.cpp)]  
  
##  <a name="isbuttondepressed"></a>  CPagerCtrl::IsButtonDepressed  
 Indica se il pulsante di scorrimento specificata del controllo pager corrente è nello stato pressed.  
  
```  
BOOL IsButtonDepressed(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *iButton*|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante destro del mouse. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il pulsante specificato è nello stato pressed; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, come descritto in Windows SDK. Viene quindi verificato se lo stato restituito è `PGF_DEPRESSED`. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
##  <a name="isbuttongrayed"></a>  CPagerCtrl::IsButtonGrayed  
 Indica se il pulsante di scorrimento specificata del controllo pager corrente è in stato non disponibile.  
  
```  
BOOL IsButtonGrayed(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *iButton*|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante destro del mouse. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il pulsante specificato è in stato inattivo. in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, come descritto in Windows SDK. Viene quindi verificato se lo stato restituito è `PGF_GRAYED`. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
##  <a name="isbuttonhot"></a>  CPagerCtrl::IsButtonHot  
 Indica se il pulsante di scorrimento specificata del controllo pager corrente è in stato attivo.  
  
```  
BOOL IsButtonHot(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *iButton*|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante destro del mouse. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il pulsante specificato si trova in stato attivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, come descritto in Windows SDK. Viene quindi verificato se lo stato restituito è `PGF_HOT`. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
##  <a name="isbuttoninvisible"></a>  CPagerCtrl::IsButtonInvisible  
 Indica se il pulsante di scorrimento specificata del controllo pager corrente è in stato invisibile.  
  
```  
BOOL IsButtonInvisible(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *iButton*|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante destro del mouse. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il pulsante specificato è in stato invisibile. in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Windows rende invisibile il pulsante di scorrimento in una direzione particolare quando la finestra contenuta lo scorrimento per renderne più lontano perché facendo clic sul pulsante ulteriormente non è possibile importare informazioni della finestra contenuta nella visualizzazione.  
  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, come descritto in Windows SDK. Viene quindi verificato se lo stato restituito è `PGF_INVISIBLE`. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::IsButtonInvisible](#isbuttoninvisible) metodo per determinare se a sinistra del controllo pager e pulsanti di scorrimento a destra sono visibili.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#6](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_5.cpp)]  
  
##  <a name="isbuttonnormal"></a>  CPagerCtrl::IsButtonNormal  
 Indica se il pulsante di scorrimento specificata del controllo pager corrente è nello stato normal.  
  
```  
BOOL IsButtonNormal(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *iButton*|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante destro del mouse. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il pulsante specificato è nello stato normal; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, come descritto in Windows SDK. Viene quindi verificato se lo stato restituito è `PGF_NORMAL`. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
##  <a name="recalcsize"></a>  CPagerCtrl::RecalcSize  
 Fa sì che il controllo pager corrente ricalcolare le dimensioni della finestra contenuta.  
  
```  
void RecalcSize();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_RECALCSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760876) messaggio, come descritto in Windows SDK. Di conseguenza, il controllo cercapersone invia il [PGN_CALCSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760864) notifica per ottenere le dimensioni di scorrimento della finestra contenuta.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::RecalcSize](#recalcsize) metodo per richiedere il controllo pager corrente ricalcolo delle dimensioni.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#3](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_6.cpp)]  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata [reflection di messaggio](../../mfc/tn062-message-reflection-for-windows-controls.md) per abilitare il controllo pager ricalcolare dimensioni anziché richiedere finestra padre del controllo per eseguire il calcolo. Nell'esempio deriva il `MyPagerCtrl` classe dal [CPagerCtrl classe](../../mfc/reference/cpagerctrl-class.md), quindi utilizza una mappa messaggi per associare il [PGN_CALCSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760864) notifica con il `OnCalcsize` gestore delle notifiche. In questo esempio, il gestore delle notifiche imposta la larghezza e altezza del controllo pager di usare valori fissi.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#8](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_7.cpp)]  
  
##  <a name="setbkcolor"></a>  CPagerCtrl::SetBkColor  
 Imposta il colore di sfondo del controllo pager corrente.  
  
```  
COLORREF SetBkColor(COLORREF clrBk);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *clrBk*|Un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore contenente il nuovo colore di sfondo del controllo pager.|  
  
### <a name="return-value"></a>Valore restituito  
 Un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore contenente il colore di sfondo precedente del controllo pager.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_SETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760878) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::SetBkColor](#setbkcolor) metodo per impostare il colore di sfondo del controllo pager in rosso e il [CPagerCtrl::GetBkColor](#getbkcolor) metodo per confermare che è stata apportata la modifica.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]  
  
##  <a name="setborder"></a>  CPagerCtrl::SetBorder  
 Imposta le dimensioni del bordo del controllo pager corrente.  
  
```  
int SetBorder(int iBorder);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *iBorder*|La nuova dimensione bordo, misurata in pixel. Se il *iBorder* parametro è negativo, il valore di dimensione bordo è impostata su zero.|  
  
### <a name="return-value"></a>Valore restituito  
 Le precedenti dimensioni bordo, misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_SETBORDER](http://msdn.microsoft.com/library/windows/desktop/bb760880) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente crea un controllo cercapersone, quindi utilizza il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lunghi con il controllo pager. Nell'esempio viene quindi utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager per 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo a 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="setbuttonsize"></a>  CPagerCtrl::SetButtonSize  
 Imposta le dimensioni del pulsante del controllo pager corrente.  
  
```  
int SetButtonSize(int iButtonSize);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *iButtonSize*|La nuova dimensione del controllo button, misurato in pixel.|  
  
### <a name="return-value"></a>Valore restituito  
 La dimensione del controllo button precedente, misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_SETBUTTONSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760886) messaggio, come descritto in Windows SDK.  
  
 Se il controllo pager ha il `PGS_HORZ` stile, la dimensione del controllo button determina la larghezza dei pulsanti di spostamento, e se dispone del controllo pager il `PGS_VERT` stile, la dimensione del controllo button determina l'altezza dei pulsanti di spostamento. Le dimensioni predefinite del pulsante sono tre quarti della larghezza della barra di scorrimento e la dimensione minima pulsante è 12 pixel. Per altre informazioni, vedere [stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente crea un controllo cercapersone, quindi utilizza il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lunghi con il controllo pager. Nell'esempio viene quindi utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager per 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo a 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="setchild"></a>  CPagerCtrl::SetChild  
 Imposta la finestra indipendente per il controllo pager corrente.  
  
```  
void SetChild(HWND hwndChild);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *hwndChild*|Handle di finestra deve essere incluso.|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_SETCHILD](http://msdn.microsoft.com/library/windows/desktop/bb760884) messaggio, come descritto in Windows SDK.  
  
 Questo metodo non modifica l'elemento padre della finestra contenuta; viene assegnato solo un handle di finestra per il controllo pager per lo scorrimento. Nella maggior parte dei casi, la finestra contenuta sarà una finestra figlio del controllo pager.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente crea un controllo cercapersone, quindi utilizza il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lunghi con il controllo pager. Nell'esempio viene quindi utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager per 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo a 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="setscrollpos"></a>  CPagerCtrl::SetScrollPos  
 Imposta la posizione di scorrimento del controllo pager corrente.  
  
```  
void SetScrollPos(int iPos);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *ipo*|La nuova posizione di scorrimento, misurata in pixel.|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_SETPOS](http://msdn.microsoft.com/library/windows/desktop/bb760886) messaggio, come descritto in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CPagerCtrl](../../mfc/reference/cpagerctrl-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Controlli pager](http://msdn.microsoft.com/library/windows/desktop/bb760855)



