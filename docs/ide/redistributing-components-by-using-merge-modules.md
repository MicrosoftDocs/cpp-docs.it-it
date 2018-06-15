---
title: Ridistribuzione di componenti tramite modelli merge | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- merge modules, using
- redistributing applications, using merge modules
ms.assetid: 93b84211-bf9b-4a78-9f22-474ac2ef7840
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6d95b6d2a69b4b40c4464136dd33a8c5231185f5
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33329114"
---
# <a name="redistributing-components-by-using-merge-modules"></a>Ridistribuzione di componenti tramite modelli merge
Visual Studio include [modelli unione](http://msdn.microsoft.com/library/aa367434) per ogni componente di Visual C++ concesso in licenza per la ridistribuzione con un'applicazione. Quando un modello merge viene compilato in un file di installazione di Windows Installer, consente una distribuzione di DLL specifiche in computer con una determinata piattaforma. Nel file di installazione specificare che i modelli merge sono prerequisiti dell'applicazione. Quando si installa Visual Studio, i modelli unione vengono installati in \Programmi\Common Files\Merge Modules\\. È possibile ridistribuire solo versioni non di debug delle DLL di Visual C++. Per altre informazioni e un collegamento a un elenco di modelli unione concessi in licenza per la ridistribuzione, vedere [Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md).  
  
 È possibile usare modelli unione per consentire l'installazione delle DLL ridistribuibili di Visual C++ nella cartella %SYSTEMROOT%\system32\. Questa tecnica è usata da Visual Studio stesso. L'installazione in questa cartella può essere completata solo se l'utente che la esegue dispone dei diritti di amministratore.  
  
 Non è consigliabile utilizzare i modelli merge, tranne quando non è necessario eseguire la manutenzione dell'applicazione e non esistono dipendenze da più di una versione delle DLL. Non è possibile includere in un programma di installazione modelli merge per versioni diverse della stessa DLL. Inoltre, i modelli merge rendono difficile la manutenzione delle DLL in modo indipendente dall'applicazione. È invece consigliabile installare Visual C++ Redistributable Package.  
  
## <a name="see-also"></a>Vedere anche  
 [Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md)