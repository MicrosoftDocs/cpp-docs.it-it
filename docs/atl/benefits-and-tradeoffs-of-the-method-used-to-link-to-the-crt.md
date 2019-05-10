---
title: Vantaggi e compromessi del metodo usato per collegarsi a CRT
ms.date: 05/06/2019
helpviewer_keywords:
- _ATL_MIN_CRT macro
ms.assetid: 49b485f7-9487-49e4-b12a-0f710b620e2b
ms.openlocfilehash: b2e504de91cea9fef6e9acb0fc851bc2cc271e97
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221275"
---
# <a name="benefits-and-tradeoffs-of-the-method-used-to-link-to-the-crt"></a>Vantaggi e compromessi del metodo usato per collegarsi a CRT

Il progetto è possibile collegare con la libreria CRT in modo dinamico o statico. Nella tabella seguente vengono illustrati vantaggi e compromessi relativi alla scelta del metodo da utilizzare.

|Metodo|Vantaggio|Tradeoff|
|------------|-------------|--------------|
|Collegamento statico a CRT<br /><br /> (**Libreria di Runtime** impostata su **a thread singolo**)|La DLL di CRT non è richiesto nel sistema in cui verrà eseguita l'immagine.|Circa 25 KB di codice di avvio viene aggiunto all'immagine, in modo sostanziale l'aumento delle dimensioni.|
|Collegandosi dinamicamente a CRT<br /><br /> (**Libreria di Runtime** impostata su **multithread**)|L'immagine non richiede il codice di avvio di CRT, pertanto è molto più piccolo.|Nel sistema che eseguono l'immagine deve essere la DLL di CRT.|

L'argomento [collegamento a CRT nel progetto ATL](../atl/linking-to-the-crt-in-your-atl-project.md) viene illustrato come selezionare il modo in cui il collegamento alla libreria CRT.

## <a name="see-also"></a>Vedere anche

[Programmazione con il codice runtime C e ATL](../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[DLL e comportamento delle librerie di runtime Visual C++](../build/run-time-library-behavior.md)<br/>
[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
