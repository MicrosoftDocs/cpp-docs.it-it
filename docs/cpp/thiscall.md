---
title: thiscall | Microsoft Docs
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
ms.openlocfilehash: f878633e29fe2ea7bcb065f9851a907d81f6d20f
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39461547"
---
# <a name="thiscall"></a>__thiscall

**Sezione specifica Microsoft**

Il **thiscall** convenzione di chiamata viene usato con funzioni membro ed è la convenzione di chiamata predefinita utilizzata dalle funzioni membro C++ che non utilizzano argomenti variabili. Sotto **thiscall**, la chiamata pulisce lo stack, che è Impossibile per `vararg` funzioni. Gli argomenti vengono inseriti nello stack da destra a sinistra, con la **ciò** puntatore passato tramite il registro ECX e non nello stack, in x86 architettura.

Uno dei motivi per usare **thiscall** è disponibile nelle classi il cui membro funzioni utilizzano `__clrcall` per impostazione predefinita. In tal caso, è possibile usare **thiscall** per rendere specifiche funzioni chiamabili da codice nativo.

Durante la compilazione con [/clr: pure](../build/reference/clr-common-language-runtime-compilation.md), tutte le funzioni e i puntatori a funzione sono `__clrcall` se non diversamente specificato. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

Nelle versioni precedenti di Visual C++ 2005, il **thiscall** convenzione di chiamata potrebbe non essere specificato in modo esplicito in un programma, perché **thiscall** non era una parola chiave.

`vararg` uso di funzioni membro di **cdecl** convenzione di chiamata. Tutti gli argomenti della funzione vengono inseriti nello stack, con la **ciò** puntatore è posizionato sullo stack di ultima

Poiché questa convenzione di chiamata si applica solo a C++, non esiste alcuno schema della decorazione dei nomi in C.

In ARM e x64 macchine **thiscall** viene accettato e ignorato dal compilatore.

Per le funzioni di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline. Questo significa che per i metodi membri non statici della classe la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)