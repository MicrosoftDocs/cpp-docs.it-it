---
title: Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione
ms.date: 11/04/2016
helpviewer_keywords:
- builds [C++], events
- custom build steps [C++], customizing builds
- events [C++], build
- custom build steps [C++]
- build steps [C++]
- build events [C++], order of events and build steps
- build steps [C++], build events
- builds [C++], custom build steps
ms.assetid: beb2f017-3e9f-4b2c-9b57-2572fd2628e4
ms.openlocfilehash: 5bc402ad8999f1864c7e6b1155da3c68862dda97
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827740"
---
# <a name="understanding-custom-build-steps-and-build-events"></a>Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione

Nell'ambiente di sviluppo Visual C++ esistono tre modi principali per personalizzare il processo di compilazione:

- **Istruzioni di compilazione personalizzate**

   Un'istruzione di compilazione personalizzata è una regola di compilazione associata a un progetto. Un'istruzione di compilazione personalizzata può specificare una riga di comando da eseguire, file di input o output aggiuntivi e un messaggio da visualizzare. Per altre informazioni, vedere [Procedura: Aggiungere un passaggio di compilazione personalizzata a progetti MSBuild](how-to-add-a-custom-build-step-to-msbuild-projects.md).

- **Strumenti di compilazione personalizzati**

   Uno strumento di compilazione personalizzato è una regola di compilazione associata a uno o più file. Un'istruzione di compilazione personalizzata può passare file di input a uno strumento di compilazione personalizzato, che restituisce uno o più file di output. Ad esempio, i file della Guida in un'applicazione MFC vengono compilati con uno strumento di compilazione personalizzato. Per altre informazioni, vedere [Procedura: Aggiungere gli strumenti di compilazione personalizzata a progetti MSBuild](how-to-add-custom-build-tools-to-msbuild-projects.md) e [personalizzato specificando gli strumenti di compilazione](specifying-custom-build-tools.md).

- **Eventi di compilazione**

   Gli eventi di compilazione consentono di personalizzare la compilazione di un progetto. Esistono tre tipi di eventi di compilazione: eventi di *pre-compilazione*, *pre-collegamento* e *post-compilazione*. Un evento di compilazione consente di specificare l'esecuzione di un'azione in un momento specifico del processo di compilazione. Ad esempio è possibile usare un evento di compilazione per registrare un file con **regsvr32.exe** al termine della compilazione del progetto. Per altre informazioni, vedere [Specifica di eventi di compilazione](specifying-build-events.md).

[Risoluzione dei problemi di personalizzazione della compilazione](troubleshooting-build-customizations.md) illustra come verificare che le istruzioni di compilazione personalizzate e gli eventi di compilazione vengano eseguiti come previsto.

Anche il formato di output di un'istruzione o un evento di compilazione personalizzato può migliorare l'usabilità dello strumento. Per altre informazioni, vedere [Formattazione dell'output di un'istruzione di compilazione personalizzata o un evento di compilazione](formatting-the-output-of-a-custom-build-step-or-build-event.md).

Gli eventi di compilazione e le istruzioni di compilazione personalizzate vengono eseguiti nell'ordine seguente insieme ad altre operazioni di compilazione:

1. Evento di pre-compilazione

2. Strumenti di compilazione personalizzati su file singoli

3. MIDL

4. Compilatore di risorse

5. Compilatore C/C++

6. evento di pre-collegamento

7. Linker o Gestione librerie (se necessario)

8. Strumento Manifesto

9. BSCMake

10. Istruzione di compilazione personalizzata nel progetto

11. Evento di post-compilazione

`custom build step on the project` e `post-build event` vengono eseguiti in sequenza dopo il completamento di tutti gli altri processi di compilazione.

## <a name="in-this-section"></a>Contenuto della sezione

[Specificare gli strumenti di compilazione personalizzato](specifying-custom-build-tools.md)<br/>
[Specificare eventi di compilazione](specifying-build-events.md)<br/>
[Risolvere i problemi delle personalizzazioni di compilazione](troubleshooting-build-customizations.md)<br/>
[Formato dell'Output di un'istruzione di compilazione personalizzata o evento di compilazione](formatting-the-output-of-a-custom-build-step-or-build-event.md)<br/>

## <a name="see-also"></a>Vedere anche

[Progetti di Visual Studio - C++](creating-and-managing-visual-cpp-projects.md)<br>
[Macro comuni per i comandi e le proprietà di compilazione](reference/common-macros-for-build-commands-and-properties.md)
