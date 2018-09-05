---
title: Supporto COM+ 1.0 nei progetti ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.appwiz.ATL.MTS
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, COM+ 1.0 support
ms.assetid: 51fb08ac-d632-4657-a4e0-d3f989f0b6f8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 06a9e6cd4a374f0941b360a3f8f24f61e4b46a6a
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43763298"
---
# <a name="com-10-support-in-atl-projects"></a>Supporto COM+ 1.0 nei progetti ATL

È possibile usare la [Creazione guidata progetto ATL](../../atl/reference/creating-an-atl-project.md) per creare un progetto con il supporto di base per i componenti COM+ 1.0.

COM+ 1.0 è progettato per lo sviluppo di applicazioni distribuite in base al componente. Fornisce inoltre un'infrastruttura di runtime per la distribuzione e la gestione di queste applicazioni.

Se si seleziona il **supporto COM+ 1.0** casella di controllo, la procedura guidata consente di modificare lo script di compilazione in fase di collegamento. In particolare, i COM+ 1.0 progetto collegamenti per le librerie seguenti:

- Comsvcs.lib

- Mtxguid.lib

Se si seleziona il **supporto COM+ 1.0** casella di controllo, è possibile selezionare anche **registrazione di componenti di supporto**. La registrazione del componente consente all'oggetto COM+ 1.0 ottenere un elenco dei componenti, registrare i componenti o annullare la registrazione di componenti (singolarmente o in una sola volta).

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali su oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)   
[Programmazione con codice di runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
[Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)

