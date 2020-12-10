---
title: Programmazione .NET con C++/CLI
description: Informazioni su come usare C++/CLI per creare app e componenti .NET in Visual Studio.
ms.date: 12/08/2020
helpviewer_keywords:
- programming [C++], .NET programming
- .NET Framework [C++]
- .NET applications [C++]
- Visual C++, .NET programming
ms.openlocfilehash: 80a9743016976e307158608134155dc7272d44a8
ms.sourcegitcommit: 754df5278f795f661d4eeb0d4cacc908aa630159
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/09/2020
ms.locfileid: "96933183"
---
# <a name="net-programming-with-ccli"></a>Programmazione .NET con C++/CLI

::: moniker range="msvc-140"

Per impostazione predefinita, i progetti CLR creati con 2015 sono destinati a.NET Framework 4.5.2. È possibile specificare come destinazione .NET Framework 4,6 quando si crea un nuovo progetto. Nella finestra di dialogo **nuovo progetto** modificare il Framework di destinazione nell'elenco a discesa nella parte superiore centrale della finestra di dialogo. Per modificare il Framework di destinazione per un progetto esistente, chiudere il progetto, modificare il file di progetto ( *`.vcxproj`* ) e modificare il valore della versione del Framework di destinazione in 4,6. Le modifiche diventano effettive alla successiva apertura del progetto.

::: moniker-end
::: moniker range="msvc-150"

In Visual Studio 2017, la .NET Framework di destinazione predefinita è 4.6.1. Il selettore di versione del Framework si trova nella parte inferiore della finestra di dialogo **nuovo progetto** .

## <a name="install-ccli-support-in-visual-studio-2017"></a>Installare il supporto C++/CLI in Visual Studio 2017

C++/CLI non viene installato per impostazione predefinita quando si installa un carico di lavoro di Visual Studio C++. Per installare il componente dopo l'installazione di Visual Studio, aprire il Programma di installazione di Visual Studio. Scegliere il pulsante **modifica** accanto alla versione installata di Visual Studio. Selezionare la scheda **componenti installati** . Scorrere verso il basso fino alla sezione **compilatori, strumenti di compilazione e Runtime** , quindi selezionare **supporto per C++/CLI**. Scegliere **modifica** per aggiornare Visual Studio.

::: moniker-end
::: moniker range="msvc-160"

In Visual Studio 2019, il Framework di destinazione predefinito per i progetti .NET Core è 5,0. Per i progetti .NET Framework, il valore predefinito è 4.7.2. Il selettore di versione .NET Framework si trova nella pagina **Configura nuovo progetto** della finestra di dialogo **Crea un nuovo progetto** .
## <a name="install-ccli-support-in-visual-studio-2019"></a>Installare il supporto C++/CLI in Visual Studio 2019

C++/CLI non viene installato per impostazione predefinita quando si installa un carico di lavoro di Visual Studio C++. Per installare il componente dopo l'installazione di Visual Studio, aprire il Programma di installazione di Visual Studio. Scegliere il pulsante **modifica** accanto alla versione installata di Visual Studio. Selezionare la scheda **componenti installati** . Scorrere verso il basso fino alla sezione **compilatori, strumenti di compilazione e Runtime** e selezionare il **supporto C++/CLI più recente per il componente Strumenti di compilazione V142** . Scegliere **modifica** per aggiornare Visual Studio.

::: moniker-end

## <a name="in-this-section"></a>Contenuto della sezione

[Attività C++/CLI](../dotnet/cpp-cli-tasks.md)

[Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)

[Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)

[Espressioni regolari (C++/CLI)](../dotnet/regular-expressions-cpp-cli.md)

[Gestione di file e I/O (C++/CLI)](../dotnet/file-handling-and-i-o-cpp-cli.md)

[Operazioni di grafica (C++/CLI)](../dotnet/graphics-operations-cpp-cli.md)

[Operazioni di Windows (C++/CLI)](../dotnet/windows-operations-cpp-cli.md)

[Accesso ai dati tramite ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md)

[Interoperabilità con altri linguaggi .NET (C++/CLI)](../dotnet/interoperability-with-other-dotnet-languages-cpp-cli.md)

[Serializzazione (C++/CLI)](../dotnet/serialization-cpp-cli.md)

[Tipi gestiti (C++/CLI)](../dotnet/managed-types-cpp-cli.md)

[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)

[Assembly con nome sicuro (firma degli assembly) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md)

[Classe debug (C++/CLI)](../dotnet/debug-class-cpp-cli.md)

[Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)

[Libreria di supporto per C++](../dotnet/cpp-support-library.md)

[Eccezioni in C++/CLI](../dotnet/exceptions-in-cpp-cli.md)

[Conversione boxing (C++/CLI)](../dotnet/boxing-cpp-cli.md)

## <a name="see-also"></a>Vedere anche

[Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
