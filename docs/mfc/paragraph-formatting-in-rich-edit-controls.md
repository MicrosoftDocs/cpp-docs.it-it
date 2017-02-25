---
title: "Formattazione paragrafo nei controlli Rich Edit | Microsoft Docs"
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
  - "CRichEditCtrl (classe), formattazione paragrafi"
  - "formattazione [C++], paragrafi"
  - "formattazione paragrafi in CRichEditCtrl"
  - "Rich Edit (controlli), formattazione paragrafi"
ms.assetid: 0df2e4c9-2074-4e41-b913-87cb8c1b4d43
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Formattazione paragrafo nei controlli Rich Edit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare le funzioni membro del controllo Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\) per formattare i paragrafi e per recuperare le informazioni di formattazione.  Gli attributi di formattazione dei paragrafi includono allineamento, tabulazioni, rientri e numerazione.  
  
 È possibile applicare la formattazione dei paragrafi utilizzando la funzione membro [SetParaFormat](../Topic/CRichEditCtrl::SetParaFormat.md).  Per determinare la formattazione del paragrafo corrente per il testo selezionato, utilizzare la funzione membro [GetParaFormat](../Topic/CRichEditCtrl::GetParaFormat.md).  La struttura [PARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787940) viene utilizzata con queste funzioni membro per specificare gli attributi di paragrafo.  Uno dei membri più importanti di **PARAFORMAT** è **dwMask**.  In `SetParaFormat`, **dwMask** specifica quali attributi di paragrafo verranno impostati dalla chiamata di funzione.  `GetParaFormat` riporta gli attributi del primo paragrafo della selezione; **dwMask** specifica gli attributi coerenti nella selezione.  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)