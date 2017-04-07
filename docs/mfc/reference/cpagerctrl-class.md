---
title: Classe CPagerCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- CPagerCtrl class
ms.assetid: 65ac58dd-4f5e-4b7e-b15c-e0d435a7e884
caps.latest.revision: 26
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
ms.openlocfilehash: 8b8bf05873239f274a9b1285797c01123fe071f7
ms.lasthandoff: 02/24/2017

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
|[CPagerCtrl::Create](#create)|Crea un controllo pager con stili specificati e lo collega a corrente `CPagerCtrl` oggetto.|  
|[CPagerCtrl::CreateEx](#createex)|Crea un controllo pager con stili estesi specificati e lo collega a corrente `CPagerCtrl` oggetto.|  
|[CPagerCtrl::ForwardMouse](#forwardmouse)|Abilita o disabilita l'inoltro [WM_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) messaggi alla finestra contenuta nel controllo di spostamento corrente.|  
|[CPagerCtrl::GetBkColor](#getbkcolor)|Recupera il colore di sfondo del controllo pager corrente.|  
|[CPagerCtrl::GetBorder](#getborder)|Recupera le dimensioni del bordo del controllo pager corrente.|  
|[CPagerCtrl::GetButtonSize](#getbuttonsize)|Recupera le dimensioni del pulsante del controllo pager corrente.|  
|[CPagerCtrl::GetButtonState](#getbuttonstate)|Recupera lo stato del pulsante specificato nel controllo di spostamento corrente.|  
|[CPagerCtrl::GetDropTarget](#getdroptarget)|Recupera il [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interfaccia per il controllo di spostamento corrente.|  
|[CPagerCtrl::GetScrollPos](#getscrollpos)|Recupera la posizione di scorrimento del controllo pager corrente.|  
|[CPagerCtrl::IsButtonDepressed](#isbuttondepressed)|Indica se il pulsante specificato del controllo pager corrente è in `pressed` dello stato.|  
|[CPagerCtrl::IsButtonGrayed](#isbuttongrayed)|Indica se il pulsante specificato del controllo pager corrente è in `grayed` dello stato.|  
|[CPagerCtrl::IsButtonHot](#isbuttonhot)|Indica se il pulsante specificato del controllo pager corrente è in `hot` dello stato.|  
|[CPagerCtrl::IsButtonInvisible](#isbuttoninvisible)|Indica se il pulsante specificato del controllo pager corrente è in `invisible` dello stato.|  
|[CPagerCtrl::IsButtonNormal](#isbuttonnormal)|Indica se il pulsante specificato del controllo pager corrente è in `normal` dello stato.|  
|[CPagerCtrl::RecalcSize](#recalcsize)|Determina il controllo di spostamento corrente ricalcolare le dimensioni della finestra contenuta.|  
|[CPagerCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo del controllo pager corrente.|  
|[CPagerCtrl::SetBorder](#setborder)|Imposta le dimensioni del bordo del controllo pager corrente.|  
|[CPagerCtrl::SetButtonSize](#setbuttonsize)|Imposta le dimensioni del pulsante del controllo pager corrente.|  
|[CPagerCtrl::SetChild](#setchild)|Imposta la finestra indipendente per il controllo di spostamento corrente.|  
|[CPagerCtrl::SetScrollPos](#setscrollpos)|Imposta la posizione di scorrimento del controllo pager corrente.|  
  
## <a name="remarks"></a>Note  
 Un controllo pager è una finestra che contiene un'altra finestra lineare e più grandi della finestra contenitore, che consente di scorrere la finestra contenuta nella visualizzazione. Il controllo di spostamento sono disponibili due pulsanti di scorrimento che scompaiono automaticamente quando si scorre la finestra indipendente per renderne più lontano e nuovamente in caso contrario. È possibile creare un controllo pager che scorre orizzontalmente o verticalmente.  
  
 Ad esempio, se l'applicazione include una barra degli strumenti che non è sufficientemente grande per visualizzare tutti gli elementi, è possibile assegnare la barra degli strumenti a un controllo pager e gli utenti saranno in grado di scorrere la barra degli strumenti a sinistra o a destra per accedere a tutti gli elementi. Microsoft Internet Explorer versione 4.0 (versione commctrl.dll 4.71) introduce il controllo pager.  
  
 Il `CPagerCtrl` viene derivata dal [CWnd](../../mfc/reference/cwnd-class.md) (classe). Per un'illustrazione di un controllo pager e per ulteriori informazioni, vedere [controlli Pager](http://msdn.microsoft.com/library/windows/desktop/bb760855).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CPagerCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="cpagerctrl"></a>CPagerCtrl::CPagerCtrl  
 Costruisce un oggetto `CPagerCtrl`.  
  
```  
CPagerCtrl();
```  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CPagerCtrl::Create](#create) o [CPagerCtrl::CreateEx](#createex) per creare un controllo pager e associarlo al `CPagerCtrl` oggetto.  
  
##  <a name="create"></a>CPagerCtrl::Create  
 Crea un controllo pager con stili specificati e lo collega a corrente `CPagerCtrl` oggetto.  
  
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
|[in] `dwStyle`|Una combinazione bit per bit (OR) di [stili finestra](../../mfc/reference/window-styles.md) e [degli stili del controllo pager](http://msdn.microsoft.com/library/windows/desktop/bb760859) da applicare al controllo.|  
|[in] `rect`|Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene la posizione e le dimensioni del controllo in coordinate client.|  
|[in] `pParentWnd`|Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto finestra padre del controllo. Questo parametro non può essere `NULL`.|  
|[in] `nID`|L'ID del controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Per creare un controllo pager, dichiarare un `CPagerCtrl` variabile, quindi chiamare il [CPagerCtrl::Create](#create) o [CPagerCtrl::CreateEx](#createex) metodo sulla variabile.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene creato un controllo di spostamento, quindi utilizza il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lungo il controllo pager. Nell'esempio viene utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager per 20 pixel e [CPagerCtrl::SetBorder](#setborder) per impostare lo spessore del bordo di 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2 n.&1;](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="createex"></a>CPagerCtrl::CreateEx  
 Crea un controllo pager con stili estesi specificati e lo collega a corrente `CPagerCtrl` oggetto.  
  
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
|[in] `dwExStyle`|Combinazione bit per bit degli stili estesi da applicare al controllo. Per ulteriori informazioni, vedere il `dwExStyle` parametro il [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) (funzione).|  
|[in] `dwStyle`|Una combinazione bit per bit (OR) di [stili finestra](../../mfc/reference/window-styles.md) e [degli stili del controllo pager](http://msdn.microsoft.com/library/windows/desktop/bb760859) da applicare al controllo.|  
|[in] `rect`|Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene la posizione e le dimensioni del controllo in coordinate client.|  
|[in] `pParentWnd`|Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto finestra padre del controllo. Questo parametro non può essere `NULL`.|  
|[in] `nID`|L'ID del controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Per creare un controllo pager, dichiarare un `CPagerCtrl` variabile, quindi chiamare il [CPagerCtrl::Create](#create) o [CPagerCtrl::CreateEx](#createex) metodo sulla variabile.  
  
##  <a name="forwardmouse"></a>CPagerCtrl::ForwardMouse  
 Abilita o disabilita l'inoltro [WM_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) messaggi alla finestra contenuta nel controllo di spostamento corrente.  
  
```  
void ForwardMouse(BOOL bForward);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `bForward`|`true`per inoltrare i messaggi del mouse, o `false` non inoltrare i messaggi del mouse.|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_FORWARDMOUSE](http://msdn.microsoft.com/library/windows/desktop/bb760867) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getborder"></a>CPagerCtrl::GetBorder  
 Recupera le dimensioni del bordo del controllo pager corrente.  
  
```  
int GetBorder() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni correnti di bordo, misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBORDER](http://msdn.microsoft.com/library/windows/desktop/bb760869) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::GetBorder](#getborder) per recuperare lo spessore del bordo del controllo di spostamento.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2 n.&5;](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_2.cpp)]  
  
##  <a name="getbkcolor"></a>CPagerCtrl::GetBkColor  
 Recupera il colore di sfondo del controllo pager corrente.  
  
```  
COLORREF GetBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) contenente il colore di sfondo corrente del controllo pager.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760868) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::SetBkColor](#setbkcolor) per impostare il colore di sfondo del controllo pager in rosso e [CPagerCtrl::GetBkColor](#getbkcolor) metodo per confermare che è stata apportata la modifica.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2 n.&4;](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]  
  
##  <a name="getbuttonsize"></a>CPagerCtrl::GetButtonSize  
 Recupera le dimensioni del pulsante del controllo pager corrente.  
  
```  
int GetButtonSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Pulsante dimensioni correnti, misurata in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760870) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Se il controllo pager di `PGS_HORZ` stile, le dimensioni del pulsante determina la larghezza dei pulsanti di spostamento, e se dispone del controllo pager di `PGS_VERT` stile, le dimensioni del pulsante determina l'altezza dei pulsanti di spostamento. Per ulteriori informazioni, vedere [degli stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).  
  
##  <a name="getbuttonstate"></a>CPagerCtrl::GetButtonState  
 Recupera lo stato del pulsante di scorrimento specificato nel controllo di spostamento corrente.  
  
```  
DWORD GetButtonState(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iButton`|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante a destra. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per ulteriori informazioni, vedere [degli stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato del pulsante specificato mediante il `iButton` parametro. The state is either `PGF_INVISIBLE`, `PGF_NORMAL`, `PGF_GRAYED`, `PGF_DEPRESSED`, or `PGF_HOT`. Per ulteriori informazioni, vedere la sezione di valore restituito di [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getdroptarget"></a>CPagerCtrl::GetDropTarget  
 Recupera il [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interfaccia per il controllo di spostamento corrente.  
  
```  
IDropTarget* GetDropTarget() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `IDropTarget` interfaccia per il controllo di spostamento corrente.  
  
### <a name="remarks"></a>Note  
 `IDropTarget`è una delle interfacce implementate per supportare operazioni di trascinamento e rilascio dell'applicazione.  
  
 Questo metodo invia il [PGM_GETDROPTARGET](http://msdn.microsoft.com/library/windows/desktop/bb760872) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Il chiamante di questo metodo è responsabile della chiamata di `Release` membro del [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interfaccia quando l'interfaccia non è più necessario.  
  
##  <a name="getscrollpos"></a>CPagerCtrl::GetScrollPos  
 Recupera la posizione di scorrimento del controllo pager corrente.  
  
```  
int GetScrollPos() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La posizione di scorrimento corrente, misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETPOS](http://msdn.microsoft.com/library/windows/desktop/bb760874) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::GetScrollPos](#getscrollpos) per recuperare la posizione corrente del controllo pager. Se il controllo pager non è arriva a zero, la posizione più a sinistra, viene utilizzata la [CPagerCtrl::SetScrollPos](#setscrollpos) per impostare la posizione di scorrimento su zero.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s&#2;7](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_4.cpp)]  
  
##  <a name="isbuttondepressed"></a>CPagerCtrl::IsButtonDepressed  
 Indica se il pulsante di scorrimento specificata del controllo pager corrente è nello stato pressed.  
  
```  
BOOL IsButtonDepressed(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iButton`|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante a destra. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per ulteriori informazioni, vedere [degli stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il pulsante specificato è premuta; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Viene quindi verificato se è stato restituito `PGF_DEPRESSED`. Per ulteriori informazioni, vedere la sezione di valore restituito di [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
##  <a name="isbuttongrayed"></a>CPagerCtrl::IsButtonGrayed  
 Indica se il pulsante di scorrimento specificata del controllo pager corrente è in stato inattivo.  
  
```  
BOOL IsButtonGrayed(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iButton`|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante a destra. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per ulteriori informazioni, vedere [degli stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il pulsante specificato è in stato inattivo. in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Viene quindi verificato se è stato restituito `PGF_GRAYED`. Per ulteriori informazioni, vedere la sezione di valore restituito di [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
##  <a name="isbuttonhot"></a>CPagerCtrl::IsButtonHot  
 Indica se il pulsante di scorrimento specificata del controllo pager corrente è in stato attivo.  
  
```  
BOOL IsButtonHot(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iButton`|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante a destra. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per ulteriori informazioni, vedere [degli stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il pulsante specificato si trova in stato attivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Viene quindi verificato se è stato restituito `PGF_HOT`. Per ulteriori informazioni, vedere la sezione di valore restituito di [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
##  <a name="isbuttoninvisible"></a>CPagerCtrl::IsButtonInvisible  
 Indica se il pulsante di scorrimento specificata del controllo pager corrente è in stato invisibile.  
  
```  
BOOL IsButtonInvisible(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iButton`|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante a destra. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per ulteriori informazioni, vedere [degli stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il pulsante specificato è in stato invisibile. in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Windows rendere invisibile il pulsante di scorrimento in una direzione particolare quando si scorre la finestra indipendente per renderne più lontani perché facendo clic sul pulsante ulteriormente non visualizzare più di una finestra contenuta.  
  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Viene quindi verificato se è stato restituito `PGF_INVISIBLE`. Per ulteriori informazioni, vedere la sezione di valore restituito di [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::IsButtonInvisible](#isbuttoninvisible) metodo per determinare se il controllo di spostamento a sinistra del e sono disponibili pulsanti di scorrimento a destra.  
  
 [!code-cpp[6 NVC_MFC_CSplitButton_s2](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_5.cpp)]  
  
##  <a name="isbuttonnormal"></a>CPagerCtrl::IsButtonNormal  
 Indica se il pulsante di scorrimento specificata del controllo pager corrente è nello stato normale.  
  
```  
BOOL IsButtonNormal(int iButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iButton`|Indica il pulsante per cui viene recuperato lo stato. Se lo stile del controllo pager `PGS_HORZ`, specificare `PGB_TOPORLEFT` per il pulsante sinistro e `PGB_BOTTOMORRIGHT` per il pulsante a destra. Se lo stile del controllo pager `PGS_VERT`, specificare `PGB_TOPORLEFT` per il pulsante in alto e `PGB_BOTTOMORRIGHT` per il pulsante nella parte inferiore. Per ulteriori informazioni, vedere [degli stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il pulsante specificato è nello stato normale; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Viene quindi verificato se è stato restituito `PGF_NORMAL`. Per ulteriori informazioni, vedere la sezione di valore restituito di [PGM_GETBUTTONSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760871) messaggio.  
  
##  <a name="recalcsize"></a>CPagerCtrl::RecalcSize  
 Determina il controllo di spostamento corrente ricalcolare le dimensioni della finestra contenuta.  
  
```  
void RecalcSize();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_RECALCSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760876) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Di conseguenza, il controllo pager invia il [PGN_CALCSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760864) notifica per ottenere le dimensioni di scorrimento della finestra indipendente.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::RecalcSize](#recalcsize) metodo per richiedere il controllo di spostamento corrente ricalcolo delle dimensioni.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2 n.&3;](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_6.cpp)]  
  
### <a name="example"></a>Esempio  
 L'esempio seguente usa [messaggio reflection](../../mfc/tn062-message-reflection-for-windows-controls.md) per abilitare il controllo pager ricalcolare dimensioni invece della finestra padre del controllo per eseguire il calcolo. L'esempio deriva il `MyPagerCtrl` classe il [classe CPagerCtrl](../../mfc/reference/cpagerctrl-class.md), quindi utilizza una mappa messaggi per associare il [PGN_CALCSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760864) notifica con il `OnCalcsize` gestore delle notifiche. In questo esempio, il gestore delle notifiche imposta la larghezza e altezza del controllo pager a valori fissi.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2 n.&8;](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_7.cpp)]  
  
##  <a name="setbkcolor"></a>CPagerCtrl::SetBkColor  
 Imposta il colore di sfondo del controllo pager corrente.  
  
```  
COLORREF SetBkColor(COLORREF clrBk);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `clrBk`|Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) contenente il nuovo colore di sfondo del controllo pager.|  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) contenente il colore di sfondo precedente del controllo pager.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_SETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760878) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzata la [CPagerCtrl::SetBkColor](#setbkcolor) per impostare il colore di sfondo del controllo pager in rosso e [CPagerCtrl::GetBkColor](#getbkcolor) metodo per confermare che è stata apportata la modifica.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2 n.&4;](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]  
  
##  <a name="setborder"></a>CPagerCtrl::SetBorder  
 Imposta le dimensioni del bordo del controllo pager corrente.  
  
```  
int SetBorder(int iBorder);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iBorder`|La nuova dimensione del bordo, misurato in pixel. Se il `iBorder` parametro è negativo, la dimensione del bordo è impostata su zero.|  
  
### <a name="return-value"></a>Valore restituito  
 La dimensione del bordo precedente, misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_SETBORDER](http://msdn.microsoft.com/library/windows/desktop/bb760880) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene creato un controllo di spostamento, quindi utilizza il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lungo il controllo pager. Nell'esempio viene utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager per 20 pixel e [CPagerCtrl::SetBorder](#setborder) per impostare lo spessore del bordo di 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2 n.&1;](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="setbuttonsize"></a>CPagerCtrl::SetButtonSize  
 Imposta le dimensioni del pulsante del controllo pager corrente.  
  
```  
int SetButtonSize(int iButtonSize);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iButtonSize`|Le nuove dimensioni del pulsante, misurato in pixel.|  
  
### <a name="return-value"></a>Valore restituito  
 La dimensione di pulsante precedente, misurato in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_SETBUTTONSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760886) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Se il controllo pager di `PGS_HORZ` stile, le dimensioni del pulsante determina la larghezza dei pulsanti di spostamento, e se dispone del controllo pager di `PGS_VERT` stile, le dimensioni del pulsante determina l'altezza dei pulsanti di spostamento. Le dimensioni predefinite del pulsante sono tre quarti della larghezza della barra di scorrimento e la dimensione minima pulsante è 12 pixel. Per ulteriori informazioni, vedere [degli stili del controllo Pager](http://msdn.microsoft.com/library/windows/desktop/bb760859).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene creato un controllo di spostamento, quindi utilizza il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lungo il controllo pager. Nell'esempio viene utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager per 20 pixel e [CPagerCtrl::SetBorder](#setborder) per impostare lo spessore del bordo di 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2 n.&1;](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="setchild"></a>CPagerCtrl::SetChild  
 Imposta la finestra indipendente per il controllo di spostamento corrente.  
  
```  
void SetChild(HWND hwndChild);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `hwndChild`|Handle alla finestra deve essere incluso.|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_SETCHILD](http://msdn.microsoft.com/library/windows/desktop/bb760884) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Questo metodo non modifica l'elemento padre della finestra indipendente. viene assegnato solo un handle di finestra per il controllo pager per lo scorrimento. Nella maggior parte dei casi, la finestra indipendente sarà una finestra figlio del controllo pager.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene creato un controllo di spostamento, quindi utilizza il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lungo il controllo pager. Nell'esempio viene utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager per 20 pixel e [CPagerCtrl::SetBorder](#setborder) per impostare lo spessore del bordo di 1 pixel.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2 n.&1;](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]  
  
##  <a name="setscrollpos"></a>CPagerCtrl::SetScrollPos  
 Imposta la posizione di scorrimento del controllo pager corrente.  
  
```  
void SetScrollPos(int iPos);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iPos`|La nuova posizione di scorrimento, misurato in pixel.|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PGM_SETPOS](http://msdn.microsoft.com/library/windows/desktop/bb760886) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CPagerCtrl](../../mfc/reference/cpagerctrl-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Controlli di spostamento](http://msdn.microsoft.com/library/windows/desktop/bb760855)




