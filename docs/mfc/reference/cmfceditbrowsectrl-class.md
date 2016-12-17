---
title: "CMFCEditBrowseCtrl Class | Microsoft Docs"
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
  - "CMFCEditBrowseCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCEditBrowseCtrl class"
  - "CMFCEditBrowseCtrl constructor"
  - "CMFCEditBrowseCtrl::PreTranslateMessage method"
ms.assetid: 69cfd886-3d35-4bee-8901-7c88fcf9520f
caps.latest.revision: 33
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCEditBrowseCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCEditBrowseCtrl` supporta il controllo di modifica con pulsante sfoglia, una casella di testo modificabile che contiene facoltativamente un pulsante sfoglia.  Quando l'utente fa clic sul pulsante sfoglia, il controllo esegue un'azione personalizzata o visualizzare una finestra di dialogo standard che contiene un visualizzatore di file o un visualizzatore cartelle.  
  
## Sintassi  
  
```  
class CMFCEditBrowseCtrl : public CEdit  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCEditBrowseCtrl::CMFCEditBrowseCtrl`|Costruttore predefinito.|  
|`CMFCEditBrowseCtrl::~CMFCEditBrowseCtrl`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCEditBrowseCtrl::EnableBrowseButton](../Topic/CMFCEditBrowseCtrl::EnableBrowseButton.md)|Abilita o disabilita \(nasconde\) il pulsante sfoglia.|  
|[CMFCEditBrowseCtrl::EnableFileBrowseButton](../Topic/CMFCEditBrowseCtrl::EnableFileBrowseButton.md)|Abilita il pulsante sfoglia e inserisce il controllo di modifica con pulsante sfoglia *in modalità esplorazione del file*.|  
|[CMFCEditBrowseCtrl::EnableFolderBrowseButton](../Topic/CMFCEditBrowseCtrl::EnableFolderBrowseButton.md)|Abilita il pulsante sfoglia e inserisce il controllo di modifica con pulsante sfoglia *in modalità di visualizzazione della cartella*.|  
|[CMFCEditBrowseCtrl::GetMode](../Topic/CMFCEditBrowseCtrl::GetMode.md)|Restituisce le modalità di visualizzazione standard correnti.|  
|[CMFCEditBrowseCtrl::OnAfterUpdate](../Topic/CMFCEditBrowseCtrl::OnAfterUpdate.md)|Chiamato dal framework quando il controllo di modifica con pulsante sfoglia viene aggiornato con il risultato di un'azione di esplorazione.|  
|[CMFCEditBrowseCtrl::OnBrowse](../Topic/CMFCEditBrowseCtrl::OnBrowse.md)|Chiamato dal framework quando l'utente fa clic sul pulsante sfoglia.|  
|[CMFCEditBrowseCtrl::OnChangeLayout](../Topic/CMFCEditBrowseCtrl::OnChangeLayout.md)|Ridisegna il controllo di modifica con pulsante sfoglia corrente.|  
|[CMFCEditBrowseCtrl::OnDrawBrowseButton](../Topic/CMFCEditBrowseCtrl::OnDrawBrowseButton.md)|Chiamato dal framework per disegnare il pulsante sfoglia.|  
|[CMFCEditBrowseCtrl::OnIllegalFileName](../Topic/CMFCEditBrowseCtrl::OnIllegalFileName.md)|Chiamato dal framework quando un nome di file non valido nel controllo di modifica.|  
|`CMFCEditBrowseCtrl::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  Per la sintassi e ulteriori informazioni, vedere [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md).|  
|[CMFCEditBrowseCtrl::SetBrowseButtonImage](../Topic/CMFCEditBrowseCtrl::SetBrowseButtonImage.md)|Imposta un'immagine personalizzata per il pulsante sfoglia.|  
  
