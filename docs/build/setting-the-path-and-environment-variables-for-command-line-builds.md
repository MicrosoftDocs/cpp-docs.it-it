---
title: Impostare il percorso e le variabili di ambiente per le compilazioni dalla riga di comandoSet the Path and Environment Variables for Command-Line Builds
ms.custom: conceptual
ms.date: 07/24/2019
helpviewer_keywords:
- environment variables [C++]
- VCVARS32.bat file
- cl.exe compiler [C++], environment variables
- LINK tool [C++], environment variables
- PATH reserved word
- INCLUDE reserved word
- LINK tool [C++], path
- LIB environment variable
- compiling source code [C++], from command line
- environment variables [C++], CL compiler
ms.assetid: 99389528-deb5-43b9-b99a-03c8773ebaf4
ms.openlocfilehash: aeafe806e5d29b89c243586974814aa7cfc16d1d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335590"
---
# <a name="set-the-path-and-environment-variables-for-command-line-builds"></a>Impostare il percorso e le variabili di ambiente per le compilazioni dalla riga di comandoSet the Path and Environment Variables for Command-Line Builds

Gli strumenti di compilazione da riga di comando di Microsoft C, (MSVC) richiedono diverse variabili di ambiente personalizzate per la configurazione di installazione e compilazione. Quando il programma di installazione di Visual Studio consente di creare file di comando personalizzati, o file batch, che impostano le variabili di ambiente necessarie. Il programma di installazione utilizza quindi questi file di comando per creare collegamenti per il menu Start di Windows per aprire una finestra del prompt dei comandi per sviluppatori. Questi tasti di scelta rapida impostano le variabili di ambiente per una configurazione di compilazione specifica. Quando si desidera utilizzare gli strumenti da riga di comando, è possibile eseguire uno di questi collegamenti oppure aprire una finestra del prompt dei comandi semplice e quindi eseguire uno dei file di comando personalizzati per impostare manualmente l'ambiente di configurazione della compilazione. Per ulteriori informazioni, consultate Utilizzare il set di [strumenti MSVC dalla riga di comando.](building-on-the-command-line.md) Per utilizzare i file di comando con un prompt dei comandi semplice, vedere la sezione relativa [ai percorsi](building-on-the-command-line.md#developer_command_file_locations)dei file di comando per gli sviluppatori .

Gli strumenti da riga di comando MSVC utilizzano le variabili di ambiente PATH, TMP, INCLUDE, LIB e LIBPATH e utilizzano anche altre variabili di ambiente specifiche per gli strumenti, le piattaforme e gli SDK installati. Anche una semplice installazione di Visual Studio può impostare venti o più variabili di ambiente. Poiché i valori di queste variabili di ambiente sono specifici per l'installazione e la configurazione di compilazione scelta e possono essere modificati dagli aggiornamenti del prodotto, è consigliabile utilizzare un collegamento al prompt dei comandi per gli sviluppatori o uno dei file di comando personalizzati per impostarli, anziché impostarli manualmente nell'ambiente Windows.

Per visualizzare le variabili di ambiente impostate da un collegamento al prompt dei comandi per sviluppatori, è possibile utilizzare il comando SET. Aprire una finestra del prompt dei comandi semplice e acquisire l'output del comando SET per una linea di base. Aprire una finestra del prompt dei comandi per sviluppatori e acquisire l'output del comando SET per il confronto. Uno strumento diff come quello incorporato nell'IDE di Visual Studio può essere utile per confrontare le variabili di ambiente e vedere ciò che viene impostato dal prompt dei comandi per sviluppatori. Per informazioni sulle variabili di ambiente specifiche utilizzate dal compilatore e dal linker, vedere [Variabili di ambiente CL](reference/cl-environment-variables.md).

> [!NOTE]
> Diversi strumenti da riga di comando o opzioni degli strumenti possono richiedere l'autorizzazione di amministratore. Se si verificano problemi di autorizzazione quando vengono utilizzati, è consigliabile aprire la finestra del prompt dei comandi per gli sviluppatori utilizzando l'opzione **Esegui come amministratore.** In Windows 10, fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per la finestra del prompt dei comandi, quindi scegliere **Altro**, **Esegui come amministratore**.

## <a name="see-also"></a>Vedere anche

[Usare il set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md)<br/>
[Informazioni di riferimento sul linker MSVC](reference/linking.md)<br/>
[Opzioni del linker MSVC](reference/linker-options.md)<br/>
[Riferimento al compilatore MSVCMSVC Compiler Reference](reference/compiling-a-c-cpp-program.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
