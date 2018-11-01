---
title: Assembly misti (nativi e gestiti)
ms.date: 09/18/2018
helpviewer_keywords:
- interop [C++], mixed assemblies
- /clr compiler option [C++], mixed assemblies
- managed code [C++], interoperability
- interoperability [C++], mixed assemblies
- mixed DLL loading [C++]
- mixed assemblies [C++], about mixed assemblies
- assemblies [C++], mixed
- mixed assemblies [C++]
- native code [C++], .NET interoperatibility
ms.assetid: 4299dfce-392f-4933-8bf0-5da2f0d1c282
ms.openlocfilehash: 78e95177282804369bac2065582a06b8acbc975b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428676"
---
# <a name="mixed-native-and-managed-assemblies"></a>Assembly misti (nativi e gestiti)

Assembly misti sono in grado di contenere istruzioni del computer non gestiti sia istruzioni MSIL. Ciò consente loro di e chiamate dai componenti di .NET, mantenendo la compatibilità con le librerie C++ native. Uso di assembly misti, gli sviluppatori potranno creare applicazioni usando una combinazione di codice C++ nativo e .NET.

Ad esempio, una libreria esistente costituite interamente da codice C++ nativo possibile la migrazione alla piattaforma .NET ricompilando semplicemente un modulo con il **/clr** opzione del compilatore. Questo modulo è quindi possibile utilizzare le funzionalità di .NET, ma resta compatibile con il resto dell'applicazione. È anche possibile scegliere tra la compilazione nativa e gestita in modo da funzione all'interno dello stesso file (vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md)).

Visual C++ supporta solo la generazione di assembly misti gestiti usando il **/clr** opzione del compilatore. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017. Se è necessario puro o verificabile assembly gestiti, è consigliabile che crearle usando c#.

Versioni precedenti di strumenti del compilatore Visual C++ supportano la generazione di tre tipi distinti di assembly gestiti: mista, pura e verificabile. Quest'ultimo sono illustrati nella [codice Pure e verificabile (C + + CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md).

## <a name="in-this-section"></a>Contenuto della sezione

[Procedura: migrare a /clr](../dotnet/how-to-migrate-to-clr.md)<br/>
Descrive le procedure consigliate per l'introduzione o l'aggiornamento delle funzionalità .NET nell'applicazione.

[Procedura: compilare /clr MFC e ATL codice tramite l'utilizzo](../dotnet/how-to-compile-mfc-and-atl-code-by-using-clr.md)<br/>
Viene illustrato come compilare programmi esistenti di MFC e ATL per Common Language Runtime di destinazione.

[Inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md)<br/>
Descrive il problema di "blocco del caricatore" e soluzioni.

[Supporto delle librerie per assembly misti](../dotnet/library-support-for-mixed-assemblies.md)<br/>
Viene descritto come utilizzare le librerie native nel **/clr** compilazioni.

[Considerazioni sulle prestazioni](../dotnet/performance-considerations-for-interop-cpp.md)<br/>
Descrive le implicazioni sulle prestazioni di assembly misti e marshalling dei dati.

[Domini applicazione e Visual C++](../dotnet/application-domains-and-visual-cpp.md)<br/>
Viene descritto il supporto di Visual C++ per i domini applicazione.

[Doppio thunk](../dotnet/double-thunking-cpp.md)<br/>
Vengono illustrate le implicazioni sulle prestazioni di un punto di ingresso nativo per una funzione gestita.

[Evitare eccezioni all'arresto di CLR quando si utilizzano oggetti COM compilati con /clr](../dotnet/avoiding-exceptions-on-clr-shutdown-when-consuming-com-objects-built-with-clr.md)<br/>
Viene illustrato come garantire corretta chiusura di un'applicazione gestita che utilizza un oggetto COM compilato con **/clr**.

[Procedura: Creare un'applicazione parzialmente attendibile rimuovendo la dipendenza dalla DLL della libreria CRT](../dotnet/create-a-partially-trusted-application.md)<br/>
Viene illustrato come creare un'applicazione parzialmente attendibile di Common Language Runtime con Visual C++ rimuovendo la dipendenza msvcm90.

Per altre informazioni sulle linee guida sulla codifica per assembly misti, vedere l'articolo MSDN [An Overview of gestito e codice Interoperability](https://msdn.microsoft.com/library/ms973872.aspx).

## <a name="see-also"></a>Vedere anche

- [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
