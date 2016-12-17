---
title: "CMFCToolBarsCustomizeDialog Class | Microsoft Docs"
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
  - "CMFCToolBarsCustomizeDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarsCustomizeDialog class"
ms.assetid: 78e2cddd-4f13-4097-afc3-1ad646a113f1
caps.latest.revision: 28
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCToolBarsCustomizeDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una finestra di dialogo non modale della scheda \([CPropertySheet Class](../../mfc/reference/cpropertysheet-class.md)\) che consente all'utente per personalizzare le barre degli strumenti, i menu, le scelte rapide da tastiera, gli strumenti definiti dall'utente e lo stile di visualizzazione in un'applicazione.  In genere, un utente accede a questa finestra di dialogo selezionando **Personalizza** dal menu **Strumenti**.  
  
 La finestra di dialogo **Personalizza** contiene sei schede: **Comandi**, **Barre degli strumenti**, **Strumenti**, **tastiera**, **Menu**e **Opzioni**.  
  
## Sintassi  
  
```  
class CMFCToolBarsCustomizeDialog : public CPropertySheet  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog](../Topic/CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog.md)|Costruisce un oggetto `CMFCToolBarsCustomizeDialog`.|  
|`CMFCToolBarsCustomizeDialog::~CMFCToolBarsCustomizeDialog`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::AddButton](../Topic/CMFCToolBarsCustomizeDialog::AddButton.md)|Inserisce un pulsante della barra degli strumenti nell'elenco dei controlli nella pagina **Comandi**|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::AddMenu](../Topic/CMFCToolBarsCustomizeDialog::AddMenu.md)|Carica un menu dalle risorse e chiama [CMFCToolBarsCustomizeDialog::AddMenuCommands](../Topic/CMFCToolBarsCustomizeDialog::AddMenuCommands.md) per aggiungere menu che all'elenco dei controlli nella pagina **Comandi**.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::AddMenuCommands](../Topic/CMFCToolBarsCustomizeDialog::AddMenuCommands.md)|Carica un menu dalle risorse e chiama [CMFCToolBarsCustomizeDialog::AddMenuCommands](../Topic/CMFCToolBarsCustomizeDialog::AddMenuCommands.md) per aggiungere menu che all'elenco dei controlli nella pagina **Comandi**.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::AddToolBar](../Topic/CMFCToolBarsCustomizeDialog::AddToolBar.md)|Carica una barra degli strumenti dalle risorse.  Quindi, per ogni comando nel menu chiama il metodo [CMFCToolBarsCustomizeDialog::AddButton](../Topic/CMFCToolBarsCustomizeDialog::AddButton.md) per inserire un pulsante nell'elenco dei controlli nella pagina **Comandi** nella categoria specificata.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::Create](../Topic/CMFCToolBarsCustomizeDialog::Create.md)|Visualizzare la finestra di dialogo **personalizzazione**.|  
|`CMFCToolBarsCustomizeDialog::EnableTools`|Riservato per utilizzi futuri.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::EnableUserDefinedToolbars](../Topic/CMFCToolBarsCustomizeDialog::EnableUserDefinedToolbars.md)|Abilita o disabilita creare nuove barre degli strumenti mediante la finestra di dialogo **Personalizza**.|  
|[CMFCToolBarsCustomizeDialog::FillAllCommandsList](../Topic/CMFCToolBarsCustomizeDialog::FillAllCommandsList.md)|Popola l'oggetto fornito `CListBox` con controlli nella categoria **Tutti i comandi**.|  
|[CMFCToolBarsCustomizeDialog::FillCategoriesComboBox](../Topic/CMFCToolBarsCustomizeDialog::FillCategoriesComboBox.md)|Popola l'oggetto fornito `CComboBox` con il nome di ogni categoria del comando nella finestra di dialogo **Personalizza**.|  
|[CMFCToolBarsCustomizeDialog::FillCategoriesListBox](../Topic/CMFCToolBarsCustomizeDialog::FillCategoriesListBox.md)|Popola l'oggetto fornito `CListBox` con il nome di ogni categoria del comando nella finestra di dialogo **Personalizza**.|  
|[CMFCToolBarsCustomizeDialog::GetCommandName](../Topic/CMFCToolBarsCustomizeDialog::GetCommandName.md)|Recupera il nome associato all'ID di comando|  
|[CMFCToolBarsCustomizeDialog::GetCountInCategory](../Topic/CMFCToolBarsCustomizeDialog::GetCountInCategory.md)|Recupera il numero di elementi nell'elenco fornito con un'etichetta di testo specificata.|  
|[CMFCToolBarsCustomizeDialog::GetFlags](../Topic/CMFCToolBarsCustomizeDialog::GetFlags.md)|Recupera il set di flag che influiscono sul comportamento della finestra di dialogo.|  
|`CMFCToolBarsCustomizeDialog::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage](../Topic/CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage.md)|Inizia un editor di immagini in modo da potere personalizzare un utente un'icona della voce di menu o del pulsante della barra degli strumenti.|  
|[CMFCToolBarsCustomizeDialog::OnInitDialog](../Topic/CMFCToolBarsCustomizeDialog::OnInitDialog.md)|Override per aumentare inizializzazione della finestra delle proprietà.  \(Override [CPropertySheet::OnInitDialog](../Topic/CPropertySheet::OnInitDialog.md)\).|  
|[CMFCToolBarsCustomizeDialog::PostNcDestroy](../Topic/CMFCToolBarsCustomizeDialog::PostNcDestroy.md)|Chiamato dal framework dopo la finestra è stata eliminata.  \(Override `CPropertySheet::PostNcDestroy`\).|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::RemoveButton](../Topic/CMFCToolBarsCustomizeDialog::RemoveButton.md)|Rimuove il pulsante con l'id di comando specificato dalla categoria specificata, o a tutte le categorie.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::RenameCategory](../Topic/CMFCToolBarsCustomizeDialog::RenameCategory.md)|Rinomina una categoria nella casella di riepilogo delle categorie nella scheda **Comandi**.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::ReplaceButton](../Topic/CMFCToolBarsCustomizeDialog::ReplaceButton.md)|Sostituisce un pulsante nell'elenco dei controlli nella scheda **Comandi** con un nuovo oggetto pulsante della barra degli strumenti.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::SetUserCategory](../Topic/CMFCToolBarsCustomizeDialog::SetUserCategory.md)|Aggiunge una categoria all'elenco di categorie visualizzato nella scheda **Comandi**.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::CheckToolsValidity](../Topic/CMFCToolBarsCustomizeDialog::CheckToolsValidity.md)|Chiamato dal framework per determinare se l'elenco degli strumenti definiti dall'utente è valido.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::OnAfterChangeTool](../Topic/CMFCToolBarsCustomizeDialog::OnAfterChangeTool.md)|Chiamato dal framework quando le proprietà di una modifica definita dall'utente dello strumento.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::OnAssignKey](../Topic/CMFCToolBarsCustomizeDialog::OnAssignKey.md)|Determina se una scelta rapida specificata può essere assegnata a un'azione.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::OnBeforeChangeTool](../Topic/CMFCToolBarsCustomizeDialog::OnBeforeChangeTool.md)|Determina se uno strumento definito dall'utente può essere modificato.|  
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::OnInitToolsPage](../Topic/CMFCToolBarsCustomizeDialog::OnInitToolsPage.md)|Chiamato dal framework quando l'utente sceglie la scheda **Strumenti** è necessaria.|  
  
## Note  
 Per visualizzare la finestra di dialogo **Personalizza**, creare un oggetto `CMFCToolBarsCustomizeDialog` e chiamare il metodo [CMFCToolBarsCustomizeDialog::Create](../Topic/CMFCToolBarsCustomizeDialog::Create.md).  
  
 Mentre la finestra di dialogo **Personalizza** è attiva, l'applicazione funzionerà in modo speciale che limita l'utente alle attività di personalizzazione.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCToolBarsCustomizeDialog`.  L'esempio mostra come sostituire un pulsante della barra degli strumenti nella casella di riepilogo dei controlli nella pagina **Comandi**, consentono di creare nuove barre degli strumenti mediante la finestra di dialogo **Personalizza** e verrà visualizzata la finestra di dialogo **personalizzazione**.  Questo frammento di codice fa parte [Esempio demo di IE](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_IEDemo#4](../../mfc/reference/codesnippet/CPP/cmfctoolbarscustomizedialog-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPropertySheet](../../mfc/reference/cpropertysheet-class.md)  
  
 [CMFCToolBarsCustomizeDialog](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)  
  
## Requisiti  
 **intestazione:** afxToolBarsCustomizeDialog.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CPropertySheet Class](../../mfc/reference/cpropertysheet-class.md)