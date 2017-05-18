---
title: CPaintDC (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CPaintDC
- AFXWIN/CPaintDC
- AFXWIN/CPaintDC::CPaintDC
- AFXWIN/CPaintDC::m_ps
- AFXWIN/CPaintDC::m_hWnd
dev_langs:
- C++
helpviewer_keywords:
- OnPaint handler
- WM_PAINT message
- CPaintDC class
ms.assetid: 7e245baa-bf9b-403e-a637-7218adf28fab
caps.latest.revision: 22
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: b781db7d4a6676e6fc6ad5df7553b9c9a0154ab9
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cpaintdc-class"></a>CPaintDC (classe)
Una classe di contesto di dispositivo derivata da [CDC](../../mfc/reference/cdc-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPaintDC : public CDC  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaintDC::CPaintDC](#cpaintdc)|Costruisce un `CPaintDC` connesso all'oggetto [CWnd](../../mfc/reference/cwnd-class.md).|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaintDC::m_ps](#m_ps)|Contiene il [PAINTSTRUCT](../../mfc/reference/paintstruct-structure.md) utilizzato per disegnare l'area client.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaintDC::m_hWnd](#m_hwnd)|Il `HWND` a cui `CPaintDC` è collegato l'oggetto.|  
  
## <a name="remarks"></a>Note  
 Esegue un [CWnd::BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint) in fase di costruzione e [CWnd::EndPaint](../../mfc/reference/cwnd-class.md#endpaint) in fase di eliminazione.  
  
 Oggetto `CPaintDC` oggetto può essere utilizzato solo quando si risponde a un [WM_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213) dei messaggi, in genere nel `OnPaint` funzione membro di gestore di messaggi.  
  
 Per ulteriori informazioni sull'utilizzo di `CPaintDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CPaintDC`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cpaintdc"></a>CPaintDC::CPaintDC  
 Costruisce un `CPaintDC` oggetto prepara la finestra dell'applicazione per il disegno e archivia il [PAINTSTRUCT](../../mfc/reference/paintstruct-structure.md) struttura nel [m_ps](#m_ps) variabile membro.  
  
```  
explicit CPaintDC(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta al `CWnd` oggetto a cui il `CPaintDC` oggetto appartiene.  
  
### <a name="remarks"></a>Note  
 Un'eccezione (di tipo `CResourceException`) viene generata se Windows [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871) chiamata ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows è già allocato tutti i relativi contesti di periferica disponibile. L'applicazione è in competizione per le cinque comuni contesti di visualizzazione disponibili in qualsiasi momento in Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#97;](../../mfc/codesnippet/cpp/cpaintdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>CPaintDC::m_hWnd  
 Il `HWND` a cui `CPaintDC` è collegato l'oggetto.  
  
```  
HWND m_hWnd;  
```  
  
### <a name="remarks"></a>Note  
 `m_hWnd`è una variabile di tipo protetta `HWND`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#98; NVC_MFCDocView](../../mfc/codesnippet/cpp/cpaintdc-class_2.cpp)]  
  
##  <a name="m_ps"></a>CPaintDC::m_ps  
 `m_ps`è una variabile membro pubblico di tipo [PAINTSTRUCT](../../mfc/reference/paintstruct-structure.md).  
  
```  
PAINTSTRUCT m_ps;  
```  
  
### <a name="remarks"></a>Note  
 È il `PAINTSTRUCT` che vengono passati e compilati [CWnd::BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint).  
  
 Il `PAINTSTRUCT` contiene informazioni che l'applicazione utilizza per disegnare l'area client della finestra associata a un `CPaintDC` oggetto.  
  
 Si noti che è possibile accedere l'handle del contesto di dispositivo tramite il `PAINTSTRUCT`. Tuttavia, è possibile accedere in modo più diretto l'handle tramite il `m_hDC` variabile membro che `CPaintDC` eredita da `CDC`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPaintDC::m_hWnd](#m_hwnd).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




