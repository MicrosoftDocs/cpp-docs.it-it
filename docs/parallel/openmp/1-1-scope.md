---
title: 1.1 Ambito
ms.date: 11/04/2016
ms.assetid: a8570a3c-1dd6-4c3d-b368-a10fcb3534a6
ms.openlocfilehash: f87f631ae2d36662daa2ece4790170c00c5cbeb3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50449205"
---
# <a name="11-scope"></a>1.1 Ambito

Questa specifica descrive la parallelizzazione solo gestito dall'utente, in cui l'utente specifica in modo esplicito le azioni da eseguire dal compilatore e del sistema in fase di esecuzione per eseguire il programma in parallelo. Le implementazioni di OpenMP C e C++ non sono necessarie per verificare la presenza di dipendenze, è in conflitto, deadlock, le race condition o altri problemi che comportano l'esecuzione del programma non corretto. L'utente è responsabile di garantire che l'applicazione usando i costrutti OpenMP C e C++ API viene eseguita correttamente. Generato dal compilatore la parallelizzazione automatica e nelle direttive del compilatore per semplificare questo tipo parallelizzazione non incluse in questo documento.