---
title: Configurare progetti Linux per l'uso di Address Sanitizer
description: Descrive come configurare i progetti Linux C++ in Visual Studio per l'uso di Address Sanitizer.
ms.date: 06/07/2019
ms.openlocfilehash: 2415e8971614de35f046b699ce99c3822faf9372
ms.sourcegitcommit: 8adabe177d557c74566c13145196c11cef5d10d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2019
ms.locfileid: "66824182"
---
# <a name="configure-linux-projects-to-use-address-sanitizer"></a>Configurare progetti Linux per l'uso di Address Sanitizer

In Visual Studio 2019 versione 16.1 il supporto di AddressSanitizer (ASan) è integrato nei progetti Linux. È possibile abilitare Address Sanitizer sia per i progetti Linux basati su MSBuild che per i progetti CMake. L'abilitazione di Address Sanitizer è valida sia nei sistemi Linux remoti che in Sottosistema Windows per Linux (WSL).

## <a name="about-asan"></a>Informazioni su Address Sanitizer

Address Sanitizer è un rilevatore di errori di memoria in runtime per C /C++ che intercetta gli errori seguenti:

- Uso dopo la liberazione (riferimento a un puntatore tralasciato)
- Sovraccarico del buffer dell'heap
- Sovraccarico del buffer dello stack
- Uso dopo il ritorno
- Uso dopo l'ambito
- Bug dell'ordine di inizializzazione

Quando Address Sanitizer rileva un errore, arresta l'esecuzione immediatamente. Se si esegue un programma abilitato per Address Sanitizer nel debugger, viene visualizzato un messaggio che descrive il tipo di errore, l'indirizzo di memoria e la posizione in cui l'errore si è verificato nel file sorgente:

   ![Messaggio di errore](media/asan-error.png)

È anche possibile visualizzare l'output di Address Sanitizer completo, incluso il punto in cui la memoria danneggiata è stata allocata o deallocata, nel riquadro Debug della finestra di output.

## <a name="enable-asan-for-msbuild-based-linux-projects"></a>Abilitare Address Sanitizer per progetti Linux basati su MSBuild

Per abilitare Address Sanitizer per progetti Linux basati su MSBuild, fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e selezionare **Proprietà**. Passare quindi a **Proprietà di configurazione** > **C/C++**  > **Sanitizer**. L'abilitazione di Address Sanitizer viene eseguita tramite flag del compilatore e del linker. Perché funzioni, è necessario ricompilare il progetto.

![Abilitare Address Sanitizer per un progetto MSBuild](media/msbuild-asan-prop-page.png)

È possibile passare flag di runtime di Address Sanitizer facoltativi da **Proprietà di configurazione** > **Debug** > **Flag di runtime di AddressSanitizer**. Fare clic sulla freccia verso il basso per aggiungere o rimuovere flag.

![Configurare flag di runtime di Address Sanitizer](media/msbuild-asan-runtime-flags.png)

## <a name="enable-asan-for-visual-studio-cmake-projects"></a>Abilitare Address Sanitizer per progetti CMake di Visual Studio

Per abilitare Address Sanitizer per CMake, fare clic con il pulsante destro del mouse sul file CMakeLists.txt in **Esplora soluzioni** e scegliere **Impostazioni di CMake per <progetto>** .

Assicurarsi di aver selezionato una configurazione Linux (ad esempio, **Linux-Debug**) nel riquadro sinistro della finestra di dialogo:

![Configurazione di debug Linux](media/linux-debug-configuration.png)

Le opzioni di Address Sanitizer sono in **Generali**. Immettere i flag di runtime di Address Sanitizer nel formato "flag=valore", separandoli con il punto e virgola.

![Configurazione di debug Linux](media/cmake-settings-asan-options.png)

## <a name="install-the-asan-debug-symbols"></a>Installare i simboli di debug di Address Sanitizer

Per abilitare la diagnostica di Address Sanitizer, è necessario installare i relativi simboli di debug (libasan-dbg) nel computer Linux remoto o nell'installazione di WSL. La versione di libasan-dbg caricata dipende dalla versione di GCC installata nel computer Linux:

|**Versione Address Sanitizer**|**Versione GCC**|
| --- | --- |
|libasan0|gcc-4.8|
|libasan2|gcc-5|
|libasan3|gcc-6|
|libasan4|gcc-7|
|libasan5|gcc-8|

È possibile determinare la versione di GCC disponibile usando questo comando:

```bash
gcc --version
```

Per visualizzare la versione di libasan-dbg necessaria, eseguire il programma e quindi esaminare il riquadro **Debug** della finestra **Output**. La versione di Address Sanitizer caricata corrisponde alla versione di libasan-dbg necessaria nel computer Linux. È possibile usare **Ctrl + F** per cercare "libasan" nella finestra. Se si ha libasan4, ad esempio, viene visualizzata una riga come la seguente:

```Output
Loaded '/usr/lib/x86_64-linux-gnu/libasan.so.4'. Symbols loaded.
```

È possibile installare i bit di debug di Address Sanitizer nelle distribuzioni Linux che usano apt con il comando seguente. Questo comando installa la versione 4:

```bash
sudo apt-get install libasan4-dbg
```

Se è stata eseguita l'abilitazione di Address Sanitizer, nella parte superiore del riquadro **Debug** della finestra **Output** Visual Studio chiede di installare i simboli di debug di Address Sanitizer.
