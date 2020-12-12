---
description: 'Altre informazioni su: impostare le variabili di percorso e di ambiente per le compilazioni Command-Line'
title: Impostare le variabili di percorso e di ambiente per le compilazioni Command-Line
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
ms.openlocfilehash: 3accc1cf56b86822298e1f1298bcae7d41c28332
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275386"
---
# <a name="set-the-path-and-environment-variables-for-command-line-builds"></a>Impostare le variabili di percorso e di ambiente per le compilazioni Command-Line

Gli strumenti di compilazione da riga di comando di Microsoft C++ (MSVC) richiedono diverse variabili di ambiente personalizzate per l'installazione e la configurazione della build. Quando un carico di lavoro C++ viene installato dal programma di installazione di Visual Studio, crea file di comando personalizzati o file batch che impostano le variabili di ambiente necessarie. Il programma di installazione usa quindi questi file di comando per creare collegamenti per il menu Start di Windows per aprire una finestra del prompt dei comandi per gli sviluppatori. Questi tasti di scelta rapida configurano le variabili di ambiente per una configurazione di compilazione specifica. Quando si desidera utilizzare gli strumenti da riga di comando, è possibile eseguire uno di questi tasti di scelta rapida oppure aprire una finestra del prompt dei comandi normale e quindi eseguire uno dei file di comando personalizzati per impostare manualmente l'ambiente di configurazione della compilazione. Per altre informazioni, vedere [usare il set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md). Per usare i file di comando con un prompt dei comandi normale, vedere la sezione intitolata [percorsi dei file di comando per sviluppatori](building-on-the-command-line.md#developer_command_file_locations).

Gli strumenti da riga di comando MSVC usano le variabili di ambiente PATH, TMP, INCLUDE, LIB e LIBPATH e usano anche altre variabili di ambiente specifiche per gli strumenti, le piattaforme e gli SDK installati. Anche una semplice installazione di Visual Studio può impostare venti o più variabili di ambiente. Poiché i valori di queste variabili di ambiente sono specifici per l'installazione e la scelta della configurazione di compilazione e possono essere modificati da aggiornamenti o aggiornamenti del prodotto, è consigliabile utilizzare un collegamento del prompt dei comandi per gli sviluppatori o uno dei file di comando personalizzati per impostarli, anziché impostarli manualmente nell'ambiente Windows.

Per visualizzare le variabili di ambiente impostate dal collegamento del prompt dei comandi per gli sviluppatori, è possibile usare il comando SET. Aprire una finestra del prompt dei comandi normale e acquisire l'output del comando SET per una baseline. Aprire una finestra del prompt dei comandi per gli sviluppatori e acquisire l'output del comando SET per il confronto. Uno strumento diff, ad esempio quello incorporato nell'IDE di Visual Studio, può essere utile per confrontare le variabili di ambiente e vedere cosa viene impostato dal prompt dei comandi per gli sviluppatori. Per informazioni sulle variabili di ambiente specifiche usate dal compilatore e dal linker, vedere [variabili di ambiente CL](reference/cl-environment-variables.md).

> [!NOTE]
> Diversi strumenti della riga di comando o opzioni dello strumento possono richiedere l'autorizzazione di amministratore. Se si verificano problemi di autorizzazione quando vengono usati, è consigliabile aprire la finestra del prompt dei comandi per gli sviluppatori usando l'opzione **Esegui come amministratore** . In Windows 10, fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per la finestra del prompt dei comandi, quindi scegliere **altro**, **Esegui come amministratore**.

## <a name="see-also"></a>Vedi anche

[Usare il set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md)<br/>
[Informazioni di riferimento sul linker MSVC](reference/linking.md)<br/>
[Opzioni del linker MSVC](reference/linker-options.md)<br/>
[Riferimenti al compilatore MSVC](reference/compiling-a-c-cpp-program.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
