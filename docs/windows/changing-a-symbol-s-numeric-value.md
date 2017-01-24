---
title: "Changing a Symbol&#39;s Numeric Value | Microsoft Docs"
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
  - "vc.editors.symbol.changing.value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "numeric values"
  - "symbols, numeric values"
  - "numeric values, changing symbols"
ms.assetid: 468e903b-9c07-4251-ae09-3b6cb754cc2b
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Changing a Symbol&#39;s Numeric Value
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per simboli associati a una sola risorsa, è possibile usare la [finestra Proprietà](../Topic/Properties%20Window.md) per modificare il valore dei simboli.  È possibile usare la [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md) per modificare il valore dei simboli non attualmente assegnati a una risorsa.  Per altre informazioni vedere [Modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).  
  
### Per modificare il valore di un simbolo assegnato a una singola risorsa o oggetto  
  
1.  In [Visualizzazione risorse](../windows/resource-view-window.md) selezionare la risorsa.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nella finestra **Proprietà** digitare il nome del simbolo seguito da un segno di uguale e un numero intero nella casella **ID**, ad esempio:  
  
    ```  
    IDC_EDITNAME=5100  
    ```  
  
 Il nuovo valore viene archiviato nel file di intestazione simboli la volta successiva che si salva il progetto.  Solo il nome del simbolo rimane visibile nella casella ID; il segno di uguale e il valore non vengono visualizzati dopo essere stati convalidati.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Symbol Value Restrictions](../windows/symbol-value-restrictions.md)   
 [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)