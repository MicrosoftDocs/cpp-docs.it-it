---
title: "Finestra di dialogo Simboli risorsa | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.resourcesymbols"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Nuovo simbolo (finestra di dialogo)"
  - "Simboli risorsa (finestra di dialogo)"
  - "Cambia simbolo (finestra di dialogo)"
ms.assetid: 9706cde3-1f48-4fcd-bedb-2b03b455e3c1
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Finestra di dialogo Simboli risorsa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La finestra di dialogo **Simboli di risorsa** consente di aggiungere nuovi simboli risorsa, modificare i simboli visualizzati oppure passare alla posizione nel codice sorgente in cui un simbolo viene usato.  
  
 **Nome**  
 Visualizza il nome del simbolo.  Per altre informazioni, vedere [Restrizioni relative ai nomi dei simboli](../windows/symbol-name-restrictions.md).  
  
 **Valore**  
 Visualizza il valore numerico del simbolo.  Per altre informazioni, vedere [Restrizioni relative ai valori dei simboli](../windows/symbol-value-restrictions.md).  
  
 **In uso**  
 Se è selezionata, questa opzione specifica che il simbolo viene usato da una o più risorse.  La risorsa o le risorse vengono elencate nella casella Usato da.  
  
 **Mostra simboli di sola lettura**  
 Se è selezionata, questa opzione visualizza le risorse di sola lettura.  Per impostazione predefinita, nella finestra di dialogo Simboli risorsa vengono visualizzate soltanto le risorse modificabili nel file di script di risorsa. Se questa opzione è selezionata, tuttavia, le risorse modificabili vengono visualizzate in grassetto e le risorse di sola lettura in testo normale.  
  
 **Usato da**  
 Visualizza la risorsa o le risorse che usano il simbolo selezionato nell'elenco dei simboli.  Per passare all'editor relativo a una determinata risorsa, selezionare la risorsa nella casella **Usato da** e fare clic su **Visualizza uso**.  Per altre informazioni, vedere [Apertura dell'editor di risorse per un determinato simbolo](../windows/opening-the-resource-editor-for-a-given-symbol.md).  
  
 **Nuovo**  
 Apre la finestra di dialogo Nuovo simbolo, che consente di definire il nome e, se necessario, un valore per un nuovo identificatore di risorsa simbolico.  Per altre informazioni, vedere [Creazione di nuovi simboli](../windows/creating-new-symbols.md).  
  
 **Modifica**  
 Apre la finestra di dialogo Cambia simbolo, che consente di modificare il nome o il valore di un simbolo.  Se è relativo a un controllo o a una risorsa in uso, è possibile modificare il simbolo solo tramite l'editor di risorse corrispondente.  Per altre informazioni vedere [Modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).  
  
 **Visualizza uso**  
 Apre la risorsa contenente il simbolo nell'editor di risorse corrispondente.  Per altre informazioni, vedere [Apertura dell'editor di risorse per un determinato simbolo](../windows/opening-the-resource-editor-for-a-given-symbol.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Viewing Resource Symbols](../windows/viewing-resource-symbols.md)