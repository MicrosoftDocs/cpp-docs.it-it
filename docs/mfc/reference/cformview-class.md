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
ms.openlocfilehash: a9b897c661731878f0bf78c9d04ae7c4ba28cd42
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373805"
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

## <a name="remarks"></a>Osservazioni

Una visualizzazione form è essenzialmente una visualizzazione contenente controlli. Il layout di questi controlli si basa su una risorsa modello di finestra di dialogo. Usare `CFormView` se si desidera che l'applicazione includa form. Queste visualizzazioni supportano lo scorrimento, se necessario, utilizzando la funzionalità [CScrollView.These](../../mfc/reference/cscrollview-class.md) views support scrolling, as needed, using the CScrollView functionality.

Quando si [crea un'applicazione basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md) `CFormView`, è possibile basare la relativa classe di visualizzazione su , rendendola un'applicazione basata su form.

È inoltre possibile inserire nuovi [argomenti del modulo](../../mfc/form-views-mfc.md) nelle applicazioni basate su visualizzazione documento. Anche se l'applicazione inizialmente non supporta i form, Visual C++ aggiungerà questo supporto quando si inserisce un nuovo form.

La Creazione guidata applicazione MFC e il comando Aggiungi classe rappresentano i metodi preferiti per la creazione di applicazioni basate su form. Se è necessario creare un'applicazione basata su form senza utilizzare questi metodi, vedere Creazione di [un'applicazione basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CScrollView](../../mfc/reference/cscrollview-class.md)

`CFormView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="cformviewcformview"></a><a name="cformview"></a>CFormView::CFormView

Costruisce un oggetto `CFormView`.

```
CFormView(LPCTSTR lpszTemplateName);
CFormView(UINT nIDTemplate);
```

### <a name="parameters"></a>Parametri

*lpszTemplateName (nome di metodo)*<br/>
Contiene una stringa con terminazione null che è il nome di una risorsa modello di finestra di dialogo.

*NIDTemplate (modello)*<br/>
Contiene il numero ID di una risorsa modello di finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Quando si crea un oggetto `CFormView`di un tipo derivato da , richiamare uno dei costruttori per creare l'oggetto visualizzazione e identificare la risorsa finestra di dialogo su cui si basa la visualizzazione. È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o in base al relativo ID (passare un intero senza segno come argomento).

La finestra di visualizzazione del form `CWnd::Create` e i controlli figlio non vengono creati fino a quando non viene chiamato. `CWnd::Create`viene chiamato dal framework come parte del processo di creazione di documenti e visualizzazioni, che è guidato dal modello di documento.

> [!NOTE]
> La classe derivata *deve* fornire il proprio costruttore. Nel costruttore richiamare `CFormView::CFormView`il costruttore , , con il nome della risorsa o l'ID come argomento, come illustrato nei cenni preliminari sulla classe precedente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#90](../../mfc/codesnippet/cpp/cformview-class_1.h)]

[!code-cpp[NVC_MFCDocView#91](../../mfc/codesnippet/cpp/cformview-class_2.cpp)]

## <a name="cformviewisinitdlgcompleted"></a><a name="isinitdlgcompleted"></a>CFormView::IsInitDlgCompleted

Usato da MFC per garantire il completamento dell'inizializzazione prima di eseguire altre operazioni.

```
BOOL IsInitDlgCompleted() const;
```

### <a name="return-value"></a>Valore restituito

True se la funzione di inizializzazione per questa finestra di dialogo è stata completata.

## <a name="see-also"></a>Vedere anche

[Esempio MFC SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC VIEWEX](../../overview/visual-cpp-samples.md)<br/>
[Classe CScrollView](../../mfc/reference/cscrollview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)<br/>
[Classe CScrollView](../../mfc/reference/cscrollview-class.md)
