---
title: Pulizia delle eccezioni di CString | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- CString objects, exceptions
- exception handling, cleanup code
ms.assetid: 28b9ce70-be63-4a0d-92a8-44bbfbc95e83
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 496fdfe6a609bd4eceae225c2568c915d38aef07
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cstring-exception-cleanup"></a>Pulizia delle eccezioni di CString
Nelle versioni precedenti di MFC, è importante che viene eseguita la pulitura [CString](../atl-mfc-shared/reference/cstringt-class.md) oggetti dopo l'uso. Con MFC versione 3.0 e versioni successive, la pulizia esplicita non è più necessaria.  
  
 Sotto la gestione delle eccezioni C++ meccanismo utilizzato in MFC, non è necessario preoccuparsi di pulizia dopo un'eccezione. Per una descrizione di come C++ "Rimuove" lo stack dopo un'eccezione, vedere [try, catch e throw istruzioni](../cpp/try-throw-and-catch-statements-cpp.md). Anche se si utilizza MFC **PROVARE**/**CATCH** macro anziché le parole chiave C++ **provare** e **catch**, MFC Usa C++ meccanismo di eccezione, pertanto è ancora non è necessario pulire in modo esplicito.  
  
## <a name="see-also"></a>Vedere anche  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)   
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

