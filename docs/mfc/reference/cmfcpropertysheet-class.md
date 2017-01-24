---
title: "CMFCPropertySheet Class | Microsoft Docs"
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
  - "CMFCPropertySheet"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertySheet class"
  - "CMFCPropertySheet::OnInitDialog method"
  - "CMFCPropertySheet::PreTranslateMessage method"
ms.assetid: 01d93573-9698-440f-a6a4-5bebbee879dc
caps.latest.revision: 35
caps.handback.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCPropertySheet Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCPropertySheet` supporta una finestra delle proprietà in cui ogni pagina delle proprietà è identificata da una scheda, un pulsante della barra degli strumenti, un nodo del controllo dell'albero o un elemento di elenco.  
  
## Sintassi  
  
```  
class CMFCPropertySheet : public CPropertySheet  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertySheet::CMFCPropertySheet](../Topic/CMFCPropertySheet::CMFCPropertySheet.md)|Costruisce un oggetto `CMFCPropertySheet`.|  
|`CMFCPropertySheet::~CMFCPropertySheet`|Distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertySheet::AddPage](../Topic/CMFCPropertySheet::AddPage.md)|Aggiunge una pagina alla finestra delle proprietà.|  
|[CMFCPropertySheet::AddPageToTree](../Topic/CMFCPropertySheet::AddPageToTree.md)|Aggiunge una nuova pagina delle proprietà al controllo di struttura ad albero.|  
|[CMFCPropertySheet::AddTreeCategory](../Topic/CMFCPropertySheet::AddTreeCategory.md)|Aggiunge un nuovo nodo al controllo dell'albero.|  
|[CMFCPropertySheet::EnablePageHeader](../Topic/CMFCPropertySheet::EnablePageHeader.md)|Riserva spazio nella parte superiore di ogni pagina per creare un'intestazione personalizzata.|  
|[CMFCPropertySheet::GetHeaderHeight](../Topic/CMFCPropertySheet::GetHeaderHeight.md)|Recupera l'altezza dell'intestazione corrente.|  
|[CMFCPropertySheet::GetLook](../Topic/CMFCPropertySheet::GetLook.md)|Recupera il valore di enumerazione che specifica l'aspetto della finestra delle proprietà corrente.|  
|[CMFCPropertySheet::GetNavBarWidth](../Topic/CMFCPropertySheet::GetNavBarWidth.md)|Recupera la larghezza della barra di navigazione in pixel.|  
|[CMFCPropertySheet::GetTab](../Topic/CMFCPropertySheet::GetTab.md)|Recupera l'oggetto del controllo Struttura a schede interno che supporta il controllo corrente della finestra delle proprietà.|  
|`CMFCPropertySheet::GetThisClass`|Usato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|  
|[CMFCPropertySheet::InitNavigationControl](../Topic/CMFCPropertySheet::InitNavigationControl.md)|Inizializza l'aspetto del controllo corrente della finestra delle proprietà.|  
|[CMFCPropertySheet::OnActivatePage](../Topic/CMFCPropertySheet::OnActivatePage.md)|Chiamato dal framework quando una pagina delle proprietà è abilitata.|  
|[CMFCPropertySheet::OnDrawPageHeader](../Topic/CMFCPropertySheet::OnDrawPageHeader.md)|Chiamato dal framework per creare un'intestazione pagina delle proprietà personalizzata.|  
|`CMFCPropertySheet::OnInitDialog`|Gestisce il messaggio [WM\_INITDIALOG](http://msdn.microsoft.com/library/windows/desktop/ms645428).  Esegue l'override di [CPropertySheet::OnInitDialog](../Topic/CPropertySheet::OnInitDialog.md).|  
|[CMFCPropertySheet::OnRemoveTreePage](../Topic/CMFCPropertySheet::OnRemoveTreePage.md)|Chiamato dal framework per rimuovere una pagina delle proprietà da un controllo struttura ad albero.|  
|`CMFCPropertySheet::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).  Esegue l'override di `CPropertySheet::PreTranslateMessage`.|  
|[CMFCPropertySheet::RemoveCategory](../Topic/CMFCPropertySheet::RemoveCategory.md)|Rimuove un nodo dal controllo di struttura ad albero.|  
|[CMFCPropertySheet::RemovePage](../Topic/CMFCPropertySheet::RemovePage.md)|Rimuove una pagina delle proprietà dalla finestra delle proprietà.|  
|[CMFCPropertySheet::SetIconsList](../Topic/CMFCPropertySheet::SetIconsList.md)|Specifica l'elenco delle immagini usate nel controllo di navigazione del riquadro di Outlook.|  
|[CMFCPropertySheet::SetLook](../Topic/CMFCPropertySheet::SetLook.md)|Specifica l'aspetto della finestra delle proprietà.|  
  
## Note  
 La classe `CMFCPropertySheet` rappresenta le finestre delle proprietà, note anche come finestre di dialogo a schede.  La classe `CMFCPropertySheet` può visualizzare una pagina delle proprietà in vari modi.  
  
 Per usare la classe `CMFCPropertySheet` nell'applicazione,seguire questa procedura:  
  
1.  Derivare una classe dalla classe `CMFCPropertySheet` e assegnare alla classe un nome, ad esempio, CMyPropertySheet.  
  
2.  Costruire un oggetto [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md) per ogni pagina delle proprietà.  
  
3.  Chiamare il metodo [CMFCPropertySheet::SetLook](../Topic/CMFCPropertySheet::SetLook.md) nel costruttore CMyPropertySheet.  Un parametro del metodo specifica che le pagine delle proprietà vengono visualizzate come schede nella parte superiore o sinistra della finestra delle proprietà; le schede nello stile di una finestra delle proprietà di Microsoft OneNote; i pulsanti su un controllo della barra degli strumenti di Microsoft Outlook; i nodi in un controllo dell'albero oppure come un elenco di elementi sul lato sinistro della finestra delle proprietà.  
  
4.  Se si crea una finestra delle proprietà dello stile di una barra degli strumenti di Microsoft Outlook, chiamare il metodo [CMFCPropertySheet::SetIconsList](../Topic/CMFCPropertySheet::SetIconsList.md) per associare un elenco immagini con le pagine delle proprietà.  
  
5.  Chiamare il metodo [CMFCPropertySheet::AddPage](../Topic/CMFCPropertySheet::AddPage.md) per ogni pagina delle proprietà.  
  
6.  Creare un controllo `CMFCPropertySheet` e chiamare il relativo metodo `DoModal`.  
  
## Illustrazioni  
 Nella figura seguente vengono illustrate una finestra delle proprietà nello stile della barra degli strumenti incorporata di Microsoft Outlook.  La barra degli strumenti di Outlook viene visualizzata a sinistra della finestra delle proprietà.  
  
 ![Controlli dei colori di CMFCPropertySheet](../../mfc/reference/media/cmfcpropertysheet_color.png "cmfcpropertysheet\_color")  
  
 La figura seguente mostra una finestra delle proprietà che contiene un oggetto [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md).  Tale oggetto è una finestra delle proprietà nello stile di una finestra delle proprietà dei controlli standard.  
  
 ![Controlli degli elenchi e delle proprietà di CMFCPropertySheet](../../mfc/reference/media/cmfcpropertysheet_list.png "cmfcpropertysheet\_list")  
  
 La figura seguente mostra una finestra delle proprietà nello stile di un controllo dell'albero.  
  
 ![Property Tree](../../mfc/reference/media/proptree.png "PropTree")  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPropertySheet](../../mfc/reference/cpropertysheet-class.md)  
  
 [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)  
  
## Requisiti  
 **Intestazione:** afxpropertysheet.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCPropertyPage Class](../../mfc/reference/cmfcpropertypage-class.md)   
 [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)