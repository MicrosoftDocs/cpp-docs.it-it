---
title: ID finestra e comando standard | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- standard command and Window IDs
ms.assetid: 0424805c-fff8-4531-8f0c-15cfb13aa612
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: d308f3f9efc5933124460d9839a0e94fffa60b4a
ms.lasthandoff: 02/24/2017

---
# <a name="standard-command-and-window-ids"></a>ID finestra e comando standard
La libreria MFC definisce una serie di ID di comando e di finestra standard in Afxres.h. Questi ID sono perlopiù utilizzati negli editor risorse e nella finestra delle proprietà per eseguire il mapping di messaggi alle funzioni del gestore. Tutti i comandi standard hanno un **ID _** prefisso. Ad esempio, quando si utilizza l'editor di menu, in genere si associa la voce di menu Apri allo standard `ID_FILE_OPEN` comando ID.  
  
 Per la maggior parte dei comandi, il codice dell'applicazione devono fare necessariamente riferimento all'ID di comando, poiché il framework stesso gestisce i comandi tramite le mappe messaggi nelle relative classi principali del framework ( `CWinThread`, `CWinApp`, `CView`, **CDocument**e così via).  
  
 Oltre agli ID di comando standard, è definita una serie di altri ID standard con il prefisso di **AFX_ID**. Questi ID includono gli ID di finestra standard (prefisso **afx_idw _**), ID stringa (prefisso **afx_ids _**) e molti altri tipi.  
  
 Gli ID che iniziano con la **AFX_ID** prefisso vengono utilizzati raramente dai programmatori, ma potrebbe essere necessario fare riferimento a tali ID quando si esegue l'override di funzioni del framework che si intende anche la **AFX_ID**s.  
  
 Gli ID non sono documentati singolarmente in questo riferimento. È possibile trovare ulteriori informazioni su di essi in note tecniche [20](../../mfc/tn020-id-naming-and-numbering-conventions.md), [21](../../mfc/tn021-command-and-message-routing.md), e [22](../../mfc/tn022-standard-commands-implementation.md).  
  
> [!NOTE]
>  Il file di intestazione Afxres.h è incluso indirettamente in Afxwin.h. È necessario includere in modo esplicito la seguente istruzione nel file di script di risorsa dell'applicazione (.rc):  
  
 [!code-cpp[NVC_MFC_Utilities&#47;](../../mfc/codesnippet/cpp/standard-command-and-window-ids_1.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

