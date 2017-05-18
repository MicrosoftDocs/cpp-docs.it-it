---
title: Classe CSingleDocTemplate | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSingleDocTemplate
- AFXWIN/CSingleDocTemplate
- AFXWIN/CSingleDocTemplate::CSingleDocTemplate
dev_langs:
- C++
helpviewer_keywords:
- templates, SDI
- document templates, single
- single document interface (SDI), applications
- CSingleDocTemplate class
ms.assetid: 4f3a8212-81ee-48a0-ad22-e0ed7c36a391
caps.latest.revision: 23
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4fafe461008e3545243d693e0d9e34acd57163e0
ms.openlocfilehash: 78e288dd958e73495a8d513d7fe3427ccc956a61
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
  
-   Una classe documento, che si deriva da **CDocument**.  
  
-   Una classe di visualizzazione, che consente di visualizzare dati dalla classe documento sopra elencato. È possibile derivare questa classe da `CView`, `CScrollView`, `CFormView`, o `CEditView`. (È inoltre possibile utilizzare `CEditView` direttamente.)  
  
-   Classe finestra cornice contenente la vista. Per un modello di documento SDI, è possibile derivare questa classe da `CFrameWnd`, se non è necessario personalizzare il comportamento del main finestra cornice, è possibile utilizzare `CFrameWnd` direttamente senza derivare una classe personalizzata.  
  
 Un'applicazione SDI in genere supporta un tipo di documento, pertanto dispone di un solo `CSingleDocTemplate` oggetto. È possibile aprire un solo documento alla volta.  
  
 Non è necessario chiamare le funzioni di qualsiasi membro `CSingleDocTemplate` tranne il costruttore. Gli handle di framework `CSingleDocTemplate` oggetti internamente.  
  
 Per ulteriori informazioni sull'utilizzo di `CSingleDocTemplate`, vedere [modelli di documento e il processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocTemplate](../../mfc/reference/cdoctemplate-class.md)  
  
 `CSingleDocTemplate`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="csingledoctemplate"></a>CSingleDocTemplate::CSingleDocTemplate  
 Costruisce un oggetto `CSingleDocTemplate`.  
  
```  
CSingleDocTemplate(
    UINT nIDResource,  
    CRuntimeClass* pDocClass,  
    CRuntimeClass* pFrameClass,  
    CRuntimeClass* pViewClass);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDResource`  
 Specifica l'ID delle risorse utilizzate con il tipo di documento. Può trattarsi di menu, icona, tabella di tasti di scelta rapida e risorse di tipo stringa.  
  
 Risorsa della stringa è costituito da fino a sette sottostringhe separate dal carattere "\n" (il carattere '\n' è necessario un segnaposto se non è inclusa una sottostringa; tuttavia, non sono necessari caratteri finali '\n'); le sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Questa risorsa stringa viene trovata nel file di risorse dell'applicazione. Ad esempio:  
  
 `// MYCALC.RC`  
  
 `STRINGTABLE PRELOAD DISCARDABLE`  
  
 `BEGIN`  
  
 `IDR_MAINFRAME "MyCalc Windows Application\nSheet\nWorksheet\n Worksheets (*.myc)\n.myc\nMyCalcSheet\n MyCalc Worksheet"`  
  
 `END`  
  
 È possibile modificare questa stringa mediante l'editor di stringa. l'intera stringa viene visualizzato come una singola voce nell'Editor di stringa, non come voci separate sette.  
  
 Per ulteriori informazioni su questi tipi di risorse, vedere il [Editor stringa](../../windows/string-editor.md).  
  
 `pDocClass`  
 Punta a di `CRuntimeClass` oggetto della classe documento. Questa classe è un **CDocument**-derivata definito per rappresentare i documenti.  
  
 `pFrameClass`  
 Punta a di `CRuntimeClass` oggetto della classe finestra cornice. Questa classe può essere un `CFrameWnd`-classe derivata, oppure può essere `CFrameWnd` se si desidera il comportamento predefinito per la finestra cornice principale.  
  
 `pViewClass`  
 Per i punti di `CRuntimeClass` oggetto della classe di visualizzazione. Questa classe è un `CView`-derivata da definita per visualizzare i documenti.  
  
### <a name="remarks"></a>Note  
 Allocare dinamicamente un `CSingleDocTemplate` dell'oggetto e passarlo a `CWinApp::AddDocTemplate` dal `InitInstance` funzione membro della classe dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[13 NVC_MFCDocViewSDI](../../mfc/codesnippet/cpp/csingledoctemplate-class_1.cpp)]  
  
 [!code-cpp[NVC_MFCDocViewSDI&#14;](../../mfc/codesnippet/cpp/csingledoctemplate-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC DOCKTOOL](../../visual-cpp-samples.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [CDocument (classe)](../../mfc/reference/cdocument-class.md)   
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)   
 [Classe CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [CWinApp (classe)](../../mfc/reference/cwinapp-class.md)

