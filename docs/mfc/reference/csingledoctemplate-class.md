---
description: 'Altre informazioni su: classe CSingleDocTemplate'
title: Classe CSingleDocTemplate
ms.date: 11/04/2016
f1_keywords:
- CSingleDocTemplate
- AFXWIN/CSingleDocTemplate
- AFXWIN/CSingleDocTemplate::CSingleDocTemplate
helpviewer_keywords:
- CSingleDocTemplate [MFC], CSingleDocTemplate
ms.assetid: 4f3a8212-81ee-48a0-ad22-e0ed7c36a391
ms.openlocfilehash: 611cada1c90fa776bafb78f0856658cd1bd0a8e4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264622"
---
# <a name="csingledoctemplate-class"></a>Classe CSingleDocTemplate

Definisce un modello di documento che implementa l'interfaccia a documento singolo (SDI).

## <a name="syntax"></a>Sintassi

```
class CSingleDocTemplate : public CDocTemplate
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSingleDocTemplate:: CSingleDocTemplate](#csingledoctemplate)|Costruisce un oggetto `CSingleDocTemplate`.|

## <a name="remarks"></a>Commenti

Un'applicazione SDI usa la finestra cornice principale per visualizzare un documento; è possibile aprire un solo documento alla volta.

Un modello di documento definisce la relazione tra tre tipi di classi:

- Classe del documento da cui deriva `CDocument` .

- Una classe di visualizzazione, che Visualizza i dati della classe del documento sopra indicata. È possibile derivare questa classe da `CView` , `CScrollView` , `CFormView` o `CEditView` . (È anche possibile usare `CEditView` direttamente).

- Classe della finestra cornice che contiene la visualizzazione. Per un modello di documento SDI, è possibile derivare questa classe da `CFrameWnd` . se non è necessario personalizzare il comportamento della finestra cornice principale, è possibile usare `CFrameWnd` direttamente senza derivare la propria classe.

Un'applicazione SDI supporta in genere un solo tipo di documento, quindi ha un solo `CSingleDocTemplate` oggetto. È possibile aprire un solo documento alla volta.

Non è necessario chiamare funzioni membro di `CSingleDocTemplate` ad eccezione del costruttore. Il Framework gestisce `CSingleDocTemplate` gli oggetti internamente.

Per ulteriori informazioni sull'utilizzo di `CSingleDocTemplate` , vedere [modelli di documento e processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocTemplate](../../mfc/reference/cdoctemplate-class.md)

`CSingleDocTemplate`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="csingledoctemplatecsingledoctemplate"></a><a name="csingledoctemplate"></a> CSingleDocTemplate:: CSingleDocTemplate

Costruisce un oggetto `CSingleDocTemplate`.

```
CSingleDocTemplate(
    UINT nIDResource,
    CRuntimeClass* pDocClass,
    CRuntimeClass* pFrameClass,
    CRuntimeClass* pViewClass);
```

### <a name="parameters"></a>Parametri

*nIDResource*<br/>
Specifica l'ID delle risorse utilizzate con il tipo di documento. Questo può includere le risorse di menu, icone, tasti di scelta rapida e stringhe.

La risorsa di tipo stringa è costituita da un massimo di sette sottostringhe separate dal carattere ' \n ' (il carattere ' \n ' è necessario come segnaposto se non è inclusa una sottostringa. i caratteri ' \n ' finali non sono tuttavia necessari); Queste sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [CDocTemplate:: GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Questa risorsa di stringa si trova nel file di risorse dell'applicazione. Ad esempio:

```RC
// MYCALC.RC
STRINGTABLE PRELOAD DISCARDABLE
BEGIN
  IDR_MAINFRAME "MyCalc Windows Application\nSheet\nWorksheet\n Worksheets (*.myc)\n.myc\nMyCalcSheet\n MyCalc Worksheet"
END
```

È possibile modificare questa stringa usando l'editor di stringhe; l'intera stringa viene visualizzata come una singola voce nell'editor di stringhe, non come sette voci separate.

Per ulteriori informazioni su questi tipi di risorse, vedere l' [editor di stringhe](../../windows/string-editor.md).

*pDocClass*<br/>
Punta all' `CRuntimeClass` oggetto della classe del documento. Questa classe è una `CDocument` classe derivata da definita per rappresentare i documenti.

*pFrameClass*<br/>
Punta all' `CRuntimeClass` oggetto della classe della finestra cornice. Questa classe può essere una `CFrameWnd` classe derivata da oppure può essere `CFrameWnd` se stessa se si vuole il comportamento predefinito per la finestra cornice principale.

*pViewClass*<br/>
Punta all' `CRuntimeClass` oggetto della classe di visualizzazione. Questa classe è una `CView` classe derivata da definita per visualizzare i documenti.

### <a name="remarks"></a>Commenti

Allocare dinamicamente un `CSingleDocTemplate` oggetto e passarlo a `CWinApp::AddDocTemplate` dalla `InitInstance` funzione membro della classe dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocViewSDI#13](../../mfc/codesnippet/cpp/csingledoctemplate-class_1.cpp)]

[!code-cpp[NVC_MFCDocViewSDI#14](../../mfc/codesnippet/cpp/csingledoctemplate-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[DOCKTOOL di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[CDocument (classe)](../../mfc/reference/cdocument-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CWinApp](../../mfc/reference/cwinapp-class.md)
