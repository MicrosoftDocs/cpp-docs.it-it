---
title: Integrare vcpkg con Visual Studio o Visual Studio Code
description: Informazioni su come integrare vcpkg con Visual Studio in Windows o Visual Studio Code in macOS e Linux.
ms.date: 12/11/2020
ms.technology: cpp-ide
ms.openlocfilehash: b6f092313dde14b10a05d4cff0904adf5174b264
ms.sourcegitcommit: 2b2c3fa9244e31db35ea33554dea0efcab490f3c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/18/2020
ms.locfileid: "97684265"
---
# <a name="integrate-vcpkg-with-visual-studio-or-visual-studio-code"></a>Integrare vcpkg con Visual Studio o Visual Studio Code

vcpkg è una gestione pacchetti da riga di comando multipiattaforma per le librerie C e C++. Puoi integrarlo con Visual Studio in Windows o Visual Studio Code in Linux e macOS.

## <a name="integrate-with-visual-studio-on-windows"></a>Eseguire l'integrazione con Visual Studio in Windows

### <a name="integrate-per-user"></a>Integrazione per utente

Dalla directory radice vcpkg eseguire **`vcpkg integrate install`** per configurare Visual Studio per individuare tutti i file di intestazione e i file binari di vcpkg in base ai singoli utenti. Non è necessario modificare i percorsi di directory di VC + + in Visual Studio. Se sono presenti più cloni di vcpkg, il clone da cui viene eseguito questo comando diventa il nuovo percorso predefinito.

È ora possibile includere le intestazioni digitando il nome della cartella o dell'intestazione e il completamento automatico assiste l'utente. Non sono necessari passaggi aggiuntivi per il collegamento alle librerie o per aggiungere riferimenti al progetto. Nella figura seguente viene illustrato il modo in cui Visual Studio trova le *`azure-storage-cpp`* intestazioni. vcpkg inserisce le intestazioni nella *`/installed`* sottocartella partizionata in base alla piattaforma di destinazione. Il diagramma seguente mostra l'elenco dei file di inclusione nella *`/was`* sottocartella per la libreria:

![Finestra popup di completamento automatico di IntelliSense nell'editor di Visual Studio](media/vcpkg-intellisense.png "vcpkg e IntelliSense")

### <a name="integrate-per-project"></a>Integrazione per progetto

Se è necessario usare una versione specifica di una libreria diversa dalla versione nell'istanza attiva di vcpkg, attenersi alla procedura seguente:

1. Creare un nuovo clone di vcpkg. Per altre informazioni, vedere [Install vcpkg](install-vcpkg.md).

1. Passare alla nuova directory radice di vcpkg.

1. Modificare il portfile per la libreria per ottenere la versione necessaria.

1. Eseguire **`vcpkg install <library>`** . Per altre informazioni, vedere [Manage Libraries with vcpkg](manage-libraries-with-vcpkg.md).

1. Usare **`vcpkg integrate project`** per creare un pacchetto NuGet che fa riferimento a tale libreria in base al progetto.

## <a name="integrate-with-visual-studio-code-on-linux-or-macos"></a>Integrazione con Visual Studio Code in Linux o macOS

Nella finestra della shell o del terminale modificare le directory nella directory radice di vcpkg. Eseguire quindi **`./vcpkg integrate install`** per configurare Visual Studio Code in Linux o MacOS. Questo comando imposta il percorso degli strumenti e delle librerie vcpkg e Abilita IntelliSense nei file di origine.

## <a name="remove-vcpkg-integration"></a>Rimuovi integrazione vcpkg

Se è stata usata l' **`integrate`** opzione, è necessario rimuovere l'integrazione prima di rimuovere un'istanza di vcpkg. Per rimuovere e pulire l'integrazione, modificare le directory nella directory radice di vcpkg. In Windows eseguire **`vcpkg integrate remove`** per assicurarsi che l'integrazione venga pulita. In Linux o macOS eseguire il **`./vcpkg integrate remove`** comando.

## <a name="see-also"></a>Vedere anche

[vcpkg: Gestione pacchetti C++ per Windows, Linux e macOS](./vcpkg.md)\
[vcpkg su GitHub](https://github.com/Microsoft/vcpkg)\
[Installare vcpkg](install-vcpkg.md)\
[Gestire le librerie con vcpkg](manage-libraries-with-vcpkg.md)\
[informazioni di riferimento sulla riga di comando vcpkg](vcpkg-command-line-reference.md)\
[Guida introduttiva](https://github.com/microsoft/vcpkg/blob/master/docs/index.md)\
[Domande frequenti](https://github.com/microsoft/vcpkg/blob/master/docs/about/faq.md)
