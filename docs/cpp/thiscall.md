---
title: thiscall | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- __thiscall
- __thiscall_cpp
dev_langs:
- C++
helpviewer_keywords:
- __thiscall keyword [C++]
ms.assetid: a6a22dd2-0101-4885-b33b-22f6057965df
caps.latest.revision: 14
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 41dd6d823d9889f5ce0216b27ad01a8d29bc57f6
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="thiscall"></a>__thiscall
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 La convenzione di chiamata `__thiscall` viene utilizzata nelle funzioni ed è la convenzione di chiamata predefinita utilizzata dalle funzioni di C++ che non utilizzano argomenti variabili. In `__thiscall`, la chiamata pulisce lo stack, operazione impossibile per funzioni `vararg`. Gli argomenti vengono inseriti nello stack da destra a sinistra, con il puntatore `this` passato tramite il registro ECX, e non nello stack, sull'architettura x86.  
  
 Un motivo per utilizzare `__thiscall` consiste nel fatto che nelle classi le funzioni utilizzano `__clrcall` per impostazione predefinita. In tal caso, è possibile utilizzare `__thiscall` per rendere specifiche funzioni chiamabili da codice nativo.  
  
 Durante la compilazione con [/clr: pure](../build/reference/clr-common-language-runtime-compilation.md), tutte le funzioni e i puntatori a funzione sono `__clrcall` se non specificato diversamente. Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 Nelle versioni precedenti di Visual C++ 2005, la convenzione della chiamata thiscall non poteva essere specificata in modo esplicito in un programma perché `thiscall` non era una parola chiave.  
  
 Le funzioni `vararg` utilizzano la convenzione di chiamata `__cdecl`. Tutti gli argomenti della funzione vengono inseriti nello stack, con il puntatore `this` posizionato in fondo allo stack  
  
 Poiché questa convenzione di chiamata si applica solo a C++, non esiste alcuno schema della decorazione dei nomi in C.  
  
 Su ARM e [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] macchine, `__thiscall` viene accettata e ignorata dal compilatore.  
  
 Per le funzioni di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline. Questo significa che per i metodi membri non statici della classe la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)
