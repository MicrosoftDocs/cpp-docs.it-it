---
title: Aggiornamento di progetti da versioni precedenti di Visual C++ | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- 32-bit code porting
- upgrading Visual C++ applications, 32-bit code
ms.assetid: 18cdacaa-4742-43db-9e4c-2d9e73d8cc84
caps.latest.revision: "36"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b141efa2ffa7d382278365101fca25b66ea25614
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="upgrading-projects-from-earlier-versions-of-visual-c"></a>Aggiornamento di progetti da versioni precedenti di Visual C++
Nella maggior parte dei casi, è possibile aprire un progetto creato in una versione precedente di Visual Studio. A questo scopo, tuttavia, Visual Studio aggiorna il progetto. Se il progetto aggiornato viene salvato, non potrà più essere aperto nella versione precedente.  
  
> [!IMPORTANT]
>  Se si tenta di convertire un progetto già convertito, Visual Studio chiede conferma perché la riconversione comporta l'eliminazione dei file esistenti.  
  
 Molti progetti e soluzioni aggiornati possono essere compilati correttamente senza modifiche. È tuttavia possibile che alcuni progetti richiedano modifiche alle impostazioni, al codice sorgente o a entrambi. È consigliabile usare le linee guida seguenti per risolvere innanzitutto i problemi relativi alle impostazioni, dopodiché, se il progetto continua a non venire compilato, sarà possibile procedere alla risoluzione dei problemi relativi al codice. Per altre informazioni, vedere la [panoramica sui potenziali problemi di aggiornamento](../porting/overview-of-potential-upgrade-issues-visual-cpp.md).  
  
1.  Eseguire una copia del progetto esistente e dei file di soluzione. Eseguire l'installazione side-by-side della versione corrente e della versione precedente di Visual Studio in modo da poter confrontare, se lo si desidera, le versioni dei file.  
  
2.  Nella versione corrente di Visual Studio, aprire e aggiornare la copia del progetto o della soluzione, quindi salvarla.  
  
3.  Per ogni progetto convertito, aprire il menu di scelta rapida e scegliere **Proprietà**. In **Proprietà di configurazione**selezionare **Generale** , quindi per **Set strumenti della piattaforma**selezionare la versione corrente. Ad esempio, per Visual Studio 2017 selezionare v141.  
  
4.  Compilare la soluzione. Se la compilazione non riesce, modificare le impostazioni e ripetere l'operazione.  
  
 Le origini dati sono contenute in un progetto di database separato in modo da poter eseguire il debug delle stored procedure e di modificarle più facilmente in tali origini. Se si aggiorna un progetto C++ che contiene origini dati, viene automaticamente creato un progetto di database separato.  
  
 Per informazioni su come aggiornare le versioni di Windows di destinazione, vedere [Modifica di WINVER e _WIN32_WINNT](../porting/modifying-winver-and-win32-winnt.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Modifiche al sistema di compilazione](../build/build-system-changes.md)  
 [Novità di Visual C++ in Visual Studio 2017](../what-s-new-for-visual-cpp-in-visual-studio.md) [Cronologia delle modifiche di Visual C++ dal 2003 al 2015](../porting/visual-cpp-change-history-2003-2015.md)   
 [Comportamento non standard](../cpp/nonstandard-behavior.md)