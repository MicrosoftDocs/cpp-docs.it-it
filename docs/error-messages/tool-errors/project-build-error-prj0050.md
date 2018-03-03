---
title: Progetto PRJ0050 errore di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- PRJ0050
dev_langs:
- C++
helpviewer_keywords:
- PRJ0050
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e9d9b123da2e32db0f695c31bc9643a481d352b8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="project-build-error-prj0050"></a>Errore di compilazione progetto PRJ0050
Impossibile registrare l'output. Assicurarsi di che disporre delle autorizzazioni appropriate per modificare il Registro di sistema.  
  
 Il sistema di compilazione di Visual C++ non è in grado di registrare l'output di compilazione (dll o .exe). È necessario essere connessi come amministratore per modificare il Registro di sistema.  
  
 Se si compila una DLL, è possibile provare a registrare la DLL manualmente utilizzando regsvr32.exe, questo deve visualizzare le informazioni sulla causa dell'errore di compilazione.  
  
 Se non si compila una DLL, esaminare il log di compilazione per il comando che provoca un errore.