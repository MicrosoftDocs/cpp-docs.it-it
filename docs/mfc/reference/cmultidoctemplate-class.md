---
title: Classe CMultiDocTemplate | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMultiDocTemplate
- AFXWIN/CMultiDocTemplate
- AFXWIN/CMultiDocTemplate::CMultiDocTemplate
dev_langs:
- C++
helpviewer_keywords:
- MDI, template
- CMultiDocTemplate class
ms.assetid: 5b8aa328-e461-41d0-b388-00594535e119
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 4fafe461008e3545243d693e0d9e34acd57163e0
ms.openlocfilehash: 6e58325cd4dcaec01bf8a76006bb397fccd9a171
ms.lasthandoff: 02/24/2017

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
 Un'applicazione MDI utilizza la finestra cornice principale come area di lavoro in cui l'utente può aprire zero o più finestre cornice del documento, ognuna delle quali Visualizza un documento. Per una descrizione più dettagliata di MDI, vedere *linee guida sull'interfaccia di Windows per la progettazione Software*.  
  
 Un modello di documento definisce le relazioni tra i tre tipi di classi:  
  
-   Una classe documento, che si deriva da [CDocument](../../mfc/reference/cdocument-class.md).  
  
-   Una classe di visualizzazione, che consente di visualizzare dati dalla classe documento sopra elencato. È possibile derivare questa classe da [CView](../../mfc/reference/cview-class.md), `CScrollView`, `CFormView`, o `CEditView`. (È inoltre possibile utilizzare `CEditView` direttamente.)  
  
-   Classe finestra cornice contenente la vista. Per un modello di documento MDI, è possibile derivare questa classe da `CMDIChildWnd`, o, se non è necessario personalizzare il comportamento di finestre cornice documento, è possibile utilizzare [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) direttamente senza derivare una classe personalizzata.  
  
 Un'applicazione MDI può supportare più di un tipo di documento e documenti di diverso tipo, sono possibile Apri contemporaneamente. L'applicazione dispone di un modello di documento per ogni tipo di documento che supporta. Ad esempio, se l'applicazione MDI supporta i fogli di calcolo e documenti di testo, l'applicazione dispone di due `CMultiDocTemplate` oggetti.  
  
 L'applicazione utilizza i modelli di documento quando l'utente crea un nuovo documento. Se l'applicazione supporta più di un tipo di documento, il framework Ottiene i nomi dei tipi di documento supportati dai modelli di documento e li visualizza in un elenco nella finestra di dialogo Nuovo File. Una volta che l'utente ha selezionato un tipo di documento, l'applicazione crea un oggetto classe di documento, un oggetto finestra cornice e un oggetto visualizzazione e li connette tra loro.  
  
 Non è necessaria chiamare le funzioni di qualsiasi membro `CMultiDocTemplate` tranne il costruttore. Gli handle di framework `CMultiDocTemplate` oggetti internamente.  
  
 Per ulteriori informazioni su `CMultiDocTemplate`, vedere [modelli di documento e il processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocTemplate](../../mfc/reference/cdoctemplate-class.md)  
  
 `CMultiDocTemplate`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cmultidoctemplate"></a>CMultiDocTemplate::CMultiDocTemplate  
 Costruisce un oggetto `CMultiDocTemplate`.  
  
```  
CMultiDocTemplate(
    UINT nIDResource,  
    CRuntimeClass* pDocClass,  
    CRuntimeClass* pFrameClass,  
    CRuntimeClass* pViewClass);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDResource`  
 Specifica l'ID delle risorse utilizzate con il tipo di documento. Può trattarsi di menu, icona, tabella di tasti di scelta rapida e risorse di tipo stringa.  
  
 Risorsa della stringa è costituito da fino a sette sottostringhe separate dal carattere "\n" (il carattere '\n' è necessario come segnaposto se una sottostringa non è inclusa; tuttavia, non sono necessari caratteri finali '\n'); le sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Questa risorsa stringa viene trovata nel file di risorse dell'applicazione. Ad esempio:  
  
 `// MYCALC.RC`  
  
 `STRINGTABLE PRELOAD DISCARDABLE`  
  
 `BEGIN`  
  
 `IDR_SHEETTYPE "\nSheet\nWorksheet\nWorksheets (*.myc)\n.myc\n MyCalcSheet\nMyCalc Worksheet"`  
  
 `END`  
  
 Si noti che la stringa inizia con un carattere "\n". In questo modo la prima sottostringa non viene utilizzata per le applicazioni MDI e pertanto non è inclusa. È possibile modificare questa stringa mediante l'editor di stringa. l'intera stringa viene visualizzato come una singola voce nell'Editor di stringa, non come voci separate sette.  
  
 Per ulteriori informazioni su questi tipi di risorse, vedere [editor risorse](../../windows/resource-editors.md).  
  
 `pDocClass`  
 Punta a di `CRuntimeClass` oggetto della classe documento. Questa classe è un **CDocument**-derivata definito per rappresentare i documenti.  
  
 `pFrameClass`  
 Per i punti di `CRuntimeClass` oggetto della classe finestra cornice. Questa classe può essere un `CMDIChildWnd`-classe derivata, oppure può essere `CMDIChildWnd` se si desidera il comportamento predefinito per le finestre cornice del documento.  
  
 `pViewClass`  
 Per i punti di `CRuntimeClass` oggetto della classe di visualizzazione. Questa classe è un `CView`-derivata da definita per visualizzare i documenti.  
  
### <a name="remarks"></a>Note  
 Allocare dinamicamente uno `CMultiDocTemplate` oggetto per ogni tipo di documento che l'applicazione supporta e passare a ciascuno di essi al `CWinApp::AddDocTemplate` dal `InitInstance` funzione membro della classe dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#92;](../../mfc/codesnippet/cpp/cmultidoctemplate-class_1.cpp)]  
  
 Di seguito è riportato un esempio di secondo.  
  
 [!code-cpp[&#93; NVC_MFCDocView](../../mfc/codesnippet/cpp/cmultidoctemplate-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [Classe CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md)   
 [CWinApp (classe)](../../mfc/reference/cwinapp-class.md)

