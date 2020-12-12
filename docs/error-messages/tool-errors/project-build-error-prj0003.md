---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0003'
title: Errore di compilazione progetto PRJ0003
ms.date: 11/04/2016
f1_keywords:
- PRJ0003
helpviewer_keywords:
- PRJ0003
ms.assetid: fc5a84bb-c6d3-41d6-8dd6-475455820778
ms.openlocfilehash: cefd56e1d11da77f288333fb0e1f9c10ef684d12
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97119408"
---
# <a name="project-build-error-prj0003"></a>Errore di compilazione progetto PRJ0003

> Errore durante la generazione della "*riga di comando*".

Il comando della *riga di comando* creato dall'input nella finestra di dialogo **pagine delle proprietà** ha restituito un codice di errore, ma nella finestra di **output** non viene visualizzata alcuna informazione.

Le possibili cause di questo errore sono le seguenti:

- Il progetto dipende da ATL Server. A partire da Visual Studio 2008, ATL Server non è più incluso in Visual Studio, ma è stato rilasciato come progetto di origine condiviso in CodePlex. Per scaricare il codice sorgente e gli strumenti di ATL Server, vedere [strumenti e libreria server ATL](https://go.microsoft.com/fwlink/p/?linkid=81979).

- Risorse di sistema insufficienti. Chiudere alcune applicazioni per risolvere questo problema.

- Privilegi di sicurezza insufficienti. Verificare di disporre di privilegi di sicurezza sufficienti.

- I percorsi eseguibili specificati nelle **directory di VC + +** non includono il percorso dello strumento che si sta tentando di eseguire. Per informazioni, vedere [impostare le proprietà del compilatore e della compilazione](../../build/working-with-project-properties.md)

- Per i progetti makefile, manca un comando da eseguire nella riga di comando di **compilazione** o nella **riga di comando di ricompilazione**.

## <a name="see-also"></a>Vedi anche

[Errori e avvisi di compilazione progetto (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)
