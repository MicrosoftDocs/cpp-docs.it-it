---
description: 'Altre informazioni su: pulizia delle eccezioni di CString'
title: Pulizia delle eccezioni di CString
ms.date: 11/04/2016
helpviewer_keywords:
- CString objects, exceptions
- exception handling, cleanup code
ms.assetid: 28b9ce70-be63-4a0d-92a8-44bbfbc95e83
ms.openlocfilehash: 9c77c9bf5d3f123315c126ce2361be63230c173b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167149"
---
# <a name="cstring-exception-cleanup"></a>Pulizia delle eccezioni di CString

Nelle versioni precedenti di MFC era importante pulire gli oggetti [CString](../atl-mfc-shared/reference/cstringt-class.md) dopo l'utilizzo. Con MFC versione 3,0 e successive, la pulizia esplicita non è più necessaria.

Nel meccanismo di gestione delle eccezioni C++ che ora Usa MFC, non è necessario preoccuparsi della pulizia dopo un'eccezione. Per una descrizione della modalità di rimozione dello stack in C++ dopo l'intercettazione di un'eccezione, vedere [le istruzioni try, catch e throw](../cpp/try-throw-and-catch-statements-cpp.md). Anche se si usano le macro **try** /  di MFC anziché le parole chiave c++ **`try`** e **`catch`** , MFC usa il meccanismo di eccezione c++ sottostante, quindi non è ancora necessario eseguire la pulizia in modo esplicito.

## <a name="see-also"></a>Vedi anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)
