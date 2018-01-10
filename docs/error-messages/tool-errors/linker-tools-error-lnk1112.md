---
title: Strumenti del linker LNK1112 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1112
dev_langs: C++
helpviewer_keywords: LNK1112
ms.assetid: 425793d8-37e6-4072-9b6e-c3d4e9c12562
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a915768f0668a4ce276962f9eafd1f905980e2be
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1112"></a>Errore degli strumenti del linker LNK1112
il tipo di computer del modulo 'type1' è in conflitto con il tipo di computer di destinazione 'type2'  
  
 I file oggetto specificati come input sono stati compilati per tipi di computer diversi.  
  
 Il linker genererà ad esempio l'errore LNK1112 quando si prova a collegare un file oggetto compilato con **/clr** e un file oggetto compilato con **/clr:pure** (tipo di computer CEE).  
  
 Analogamente, l'errore si verifica se si prova a collegare un modulo creato con il compilatore [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e un modulo creato con il compilatore x86.  
  
 Questo errore può verificarsi nel caso in cui si usa un'applicazione a 64 bit senza avere installato compilatori di Visual C++ a 64 bit. In questo caso, le configurazioni a 64 bit non saranno disponibili. Per correggere questo errore, eseguire il programma di installazione per Visual Studio e installare i componenti C++ mancanti.  
  
 Questo errore può anche verificarsi se si modifica **Configurazione soluzione attiva** in **Gestione configurazione** e quindi si prova a compilare il progetto prima di eliminare i file di progetto intermedi. Per risolvere questo errore, selezionare **Ricompila soluzione** dal menu **Compila** . È anche possibile scegliere **Pulisci soluzione** dal menu **Compila** e quindi compilare la soluzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Errori e avvisi degli strumenti del linkers](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)