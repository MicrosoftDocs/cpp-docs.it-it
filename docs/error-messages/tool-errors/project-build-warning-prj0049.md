---
title: Progetto PRJ0049 avviso di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
dev_langs:
- C++
helpviewer_keywords:
- PRJ0049
ms.assetid: 8b38afa1-e080-4efd-ae89-776cfd044413
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9f87bc7e26fd7cc50defbc086594c92a3ea339ef
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="project-build-warning-prj0049"></a>Avviso di compilazione progetto PRJ0049
Destinazione di riferimento '\<riferimento >' richiede .NET Framework \<MinFrameworkVersion > e non verrà eseguito nel framework di destinazione del progetto  
  
 Le applicazioni create utilizzando Visual Studio 2008 è possono specificare quale versione di [!INCLUDE[dnprdnshort](../../error-messages/tool-errors/includes/dnprdnshort_md.md)] di destinazione. Se si aggiunge un riferimento a un assembly o un progetto che dipende da una versione di [!INCLUDE[dnprdnshort](../../error-messages/tool-errors/includes/dnprdnshort_md.md)] successiva alla versione di destinazione, verrà visualizzato questo avviso in fase di compilazione.  
  
### <a name="to-correct-this-warning"></a>Per risolvere il problema  
  
1.  Effettuare una delle seguenti operazioni:  
  
    -   Modificare il framework di destinazione del progetto **pagine delle proprietà** nella finestra di dialogo in modo che sia successivo o uguale alla versione minima framework di riferimento a tutti gli assembly e progetti. Per ulteriori informazioni, vedere [aggiunta di riferimenti](../../ide/adding-references-in-visual-cpp-projects.md).  
  
    -   Rimuovere il riferimento all'assembly o un progetto con una versione minima del framework che è successiva a quella del framework di destinazione. Questi elementi verranno contrassegnati con un'icona di avviso del progetto **pagine delle proprietà**.  
  
## <a name="see-also"></a>Vedere anche  
 [Errori e avvisi relativi alla compilazione di progetti (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)