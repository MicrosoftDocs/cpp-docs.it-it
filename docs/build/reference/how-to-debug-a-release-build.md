---
title: 'Procedura: eseguire il Debug di una Build di rilascio | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- debugging [C++], release builds
- release builds, debugging
ms.assetid: d333e4d1-4e6c-4384-84a9-cb549702da25
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2dcafe151edf907521c2db49b4ffacca38593e9b
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45723905"
---
# <a name="how-to-debug-a-release-build"></a>Procedura: eseguire il debug di una build di rilascio

È possibile eseguire il debug di una build di rilascio di un'applicazione.

### <a name="to-debug-a-release-build"></a>Eseguire il debug di una build di rilascio

1. Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Scegliere il **C/C++** nodo. Impostare **formato informazioni di Debug** al [compatibile C7 (/ Z7)](../../build/reference/z7-zi-zi-debug-information-format.md) oppure **Database di programma (/Zi)**.

1. Espandere **Linker** e fare clic sui **generali** nodo. Impostare **Abilita collegamento incrementale** al [No (/ /INCREMENTAL: NO)](../../build/reference/incremental-link-incrementally.md).

1. Selezionare il **debug** nodo. Impostare **genera informazioni di Debug** al [Sì (/debug)](../../build/reference/debug-generate-debug-info.md).

1. Selezionare il **ottimizzazione** nodo. Impostare **riferimenti** al [/OPT: ref](../../build/reference/opt-optimizations.md) e **Abilita riduzione COMDAT** al [/OPT: ICF](../../build/reference/opt-optimizations.md).

1. È ora possibile eseguire il debug della build di rilascio dell'applicazione. Per trovare un problema, esaminare il codice (o debug Usa Just-In-Time) finché non si trova in cui si verifica l'errore e quindi determinare i parametri non corretti o il codice.

   Se un'applicazione funziona in una build di debug, ma ha esito negativo in una build di rilascio, una delle ottimizzazioni del compilatore può essere esposto da un difetto nel codice sorgente. Per isolare il problema, disabilitare le ottimizzazioni selezionate per ogni file di codice sorgente fino a individuare il file e l'ottimizzazione che ha causato il problema. (Per accelerare il processo, è possibile dividere i file in due gruppi, disabilita l'ottimizzazione in un gruppo e quando si individua un problema in un gruppo, continuare divisione fino a isolare il file problematico.)

   È possibile usare [/RTC](../../build/reference/rtc-run-time-error-checks.md) per tentare di esporre tali bug nelle build di debug.

   Per altre informazioni, vedere [ottimizzazione del codice](../../build/reference/optimizing-your-code.md).

## <a name="see-also"></a>Vedere anche

[Correzione dei problemi della build di versione](../../build/reference/fixing-release-build-problems.md)