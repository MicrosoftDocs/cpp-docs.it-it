---
title: Classe CMFCRibbonSeparator | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonSeparator
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::CMFCRibbonSeparator
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::AddToListBox
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::CopyFrom
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::GetRegularSize
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::IsSeparator
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::IsTabStop
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::OnDraw
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::OnDrawOnList
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonSeparator [MFC], CMFCRibbonSeparator
- CMFCRibbonSeparator [MFC], AddToListBox
- CMFCRibbonSeparator [MFC], CopyFrom
- CMFCRibbonSeparator [MFC], GetRegularSize
- CMFCRibbonSeparator [MFC], IsSeparator
- CMFCRibbonSeparator [MFC], IsTabStop
- CMFCRibbonSeparator [MFC], OnDraw
- CMFCRibbonSeparator [MFC], OnDrawOnList
ms.assetid: bedb1a53-cb07-4c3c-be12-698c5409e7cf
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 36f05d89388d8722fab7853dc3c1e5bcb4d9a2f1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfcribbonseparator-class"></a>Classe CMFCRibbonSeparator
Implementa il separatore della barra multifunzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonSeparator : public CMFCRibbonBaseElement  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonSeparator::CMFCRibbonSeparator](#cmfcribbonseparator)|Costruisce un oggetto `CMFCRibbonSeparator`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonSeparator::AddToListBox](#addtolistbox)|Aggiunge un separatore di **comandi** nell'elenco il **Personalizza** la finestra di dialogo. (Esegue l'override [CMFCRibbonBaseElement::AddToListBox](../../mfc/reference/cmfcribbonbaseelement-class.md#addtolistbox).)|  
|`CMFCRibbonSeparator::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|`CMFCRibbonSeparator::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonSeparator::CopyFrom](#copyfrom)|Un metodo di copia che imposta il membro di un separatore variabili da un altro oggetto.|  
|[CMFCRibbonSeparator::GetRegularSize](#getregularsize)|Restituisce le dimensioni di un separatore.|  
|[CMFCRibbonSeparator::IsSeparator](#isseparator)|Indica se questo è un separatore.|  
|[CMFCRibbonSeparator::IsTabStop](#istabstop)|Indica se si tratta di una tabulazione.|  
|[CMFCRibbonSeparator::OnDraw](#ondraw)|Chiamato dal sistema sul quale disegnare il separatore della barra multifunzione o la barra di accesso rapido.|  
|[CMFCRibbonSeparator::OnDrawOnList](#ondrawonlist)|Chiamato dal sistema sul quale disegnare il separatore di **comandi** elenco.|  
  
## <a name="remarks"></a>Note  
 Separatore della barra multifunzione è una linea verticale oppure orizzontale che logicamente separa elementi della barra multifunzione. Separatore può essere recuperato nel controllo della barra multifunzione, il menu principale dell'applicazione, la barra di stato della barra multifunzione e barra di accesso rapido.  
  
 Per utilizzare un separatore nell'applicazione, creare il nuovo oggetto e aggiungerlo al menu principale dell'applicazione, come illustrato di seguito:  
  
```  
CMFCRibbonMainPanel* pMainPanel = m_wndRibbonBar.AddMainCategory(_T("Main Menu"),
    IDB_FILESMALL,
    IDB_FILELARGE);

...  
pMainPanel->Add(new CMFCRibbonSeparator(TRUE));
```  
Chiamare [CMFCRibbonPanel::AddSeparator](../../mfc/reference/cmfcribbonpanel-class.md#addseparator) separatori aggiungere pannelli della barra multifunzione. I separatori sono allocati e aggiunte internamente dal `AddSeparator` metodo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonSeparator](../../mfc/reference/cmfcribbonseparator-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxbaseribbonelement.h  
  
##  <a name="addtolistbox"></a>CMFCRibbonSeparator::AddToListBox  
 Aggiunge un separatore di **comandi** nell'elenco il **Personalizza** la finestra di dialogo.  
  
```  
virtual int AddToListBox(
    CMFCRibbonCommandsListBox* pWndListBox,  
    BOOL bDeep);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndListBox`  
 Un puntatore al **comandi** in cui viene aggiunto il separatore di elenco.  
  
 [in] `bDeep`  
 Ignorato.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero per la stringa nella casella di riepilogo specificata da `pWndListBox`.  
  
##  <a name="cmfcribbonseparator"></a>CMFCRibbonSeparator::CMFCRibbonSeparator  
 Costruisce un oggetto `CMFCRibbonSeparator`.  
  
```  
CMFCRibbonSeparator(BOOL bIsHoriz = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bIsHoriz`  
 Se `TRUE`, il separatore è orizzontale; se `FALSE`, il separatore è verticale.  
  
### <a name="remarks"></a>Note  
 Nel menu dell'applicazione vengono utilizzati i separatori orizzontali. Separatori verticali vengono utilizzati nelle barre degli strumenti.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un oggetto della `CMFCRibbonSeparator` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp#19](../../mfc/reference/codesnippet/cpp/cmfcribbonseparator-class_1.cpp)]  
  
##  <a name="copyfrom"></a>CMFCRibbonSeparator::CopyFrom  
 Un metodo di copia che imposta il membro di un separatore variabili da un altro oggetto.  
  
```  
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `Src`  
 Elemento della barra multifunzione di origine da copiare.  
  
##  <a name="getregularsize"></a>CMFCRibbonSeparator::GetRegularSize  
 Restituisce le dimensioni di un separatore.  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Un puntatore per il contenuto di un dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni del separatore nel contesto di dispositivo specificato.  
  
##  <a name="isseparator"></a>CMFCRibbonSeparator::IsSeparator  
 Indica se questo è un separatore.  
  
```  
virtual BOOL IsSeparator() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `TRUE` per questa classe.  
  
##  <a name="istabstop"></a>CMFCRibbonSeparator::IsTabStop  
 Indica se si tratta di una tabulazione.  
  
```  
virtual BOOL IsTabStop() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `FALSE` per questa classe.  
  
### <a name="remarks"></a>Note  
 Separatore della barra multifunzione non è una tabulazione.  
  
##  <a name="ondraw"></a>CMFCRibbonSeparator::OnDraw  
 Chiamato dal sistema sul quale disegnare il separatore della barra multifunzione o la barra di accesso rapido.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
##  <a name="ondrawonlist"></a>CMFCRibbonSeparator::OnDrawOnList  
 Chiamato dal sistema sul quale disegnare il separatore di **comandi** elenco.  
  
```  
virtual void OnDrawOnList(
    CDC* pDC,  
    CString strText,  
    int nTextOffset,  
    CRect rect,  
    BOOL bIsSelected,  
    BOOL bHighlighted);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `pDC`|Puntatore a un contesto di dispositivo.|  
|[in] `strText`|Testo visualizzato nell'elenco.|  
|[in] `nTextOffset`|Spaziatura tra il testo e il lato sinistro del rettangolo di delimitazione.|  
|[in] `rect`|Specifica il rettangolo di delimitazione.|  
|[in] `bIsSelected`|Ignorato.|  
|[in] `bHighlighted`|Ignorato.|  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
