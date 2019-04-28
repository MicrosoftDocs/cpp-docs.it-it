---
title: Avviso di compilazione progetto PRJ0041
ms.date: 11/04/2016
f1_keywords:
- PRJ0041
helpviewer_keywords:
- PRJ0041
ms.assetid: dc9f4cf9-6bd5-4222-89e8-7802a59bb96b
ms.openlocfilehash: b0fceff05ffe35515965b7e0a880c8b4c941b07e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62297723"
---
# <a name="project-build-warning-prj0041"></a>Avviso di compilazione progetto PRJ0041

Non è possibile trovare mancante dipendenza 'dependency' file 'file'. Il progetto può ancora essere compilato, ma risulterà aggiornata fino a quando non viene trovato il file.

Un file (file di risorse o file.idl/.odl, ad esempio, contiene un'istruzione include che il sistema di progetto non è stato possibile risolvere.

Poiché il sistema di progetto non elabora le istruzioni del preprocessore (#if, ad esempio), l'istruzione che causa il problema non può fare parte della compilazione.

Per risolvere questo problema, eliminare tutto il codice non necessario nei file RC o aggiungere file segnaposto con il nome appropriato.