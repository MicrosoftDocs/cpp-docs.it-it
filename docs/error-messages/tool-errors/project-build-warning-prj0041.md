---
title: Avviso di compilazione progetto PRJ0041
ms.date: 11/04/2016
f1_keywords:
- PRJ0041
helpviewer_keywords:
- PRJ0041
ms.assetid: dc9f4cf9-6bd5-4222-89e8-7802a59bb96b
ms.openlocfilehash: bb6469b1daf193223a9b3361cc3e4bfb96d0c751
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80191932"
---
# <a name="project-build-warning-prj0041"></a>Avviso di compilazione progetto PRJ0041

Non è possibile trovare la dipendenza ' Dependency ' mancante per il file ' file '. Il progetto può ancora essere compilato, ma potrebbe continuare a sembrare obsoleto fino a quando non viene trovato il file.

Un file (file di risorse o file. idl/. FAD, ad esempio, contiene un'istruzione include che il sistema del progetto non è stato in grado di risolvere.

Poiché il sistema del progetto non elabora le istruzioni del preprocessore (ad esempio, #if), l'istruzione che causa il problema potrebbe non essere effettivamente parte della compilazione.

Per risolvere il problema, eliminare il codice non necessario nei file RC o aggiungere i file segnaposto con il nome appropriato.
