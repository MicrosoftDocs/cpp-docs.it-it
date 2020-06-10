---
title: CWinApp e la Creazione guidata applicazione MFC
ms.date: 11/04/2016
helpviewer_keywords:
- application wizards [MFC], and CWinApp
- CWinApp class [MFC], and MFC Application Wizard
- MFC, wizards
ms.assetid: f8ac0491-3302-4e46-981d-0790624eb8a2
ms.openlocfilehash: f57b3b2b37a97093aa6d81b59a12c8cf023e3157
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84622936"
---
# <a name="cwinapp-and-the-mfc-application-wizard"></a>CWinApp e la Creazione guidata applicazione MFC

Quando crea un'applicazione Skeleton, la creazione guidata applicazione MFC dichiara una classe dell'applicazione derivata da [CWinApp](reference/cwinapp-class.md). La creazione guidata applicazione MFC genera inoltre un file di implementazione che contiene gli elementi seguenti:

- Mappa messaggi per la classe dell'applicazione.

- Costruttore di classe vuoto.

- Variabile che dichiara l'unico oggetto della classe.

- Implementazione standard della `InitInstance` funzione membro.

La classe dell'applicazione viene inserita nell'intestazione del progetto e nei file di origine principale. I nomi della classe e dei file creati sono basati sul nome del progetto fornito nella creazione guidata applicazione MFC. Il modo più semplice per visualizzare il codice per queste classi consiste nel [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code).

Le implementazioni standard e la mappa messaggi fornita sono appropriate per molti scopi, ma è possibile modificarle in base alle esigenze. L'aspetto più interessante di queste implementazioni è la `InitInstance` funzione membro. In genere, si aggiungerà codice all'implementazione scheletrica di `InitInstance` .

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](cwinapp-the-application-class.md)<br/>
[Funzioni membro CWinApp sottoponibili a override](overridable-cwinapp-member-functions.md)<br/>
[Servizi CWinApp speciali](special-cwinapp-services.md)
