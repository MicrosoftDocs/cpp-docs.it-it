---
title: Classe CMFCRibbonSeparator | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bed63f6752f0335e3c1917e6597e7f8b096c8df6
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37039796"
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
|[CMFCRibbonSeparator::AddToListBox](#addtolistbox)|Aggiunge un separatore per la **comandi** nell'elenco il **Personalizza** finestra di dialogo. (Esegue l'override [CMFCRibbonBaseElement::AddToListBox](../../mfc/reference/cmfcribbonbaseelement-class.md#addtolistbox).)|  
|`CMFCRibbonSeparator::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|`CMFCRibbonSeparator::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonSeparator::CopyFrom](#copyfrom)|Un metodo di copia che consente di impostare le variabili membro del separatore da un altro oggetto.|  
|[CMFCRibbonSeparator::GetRegularSize](#getregularsize)|Restituisce le dimensioni di un separatore.|  
|[CMFCRibbonSeparator::IsSeparator](#isseparator)|Indica se si tratta di un separatore.|  
|[CMFCRibbonSeparator::IsTabStop](#istabstop)|Indica se si tratta di una tabulazione.|  
|[CMFCRibbonSeparator::OnDraw](#ondraw)|Chiamata eseguita dal sistema sul quale disegnare il separatore della barra multifunzione o la barra di accesso rapido.|  
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
  
##  <a name="addtolistbox"></a>  CMFCRibbonSeparator::AddToListBox  
 Aggiunge un separatore per la **comandi** nell'elenco il **Personalizza** finestra di dialogo.  
  
```  
virtual int AddToListBox(
    CMFCRibbonCommandsListBox* pWndListBox,  
    BOOL bDeep);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pWndListBox*  
 Un puntatore per il **comandi** in cui viene aggiunto il separatore di elenco.  
  
 [in] *bDeep*  
 Ignorato.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero per la stringa nella casella di riepilogo specificata da *pWndListBox*.  
  
##  <a name="cmfcribbonseparator"></a>  CMFCRibbonSeparator::CMFCRibbonSeparator  
 Costruisce un oggetto `CMFCRibbonSeparator`.  
  
```  
CMFCRibbonSeparator(BOOL bIsHoriz = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bIsHoriz*  
 Se `TRUE`, il separatore è orizzontale; se `FALSE`, il separatore è verticale.  
  
### <a name="remarks"></a>Note  
 Nel menu dell'applicazione vengono usati separatori orizzontali. Vengono usati separatori verticali nelle barre degli strumenti.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCRibbonSeparator` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp#19](../../mfc/reference/codesnippet/cpp/cmfcribbonseparator-class_1.cpp)]  
  
##  <a name="copyfrom"></a>  CMFCRibbonSeparator::CopyFrom  
 Un metodo di copia che consente di impostare le variabili membro del separatore da un altro oggetto.  
  
```  
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *Src*  
 Elemento della barra multifunzione di origine da copiare.  
  
##  <a name="getregularsize"></a>  CMFCRibbonSeparator::GetRegularSize  
 Restituisce le dimensioni di un separatore.  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
 Un puntatore a un contenuto dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni del separatore nel contesto di dispositivo specificato.  
  
##  <a name="isseparator"></a>  CMFCRibbonSeparator::IsSeparator  
 Indica se si tratta di un separatore.  
  
```  
virtual BOOL IsSeparator() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `TRUE` per questa classe.  
  
##  <a name="istabstop"></a>  CMFCRibbonSeparator::IsTabStop  
 Indica se si tratta di una tabulazione.  
  
```  
virtual BOOL IsTabStop() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `FALSE` per questa classe.  
  
### <a name="remarks"></a>Note  
 Separatore della barra multifunzione non è una tabulazione.  
  
##  <a name="ondraw"></a>  CMFCRibbonSeparator::OnDraw  
 Chiamata eseguita dal sistema sul quale disegnare il separatore della barra multifunzione o la barra di accesso rapido.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
 Puntatore a un contesto di dispositivo.  
  
##  <a name="ondrawonlist"></a>  CMFCRibbonSeparator::OnDrawOnList  
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
|[in] *pDC*|Puntatore a un contesto di dispositivo.|  
|[in] *strText*|Testo visualizzato nell'elenco.|  
|[in] *nTextOffset*|Spaziatura tra il testo e il lato sinistro del rettangolo di delimitazione.|  
|[in] *rect*|Specifica il rettangolo di delimitazione.|  
|[in] *bIsSelected*|Ignorato.|  
|[in] *bHighlighted*|Ignorato.|  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
