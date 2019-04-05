---
title: Errore di compilazione progetto PRJ0003
ms.date: 11/04/2016
f1_keywords:
- PRJ0003
helpviewer_keywords:
- PRJ0003
ms.assetid: fc5a84bb-c6d3-41d6-8dd6-475455820778
ms.openlocfilehash: 00d101e62d49078ebfcfff9455497f30224b84fe
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59039520"
---
# <a name="project-build-error-prj0003"></a>Errore di compilazione progetto PRJ0003

> Errore durante la generazione '*riga di comando*'.

Il *riga di comando* comando creato dall'input nella **pagine delle proprietà** la finestra di dialogo ha restituito un codice di errore, ma viene visualizzata alcuna informazione nella **Output** finestra.

Possibili cause di questo errore includono:

- Il progetto dipende dal Server ATL. A partire da Visual Studio 2008, ATL Server non è più inclusa come parte di Visual Studio, ma è stato rilasciato come progetto di origine condiviso in CodePlex. Per scaricare il codice sorgente di ATL Server e gli strumenti, visitare [libreria Server ATL e strumenti](http://go.microsoft.com/fwlink/p/?linkid=81979).

- Risorse di sistema insufficienti. Chiudere alcune applicazioni per risolvere il problema.

- Privilegi di sicurezza insufficienti. Verificare di disporre di privilegi di sicurezza.

- I percorsi di file eseguibile specificati nel **directory di VC + +** non includono il percorso per lo strumento che si sta provando a eseguire. Per informazioni, vedere [impostare del compilatore e proprietà di compilazione](../../build/working-with-project-properties.md)

- Per progetti makefile, non sono presenti un comando da eseguire in uno **riga di comando di compilazione** oppure **ricompilazione della riga di comando**.

## <a name="see-also"></a>Vedere anche

[Errori e avvisi relativi alla compilazione di progetti (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)