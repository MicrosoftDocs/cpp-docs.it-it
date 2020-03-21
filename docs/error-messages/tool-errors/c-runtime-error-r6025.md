---
title: Errore di runtime di C R6025
ms.date: 11/04/2016
f1_keywords:
- R6025
helpviewer_keywords:
- R6025
ms.assetid: afa06d98-9c36-445b-b3e7-b6409bc8e779
ms.openlocfilehash: d5edb08278b7b6b9b3eb62e92fc04410f96a8f09
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80075124"
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

Questo errore è causato dalla chiamata di una funzione virtuale in una classe di base astratta tramite un puntatore creato da un cast al tipo della classe derivata, ma è effettivamente un puntatore alla classe di base. Questo problema può verificarsi quando si esegue il cast da un<strong>\*</strong> **void** a un puntatore a una classe quando il<strong>\*</strong> **void** è stato creato durante la costruzione della classe di base.
