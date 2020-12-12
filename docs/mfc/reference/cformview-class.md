---
description: 'Altre informazioni su: classe CFormView'
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
ms.openlocfilehash: ec37a3819f299830fef96bfdf93c0170b2969c66
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184309"
---
# <a name="cformview-class"></a>Classe CFormView

Classe di base utilizzata per le visualizzazioni di form.

## <a name="syntax"></a>Sintassi

```
class CFormView : public CScrollView
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Description|
|----------|-----------------|
|[CFormView::CFormView](#cformview)|Costruisce un oggetto `CFormView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CFormView::IsInitDlgCompleted](#isinitdlgcompleted)|Usato per la sincronizzazione durante l'inizializzazione.|

## <a name="remarks"></a>Commenti

Una visualizzazione form è essenzialmente una visualizzazione contenente controlli. Il layout di questi controlli si basa su una risorsa modello di finestra di dialogo. Usare `CFormView` se si desidera che l'applicazione includa form. Queste visualizzazioni supportano lo scorrimento, in base alle esigenze, usando la funzionalità [CScrollView](../../mfc/reference/cscrollview-class.md) .

Quando si [Crea un'applicazione Forms-Based](../../mfc/reference/creating-a-forms-based-mfc-application.md), è possibile basare la relativa classe di visualizzazione su `CFormView` , rendendola un'applicazione basata su form.

È inoltre possibile inserire nuovi [argomenti del modulo](../../mfc/form-views-mfc.md) in applicazioni basate su documenti. Anche se l'applicazione inizialmente non supporta i form, Visual C++ aggiungerà questo supporto quando si inserisce un nuovo form.

La Creazione guidata applicazione MFC e il comando Aggiungi classe rappresentano i metodi preferiti per la creazione di applicazioni basate su form. Se è necessario creare un'applicazione basata su moduli senza usare questi metodi, vedere [creazione di un'applicazione Forms-Based](../../mfc/reference/creating-a-forms-based-mfc-application.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CScrollView](../../mfc/reference/cscrollview-class.md)

`CFormView`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

## <a name="cformviewcformview"></a><a name="cformview"></a> CFormView:: CFormView

Costruisce un oggetto `CFormView`.

```
CFormView(LPCTSTR lpszTemplateName);
CFormView(UINT nIDTemplate);
```

### <a name="parameters"></a>Parametri

*lpszTemplateName*<br/>
Contiene una stringa a terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.

*nIDTemplate*<br/>
Contiene il numero ID di una risorsa modello di finestra di dialogo.

### <a name="remarks"></a>Commenti

Quando si crea un oggetto di un tipo derivato da `CFormView` , richiamare uno dei costruttori per creare l'oggetto visualizzazione e identificare la risorsa finestra di dialogo su cui è basata la vista. È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o in base al relativo ID (passare un Unsigned Integer come argomento).

La finestra visualizzazione form e i controlli figlio non vengono creati fino a quando non `CWnd::Create` viene chiamato il metodo. `CWnd::Create` viene chiamato dal Framework come parte del processo di creazione del documento e della visualizzazione, che è basato sul modello di documento.

> [!NOTE]
> La classe derivata *deve* fornire il proprio costruttore. Nel costruttore, richiamare il costruttore, `CFormView::CFormView` , con il nome o l'ID della risorsa come argomento, come illustrato nella panoramica della classe precedente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#90](../../mfc/codesnippet/cpp/cformview-class_1.h)]

[!code-cpp[NVC_MFCDocView#91](../../mfc/codesnippet/cpp/cformview-class_2.cpp)]

## <a name="cformviewisinitdlgcompleted"></a><a name="isinitdlgcompleted"></a> CFormView:: IsInitDlgCompleted

Usato da MFC per garantire il completamento dell'inizializzazione prima di eseguire altre operazioni.

```
BOOL IsInitDlgCompleted() const;
```

### <a name="return-value"></a>Valore restituito

True se la funzione di inizializzazione per questa finestra di dialogo è stata completata.

## <a name="see-also"></a>Vedi anche

[SNAPVW di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[SAMPLE di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CScrollView](../../mfc/reference/cscrollview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)<br/>
[Classe CScrollView](../../mfc/reference/cscrollview-class.md)
