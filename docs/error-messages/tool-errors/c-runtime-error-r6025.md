---
title: Errore di runtime di C R6025
ms.date: 11/04/2016
f1_keywords:
- R6025
helpviewer_keywords:
- R6025
ms.assetid: afa06d98-9c36-445b-b3e7-b6409bc8e779
ms.openlocfilehash: 6e184ba24ad535697a727276a980fd082625e082
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218052"
---
# <a name="c-runtime-error-r6025"></a>Errore di runtime di C R6025

chiamata di funzione virtuale pura

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema interno. La causa più comune di questo errore è rappresentata da un bug nell'app o da un'installazione danneggiata.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Non è stata creata un'istanza di un oggetto per gestire la chiamata alla funzione virtuale pura.

Questo errore è causato dalla chiamata di una funzione virtuale in una classe di base astratta tramite un puntatore creato da un cast al tipo della classe derivata, ma è effettivamente un puntatore alla classe di base. Questo problema può verificarsi quando si esegue il cast da un oggetto **`void`** <strong>\*</strong> a un puntatore a una classe quando **`void`** <strong>\*</strong> è stato creato durante la costruzione della classe di base.
