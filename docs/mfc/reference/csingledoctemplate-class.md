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
ms.openlocfilehash: 4d1361734f38d903e2171839b95888863126974a
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58771697"
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

## <a name="remarks"></a>Note

Un'applicazione SDI utilizza la finestra cornice principale per visualizzare un documento. è possibile aprire un solo documento alla volta.

Un modello di documento definisce la relazione tra i tre tipi di classi:

- Una classe documento, che si deriva da `CDocument`.

- Una classe di visualizzazione, che visualizza i dati dalla classe documento elencato in precedenza. È possibile derivare questa classe da `CView`, `CScrollView`, `CFormView`, o `CEditView`. (È anche possibile usare `CEditView` direttamente.)

- Una classe di finestra cornice, che contiene la vista. Per un modello di documento SDI, è possibile derivare questa classe da `CFrameWnd`; se non necessaria personalizzare il comportamento del principale finestra cornice, è possibile usare `CFrameWnd` direttamente senza derivare una classe personalizzata.

Un'applicazione SDI in genere supporta un tipo di documento, pertanto dispone di un solo `CSingleDocTemplate` oggetto. È possibile aprire un solo documento alla volta.

Non è necessario chiamare alcuna funzione di membro `CSingleDocTemplate` tranne che il costruttore. Gli handle di framework `CSingleDocTemplate` oggetti internamente.

Per altre informazioni sull'uso `CSingleDocTemplate`, vedere [modelli di documento e il processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocTemplate](../../mfc/reference/cdoctemplate-class.md)

`CSingleDocTemplate`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="csingledoctemplate"></a>  CSingleDocTemplate::CSingleDocTemplate

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
Specifica l'ID delle risorse utilizzate con il tipo di documento. Può trattarsi di menu, icona, tabella di tasti di scelta rapida e risorse di tipo stringa.

La risorsa di tipo stringa è costituito da sottostringhe fino a sette separate dal carattere '\n' (il carattere '\n' come richiesto per un segnaposto se non è inclusa una sottostringa; tuttavia, non sono necessari i caratteri finali '\n'); le sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Questa risorsa stringa è stata trovata nel file di risorse dell'applicazione. Ad esempio:

```RC
// MYCALC.RC
STRINGTABLE PRELOAD DISCARDABLE
BEGIN
  IDR_MAINFRAME "MyCalc Windows Application\nSheet\nWorksheet\n Worksheets (*.myc)\n.myc\nMyCalcSheet\n MyCalc Worksheet"
END
```

È possibile modificare questa stringa usando l'editor di stringa; l'intera stringa viene visualizzato come una singola voce nell'Editor di stringa, non come sette voci separate.

Per altre informazioni su questi tipi di risorse, vedere la [Editor stringhe](../../windows/string-editor.md).

*pDocClass*<br/>
Punta al `CRuntimeClass` oggetto della classe documento. Questa classe è un `CDocument`-definiti dall'utente per rappresentare documenti di classe derivata.

*pFrameClass*<br/>
Punta al `CRuntimeClass` oggetto della classe della finestra cornice. Questa classe può essere un' `CFrameWnd`-classe derivata, o può essere `CFrameWnd` stesso se si desidera il comportamento predefinito per la finestra cornice principale.

*pViewClass*<br/>
Punta al `CRuntimeClass` oggetto della classe di visualizzazione. Questa classe è un `CView`-definiti dall'utente per visualizzare i documenti di classe derivata.

### <a name="remarks"></a>Note

Allocare dinamicamente un `CSingleDocTemplate` dell'oggetto e passarlo a `CWinApp::AddDocTemplate` dal `InitInstance` funzione membro della classe dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocViewSDI#13](../../mfc/codesnippet/cpp/csingledoctemplate-class_1.cpp)]

[!code-cpp[NVC_MFCDocViewSDI#14](../../mfc/codesnippet/cpp/csingledoctemplate-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC DOCKTOOL](../../overview/visual-cpp-samples.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Classe CWinApp](../../mfc/reference/cwinapp-class.md)
