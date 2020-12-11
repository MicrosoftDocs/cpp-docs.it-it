---
description: 'Altre informazioni su: procedura: eseguire il debug di una build di rilascio'
title: 'Procedura: eseguire il debug di una build di rilascio'
ms.date: 11/04/2016
helpviewer_keywords:
- debugging [C++], release builds
- release builds, debugging
ms.assetid: d333e4d1-4e6c-4384-84a9-cb549702da25
ms.openlocfilehash: bbe70a534a9d953ea1b739dba3a32296c7893930
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97162703"
---
# <a name="how-to-debug-a-release-build"></a>Procedura: eseguire il debug di una build di rilascio

È possibile eseguire il debug di una build di rilascio di un'applicazione.

### <a name="to-debug-a-release-build"></a>Per eseguire il debug di una build di rilascio

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](working-with-project-properties.md).

1. Fare clic sul nodo **C/C++** . Impostare il **formato delle informazioni di debug** su [C7 compatibile (/Z7)](reference/z7-zi-zi-debug-information-format.md) o **database di programma (/Zi)**.

1. Espandere **linker** e fare clic sul nodo **generale** . Impostare **Abilita collegamento incrementale** su [No (/incremental: No)](reference/incremental-link-incrementally.md).

1. Selezionare il nodo **debug** . Impostare **genera informazioni di debug** su [Sì (/debug)](reference/debug-generate-debug-info.md).

1. Selezionare il nodo **ottimizzazione** . Impostare i **riferimenti** a [/opt: Ref](reference/opt-optimizations.md) e abilitare la riduzione **COMDAT** a [/opt: ICF](reference/opt-optimizations.md).

1. È ora possibile eseguire il debug dell'applicazione Release Build. Per individuare un problema, eseguire il codice un'istruzione alla volta (oppure utilizzare il debug JIT) finché non si individua la posizione in cui si verifica l'errore e quindi determinare il codice o i parametri non corretti.

   Se un'applicazione funziona in una build di debug, ma non riesce in una build di rilascio, una delle ottimizzazioni del compilatore potrebbe esporre un difetto nel codice sorgente. Per isolare il problema, disabilitare le ottimizzazioni selezionate per ogni file di codice sorgente fino a quando non si individua il file e l'ottimizzazione che causa il problema. Per accelerare il processo, è possibile dividere i file in due gruppi, disabilitare l'ottimizzazione in un gruppo e quando si individua un problema in un gruppo, continuare a dividere fino a isolare il file del problema.

   È possibile usare [/RTC](reference/rtc-run-time-error-checks.md) per provare a esporre tali bug nelle compilazioni di debug.

   Per ulteriori informazioni, vedere [ottimizzazione del codice](optimizing-your-code.md).

## <a name="see-also"></a>Vedi anche

[Correzione dei problemi di compilazione della versione](fixing-release-build-problems.md)
