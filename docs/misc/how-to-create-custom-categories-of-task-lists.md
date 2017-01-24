---
title: "Procedura: Creare categorie personalizzate di elenchi di attivit&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Elenco attività, categorie personalizzate"
ms.assetid: 5e4ac1b1-9afb-46c5-9dcc-6cab9c5ceee8
caps.latest.revision: 9
caps.handback.revision: 9
manager: "douge"
---
# Procedura: Creare categorie personalizzate di elenchi di attivit&#224;
Le categorie personalizzate di attività forniscono il controllo sul modo in cui le attività vengono visualizzati nella finestra di **Elenco attività** .  
  
 Implementare una categoria personalizzata di attività per i seguenti motivi:  
  
-   Si desidera controllare dove le categorie visualizzare \(ordinato\) nell'elenco di categorie.  
  
-   Si dispone di diverse sottocategorie di attività che si desidera eseguire l'ordinamento in una categoria senza altre attività che ordinano tra loro.  
  
-   Si desidera creare una visualizzazione personalizzata in cui solo le attività visualizzato.  
  
    > [!NOTE]
    >  È possibile realizzare effetti simili alle categorie personalizzate senza dovere implementare una categoria personalizzata.  Ad esempio, è possibile visualizzare una bitmap a una categoria o la sottocategoria implementando <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskProvider2.ImageList%2A> e <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2.ImageListIndex%2A>.  Il provider di attività fornisce l'elenco e quindi ogni attività viene fornito un indice nell'elenco.  
  
 Per creare una categoria personalizzata in **Elenco attività**, registrarlo con **Elenco attività** tramite la procedura riportata di seguito.  
  
### Per registrare una categoria personalizzata dell'elenco attività  
  
-   \_ Call entity\_M:Microsoft.VisualStudio.Shell.Interop.IVsTaskList.RegisterCustomCategory\(System.Guid@,System.UInt32,Microsoft.VisualStudio.Shell.Interop.VSTASKCATEGORY\[\]\) to register a custom category with the task list.  
  
     Ogni categoria personalizzata deve disporre di un GUID, specificato nel parametro di `guidCat` .  Nel parametro di `dwSortOrder` , immettere il percorso in cui si desidera questa categoria per ordinare \(se l'elenco è ordinato per le categorie\).  Questo metodo restituisce il percorso effettivo di ordinamento della categoria personalizzata all'interno del più ampio elenco di categorie.  
  
     Gli ordinamenti per le categorie incorporate di attività, definite nell'enumerazione <xref:Microsoft.VisualStudio.Shell.Interop.VSTASKCATEGORY> , sono nella tabella seguente.  
  
    |Categoria|Valore|Descrizione|  
    |---------------|------------|-----------------|  
    |CAT\_ALL|1|non una categoria reale.  Utilizzato per consentire a una visualizzazione elenco attività visualizzare tutte le attività in **Elenco attività**.|  
    |CAT\_BUILDCOMPILE|10|Errore di compilazione, avvisi ed eventualmente errori di distribuzione.|  
    |CAT\_COMMENTS|20|Attività relativi allo sviluppo della pagina Web.|  
    |CAT\_CODESENSE|30|Errori generati nel codice sorgente del tipo.|  
    |CAT\_SHORTCUTS|40|Collegamenti dal codice.|  
    |CAT\_USER|50|Attività inserite dall'utente.|  
    |CAT\_MISC|60|Le implementazioni fittizie delle interfacce utilizzate più frequentemente di Visual Studio e COM sono nei file di intestazione, VSLMockSystemInterfaces.h e VSLMockVisualStudioInterfaces.h, installati nel *percorso di installazione di Visual Studio SDK*\\VisualStudioIntegration\\Common\\Source\\CPP\\VSL\\Include\\.|  
    |CAT\_HTML|70|Tasks that pertain to Web page development.|  
  
     Ad esempio, per includere una categoria tra CAT\_CODESENSE e CAT\_SHORTCUTS, è possibile passare un valore di 31 per l'ordinamento.  Tuttavia, un valore 31 potrebbe essere già utilizzato da un altro provider personalizzato di categoria di attività, **Elenco attività** si assegna che la categoria di attività per l'inizio lo slot.  Questo valore viene passato all'interno del parametro di `pCat` .  
  
### Per annullare la registrazione di una categoria personalizzata dell'elenco attività  
  
-   Chiamare <xref:Microsoft.VisualStudio.Shell.Interop.IVsTrackSelectionEx.OnElementValueChange%2A> con il primo parametro impostato su `SEID_PropertyBrowserSID` \(ricavato dall'enumerazione <xref:Microsoft.VisualStudio.VSConstants.VSSELELEMID>\) e il terzo parametro, `varValue`,  che rappresenta un formato stringa del GUID che rappresenta la finestra **Proprietà**.  
  
## Vedere anche  
 [Creazione di visualizzazioni personalizzate dell'elenco attività](../misc/creating-custom-task-list-views.md)