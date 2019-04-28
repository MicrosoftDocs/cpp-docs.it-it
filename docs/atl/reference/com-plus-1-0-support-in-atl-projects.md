---
title: Supporto COM+ 1.0 nei progetti ATL
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.ATL.MTS
helpviewer_keywords:
- ATL projects, COM+ 1.0 support
ms.assetid: 51fb08ac-d632-4657-a4e0-d3f989f0b6f8
ms.openlocfilehash: 39a3597b8df833d89942e31b361f791b14ceb8c9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62278475"
---
# <a name="com-10-support-in-atl-projects"></a>Supporto COM+ 1.0 nei progetti ATL

È possibile usare la [Creazione guidata progetto ATL](../../atl/reference/creating-an-atl-project.md) per creare un progetto con il supporto di base per i componenti COM+ 1.0.

COM+ 1.0 è progettato per lo sviluppo di applicazioni distribuite in base al componente. Fornisce inoltre un'infrastruttura di runtime per la distribuzione e la gestione di queste applicazioni.

Se si seleziona il **supporto COM+ 1.0** casella di controllo, la procedura guidata consente di modificare lo script di compilazione in fase di collegamento. In particolare, i COM+ 1.0 progetto collegamenti per le librerie seguenti:

- comsvcs.lib

- Mtxguid.lib

Se si seleziona il **supporto COM+ 1.0** casella di controllo, è possibile selezionare anche **registrazione di componenti di supporto**. La registrazione del componente consente all'oggetto COM+ 1.0 ottenere un elenco dei componenti, registrare i componenti o annullare la registrazione di componenti (singolarmente o in una sola volta).

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
