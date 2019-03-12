---
title: UNIX
ms.date: 11/04/2016
f1_keywords:
- unix
helpviewer_keywords:
- UNIX
- POSIX compatibility
- POSIX file names
- UNIX, compatibility
ms.assetid: 40792414-7a5b-415d-bfa8-2bfb1ebb3731
ms.openlocfilehash: edabb639d8f45680415473ad7b017d426b931ab5
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57745245"
---
# <a name="unix"></a>UNIX

Se si intende trasferire i programmi su UNIX, attenersi alle seguenti linee guida:

- Non rimuovere i file di intestazione dalla sottodirectory SYS. È possibile inserire i file di intestazione SYS altrove solo se non si intende trasferire i programmi su UNIX.

- Usare il delimitatore di percorso compatibile con UNIX nelle routine che accettano stringhe che rappresentano i percorsi e i nomi file come argomenti. Per questo scopo UNIX supporta solo la barra (/), mentre i sistemi operativi Win32 supportano sia la barra rovesciata (\\) che la barra (/). Questa documentazione utilizza quindi le barre compatibili con UNIX, ad esempio, come delimitatori di percorso nelle istruzioni `#include`. (Tuttavia, la shell dei comandi del sistema operativo Windows, CMD.EXE, non supporta la barra nei comandi immessi nel prompt dei comandi).

- Utilizzare i percorsi e i nomi file che funzionano correttamente in UNIX, in cui viene fatta la distinzione tra maiuscole e minuscole. Il file system della tabella di allocazione file (FAT) nei sistemi operativi Win32 non fa la distinzione tra maiuscole e minuscole; il file system NTFS preserva le maiuscole e minuscole per gli elenchi delle directory, ma le ignora nelle ricerche dei file e in altre operazioni di sistema.

    > [!NOTE]
    >  In questa versione di Visual C++, le informazioni di compatibilità con UNIX sono state rimosse dalle descrizioni delle funzioni.

## <a name="see-also"></a>Vedere anche

[Compatibilità](../c-runtime-library/compatibility.md)
