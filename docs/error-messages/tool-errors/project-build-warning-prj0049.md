---
title: Avviso di compilazione progetto PRJ0049
ms.date: 11/04/2016
helpviewer_keywords:
- PRJ0049
ms.assetid: 8b38afa1-e080-4efd-ae89-776cfd044413
ms.openlocfilehash: a451b7fe7b2f7cd89f8898232badf0d3b7e9f138
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50447216"
---
# <a name="project-build-warning-prj0049"></a>Avviso di compilazione progetto PRJ0049

Destinazione di riferimento '\<riferimento >' richiede .NET Framework \<MinFrameworkVersion > e non verrà eseguito nel framework di destinazione del progetto

Le applicazioni create con Visual Studio 2008 è possono specificare quale versione di .NET Framework di destinazione. Se si aggiunge un riferimento a un assembly o un progetto che dipende da una versione di .NET Framework successiva alla versione di destinazione, si otterrà questo avviso in fase di compilazione.

### <a name="to-correct-this-warning"></a>Per risolvere il problema

1. Effettuare una delle seguenti operazioni:

   - Modificare il framework di destinazione del progetto **pagine delle proprietà** finestra di dialogo, in modo che sia successiva o uguale alla versione minima framework di tutti i riferimenti di assembly e progetti. Per altre informazioni, vedere [aggiunta di riferimenti](../../ide/adding-references-in-visual-cpp-projects.md).

   - Rimuovere il riferimento all'assembly o un progetto con una versione minima del framework successiva a quella di framework di destinazione. Questi elementi verranno contrassegnati con un'icona di avviso del progetto **pagine delle proprietà**.

## <a name="see-also"></a>Vedere anche

[Errori e avvisi relativi alla compilazione di progetti (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)