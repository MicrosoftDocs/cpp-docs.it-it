---
title: Opzioni -Q (operazioni di basso livello) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /q
dev_langs: C++
helpviewer_keywords:
- Q compiler option [C++]
- -Q compiler option [C++]
- /Q compiler option [C++]
ms.assetid: 9fa738b9-630a-4bde-bc87-bdfa30552be4
caps.latest.revision: "24"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d970c2de5e34840ab2ed77f229c329db3c6f72fd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="q-options-low-level-operations"></a>Opzioni /Q (Operazioni di basso livello)
È possibile utilizzare il **/Q** opzioni del compilatore per eseguire le operazioni di basso livello del compilatore seguenti:  
  
-   [/Qfast_transcendentals (forzare funzioni trascendenti veloci)](../../build/reference/qfast-transcendentals-force-fast-transcendentals.md): genera funzioni trascendenti veloci.  
  
-   [/QIfist (Elimina ftol)](../../build/reference/qifist-suppress-ftol.md): Elimina `_ftol` quando una conversione da un tipo a virgola mobile a un tipo integer è obbligatorio (solo x86).  
  
-   [/Qimprecise_fwaits (rimozione di fwait nei blocchi Try)](../../build/reference/qimprecise-fwaits-remove-fwaits-inside-try-blocks.md): rimuove `fwait` comandi all'interno di `try` blocchi.  
  
-   [/Qpar (parallelizzazione automatica)](../../build/reference/qpar-auto-parallelizer.md): abilita la parallelizzazione automatica dei cicli contrassegnati con il [loop () #pragma](../../preprocessor/loop.md) direttiva.  
  
-   [/Qvec-report (livello di segnalazione parallelizzazione automatica)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md): Abilita creazione rapporti di livelli per la parallelizzazione automatica.  
  
-   [/Qsafe_fp_loads](../../build/reference/qsafe-fp-loads.md): eliminano le ottimizzazioni per registro a virgola mobile viene caricato e per gli spostamenti tra memoria e MMX Registra.  
  
-   [/Qvec-report (livello di segnalazione vettorizzazione automatica)](../../build/reference/qvec-report-auto-vectorizer-reporting-level.md): Abilita creazione rapporti di livelli per la vettorializzazione automatica.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)