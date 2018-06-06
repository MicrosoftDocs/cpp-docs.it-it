---
title: thiscall | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __thiscall
- __thiscall_cpp
dev_langs:
- C++
helpviewer_keywords:
- __thiscall keyword [C++]
ms.assetid: a6a22dd2-0101-4885-b33b-22f6057965df
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4912628529ae0b47a5a5b938ab8e6d25a9099510
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34704403"
---
# <a name="thiscall"></a>__thiscall

**Sezione specifica Microsoft**

La convenzione di chiamata `__thiscall` viene utilizzata nelle funzioni ed è la convenzione di chiamata predefinita utilizzata dalle funzioni di C++ che non utilizzano argomenti variabili. In `__thiscall`, la chiamata pulisce lo stack, operazione impossibile per funzioni `vararg`. Gli argomenti vengono inseriti nello stack da destra a sinistra, con il puntatore `this` passato tramite il registro ECX, e non nello stack, sull'architettura x86.

Un motivo per utilizzare `__thiscall` consiste nel fatto che nelle classi le funzioni utilizzano `__clrcall` per impostazione predefinita. In tal caso, è possibile utilizzare `__thiscall` per rendere specifiche funzioni chiamabili da codice nativo.

Durante la compilazione con [/clr: pure](../build/reference/clr-common-language-runtime-compilation.md), tutte le funzioni e i puntatori a funzione sono `__clrcall` se non specificato diversamente. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Nelle versioni precedenti di Visual C++ 2005, il `__thiscall` convenzione di chiamata potrebbe non essere specificato in modo esplicito in un programma, perché `__thiscall` non era una parola chiave.

Le funzioni `vararg` utilizzano la convenzione di chiamata `__cdecl`. Tutti gli argomenti della funzione vengono inseriti nello stack, con il puntatore `this` posizionato in fondo allo stack

Poiché questa convenzione di chiamata si applica solo a C++, non esiste alcuno schema della decorazione dei nomi in C.

Su ARM e x64 macchine, `__thiscall` viene accettata e ignorata dal compilatore.

Per le funzioni di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline. Questo significa che per i metodi membri non statici della classe la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

- [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)
