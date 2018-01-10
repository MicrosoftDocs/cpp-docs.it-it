---
title: Specifica il nome del percorso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- names [C++], compiler output files
- cl.exe compiler, output files
- output files, specifying pathnames
ms.assetid: 7a6595ce-3383-44ae-957a-466bfa29c343
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2412ab15317604e1d6cccc5535226d429d8ba6b7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="specifying-the-pathname"></a>Specifica del nome del percorso
Ogni opzione di file di output accetta un *pathname* argomento che è possibile specificare un percorso e un nome per il file di output. L'argomento può includere un nome di unità, directory e nome file. Non è consentito spazio tra l'opzione e l'argomento.  
  
 Se *pathname* include un nome file senza estensione, il compilatore assegna l'output un'estensione predefinita. Se *pathname* include una directory, ma nessun nome di file, il compilatore crea un file con un nome predefinito nella directory specificata. Il nome predefinito è basato sul nome di base del file di origine e l'estensione predefinita in base al tipo del file di output. Se si elimina *pathname* completamente, il compilatore crea un file con un nome predefinito in una directory predefinita.  
  
 In alternativa, il *pathname* argomento può essere un nome di dispositivo (AUX, CON, PRN o NUL) anziché un nome di file. Non utilizzare uno spazio tra l'opzione e il nome del dispositivo o un virgola come parte del nome del dispositivo.  
  
|Nome del dispositivo|Descrizione|  
|-----------------|----------------|  
|AUX|Dispositivo ausiliario|  
|CON|Console|  
|PRN|Stampante|  
|NUL|Dispositivo null (nessun file creato)|  
  
## <a name="example"></a>Esempio  
 La seguente riga di comando invia un file di mapping alla stampante:  
  
```  
CL /FmPRN HELLO.CPP  
```  
  
## <a name="see-also"></a>Vedere anche  
 [File di output (/ F) opzioni](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)