---
title: 'CWinApp: Classe Application'
ms.date: 11/04/2016
f1_keywords:
- CWinApp
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
ms.openlocfilehash: d9f0d4f5ba6b6b070b23ce98ecda8c7accf44934
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62241562"
---
# <a name="cwinapp-the-application-class"></a>CWinApp: Classe Application

La classe principale dell'applicazione in MFC incapsula l'inizializzazione, esecuzione e la chiusura di un'applicazione per il sistema operativo Windows. Un'applicazione basata su framework deve avere uno e un solo oggetto di una classe derivata da [CWinApp](../mfc/reference/cwinapp-class.md). Questo oggetto viene costruito prima della creazione di windows.

`CWinApp` è derivato da `CWinThread`, che rappresenta il thread principale di esecuzione per l'applicazione, che potrebbe avere uno o più thread. Nelle versioni recenti di MFC, la `InitInstance`, **eseguire**, `ExitInstance`, e `OnIdle` funzioni membro si trovano nella classe `CWinThread`. Queste funzioni sono illustrate di seguito come se fossero `CWinApp` membri, invece, perché la discussione riguarda il ruolo dell'oggetto come oggetto di applicazione anziché come thread principale.

> [!NOTE]
>  La classe dell'applicazione si intende per thread principale dell'applicazione di esecuzione. Utilizzo delle funzioni API Win32, è possibile creare anche thread secondari di esecuzione. Questi thread possono usare la libreria MFC. Per altre informazioni, vedere [Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Come con qualsiasi programma per il sistema operativo Windows, l'applicazione framework presenta un `WinMain` (funzione). In un'applicazione di framework, tuttavia, non scrivere `WinMain`. Fornito dalla libreria di classi e viene chiamato all'avvio dell'applicazione. `WinMain` esegue i servizi standard, ad esempio la registrazione di classi di finestra. Quindi chiama le funzioni membro dell'oggetto dell'applicazione da inizializzare ed eseguire l'applicazione. (È possibile personalizzare `WinMain` eseguendo l'override di `CWinApp` le funzioni membro che `WinMain` chiamate.)

Per inizializzare l'applicazione `WinMain` chiama l'oggetto di applicazione `InitApplication` e `InitInstance` funzioni membro. Per eseguire il ciclo di messaggi dell'applicazione `WinMain` chiama il **eseguire** funzione membro. Al termine, `WinMain` chiama l'oggetto di applicazione `ExitInstance` funzione membro.

> [!NOTE]
>  I nomi visualizzati nelle **grassetto** in questa documentazione indicare elementi forniti dalla libreria Microsoft Foundation Class e Visual C++. I nomi visualizzati `monospaced` tipo indicano gli elementi che si crea o si esegue l'override.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[CWinApp e la Creazione guidata applicazione MFC](../mfc/cwinapp-and-the-mfc-application-wizard.md)<br/>
[Funzioni membro CWinApp sottoponibili a override](../mfc/overridable-cwinapp-member-functions.md)<br/>
[Servizi CWinApp speciali](../mfc/special-cwinapp-services.md)
