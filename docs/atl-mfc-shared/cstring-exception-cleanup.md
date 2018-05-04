---
title: Pulizia delle eccezioni di CString | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- CString objects, exceptions
- exception handling, cleanup code
ms.assetid: 28b9ce70-be63-4a0d-92a8-44bbfbc95e83
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d18d10d517a6c5b0d075a7fb0ed113448625b698
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cstring-exception-cleanup"></a>Pulizia delle eccezioni di CString
Nelle versioni precedenti di MFC, è importante che viene eseguita la pulitura [CString](../atl-mfc-shared/reference/cstringt-class.md) oggetti dopo l'uso. Con MFC versione 3.0 e versioni successive, la pulizia esplicita non è più necessaria.  
  
 Sotto la gestione delle eccezioni C++ meccanismo utilizzato in MFC, non è necessario preoccuparsi di pulizia dopo un'eccezione. Per una descrizione di come C++ "Rimuove" lo stack dopo un'eccezione, vedere [try, catch e throw istruzioni](../cpp/try-throw-and-catch-statements-cpp.md). Anche se si utilizza MFC **PROVARE**/**CATCH** macro anziché le parole chiave C++ **provare** e **catch**, MFC Usa C++ meccanismo di eccezione, pertanto è ancora non è necessario pulire in modo esplicito.  
  
## <a name="see-also"></a>Vedere anche  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)   
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

