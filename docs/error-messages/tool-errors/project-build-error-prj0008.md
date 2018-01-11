---
title: Progetto PRJ0008 errore di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: PRJ0008
dev_langs: C++
helpviewer_keywords: PRJ0008
ms.assetid: 6bf7f17a-d2a8-4826-99c7-d600d846952f
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1740b0cf1edfc90258de4fe26478298ddf2875c6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="project-build-error-prj0008"></a>Errore di compilazione progetto PRJ0008
Impossibile eliminare il file 'file'.  
  
 **Assicurarsi che il file non sia aperto da un altro processo e non è protetto da scrittura.**  
  
 Durante la ricompilazione o pulizia, Visual C++ consente di eliminare tutti i file intermedi e di output utilizzati per la compilazione, nonché i file che soddisfano specifiche dei caratteri jolly nel **estensioni da eliminare durante la pulizia** proprietà il [generale Pagina di proprietà delle impostazioni di configurazione](../../ide/general-property-page-project.md).  
  
 Questo errore si verifica se Visual C++ non è in grado di eliminare un file. Per risolvere l'errore, verificare il file e la relativa directory scrivibile per l'utente che esegue la compilazione.