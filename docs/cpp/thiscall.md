---
title: __thiscall
description: Informazioni sulla convenzione di chiamata __thiscall specifica di Microsoft per le funzioni membro delle classi x86 in Microsoft C++.
ms.date: 05/22/2020
f1_keywords:
- __thiscall
- __thiscall_cpp
helpviewer_keywords:
- __thiscall keyword [C++]
ms.assetid: a6a22dd2-0101-4885-b33b-22f6057965df
ms.openlocfilehash: 9b11dcf8dee928b687f942639ed72ead3659614b
ms.sourcegitcommit: 25f6d52eb9e5d84bd0218c46372db85572af81da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2020
ms.locfileid: "94448451"
---
# `__thiscall`

La convenzione di chiamata **specifica di Microsoft** **`__thiscall`** viene utilizzata nelle funzioni membro della classe C++ nell'architettura x86. Si tratta della convenzione di chiamata predefinita utilizzata dalle funzioni membro che non utilizzano argomenti variabili ( `vararg` funzioni).

In **`__thiscall`** il chiamato pulisce lo stack, operazione impossibile per le `vararg` funzioni. Gli argomenti vengono inseriti nello stack da destra a sinistra. Il **`this`** puntatore viene passato tramite Register ECX e non nello stack.

Nei computer ARM, ARM64 e x64, **`__thiscall`** viene accettata e ignorata dal compilatore. Questo perché usa una convenzione di chiamata basata su registro per impostazione predefinita.

Un motivo per usare **`__thiscall`** è nelle classi le cui funzioni membro usano **`__clrcall`** per impostazione predefinita. In tal caso, è possibile usare **`__thiscall`** per rendere chiamabili le singole funzioni membro dal codice nativo.

Quando si esegue la compilazione con [`/clr:pure`](../build/reference/clr-common-language-runtime-compilation.md) , tutte le funzioni e i puntatori a funzione sono **`__clrcall`** se non diversamente specificato. Le **`/clr:pure`** **`/clr:safe`** Opzioni del compilatore e sono deprecate in visual studio 2015 e non sono supportate in visual studio 2017.

`vararg` le funzioni membro usano la **`__cdecl`** convenzione di chiamata. Tutti gli argomenti della funzione vengono inseriti nello stack, con il **`this`** puntatore posizionato sullo stack per ultimo.

Poiché questa convenzione di chiamata si applica solo a C++, non ha uno schema di decorazione del nome C.

Quando si definisce una funzione membro di classe non statica out-of-line, specificare il modificatore della convenzione di chiamata solo nella dichiarazione. Non è necessario specificarlo di nuovo nella definizione out-of-line. Il compilatore usa la convenzione di chiamata specificata durante la dichiarazione in corrispondenza del punto di definizione.

## <a name="see-also"></a>Vedere anche

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)
