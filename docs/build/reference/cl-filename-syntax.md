---
title: Sintassi nome file di CL
ms.date: 11/04/2016
f1_keywords:
- cl
helpviewer_keywords:
- syntax, compiler filename
- paths, CL compiler filename syntax
- cl.exe compiler, filename syntax
- extensions, specifying to compiler
- file names [C++], CL compiler
- file names [C++]
ms.assetid: 3ca72586-75be-4477-b323-a1be232e80d4
ms.openlocfilehash: b20f88e69c6e0d1774f1cd81b3ee833c4f0ff696
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272695"
---
# <a name="cl-filename-syntax"></a>Sintassi nome file di CL

CL accetta file con nomi che seguono le convenzioni di denominazione FAT, HPFS o NTFS. Tutti i nomi file possono includere un percorso completo o parziale. Un percorso completo include un nome di unità e uno o più nomi di directory. CL accetta nomi di file separati da barre rovesciate (\\) o barre (/). I nomi file che contengono spazi devono essere racchiusi tra virgolette doppie. Un percorso parziale omette il nome dell'unità, che CL considera essere l'unità corrente. Se non si specifica un percorso, il file verrà considerato come presente nella directory attuale.

L'estensione del nome file determina il modo in cui i file vengono elaborati. I file C e C++, che hanno l'estensione c, cxx o cpp, vengono compilati. Altri file, inclusi i file obj, di libreria (lib) e di definizione moduli (def) vengono passati al linker senza essere elaborati.

## <a name="see-also"></a>Vedere anche

[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
