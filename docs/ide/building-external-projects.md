---
title: Compilazione di progetti esterni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- external projects
- Visual C++ projects, external projects
- builds [C++], external projects
- projects [C++], external projects
- Makefile projects, external projects
ms.assetid: 650b7803-ea91-489d-bee3-8f3e990e223c
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 9f3bd3c7019c98f1be163ee31264b9fef0c52ac5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="building-external-projects"></a>Compilazione di progetti esterni
Un progetto esterno è un progetto di Visual C++ che utilizza un makefile o altre funzionalità che si trovano all'esterno (esterna o all'esterno) dell'ambiente di sviluppo di Visual C++.  
  
 Se si dispone di un progetto esterno (ad esempio, un progetto makefile) che si desidera compilare nell'ambiente di sviluppo di Visual C++, creare un progetto Makefile e specificare il progetto compilare comandi e l'output nella creazione guidata applicazione Makefile. Per ulteriori informazioni, vedere [creazione di un progetto Makefile](../ide/creating-a-makefile-project.md).  
  
 Si noti che Visual C++ non supporta più la possibilità di esportare un makefile per il progetto attivo dall'ambiente di sviluppo. Utilizzare [opzioni della riga di comando Devenv](/visualstudio/ide/reference/devenv-command-line-switches) per compilare i progetti di Visual Studio dalla riga di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione di progetti C++ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)