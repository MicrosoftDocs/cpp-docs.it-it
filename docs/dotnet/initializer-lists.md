---
title: Gli elenchi di inizializzatori | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: initializer lists
ms.assetid: b3e53442-9809-4105-9226-ae845bd20cae
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 99d62f1aec8cf06fff5de98f4681ddc67c3a9e71
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="initializer-lists"></a>Elenchi di inizializzatori
Gli elenchi di inizializzatori di costruttori sono ora chiamati prima del costruttore di classe di base.  
  
## <a name="remarks"></a>Note  
 Prima di Visual C++ 2005, il costruttore della classe base è stato chiamato prima dell'elenco di inizializzatori durante la compilazione con le estensioni gestite per C++. A questo punto, durante la compilazione con **/clr**, l'elenco di inizializzatori viene chiamato per primo.  
  
## <a name="see-also"></a>Vedere anche  
 [Modifiche generali del linguaggio (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)