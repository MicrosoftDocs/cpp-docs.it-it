---
description: 'Altre informazioni su: classe CMultiDocTemplate'
title: Classe CMultiDocTemplate
ms.date: 11/04/2016
f1_keywords:
- CMultiDocTemplate
- AFXWIN/CMultiDocTemplate
- AFXWIN/CMultiDocTemplate::CMultiDocTemplate
helpviewer_keywords:
- CMultiDocTemplate [MFC], CMultiDocTemplate
ms.assetid: 5b8aa328-e461-41d0-b388-00594535e119
ms.openlocfilehash: 70b77c04fed41da3b5f025f6a600b9ecfd4bc89b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331569"
---
# <a name="cmultidoctemplate-class"></a>Classe CMultiDocTemplate

Definisce un modello di documento che implementa l'interfaccia a documenti multipli (MDI).

## <a name="syntax"></a>Sintassi

```
class CMultiDocTemplate : public CDocTemplate
```

## <a name="members"></a>Members

Le funzioni membro per questa classe sono virtuali. Vedere [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) e [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) per la documentazione.

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMultiDocTemplate:: CMultiDocTemplate](#cmultidoctemplate)|Costruisce un oggetto `CMultiDocTemplate`.|

## <a name="remarks"></a>Commenti

Un'applicazione MDI utilizza la finestra cornice principale come area di lavoro in cui l'utente può aprire zero o più finestre cornice del documento, ognuna delle quali Visualizza un documento. Per una descrizione più dettagliata di MDI, vedere *linee guida sull'interfaccia di Windows per la progettazione software*.

Un modello di documento definisce le relazioni tra tre tipi di classi:

- Classe del documento derivata da [CDocument](../../mfc/reference/cdocument-class.md).

- Una classe di visualizzazione, che Visualizza i dati della classe del documento sopra indicata. È possibile derivare questa classe da [CView](../../mfc/reference/cview-class.md), `CScrollView` , `CFormView` o `CEditView` . (È anche possibile usare `CEditView` direttamente).

- Classe della finestra cornice che contiene la visualizzazione. Per un modello di documento MDI, è possibile derivare questa classe da `CMDIChildWnd` o, se non è necessario personalizzare il comportamento delle finestre cornice del documento, è possibile usare direttamente [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) senza derivare la propria classe.

Un'applicazione MDI può supportare più di un tipo di documento e i documenti di tipi diversi possono essere aperti contemporaneamente. L'applicazione include un modello di documento per ogni tipo di documento supportato. Se, ad esempio, l'applicazione MDI supporta sia fogli di calcolo che documenti di testo, l'applicazione ha due `CMultiDocTemplate` oggetti.

L'applicazione utilizza i modelli di documento quando l'utente crea un nuovo documento. Se l'applicazione supporta più di un tipo di documento, il Framework ottiene i nomi dei tipi di documento supportati dai modelli di documento e li visualizza in un elenco nella finestra di dialogo nuovo file. Dopo che l'utente ha selezionato un tipo di documento, l'applicazione crea un oggetto classe documento, un oggetto finestra cornice e un oggetto visualizzazione e li collega tra loro.

Non è necessario chiamare funzioni membro di `CMultiDocTemplate` ad eccezione del costruttore. Il Framework gestisce `CMultiDocTemplate` gli oggetti internamente.

Per altre informazioni su `CMultiDocTemplate` , vedere [modelli di documento e processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocTemplate](../../mfc/reference/cdoctemplate-class.md)

`CMultiDocTemplate`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cmultidoctemplatecmultidoctemplate"></a><a name="cmultidoctemplate"></a> CMultiDocTemplate:: CMultiDocTemplate

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
Specifica l'ID delle risorse utilizzate con il tipo di documento. Questo può includere le risorse di menu, icone, tasti di scelta rapida e stringhe.

La risorsa di tipo stringa è costituita da un massimo di sette sottostringhe separate dal carattere ' \n ' (il carattere ' \n ' è necessario come segnaposto se una sottostringa non è inclusa; i caratteri ' \n ' finali non sono tuttavia necessari); Queste sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [CDocTemplate:: GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Questa risorsa di stringa si trova nel file di risorse dell'applicazione. Ad esempio:

```RC
// MYCALC.RC
STRINGTABLE PRELOAD DISCARDABLE
BEGIN
  IDR_SHEETTYPE "\nSheet\nWorksheet\nWorksheets (*.myc)\n.myc\n MyCalcSheet\nMyCalc Worksheet"
END
```

La stringa inizia con un carattere ' \n ' perché la prima sottostringa non viene usata per le applicazioni MDI e pertanto non è inclusa. È possibile modificare questa stringa usando l'editor di stringhe; l'intera stringa viene visualizzata come una singola voce nell'editor di stringhe, non come sette voci separate.

Per altre informazioni su questi tipi di risorse, vedere [editor di risorse](../../windows/resource-editors.md).

*pDocClass*<br/>
Punta all' `CRuntimeClass` oggetto della classe del documento. Questa classe è una `CDocument` classe derivata da definita per rappresentare i documenti.

*pFrameClass*<br/>
Punta all' `CRuntimeClass` oggetto della classe della finestra cornice. Questa classe può essere una `CMDIChildWnd` classe derivata da oppure può essere `CMDIChildWnd` se stessa se si vuole il comportamento predefinito per le finestre cornice del documento.

*pViewClass*<br/>
Punta all' `CRuntimeClass` oggetto della classe di visualizzazione. Questa classe è una `CView` classe derivata da definita per visualizzare i documenti.

### <a name="remarks"></a>Commenti

Allocare dinamicamente un `CMultiDocTemplate` oggetto per ogni tipo di documento supportato dall'applicazione e passarne uno a `CWinApp::AddDocTemplate` dalla `InitInstance` funzione membro della classe dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#92](../../mfc/codesnippet/cpp/cmultidoctemplate-class_1.cpp)]

Ecco un secondo esempio.

[!code-cpp[NVC_MFCDocView#93](../../mfc/codesnippet/cpp/cmultidoctemplate-class_2.cpp)]

## <a name="see-also"></a>Vedi anche

[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md)<br/>
[Classe CWinApp](../../mfc/reference/cwinapp-class.md)
