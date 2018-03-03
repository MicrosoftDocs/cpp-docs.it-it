---
title: Ridistribuzione dei componenti tramite modelli unione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- merge modules, using
- redistributing applications, using merge modules
ms.assetid: 93b84211-bf9b-4a78-9f22-474ac2ef7840
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 093c732563844b14a3f99662150d4db9b2fac1fb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="redistributing-components-by-using-merge-modules"></a>Ridistribuzione di componenti tramite modelli merge
Visual Studio include [moduli unione](http://msdn.microsoft.com/library/aa367434) per ogni componente di Visual C++ che è concesso in licenza per essere ridistribuito con un'applicazione. Quando un modello merge viene compilato in un file di installazione di Windows Installer, consente una distribuzione di DLL specifiche in computer con una determinata piattaforma. Nel file di installazione specificare che i modelli merge sono prerequisiti dell'applicazione. Quando è installato Visual Studio, i modelli unione vengono installati nella directory \Programmi\Common Files\Merge Modules\\. (Solo le versioni non di debug di DLL di Visual C++ possono essere ridistribuite). Per ulteriori informazioni e un collegamento a un elenco di moduli unione che sono concessi in licenza per la ridistribuzione, vedere [ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md).  
  
 È possibile utilizzare i modelli unione per consentire l'installazione delle DLL ridistribuibili di Visual C++ nella cartella %SystemRoot%\system32\.. (Visual Studio Usa questa tecnica). L'installazione in questa cartella può essere completata solo se l'utente che la esegue dispone dei diritti di amministratore.  
  
 Non è consigliabile utilizzare i modelli merge, tranne quando non è necessario eseguire la manutenzione dell'applicazione e non esistono dipendenze da più di una versione delle DLL. Non è possibile includere in un programma di installazione modelli merge per versioni diverse della stessa DLL. Inoltre, i modelli merge rendono difficile la manutenzione delle DLL in modo indipendente dall'applicazione. In alternativa, è consigliabile installare Visual C++ Redistributable Package.  
  
## <a name="see-also"></a>Vedere anche  
 [Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md)