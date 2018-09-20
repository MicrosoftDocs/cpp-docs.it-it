---
title: Nativa e l'interoperabilità .NET | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- interop [C++]
- .NET Framework [C++], interoperability with Visual C++
- interoperability [C++], about .NET interoperability
- interop [C++], about .NET interoperability
- managed code [C++], interoperability
- native code [C++]
- interoperability [C++]
- MFC [C++], .NET integration
- unmanaged code interoperability [C++]
- Visual C++, interoperability
- native code [C++], .NET interoperatibility
ms.assetid: f3ec6c99-c745-4256-b95b-f1d12ba17a5a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a6f62ff29ce104362d3057773e09a3cea1f69eed
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46420490"
---
# <a name="native-and-net-interoperability"></a>Interoperabilità .NET e nativa

Visual C++ supporta le funzionalità di interoperabilità che consentono di costrutti gestite e coesistere e l'interoperabilità all'interno dello stesso assembly e persino nello stesso file. Un piccolo subset di questa funzionalità, ad esempio P/Invoke, supportato da anche altri linguaggi .NET, ma la maggior parte del supporto interoperabilità fornito da Visual C++ non è disponibile in altri linguaggi.

## <a name="in-this-section"></a>In questa sezione

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)<br/>
Descrive gli assembly generati con il [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) opzione del compilatore che contengono sia gestite sia la funzionalità.

[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
Viene illustrato come utilizzare le classi di supporto di MFC Windows Form per ospitare i controlli Windows Form all'interno delle applicazioni MFC.

[Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)<br/>
Descrive come DLL non CLR può essere usata dalle applicazioni .NET.

## <a name="see-also"></a>Vedere anche

