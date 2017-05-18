---
title: Classe CMFCPreviewCtrlImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCPreviewCtrlImpl
- AFXWIN/CMFCPreviewCtrlImpl
- AFXWIN/CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl
- AFXWIN/CMFCPreviewCtrlImpl::Create
- AFXWIN/CMFCPreviewCtrlImpl::Destroy
- AFXWIN/CMFCPreviewCtrlImpl::Focus
- AFXWIN/CMFCPreviewCtrlImpl::GetDocument
- AFXWIN/CMFCPreviewCtrlImpl::Redraw
- AFXWIN/CMFCPreviewCtrlImpl::SetDocument
- AFXWIN/CMFCPreviewCtrlImpl::SetHost
- AFXWIN/CMFCPreviewCtrlImpl::SetPreviewVisuals
- AFXWIN/CMFCPreviewCtrlImpl::SetRect
- AFXWIN/CMFCPreviewCtrlImpl::DoPaint
- AFXWIN/CMFCPreviewCtrlImpl::m_clrBackColor
- AFXWIN/CMFCPreviewCtrlImpl::m_clrTextColor
- AFXWIN/CMFCPreviewCtrlImpl::m_font
- AFXWIN/CMFCPreviewCtrlImpl::m_pDocument
dev_langs:
- C++
helpviewer_keywords:
- CMFCPreviewCtrlImpl class
ms.assetid: 06257fa0-54c9-478d-9d68-c9698c3f93ed
caps.latest.revision: 28
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
ms.openlocfilehash: b3ccd0d6e03f652798b45ac35d36f8bc2f63e048
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcpreviewctrlimpl-class"></a>Classe CMFCPreviewCtrlImpl
Questa classe implementa una finestra che viene inserita in una finestra host fornita dalla Shell per l'anteprima avanzata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCPreviewCtrlImpl : public CWnd;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl:: ~ CMFCPreviewCtrlImpl](#dtor)|Distrugge un oggetto di controllo anteprima.|  
|[CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl](#cmfcpreviewctrlimpl)|Costruisce un oggetto di controllo anteprima.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::Create](#create)|Di overload. Chiamato da un gestore anteprima avanzata per creare la finestra di Windows.|  
|[CMFCPreviewCtrlImpl::Destroy](#destroy)|Chiamato da un gestore di anteprime Rich quando è necessario eliminare questo controllo.|  
|[CMFCPreviewCtrlImpl::Focus](#focus)|Imposta lo stato attivo al controllo.|  
|[CMFCPreviewCtrlImpl::GetDocument](#getdocument)|Restituisce un documento collegato a questo controllo anteprima.|  
|[CMFCPreviewCtrlImpl::Redraw](#redraw)|Indica il controllo di ridisegnare.|  
|[CMFCPreviewCtrlImpl::SetDocument](#setdocument)|Chiamato dal gestore di anteprime per creare una relazione tra l'implementazione di documento e il controllo anteprima.|  
|[CMFCPreviewCtrlImpl::SetHost](#sethost)|Imposta un nuovo elemento padre per questo controllo.|  
|[CMFCPreviewCtrlImpl::SetPreviewVisuals](#setpreviewvisuals)|Chiamato da un gestore di anteprime Rich quando è necessario impostare gli elementi visivi di un'anteprima dettagliata del contenuto.|  
|[CMFCPreviewCtrlImpl::SetRect](#setrect)|Imposta un nuovo rettangolo di delimitazione per questo controllo.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::DoPaint](#dopaint)|Chiamato dal framework per eseguire il rendering dell'anteprima.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::m_clrBackColor](#m_clrbackcolor)|Colore di sfondo della finestra di anteprima.|  
|[CMFCPreviewCtrlImpl::m_clrTextColor](#m_clrtextcolor)|Colore del testo della finestra di anteprima.|  
|[CMFCPreviewCtrlImpl::m_font](#m_font)|Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.|  
|[CMFCPreviewCtrlImpl::m_pDocument](#m_pdocument)|Un puntatore a un documento il cui contenuto viene visualizzato in anteprima nel controllo.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h    
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCPreviewCtrlImpl](../../mfc/reference/cmfcpreviewctrlimpl-class.md)

## <a name="cmfcpreviewctrlimpl"></a>CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl
Costruisce un oggetto di controllo anteprima.

### <a name="syntax"></a>Sintassi
CMFCPreviewCtrlImpl();  

## <a name="create"></a>CMFCPreviewCtrlImpl::Create
Di overload. Chiamato da un gestore anteprima avanzata per creare la finestra di Windows.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual BOOL Create(  
   HWND hWndParent,  
   const RECT* prc  
);  
virtual BOOL Create(  
   HWND hWndParent,  
   const RECT* prc,  
   CCreateContext* pContext  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 Un handle alla finestra host fornita dalla Shell per l'anteprima avanzata.  
  
 `prc`  
 Specifica la dimensione iniziale e la posizione della finestra.  
  
 `pContext`  
 Un puntatore a un contesto di creazione.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la creazione ha esito positivo. in caso contrario `FALSE`.  
  
## <a name="destroy"></a>CMFCPreviewCtrlImpl::Destroy
Chiamato da un gestore di anteprime Rich quando è necessario eliminare questo controllo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual void Destroy();  
```  
  
## <a name="dopaint"></a>CMFCPreviewCtrlImpl::DoPaint  
Chiamato dal framework per eseguire il rendering dell'anteprima.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual void DoPaint(  
   CPaintDC* pDC  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Un puntatore a un contesto di dispositivo per il disegno.  


## <a name="focus"></a>CMFCPreviewCtrlImpl::Focus  
Imposta lo stato attivo al controllo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual void Focus();  
```  
## <a name="getdocument"></a>CMFCPreviewCtrlImpl::GetDocument
Restituisce un documento collegato a questo controllo anteprima.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ATL::IDocument* GetDocument();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un documento, il cui contenuto viene visualizzato in anteprima nel controllo.

## <a name="m_clrbackcolor"></a>CMFCPreviewCtrlImpl::m_clrBackColor  
Colore di sfondo della finestra di anteprima.  
  
### <a name="syntax"></a>Sintassi  
  
```  
COLORREF m_clrBackColor;  
```  

## <a name="m_clrtextcolor"></a>CMFCPreviewCtrlImpl::m_clrTextColor
Colore del testo della finestra di anteprima.  
  
### <a name="syntax"></a>Sintassi  
  
```  
COLORREF m_clrTextColor;  
```  
## <a name="m_font"></a>CMFCPreviewCtrlImpl::m_font tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.  
  
### <a name="syntax"></a>Sintassi  
  
```  
CFont m_font;  
```  
## <a name="m_pdocument"></a>CMFCPreviewCtrlImpl::m_pDocument  
Un puntatore a un documento il cui contenuto viene visualizzato in anteprima nel controllo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ATL::IDocument* m_pDocument;  
```  

## <a name="redraw"></a>CMFCPreviewCtrlImpl::Redraw  
Indica il controllo di ridisegnare.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual void Redraw();  
```  
## <a name="setdocument"></a>CMFCPreviewCtrlImpl::SetDocument 
Chiamato dal gestore di anteprime per creare una relazione tra l'implementazione di documento e il controllo anteprima.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void SetDocument(  
   IDocument* pDocument  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDocument`  
 Puntatore all'implementazione del documento.  

## <a name="sethost"></a>CMFCPreviewCtrlImpl::SetHost  
Imposta un nuovo elemento padre per questo controllo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual void SetHost(  
   HWND hWndParent  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 Handle per la nuova finestra padre.  

## <a name="setpreviewvisuals"></a>CMFCPreviewCtrlImpl::SetPreviewVisuals  
Chiamato da un gestore di anteprime Rich quando è necessario impostare gli elementi visivi di un'anteprima dettagliata del contenuto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual void SetPreviewVisuals(  
   COLORREF clrBack,  
   COLORREF clrText,  
   const LOGFONTW *plf  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `clrBack`  
 Colore di sfondo della finestra di anteprima.  
  
 `clrText`  
 Colore del testo della finestra di anteprima.  
  
 `plf`  
 Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima. 

##  <a name="setrect"></a>CMFCPreviewCtrlImpl::SetRect  
Imposta un nuovo rettangolo di delimitazione per questo controllo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual void SetRect(  
   const RECT* prc,  
   BOOL bRedraw  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `prc`  
 Specifica la nuova dimensione e posizione del controllo anteprima.  
  
 `bRedraw`  
 Specifica se il controllo deve essere ridisegnato.  
  
### <a name="remarks"></a>Note  
 In genere un nuovo rettangolo di delimitazione viene impostato quando il controllo host viene ridimensionato.  

## <a name="dtor"></a>CMFCPreviewCtrlImpl:: ~ CMFCPreviewCtrlImpl  
Distrugge un oggetto di controllo anteprima.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual ~CMFCPreviewCtrlImpl();  
```  
  

