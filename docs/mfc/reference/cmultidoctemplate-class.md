---
title: Classe CMultiDocTemplate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMultiDocTemplate
- AFXWIN/CMultiDocTemplate
- AFXWIN/CMultiDocTemplate::CMultiDocTemplate
dev_langs:
- C++
helpviewer_keywords:
- CMultiDocTemplate [MFC], CMultiDocTemplate
ms.assetid: 5b8aa328-e461-41d0-b388-00594535e119
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 01988097d2b05daa6fc056c16f34ec00b45d6893
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46071783"
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
  
## <a name="remarks"></a>Note  
 Un'applicazione MDI utilizza la finestra cornice principale come area di lavoro in cui l'utente può aprire zero o più finestre cornice del documento, ognuno dei quali consente di visualizzare un documento. Per una descrizione più dettagliata di MDI, vedere *linee guida dell'interfaccia Windows per la progettazione Software*.  
  
 Un modello di documento definisce le relazioni tra i tre tipi di classi:  
  
-   Una classe documento, che si deriva da [CDocument](../../mfc/reference/cdocument-class.md).  
  
-   Una classe di visualizzazione, che visualizza i dati dalla classe documento elencato in precedenza. È possibile derivare questa classe da [CView](../../mfc/reference/cview-class.md), `CScrollView`, `CFormView`, o `CEditView`. (È anche possibile usare `CEditView` direttamente.)  
  
-   Una classe di finestra cornice, che contiene la vista. Per un modello di documento MDI, è possibile derivare questa classe da `CMDIChildWnd`, o, se non è necessario personalizzare il comportamento di finestre cornice documento, è possibile usare [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) direttamente senza derivare una classe personalizzata.  
  
 Un'applicazione MDI può supportare più di un tipo di documento e i documenti di tipi diversi possono essere aperti contemporaneamente. L'applicazione dispone di un modello di documento per ogni tipo di documento supportati. Ad esempio, se l'applicazione MDI supporta i fogli di calcolo e documenti di testo, l'applicazione ha due `CMultiDocTemplate` oggetti.  
  
 L'applicazione usa i modelli di documento quando l'utente crea un nuovo documento. Se l'applicazione supporta più di un tipo di documento, il framework Ottiene i nomi dei tipi di documento supportati dai modelli di documento e li visualizza in un elenco nella finestra di dialogo Nuovo File. Dopo che l'utente ha selezionato un tipo di documento, l'applicazione crea un oggetto di classe documento, un oggetto finestra cornice e un oggetto di visualizzazione e lo connette tra loro.  
  
 Non è necessario chiamare alcuna funzione di membro `CMultiDocTemplate` tranne che il costruttore. Gli handle di framework `CMultiDocTemplate` oggetti internamente.  
  
 Per ulteriori informazioni sul `CMultiDocTemplate`, vedere [modelli di documento e il processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocTemplate](../../mfc/reference/cdoctemplate-class.md)  
  
 `CMultiDocTemplate`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cmultidoctemplate"></a>  CMultiDocTemplate::CMultiDocTemplate  
 Costruisce un oggetto `CMultiDocTemplate`.  
  
```  
CMultiDocTemplate(
    UINT nIDResource,  
    CRuntimeClass* pDocClass,  
    CRuntimeClass* pFrameClass,  
    CRuntimeClass* pViewClass);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDResource*  
 Specifica l'ID delle risorse utilizzate con il tipo di documento. Può trattarsi di menu, icona, tabella di tasti di scelta rapida e risorse di tipo stringa.  
  
 La risorsa di tipo stringa è costituito da sottostringhe fino a sette separate dal carattere '\n' (il carattere '\n' come richiesto per un segnaposto se non è inclusa una sottostringa; tuttavia, non sono necessari i caratteri finali '\n'); le sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Questa risorsa stringa è stata trovata nel file di risorse dell'applicazione. Ad esempio:  
  
```RC
// MYCALC.RC
STRINGTABLE PRELOAD DISCARDABLE
BEGIN
  IDR_SHEETTYPE "\nSheet\nWorksheet\nWorksheets (*.myc)\n.myc\n MyCalcSheet\nMyCalc Worksheet"
END
```
  
 Si noti che la stringa inizia con un carattere '\n'. infatti, la prima sottostringa non viene utilizzata per le applicazioni MDI e pertanto non è inclusa. È possibile modificare questa stringa usando l'editor di stringa; l'intera stringa viene visualizzato come una singola voce nell'Editor di stringa, non come sette voci separate.  
  
 Per altre informazioni su questi tipi di risorse, vedere [editor di risorse](../../windows/resource-editors.md).  
  
 *pDocClass*  
 Punta al `CRuntimeClass` oggetto della classe documento. Questa classe è un `CDocument`-definiti dall'utente per rappresentare documenti di classe derivata.  
  
 *pFrameClass*  
 Punta al `CRuntimeClass` oggetto della classe della finestra cornice. Questa classe può essere un' `CMDIChildWnd`-classe derivata, o può essere `CMDIChildWnd` stesso se si desidera il comportamento predefinito per le finestre cornice del documento.  
  
 *pViewClass*  
 Punta al `CRuntimeClass` oggetto della classe di visualizzazione. Questa classe è un `CView`-definiti dall'utente per visualizzare i documenti di classe derivata.  
  
### <a name="remarks"></a>Note  
 Allocare dinamicamente uno `CMultiDocTemplate` oggetto per ogni tipo di documento che l'applicazione supporta e passare a ognuno di essi `CWinApp::AddDocTemplate` dal `InitInstance` funzione membro della classe dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#92](../../mfc/codesnippet/cpp/cmultidoctemplate-class_1.cpp)]  
  
 Ecco un altro esempio.  
  
 [!code-cpp[NVC_MFCDocView#93](../../mfc/codesnippet/cpp/cmultidoctemplate-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)   
 [Classe CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md)   
 [Classe CWinApp](../../mfc/reference/cwinapp-class.md)
