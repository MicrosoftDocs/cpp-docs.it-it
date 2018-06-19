---
title: Classe CFormView | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CFormView
- AFXEXT/CFormView
- AFXEXT/CFormView::CFormView
- AFXEXT/CFormView::IsInitDlgCompleted
dev_langs:
- C++
helpviewer_keywords:
- CFormView [MFC], CFormView
- CFormView [MFC], IsInitDlgCompleted
ms.assetid: a99ec313-36f0-4f28-9d2b-de11de14ac19
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3486285b7b6430e9cd6f0e4a936aa3341bd72e0f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33366580"
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
 Una visualizzazione form è essenzialmente una visualizzazione contenente controlli. Il layout di questi controlli si basa su una risorsa modello di finestra di dialogo. Usare `CFormView` se si desidera che l'applicazione includa form. Queste visualizzazioni supportano lo scorrimento, in base alle esigenze, utilizzando il [CScrollView](../../mfc/reference/cscrollview-class.md) funzionalità.  
  
 Quando si è [creazione di un'applicazione basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md), è possibile basare la classe visualizzazione su `CFormView`, rendendola un'applicazione basata su form.  
  
 È inoltre possibile inserire nuovi [argomenti Form](../../mfc/form-views-mfc.md) nelle applicazioni basate sulla visualizzazione documento. Anche se l'applicazione inizialmente non supporta i form, Visual C++ aggiungerà questo supporto quando si inserisce un nuovo form.  
  
 La Creazione guidata applicazione MFC e il comando Aggiungi classe rappresentano i metodi preferiti per la creazione di applicazioni basate su form. Se è necessario creare un'applicazione basata su form senza usare questi metodi, vedere [creazione di un'applicazione basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 `CFormView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT. h  
  
##  <a name="cformview"></a>  CFormView::CFormView  
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
 Quando si crea un oggetto di un tipo derivato da `CFormView`, richiamare uno dei costruttori per creare l'oggetto visualizzazione e identificare la risorsa finestra di dialogo in cui si basa la visualizzazione. È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o tramite il relativo ID (passaggio di un intero senza segno come argomento).  
  
 Il visualizzazione di form finestra e i controlli figlio vengono creati solo `CWnd::Create` viene chiamato. `CWnd::Create` viene chiamato dal framework durante il processo di creazione documento e la visualizzazione, che dipende dal modello di documento.  
  
> [!NOTE]
>  La classe derivata *deve* fornisce il proprio costruttore. Nel costruttore, richiamare il costruttore, `CFormView::CFormView`, con il nome di risorsa o l'ID come argomento, come mostrato nella precedente Panoramica di classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#90](../../mfc/codesnippet/cpp/cformview-class_1.h)]  
  
 [!code-cpp[NVC_MFCDocView#91](../../mfc/codesnippet/cpp/cformview-class_2.cpp)]  
  
##  <a name="isinitdlgcompleted"></a>  CFormView::IsInitDlgCompleted  
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
 [Classe CScrollView](../../mfc/reference/cscrollview-class.md)
