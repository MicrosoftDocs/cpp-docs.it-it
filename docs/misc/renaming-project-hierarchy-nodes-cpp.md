---
title: "Ridenominazione dei nodi della gerarchia del progetto (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "esempio HierUtil7 [Visual Studio SDK], ridenominazione dei nodi del progetto"
  - "nodi del progetto, ridenominazione nell'esempio HierUtil7"
ms.assetid: cea5968e-e9f8-41a5-b068-622df542247c
caps.latest.revision: 12
caps.handback.revision: 12
manager: "douge"
---
# Ridenominazione dei nodi della gerarchia del progetto (C++)
È possibile rinominare un nodo della gerarchia della cartella del progetto tramite il framework di progetto HierUtil7 per C\+\+ non gestito.  Per ulteriori informazioni, vedere [HierUtil7 Sample](http://msdn.microsoft.com/it-it/29c15184-a70c-4813-86c2-fb1d47442d11).  
  
## Espandere il nodo della gerarchia  
  
#### Per espandere il nodo della gerarchia e rinominare la cartella  
  
1.  Selezionare il nodo della gerarchia utilizzando il seguente metodo:  
  
    ```  
    IfFailGo(pNode->ExtExpand(EXPF_SelectItem, GUID_MacroExplorer));  
    ```  
  
     `pNode` è il contenitore della gerarchia che corrisponde alla cartella e `EXPF_SelectItem` ha origine dall'enumerazione di <xref:Microsoft.VisualStudio.Shell.Interop.EXPANDFLAGS> .  `GUID_MacroExplorer` è un oggetto definito costante di GUID in Vsshell.idl e è un esempio per `rguidPersistenceSlot` nella firma della funzione di `ExtExpand`, definita in Hu\_node.h.  
  
    ```  
    HRESULT ExtExpand(EXPANDFLAGS expandflags, REFGUID rguidPersistenceSlot = GUID_SolutionExplorer) const;  
    ```  
  
     È possibile trovare il file di Hu\_node.h nella cartella, \<radice dell'installazione\> \\Program Files\\VSIP 8.0\\EnvSDK \\ common \\ hierutil7:  
  
2.  Rinominare la cartella inserendo il comando rinomina utilizzando l'\_M:Microsoft.VisualStudio.Shell.Interop.IVsUIShell.PostExecCommand\(System.Guid@, System.UInt32, System.UInt32, System.Object@\)  
  
    ```  
    IfFailGo(srpVsUIShell->PostExecCommand(&guidVSStd97, cmdidRename, 0, NULL));  
    ```  
  
     `srpVsUIShell` è un puntatore di <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell> : `<IVsUIShell>``srpVsUIShell`.  `guiVSStd97` è un identificatore univoco del gruppo di controlli in cui il comando `cmdidRename` appartiene, definito in Vsshlids.h.  
  
## Vedere anche  
 [Creazione di tipi di progetto](../Topic/Creating%20Project%20Types.md)   
 [Esempi di VSSDK](../misc/vssdk-samples.md)