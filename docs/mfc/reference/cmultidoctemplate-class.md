---
title: Classe CMultiDocTemplate
ms.date: 11/04/2016
f1_keywords:
- CMultiDocTemplate
- AFXWIN/CMultiDocTemplate
- AFXWIN/CMultiDocTemplate::CMultiDocTemplate
helpviewer_keywords:
- CMultiDocTemplate [MFC], CMultiDocTemplate
ms.assetid: 5b8aa328-e461-41d0-b388-00594535e119
ms.openlocfilehash: 3b3f239b05b1cf7661929333e2d616acce6bedb0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319740"
---
# <a name="cmultidoctemplate-class"></a>Classe CMultiDocTemplate

Definisce un modello di documento che implementa l'interfaccia a documenti multipli (MDI).

## <a name="syntax"></a>Sintassi

```
class CMultiDocTemplate : public CDocTemplate
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMultiDocTemplate::CMultiDocTemplate](#cmultidoctemplate)|Costruisce un oggetto `CMultiDocTemplate`.|

## <a name="remarks"></a>Osservazioni

Un'applicazione MDI utilizza la finestra cornice principale come area di lavoro in cui l'utente può aprire zero o più finestre cornice di documento, ognuna delle quali visualizza un documento. Per una descrizione più dettagliata dell'interfaccia MDI, vedere *Linee guida per l'interfaccia di Windows per*la progettazione software .

Un modello di documento definisce le relazioni tra tre tipi di classi:

- Una classe documento , derivata da [CDocument](../../mfc/reference/cdocument-class.md).

- Una classe di visualizzazione, che visualizza i dati della classe documento elencata in precedenza. È possibile derivare questa `CScrollView`classe `CFormView`da `CEditView` [CView](../../mfc/reference/cview-class.md), , , o . (È anche `CEditView` possibile utilizzare direttamente.)

- Una classe finestra cornice, che contiene la visualizzazione. Per un modello di documento MDI, `CMDIChildWnd`è possibile derivare questa classe da , oppure, se non è necessario personalizzare il comportamento delle finestre cornice del documento, è possibile utilizzare [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) direttamente senza derivare la propria classe.

Un'applicazione MDI può supportare più di un tipo di documento e documenti di tipi diversi possono essere aperti contemporaneamente. L'applicazione dispone di un modello di documento per ogni tipo di documento supportato. Ad esempio, se l'applicazione MDI supporta sia fogli di `CMultiDocTemplate` calcolo che documenti di testo, l'applicazione dispone di due oggetti.

L'applicazione utilizza i modelli di documento quando l'utente crea un nuovo documento. Se l'applicazione supporta più di un tipo di documento, il framework ottiene i nomi dei tipi di documento supportati dai modelli di documento e li visualizza in un elenco nella finestra di dialogo Nuovo file. Dopo che l'utente ha selezionato un tipo di documento, l'applicazione crea un oggetto classe documento, un oggetto finestra cornice e un oggetto visualizzazione e li associa a vicenda.

Non è necessario chiamare le `CMultiDocTemplate` funzioni membro di tranne il costruttore. Il framework `CMultiDocTemplate` gestisce gli oggetti internamente.

Per ulteriori `CMultiDocTemplate`informazioni su , vedere Modelli di documento e Processo di [creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocTemplate](../../mfc/reference/cdoctemplate-class.md)

`CMultiDocTemplate`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cmultidoctemplatecmultidoctemplate"></a><a name="cmultidoctemplate"></a>CMultiDocTemplate::CMultiDocTemplate

Costruisce un oggetto `CMultiDocTemplate`.

```
CMultiDocTemplate(
    UINT nIDResource,
    CRuntimeClass* pDocClass,
    CRuntimeClass* pFrameClass,
    CRuntimeClass* pViewClass);
```

### <a name="parameters"></a>Parametri

*nIDResource*<br/>
Specifica l'ID delle risorse utilizzate con il tipo di documento. Ciò può includere menu, icona, tabella dei tasti di scelta rapida e risorse stringa.

La risorsa di tipo stringa è costituita da un massimo di sette sottostringhe separate dal carattere ''n'' (il carattere ''n' è necessario come segnaposto se non è inclusa una sottostringa; tuttavia, non sono necessari i caratteri finali ''n'); queste sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Questa risorsa di tipo stringa si trova nel file di risorse dell'applicazione. Ad esempio:

```RC
// MYCALC.RC
STRINGTABLE PRELOAD DISCARDABLE
BEGIN
  IDR_SHEETTYPE "\nSheet\nWorksheet\nWorksheets (*.myc)\n.myc\n MyCalcSheet\nMyCalc Worksheet"
END
```

Si noti che la stringa inizia con un carattere ''n'; Ciò è dovuto al fatto che la prima sottostringa non viene utilizzata per le applicazioni MDI e pertanto non è inclusa. È possibile modificare questa stringa utilizzando l'editor di stringhe; l'intera stringa viene visualizzata come una singola voce nell'Editor di stringhe, non come sette voci separate.

Per ulteriori informazioni su questi tipi di risorse, vedere [Editor risorse](../../windows/resource-editors.md).

*pDocClass (in dottrina)*<br/>
Punta all'oggetto `CRuntimeClass` della classe documento. Questa classe `CDocument`è una classe derivata dall'utente per rappresentare i documenti.

*pFrameClass (classe pFrame)*<br/>
Punta all'oggetto `CRuntimeClass` della classe finestra cornice. Questa classe può `CMDIChildWnd`essere una classe derivata da esso, o può essere `CMDIChildWnd` se stessa se si desidera il comportamento predefinito per le finestre cornice del documento.

*pViewClass (classe pViewClass)*<br/>
Punta all'oggetto `CRuntimeClass` della classe di visualizzazione. Questa classe `CView`è una classe derivata dall'utente per visualizzare i documenti.

### <a name="remarks"></a>Osservazioni

Allocare `CMultiDocTemplate` dinamicamente un oggetto per ogni tipo di `CWinApp::AddDocTemplate` documento `InitInstance` supportato dall'applicazione e passarlo dalla funzione membro della classe dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#92](../../mfc/codesnippet/cpp/cmultidoctemplate-class_1.cpp)]

Ecco un secondo esempio.

[!code-cpp[NVC_MFCDocView#93](../../mfc/codesnippet/cpp/cmultidoctemplate-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md)<br/>
[Classe CWinApp](../../mfc/reference/cwinapp-class.md)