## Note  
 Utilizzare un controllo di modifica con pulsante sfoglia per selezionare un file o un nome di cartella.  Facoltativamente, utilizzare il controllo per eseguire un'azione personalizzata come visualizzare una finestra di dialogo.  È possibile visualizzare o non visualizza il pulsante sfoglia e applicare un'etichetta o un'immagine personalizzata sul pulsante.  
  
 *Le modalità di visualizzazione* del controllo di modifica con pulsante sfoglia determinano se viene visualizzato un pulsante sfoglia e azione si verifica quando viene fatto clic sul pulsante.  Per ulteriori informazioni, vedere il metodo [GetMode](../Topic/CMFCEditBrowseCtrl::GetMode.md).  
  
 La classe `CMFCEditBrowseCtrl` supporta le seguenti modalità.  
  
 `custom mode`  
 Un'azione personalizzata viene eseguita quando l'utente fa clic sul pulsante sfoglia.  Ad esempio, è possibile visualizzare una finestra di dialogo specifica dell'applicazione.  
  
 `file mode`  
 Una finestra di dialogo di selezione file standard vengono visualizzate quando l'utente fa clic sul pulsante sfoglia.  
  
 `folder mode`  
 Una finestra di dialogo standard di selezione della cartella visualizzato quando l'utente fa clic sul pulsante sfoglia.  
  
## Tipo: Specificare un controllo di modifica con pulsante sfoglia  
 Eseguire i passaggi seguenti per includere un controllo di modifica con pulsante sfoglia nell'applicazione:  
  
1.  Se si desidera distribuire le modalità di visualizzazione personalizzata, derivare una classe dalla classe `CMFCEditBrowseCtrl` quindi eseguire l'override del metodo [CMFCEditBrowseCtrl::OnBrowse](../Topic/CMFCEditBrowseCtrl::OnBrowse.md).  Nel metodo sottoposto a override, eseguire un'azione personalizzata di esplorazione e aggiornare il controllo di modifica con pulsante sfoglia con il risultato.  
  
2.  Importare l'oggetto `CMFCEditBrowseCtrl` o un oggetto derivato dal controllo di modifica con pulsante sfoglia nell'oggetto finestra padre.  
  
3.  Se si utilizza **Nella procedura guidata** per creare una finestra di dialogo, aggiungere un controllo di modifica \(`CEdit`\) a della finestra di dialogo.  Inoltre, aggiungere una variabile per accedere al controllo nel file di intestazione.  Nel file di intestazione, modificare il tipo di variabile da `CEdit` a `CMFCEditBrowseCtrl`.  Il controllo di modifica con pulsante sfoglia verrà creato automaticamente.  Se non si utilizza **Creazione guidata classe**, aggiungere una variabile `CMFCEditBrowseCtrl` al file di intestazione e quindi chiamare il metodo `Create`.  
  
4.  Se si aggiunge un controllo di modifica con pulsante sfoglia a una finestra di dialogo, utilizzare lo strumento **ClassWizard** per configurare lo scambio di dati.  
  
5.  Chiamare il metodo [EnableFolderBrowseButton](../Topic/CMFCEditBrowseCtrl::EnableFolderBrowseButton.md), [EnableFileBrowseButton](../Topic/CMFCEditBrowseCtrl::EnableFileBrowseButton.md), o [EnableBrowseButton](../Topic/CMFCEditBrowseCtrl::EnableBrowseButton.md) per impostare le modalità di visualizzazione e per visualizzare il pulsante sfoglia.  Chiamare il metodo [GetMode](../Topic/CMFCEditBrowseCtrl::GetMode.md) per ottenere le modalità di visualizzazione standard correnti.  
  
6.  Per assegnare un'immagine personalizzata del pulsante sfoglia, chiamare il metodo [SetBrowseButtonImage](../Topic/CMFCEditBrowseCtrl::SetBrowseButtonImage.md) o eseguire l'override del metodo [OnDrawBrowseButton](../Topic/CMFCEditBrowseCtrl::OnDrawBrowseButton.md).  
  
7.  Per rimuovere il pulsante sfoglia dal controllo di modifica con pulsante sfoglia, chiamare il metodo [EnableBrowseButton](../Topic/CMFCEditBrowseCtrl::EnableBrowseButton.md) con il parametro `bEnable` impostato su `FALSE`.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 [CMFCEditBrowseCtrl](../../mfc/reference/cmfceditbrowsectrl-class.md)  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare due metodi nella classe `CMFCEditBrowseCtrl` : `EnableFolderBrowseButton` e `EnableFileBrowseButton`.  Questo esempio fa parte [Nuovo esempio di controlli](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#6](../../mfc/reference/codesnippet/CPP/cmfceditbrowsectrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#7](../../mfc/reference/codesnippet/CPP/cmfceditbrowsectrl-class_2.cpp)]  
  
## Requisiti  
 **intestazione:** afxeditbrowsectrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)