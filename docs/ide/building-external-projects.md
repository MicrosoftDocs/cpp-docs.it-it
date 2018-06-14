---
title: Compilazione di progetti esterni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- external projects
- Visual C++ projects, external projects
- builds [C++], external projects
- projects [C++], external projects
- Makefile projects, external projects
ms.assetid: 650b7803-ea91-489d-bee3-8f3e990e223c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 97b6aa1e5939afe55644df6529bf75ba043f20bb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33330346"
---
# <a name="building-external-projects"></a>Compilazione di progetti esterni
Un progetto esterno è un progetto di Visual C++ che usa un makefile o altre funzionalità che si trovano all'esterno dell'ambiente di sviluppo di Visual C++.  
  
 Se è presente un progetto esterno (ad esempio un progetto makefile) che si vuole compilare nell'ambiente di sviluppo di Visual C++, creare un progetto makefile e specificare il comando di compilazione e l'output del progetto in Makefile Application Wizard (Procedura guidata Applicazione Makefile). Per altre informazioni, vedere [Creazione di un progetto makefile](../ide/creating-a-makefile-project.md).  
  
 Si noti che Visual C++ non supporta più la possibilità di esportare un makefile per il progetto attivo dall'ambiente di sviluppo. Usare le [Opzioni della riga di comando devenv](/visualstudio/ide/reference/devenv-command-line-switches) per compilare progetti di Visual Studio dalla riga di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione di progetti C++ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)