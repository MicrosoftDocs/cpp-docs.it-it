---
title: UNIX
description: Linee guida per il trasferimento del programma a UNIX.
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- unix
helpviewer_keywords:
- UNIX
- POSIX compatibility
- POSIX file names
- UNIX, compatibility
ms.assetid: 40792414-7a5b-415d-bfa8-2bfb1ebb3731
ms.openlocfilehash: 3975db2407943b329fa7eded0d72d63524428210
ms.sourcegitcommit: 30792632548d1c71894f9fecbe2f554294b86020
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/06/2020
ms.locfileid: "91765222"
---
# <a name="unix"></a>UNIX

Se si intende trasferire i programmi su UNIX, attenersi alle seguenti linee guida:

- Non rimuovere i file di intestazione dalla sottodirectory SYS. È possibile inserire i file di intestazione SYS altrove solo se non si intende trasferire i programmi in UNIX.

- Usare il delimitatore di percorso compatibile con UNIX nelle routine che accettano stringhe che rappresentano i percorsi e i nomi file come argomenti. UNIX supporta solo la barra (/) a questo scopo, ma i sistemi operativi Win32 supportano sia la barra rovesciata ( \\ ) che la barra (/). Questa documentazione usa le barre compatibili con UNIX come delimitatori di percorso nelle `#include` istruzioni, ad esempio. Tuttavia, la shell dei comandi del sistema operativo Windows, CMD.EXE, non supporta la barra nei comandi immessi al prompt dei comandi.

- Usare i percorsi e i nomi file che funzionano correttamente in UNIX, che fa distinzione tra maiuscole e minuscole. Il file system FAT (file allocation table) nei sistemi operativi Win32 non fa distinzione tra maiuscole e minuscole. Il file system NTFS conserva la distinzione tra maiuscole e minuscole per gli elenchi di directory, ma ignora la distinzione tra maiuscole e minuscole nelle ricerche di file

> [!NOTE]
> In questa versione di Visual C++, le informazioni di compatibilità con UNIX sono state rimosse dalle descrizioni delle funzioni.

## <a name="see-also"></a>Vedere anche

[Compatibilità](../c-runtime-library/compatibility.md)
