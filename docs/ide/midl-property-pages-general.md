---
title: 'Pagine delle proprietà MIDL: Generale | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.VCMidlTool.PreprocessorDefinitions
- VC.Project.VCMidlTool.DefaultCharType
- VC.Project.VCMidlTool.WarnAsError
- VC.Project.VCMidlTool.AdditionalIncludeDirectories
- VC.Project.VCMidlTool.WarningLevel
- VC.Project.VCMidlTool.MkTypLibCompatible
- VC.Project.VCMidlTool.GenerateStublessProxies
- VC.Project.VCMidlTool.SuppressStartupBanner
- VC.Project.VCMidlTool.TargetEnvironment
- VC.Project.VCMidlTool.OVERWRITEStandardIncludePath
dev_langs:
- C++
helpviewer_keywords:
- MIDL, property pages
ms.assetid: 0692484c-a7e6-4270-8df7-981589368399
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 32e1c743844d252b391a4a747d803ba0e8c81c54
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431424"
---
# <a name="midl-property-pages-general"></a>Pagine delle proprietà MIDL: Generale

La pagina delle proprietà **Generale** nella cartella **MIDL** consente di specificare le opzioni seguenti del compilatore MIDL:

- Definizioni preprocessore [(/D](https://msdn.microsoft.com/library/windows/desktop/aa367321))

- Directory di inclusione aggiuntive ([/I](https://msdn.microsoft.com/library/windows/desktop/aa367328))

- Ignora percorsi di inclusione standard ([/no_def_idir](https://msdn.microsoft.com/library/windows/desktop/aa367347))

- MkTypLib Compatible ([/mktyplib203](https://msdn.microsoft.com/library/windows/desktop/aa367332))

- Livello avvisi ([/W](https://msdn.microsoft.com/library/windows/desktop/aa367383))

- Considera gli avvisi come errori ([/WX](https://msdn.microsoft.com/library/windows/desktop/aa367387))

- Non visualizzare messaggio di avvio ([/nologo](https://msdn.microsoft.com/library/windows/desktop/aa367341))

- Tipo char MIDL ([/char](https://msdn.microsoft.com/library/windows/desktop/aa367314))

- Ambiente di destinazione ([/env](https://msdn.microsoft.com/library/windows/desktop/aa367323))

- Genera proxy senza stub ([/Oicf](https://msdn.microsoft.com/library/windows/desktop/aa367352))

Per informazioni sull'accesso alla pagina delle proprietà **Generale** nella cartella **MIDL**, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md).

Per informazioni su come accedere a livello di codice alle opzioni MIDL per i progetti C++, vedere l'oggetto <xref:Microsoft.VisualStudio.VCProjectEngine.VCMidlTool>.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà MIDL](../ide/midl-property-pages.md)