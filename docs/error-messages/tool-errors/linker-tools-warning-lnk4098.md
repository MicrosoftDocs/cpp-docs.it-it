---
title: Avviso degli strumenti del linker LNK4098
ms.date: 11/04/2016
f1_keywords:
- LNK4098
helpviewer_keywords:
- LNK4098
ms.assetid: 1f1b1408-1316-4e34-80f5-6a02f2db0ac1
ms.openlocfilehash: 088124fcce7cafad3fab3280ae0b3ae0d893283e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50468718"
---
# <a name="linker-tools-warning-lnk4098"></a>Avviso degli strumenti del linker LNK4098

DEFAULTLIB 'library' JE v konfliktu utilizzo di altre librerie; usare /NODEFAULTLIB: libreria

Si sta tentando di collegarsi alle librerie incompatibili.

> [!NOTE]
>  Le librerie di runtime ora contengono direttive per impedire la combinazione di tipi diversi. Si riceverà questo avviso se si prova a usare diversi tipi o eseguire il debug e le versioni non di debug della libreria run-time nello stesso programma. Ad esempio, se è stato compilato un file per usare una libreria di run-time e un altro file per l'uso di un altro tipo (ad esempio, a thread singolo e multithreading) e ha provato a collegarli, si otterrà questo avviso. È necessario compilare tutti i file di origine per usare la stessa libreria di runtime. Vedere le [utilizzo della libreria Run-Time](../../build/reference/md-mt-ld-use-run-time-library.md) (**/MD**, **/MT**, **/LD**) le opzioni del compilatore per altre informazioni.

È possibile usare l'opzione del linker [/verbose: lib](../../build/reference/verbose-print-progress-messages.md) commutatore per determinare le librerie dal linker. Se si riceve LNK4098 e si desidera creare un file eseguibile che utilizza, ad esempio, il thread singolo, librerie di runtime non di debug, usare il **/verbose: lib** opzione per trovare le librerie dal linker. Il linker deve di stampa LIBC. lib e non LIBCMT. lib, Msvcrt. lib, LIBCD. lib, LIBCMTD. lib o MSVCRTD. lib come le librerie di eseguire la ricerca. È possibile indicare al linker di ignorare le librerie di runtime non corrette usando [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) per ogni raccolta a cui si desidera ignorare.

La tabella seguente illustra le librerie a cui devono essere ignorate in base alla quale libreria di runtime da usare.

|Usare questa libreria run-time|Ignora queste librerie|
|-----------------------------------|----------------------------|
|A thread singolo (LIBC. lib)|LIBCMT. lib, Msvcrt. lib, LIBCD. lib, LIBCMTD. lib, MSVCRTD. lib|
|Multithreading (LIBCMT. lib)|LIBC. lib, Msvcrt. lib, LIBCD. lib, LIBCMTD. lib, MSVCRTD. lib|
|Multithreading con DLL (Msvcrt. lib)|LIBC. lib, LIBCMT. lib, LIBCD. lib, LIBCMTD. lib, MSVCRTD. lib|
|Eseguire il debug a thread singolo (libcd. lib)|LIBC. lib, LIBCMT. lib, Msvcrt. lib, LIBCMTD. lib, MSVCRTD. lib|
|Eseguire il debug con multithreading (LIBCMTD. lib)|LIBC. lib, LIBCMT. lib, Msvcrt. lib, LIBCD. lib, MSVCRTD. lib|
|Eseguire il debug multithreading con DLL (MSVCRTD. lib)|LIBC. lib, LIBCMT. lib, Msvcrt. lib, LIBCD. lib, LIBCMTD. lib|

Ad esempio, se hai ricevuto questo messaggio di avviso e si desidera creare un file eseguibile che utilizza la versione non di debug, a thread singolo delle librerie di runtime, è possibile utilizzare le opzioni seguenti con il linker:

```
/NODEFAULTLIB:libcmt.lib /NODEFAULTLIB:msvcrt.lib /NODEFAULTLIB:libcd.lib /NODEFAULTLIB:libcmtd.lib /NODEFAULTLIB:msvcrtd.lib
```