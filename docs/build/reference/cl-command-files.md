---
title: File di comando di CL | Microsoft Docs
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
ms.openlocfilehash: 0a1e2b25330bd326ac32dbe1c1b8abcc37c89d09
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43894759"
---
# <a name="cl-command-files"></a>File di comando di CL

Un file di comando è un file di testo che contiene le opzioni e nomi di file in caso contrario, si digiterà il [riga di comando](../../build/reference/compiler-command-line-syntax.md) oppure specificare tramite il [variabile di ambiente CL](../../build/reference/cl-environment-variables.md). CL accetta un file di comando del compilatore come argomento nella variabile di ambiente CL o sulla riga di comando. A differenza della riga di comando o della variabile di ambiente CL, un file di comando consente di utilizzare più righe di opzioni e nomi file.

Opzioni e nomi file in un file di comando vengono elaborati in base alla posizione di un nome di file di comando all'interno della variabile di ambiente CL o sulla riga di comando. Tuttavia, se l'opzione /Link. viene visualizzato nel file di comando, tutte le opzioni nel resto della riga vengono passate al linker. Opzioni presente nelle righe successive nel file di comando e opzioni della riga di comando dopo la chiamata di file di comando sono comunque accettate come opzioni del compilatore. Per altre informazioni sul modo in cui l'ordine delle opzioni influisce sulla loro interpretazione, vedere [ordine delle opzioni CL](../../build/reference/order-of-cl-options.md).

Un file di comando non deve contenere il comando CL. Ogni opzione deve iniziare e terminare sulla stessa riga; non è possibile usare la barra rovesciata (**\\**) per combinare un'opzione tra due righe.

Viene specificato un file di comando da un simbolo di chiocciola (**\@**) seguito da un nome di file; il nome del file può specificare un percorso assoluto o relativo.

Ad esempio, se il comando seguente in un file denominato RESP:

```  
/Og /link LIBC.LIB
```  

e si specifica il comando CL seguente:

```  
CL /Ob2 @RESP MYAPP.C
```  

come indicato di seguito è riportato il comando di CL:

```  
CL /Ob2 /Og MYAPP.C /link LIBC.LIB
```  

Si noti che la riga di comando e i comandi del file di comando vengono combinati in modo efficace.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
[opzioni del compilatore](../../build/reference/compiler-options.md)