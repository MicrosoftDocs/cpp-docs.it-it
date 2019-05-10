---
title: Impostare il percorso e le variabili di ambiente per compilazioni da riga di comando
ms.custom: conceptual
ms.date: 05/06/2019
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
ms.openlocfilehash: 30dadf365186ae74144a3225889c08eedfb89b47
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65217612"
---
# <a name="set-the-path-and-environment-variables-for-command-line-builds"></a>Impostare il percorso e le variabili di ambiente per compilazioni da riga di comando

Microsoft C++ strumenti di compilazione da riga di comando (MSVC) richiedono diverse variabili di ambiente personalizzate per la configurazione di installazione e compilazione. Quando viene installato un carico di lavoro di C++ per il programma di installazione di Visual Studio, crea i file di comando personalizzato o un file batch, che impostano le variabili di ambiente necessarie. Il programma di installazione Usa quindi questi file di comando per creare tasti di scelta rapida per il menu Start di Windows aprire una finestra del prompt dei comandi per gli sviluppatori. Questi tasti di scelta rapida impostare le variabili di ambiente per una specifica configurazione di compilazione. Quando si desidera utilizzare gli strumenti da riga di comando, è possibile eseguire uno di questi collegamenti, oppure è possibile aprire una finestra del prompt dei comandi normale e quindi eseguire uno dei file del comando personalizzato per impostare l'ambiente di configurazione di compilazione se stessi. Per altre informazioni, vedere [un set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md).

Gli strumenti da riga di comando di MSVC usano le variabili di ambiente PATH, TMP, INCLUDE, LIB e LIBPATH e anche usano altre variabili di ambiente specifiche agli strumenti installati, piattaforme e gli SDK. Anche una semplice installazione di Visual Studio può impostare venti o più variabili di ambiente. Poiché i valori di queste variabili di ambiente siano per l'installazione e la scelta della configurazione della build e possono essere modificati da aggiornamenti del prodotto, è consigliabile usare un collegamento prompt dei comandi per gli sviluppatori o uno del personalizzare i file di comando come impostarli, invece di configurarli nell'ambiente di Windows a se stessi.

Per visualizzare quali variabili di ambiente vengono impostate da un collegamento prompt dei comandi per gli sviluppatori, è possibile usare il comando SET. Aprire una finestra del prompt dei comandi normale e acquisire l'output del comando SET per una linea di base. Aprire una finestra del prompt dei comandi per gli sviluppatori e acquisire l'output del comando SET per il confronto. Uno strumento diff ad esempio quella incorporata in IDE di Visual Studio può essere utile per confrontare le variabili di ambiente e vedere cosa è impostata dal prompt dei comandi per gli sviluppatori. Per informazioni sulle variabili di ambiente specifico utilizzato dal compilatore e linker, vedere [variabili di ambiente CL](reference/cl-environment-variables.md).

> [!NOTE]
>  Alcuni strumenti da riga di comando o le opzioni dello strumento possono richiedere le autorizzazioni di amministratore. Se hai problemi di autorizzazione quando vengono usate, è consigliabile che si apre la finestra del prompt dei comandi per gli sviluppatori con il **Esegui come amministratore** opzione. In Windows 10, fare doppio clic per aprire il menu di scelta rapida per la finestra del prompt dei comandi, quindi scegliere **altre**, **Esegui come amministratore**.

## <a name="see-also"></a>Vedere anche

[Usare il set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md)<br/>
[Informazioni di riferimento sul linker MSVC](reference/linking.md)<br/>
[Opzioni del linker MSVC](reference/linker-options.md)<br/>
[Informazioni di riferimento sul compilatore MSVC](reference/compiling-a-c-cpp-program.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
