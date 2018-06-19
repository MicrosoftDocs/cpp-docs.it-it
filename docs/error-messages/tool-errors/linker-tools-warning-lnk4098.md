---
title: Strumenti del linker LNK4098 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4098
dev_langs:
- C++
helpviewer_keywords:
- LNK4098
ms.assetid: 1f1b1408-1316-4e34-80f5-6a02f2db0ac1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8aadf25d968d6d457f891cab49a43591455b9d12
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33301707"
---
# <a name="linker-tools-warning-lnk4098"></a>Avviso degli strumenti del linker LNK4098
è in conflitto 'library' DEFAULTLIB con utilizzo di altre librerie; utilizzare /NODEFAULTLIB: libreria  
  
 Si sta tentando di collegarsi alle librerie incompatibile.  
  
> [!NOTE]
>  Le librerie di runtime contengono ora direttive per impedire che combinano diversi tipi. Viene visualizzato questo avviso se si tenta di utilizzare tipi diversi di debug e le versioni non di debug della libreria di runtime nello stesso programma. Ad esempio, se è stato compilato un file per l'utilizzo di una libreria di run-time e un altro file per l'utilizzo di un altro tipo (ad esempio, a thread singolo e multithreading) e ha tentato di collegamento, si otterrà questo avviso. È necessario compilare tutti i file di origine per utilizzare la stessa libreria di runtime. Vedere il [utilizzo della libreria Run-Time](../../build/reference/md-mt-ld-use-run-time-library.md) (**/MD**, **/MT**, **/LD**) le opzioni del compilatore per altre informazioni.  
  
 È possibile utilizzare l'opzione del linker [/verbose: lib](../../build/reference/verbose-print-progress-messages.md) commutatore per determinare le librerie dal linker. Se si riceve LNK4098 e si desidera creare un file eseguibile che utilizza, ad esempio, il thread singolo, librerie di runtime non di debug, utilizzare il **/verbose: lib** opzione per individuare le librerie dal linker. Il linker deve stampare LIBC.lib e non LIBCMT.lib, MSVCRT.lib, LIBCD.lib, LIBCMTD.lib o MSVCRTD.lib come le librerie. È possibile indicano al linker di ignorare le librerie di runtime errate utilizzando [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) per ogni raccolta che si desidera ignorare.  
  
 La tabella seguente illustra le librerie a cui devono essere ignorate a seconda della libreria di runtime in cui si desidera utilizzare.  
  
|Utilizzare questa libreria di run-time|Ignorare queste librerie|  
|-----------------------------------|----------------------------|  
|A thread singolo (libc.lib)|LIBCMT.lib, msvcrt.lib, libcd.lib, libcmtd.lib, msvcrtd.lib|  
|Multithreading (libcmt.lib)|LIBC.lib, msvcrt.lib, libcd.lib, libcmtd.lib, msvcrtd.lib|  
|Multithreading con DLL (msvcrt.lib)|LIBC.lib, libcmt.lib, libcd.lib, libcmtd.lib, msvcrtd.lib|  
|Eseguire il debug a thread singolo (libcd.lib)|LIBC.lib, libcmt.lib, msvcrt.lib, libcmtd.lib, msvcrtd.lib|  
|Eseguire il debug con multithreading (libcmtd.lib)|LIBC.lib, libcmt.lib, msvcrt.lib, libcd.lib, msvcrtd.lib|  
|Eseguire il debug multithreading con DLL (msvcrtd.lib)|LIBC.lib, libcmt.lib, msvcrt.lib, libcd.lib, libcmtd.lib|  
  
 Ad esempio, se si desidera creare un file eseguibile che utilizza la versione non di debug, a thread singolo delle librerie di runtime viene generato questo avviso, è possibile utilizzare le opzioni seguenti con il linker:  
  
```  
/NODEFAULTLIB:libcmt.lib /NODEFAULTLIB:msvcrt.lib /NODEFAULTLIB:libcd.lib /NODEFAULTLIB:libcmtd.lib /NODEFAULTLIB:msvcrtd.lib  
```