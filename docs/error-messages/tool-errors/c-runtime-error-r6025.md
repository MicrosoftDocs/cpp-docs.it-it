---
title: Errore di runtime di C R6025
ms.date: 11/04/2016
f1_keywords:
- R6025
helpviewer_keywords:
- R6025
ms.assetid: afa06d98-9c36-445b-b3e7-b6409bc8e779
ms.openlocfilehash: 461bfb2aa46053ec56fff67de70038b1fcd97389
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62214168"
---
# <a name="c-runtime-error-r6025"></a>Errore di runtime di C R6025

chiamata di funzione virtuale pura

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema interno. Il motivo più comune di questo errore è un bug nell'applicazione o un'installazione danneggiata.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Nessun oggetto è stata creata un'istanza per gestire la chiamata di funzione virtuale pura.

Questo errore è causato dalla chiamata di funzione virtuale in una classe base astratta tramite un puntatore che viene creato da un cast nel tipo della classe derivata, ma è un puntatore alla classe di base. Ciò può verificarsi quando si esegue il cast da un **void** <strong>\*</strong> a un puntatore a una classe quando il **void** <strong>\*</strong> era creato durante la costruzione della classe di base.

