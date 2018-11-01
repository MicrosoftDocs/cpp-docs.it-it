---
title: 'Errore irreversibile U1059 di NMAKE '
ms.date: 08/27/2018
f1_keywords:
- U1059
helpviewer_keywords:
- U1059
ms.assetid: b21d9198-9c63-40d0-b589-80e17294ce24
ms.openlocfilehash: 3c148bf2feb7ba12686e00b29f5bf90cb9f2f2d7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50645025"
---
# <a name="nmake-fatal-error-u1059"></a>Errore irreversibile U1059 di NMAKE 

> Errore di sintassi: '}' mancante nel dipendente

Un percorso di ricerca di un dipendente è stato specificato correttamente. È presente uno spazio nel percorso o la parentesi graffa di chiusura (**}**) è stato omesso.

La sintassi per una specifica di directory per un dipendente è

> **{** *directory* **} dipendenti**

in cui *directory* specifica uno o più percorsi, ciascuno separati da punto e virgola (**;**). Non sono consentiti spazi.

Se da una macro viene sostituito o parte di un percorso di ricerca, verificare che non contenga spazi presenti nell'espansione della macro.