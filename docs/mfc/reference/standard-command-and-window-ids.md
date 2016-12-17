---
title: "ID finestra e comando standard | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ID finestra e comando standard"
ms.assetid: 0424805c-fff8-4531-8f0c-15cfb13aa612
caps.latest.revision: 13
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ID finestra e comando standard
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La libreria MFC definisce un numero ID standard di comando e finestra in Afxres.h.  Questi ID sono più utilizzati negli editor di risorse e nella Finestra Proprietà per eseguire il mapping di messaggi alle funzioni di gestione.  Tutti i comandi standard hanno un prefisso **ID\_**.  Ad esempio, quando si utilizza l'editor di menu, in genere si associa l'elemento di menu Apri File all'ID di comando standard `ID_FILE_OPEN`.  
  
 Per la maggior parte dei controlli standard, il codice dell'applicazione non deve fare riferimento all'ID di comando, poiché il framework stesso gestisce i comandi tramite le mappe messaggi nelle relative classi principali del framework \(`CWinThread`, `CWinApp`, `CView`, **CDocument**, e così via\).  
  
 Oltre agli ID di comando standard, una serie di altri ID standard vengono definiti con il prefisso **AFX\_ID**.  Questi ID includono gli ID di finestra standard \(prefisso **AFX\_IDW\_**\), ID stringa \(prefisso **AFX\_IDS\_**\) e molti altri tipi.  
  
 Gli ID che iniziano con il prefisso **AFX\_ID** vengono utilizzati raramente dai programmatori, ma potrebbe essere necessario avere la necessità di fare riferimento a tali ID quando si esegue l'override delle funzioni framework che si riferiscono anche agli **AFX\_ID**.  
  
 Gli ID non sono documentati singolarmente in questo riferimento.  Si possono trovare ulteriori informazioni su di essi nelle note tecniche [20](../../mfc/tn020-id-naming-and-numbering-conventions.md), [21](../../mfc/tn021-command-and-message-routing.md) e [22](../../mfc/tn022-standard-commands-implementation.md).  
  
> [!NOTE]
>  Il file di intestazione Afxres.h è incluso indirettamente in Afxwin.h.  È necessario includere in modo esplicito la seguente istruzione nel file di script di risorsa dell'applicazione \(.rc\):  
  
 [!code-cpp[NVC_MFC_Utilities#47](../../mfc/codesnippet/CPP/standard-command-and-window-ids_1.h)]  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)