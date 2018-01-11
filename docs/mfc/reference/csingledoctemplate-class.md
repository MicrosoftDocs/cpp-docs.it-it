---
title: Classe CSingleDocTemplate | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSingleDocTemplate
- AFXWIN/CSingleDocTemplate
- AFXWIN/CSingleDocTemplate::CSingleDocTemplate
dev_langs: C++
helpviewer_keywords: CSingleDocTemplate [MFC], CSingleDocTemplate
ms.assetid: 4f3a8212-81ee-48a0-ad22-e0ed7c36a391
caps.latest.revision: "23"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e23db022f62dab171359f2d0a9cdb158c36557c8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
  
 Un modello di documento definisce la relazione tra tre tipi di classi:  
  
-   Una classe di documento, si deriva da **CDocument**.  
  
-   Una classe di visualizzazione, che vengono visualizzati i dati della classe di documento elencato in precedenza. È possibile derivare la classe da `CView`, `CScrollView`, `CFormView`, o `CEditView`. (È anche possibile usare `CEditView` direttamente.)  
  
-   Classe finestra cornice contenente la vista. Per un modello di documento SDI, è possibile derivare la classe da `CFrameWnd`; se non è necessario personalizzare il comportamento di principale finestra cornice, è possibile utilizzare `CFrameWnd` direttamente senza derivare la propria classe.  
  
 Un'applicazione SDI in genere supporta un tipo di documento, pertanto dispone di un solo `CSingleDocTemplate` oggetto. È possibile aprire un solo documento alla volta.  
  
 Non è necessario chiamare alcuna funzione di membro `CSingleDocTemplate` tranne che il costruttore. Gli handle di framework `CSingleDocTemplate` oggetti internamente.  
  
 Per ulteriori informazioni sull'utilizzo `CSingleDocTemplate`, vedere [modelli di documento e il processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).  
  
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
  
 La risorsa di stringa è costituito da fino a sette sottostringhe separate dal carattere "\n" (il carattere '\n' è necessario come segnaposto se una sottostringa non è inclusa; tuttavia, non sono necessari i caratteri finali '\n'); Questi sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Questa risorsa stringa viene trovata nel file di risorse dell'applicazione. Ad esempio:  
  
 `// MYCALC.RC`  
  
 `STRINGTABLE PRELOAD DISCARDABLE`  
  
 `BEGIN`  
  
 `IDR_MAINFRAME "MyCalc Windows Application\nSheet\nWorksheet\n Worksheets (*.myc)\n.myc\nMyCalcSheet\n MyCalc Worksheet"`  
  
 `END`  
  
 È possibile modificare questa stringa mediante l'editor di stringa. l'intera stringa viene visualizzato come una singola voce nell'Editor di stringa, non come sette separare le voci.  
  
 Per ulteriori informazioni su questi tipi di risorse, vedere il [Editor stringa](../../windows/string-editor.md).  
  
 `pDocClass`  
 Punta al `CRuntimeClass` oggetto della classe di documento. Questa classe è un **CDocument**-derivata definito per rappresentare i documenti.  
  
 `pFrameClass`  
 Punta al `CRuntimeClass` oggetto della classe di finestra cornice. Questa classe può essere un `CFrameWnd`-classe derivata, oppure può essere `CFrameWnd` se si desidera il comportamento predefinito per la finestra cornice principale.  
  
 `pViewClass`  
 Punta al `CRuntimeClass` oggetto della classe di visualizzazione. Questa classe è un `CView`-derivata una classe definita per visualizzare i documenti.  
  
### <a name="remarks"></a>Note  
 Allocare dinamicamente un `CSingleDocTemplate` dell'oggetto e passarlo a `CWinApp::AddDocTemplate` dal `InitInstance` funzione membro della classe dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocViewSDI#13](../../mfc/codesnippet/cpp/csingledoctemplate-class_1.cpp)]  
  
 [!code-cpp[NVC_MFCDocViewSDI#14](../../mfc/codesnippet/cpp/csingledoctemplate-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC DOCKTOOL](../../visual-cpp-samples.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [CDocument (classe)](../../mfc/reference/cdocument-class.md)   
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)   
 [Classe CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [Classe CWinApp](../../mfc/reference/cwinapp-class.md)
