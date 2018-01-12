---
title: Variabili di ambiente CL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: cl
dev_langs: C++
helpviewer_keywords:
- INCLUDE environment variable
- cl.exe compiler, environment variables
- LIBPATH environment variable
- environment variables, CL compiler
ms.assetid: 2606585b-a681-42ee-986e-1c9a2da32108
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ba01a980aa24a3ff695479edd08e88d9ea538dcc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cl-environment-variables"></a>Variabili di ambiente CL

Lo strumento CL usa le seguenti variabili di ambiente:

- CL e \_CL\_, se definito. Lo strumento CL antepone le opzioni e gli argomenti definiti nella variabile di ambiente CL agli argomenti della riga di comando e accoda le opzioni e gli argomenti definiti \_CL\_, prima dell'elaborazione.

- INCLUDE, che deve puntare alla sottodirectory \include dell'installazione di Visual C++.

- LIBPATH, che specifica le directory per cercare i file di metadati a cui fa riferimento con [#using](../../preprocessor/hash-using-directive-cpp.md). Per altre informazioni su LIBPATH, vedere `#using`.

È possibile impostare il CL o \_CL\_ variabile di ambiente utilizzando la sintassi seguente:

> IMPOSTARE CL = [[*opzione*]... [*file*]...] [/ link *collegamento-opt* ...]  
> IMPOSTARE \_CL\_= [[*opzione*]... [*file*]...] [/ link *collegamento-opt* ...]

Per informazioni dettagliate sugli argomenti per il CL e \_CL\_ variabili di ambiente, vedere [sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md).

È possibile usare queste variabili di ambiente per definire i file e le opzioni usate più spesso e usare la riga di comando per definire specifici file e opzioni per scopi specifici. CL e \_CL\_ variabili di ambiente sono limitate a 1024 caratteri (il limite di input della riga di comando).

Non è possibile usare l'opzione /D per definire un simbolo che usa un segno di uguale (=). È possibile sostituire il cancelletto (#) con un segno di uguale. In questo modo, è possibile utilizzare il CL o \_CL\_ variabili di ambiente per definire le costanti del preprocessore con valori espliciti, ad esempio, `/DDEBUG#1` per definire `DEBUG=1`.

Per informazioni correlate, vedere [impostare variabili di ambiente](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md).

## <a name="examples"></a>Esempi

Di seguito è riportato un esempio di variabile di ambiente CL:

> IMPOSTARE CL/Zp2 = /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE. OBJ

Quando è impostata la variabile di ambiente, se si immette `CL INPUT.C` nella riga di comando, questo è il comando effettivo:

> CL /Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE. INPUT OBJ. C

Nell'esempio seguente un normale comando CL compila i file di origine FILE1.c e FILE2.c e quindi collega i file oggetto FILE1.obj, FILE2.obj e FILE3.obj:

> SET CL = FILE1. FILE2 C. C  
> IMPOSTARE \_CL\_= FILE3. OBJ  
> CL  

Ha lo stesso effetto della riga di comando seguente:

> CL FILE1. FILE2 C. FILE3 C. OBJ

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
[Opzioni del compilatore](../../build/reference/compiler-options.md)
