---
title: Personalizzazione dell'elaborazione della riga di comando C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _setenvp
- _setargv
dev_langs:
- C++
helpviewer_keywords:
- command line, processing
- command-line processing
- startup code, customizing command-line processing
- environment, environment-processing routine
- _setargv function
- command line, processing arguments
- suppressing environment processing
- _setenvp function
ms.assetid: aae01cbb-892b-48b8-8e1f-34f22421f263
caps.latest.revision: 7
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 977ab6f5a7a8dbddf045e83a14127ac979a114a9
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="customizing-c-command-line-processing"></a>Personalizzazione dell'elaborazione dalla riga di comando C++
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Se il programma non accetta argomenti della riga di comando, è possibile salvare una piccola quantità di spazio eliminando l'utilizzo della routine di libreria che esegue l'elaborazione della riga di comando. Questa routine viene chiamata **Setargv** e viene descritta in [espansione di caratteri jolly](../cpp/wildcard-expansion.md). Per eliminare l'utilizzo, definire una routine che non esegue alcuna operazione nel file che contiene il **principale** funzione e denominarlo **Setargv**. La chiamata a **Setargv** viene soddisfatta dalla definizione di **Setargv**, e non viene caricata la versione della libreria.  
  
 Analogamente, se non si accede mai alla tabella dell'ambiente tramite il `envp` argomento, è possibile fornire una propria routine vuota da utilizzare al posto di **setenvp**, la routine di ambiente-elaborazione. Come il **Setargv** funzione **setenvp** deve essere dichiarato come **extern "C"**.  
  
 Il programma può effettuare chiamate al **spawn** o `exec` famiglia di routine della libreria di runtime C. In questo caso, non si deve eliminare la routine di elaborazione dell'ambiente, dato che questa routine viene utilizzata per passare un ambiente dal processo padre al processo figlio.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
