---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2038'
title: Errore degli strumenti del linker LNK2038
ms.date: 12/15/2017
f1_keywords:
- LNK2038
helpviewer_keywords:
- LNK2038
ms.openlocfilehash: 17fa86010b4248b68234292dd909fe50f6379c7e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275659"
---
# <a name="linker-tools-error-lnk2038"></a>Errore degli strumenti del linker LNK2038

> rilevato non corrispondente per '*Name*': il valore '*value_1*' non corrisponde al valore '*value_2*' in *filename. obj*

Una mancata corrispondenza del simbolo è stata rilevata dal linker. Questo errore indica che diverse parti di un'app, incluse le librerie o altro codice oggetto a cui l'app si collega, usano definizioni in conflitto del simbolo. Il pragma [rileva la mancata corrispondenza](../../preprocessor/detect-mismatch.md) viene usato per definire tali simboli e rilevare i valori in conflitto.

## <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni

Questo errore può verificarsi quando un file oggetto nel progetto è scaduto. Prima di provare altre soluzioni a questo errore, eseguire una compilazione pulita per garantire che i file oggetto siano correnti.

Visual Studio definisce i simboli seguenti per impedire l'accesso del codice incompatibile che può generare errori di runtime o altri comportamenti imprevisti.

- `_MSC_VER` Indica i numeri di versione principale e secondaria del compilatore Microsoft C++ (MSVC) usato per compilare un'app o una libreria. Il codice compilato usando una versione di MSVC non è compatibile con il codice compilato usando una versione con numeri di versione principale e secondaria diversi. Per altre informazioni, vedere `_MSC_VER` in [macro predefinite](../../preprocessor/predefined-macros.md).

   Se si sta eseguendo il collegamento a una libreria non compatibile con la versione di MSVC in uso e non è possibile acquisire o compilare una versione compatibile della libreria, è possibile usare una versione precedente del compilatore per compilare il progetto: modificare la proprietà del set di strumenti della **piattaforma** del progetto nel set di strumenti precedente. Per altre informazioni, vedere [procedura: modificare il Framework di destinazione e il set di strumenti della piattaforma](../../build/how-to-modify-the-target-framework-and-platform-toolset.md).

- `_ITERATOR_DEBUG_LEVEL` Indica il livello di sicurezza e le funzionalità di debug abilitate nella libreria standard C++. Queste funzionalità possono modificare la rappresentazione di alcuni oggetti della libreria C++ standard e quindi renderli incompatibili con quelli che utilizzano funzionalità di sicurezza e debug diverse. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../../standard-library/iterator-debug-level.md).

- `RuntimeLibrary` Indica la versione della libreria standard C++ e del runtime C usato da un'app o una libreria. Il codice che utilizza una versione della libreria C++ standard o del runtime C è incompatibile con il codice che utilizza una versione diversa. Per altre informazioni, vedere [/MD, /MT, /LD (utilizzo della libreria di runtime)](../../build/reference/md-mt-ld-use-run-time-library.md).

- `_PPLTASKS_WITH_WINRT` Indica che il codice che usa la [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) è collegato a oggetti compilati usando un'impostazione diversa per l'opzione del compilatore [/ZW](../../build/reference/zw-windows-runtime-compilation.md) . (**/ZW** supporta C++/CX.) Il codice che utilizza o dipende dalla libreria PPL deve essere compilato utilizzando la stessa impostazione **/ZW** utilizzata nel resto dell'applicazione.

Assicurarsi che i valori di questi simboli siano coerenti in tutti i progetti della soluzione Visual Studio e anche con il codice e le librerie a cui l'applicazione fa riferimento.

## <a name="third-party-library-issues-and-vcpkg"></a>Problemi relativi alla libreria di terze parti e vcpkg

Se questo errore viene visualizzato quando si tenta di configurare una libreria di terze parti come parte della compilazione, è consigliabile usare [vcpkg](../../build/vcpkg.md), una gestione pacchetti C++, per installare e compilare la libreria. vcpkg supporta un [elenco di librerie di terze parti di](https://github.com/Microsoft/vcpkg/tree/master/ports)grandi dimensioni e in continua crescita e imposta tutte le proprietà di configurazione e le dipendenze necessarie per le compilazioni riuscite come parte del progetto.

## <a name="see-also"></a>Vedi anche

[Errori e avvisi degli strumenti del linker](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)
