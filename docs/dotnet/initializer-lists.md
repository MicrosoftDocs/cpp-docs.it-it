---
title: Gli elenchi di inizializzatori | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- initializer lists
ms.assetid: b3e53442-9809-4105-9226-ae845bd20cae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 6634b749480e5108548de0c8b53f8b09cc5a42c2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33127952"
---
# <a name="initializer-lists"></a>Elenchi di inizializzatori
Gli elenchi di inizializzatori di costruttori sono ora chiamati prima del costruttore di classe di base.  
  
## <a name="remarks"></a>Note  
 Prima di Visual C++ 2005, il costruttore della classe base è stato chiamato prima dell'elenco di inizializzatori durante la compilazione con le estensioni gestite per C++. A questo punto, durante la compilazione con **/clr**, l'elenco di inizializzatori viene chiamato per primo.  
  
## <a name="see-also"></a>Vedere anche  
 [Modifiche generali del linguaggio (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)