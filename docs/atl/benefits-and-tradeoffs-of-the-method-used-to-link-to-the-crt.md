---
description: 'Altre informazioni su: vantaggi e compromessi del metodo usato per il collegamento a CRT'
title: Vantaggi e compromessi del metodo usato per il collegamento a CRT
ms.date: 05/06/2019
helpviewer_keywords:
- _ATL_MIN_CRT macro
ms.assetid: 49b485f7-9487-49e4-b12a-0f710b620e2b
ms.openlocfilehash: 763332de9615e978d84902f67f2c97efd0767c89
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148525"
---
# <a name="benefits-and-tradeoffs-of-the-method-used-to-link-to-the-crt"></a>Vantaggi e compromessi del metodo usato per il collegamento a CRT

Il progetto può essere collegato a CRT in modo dinamico o statico. La tabella seguente illustra i vantaggi e i compromessi necessari per scegliere il metodo da usare.

|Metodo|Vantaggi|Compromesso|
|------------|-------------|--------------|
|Collegamento statico a CRT<br /><br /> (**Libreria di runtime** impostata su a **thread singolo**)|La DLL CRT non è necessaria nel sistema in cui verrà eseguita l'immagine.|Informazioni su 25K del codice di avvio viene aggiunto all'immagine, aumentando sostanzialmente le dimensioni.|
|Collegamento dinamico a CRT<br /><br /> (**Libreria di runtime** impostata **su multithread)**|L'immagine non richiede il codice di avvio CRT, quindi è molto più piccola.|La DLL CRT deve trovarsi nel sistema che esegue l'immagine.|

L'argomento [collegamento a CRT nel progetto ATL](../atl/linking-to-the-crt-in-your-atl-project.md) illustra come selezionare il modo in cui eseguire il collegamento a CRT.

## <a name="see-also"></a>Vedi anche

[Programmazione con ATL e codice C Run-Time](../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[DLL e comportamento delle librerie di runtime Visual C++](../build/run-time-library-behavior.md)<br/>
[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
