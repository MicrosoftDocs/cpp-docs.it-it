---
title: CWinApp e la Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- CWinApp
helpviewer_keywords:
- application wizards [MFC], and CWinApp
- CWinApp class [MFC], and MFC Application Wizard
- MFC, wizards
ms.assetid: f8ac0491-3302-4e46-981d-0790624eb8a2
ms.openlocfilehash: cb45c8ffae15628b0b99a1ebcd962d88d845f83b
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57266263"
---
# <a name="cwinapp-and-the-mfc-application-wizard"></a>CWinApp e la Creazione guidata applicazione MFC

Durante la creazione di una struttura applicazione, la creazione guidata applicazione MFC viene dichiarata una classe dell'applicazione derivata da [CWinApp](../mfc/reference/cwinapp-class.md). La creazione guidata applicazione MFC genera anche un file di implementazione che contiene gli elementi seguenti:

- Una mappa dei messaggi per la classe dell'applicazione.

- Un costruttore di classe vuota.

- Una variabile che dichiara il l'unico oggetto della classe.

- Implementazione standard del `InitInstance` funzione membro.

La classe dell'applicazione viene inserita nell'intestazione di progetto e i file di origine principale. I nomi della classe e i file creati si basano sul nome del progetto che non è specificata la creazione guidata applicazione MFC. Il modo più semplice per visualizzare il codice per queste classi è attraverso [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code).

Le implementazioni standard e mappa dei messaggi forniti sono adeguate per molti scopi, ma è possibile modificarli in base alle esigenze. È la più interessante di queste implementazioni di `InitInstance` funzione membro. In genere, si aggiungerà codice all'implementazione di base di `InitInstance`.

## <a name="see-also"></a>Vedere anche

[CWinApp: La classe dell'applicazione](../mfc/cwinapp-the-application-class.md)<br/>
[Funzioni membro CWinApp sottoponibili a override](../mfc/overridable-cwinapp-member-functions.md)<br/>
[Servizi CWinApp speciali](../mfc/special-cwinapp-services.md)
