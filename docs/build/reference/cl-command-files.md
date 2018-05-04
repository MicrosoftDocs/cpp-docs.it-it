---
title: File di comando di CL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- cl
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, command files
- command files
- command files, CL compiler
ms.assetid: ec3cea06-2af0-4fe9-a94c-119c9d31b3a9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 367ea6dc22777b473cad44f35b1f5e4c34528471
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cl-command-files"></a>File di comando di CL
Un file di comando è un file di testo che contiene le opzioni e nomi di file in caso contrario si digiterà il [riga di comando](../../build/reference/compiler-command-line-syntax.md) o specificati utilizzando il [variabile di ambiente CL](../../build/reference/cl-environment-variables.md). CL accetta un file di comando del compilatore come argomento nella variabile di ambiente CL o sulla riga di comando. A differenza della riga di comando o della variabile di ambiente CL, un file di comando consente di utilizzare più righe di opzioni e nomi file.  
  
 Opzioni e nomi file in un file di comando vengono elaborati in base alla posizione del nome di un file di comando nella variabile di ambiente CL o sulla riga di comando. Tuttavia, se l'opzione /link appare nel file di comando, tutte le opzioni nel resto della riga vengono passate al linker. Opzioni nelle righe successive nel file di comando e opzioni della riga di comando dopo la chiamata di file di comando sono comunque accettate come opzioni del compilatore. Per ulteriori informazioni su come l'ordine delle opzioni influisce sulla loro interpretazione, vedere [ordine delle opzioni CL](../../build/reference/order-of-cl-options.md).  
  
 Un file di comando non deve contenere il comando di CL. Ogni opzione deve iniziare e finire nella stessa riga. non è possibile utilizzare la barra rovesciata (\\) per combinare un'opzione tra due linee.  
  
 Viene specificato un file di comando da un simbolo di chiocciola (@) seguita dal nome di file; il nome del file è possibile specificare un percorso assoluto o relativo.  
  
 Ad esempio, se il comando seguente in un file denominato risp:  
  
```  
/Og /link LIBC.LIB  
```  
  
 e si specifica il seguente comando di CL:  
  
```  
CL /Ob2 @RESP MYAPP.C  
```  
  
 il comando di CL è come segue:  
  
```  
CL /Ob2 /Og MYAPP.C /link LIBC.LIB  
```  
  
 Si noti che la riga di comando e i comandi del file di comando vengono combinati in modo efficace.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)