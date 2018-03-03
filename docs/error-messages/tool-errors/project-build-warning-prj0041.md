---
title: Generazione avviso progetto PRJ0041 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- PRJ0041
dev_langs:
- C++
helpviewer_keywords:
- PRJ0041
ms.assetid: dc9f4cf9-6bd5-4222-89e8-7802a59bb96b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 231b58cb0c13d1a3f87e010a5100da564b0be806
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="project-build-warning-prj0041"></a>Avviso di compilazione progetto PRJ0041
Impossibile trovare mancante dipendenza 'dipendenza' per il file 'file'. Il progetto può ancora essere compilato, ma può continuare a risulterà non aggiornato finché non viene trovato il file.  
  
 Un file (file di risorse o.idl/.odl file, ad esempio, contiene un'istruzione di inclusione che non è stato possibile risolvere il sistema del progetto.  
  
 Poiché il sistema del progetto non elabora le istruzioni del preprocessore (ad esempio #if), l'istruzione che causa il problema non può fare parte della compilazione.  
  
 Per risolvere il problema, eliminare tutto il codice non necessario nel file RC o aggiungere file segnaposto con il nome appropriato.