---
title: Personalizzazione dell'elaborazione della riga di comando C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _setenvp
- _setargv
dev_langs:
- C++
helpviewer_keywords:
- command line [C++], processing
- command-line processing
- startup code, customizing command-line processing
- environment, environment-processing routine
- _setargv function
- command line [C++], processing arguments
- suppressing environment processing
- _setenvp function
ms.assetid: aae01cbb-892b-48b8-8e1f-34f22421f263
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e847cff10c7e17185f76b5e790beda3745732312
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39406689"
---
# <a name="customizing-c-command-line-processing"></a>Personalizzazione dell'elaborazione dalla riga di comando C++
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Se il programma non accetta argomenti della riga di comando, è possibile salvare una piccola quantità di spazio eliminando l'utilizzo della routine di libreria che esegue l'elaborazione della riga di comando. Questa routine viene chiamata `_setargv` e viene descritto [espansione di caratteri jolly](../cpp/wildcard-expansion.md). Per eliminare l'utilizzo, definire una routine che non esegue alcuna operazione nel file che contiene il `main` funzione e denominarlo `_setargv`. La chiamata a `_setargv` viene soddisfatta dalla definizione di `_setargv`, e non viene caricata la versione della libreria.  
  
 Analogamente, se si accede mai alla tabella dell'ambiente tramite il `envp` argomento, è possibile fornire una propria routine vuota da usare al posto di `_setenvp`, la routine di ambiente-elaborazione. Come le `_setargv` funzione `_setenvp` deve essere dichiarato come **extern "C"**.  
  
 Il programma può effettuare chiamate per il `spawn` o `exec` della famiglia di routine della libreria di runtime C. In questo caso, non si deve eliminare la routine di elaborazione dell'ambiente, dato che questa routine viene utilizzata per passare un ambiente dal processo padre al processo figlio.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)