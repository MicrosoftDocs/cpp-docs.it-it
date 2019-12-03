---
title: Avviso degli strumenti del linker LNK4098
description: Descrive il modo in cui le librerie incompatibili provocano l'avviso degli strumenti del linker LNK4098 e come usare/NODEFAULTLIB per risolverlo.
ms.date: 12/02/2019
f1_keywords:
- LNK4098
helpviewer_keywords:
- LNK4098
ms.assetid: 1f1b1408-1316-4e34-80f5-6a02f2db0ac1
ms.openlocfilehash: 9d0c7da0614651a98d5ed4f3bd3676c7d837ce67
ms.sourcegitcommit: d0504e2337bb671e78ec6dd1c7b05d89e7adf6a7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/02/2019
ms.locfileid: "74682935"
---
# <a name="linker-tools-warning-lnk4098"></a>Avviso degli strumenti del linker LNK4098

> DEFAULTLIB "*Library*" è in conflitto con l'uso di altre librerie; usare/NODEFAULTLIB:*Library*

Si sta tentando di eseguire il collegamento con librerie incompatibili.

> [!NOTE]
> Le librerie di runtime contengono ora direttive per impedire la combinazione di tipi diversi. Questo avviso viene visualizzato se si tenta di utilizzare tipi diversi o versioni di debug e non di debug della libreria di runtime nello stesso programma. Se, ad esempio, è stato compilato un file per usare un tipo di libreria di runtime e un altro file per usare un altro tipo (ad esempio, debug rispetto al dettaglio) e si è tentato di collegarlo, verrà visualizzato questo avviso. È necessario compilare tutti i file di origine per utilizzare la stessa libreria di Runtime. Per ulteriori informazioni, vedere le opzioni del compilatore [/MD,/MT,/LD (use Run-Time Library)](../../build/reference/md-mt-ld-use-run-time-library.md) .

È possibile usare l'opzione [/verbose: lib](../../build/reference/verbose-print-progress-messages.md) del linker per individuare le librerie a cui il linker esegue la ricerca. Ad esempio, quando il file eseguibile usa le librerie di runtime multithread non di debug, l'elenco segnalato deve includere LIBCMT. lib e non LIBCMTD. lib, MSVCRT. lib o MSVCRTD. lib. È possibile indicare al linker di ignorare le librerie di runtime non corrette usando [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) per ogni libreria che si desidera ignorare.

Nella tabella seguente vengono illustrate le librerie che devono essere ignorate a seconda della libreria di runtime che si desidera utilizzare. Nella riga di comando usare un'opzione **/NODEFAULTLIB** per ogni libreria da ignorare. Nell'IDE di Visual Studio separare le librerie da ignorare con i punti e virgola nella proprietà **Ignora librerie predefinite specifiche** .

| Per usare questa libreria di runtime | Ignora queste librerie |
|-----------------------------------|----------------------------|
| Multithreading (LIBCMT. lib) | Msvcrt. lib; libcmtd. lib; msvcrtd. lib |
| Multithreading con DLL (Msvcrt. lib) | LIBCMT. lib; libcmtd. lib; msvcrtd. lib |
| Debug multithreading (libcmtd. lib) | LIBCMT. lib; Msvcrt. lib; msvcrtd. lib |
| Eseguire il debug di multithreading tramite DLL (msvcrtd. lib) | LIBCMT. lib; Msvcrt. lib; libcmtd. lib |

Se ad esempio si è ricevuto questo avviso e si desidera creare un file eseguibile che utilizza la versione DLL non di debug delle librerie di runtime, è possibile utilizzare le opzioni seguenti con il linker:

```cmd
/NODEFAULTLIB:libcmt.lib /NODEFAULTLIB:libcmtd.lib /NODEFAULTLIB:msvcrtd.lib
```
