---
title: Classe CSingleDocTemplate
ms.date: 11/04/2016
f1_keywords:
- CSingleDocTemplate
- AFXWIN/CSingleDocTemplate
- AFXWIN/CSingleDocTemplate::CSingleDocTemplate
helpviewer_keywords:
- CSingleDocTemplate [MFC], CSingleDocTemplate
ms.assetid: 4f3a8212-81ee-48a0-ad22-e0ed7c36a391
ms.openlocfilehash: 5a014b35a6cd2d12367e190e4d6dd689e28eae66
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318353"
---
# <a name="csingledoctemplate-class"></a>Classe CSingleDocTemplate

Definisce un modello di documento che implementa l'interfaccia a documento singolo (SDI).

## <a name="syntax"></a>Sintassi

```
class CSingleDocTemplate : public CDocTemplate
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSingleDocTemplate::CSingleDocTemplate](#csingledoctemplate)|Costruisce un oggetto `CSingleDocTemplate`.|

## <a name="remarks"></a>Osservazioni

Un'applicazione SDI utilizza la finestra cornice principale per visualizzare un documento; può essere aperto un solo documento alla volta.

Un modello di documento definisce la relazione tra tre tipi di classi:

- Una classe documento, derivata da `CDocument`.

- Una classe di visualizzazione, che visualizza i dati della classe documento elencata in precedenza. È possibile derivare `CView` `CScrollView`questa `CFormView`classe `CEditView`da , , , o . (È anche `CEditView` possibile utilizzare direttamente.)

- Una classe finestra cornice, che contiene la visualizzazione. Per un modello di documento SDI, `CFrameWnd`è possibile derivare questa classe da ; Se non è necessario personalizzare il comportamento della finestra `CFrameWnd` cornice principale, è possibile utilizzare direttamente senza derivare la propria classe.

Un'applicazione SDI supporta in genere un tipo `CSingleDocTemplate` di documento, pertanto dispone di un solo oggetto. È possibile aprire un solo documento alla volta.

Non è necessario chiamare le funzioni `CSingleDocTemplate` membro di tranne il costruttore. Il framework `CSingleDocTemplate` gestisce gli oggetti internamente.

Per ulteriori informazioni `CSingleDocTemplate`sull'utilizzo di , vedere Modelli di documento e Processo di [creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocTemplate](../../mfc/reference/cdoctemplate-class.md)

`CSingleDocTemplate`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="csingledoctemplatecsingledoctemplate"></a><a name="csingledoctemplate"></a>CSingleDocTemplate::CSingleDocTemplate

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
Specifica l'ID delle risorse utilizzate con il tipo di documento. Ciò può includere menu, icona, tabella dei tasti di scelta rapida e risorse stringa.

La risorsa di tipo stringa è costituita da un massimo di sette sottostringhe separate dal carattere ''n'' (il carattere ''n' è necessario come segnaposto se non è inclusa una sottostringa; tuttavia, non sono necessari i caratteri finali ''n'); queste sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Questa risorsa di tipo stringa si trova nel file di risorse dell'applicazione. Ad esempio:

```RC
// MYCALC.RC
STRINGTABLE PRELOAD DISCARDABLE
BEGIN
  IDR_MAINFRAME "MyCalc Windows Application\nSheet\nWorksheet\n Worksheets (*.myc)\n.myc\nMyCalcSheet\n MyCalc Worksheet"
END
```

È possibile modificare questa stringa utilizzando l'editor di stringhe; l'intera stringa viene visualizzata come una singola voce nell'Editor di stringhe, non come sette voci separate.

Per ulteriori informazioni su questi tipi di risorse, vedere Editor [di](../../windows/string-editor.md)stringhe .

*pDocClass (in dottrina)*<br/>
Punta all'oggetto `CRuntimeClass` della classe documento. Questa classe `CDocument`è una classe derivata dall'utente per rappresentare i documenti.

*pFrameClass (classe pFrame)*<br/>
Punta all'oggetto `CRuntimeClass` della classe della finestra cornice. Questa classe può `CFrameWnd`essere una classe derivata da essa o da `CFrameWnd` se stessa se si desidera il comportamento predefinito per la finestra cornice principale.

*pViewClass (classe pViewClass)*<br/>
Punta all'oggetto `CRuntimeClass` della classe di visualizzazione. Questa classe `CView`è una classe derivata dall'utente per visualizzare i documenti.

### <a name="remarks"></a>Osservazioni

Allocare `CSingleDocTemplate` dinamicamente un `CWinApp::AddDocTemplate` oggetto `InitInstance` e passarlo dalla funzione membro della classe dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocViewSDI#13](../../mfc/codesnippet/cpp/csingledoctemplate-class_1.cpp)]

[!code-cpp[NVC_MFCDocViewSDI#14](../../mfc/codesnippet/cpp/csingledoctemplate-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC DOCKTOOL](../../overview/visual-cpp-samples.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CWinApp](../../mfc/reference/cwinapp-class.md)
