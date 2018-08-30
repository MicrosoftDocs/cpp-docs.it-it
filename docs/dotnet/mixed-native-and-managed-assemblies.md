---
title: Assembly misti (nativi e gestiti) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 2a48f34edec8a9f24f22d35be482d3b297215dbe
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43210625"
---
# <a name="mixed-native-and-managed-assemblies"></a>Assembly misti (nativi e gestiti)

Assembly misti sono in grado di contenere istruzioni del computer non gestiti sia istruzioni MSIL. Ciò consente loro di e chiamate dai componenti di .NET, mantenendo la compatibilità con i componenti che non sono completamente gestiti. Usando gli assembly misti, gli sviluppatori potranno creare applicazioni usando una combinazione di funzionalità gestite e non gestite. In questo modo la soluzione ideale per la migrazione delle applicazioni Visual C++ esistente alla piattaforma .NET assembly misti.

Ad esempio, un'applicazione esistente costituite interamente da funzioni non gestite possa la migrazione alla piattaforma .NET ricompilando semplicemente un modulo con il **/clr** opzione del compilatore. Questo modulo è quindi possibile utilizzare le funzionalità di .NET, ma resta compatibile con il resto dell'applicazione. In questo modo, un'applicazione può essere convertita per la piattaforma .NET in modo graduale, passo per passo. È anche possibile scegliere tra la compilazione e non gestita in modo da funzione all'interno dello stesso file (vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md)).

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
