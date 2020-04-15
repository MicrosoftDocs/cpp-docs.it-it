---
title: 'CWinApp: classe Application'
ms.date: 11/04/2016
helpviewer_keywords:
- application class [MFC]
- CWinApp class [MFC], CWinThread
- MFC, WinMain and
- CWinApp class [MFC], multithreading
- CWinThread class [MFC], and CWinApp
- InitApplication method [MFC]
- WinMain method [MFC]
- WinMain method [MFC], in MFC
- CWinApp class [MFC], WinMain
ms.assetid: 935822bb-d463-481b-a5f6-9719d68ed1d5
ms.openlocfilehash: 007a4e53fd9b3eae612947cd76ee352776572d4f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373529"
---
# <a name="cwinapp-the-application-class"></a>CWinApp: classe Application

La classe dell'applicazione principale in MFC incapsula l'inizializzazione, l'esecuzione e la chiusura di un'applicazione per il sistema operativo Windows. Un'applicazione compilata nel framework deve avere un solo oggetto di una classe derivata da [CWinApp](../mfc/reference/cwinapp-class.md). Questo oggetto viene costruito prima della creazione delle finestre.

`CWinApp`è derivato da `CWinThread`, che rappresenta il thread principale di esecuzione per l'applicazione, che potrebbe avere uno o più thread. Nelle versioni recenti di `InitInstance`MFC, `ExitInstance`le `OnIdle` funzioni membro , `CWinThread` **Run**, , e sono effettivamente disponibili nella classe . Queste funzioni vengono descritte `CWinApp` qui come se fossero membri, perché la discussione riguarda il ruolo dell'oggetto come oggetto applicazione anziché come thread principale.

> [!NOTE]
> La classe di applicazione costituisce il thread di esecuzione principale dell'applicazione. Utilizzando le funzioni API Win32, è anche possibile creare thread secondari di esecuzione. Questi thread possono utilizzare la libreria MFC. Per ulteriori informazioni, vedere [Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Come qualsiasi programma per il sistema operativo `WinMain` Windows, l'applicazione framework ha una funzione. In un'applicazione framework, tuttavia, non si scrive `WinMain`. Viene fornito dalla libreria di classi e viene chiamato all'avvio dell'applicazione. `WinMain`esegue servizi standard, ad esempio la registrazione delle classi di finestre. Chiama quindi le funzioni membro dell'oggetto applicazione per inizializzare ed eseguire l'applicazione. È possibile `WinMain` personalizzare eseguendo `CWinApp` l'override `WinMain` delle funzioni membro chiamate.

Per inizializzare `WinMain` l'applicazione, chiama `InitApplication` `InitInstance` le funzioni membro e dell'oggetto applicazione. Per eseguire il ciclo di `WinMain` messaggi dell'applicazione, chiama la funzione membro **Run.** Al termine, `WinMain` chiama la `ExitInstance` funzione membro dell'oggetto applicazione.

> [!NOTE]
> I nomi visualizzati in **grassetto** in questa documentazione indicano gli elementi forniti dalla libreria Microsoft Foundation Class e da Visual C. I nomi `monospaced` visualizzati nel tipo indicano gli elementi creati o sottoposti a override.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[CWinApp e la Creazione guidata applicazione MFC](../mfc/cwinapp-and-the-mfc-application-wizard.md)<br/>
[Funzioni membro CWinApp sottoponibili a override](../mfc/overridable-cwinapp-member-functions.md)<br/>
[Servizi CWinApp speciali](../mfc/special-cwinapp-services.md)
