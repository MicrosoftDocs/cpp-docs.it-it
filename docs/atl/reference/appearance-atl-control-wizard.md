---
title: "Aspetto, Creazione guidata controllo ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.control.misc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata controllo ATL, aspetto"
ms.assetid: cc16d7ff-74d7-4c15-9ebd-4b19201ff457
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Aspetto, Creazione guidata controllo ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inserire qui il riepilogo dei risultati di ricerca.  
  
 È possibile utilizzare questa schermata della procedura guidata per definire opzioni aggiuntive degli elementi utente per il controllo.  Questa schermata è disponibile per i controlli definiti come **Controlli standard** nella casella **Tipo controllo** della schermata [Opzioni, Creazione guidata controllo ATL](../../atl/reference/options-atl-control-wizard.md).  
  
## Elenco UIElement  
 **Stato visualizzazione**  
 Consente di impostare l'aspetto del controllo all'interno del contenitore.  
  
-   **Opaco**: utilizzare questa opzione per impostare il bit `VIEWSTATUS_OPAQUE` nell'enumerazione [VIEWSTATUS](http://msdn.microsoft.com/library/windows/desktop/ms687201) e disegna l'intero rettangolo del controllo passato al metodo [CComControlBase::OnDraw](../Topic/CComControlBase::OnDraw.md).  Il controllo verrà visualizzato come completamente opaco e nessun contenitore sarà visibile dietro di esso.  
  
     In questo modo è possibile velocizzare il disegno del controllo da parte del contenitore.  Se l'opzione non è selezionata, il controllo può contenere parti trasparenti.  
  
     Solo un controllo opaco può avere uno sfondo a tinta unita.  
  
-   Imposta il bit `VIEWSTATUS_SOLIDBKGND` nell'enumerazione `VIEWSTATUS`.  Lo sfondo del controllo verrà visualizzato in tinta unita e senza motivi.  
  
     L'opzione è disponibile solo se è stata selezionata anche l'opzione **Opaco**.  
  
 **Aggiungi controllo basato su**  
 Consente di impostare il controllo in modo che sia basato su un tipo di controllo Windows mediante l'aggiunta di un membro dati [CContainedWindow](../Topic/CContainedWindow.md) alla classe che implementa il controllo.  Aggiunge anche una mappa messaggi e funzioni per la gestione dei messaggi Windows per il controllo.  Selezionare dall'elenco l'eventuale tipo di controllo Windows da creare.  
  
-   `Button`  
  
-   `ListBox`  
  
-   `SysAnimate32`  
  
-   `SysListView32`  
  
-   `ComboBox`  
  
-   `RichEdit`  
  
-   `SysDateTimePick32`  
  
-   `SysMonthCal32`  
  
-   `ComboBoxEx32`  
  
-   `ScrollBar`  
  
-   `SysHeader32`  
  
-   `SysTabControl32`  
  
-   `Edit`  
  
-   `Static`  
  
-   `SysIPAddress32`  
  
-   `SysTreeView32`  
  
 **Stato altre funzionalità**  
 Consente di impostare opzioni aggiuntive relative all'aspetto e al comportamento per il controllo.  
  
-   **Invisibile in fase di esecuzione**: imposta il controllo come invisibile in fase di esecuzione.  È possibile utilizzare i controlli invisibili per eseguire operazioni in background, ad esempio la generazione di eventi a intervalli prestabiliti.  
  
-   **Funzione di pulsante**: utilizzare questa opzione per impostare il bit `OLEMISC_ACTSLIKEBUTTON` nell'enumerazione [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) per assegnare la funzione di pulsante a un controllo.  Se l'area di visualizzazione client del controllo è contrassegnata nel contenitore come pulsante predefinito, selezionando questa opzione il controllo Button verrà visualizzato come predefinito disegnando una cornice più spessa.  Per ulteriori informazioni, vedere [CComControlBase::GetAmbientDisplayAsDefault](../Topic/CComControlBase::GetAmbientDisplayAsDefault.md).  
  
-   **Funzione di etichetta**: utilizzare questa opzione per impostare il bit `OLEMISC_ACTSLIKELABEL` nell'enumerazione `OLEMISC` per consentire a un controllo di sostituire l'etichetta nativa del contenitore,  il quale determina l'eventuale azione da eseguire in relazione a questo flag.  
  
 **Altro**  
 Consente di impostare opzioni aggiuntive relative al comportamento per il controllo.  
  
-   **Contesto periferica normalizzato**: utilizzare questa opzione per impostare il controllo in modo da creare un contesto periferica normalizzato quando il controllo viene chiamato per disegnare se stesso.  L'aspetto del controllo viene standardizzato, ma il disegno viene reso meno efficiente.  
  
-   **Solo finestra**: utilizzare questa opzione per specificare che il controllo non può essere privo di finestra.  Se non si seleziona questa opzione, il controllo risulta automaticamente privo di finestra nei contenitori che supportano gli oggetti di questo tipo, mentre nei contenitori senza supporto per gli oggetti privi di finestra risulta automaticamente con finestra.  Se si seleziona questa opzione si imposta il controllo con finestra anche nei contenitori con il supporto degli oggetti privi di finestra.  
  
-   **Inseribile**: selezionare questa opzione per includere il controllo nella finestra di dialogo **Inserisci oggetto** di applicazioni quali Word ed Excel.  In questo modo è possibile inserire il controllo mediante qualsiasi applicazione che supporta gli oggetti incorporati tramite questa finestra di dialogo.  
  
## Vedere anche  
 [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)   
 [SUBEDIT Sample: Superclasses a Standard Windows Control](http://msdn.microsoft.com/it-it/30e46bdc-ed92-417c-b6b8-359017265a7b)