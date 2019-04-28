---
title: Classe CFormView
ms.date: 11/04/2016
f1_keywords:
- CFormView
- AFXEXT/CFormView
- AFXEXT/CFormView::CFormView
- AFXEXT/CFormView::IsInitDlgCompleted
helpviewer_keywords:
- CFormView [MFC], CFormView
- CFormView [MFC], IsInitDlgCompleted
ms.assetid: a99ec313-36f0-4f28-9d2b-de11de14ac19
ms.openlocfilehash: 8a0c11352ffab37f50ede5c67aa810fa20e838ed
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62182005"
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

Quando sei [creazione di un'applicazione basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md), è possibile basare la relativa classe di visualizzazione su `CFormView`, rendendola un'applicazione basata su form.

È inoltre possibile inserire nuovi [argomenti sui moduli](../../mfc/form-views-mfc.md) nelle applicazioni basate sulla visualizzazione documento. Anche se l'applicazione inizialmente non supporta i form, Visual C++ aggiungerà questo supporto quando si inserisce un nuovo form.

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

*lpszTemplateName*<br/>
Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra.

*nIDTemplate*<br/>
Contiene il numero di ID di una risorsa modello di finestra di dialogo.

### <a name="remarks"></a>Note

Quando si crea un oggetto di un tipo derivato da `CFormView`, richiamare uno dei costruttori per creare l'oggetto di visualizzazione e identificare la risorsa finestra di dialogo in cui si basa la visualizzazione. È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o tramite il relativo ID (per passare un intero senza segno come argomento).

I controlli di finestra e figlio di visualizzazione form non vengono creati finché `CWnd::Create` viene chiamato. `CWnd::Create` viene chiamato dal framework durante il processo di creazione documento e visualizzazione, che dipende dal modello di documento.

> [!NOTE]
>  La classe derivata *necessario* fornire il proprio costruttore. Nel costruttore, richiamare il costruttore, `CFormView::CFormView`, con il nome della risorsa o l'ID come argomento, come illustrato nella panoramica della classe precedente.

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

[MFC Sample SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC viene](../../overview/visual-cpp-samples.md)<br/>
[Classe CScrollView](../../mfc/reference/cscrollview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)<br/>
[Classe CScrollView](../../mfc/reference/cscrollview-class.md)
