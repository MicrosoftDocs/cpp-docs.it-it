---
title: Avviso di compilazione progetto PRJ0049
ms.date: 11/04/2016
helpviewer_keywords:
- PRJ0049
ms.assetid: 8b38afa1-e080-4efd-ae89-776cfd044413
ms.openlocfilehash: e857a50215dc7516c0e2ec45a97638c76f40f43b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80191749"
---
# <a name="project-build-warning-prj0049"></a>Avviso di compilazione progetto PRJ0049

La destinazione '\<Reference >' a cui viene fatto riferimento richiede .NET Framework \<MinFrameworkVersion > e non verrà eseguita nel Framework di destinazione del progetto

Le applicazioni create con Visual Studio 2008 possono specificare la versione del .NET Framework di destinazione. Se si aggiunge un riferimento a un assembly o a un progetto che dipende da una versione del .NET Framework successiva alla versione di destinazione, verrà visualizzato questo avviso in fase di compilazione.

### <a name="to-correct-this-warning"></a>Per correggere questo avviso

1. Selezionare una delle opzioni seguenti:

   - Modificare il Framework di destinazione nella finestra di dialogo **pagine delle proprietà** del progetto in modo che sia successiva o uguale alla versione minima di .NET Framework di tutti i progetti e degli assembly a cui si fa riferimento. Per ulteriori informazioni, vedere [aggiunta di riferimenti](../../build/adding-references-in-visual-cpp-projects.md).

   - Rimuovere il riferimento all'assembly o al progetto che dispone di una versione minima del Framework successiva al Framework di destinazione. Questi elementi saranno contrassegnati con un'icona di avviso nelle **pagine delle proprietà**del progetto.

## <a name="see-also"></a>Vedere anche

[Errori e avvisi relativi alla compilazione di progetti (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)
