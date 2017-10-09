---
title: Classe CAtlPreviewCtrlImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlPreviewCtrlImpl
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Create
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Destroy
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Focus
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::OnPaint
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::Redraw
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::SetHost
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::SetPreviewVisuals
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::SetRect
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::DoPaint
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::m_plf
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::m_clrBack
- ATLPREVIEWCTRLIMPL/ATL::CAtlPreviewCtrlImpl::m_clrText
dev_langs:
- C++
helpviewer_keywords:
- CAtlPreviewCtrlImpl class
ms.assetid: 39b3299e-07e4-4abc-9b6e-b54bfa3b0802
caps.latest.revision: 26
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: c55726a1728185f699afbac4ba68a6dc0f70c2bf
ms.openlocfilehash: 1802e1bd3a42767cbc5fa0705f9ccdfd3afa2589
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="catlpreviewctrlimpl-class"></a>Classe CAtlPreviewCtrlImpl
Questa classe è un'implementazione di ATL di una finestra che viene inserita in una finestra host fornita dalla Shell per l'anteprima avanzata.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAtlPreviewCtrlImpl : public CWindowImpl<CAtlPreviewCtrlImpl>, public IPreviewCtrl;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl:: ~ CAtlPreviewCtrlImpl](#dtor)|Distrugge un oggetto di controllo di anteprima.|  
|[CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl](#catlpreviewctrlimpl)|Costruisce un oggetto di controllo di anteprima.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::Create](#create)|Chiamato da un gestore di anteprima avanzata per creare la finestra di Windows.|  
|[CAtlPreviewCtrlImpl::Destroy](#destroy)|Chiamato da un gestore di anteprima avanzata quando è necessario eliminare definitivamente questo controllo.|  
|[CAtlPreviewCtrlImpl::Focus](#focus)|Imposta lo stato attivo al controllo di input.|  
|[CAtlPreviewCtrlImpl::OnPaint](#onpaint)|Gestisce il messaggio WM_PAINT.|  
|[CAtlPreviewCtrlImpl::Redraw](#redraw)|Indica il ridisegno del controllo.|  
|[CAtlPreviewCtrlImpl::SetHost](#sethost)|Imposta un nuovo elemento padre per questo controllo.|  
|[CAtlPreviewCtrlImpl::SetPreviewVisuals](#setpreviewvisuals)|Chiamato da un gestore di anteprima avanzata quando è necessario impostare gli elementi visivi di un'anteprima dettagliata del contenuto.|  
|[CAtlPreviewCtrlImpl::SetRect](#setrect)|Imposta un nuovo rettangolo di delimitazione per questo controllo.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::DoPaint](#dopaint)|Chiamato dal framework per eseguire il rendering dell'anteprima.|  
  
### <a name="protected-constants"></a>Costanti protette  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::m_plf](#m_plf)|Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::m_clrBack](#m_clrback)|Colore di sfondo della finestra di anteprima.|  
|[CAtlPreviewCtrlImpl::m_clrText](#m_clrtext)|Colore del testo della finestra di anteprima.|  

  
## <a name="remarks"></a>Note  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `TBase`  
  
 `ATL::CMessageMap`  
  
 `ATL::CWindowImplRoot<TBase>`  
  
 `ATL::CWindowImplBaseT<TBase,TWinTraits>`  
  
 [ATL::CWindowImpl\<CAtlPreviewCtrlImpl >](../../atl/reference/cwindowimpl-class.md)  
  
 `IPreviewCtrl`  
  
 `ATL::CAtlPreviewCtrlImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlpreviewctrlimpl.h  
  
##  <a name="catlpreviewctrlimpl"></a>CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl  
 Costruisce un oggetto di controllo di anteprima.  
  
```
CAtlPreviewCtrlImpl(void) : m_clrText(0),
   m_clrBack(RGB(255, 255, 255)), m_plf(NULL);
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="dtor"></a>CAtlPreviewCtrlImpl:: ~ CAtlPreviewCtrlImpl  
 Distrugge un oggetto di controllo di anteprima.  
  
```
virtual ~CAtlPreviewCtrlImpl(void);
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="create"></a>CAtlPreviewCtrlImpl::Create  
 Chiamato da un gestore di anteprima avanzata per creare la finestra di Windows.  
  
```
virtual BOOL Create(HWND hWndParent, const RECT* prc);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 Un handle alla finestra host fornita dalla Shell per l'anteprima avanzata.  
  
 `prc`  
 Specifica le dimensioni iniziali e la posizione della finestra.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="destroy"></a>CAtlPreviewCtrlImpl::Destroy  
 Chiamato da un gestore di anteprima avanzata quando è necessario eliminare definitivamente questo controllo.  
  
```
virtual void Destroy();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="dopaint"></a>CAtlPreviewCtrlImpl::DoPaint  
 Chiamato dal framework per eseguire il rendering dell'anteprima.  
  
```
virtual void DoPaint(HDC hdc);
```  
  
### <a name="parameters"></a>Parametri  
 `hdc`  
 Handle per un contesto di dispositivo per il disegno.  
  
### <a name="remarks"></a>Note  
  
##  <a name="focus"></a>CAtlPreviewCtrlImpl::Focus  
 Imposta lo stato attivo al controllo di input.  
  
```
virtual void Focus();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_clrback"></a>CAtlPreviewCtrlImpl::m_clrBack  
 Colore di sfondo della finestra di anteprima.  
  
```
COLORREF m_clrBack;
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_clrtext"></a>CAtlPreviewCtrlImpl::m_clrText  
 Colore del testo della finestra di anteprima.  
  
```
COLORREF m_clrText;
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_plf"></a>CAtlPreviewCtrlImpl::m_plf  
 Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.  
  
```
const LOGFONTW* m_plf;
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onpaint"></a>CAtlPreviewCtrlImpl::OnPaint  
 Gestisce il messaggio WM_PAINT.  
  
```
LRESULT OnPaint(  
    UINT nMsg,
    WPARAM wParam,
    LPARAM lParam,
    BOOL& bHandled);
```  
  
### <a name="parameters"></a>Parametri  
 `nMsg`  
 Impostare su WM_PAINT.  
  
 `wParam`  
 Questo parametro non viene usato.  
  
 `lParam`  
 Questo parametro non viene usato.  
  
 `bHandled`  
 Quando questa funzione viene restituito, contiene `TRUE`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="redraw"></a>CAtlPreviewCtrlImpl::Redraw  
 Indica il ridisegno del controllo.  
  
```
virtual void Redraw();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="sethost"></a>CAtlPreviewCtrlImpl::SetHost  
 Imposta un nuovo elemento padre per questo controllo.  
  
```
virtual void SetHost(HWND hWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 Un handle a una nuova finestra padre.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpreviewvisuals"></a>CAtlPreviewCtrlImpl::SetPreviewVisuals  
 Chiamato da un gestore di anteprima avanzata quando è necessario impostare gli elementi visivi di un'anteprima dettagliata del contenuto.  
  
```
virtual void SetPreviewVisuals(
    COLORREF clrBack,
    COLORREF clrText,
    const LOGFONTW* plf);
```  
  
### <a name="parameters"></a>Parametri  
 `clrBack`  
 Colore di sfondo della finestra di anteprima.  
  
 `clrText`  
 Colore del testo della finestra di anteprima.  
  
 `plf`  
 Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setrect"></a>CAtlPreviewCtrlImpl::SetRect  
 Imposta un nuovo rettangolo di delimitazione per questo controllo.  
  
```
virtual void SetRect(const RECT* prc, BOOL bRedraw);
```  
  
### <a name="parameters"></a>Parametri  
 `prc`  
 Specifica le nuove dimensioni e posizione del controllo di anteprima.  
  
 `bRedraw`  
 Specifica se il controllo deve essere ridisegnato.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)

