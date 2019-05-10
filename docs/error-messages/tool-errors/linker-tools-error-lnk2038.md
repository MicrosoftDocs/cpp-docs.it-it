---
title: Errore degli strumenti del linker LNK2038
ms.date: 12/15/2017
f1_keywords:
- LNK2038
helpviewer_keywords:
- LNK2038
ms.openlocfilehash: f2839494232e7b57325b6f7abb960a258ba13078
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65446957"
---
# <a name="linker-tools-error-lnk2038"></a>Errore degli strumenti del linker LNK2038

> rilevata mancata corrispondenza per '*name*': valore '*value_1*'non corrisponde al valore'*value_2*' in *filename. obj*

Una mancata corrispondenza del simbolo è stata rilevata dal linker. Questo errore indica che le parti diverse di un'app, tra cui librerie o un altro oggetto di codice che i collegamenti delle app, usano definizioni in conflitto del simbolo. Il [detect_mismatch](../../preprocessor/detect-mismatch.md) pragma viene usato per definire tali simboli e rilevare i valori in conflitto.

## <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni

Questo errore può verificarsi quando un file oggetto nel progetto è scaduto. Prima di provare altre soluzioni a questo errore, eseguire una compilazione pulita per garantire che i file oggetto siano correnti.

Visual Studio definisce i simboli seguenti per impedire l'accesso del codice incompatibile che può generare errori di runtime o altri comportamenti imprevisti.

- `_MSC_VER` Indica i numeri di versione principale e secondario di Microsoft C++ compilatore (MSVC) che viene usato per compilare un'app o una libreria. Il codice compilato con una versione di MSVC è incompatibile con il codice compilato con una versione con numeri di versione principale e secondario diversi. Per altre informazioni, vedere `_MSC_VER` nelle [Predefined Macros](../../preprocessor/predefined-macros.md).

   Se si collegano a una libreria che non è compatibile con la versione di MSVC che sta usando, e non è possibile acquisire o compilare una versione compatibile della libreria, è possibile usare una versione precedente del compilatore per compilare il progetto: modificare il  **Set di strumenti della piattaforma** proprietà del progetto per il set di strumenti precedenti. Per altre informazioni, vedere [Procedura: Modificare il framework di destinazione e il set di strumenti della piattaforma](../../build/how-to-modify-the-target-framework-and-platform-toolset.md).

- `_ITERATOR_DEBUG_LEVEL` Indica il livello di sicurezza e le funzionalità sono abilitate nella libreria Standard C++ di debug. Queste funzionalità possono modificare la rappresentazione di alcuni oggetti della libreria C++ standard e quindi renderli incompatibili con quelli che utilizzano funzionalità di sicurezza e debug diverse. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../../standard-library/iterator-debug-level.md).

- `RuntimeLibrary` Indica la versione di runtime della libreria Standard C++ e C viene utilizzato da un'app o una libreria. Il codice che utilizza una versione della libreria C++ standard o del runtime C è incompatibile con il codice che utilizza una versione diversa. Per altre informazioni, vedere [/MD, /MT, /LD (utilizzo della libreria di runtime)](../../build/reference/md-mt-ld-use-run-time-library.md).

- `_PPLTASKS_WITH_WINRT` Indica che il codice che usa il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) è collegato a oggetti compilati utilizzando un'impostazione diversa per il [/ZW](../../build/reference/zw-windows-runtime-compilation.md) opzione del compilatore. (**/ZW** supporta C++/CX.) Codice che utilizza o dipende dalla libreria PPL deve essere compilato usando le stesse **/ZW** impostazione utilizzato nel resto dell'app.

Assicurarsi che i valori di questi simboli siano coerenti in tutti i progetti della soluzione Visual Studio e anche con il codice e le librerie a cui l'applicazione fa riferimento.

## <a name="third-party-library-issues-and-vcpkg"></a>Problemi di una libreria di terze parti e Vcpkg

Se viene visualizzato questo errore quando si tenta di configurare una libreria di terze parti come parte della compilazione, è consigliabile usare [Vcpkg](../../vcpkg.md), installare e compilare la libreria di gestione pacchetti Visual C++. Vcpkg supporta un elevato e continuamente crescente [elenco delle librerie di terze parti](https://github.com/Microsoft/vcpkg/tree/master/ports)e imposta tutte le proprietà di configurazione e le dipendenze necessarie per la riuscita della compilazione come parte del progetto. Per altre informazioni, vedere i relativi [Blog di Visual C++](https://blogs.msdn.microsoft.com/vcblog/2016/09/19/vcpkg-a-tool-to-acquire-and-build-c-open-source-libraries-on-windows/) post.

## <a name="see-also"></a>Vedere anche

[Errori e avvisi degli strumenti del linkers](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)