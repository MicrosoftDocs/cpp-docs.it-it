---
description: 'Altre informazioni su: avviso di compilazione progetto progetto PRJ0041'
title: Avviso di compilazione progetto PRJ0041
ms.date: 11/04/2016
f1_keywords:
- PRJ0041
helpviewer_keywords:
- PRJ0041
ms.assetid: dc9f4cf9-6bd5-4222-89e8-7802a59bb96b
ms.openlocfilehash: dc6b36e052d3402f047257a4bf0035d7ec30f92a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97206448"
---
# <a name="project-build-warning-prj0041"></a>Avviso di compilazione progetto PRJ0041

Non è possibile trovare la dipendenza ' Dependency ' mancante per il file ' file '. Il progetto può ancora essere compilato, ma potrebbe continuare a sembrare obsoleto fino a quando non viene trovato il file.

Un file (file di risorse o file. idl/. FAD, ad esempio, contiene un'istruzione include che il sistema del progetto non è stato in grado di risolvere.

Poiché il sistema del progetto non elabora le istruzioni del preprocessore (ad esempio, #if), l'istruzione che causa il problema potrebbe non essere effettivamente parte della compilazione.

Per risolvere il problema, eliminare il codice non necessario nei file RC o aggiungere i file segnaposto con il nome appropriato.
