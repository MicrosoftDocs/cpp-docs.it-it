---
title: Classe CMultiDocTemplate | Documenti Microsoft
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
ms.openlocfilehash: 7c09234cbf41201df14aec4993174e6313c6a7d1
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37040834"
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
 Un'applicazione MDI utilizza la finestra cornice principale come un'area di lavoro in cui l'utente può aprire zero o più finestre cornice del documento, ognuna delle quali Visualizza un documento. Per una descrizione più dettagliata di MDI, vedere *linee guida sull'interfaccia di Windows per la progettazione Software*.  
  
 Un modello di documento definisce le relazioni tra i tre tipi di classi:  
  
-   Una classe di documento, che derivano da [CDocument](../../mfc/reference/cdocument-class.md).  
  
-   Una classe di visualizzazione, che sono riportati i dati dalla classe documento elencata in precedenza. È possibile derivare la classe da [CView](../../mfc/reference/cview-class.md), `CScrollView`, `CFormView`, o `CEditView`. (È anche possibile usare `CEditView` direttamente.)  
  
-   Una classe di finestra cornice, che contiene la vista. Per un modello di documento MDI, è possibile derivare la classe da `CMDIChildWnd`, o, se non è necessario personalizzare il comportamento delle finestre cornice del documento, è possibile utilizzare [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) direttamente senza derivare una classe personalizzata.  
  
 Un'applicazione MDI può supportare più di un tipo di documento e i documenti di tipi diversi possono essere aperti nello stesso momento. L'applicazione dispone di un modello di documento per ogni tipo di documento che lo supporta. Ad esempio, se l'applicazione MDI supporta i fogli di calcolo e documenti di testo, l'applicazione dispone di due `CMultiDocTemplate` oggetti.  
  
 L'applicazione utilizza i modelli di documento quando l'utente crea un nuovo documento. Se l'applicazione supporta più di un tipo di documento, il framework Ottiene i nomi dei tipi di documento supportati dai modelli di documento e li visualizza in un elenco nella finestra di dialogo Nuovo File. Dopo che l'utente ha selezionato un tipo di documento, l'applicazione crea un oggetto di classe di documento, un oggetto finestra cornice e un oggetto vista e li connette tra loro.  
  
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
  
 La risorsa stringa è costituito da fino a sette sottostringhe separate dal carattere '\n' (il carattere '\n' è necessario come segnaposto se una sottostringa non viene inclusa; tuttavia, non sono necessari caratteri finali '\n'); Questi sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Questa risorsa stringa viene trovata nel file di risorse dell'applicazione. Ad esempio:  
  
 `// MYCALC.RC`  
  
 `STRINGTABLE PRELOAD DISCARDABLE`  
  
 `BEGIN`  
  
 `IDR_SHEETTYPE "\nSheet\nWorksheet\nWorksheets (*.myc)\n.myc\n MyCalcSheet\nMyCalc Worksheet"`  
  
 `END`  
  
 Si noti che la stringa inizia con un carattere '\n'; infatti, la prima sottostringa non viene utilizzata per le applicazioni MDI e pertanto non è inclusa. È possibile modificare questa stringa usando l'editor di stringa; l'intera stringa viene visualizzato come una singola voce nell'Editor di stringa, non come sette separare le voci.  
  
 Per ulteriori informazioni su questi tipi di risorse, vedere [editor di risorse](../../windows/resource-editors.md).  
  
 *pDocClass*  
 Punta al `CRuntimeClass` oggetto della classe documento. Questa classe è un `CDocument`-derivata definite per rappresentare i documenti.  
  
 *pFrameClass*  
 Punta al `CRuntimeClass` oggetto della classe finestra cornice. Questa classe può essere un `CMDIChildWnd`-classe derivata, oppure può essere `CMDIChildWnd` se si desidera il comportamento predefinito per le finestre cornice del documento.  
  
 *pViewClass*  
 Punta al `CRuntimeClass` oggetto della classe di visualizzazione. Questa classe è un `CView`-derivata è definita per visualizzare i documenti.  
  
### <a name="remarks"></a>Note  
 Allocare dinamicamente uno `CMultiDocTemplate` oggetto per ogni tipo di documento che l'applicazione supporta e passare a ciascuna di esse `CWinApp::AddDocTemplate` dal `InitInstance` funzione membro della classe dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#92](../../mfc/codesnippet/cpp/cmultidoctemplate-class_1.cpp)]  
  
 Ecco un altro esempio.  
  
 [!code-cpp[NVC_MFCDocView#93](../../mfc/codesnippet/cpp/cmultidoctemplate-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [Classe CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md)   
 [Classe CWinApp](../../mfc/reference/cwinapp-class.md)
