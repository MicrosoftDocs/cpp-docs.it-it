---
title: "Formattazione CString e visualizzazione finestre di messaggio | Microsoft Docs"
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
  - "vc.mfc.macros.strings"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oggetti CString, formattazione e finestre di messaggio"
ms.assetid: d1068cf4-9cc5-4952-b9e7-d612c53cbc28
caps.latest.revision: 14
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Formattazione CString e visualizzazione finestre di messaggio
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alcune funzioni vengono fornite per formattare e analizzare gli oggetti di `CString`.  È possibile utilizzare queste funzioni ogni volta che è necessario modificare oggetti di `CString`, ma sono particolarmente utili per le stringhe di formattazione che saranno visualizzati in testo della finestra di messaggio.  
  
 Questo gruppo di funzioni include inoltre una routine globale per visualizzare la finestra di messaggio.  
  
### Funzioni CString  
  
|||  
|-|-|  
|[AfxExtractSubString](../Topic/AfxExtractSubString.md)|Estrarre le sottostringhe separate da un singolo carattere da una stringa di origine specificata.|  
|[AfxFormatString1](../Topic/AfxFormatString1.md)|Sostituisce una stringa specificata per i caratteri di formato "%1 " in una stringa contenuta nella tabella di stringhe.|  
|[AfxFormatString2](../Topic/AfxFormatString2.md)|Surrogati due stringhe per i caratteri di formato "%1 " e "%2 " in una stringa contenuta nella tabella di stringhe.|  
|[AfxMessageBox](../Topic/AfxMessageBox.md)|Visualizza una finestra di messaggio.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [CStringT Class](../../atl-mfc-shared/reference/cstringt-class.md)