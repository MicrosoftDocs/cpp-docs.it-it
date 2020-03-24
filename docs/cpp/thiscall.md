---
title: __thiscall
ms.date: 11/04/2016
f1_keywords:
- __thiscall
- __thiscall_cpp
helpviewer_keywords:
- __thiscall keyword [C++]
ms.assetid: a6a22dd2-0101-4885-b33b-22f6057965df
ms.openlocfilehash: 8772159dca71bb7605af5e5919425065423d503d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188155"
---
# <a name="__thiscall"></a>__thiscall

**Sezione specifica Microsoft**

La convenzione di chiamata **__thiscall** viene utilizzata per le funzioni membro e rappresenta la convenzione di chiamata C++ predefinita utilizzata dalle funzioni membro che non utilizzano argomenti variabili. In **__thiscall**, il chiamato pulisce lo stack, operazione impossibile per le funzioni di `vararg`. Gli argomenti vengono inseriti nello stack da destra a sinistra, con il puntatore **this** passato tramite Register ECX e non nello stack sull'architettura x86.

Un motivo per utilizzare **__thiscall** è nelle classi le cui funzioni membro utilizzano `__clrcall` per impostazione predefinita. In tal caso, è possibile usare **__thiscall** per rendere le singole funzioni membro richiamabili dal codice nativo.

Quando si esegue la compilazione con [/CLR: pure](../build/reference/clr-common-language-runtime-compilation.md), tutte le funzioni e i puntatori a funzione vengono `__clrcall` se non diversamente specificato. Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Nelle versioni precedenti a Visual Studio 2005, non è stato possibile specificare in modo esplicito la convenzione di chiamata **__thiscall** in un programma, perché **__thiscall** non era una parola chiave.

`vararg` funzioni membro usano la convenzione di chiamata **__cdecl** . Tutti gli argomenti della funzione vengono inseriti nello stack, con l' **ultimo puntatore posizionato** sullo stack

Poiché questa convenzione di chiamata si applica solo a C++, non esiste alcuno schema della decorazione dei nomi in C.

Nei computer ARM e x64, **__thiscall** viene accettata e ignorata dal compilatore.

Per le funzioni di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline. Questo significa che per i metodi membri non statici della classe la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)
