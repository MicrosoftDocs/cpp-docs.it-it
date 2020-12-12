---
description: 'Ulteriori informazioni su: supporto COM+ 1,0 in progetti ATL'
title: Supporto di COM+ 1,0 nei progetti ATL
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.ATL.MTS
helpviewer_keywords:
- ATL projects, COM+ 1.0 support
ms.assetid: 51fb08ac-d632-4657-a4e0-d3f989f0b6f8
ms.openlocfilehash: 8e196bccf25667da28532248765e47906fdcee97
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141284"
---
# <a name="com-10-support-in-atl-projects"></a>Supporto di COM+ 1,0 nei progetti ATL

Per creare un progetto con supporto di base per i componenti COM+ 1,0, è possibile utilizzare la [creazione guidata progetto ATL](../../atl/reference/creating-an-atl-project.md) .

COM+ 1,0 è progettato per lo sviluppo di applicazioni distribuite basate su componenti. Fornisce inoltre un'infrastruttura di runtime per la distribuzione e la gestione di tali applicazioni.

Se si seleziona la casella di controllo **supporto COM+ 1,0** , la procedura guidata modifica lo script di compilazione nel passaggio del collegamento. In particolare, il progetto COM+ 1,0 si collega alle librerie seguenti:

- Comsvcs. lib

- Mtxguid. lib

Se si seleziona la casella di controllo **supporto COM+ 1,0** , è anche possibile selezionare **Support Component registrar**. Il registrar di componenti consente all'oggetto COM+ 1,0 di ottenere un elenco di componenti, registrare i componenti o annullare la registrazione dei componenti (singolarmente o tutti contemporaneamente).

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Programmazione con ATL e codice C Run-Time](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Configurazioni di progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
