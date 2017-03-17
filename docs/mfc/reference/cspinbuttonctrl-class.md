---
title: CSpinButtonCtrl (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSpinButtonCtrl
- AFXCMN/CSpinButtonCtrl
- AFXCMN/CSpinButtonCtrl::CSpinButtonCtrl
- AFXCMN/CSpinButtonCtrl::Create
- AFXCMN/CSpinButtonCtrl::CreateEx
- AFXCMN/CSpinButtonCtrl::GetAccel
- AFXCMN/CSpinButtonCtrl::GetBase
- AFXCMN/CSpinButtonCtrl::GetBuddy
- AFXCMN/CSpinButtonCtrl::GetPos
- AFXCMN/CSpinButtonCtrl::GetRange
- AFXCMN/CSpinButtonCtrl::SetAccel
- AFXCMN/CSpinButtonCtrl::SetBase
- AFXCMN/CSpinButtonCtrl::SetBuddy
- AFXCMN/CSpinButtonCtrl::SetPos
- AFXCMN/CSpinButtonCtrl::SetRange
dev_langs:
- C++
helpviewer_keywords:
- Windows common controls [C++], CSpinButtonCtrl
- CSpinButtonCtrl class
- CSpinButtonCtrl class, common controls
- up-down controls, spin button control
- spin button control
ms.assetid: 509bfd76-1c5a-4af6-973f-e133c0b87734
caps.latest.revision: 23
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
ms.openlocfilehash: 486a0842ed04f0e760bbb332986a97a35ce9851f
ms.lasthandoff: 02/24/2017

---
# <a name="cspinbuttonctrl-class"></a>CSpinButtonCtrl (classe)
Fornisce la funzionalità del controllo pulsante di selezione comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSpinButtonCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSpinButtonCtrl::CSpinButtonCtrl](#cspinbuttonctrl)|Costruisce un oggetto `CSpinButtonCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSpinButtonCtrl::Create](#create)|Crea un controllo pulsante di selezione e lo collega a un `CSpinButtonCtrl` oggetto.|  
|[CSpinButtonCtrl::CreateEx](#createex)|Crea un controllo pulsante di selezione con gli stili estesi di Windows specificati e lo collega a un `CSpinButtonCtrl` oggetto.|  
|[CSpinButtonCtrl::GetAccel](#getaccel)|Recupera le informazioni di accelerazione per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::GetBase](#getbase)|Recupera la base per un controllo pulsante di selezione corrente.|  
|[CSpinButtonCtrl::GetBuddy](#getbuddy)|Recupera un puntatore alla finestra contatto corrente.|  
|[CSpinButtonCtrl::GetPos](#getpos)|Recupera la posizione corrente del controllo pulsante di selezione.|  
|[CSpinButtonCtrl::GetRange](#getrange)|Recupera i limiti superiori e inferiori (intervallo) per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetAccel](#setaccel)|Imposta l'accelerazione per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetBase](#setbase)|Imposta la base per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetBuddy](#setbuddy)|Imposta la finestra di contatto per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetPos](#setpos)|Imposta la posizione corrente per il controllo.|  
|[CSpinButtonCtrl:: SetRange](#setrange)|Imposta i limiti superiori e inferiori (intervallo) per un controllo pulsante di selezione.|  
  
## <a name="remarks"></a>Note  
 "Controllo pulsante di selezione" (anche noto come controllo di scorrimento) è una coppia di frecce che l'utente può selezionare per incrementare o decrementare un valore, ad esempio una posizione di scorrimento o un numero visualizzato in un controllo complementare. Il valore associato a un controllo pulsante di selezione viene chiamato alla posizione corrente. Controllo pulsante di selezione viene spesso utilizzato con un controllo correlato, definito "finestra buddy".  
  
 Questo controllo (e pertanto la `CSpinButtonCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 All'utente, un controllo pulsante di selezione e la relativa finestra buddy spesso simile a un singolo controllo. È possibile specificare che un controllo pulsante di selezione automaticamente posizionerà accanto relativa finestra buddy e impostato automaticamente la didascalia della finestra buddy nella posizione corrente. È possibile utilizzare un controllo pulsante di selezione con un controllo di modifica per richiedere all'utente per l'input numerico.  
  
 Facendo clic sulla freccia Sposta la posizione corrente verso il valore massimo e facendo clic sulla freccia giù sposta la posizione corrente verso il valore minimo. Per impostazione predefinita, il valore minimo è 100 e il valore massimo è 0. Ogni volta che l'impostazione minima è superiore al massimo l'impostazione (ad esempio, quando vengono utilizzate le impostazioni predefinite), fare clic su freccia diminuisce rapidamente il valore della posizione e facendo clic sulla freccia rivolta verso il basso aumenta.  
  
 Controllo pulsante di selezione senza finestra buddy funziona come una sorta di barra di scorrimento semplificata. Ad esempio, un controllo scheda Visualizza talvolta un controllo pulsante di selezione per consentire all'utente di scorrere le schede aggiuntive all'interno della visualizzazione.  
  
 Per ulteriori informazioni sull'utilizzo di `CSpinButtonCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CSpinButtonCtrl utilizzando](../../mfc/using-cspinbuttonctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CSpinButtonCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="create"></a>CSpinButtonCtrl::Create  
 Crea un controllo pulsante di selezione e lo collega a un `CSpinButtonCtrl` oggetto...  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile del controllo pulsante di selezione. Applicare qualsiasi combinazione di stili del controllo pulsante di selezione al controllo. Questi stili sono descritti in [degli stili del controllo di scorrimento](http://msdn.microsoft.com/library/windows/desktop/bb759885) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 Specifica le dimensioni e posizione del controllo pulsante di selezione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura  
  
 `pParentWnd`  
 Un puntatore alla finestra padre del controllo pulsante di selezione, in genere un `CDialog`. Non deve essere **NULL.**  
  
 `nID`  
 Specifica l'ID. del controllo pulsante di selezione  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione è stata completata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Costruire un `CSpinButtonCtrl` prima l'oggetto in due passaggi, chiamare il costruttore e quindi chiamare **crea**, che crea il controllo pulsante di selezione e lo collega a di `CSpinButtonCtrl` oggetto.  
  
 Per creare un controllo pulsante di selezione con stili finestra estesi, chiamare [CSpinButtonCtrl::CreateEx](#createex) anziché **crea**.  
  
##  <a name="createex"></a>CSpinButtonCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e lo associa a di `CSpinButtonCtrl` oggetto.  
  
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
 Specifica lo stile esteso di controllo da creare. Per un elenco degli stili estesi, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwStyle`  
 Specifica lo stile del controllo pulsante di selezione. Applicare qualsiasi combinazione di stili del controllo pulsante di selezione al controllo. Questi stili sono descritti in [degli stili del controllo di scorrimento](http://msdn.microsoft.com/library/windows/desktop/bb759885) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) che descrive le dimensioni e posizione della finestra deve essere creata, in coordinate client della struttura `pParentWnd`.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché [crea](#create) per applicare stili estesi di Windows, specificati da precedere Windows stile esteso **WS_EX _**.  
  
##  <a name="cspinbuttonctrl"></a>CSpinButtonCtrl::CSpinButtonCtrl  
 Costruisce un oggetto `CSpinButtonCtrl`.  
  
```  
CSpinButtonCtrl();
```  
  
##  <a name="getaccel"></a>CSpinButtonCtrl::GetAccel  
 Recupera le informazioni di accelerazione per un controllo pulsante di selezione.  
  
```  
UINT GetAccel(
    int nAccel,  
    UDACCEL* pAccel) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nAccel`  
 Numero di elementi nella matrice specificata dal `pAccel`.  
  
 `pAccel`  
 Puntatore a una matrice di [UDACCEL](http://msdn.microsoft.com/library/windows/desktop/bb759897) strutture che riceve le informazioni di accelerazione.  
  
### <a name="return-value"></a>Valore restituito  
 Numero di strutture di tasti di scelta rapida recuperati.  
  
##  <a name="getbase"></a>CSpinButtonCtrl::GetBase  
 Recupera la base per un controllo pulsante di selezione corrente.  
  
```  
UINT GetBase() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore di base corrente.  
  
##  <a name="getbuddy"></a>CSpinButtonCtrl::GetBuddy  
 Recupera un puntatore alla finestra contatto corrente.  
  
```  
CWnd* GetBuddy() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra contatto corrente.  
  
##  <a name="getpos"></a>CSpinButtonCtrl::GetPos  
 Recupera la posizione corrente del controllo pulsante di selezione.  
  
```  
int GetPos() const;  int GetPos32(LPBOOL lpbError = NULL) const;  ```  
  
### Parameters  
 *lpbError*  
 A pointer to a boolean value that is set to zero if the value is successfully retrieved or non-zero if an error occurs. If this parameter is set to **NULL**, errors are not reported.  
  
### Return Value  
 The first version returns the 16-bit current position in the low-order word. The high-order word is nonzero if an error occurred.  
  
 The second version returns the 32-bit position.  
  
### Remarks  
 When it processes the value returned, the control updates its current position based on the caption of the buddy window. The control returns an error if there is no buddy window or if the caption specifies an invalid or out-of-range value.  
  
##  <a name="getrange"></a>  CSpinButtonCtrl::GetRange  
 Retrieves the upper and lower limits (range) for a spin button control.  
  
```  
DWORD GetRange() const.  
  
GetRange void (int / basso,  
    int / superiore) const.  
  
void GetRange32 (int / basso,  
    int / superiore) const.  
```  
  
### Parameters  
 *lower*  
 Reference to an integer that receives the lower limit for the control.  
  
 *upper*  
 Reference to an integer that receives the upper limit for the control.  
  
### Return Value  
 The first version returns a 32-bit value containing the upper and lower limits. The low-order word is the upper limit for the control, and the high-order word is the lower limit.  
  
### Remarks  
 The member function `GetRange32` retrieves the spin button control's range as a 32-bit integer.  
  
##  <a name="setaccel"></a>  CSpinButtonCtrl::SetAccel  
 Sets the acceleration for a spin button control.  
  
```  
Funzioni membro SetAccel BOOL (int nAccel,  
    UDACCEL* pAccel);
```  
  
### Parameters  
 `nAccel`  
 Number of [UDACCEL](http://msdn.microsoft.com/library/windows/desktop/bb759897) structures specified by `pAccel`.  
  
 `pAccel`  
 Pointer to an array of `UDACCEL` structures, which contain acceleration information. Elements should be sorted in ascending order based on the **nSec** member.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
##  <a name="setbase"></a>  CSpinButtonCtrl::SetBase  
 Sets the base for a spin button control.  
  
```  
int SetBase (int nBase);
```  
  
### Parameters  
 `nBase`  
 New base value for the control. It can be 10 for decimal or 16 for hexadecimal.  
  
### Return Value  
 The previous base value if successful, or zero if an invalid base is given.  
  
### Remarks  
 The base value determines whether the buddy window displays numbers in decimal or hexadecimal digits. Hexadecimal numbers are always unsigned; decimal numbers are signed.  
  
##  <a name="setbuddy"></a>  CSpinButtonCtrl::SetBuddy  
 Sets the buddy window for a spin button control.  
  
```  
CWnd* SetBuddy (CWnd* pWndBuddy);
```  
  
### Parameters  
 `pWndBuddy`  
 Pointer to the new buddy window.  
  
### Return Value  
 A pointer to the previous buddy window.  
  
### Remarks  
 A spin control is almost always associated with another window, such as an edit control, that displays some content. This other window is called the "buddy" of the spin control.  
  
##  <a name="setpos"></a>  CSpinButtonCtrl::SetPos  
 Sets the current position for a spin button control.  
  
```  
int funzione membro SetPos (int nPos);  
int SetPos32(int nPos);
```  
  
### Parameters  
 `nPos`  
 New position for the control. This value must be in the range specified by the upper and lower limits for the control.  
  
### Return Value  
 The previous position (16-bit precision for `SetPos`, 32-bit precision for `SetPos32`).  
  
### Remarks  
 `SetPos32` sets the 32-bit position.  
  
##  <a name="setrange"></a>  CSpinButtonCtrl::SetRange  
 Sets the upper and lower limits (range) for a spin button control.  
  
```  
SetRange void (nLower breve,  
    breve nUpper);

 
void SetRange32 (int nLower,  
    int nUpper);
```  
  
### Parameters  
 `nLower`and `nUpper`  
 Upper and lower limits for the control. For `SetRange`, neither limit can be greater than **UD_MAXVAL** or less than **UD_MINVAL**; in addition, the difference between the two limits cannot exceed **UD_MAXVAL**. `SetRange32` places no restrictions on the limits; use any integers.  
  
### Remarks  
 The member function `SetRange32` sets the 32-bit range for the spin button control.  
  
> [!NOTE]
>  The default range for the spin button has the maximum set to zero (0) and the minimum set to 100. Because the maximum value is less than the minimum value, clicking the up arrow will decrease the position and clicking the down arrow will increase it. Use `CSpinButtonCtrl::SetRange` to adjust these values.  
  
## See Also  
 [MFC Sample CMNCTRL2](../../visual-cpp-samples.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CSliderCtrl Class](../../mfc/reference/csliderctrl-class.md)

