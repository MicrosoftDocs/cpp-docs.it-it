---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0003'
title: Errore di compilazione progetto PRJ0003
ms.date: 11/04/2016
f1_keywords:
- PRJ0003
helpviewer_keywords:
- PRJ0003
ms.assetid: fc5a84bb-c6d3-41d6-8dd6-475455820778
ms.openlocfilehash: b5ca521bdddb78c3cd7c5dd41f8999b99cb92e20
ms.sourcegitcommit: 6183207b11575d7b44ebd7c18918e916a0d8c63d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/06/2021
ms.locfileid: "97951437"
---
# <a name="project-build-error-prj0003"></a>Errore di compilazione progetto PRJ0003

> Errore durante la generazione della "*riga di comando*".

Il comando della *riga di comando* creato dall'input nella finestra di dialogo **pagine delle proprietà** ha restituito un codice di errore, ma nella finestra di **output** non viene visualizzata alcuna informazione.

Le possibili cause di questo errore sono le seguenti:

- Il progetto dipende da ATL Server. A partire da Visual Studio 2008, ATL Server non è più incluso in Visual Studio, ma è stato rilasciato come progetto di origine condiviso in CodePlex. Per scaricare il codice sorgente e gli strumenti di ATL Server, vedere [strumenti e libreria server ATL](https://archive.codeplex.com/?p=atlserver).

- Risorse di sistema insufficienti. Chiudere alcune applicazioni per risolvere questo problema.

- Privilegi di sicurezza insufficienti. Verificare di disporre di privilegi di sicurezza sufficienti.

- I percorsi eseguibili specificati nelle **directory di VC + +** non includono il percorso dello strumento che si sta tentando di eseguire. Per informazioni, vedere [impostare le proprietà del compilatore e della compilazione](../../build/working-with-project-properties.md)

- Per i progetti makefile, manca un comando da eseguire nella riga di comando di **compilazione** o nella **riga di comando di ricompilazione**.

## <a name="see-also"></a>Vedere anche

[Errori e avvisi di compilazione progetto (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)
