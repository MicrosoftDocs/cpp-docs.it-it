---
title: C R6025 di errore di Runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6025
dev_langs:
- C++
helpviewer_keywords:
- R6025
ms.assetid: afa06d98-9c36-445b-b3e7-b6409bc8e779
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b774c5f99387ca4403941d1461593bef8801e5de
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43220632"
---
# <a name="c-runtime-error-r6025"></a>R6025 di errore di Runtime C
chiamata di funzione virtuale pura  
  
> [!NOTE]
>  Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema interno. Il motivo più comune di questo errore è un bug nell'applicazione o un'installazione danneggiata.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Nessun oggetto è stata creata un'istanza per gestire la chiamata di funzione virtuale pura.  
  
 Questo errore è causato dalla chiamata di funzione virtuale in una classe base astratta tramite un puntatore che viene creato da un cast nel tipo della classe derivata, ma è un puntatore alla classe di base. Ciò può verificarsi quando si esegue il cast da un **void** <strong>\*</strong> a un puntatore a una classe quando il **void** <strong>\*</strong> era creato durante la costruzione della classe di base.  
  
 Per altre informazioni, vedere la [supporto tecnico Microsoft](http://go.microsoft.com/fwlink/p/?linkid=75220) sito Web.