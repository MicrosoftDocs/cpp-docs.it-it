---
title: Sintassi della riga di comando del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- syntax, CL compiler command line
- cl.exe compiler, command-line syntax
ms.assetid: acba2c1c-0803-4a3a-af25-63e849b930a2
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7fb89aca1990d44d7ef62ea76788b38e8ffa1d6d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-command-line-syntax"></a>Sintassi della riga di comando del compilatore
La riga di comando di CL Usa la sintassi seguente:  
  
```  
CL [option...] file... [option | file]... [lib...] [@command-file] [/link link-opt...]  
```  
  
 Nella tabella seguente viene descritto l'input per il comando di CL.  
  
|Voce|Significato|  
|-----------|-------------|  
|*opzione*|Uno o più [opzioni CL](../../build/reference/compiler-options.md). Si noti che tutte le opzioni si applicano a tutti i file di origine specificato. Opzioni vengono specificate da una barra (/) o un trattino (-). Se un'opzione accetta un argomento, descrizione indica dell'opzione se è consentito uno spazio tra l'opzione e gli argomenti. I nomi di opzione (tranne l'opzione /HELP) sono tra maiuscole e minuscole. Vedere [ordine delle opzioni CL](../../build/reference/order-of-cl-options.md) per ulteriori informazioni.|  
|`file`|Il nome di uno o più file di origine, i file obj o librerie. CL compila i file di origine e i nomi dei file con estensione obj e librerie vengono passati al linker. Vedere [sintassi nome file CL](../../build/reference/cl-filename-syntax.md) per ulteriori informazioni.|  
|*LIB*|Uno o più nomi di libreria. CL passa questi nomi al linker.|  
|*file di comando*|Un file che contiene più opzioni e nomi di file. Vedere [file di comando di CL](../../build/reference/cl-command-files.md) per ulteriori informazioni.|  
|*collegamento-opt*|Uno o più [opzioni del linker](../../build/reference/linker-options.md). CL passa queste opzioni al linker.|  
  
 È possibile specificare qualsiasi numero di opzioni, i nomi di file e i nomi delle librerie, purché il numero di caratteri nella riga di comando non superi il limite dipende dal sistema operativo di 1024.  
  
 Per informazioni sul valore restituito di cl.exe, vedere [valore restituito di cl.exe](../../build/reference/return-value-of-cl-exe.md) .  
  
> [!NOTE]
>  Il limite di input della riga di comando di 1024 caratteri non deve necessariamente rimanere la stessa nelle versioni future di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)