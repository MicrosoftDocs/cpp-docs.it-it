---
title: "Classi wrapper | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], classi wrapper"
  - "associazione dati [C++], controlli ActiveX"
  - "classi wrapper [C++], controlli ActiveX"
ms.assetid: ebbc17b9-cc1b-4c29-afa9-da7f9511876e
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Classi wrapper
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando si [inserisce un controllo](../../data/ado-rdo/inserting-the-control-into-a-visual-cpp-application.md) in un progetto Visual C\+\+, per impostazione predefinita le classi wrapper del controllo non vengono incluse.  Se tuttavia si desidera [modificare il comportamento del controllo](../../data/ado-rdo/modifying-a-control-s-run-time-behavior.md), sarà possibile scrivere appositamente una classe wrapper.  In base al tipo di manipolazione del controllo che si intende eseguire a livello di codice, sarà necessario scrivere una o più classi wrapper.  
  
 Per ogni coclasse contenuta nel file della libreria dei tipi \(TLB\) del controllo è disponibile una relativa classe wrapper.  Alla classe wrapper del controllo viene in genere assegnato il nome del controllo preceduto dalla lettera C.  
  
 Per ulteriori informazioni sulle funzionalità delle classi wrapper, vedere il modello a oggetti della tecnologia di base del controllo.  
  
 Anche l'utilizzo di [CWnd::GetDlgItem](../Topic/CWnd::GetDlgItem.md) richiede il ricorso alle classi wrapper in quanto è necessario eseguire il cast del valore restituito nella classe del controllo.  Di seguito è riportato un esempio.  
  
```  
CDBList* pDBList = 0;  
pDBList = static_cast<CDBList*>(GetDlgItem(IDC_DBLIST));  
```  
  
 Nel file IDL generato è possibile verificare le proprietà, i metodi e gli eventi esposti da un controllo, nonché esaminare direttamente le dichiarazioni dei metodi e delle funzioni di accesso.  Per ulteriori informazioni sul controllo, utilizzare il [Visualizzatore oggetti OLE\/COM](../../data/ado-rdo/using-the-ole-com-object-viewer.md).  
  
## Vedere anche  
 [Utilizzo dei controlli ActiveX](../../data/ado-rdo/using-activex-controls.md)   
 [Modifica del comportamento di un controllo in fase di esecuzione](../../data/ado-rdo/modifying-a-control-s-run-time-behavior.md)