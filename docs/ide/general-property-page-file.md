---
title: Pagina delle proprietà Generale (File) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.VCFileConfiguration.ExcludedFromBuild
- VC.Project.VCFileConfiguration.Tool
dev_langs:
- C++
ms.assetid: 26e3711e-9e7d-4e8d-bc4c-2474538efdad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 46446b03b557aa3c685ff4ab4f1658cd6972124e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46388602"
---
# <a name="general-property-page-file"></a>Pagina delle proprietà Generale (File)

Quando si seleziona un file in **Esplora soluzioni**, la pagina delle proprietà **Generale** nel nodo **Proprietà di configurazione** contiene le proprietà seguenti:

- **Escluso dalla compilazione**

   Specifica se il file deve essere incluso nella compilazione per la configurazione corrente.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCFileConfiguration.ExcludedFromBuild%2A>.

- **Strumento**

   Lo strumento che verrà usato per generare questo file. Vedere [Specifica di strumenti di compilazione personalizzata](../ide/specifying-custom-build-tools.md) per altre informazioni.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCFileConfiguration.Tool%2A>.

Per informazioni sull'accesso alla pagina delle proprietà **Generale** nel nodo **Proprietà di configurazione**, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md).

Per i progetti non Windows, vedere [Informazioni di riferimento sulla pagina delle proprietà di un progetto Linux C++](../linux/prop-pages-linux.md)<!-- or [C++ Cross Platform Property Page Reference](../linux/prop-pages-linux.md)-->.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../ide/property-pages-visual-cpp.md)