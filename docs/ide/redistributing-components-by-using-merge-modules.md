---
title: Ridistribuzione di componenti tramite modelli merge
ms.date: 11/04/2016
helpviewer_keywords:
- merge modules, using
- redistributing applications, using merge modules
ms.assetid: 93b84211-bf9b-4a78-9f22-474ac2ef7840
ms.openlocfilehash: 8fa717f376017560c4bd2e9012bd25c5190da563
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50676460"
---
# <a name="redistributing-components-by-using-merge-modules"></a>Ridistribuzione di componenti tramite modelli merge

Visual Studio include [modelli unione](/windows/desktop/Msi/about-merge-modules) per ogni componente di Visual C++ concesso in licenza per la ridistribuzione con un'applicazione. Quando un modello merge viene compilato in un file di installazione di Windows Installer, consente una distribuzione di DLL specifiche in computer con una determinata piattaforma. Nel file di installazione specificare che i modelli merge sono prerequisiti dell'applicazione. Quando si installa Visual Studio, i modelli unione vengono installati in \Programmi\Common Files\Merge Modules\\. È possibile ridistribuire solo versioni non di debug delle DLL di Visual C++. Per altre informazioni e un collegamento a un elenco di modelli unione concessi in licenza per la ridistribuzione, vedere [Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md).

È possibile usare modelli unione per consentire l'installazione delle DLL ridistribuibili di Visual C++ nella cartella %SYSTEMROOT%\system32\. Questa tecnica è usata da Visual Studio stesso. L'installazione in questa cartella può essere completata solo se l'utente che la esegue dispone dei diritti di amministratore.

Non è consigliabile utilizzare i modelli merge, tranne quando non è necessario eseguire la manutenzione dell'applicazione e non esistono dipendenze da più di una versione delle DLL. Non è possibile includere in un programma di installazione modelli merge per versioni diverse della stessa DLL. Inoltre, i modelli merge rendono difficile la manutenzione delle DLL in modo indipendente dall'applicazione. È invece consigliabile installare Visual C++ Redistributable Package.

## <a name="see-also"></a>Vedere anche

[Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md)