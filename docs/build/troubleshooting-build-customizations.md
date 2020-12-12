---
description: 'Altre informazioni su: risoluzione dei problemi delle personalizzazioni di compilazione'
title: Risoluzione dei problemi relativi alle personalizzazioni della compilazione
ms.date: 11/04/2016
helpviewer_keywords:
- build events [C++], troubleshooting
- builds [C++], build events
- troubleshooting [C++], builds
- build steps [C++], troubleshooting
- events [C++], build
- builds [C++], troubleshooting
- custom build steps [C++], troubleshooting
ms.assetid: e4ceb177-fbee-4ed3-a7d7-80f0d78c1d07
ms.openlocfilehash: e75dfeb32caf8c9c712c06b9dfb9e71f3e3c29b0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277440"
---
# <a name="troubleshooting-build-customizations"></a>Risoluzione dei problemi relativi alle personalizzazioni della compilazione

Se le istruzioni o gli eventi di compilazione personalizzati non funzionano come previsto, è possibile provare a identificare il problema in vari modi.

- Assicurarsi che i file generati dalle istruzioni di compilazione personalizzate corrispondano ai file dichiarati come output.

- Se le istruzioni di compilazione personalizzate generano file che sono input o dipendenze di altre istruzioni di compilazione (personalizzate o meno), verificare che tali file siano stati aggiunti al progetto. Verificare anche che gli strumenti che usano tali file vengano eseguiti dopo l'istruzione di compilazione personalizzata.

- Per visualizzare gli effetti dell'istruzione di compilazione personalizzata, aggiungere `@echo on` come primo comando. Gli eventi di compilazione e le istruzioni di compilazione vengono inseriti in un file temporaneo con estensione bat ed eseguiti quando viene compilato il progetto. Pertanto è possibile aggiungere il controllo degli errori ai comandi dell'evento di compilazione o dell'istruzione di compilazione.

- Esaminare il log di compilazione nella directory dei file intermedi per verificare quali elementi sono stati effettivamente eseguiti. Il percorso e il nome del log di compilazione sono rappresentati dall'espressione macro **MSBuild****$(IntDir)\\$(MSBuildProjectName).log**.

- Modificare le impostazioni del progetto per raccogliere nel log di compilazione una quantità di informazioni superiore a quella predefinita. Scegliere **Opzioni** dal menu **Strumenti**. Nella finestra di dialogo **Opzioni** fare clic sul nodo **Progetti e soluzioni** e quindi fare clic sulla pagina **Compila ed esegui**. Nella casella **Livello di dettaglio file di log di compilazione progetto MSBuild** fare clic su **Dettagliato**.

- Verificare i valori dei nomi file o delle macro di directory in uso. È possibile eseguire l'operazione echo sulle macro singolarmente oppure aggiungere `copy %0 command.bat` all'inizio dell'istruzione di compilazione personalizzata, in modo che i comandi dell'istruzione vengano copiati in command.bat con tutte le macro espanse.

- Eseguire le istruzioni di compilazione personalizzate e gli eventi di compilazione uno alla volta per verificarne il comportamento.

## <a name="see-also"></a>Vedi anche

[Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione](understanding-custom-build-steps-and-build-events.md)
