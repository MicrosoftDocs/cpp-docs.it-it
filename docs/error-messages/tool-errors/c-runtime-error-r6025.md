---
title: R6025 errore di Runtime C | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- R6025
dev_langs:
- C++
helpviewer_keywords:
- R6025
ms.assetid: afa06d98-9c36-445b-b3e7-b6409bc8e779
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cfb7413cd6fd8dca976d668763fab678bb5c9ebf
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="c-runtime-error-r6025"></a>R6025 errore di Runtime C
chiamata di funzione virtuale pura  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema interno. La causa più comune di questo errore è un bug nell'applicazione o un'installazione danneggiata.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Nessun oggetto è stata creata un'istanza per gestire la chiamata di funzione virtuale pura.  
  
 Questo errore è causato dalla chiamata di funzione virtuale in una classe base astratta tramite un puntatore che viene creato da un cast nel tipo della classe derivata, ma è un puntatore alla classe di base. Questa situazione può verificarsi quando si esegue il cast da un **void\***  a un puntatore a una classe quando il **void\***  è stato creato durante la costruzione della classe di base.  
  
 Per ulteriori informazioni, vedere il [supporto tecnico Microsoft](http://go.microsoft.com/fwlink/p/?linkid=75220) sito Web.