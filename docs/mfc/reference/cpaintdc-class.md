---
title: CPaintDC (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CPaintDC [MFC], CPaintDC
- CPaintDC [MFC], m_ps
- CPaintDC [MFC], m_hWnd
ms.assetid: 7e245baa-bf9b-403e-a637-7218adf28fab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d9f83c36a9c1a0d334e3b4a75724521d5711123e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33376535"
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
|[CPaintDC::CPaintDC](#cpaintdc)|Costruisce un `CPaintDC` connesso all'oggetto specificato [CWnd](../../mfc/reference/cwnd-class.md).|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaintDC::m_ps](#m_ps)|Contiene il [PAINTSTRUCT](../../mfc/reference/paintstruct-structure.md) usato per disegnare l'area client.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CPaintDC::m_hWnd](#m_hwnd)|Il `HWND` ai quali questo `CPaintDC` è collegato l'oggetto.|  
  
## <a name="remarks"></a>Note  
 Esegue un [CWnd:: BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint) in fase di costruzione e [CWnd::EndPaint](../../mfc/reference/cwnd-class.md#endpaint) in fase di eliminazione.  
  
 Oggetto `CPaintDC` oggetto può essere utilizzato solo quando si risponde a un [WM_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213) messaggio, in genere nel `OnPaint` funzione membro di gestore di messaggi.  
  
 Per ulteriori informazioni sull'utilizzo `CPaintDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CPaintDC`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cpaintdc"></a>  CPaintDC::CPaintDC  
 Costruisce un `CPaintDC` oggetto prepara la finestra dell'applicazione per il disegno e archivia il [PAINTSTRUCT](../../mfc/reference/paintstruct-structure.md) struttura nel [m_ps](#m_ps) variabile membro.  
  
```  
explicit CPaintDC(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta al `CWnd` oggetto a cui il `CPaintDC` oggetto appartiene.  
  
### <a name="remarks"></a>Note  
 Un'eccezione (di tipo `CResourceException`) viene generata se Windows [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871) chiamata ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows è già allocato tutti i relativi contesti di dispositivo disponibile. L'applicazione in competizione per le cinque comuni contesti di visualizzazione disponibili in qualsiasi momento in Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#97](../../mfc/codesnippet/cpp/cpaintdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>  CPaintDC::m_hWnd  
 Il `HWND` ai quali questo `CPaintDC` è collegato l'oggetto.  
  
```  
HWND m_hWnd;  
```  
  
### <a name="remarks"></a>Note  
 `m_hWnd` è una variabile di tipo protetta `HWND`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#98](../../mfc/codesnippet/cpp/cpaintdc-class_2.cpp)]  
  
##  <a name="m_ps"></a>  CPaintDC::m_ps  
 `m_ps` è una variabile membro pubblico di tipo [PAINTSTRUCT](../../mfc/reference/paintstruct-structure.md).  
  
```  
PAINTSTRUCT m_ps;  
```  
  
### <a name="remarks"></a>Note  
 È il `PAINTSTRUCT` che vengono passati e compilato da [CWnd:: BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint).  
  
 Il `PAINTSTRUCT` contiene informazioni che l'applicazione utilizza per disegnare l'area client della finestra associata a un `CPaintDC` oggetto.  
  
 Si noti che è possibile accedere l'handle del contesto di dispositivo tramite il `PAINTSTRUCT`. Tuttavia, si può accedere all'handle più direttamente tramite il `m_hDC` variabile membro che `CPaintDC` eredita da `CDC`.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CPaintDC::m_hWnd](#m_hwnd).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



