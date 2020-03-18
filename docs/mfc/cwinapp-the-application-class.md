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
ms.openlocfilehash: 8518e21a9fa6bcf5ac640cff25b17c5028046b06
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447030"
---
# <a name="cwinapp-the-application-class"></a>CWinApp: classe Application

La classe principale dell'applicazione in MFC incapsula l'inizializzazione, l'esecuzione e la terminazione di un'applicazione per il sistema operativo Windows. Un'applicazione compilata nel Framework deve avere un solo oggetto di una classe derivata da [CWinApp](../mfc/reference/cwinapp-class.md). Questo oggetto viene costruito prima della creazione di Windows.

`CWinApp` deriva da `CWinThread`, che rappresenta il thread principale di esecuzione per l'applicazione, che potrebbe avere uno o più thread. Nelle versioni recenti di MFC, le funzioni membro `InitInstance`, **Esegui**, `ExitInstance`e `OnIdle` sono effettivamente nella classe `CWinThread`. Queste funzioni vengono illustrate qui come se fossero `CWinApp` membri, perché la discussione riguarda il ruolo dell'oggetto come oggetto applicazione anziché come thread primario.

> [!NOTE]
>  La classe dell'applicazione costituisce il thread principale di esecuzione dell'applicazione. Usando le funzioni dell'API Win32, è anche possibile creare thread secondari di esecuzione. Questi thread possono utilizzare la libreria MFC. Per ulteriori informazioni, vedere [multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Analogamente a qualsiasi programma per il sistema operativo Windows, l'applicazione Framework dispone di una funzione `WinMain`. In un'applicazione Framework, tuttavia, non si scrive `WinMain`. Viene fornito dalla libreria di classi e viene chiamato all'avvio dell'applicazione. `WinMain` esegue servizi standard come la registrazione delle classi di finestre. Chiama quindi le funzioni membro dell'oggetto applicazione per inizializzare ed eseguire l'applicazione. È possibile personalizzare `WinMain` eseguendo l'override delle funzioni membro `CWinApp` che `WinMain` chiamate.

Per inizializzare l'applicazione, `WinMain` chiama le funzioni membro `InitApplication` e `InitInstance` dell'oggetto applicazione. Per eseguire il ciclo di messaggi dell'applicazione, `WinMain` chiama la funzione membro **Run** . Alla chiusura, `WinMain` chiama la funzione membro `ExitInstance` dell'oggetto applicazione.

> [!NOTE]
>  I nomi visualizzati in **grassetto** in questa documentazione indicano gli elementi forniti dall'libreria Microsoft Foundation Class C++e dall'oggetto visivo. I nomi visualizzati in `monospaced` tipo indicano gli elementi creati o sottoposte a override.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[CWinApp e la Creazione guidata applicazione MFC](../mfc/cwinapp-and-the-mfc-application-wizard.md)<br/>
[Funzioni membro CWinApp sottoponibili a override](../mfc/overridable-cwinapp-member-functions.md)<br/>
[Servizi CWinApp speciali](../mfc/special-cwinapp-services.md)
