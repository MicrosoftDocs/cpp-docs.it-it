---
title: "CDHtmlDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDHtmlDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDHtmlDialog class"
ms.assetid: 3f941c85-87e1-4f0f-9cc5-ffee8498b312
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDHtmlDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per creare finestre di dialogo che utilizzano HTML anziché le risorse finestra di dialogo per implementare la propria interfaccia utente.  
  
## Sintassi  
  
```  
class CDHtmlDialog : public CDialog, public CDHtmlEventSink  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDHtmlDialog::CDHtmlDialog](../Topic/CDHtmlDialog::CDHtmlDialog.md)|Costruisce un oggetto di CDHtmlDialog.|  
|[CDHtmlDialog::~CDHtmlDialog](../Topic/CDHtmlDialog::~CDHtmlDialog.md)|Elimina un oggetto di CDHtmlDialog.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDHtmlDialog::CanAccessExternal](../Topic/CDHtmlDialog::CanAccessExternal.md)|Sottoponibile a override denominato come controllo di accesso per verificare se gli oggetti di script nella pagina caricata possono accedere alla spedizione esterna del sito del controllo.  I controlli per garantire l'invio è sicuri per gli script o l'area corrente consente di utilizzare gli oggetti che non sono protetti per lo script.|  
|[CDHtmlDialog::CreateControlSite](../Topic/CDHtmlDialog::CreateControlSite.md)|Sottoponibile a override utilizzato per creare un'istanza del sito del controllo per ospitare il controllo WebBrowser nella finestra di dialogo.|  
|[CDHtmlDialog::DDX\_DHtml\_AxControl](../Topic/CDHtmlDialog::DDX_DHtml_AxControl.md)|Scambia dati tra una variabile membro e il valore della proprietà di un controllo ActiveX in una pagina HTML.|  
|[CDHtmlDialog::DDX\_DHtml\_CheckBox](../Topic/CDHtmlDialog::DDX_DHtml_CheckBox.md)|Scambia dati tra una variabile membro e una casella di controllo in una pagina HTML.|  
|[CDHtmlDialog::DDX\_DHtml\_ElementText](../Topic/CDHtmlDialog::DDX_DHtml_ElementText.md)|Scambia dati tra una variabile membro e qualsiasi proprietà dell'elemento HTML in una pagina HTML.|  
|[CDHtmlDialog::DDX\_DHtml\_Radio](../Topic/CDHtmlDialog::DDX_DHtml_Radio.md)|Scambia dati tra una variabile membro e un pulsante di opzione in una pagina HTML.|  
|[CDHtmlDialog::DDX\_DHtml\_SelectIndex](../Topic/CDHtmlDialog::DDX_DHtml_SelectIndex.md)|Ottiene o imposta l'indice di una casella di riepilogo in una pagina HTML.|  
|[CDHtmlDialog::DDX\_DHtml\_SelectString](../Topic/CDHtmlDialog::DDX_DHtml_SelectString.md)|Ottiene o imposta il testo visualizzato di una voce della casella di riepilogo \(basata sull'indice corrente\) in una pagina HTML.|  
|[CDHtmlDialog::DDX\_DHtml\_SelectValue](../Topic/CDHtmlDialog::DDX_DHtml_SelectValue.md)|Ottiene o imposta il valore di un elemento della casella di riepilogo \(basata sull'indice corrente\) in una pagina HTML.|  
|[CDHtmlDialog::DestroyModeless](../Topic/CDHtmlDialog::DestroyModeless.md)|Elimina una finestra di dialogo non modale.|  
|[CDHtmlDialog::EnableModeless](../Topic/CDHtmlDialog::EnableModeless.md)|Attiva le finestre di dialogo non modale.|  
|[CDHtmlDialog::FilterDataObject](../Topic/CDHtmlDialog::FilterDataObject.md)|Consente la finestra di dialogo a oggetti di dati degli Appunti di filtro creati dal browser ospitato.|  
|[CDHtmlDialog::GetControlDispatch](../Topic/CDHtmlDialog::GetControlDispatch.md)|Recupera l'interfaccia `IDispatch` in un controllo ActiveX incorporato nel documento HTML.|  
|[CDHtmlDialog::GetControlProperty](../Topic/CDHtmlDialog::GetControlProperty.md)|Recupera la proprietà richiesta del controllo ActiveX specificato.|  
|[CDHtmlDialog::GetCurrentUrl](../Topic/CDHtmlDialog::GetCurrentUrl.md)|Recupera l'url \(URL\) associato al documento corrente.|  
|[CDHtmlDialog::GetDHtmlDocument](../Topic/CDHtmlDialog::GetDHtmlDocument.md)|Recupera l'interfaccia IHTMLDocument2 nel documento HTML attualmente caricato.|  
|[CDHtmlDialog::GetDropTarget](../Topic/CDHtmlDialog::GetDropTarget.md)|Chiamato dal controllo WebBrowser contenuto quando viene utilizzato come destinazione per consentire la finestra di dialogo immettere [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679)alternativo.|  
|[CDHtmlDialog::GetElement](../Topic/CDHtmlDialog::GetElement.md)|Ottiene un'interfaccia in un elemento HTML.|  
|[CDHtmlDialog::GetElementHtml](../Topic/CDHtmlDialog::GetElementHtml.md)|Recupera la proprietà **innerHTML** di un elemento HTML.|  
|[CDHtmlDialog::GetElementInterface](../Topic/CDHtmlDialog::GetElementInterface.md)|Recupera un puntatore a interfaccia richiesto da un elemento HTML.|  
|[CDHtmlDialog::GetElementProperty](../Topic/CDHtmlDialog::GetElementProperty.md)|Recupera il valore della proprietà di un elemento HTML.|  
|[CDHtmlDialog::GetElementText](../Topic/CDHtmlDialog::GetElementText.md)|Recupera la proprietà **innerText** di un elemento HTML.|  
|[CDHtmlDialog::GetEvent](../Topic/CDHtmlDialog::GetEvent.md)|Ottiene il puntatore **IHTMLEventObj** all'oggetto evento corrente.|  
|[CDHtmlDialog::GetExternal](../Topic/CDHtmlDialog::GetExternal.md)|Ottiene l'interfaccia `IDispatch` dell'host.|  
|[CDHtmlDialog::GetHostInfo](../Topic/CDHtmlDialog::GetHostInfo.md)|Recupera le funzionalità dell'interfaccia utente dell'host.|  
|[CDHtmlDialog::GetOptionKeyPath](../Topic/CDHtmlDialog::GetOptionKeyPath.md)|Recuperare la chiave del Registro di sistema in cui le preferenze utente vengono memorizzate.|  
|[CDHtmlDialog::HideUI](../Topic/CDHtmlDialog::HideUI.md)|Nasconde l'interfaccia utente dell'host.|  
|[CDHtmlDialog::IsExternalDispatchSafe](../Topic/CDHtmlDialog::IsExternalDispatchSafe.md)|Indica se l'interfaccia `IDispatch` di host è sicura per lo script.|  
|[CDHtmlDialog::LoadFromResource](../Topic/CDHtmlDialog::LoadFromResource.md)|Carica la risorsa specificata nel controllo WebBrowser.|  
|[CDHtmlDialog::Navigate](../Topic/CDHtmlDialog::Navigate.md)|Consente di passare all'URL specificato.|  
|[CDHtmlDialog::OnBeforeNavigate](../Topic/CDHtmlDialog::OnBeforeNavigate.md)|Chiamato dal framework prima di un evento di navigazione viene generato.|  
|[CDHtmlDialog::OnDocumentComplete](../Topic/CDHtmlDialog::OnDocumentComplete.md)|Chiamato dal framework per notificare a un'applicazione quando un documento ha raggiunto lo stato `READYSTATE_COMPLETE`.|  
|[CDHtmlDialog::OnDocWindowActivate](../Topic/CDHtmlDialog::OnDocWindowActivate.md)|Chiamato dal framework quando la finestra del documento è attivata o disattivata.|  
|[CDHtmlDialog::OnFrameWindowActivate](../Topic/CDHtmlDialog::OnFrameWindowActivate.md)|Chiamato dal framework quando la finestra cornice viene attivata o disattivata.|  
|[CDHtmlDialog::OnInitDialog](../Topic/CDHtmlDialog::OnInitDialog.md)|Chiamato in risposta a **WM\_INITDIALOG** il messaggio.|  
|[CDHtmlDialog::OnNavigateComplete](../Topic/CDHtmlDialog::OnNavigateComplete.md)|Chiamato dal framework dopo un evento di navigazione viene completato.|  
|[CDHtmlDialog::ResizeBorder](../Topic/CDHtmlDialog::ResizeBorder.md)|Avvisa l'oggetto che deve ridimensionare lo spazio del bordo.|  
|[CDHtmlDialog::SetControlProperty](../Topic/CDHtmlDialog::SetControlProperty.md)|Impostare la proprietà di un controllo ActiveX in un nuovo valore.|  
|[CDHtmlDialog::SetElementHtml](../Topic/CDHtmlDialog::SetElementHtml.md)|Impostare la proprietà **innerHTML** di un elemento HTML.|  
|[CDHtmlDialog::SetElementProperty](../Topic/CDHtmlDialog::SetElementProperty.md)|Impostare una proprietà di un elemento HTML.|  
|[CDHtmlDialog::SetElementText](../Topic/CDHtmlDialog::SetElementText.md)|Impostare la proprietà **innerText** di un elemento HTML.|  
|[CDHtmlDialog::SetExternalDispatch](../Topic/CDHtmlDialog::SetExternalDispatch.md)|Imposta l'interfaccia `IDispatch` dell'host.|  
|[CDHtmlDialog::SetHostFlags](../Topic/CDHtmlDialog::SetHostFlags.md)|Imposta flag dell'interfaccia utente dell'host.|  
|[CDHtmlDialog::ShowContextMenu](../Topic/CDHtmlDialog::ShowContextMenu.md)|Chiamato quando un menu di scelta rapida sta per visualizzare.|  
|[CDHtmlDialog::ShowUI](../Topic/CDHtmlDialog::ShowUI.md)|Viene illustrata l'interfaccia utente dell'host.|  
|[CDHtmlDialog::TranslateAccelerator](../Topic/CDHtmlDialog::TranslateAccelerator.md)|Chiamato per elaborare i messaggi del tasto di scelta rapida del menu.|  
|[CDHtmlDialog::TranslateUrl](../Topic/CDHtmlDialog::TranslateUrl.md)|Chiamato per modificare l'url da caricare.|  
|[CDHtmlDialog::UpdateUI](../Topic/CDHtmlDialog::UpdateUI.md)|Chiamato per notificare l'host che lo stato di comando è stato modificato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDHtmlDialog::m\_bUseHtmlTitle](../Topic/CDHtmlDialog::m_bUseHtmlTitle.md)|Indica se utilizzare il titolo del documento HTML come barra del titolo della finestra di dialogo.|  
|[CDHtmlDialog::m\_nHtmlResID](../Topic/CDHtmlDialog::m_nHtmlResID.md)|ID di risorsa di HTML da visualizzare.|  
|[CDHtmlDialog::m\_pBrowserApp](../Topic/CDHtmlDialog::m_pBrowserApp.md)|Un puntatore a un'applicazione Web browser.|  
|[CDHtmlDialog::m\_spHtmlDoc](../Topic/CDHtmlDialog::m_spHtmlDoc.md)|Un puntatore a un documento HTML.|  
|[CDHtmlDialog::m\_strCurrentUrl](../Topic/CDHtmlDialog::m_strCurrentUrl.md)|L'oggetto corrente URL.|  
|[CDHtmlDialog::m\_szHtmlResID](../Topic/CDHtmlDialog::m_szHtmlResID.md)|Versione della stringa l'id delle risorse HTML|  
  
## Note  
 **CDHtmlDialog** può caricare il codice HTML da visualizzare da una risorsa HTML o da un URL.  
  
 `CDHtmlDialog` può inoltre essere lo scambio di dati con i controlli HTML e gestire eventi da controlli HTML, ad esempio la selezione di un pulsante.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDHtmlSinkHandlerBase2`  
  
 `CDHtmlSinkHandlerBase1`  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDHtmlSinkHandler`  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDHtmlEventSink`  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `CDHtmlDialog`  
  
## Requisiti  
 **Header:** afxdhtml.h  
  
## Vedere anche  
 [Esempio DHtmlExplore MFC](../../top/visual-cpp-samples.md)   
 [DDX\_DHtml Helper Macros](../../mfc/reference/ddx-dhtml-helper-macros.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)