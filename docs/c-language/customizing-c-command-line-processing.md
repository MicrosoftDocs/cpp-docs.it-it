---
title: Personalizzazione dell'elaborazione dalla riga di comando C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- _spawn functions
- command line, processing
- command-line processing
- startup code, customizing command-line processing
- environment, environment-processing routine
- _setargv function
- command line, processing arguments
- suppressing environment processing
- _exec function
ms.assetid: c20fa11d-b35b-4f3e-93b6-2cd5a1c3c993
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 00194acd1aa72db73f75a2cb5aa5700df02be0a3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="customizing-c-command-line-processing"></a>Personalizzazione dell'elaborazione dalla riga di comando C
Se il programma non accetta argomenti della riga di comando, è possibile salvare una piccola quantità di spazio eliminando l'utilizzo della routine di libreria che esegue l'elaborazione della riga di comando. Questa routine viene chiamata **_setargv** (o **_wsetargv** nell'ambiente a caratteri wide), come descritto in [Espansione di argomenti con caratteri jolly](../c-language/expanding-wildcard-arguments.md). Per eliminarne l'uso, definire una routine che non esegue alcuna operazione nel file che contiene la funzione **main** e denominarla **_setargv** (o **_wsetargv** nell'ambiente a caratteri wide). La chiamata a **_setargv** o a **_wsetargv** viene soddisfatta dalla definizione di **_setargv** o **_wsetargv** creata e la versione di libreria non viene caricata.  
  
 Analogamente, se non si accede mai alla tabella dell'ambiente tramite l'argomento `envp`, è possibile fornire una propria routine vuota da usare invece di **_setenvp** (o **_wsetenvp**), la routine di ambiente-elaborazione.  
  
 Se il programma effettua chiamate alla famiglia di routine **_exec** o **_spawn** nella libreria run-time del linguaggio C, non si deve eliminare la routine di ambiente-elaborazione, poiché questa procedura viene usata per passare un ambiente dal processo di generazione al nuovo processo.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzione main ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)