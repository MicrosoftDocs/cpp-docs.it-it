---
title: Opzioni del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- cl.exe compiler
- IPF Visual C++ compiler
- Itanium Visual C++ compiler
- compiler options, C++
- x64 Visual C++ compiler
ms.assetid: ed3376c8-bef4-4c9a-80e9-3b5da232644c
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c433abea04ff81c69fe1b73569ea7e043e6e81ac
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-options"></a>Opzioni del compilatore
CL.exe è uno strumento che controlla il linker e i compilatori Microsoft C e C++. CL.exe può essere eseguito solo in sistemi operativi che supportano Microsoft Visual Studio.  
  
> [!NOTE]
>  È possibile avviare questo strumento solo dal prompt dei comandi di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)]. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.  
  
 I compilatori producono file dell'oggetto (obj) comuni oggetto formato COFF (File). Il linker genera file eseguibili (.exe) o librerie a collegamento dinamico (DLL).  
  
 Si noti che tutte le opzioni del compilatore tra maiuscole e minuscole.  
  
 Per la compilazione senza collegamento, utilizzare [/c](../../build/reference/c-compile-without-linking.md).  
  
## <a name="finding-an-option"></a>Ricerca di un'opzione  
 Per trovare una particolare opzione del compilatore, vedere uno degli elenchi seguenti:  
  
-   [Opzioni del compilatore elencate in ordine alfabetico](../../build/reference/compiler-options-listed-alphabetically.md)  
  
-   [Opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md)  
  
## <a name="specifying-options"></a>Impostazione delle opzioni  
 Questo argomento per ciascuna opzione del compilatore illustra come è possibile impostare nell'ambiente di sviluppo. Per informazioni su come specificare le opzioni all'esterno dell'ambiente di sviluppo, vedere:  
  
-   [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)  
  
-   [File di comando di CL](../../build/reference/cl-command-files.md)  
  
-   [Variabili di ambiente CL](../../build/reference/cl-environment-variables.md)  
  
## <a name="related-build-tools"></a>Strumenti di compilazione correlati  
 Utilizzare [NMAKE](../../build/nmake-reference.md) per compilare il file di output.  
  
 Utilizzare [BSCMAKE](../../build/reference/bscmake-reference.md) per supportare la ricerca nelle classi.  
  
 [Opzioni del linker](../../build/reference/linker-options.md) influenzare la modalità di compilazione del programma.  
  
## <a name="see-also"></a>Vedere anche  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)  (Informazioni di riferimento per la compilazione in C/C++)  
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Compilazione veloce](../../build/reference/fast-compilation.md)   
 [CL richiama il linker](../../build/reference/cl-invokes-the-linker.md)