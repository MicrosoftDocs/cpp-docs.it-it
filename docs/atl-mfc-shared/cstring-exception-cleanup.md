---
title: Pulizia delle eccezioni di CString
ms.date: 11/04/2016
helpviewer_keywords:
- CString objects, exceptions
- exception handling, cleanup code
ms.assetid: 28b9ce70-be63-4a0d-92a8-44bbfbc95e83
ms.openlocfilehash: d131ce8ebe5158d7f3a567580064068742b63707
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62236628"
---
# <a name="cstring-exception-cleanup"></a>Pulizia delle eccezioni di CString

Nelle versioni precedenti di MFC, era importante che viene eseguita la pulitura [CString](../atl-mfc-shared/reference/cstringt-class.md) oggetti dopo l'uso. Con MFC versione 3.0 e versioni successive, la pulizia esplicita non è più necessaria.

Sotto il meccanismo utilizzate da MFC a questo punto di gestione delle eccezioni C++, non è necessario preoccuparsi di pulizia dopo un'eccezione. Per una descrizione della modalità C++ "Rimuove" lo stack dopo che viene generata un'eccezione, vedere [try, catch e throw istruzioni](../cpp/try-throw-and-catch-statements-cpp.md). Anche se si Usa MFC **PROVARE**/**CATCH** le macro anziché le parole chiave C++ **provare** e **catch**, MFC Usa C++ meccanismo di eccezioni di sotto, in modo che è ancora non è necessario pulire esplicitamente.

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)
