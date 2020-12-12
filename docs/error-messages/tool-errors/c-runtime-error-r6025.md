---
description: 'Altre informazioni su: errore di runtime di C R6025'
title: Errore di runtime di C R6025
ms.date: 11/04/2016
f1_keywords:
- R6025
helpviewer_keywords:
- R6025
ms.assetid: afa06d98-9c36-445b-b3e7-b6409bc8e779
ms.openlocfilehash: 7bf3213d81e144f14f6eeb25f108f497267ec4d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237569"
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
