---
description: 'Altre informazioni su: errore di runtime di C R6032'
title: Errore di runtime di C R6032
ms.date: 11/04/2016
f1_keywords:
- R6032
helpviewer_keywords:
- R6032
ms.assetid: 52092a63-cc51-444a-bfc3-fad965a3558e
ms.openlocfilehash: b0fbc7730867fb6e9045adf4e5e2b8667f741784
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275893"
---
# <a name="c-runtime-error-r6032"></a>Errore di runtime di C R6032

Spazio insufficiente per le informazioni sulle impostazioni locali

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema di memoria interna. Questo errore può essere dovuto a diversi motivi, ma spesso a causa di una condizione di memoria estremamente insufficiente o di un bug nel programma.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Il runtime mantiene le informazioni sulle impostazioni locali in ogni thread in modo che sia in grado di elaborare le chiamate alle funzioni dipendenti dalle impostazioni locali. Se l'allocazione della memoria per queste informazioni ha esito negativo, il runtime non è in grado di procedere perché troppe funzionalità di base dipendono da esso.
