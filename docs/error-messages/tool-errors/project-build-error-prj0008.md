---
title: Progetto PRJ0008 errore di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0008
dev_langs:
- C++
helpviewer_keywords:
- PRJ0008
ms.assetid: 6bf7f17a-d2a8-4826-99c7-d600d846952f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4011a27b7e6707f9c9b4e3ed386306b00f2792cf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="project-build-error-prj0008"></a>Errore di compilazione progetto PRJ0008
Impossibile eliminare il file 'file'.  
  
 **Assicurarsi che il file non è aperto da un altro processo e non è protetto da scrittura.**  
  
 Durante la ricompilazione o pulizia, Visual C++ consente di eliminare tutti i file intermedi e di output utilizzati per la compilazione, nonché i file che soddisfano specifiche dei caratteri jolly nel **estensioni da eliminare durante la pulizia** proprietà il [generale Pagina di proprietà delle impostazioni di configurazione](../../ide/general-property-page-project.md).  
  
 Questo errore si verifica se Visual C++ non è in grado di eliminare un file. Per risolvere l'errore, verificare il file e la relativa directory scrivibile per l'utente che esegue la compilazione.