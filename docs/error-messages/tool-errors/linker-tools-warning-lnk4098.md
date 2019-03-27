---
title: Avviso degli strumenti del linker LNK4098
ms.date: 03/26/2019
f1_keywords:
- LNK4098
helpviewer_keywords:
- LNK4098
ms.assetid: 1f1b1408-1316-4e34-80f5-6a02f2db0ac1
ms.openlocfilehash: 66cf1a1bc75405ffc9bae8158bfc8682776a8228
ms.sourcegitcommit: 06fc71a46e3c4f6202a1c0bc604aa40611f50d36
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/27/2019
ms.locfileid: "58508728"
---
# <a name="linker-tools-warning-lnk4098"></a>Avviso degli strumenti del linker LNK4098

> DEFAULTLIB '*library*' è in conflitto con l'utilizzo di altre librerie; usare /NODEFAULTLIB:*libreria*

Si sta cercando di collegarsi alle librerie incompatibili.

> [!NOTE]
> Le librerie di runtime ora contengono direttive per impedire la combinazione di tipi diversi. Si riceverà questo avviso se si prova a usare diversi tipi o eseguire il debug e le versioni non di debug della libreria run-time nello stesso programma. Ad esempio, se è stato compilato un file da utilizzare uno dei tipi della libreria run-time e un altro file da utilizzare un altro tipo (ad esempio tra debug e delle vendite al dettaglio) e tentato il collegamento, viene visualizzato questo avviso. È necessario compilare tutti i file di origine per usare la stessa libreria di runtime. Per altre informazioni, vedere la [/MD, /MT, /LD (utilizzo della libreria Run-Time)](../../build/reference/md-mt-ld-use-run-time-library.md) opzioni del compilatore.

È possibile usare l'opzione del linker [/verbose: lib](../../build/reference/verbose-print-progress-messages.md) passa a Trova le librerie cercato dal linker. Ad esempio, quando il file eseguibile Usa le librerie di runtime a thread multipli, non di debug, l'elenco riportato dovrebbe includere LIBCMT. lib e non LIBCMTD. lib, Msvcrt. lib o MSVCRTD. lib. È possibile indicare al linker di ignorare le librerie di runtime non corrette usando [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) per ogni raccolta a cui si desidera ignorare.

La tabella seguente illustra le librerie a cui devono essere ignorate in base alla quale libreria di runtime da usare. Nella riga di comando, usare uno **/NODEFAULTLIB** opzione per tutte le librerie da ignorare. Nell'IDE di Visual Studio, separare le librerie da ignorare da punti e virgola nel **Ignora librerie predefinite specifiche** proprietà.

| Usare questa libreria run-time | Ignora queste librerie |
|-----------------------------------|----------------------------|
| Multithreaded (libcmt.lib) | msvcrt.lib; libcmtd.lib; msvcrtd.lib |
| Multithreaded using DLL (msvcrt.lib) | libcmt.lib; libcmtd.lib; msvcrtd.lib |
| Debug Multithreaded (libcmtd.lib) | libcmt.lib; msvcrt.lib; msvcrtd.lib |
| Debug Multithreaded using DLL (msvcrtd.lib) | libcmt.lib; msvcrt.lib; libcmtd.lib |

Ad esempio, se hai ricevuto questo messaggio di avviso e si desidera creare un file eseguibile che utilizza la versione DLL non di debug, delle librerie di runtime, è possibile usare le opzioni seguenti con il linker:

```cmd
/NODEFAULTLIB:libcmt.lib NODEFAULTLIB:libcmtd.lib /NODEFAULTLIB:msvcrtd.lib
```