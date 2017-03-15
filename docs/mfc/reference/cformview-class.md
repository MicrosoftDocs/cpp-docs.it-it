---
title: Classe CFormView | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFormView
dev_langs:
- C++
helpviewer_keywords:
- views, containing controls
- CFormView class
- form views
ms.assetid: a99ec313-36f0-4f28-9d2b-de11de14ac19
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
ms.openlocfilehash: 82b38b04aa3cf2368d41ee20847c952c3082d4e4
ms.lasthandoff: 02/24/2017

---
# <a name="cformview-class"></a>Classe CFormView
Classe di base utilizzata per le visualizzazioni di form.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFormView : public CScrollView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFormView::CFormView](#cformview)|Costruisce un oggetto `CFormView`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFormView::IsInitDlgCompleted](#isinitdlgcompleted)|Usato per la sincronizzazione durante l'inizializzazione.|  
  
## <a name="remarks"></a>Note  
 Una visualizzazione form è essenzialmente una visualizzazione contenente controlli. Il layout di questi controlli si basa su una risorsa modello di finestra di dialogo. Usare `CFormView` se si desidera che l'applicazione includa form. Queste viste supportano lo scorrimento, in base alle esigenze, utilizzando il [CScrollView](../../mfc/reference/cscrollview-class.md) funzionalità.  
  
 Quando si è [creazione di un'applicazione basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md), è possibile basare la classe di visualizzazione su `CFormView`, rendendola un'applicazione basata su form.  
  
 È inoltre possibile inserire nuovi [argomenti sui moduli](../../mfc/form-views-mfc.md) nelle applicazioni basate su documenti-visualizzazione. Anche se l'applicazione inizialmente non supporta i form, Visual C++ aggiungerà questo supporto quando si inserisce un nuovo form.  
  
 La Creazione guidata applicazione MFC e il comando Aggiungi classe rappresentano i metodi preferiti per la creazione di applicazioni basate su form. Se è necessario creare un'applicazione basata su form senza utilizzare questi metodi, vedere [creazione di un'applicazione basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 `CFormView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT  
  
##  <a name="a-namecformviewa--cformviewcformview"></a><a name="cformview"></a>CFormView::CFormView  
 Costruisce un oggetto `CFormView`.  
  
```  
CFormView(LPCTSTR lpszTemplateName);  
CFormView(UINT nIDTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTemplateName`  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 `nIDTemplate`  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Quando si crea un oggetto di un tipo derivato da `CFormView`, richiamare uno dei costruttori per creare l'oggetto di visualizzazione e identificare la risorsa finestra di dialogo in cui si basa la visualizzazione. È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o dal relativo ID (passare un intero senza segno come argomento).  
  
 I controlli figlio e finestra di visualizzazione form non vengono creati finché `CWnd::Create` viene chiamato. `CWnd::Create`viene chiamato dal framework come parte del processo di creazione documento e la visualizzazione che dipende dal modello di documento.  
  
> [!NOTE]
>  La classe derivata *deve* fornire il proprio costruttore. Nel costruttore, richiamare il costruttore, `CFormView::CFormView`, con il nome della risorsa o l'ID come argomento, come illustrato nella panoramica della classe precedente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#90;](../../mfc/codesnippet/cpp/cformview-class_1.h)]  
  
 [!code-cpp[NVC_MFCDocView&#91;](../../mfc/codesnippet/cpp/cformview-class_2.cpp)]  
  
##  <a name="a-nameisinitdlgcompleteda--cformviewisinitdlgcompleted"></a><a name="isinitdlgcompleted"></a>CFormView::IsInitDlgCompleted  
 Usato da MFC per garantire il completamento dell'inizializzazione prima di eseguire altre operazioni.  
  
```  
BOOL IsInitDlgCompleted() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 True se la funzione di inizializzazione per questa finestra di dialogo è stata completata.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC SNAPVW](../../visual-cpp-samples.md)   
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [CScrollView (classe)](../../mfc/reference/cscrollview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDialog (classe)](../../mfc/reference/cdialog-class.md)   
 [CScrollView (classe)](../../mfc/reference/cscrollview-class.md)

