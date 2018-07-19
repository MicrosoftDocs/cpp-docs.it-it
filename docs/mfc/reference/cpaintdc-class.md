---
title: Classe CPaintDC | Microsoft Docs
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
ms.openlocfilehash: 119a4e1b39d86ef2d12565fd593ce2124cef5bd5
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37848915"
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
|[CPaintDC::m_ps](#m_ps)|Contiene il [PAINTSTRUCT](../../mfc/reference/paintstruct-structure.md) utilizzato per disegnare l'area client.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CPaintDC::m_hWnd](#m_hwnd)|L'oggetto HWND per cui questo `CPaintDC` oggetto è connesso.|  
  
## <a name="remarks"></a>Note  
 Esegue una [CWnd:: BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint) in fase di costruzione e [CWnd::EndPaint](../../mfc/reference/cwnd-class.md#endpaint) in fase di eliminazione.  
  
 Oggetto `CPaintDC` oggetto può essere utilizzato solo quando si risponde a un [WM_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213) dei messaggi, in genere nel `OnPaint` funzione membro di gestore di messaggi.  
  
 Per altre informazioni sull'uso `CPaintDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CPaintDC`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cpaintdc"></a>  CPaintDC::CPaintDC  
 Costruisce un `CPaintDC` prepara la finestra dell'applicazione per il disegno, oggetto e archivia il [PAINTSTRUCT](../../mfc/reference/paintstruct-structure.md) struttura nel [m_ps](#m_ps) variabile membro.  
  
```  
explicit CPaintDC(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pWnd*  
 Punta al `CWnd` oggetto a cui il `CPaintDC` appartiene l'oggetto.  
  
### <a name="remarks"></a>Note  
 Un'eccezione (di tipo `CResourceException`) viene generata se la Windows [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871) chiamata ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows è già allocato tutti i relativi contesti di dispositivo disponibili. L'applicazione è in competizione per le cinque comuni contesti di visualizzazione disponibili in qualsiasi momento in Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#97](../../mfc/codesnippet/cpp/cpaintdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>  CPaintDC::m_hWnd  
 Il `HWND` a cui questo `CPaintDC` oggetto è connesso.  
  
```  
HWND m_hWnd;  
```  
  
### <a name="remarks"></a>Note  
 *m_hWnd* protetto variabile di tipo di HWND.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#98](../../mfc/codesnippet/cpp/cpaintdc-class_2.cpp)]  
  
##  <a name="m_ps"></a>  CPaintDC::m_ps  
 `m_ps` è una variabile membro pubblico typu [PAINTSTRUCT](../../mfc/reference/paintstruct-structure.md).  
  
```  
PAINTSTRUCT m_ps;  
```  
  
### <a name="remarks"></a>Note  
 È il `PAINTSTRUCT` che viene passato a e compilati dagli [CWnd:: BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint).  
  
 Il `PAINTSTRUCT` contiene informazioni che l'applicazione utilizza per disegnare l'area client della finestra associata a un `CPaintDC` oggetto.  
  
 Si noti che è possibile accedere l'handle del contesto di dispositivo attraverso il `PAINTSTRUCT`. Tuttavia, è possibile accedere in modo più diretto l'handle tramite il `m_hDC` variabile membro che `CPaintDC` eredita da CDC.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CPaintDC::m_hWnd](#m_hwnd).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



