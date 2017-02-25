---
title: "Class factory e licenze | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros.classes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "class factory, e concessione in licenza"
ms.assetid: 53c4856a-4062-46db-9f69-dd4339f746b3
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Class factory e licenze
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per creare un'istanza del controllo OLE, un'applicazione contenitore chiama una funzione membro class factory di controllo.  Poiché il controllo effettivo è un oggetto OLE, il class factory è responsabile della creazione di istanze del controllo.  Ogni classe di controlli OLE deve avere una class factory.  
  
 Un'altra funzionalità importante di controlli OLE è la capacità di una licenza.  ControlWizard consente di includere la gestione licenze durante la creazione del progetto di controllo.  Per ulteriori informazioni sul controllo che consente licenza, vedere l'articolo [Controlli ActiveX: Gestione delle licenze un controllo ActiveX](../../mfc/mfc-activex-controls-licensing-an-activex-control.md).  
  
 Nella seguente tabella sono elencate numerose macro e funzioni utilizzate per dichiarare e implementare il class factory del controllo e la licenza del controllo.  
  
### Class factory e le licenze  
  
|||  
|-|-|  
|[DECLARE\_OLECREATE\_EX](../Topic/DECLARE_OLECREATE_EX.md)|Dichiara il class factory per un controllo OLE o una pagina delle proprietà.|  
|[IMPLEMENT\_OLECREATE\_EX](../Topic/IMPLEMENT_OLECREATE_EX.md)|Implementa la funzione di `GetClassID` del controllo e dichiara un'istanza di class factory.|  
|[BEGIN\_OLEFACTORY](../Topic/BEGIN_OLEFACTORY.md)|Iniziare la dichiarazione di tutte le funzioni di gestione delle licenze.|  
|[END\_OLEFACTORY](../Topic/END_OLEFACTORY.md)|Termina la dichiarazione di tutte le funzioni di gestione delle licenze.|  
|[AfxVerifyLicFile](../Topic/AfxVerifyLicFile.md)|Si verifica se un controllo è concesso in licenza per l'utilizzo di un particolare computer.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)