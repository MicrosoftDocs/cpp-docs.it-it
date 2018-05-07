---
title: Progetto PRJ0050 errore di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0050
dev_langs:
- C++
helpviewer_keywords:
- PRJ0050
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0ad17614f693e313190dba9cc767c023981dec34
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="project-build-error-prj0050"></a>Errore di compilazione progetto PRJ0050
Impossibile registrare l'output. Assicurarsi di che disporre delle autorizzazioni appropriate per modificare il Registro di sistema.  
  
 Il sistema di compilazione di Visual C++ non è in grado di registrare l'output di compilazione (dll o .exe). È necessario essere connessi come amministratore per modificare il Registro di sistema.  
  
 Se si compila una DLL, è possibile provare a registrare la DLL manualmente utilizzando regsvr32.exe, questo deve visualizzare le informazioni sulla causa dell'errore di compilazione.  
  
 Se non si compila una DLL, esaminare il log di compilazione per il comando che provoca un errore.