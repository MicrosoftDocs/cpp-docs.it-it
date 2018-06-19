---
title: Informazioni sulla generazione di manifesti per programmi C/C++ | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- manifests [C++]
ms.assetid: a1f24221-5b09-4824-be48-92eae5644b53
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eb6a65c718b88e4072c0ddad19411bb8ea4ddcff
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32381630"
---
# <a name="understanding-manifest-generation-for-cc-programs"></a>Informazioni sulla generazione di manifesti per programmi C/C++
Oggetto [manifesto](http://msdn.microsoft.com/library/aa375365) è un documento XML che può essere un file XML esterno o una risorsa incorporato all'interno di un'applicazione o un assembly. Il manifesto di un [applicazione isolata](http://msdn.microsoft.com/library/aa375190) viene utilizzato per gestire i nomi e le versioni di assembly side-by-side condivisi a cui l'applicazione deve essere associato in fase di esecuzione. Il manifesto di un assembly side-by-side specifica le dipendenze dei nomi, versioni, risorse e gli altri assembly.  
  
 Esistono due modi per creare un manifesto per un'applicazione isolata o un assembly side-by-side. In primo luogo, l'autore dell'assembly è possibile creare manualmente un file manifesto seguendo le regole e requisiti di denominazione. In alternativa, se un programma dipende esclusivamente da assembly di Visual C++, ad esempio CRT, MFC, ATL o altri utenti, il manifesto può essere generato automaticamente dal linker.  
  
 Le intestazioni delle librerie di Visual C++ contengono informazioni sull'assembly e quando le librerie sono inclusi nel codice dell'applicazione, queste informazioni sull'assembly viene utilizzate dal linker per creare un manifesto per il file binario finale. Il linker incorpora il file manifesto nel file binario e può generare solo il manifesto come file esterno. Con un manifesto come file esterno potrebbe non funzionare per tutti gli scenari. Ad esempio, è consigliabile che gli assembly privati dispongano di manifesti incorporati. Nelle compilazioni della riga di comando, ad esempio quelli che utilizzano nmake per compilare il codice, è possibile incorporare un manifesto utilizzando lo strumento manifesto. Per ulteriori informazioni vedere [generazione manifesto nella riga di comando](../build/manifest-generation-at-the-command-line.md). Durante la compilazione in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], impostando una proprietà per lo strumento manifesto in è possibile incorporare un manifesto di **le proprietà del progetto** finestra di dialogo, vedere [generazione in Visual Studio](../build/manifest-generation-in-visual-studio.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti di applicazioni isolate e assembly Side-by-side](../build/concepts-of-isolated-applications-and-side-by-side-assemblies.md)   
 [Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)