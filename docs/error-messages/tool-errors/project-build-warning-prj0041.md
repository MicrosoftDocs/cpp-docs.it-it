---
title: Generazione avviso progetto PRJ0041 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0041
dev_langs:
- C++
helpviewer_keywords:
- PRJ0041
ms.assetid: dc9f4cf9-6bd5-4222-89e8-7802a59bb96b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6e845967b0a7116d6edade98b571de5bc1bcd9a1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33318061"
---
# <a name="project-build-warning-prj0041"></a>Avviso di compilazione progetto PRJ0041
Impossibile trovare mancante dipendenza 'dipendenza' per il file 'file'. Il progetto può ancora essere compilato, ma può continuare a risulterà non aggiornato finché non viene trovato il file.  
  
 Un file (file di risorse o.idl/.odl file, ad esempio, contiene un'istruzione di inclusione che non è stato possibile risolvere il sistema del progetto.  
  
 Poiché il sistema del progetto non elabora le istruzioni del preprocessore (ad esempio #if), l'istruzione che causa il problema non può fare parte della compilazione.  
  
 Per risolvere il problema, eliminare tutto il codice non necessario nel file RC o aggiungere file segnaposto con il nome appropriato.