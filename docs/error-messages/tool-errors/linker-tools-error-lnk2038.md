---
title: Errore LNK2038 degli strumenti del linker | Documenti Microsoft
ms.custom: 
ms.date: 12/15/2017
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK2038
dev_langs:
- C++
helpviewer_keywords:
- LNK2038
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 13f65f403cac43551b787abab15713fb9ffab618
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="linker-tools-error-lnk2038"></a>Errore degli strumenti del linker LNK2038

> rilevata mancata corrispondenza per '*nome*': valore '*value_1*'non corrisponde al valore'*value_2*' in *filename. obj*

Una mancata corrispondenza del simbolo è stata rilevata dal linker. Questo errore indica che le parti diverse di un'app, incluse le librerie o un altro oggetto di codice che i collegamenti di app, usano definizioni in conflitto del simbolo. Il [detect_mismatch](../../preprocessor/detect-mismatch.md) pragma viene utilizzato per definire tali simboli e rilevare i valori in conflitto.

## <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni

Questo errore può verificarsi quando un file oggetto nel progetto è scaduto. Prima di provare altre soluzioni a questo errore, eseguire una compilazione pulita per garantire che i file oggetto siano correnti.

Visual Studio definisce i simboli seguenti per impedire l'accesso del codice incompatibile che può generare errori di runtime o altri comportamenti imprevisti.

- `_MSC_VER`  
   Indica i numeri delle versioni minore e maggiore del compilatore di Visual C++ utilizzato per compilare un'applicazione o una libreria. Il codice compilato con una versione del compilatore di Visual C++ non è compatibile con il codice compilato utilizzando una versione con diversi numeri di versione maggiore e minore. Per ulteriori informazioni, vedere `_MSC_VER` in [macro predefinite](../../preprocessor/predefined-macros.md).

   Se si collega a una libreria che non è compatibile con la versione del compilatore Visual C++ in uso e non è possibile acquisire o creare una versione compatibile della libreria, è possibile utilizzare una versione precedente del compilatore per compilare il progetto: modificare il <C1/>set strumenti della piattaforma** proprietà del progetto per il set di strumenti precedenti. Per ulteriori informazioni, vedere [procedura: modificare il Framework di destinazione e un set di strumenti della piattaforma](../../build/how-to-modify-the-target-framework-and-platform-toolset.md).

- `_ITERATOR_DEBUG_LEVEL`  
   Indica il livello di sicurezza e le funzionalità di debug abilitati nella libreria C++ standard. Queste funzionalità possono modificare la rappresentazione di alcuni oggetti della libreria C++ standard e quindi renderli incompatibili con quelli che utilizzano funzionalità di sicurezza e debug diverse. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../../standard-library/iterator-debug-level.md).

- `RuntimeLibrary`  
   Indica la versione della libreria C++ standard e del runtime C utilizzati da un'applicazione o da una libreria. Il codice che utilizza una versione della libreria C++ standard o del runtime C è incompatibile con il codice che utilizza una versione diversa. Per altre informazioni, vedere [/MD, /MT, /LD (utilizzo della libreria di runtime)](../../build/reference/md-mt-ld-use-run-time-library.md).

- `_PPLTASKS_WITH_WINRT`  
   Indica che il codice che utilizza il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) è collegato a oggetti compilati utilizzando un'impostazione diversa per il [/ZW](../../build/reference/zw-windows-runtime-compilation.md) l'opzione del compilatore. (**/ZW** supporta C + + CX.) Codice che utilizza o dipende dalla libreria PPL deve essere compilato utilizzando lo stesso **/ZW** impostazione utilizzato nel resto dell'applicazione.

Assicurarsi che i valori di questi simboli siano coerenti in tutti i progetti della soluzione Visual Studio e anche con il codice e le librerie a cui l'applicazione fa riferimento.

## <a name="third-party-library-issues-and-vcpkg"></a>Problemi di una libreria di terze parti e Vcpkg

Se viene visualizzato questo errore quando si sta tentando di configurare una libreria di terze parti come parte della compilazione, è consigliabile utilizzare [Vcpkg](../../vcpkg.md), gestione del pacchetto di Visual C++, per installare e compilare la libreria. Supporta Vcpkg un elevato e crescente [elenco delle librerie di terze parti](https://github.com/Microsoft/vcpkg/tree/master/ports)e imposta le proprietà di configurazione e le dipendenze necessarie per le compilazioni riuscite come parte del progetto. Per ulteriori informazioni, vedere correlata [Blog di Visual C++](https://blogs.msdn.microsoft.com/vcblog/2016/09/19/vcpkg-a-tool-to-acquire-and-build-c-open-source-libraries-on-windows/) post.

## <a name="see-also"></a>Vedere anche

[Errori e avvisi degli strumenti del linkers](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)