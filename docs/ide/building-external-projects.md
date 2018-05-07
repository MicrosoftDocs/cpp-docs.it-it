---
title: Compilazione di progetti esterni | Documenti Microsoft
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
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="building-external-projects"></a>Compilazione di progetti esterni
Un progetto esterno è un progetto di Visual C++ che utilizza un makefile o altre funzionalità che si trovano all'esterno (esterna o all'esterno) dell'ambiente di sviluppo di Visual C++.  
  
 Se si dispone di un progetto esterno (ad esempio, un progetto makefile) che si desidera compilare nell'ambiente di sviluppo di Visual C++, creare un progetto Makefile e specificare il progetto compilare comandi e l'output nella creazione guidata applicazione Makefile. Per ulteriori informazioni, vedere [creazione di un progetto Makefile](../ide/creating-a-makefile-project.md).  
  
 Si noti che Visual C++ non supporta più la possibilità di esportare un makefile per il progetto attivo dall'ambiente di sviluppo. Utilizzare [opzioni della riga di comando Devenv](/visualstudio/ide/reference/devenv-command-line-switches) per compilare i progetti di Visual Studio dalla riga di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione di progetti C++ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)